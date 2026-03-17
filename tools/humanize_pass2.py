#!/usr/bin/env python3
"""
humanize_pass2.py - Second pass of decompiler artifact cleanup.

1. Rename in_stack_* pseudo-variables to __param_N
2. Rename unaff_EBP/unaff_EBX etc. to __saved_ebp/__saved_ebx
3. Rename extraout_* to __extra_N
4. Rename in_EAX/in_ECX etc. to __reg_eax/__reg_ecx
5. Clean up "Ghidra" references in comments/headers
6. Rename LAB_XXXXXXXX to __label_XXXXXXXX
7. Clean up file header comments
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_source(content):
    """Apply pass-2 transformations."""

    # 1. Rename in_stack_XXXXXXXX to __param_XXXXXXXX
    content = re.sub(r'\bin_stack_([0-9a-f]+)\b', r'__param_\1', content)

    # 2. Rename unaff_ register variables (except __seh_chain which was already renamed)
    content = re.sub(r'\bunaff_EBP\b', '__saved_ebp', content)
    content = re.sub(r'\bunaff_EBX\b', '__saved_ebx', content)
    content = re.sub(r'\bunaff_ESI\b', '__saved_esi', content)
    content = re.sub(r'\bunaff_EDI\b', '__saved_edi', content)
    content = re.sub(r'\bunaff_retaddr\b', '__return_addr', content)

    # 3. Rename extraout_ variables
    content = re.sub(r'\bextraout_var\b', '__extra_ret', content)
    content = re.sub(r'\bextraout_([A-Z]+)\b', r'__extra_\1', content)

    # 4. Rename in_EAX etc. register pseudo-params
    content = re.sub(r'\bin_EAX\b', '__reg_eax', content)
    content = re.sub(r'\bin_ECX\b', '__reg_ecx', content)
    content = re.sub(r'\bin_EDX\b', '__reg_edx', content)

    # 5. Rename LAB_ to __label_ for readability
    content = re.sub(r'\bLAB_([0-9a-f]{8})\b', r'__label_\1', content)

    # 6. Clean up Ghidra branding in comments
    content = content.replace('/* Ghidra helper types */', '/* Helper types */')
    content = content.replace('/* Ghidra bitfield macros */', '/* Bitfield concatenation macros */')
    content = content.replace('/* Ghidra stack placeholders */', '/* Stack variable placeholders */')
    content = content.replace('Ghidra decompilation', 'decompilation')
    content = content.replace('Ghidra decompiler', 'decompiler')
    content = content.replace('Ghidra artifacts', 'decompiler artifacts')
    content = content.replace('decompilation artifacts', 'decompiler artifacts')

    # 7. Clean up file headers - make them less "auto-generated" looking
    content = re.sub(
        r'(\* Auto-generated from Ghidra decompilation of MMath\.exe\n)',
        '* Reconstructed source for MMath.exe\n',
        content
    )
    content = re.sub(
        r'Auto-generated from Ghidra decompilation of MMath\.exe',
        'Reconstructed source for MMath.exe',
        content
    )

    return content


def transform_header(content):
    """Apply to header files too."""
    return transform_source(content)


def main():
    files_changed = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath):
            continue
        if not (fname.endswith('.c') or fname.endswith('.h')):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        transformed = transform_source(original)

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            orig_lines = original.split('\n')
            new_lines = transformed.split('\n')
            changes = sum(1 for a, b in zip(orig_lines, new_lines) if a != b)
            print(f"  {fname}: {changes} lines changed")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
