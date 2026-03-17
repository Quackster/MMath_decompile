#!/usr/bin/env python3
"""
rename_vars.py - Rename decompiler-generated variable names to shorter forms.

iVar1 -> n1, iVar2 -> n2 (integer temporaries)
uVar1 -> u1, uVar2 -> u2 (unsigned temporaries)
sVar1 -> s1, sVar2 -> s2 (short temporaries)
cVar1 -> c1, cVar2 -> c2 (char temporaries)
bVar1 -> b1, bVar2 -> b2 (bool temporaries)
piVar1 -> pn1, piVar2 -> pn2 (int pointers)
puVar1 -> pu1, puVar2 -> pu2 (unsigned pointers)
pcVar1 -> pc1, pcVar2 -> pc2 (char pointers)
pvVar1 -> pv1, pvVar2 -> pv2 (void pointers)
ppvVar1 -> ppv1 (void** pointers)
BVar1 -> flag1 (BOOL temporaries)
local_NN -> loc_NN (local variables - shorter)
this_00 -> self (renamed 'this' duplicate)
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')

# Patterns: (regex, replacement_template)
# These use word boundaries to avoid partial matches
VAR_PATTERNS = [
    # Pointer types first (longer prefixes match first)
    (r'\bppvVar(\d+)\b', r'ppv\1'),
    (r'\bppiVar(\d+)\b', r'ppn\1'),
    (r'\bppuVar(\d+)\b', r'ppu\1'),
    (r'\bpiVar(\d+)\b', r'pn\1'),
    (r'\bpuVar(\d+)\b', r'pu\1'),
    (r'\bpcVar(\d+)\b', r'pc\1'),
    (r'\bpvVar(\d+)\b', r'pv\1'),
    (r'\bpsVar(\d+)\b', r'ps\1'),
    (r'\bpbVar(\d+)\b', r'pb\1'),
    # Value types
    (r'\biVar(\d+)\b', r'n\1'),
    (r'\buVar(\d+)\b', r'u\1'),
    (r'\bsVar(\d+)\b', r's\1'),
    (r'\bcVar(\d+)\b', r'c\1'),
    (r'\bbVar(\d+)\b', r'b\1'),
    (r'\bBVar(\d+)\b', r'flag\1'),
    (r'\bdVar(\d+)\b', r'd\1'),
    (r'\bfVar(\d+)\b', r'f\1'),
    # this_00 -> self (Ghidra's renamed 'this')
    (r'\bthis_00\b', r'self'),
    # local_ -> loc_ (shorter)
    (r'\blocal_([0-9a-f]+)\b', r'loc_\1'),
]


def transform_file(content):
    """Apply variable renames."""
    for pattern, replacement in VAR_PATTERNS:
        content = re.sub(pattern, replacement, content)
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
            orig_lines = original.split('\n')
            new_lines = transformed.split('\n')
            changes = sum(1 for a, b in zip(orig_lines, new_lines) if a != b)
            total_changes += changes
            print(f"  {fname}: {changes} lines changed")

    print(f"\n{files_changed} files modified, {total_changes} total lines changed")


if __name__ == '__main__':
    main()
