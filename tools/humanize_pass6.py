#!/usr/bin/env python3
"""
humanize_pass6.py - Clean up remaining decompiler-looking patterns.

1. Rename _p_ffffffNN hex param names to _pN
2. Remove trailing "return;" from void functions (where it's the last stmt)
3. Remove "(type *)0x0" patterns -> NULL where applicable
4. Remove unnecessary cast of 0 -> (type *)0x0
5. Clean up file header "Reconstructed source" -> simpler
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_source(content):
    """Clean up remaining decompiler patterns."""

    # 1. Rename _p_ffffffXX to _argN (collect unique ones first)
    p_names = sorted(set(re.findall(r'_p_([0-9a-f]{4,})', content)))
    for i, hex_name in enumerate(p_names):
        content = content.replace(f'_p_{hex_name}', f'_arg{i+1}')

    # 2. Remove trailing "return;" from void functions
    # Pattern: "  return;\n}" at end of function where function is void
    # Only remove when return; is the last statement (preceded by another statement)
    content = re.sub(
        r'(\n  [^\n]+;)\n  return;\n\}',
        r'\1\n}',
        content
    )

    # 3. Clean up (type *)0x0 -> NULL for common pointer types
    content = re.sub(r'\(int \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(void \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(short \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(char \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(ushort \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(uint \*\)0x0\b', 'NULL', content)
    # Common Win32 casts
    content = re.sub(r'\(LPPOINT\)0x0\b', 'NULL', content)
    content = re.sub(r'\(INT \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(RECT \*\)0x0\b', 'NULL', content)
    content = re.sub(r'\(LPCVOID\)0x0\b', 'NULL', content)

    # 4. Clean up != (type *)0x0 -> != NULL
    content = re.sub(r'!= \(([A-Za-z_]+ \*)\)0x0\b', '!= NULL', content)
    content = re.sub(r'== \(([A-Za-z_]+ \*)\)0x0\b', '== NULL', content)

    # 5. Clean up file header
    content = content.replace(
        ' * Reconstructed source for MMath.exe\n',
        ' * Part of MMath (Educational Math Game, ~1995)\n'
    )

    return content


def main():
    files_changed = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath) or not fname.endswith('.c'):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        transformed = transform_source(original)

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            changes = sum(1 for a, b in zip(original.split('\n'), transformed.split('\n')) if a != b)
            print(f"  {fname}: {changes} lines changed")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
