#!/usr/bin/env python3
"""
humanize_pass7.py - Clean remaining type-prefixed variable names.

1. DVar1 -> dw1 (DWORD vars)
2. pCVar1 -> str1 (char* vars)
3. HVar1 -> h1 (HANDLE vars)
4. BVar1 -> flag1 was already done, but check
5. Remove duplicate consecutive function header comments
6. Clean remaining (HDC)0x0 style patterns
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_source(content):
    # 1. Type-prefixed variable renames
    # DVar -> dw (DWORD)
    content = re.sub(r'\bDVar(\d+)\b', r'dw\1', content)
    # pCVar -> str (pointer to char)
    content = re.sub(r'\bpCVar(\d+)\b', r'str\1', content)
    # HVar -> hw (HANDLE/HWND)
    content = re.sub(r'\bHVar(\d+)\b', r'hw\1', content)
    # ppvVar -> ppv already done, but check
    content = re.sub(r'\bppvVar(\d+)\b', r'ppv\1', content)
    # AVar -> a (ATOM)
    content = re.sub(r'\bAVar(\d+)\b', r'a\1', content)
    # WVar -> w (WORD)
    content = re.sub(r'\bWVar(\d+)\b', r'w\1', content)
    # SVar -> sz (SIZE)
    content = re.sub(r'\bSVar(\d+)\b', r'sz\1', content)
    # lVar -> l (LONG)
    content = re.sub(r'\blVar(\d+)\b', r'l\1', content)

    # 2. Remove duplicate function header comments
    # Pattern: /* FUN_XXXXX @ 0xXXXXX */\n\n/* FUN_XXXXX @ 0xXXXXX\n -> keep only second
    content = re.sub(
        r'/\* (FUN_[0-9a-f]+ @ 0x[0-9a-f]+) \*/\n\n/\* \1\n',
        r'/* \1\n',
        content
    )

    # 3. Clean remaining (HDC)0x0 -> NULL
    content = re.sub(r'\(HDC\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HFONT\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HWND\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HGDIOBJ\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HBRUSH\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HPEN\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HBITMAP\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HINSTANCE\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HANDLE\)0x0\b', 'NULL', content)
    content = re.sub(r'\(HMENU\)0x0\b', 'NULL', content)
    content = re.sub(r'\(LRESULT\)0x0\b', '0', content)

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
            print(f"  {fname}: {changes} lines")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
