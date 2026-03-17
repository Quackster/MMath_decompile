#!/usr/bin/env python3
"""
final_cleanup.py - Final cosmetic cleanup pass.

1. Rename switchD_XXXXXXXX_caseD_NNN labels to switch_NNN
2. Remove triple-blank-line patterns (keep max 2)
3. Clean up WARNING comments to be less verbose
4. Simplify goto switchD labels
5. Clean up stub function comments
6. Remove excessive blank lines between functions
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_file(content):
    """Apply final cleanup."""

    # 1. Rename switchD_XXXXXXXX_caseD_NNN -> sw_NNN
    # First collect all unique switch label bases in this file
    switch_bases = set(re.findall(r'switchD_([0-9a-f]{8})', content))
    for base in switch_bases:
        # switchD_XXXXXXXX_caseD_NNN -> sw_NNN
        content = re.sub(
            rf'switchD_{base}_caseD_([0-9a-fA-F]+)',
            r'sw_\1',
            content
        )
        # switchD_XXXXXXXX_::caseD_NNN -> sw_NNN
        content = re.sub(
            rf'switchD_{base}::caseD_([0-9a-fA-F]+)',
            r'sw_\1',
            content
        )
        # Remaining switchD_ refs
        content = content.replace(f'switchD_{base}', f'sw_{base[:4]}')

    # 2. Clean up WARNING comments - make them shorter
    content = re.sub(
        r'/\* WARNING: Globals starting with \'_\' overlap smaller symbols at the same address \*/',
        '/* NOTE: overlapping globals */',
        content
    )
    content = re.sub(
        r'/\* WARNING: .{0,100}? \*/',
        lambda m: m.group(0).replace('WARNING', 'NOTE'),
        content
    )

    # 3. Clean up stub function comments
    content = re.sub(
        r'    /\* TODO: (\d+) lines - has decompiler artifacts \*/',
        r'    /* STUB: \1 lines not yet reconstructed */',
        content
    )

    # 4. Remove triple+ blank lines (keep max double)
    content = re.sub(r'\n{4,}', '\n\n\n', content)

    # 5. Clean up "Function: FUN_" comments - less verbose
    # Keep the address but make it more compact
    content = re.sub(
        r'/\* Function: (FUN_[0-9a-f]+) @ (0x[0-9a-f]+) \*/',
        r'/* \1 @ \2 */',
        content
    )
    content = re.sub(
        r'/\* Function: (FUN_[0-9a-f]+) @ (0x[0-9a-f]+)\n',
        r'/* \1 @ \2\n',
        content
    )

    return content


def main():
    files_changed = 0
    total_changes = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath) or not fname.endswith('.c'):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        transformed = transform_file(original)

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            changes = sum(1 for a, b in zip(original.split('\n'), transformed.split('\n')) if a != b)
            total_changes += changes
            print(f"  {fname}: {changes} lines changed")

    print(f"\n{files_changed} files modified, {total_changes} total lines changed")


if __name__ == '__main__':
    main()
