#!/usr/bin/env python3
"""
humanize_pass4.py - Deep humanization pass.

1. Replace double-underscore prefixes with cleaner names
2. Collapse empty functions to one-liners
3. Add SEH comment annotations
4. Clean up _stk_N naming
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_source(content):
    """Apply deep humanization."""

    # 1. Clean up double-underscore prefixed names
    content = content.replace('__seh_chain', '_fs')
    content = content.replace('__seh_handler', '_handler')
    content = content.replace('__saved_ebp', '_ebp')
    content = content.replace('__saved_ebx', '_ebx')
    content = content.replace('__saved_esi', '_esi')
    content = content.replace('__saved_edi', '_edi')
    content = content.replace('__return_addr', '_retaddr')
    content = content.replace('__extra_ret', '_extra')
    content = content.replace('__extra_ECX', '_extra_ecx')
    content = content.replace('__extra_EDX', '_extra_edx')
    content = content.replace('__extra_EAX', '_extra_eax')
    content = content.replace('__reg_eax', '_eax')
    content = content.replace('__reg_ecx', '_ecx')
    content = content.replace('__reg_edx', '_edx')

    # __label_ -> L_ (much shorter, like compiler-generated labels)
    content = re.sub(r'__label_([0-9a-f]{8})', r'L_\1', content)

    # __param_ -> _p_ (shorter)
    content = re.sub(r'__param_([0-9a-f]+)', r'_p_\1', content)

    # __stk_N -> _tmp_N
    content = re.sub(r'__stk_(\d+)', r'_tmp_\1', content)

    # 2. Collapse empty functions to one-liners
    # Pattern: void FUN_XXXXXXXX(void)\n\n{\n  return;\n}
    content = re.sub(
        r'(void FUN_[0-9a-f]+\(void\))\n\n\{\n  return;\n\}',
        r'\1 { return; }',
        content
    )
    # Same for int return
    content = re.sub(
        r'(int FUN_[0-9a-f]+\(void\))\n\n\{\n  return 0;\n\}',
        r'\1 { return 0; }',
        content
    )

    # 3. Add SEH block comments for prolog/epilog
    # Annotate the SEH prolog pattern
    content = re.sub(
        r'(  loc_10 = \*_fs;\n  (?:loc_8 = 0xffffffff;\n  )?_handler = &L_[0-9a-f]+;\n  \*_fs = &loc_10;)',
        r'  /* SEH prolog */\n\1',
        content
    )
    # Annotate the SEH epilog
    content = re.sub(
        r'(  \*_fs = loc_10;\n  return;)',
        r'  /* SEH epilog */\n\1',
        content
    )

    # 4. Clean up redundant blank lines around collapsed functions
    content = re.sub(r'\n{3,}', '\n\n\n', content)

    return content


def transform_header(content):
    """Apply to headers."""
    content = content.replace('__stk_', '_tmp_')
    return content


def main():
    files_changed = 0
    total_changes = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath):
            continue
        if not (fname.endswith('.c') or fname.endswith('.h')):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        if fname.endswith('.c'):
            transformed = transform_source(original)
        else:
            transformed = transform_header(original)

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            orig_lines = set(enumerate(original.split('\n')))
            new_lines = set(enumerate(transformed.split('\n')))
            changes = len(orig_lines.symmetric_difference(new_lines)) // 2
            total_changes += changes
            print(f"  {fname}: ~{changes} lines changed")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
