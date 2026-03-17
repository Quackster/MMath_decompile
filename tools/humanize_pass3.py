#!/usr/bin/env python3
"""
humanize_pass3.py - Rename ghidra headers and clean remaining references.
"""

import os
import re

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')

REPLACEMENTS = [
    # Header includes
    ('"ghidra_types.h"', '"types.h"'),
    ('"ghidra_funcs.h"', '"funcs.h"'),
    ('"ghidra_globals.h"', '"globals.h"'),
    # Include guards
    ('GHIDRA_TYPES_H', 'TYPES_H'),
    ('GHIDRA_FUNCS_H', 'FUNCS_H'),
    ('GHIDRA_GLOBALS_H', 'GLOBALS_H'),
    # Type/identifier prefixes
    ('ghidra_func_ptr', 'callback_ptr'),
    ('ghidra_func_4879', 'void_callback'),
    # Comment cleanup
    ('/* Ghidra ', '/* '),
    (' Ghidra ', ' '),
]

def main():
    files_changed = 0
    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath):
            continue
        if not (fname.endswith('.c') or fname.endswith('.h')):
            continue

        with open(fpath, 'r') as f:
            content = f.read()

        original = content
        for old, new in REPLACEMENTS:
            content = content.replace(old, new)

        if content != original:
            with open(fpath, 'w') as f:
                f.write(content)
            files_changed += 1
            print(f"  {fname}")

    print(f"\n{files_changed} files modified")

if __name__ == '__main__':
    main()
