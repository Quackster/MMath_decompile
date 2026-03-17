#!/usr/bin/env python3
"""
Fix Ghidra '*(TYPE *)((int)this + offset)' decompilation artifacts.
Replaces ugly pointer arithmetic with THIS() and THIS_ADDR() macro calls.

Adds two macros to ghidra_types.h:
  THIS(T, off)    - typed field access at byte offset from this
  THIS_ADDR(off)  - void pointer to byte offset from this

Usage: python fix_this_fields.py [src_dir]
"""

import re
import sys
import os
import glob


# Simple offset: no parentheses allowed (covers 99%+ of cases)
SIMPLE_OFF = r'[^()]+'

# Complex offset: allows balanced parentheses up to 3 levels deep
# (needed after pass 1 inserts THIS() calls into offset expressions)
COMPLEX_OFF = r'(?:[^()]|\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\))+'


def build_forward_patterns(offset_re):
    """Build replacement patterns for ((int)this + OFFSET) form."""
    patterns = []

    # 1. Double deref: **(T **)((int)this + OFF) -> *THIS(T *, OFF)
    patterns.append((
        re.compile(r'\*\*\(\s*(\w+)\s*\*\*\s*\)\(\(int\)this\s*\+\s*(' + offset_re + r')\)'),
        lambda m: '*THIS({} *, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 2. Single deref of ptr-ptr: *(T **)((int)this + OFF) -> THIS(T *, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\*\s*\)\(\(int\)this\s*\+\s*(' + offset_re + r')\)'),
        lambda m: 'THIS({} *, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 3. Single deref: *(T *)((int)this + OFF) -> THIS(T, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\s*\)\(\(int\)this\s*\+\s*(' + offset_re + r')\)'),
        lambda m: 'THIS({}, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 4. Non-deref cast: (T *+)((int)this + OFF) -> (T *+)THIS_ADDR(OFF)
    patterns.append((
        re.compile(r'(?<!\*)\(\s*(\w+)\s*(\*+)\s*\)\(\(int\)this\s*\+\s*(' + offset_re + r')\)'),
        lambda m: '({} {})THIS_ADDR({})'.format(m.group(1), m.group(2), m.group(3).strip())
    ))

    return patterns


def build_inverted_patterns(offset_re):
    """Build replacement patterns for (OFFSET + (int)this) form."""
    # Use lazy quantifier for offset to find the + closest to (int)this
    lazy_off = offset_re + '?'
    patterns = []

    # 5. Double deref inverted: **(T **)(OFF + (int)this) -> *THIS(T *, OFF)
    patterns.append((
        re.compile(r'\*\*\(\s*(\w+)\s*\*\*\s*\)\((' + lazy_off + r')\s*\+\s*\(int\)this\s*\)'),
        lambda m: '*THIS({} *, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 6. Single deref of ptr-ptr inverted: *(T **)(OFF + (int)this) -> THIS(T *, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\*\s*\)\((' + lazy_off + r')\s*\+\s*\(int\)this\s*\)'),
        lambda m: 'THIS({} *, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 7. Single deref inverted: *(T *)(OFF + (int)this) -> THIS(T, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\s*\)\((' + lazy_off + r')\s*\+\s*\(int\)this\s*\)'),
        lambda m: 'THIS({}, {})'.format(m.group(1), m.group(2).strip())
    ))

    # 8. Non-deref cast inverted: (T *+)(OFF + (int)this) -> (T *+)THIS_ADDR(OFF)
    patterns.append((
        re.compile(r'(?<!\*)\(\s*(\w+)\s*(\*+)\s*\)\((' + lazy_off + r')\s*\+\s*\(int\)this\s*\)'),
        lambda m: '({} {})THIS_ADDR({})'.format(m.group(1), m.group(2), m.group(3).strip())
    ))

    return patterns


def apply_patterns(content, patterns):
    """Apply a set of patterns to content, return (new_content, changed)."""
    changed = False
    for regex, replacement_fn in patterns:
        new_content = regex.sub(replacement_fn, content)
        if new_content != content:
            changed = True
            content = new_content
    return content, changed


def build_subtraction_patterns(offset_re):
    """Build patterns for ((int)this - OFFSET) form (negative offsets)."""
    patterns = []

    # *(T *)((int)this - OFF) -> THIS(T, -(int)(OFF))
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\s*\)\(\(int\)this\s*-\s*(' + offset_re + r')\)'),
        lambda m: 'THIS({}, -(int)({}))'.format(m.group(1), m.group(2).strip())
    ))

    return patterns


def build_this_00_patterns(offset_re):
    """Build patterns for *(TYPE *)((int)this_00 + OFFSET) using FIELD() macro."""
    patterns = []

    # **(T **)((int)this_00 + OFF) -> *FIELD(this_00, T *, OFF)
    patterns.append((
        re.compile(r'\*\*\(\s*(\w+)\s*\*\*\s*\)\(\(int\)(this_\d+)\s*\+\s*(' + offset_re + r')\)'),
        lambda m: '*FIELD({}, {} *, {})'.format(m.group(2), m.group(1), m.group(3).strip())
    ))

    # *(T **)((int)this_00 + OFF) -> FIELD(this_00, T *, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\*\s*\)\(\(int\)(this_\d+)\s*\+\s*(' + offset_re + r')\)'),
        lambda m: 'FIELD({}, {} *, {})'.format(m.group(2), m.group(1), m.group(3).strip())
    ))

    # *(T *)((int)this_00 + OFF) -> FIELD(this_00, T, OFF)
    patterns.append((
        re.compile(r'(?<!\*)\*\(\s*(\w+)\s*\*\s*\)\(\(int\)(this_\d+)\s*\+\s*(' + offset_re + r')\)'),
        lambda m: 'FIELD({}, {}, {})'.format(m.group(2), m.group(1), m.group(3).strip())
    ))

    return patterns


def fix_this_patterns(content):
    """Replace all (int)this field access patterns with THIS() macros."""

    # Pass 1: Simple offsets (no parens) - handles the vast majority
    simple_fwd = build_forward_patterns(SIMPLE_OFF)
    simple_inv = build_inverted_patterns(SIMPLE_OFF)
    simple_sub = build_subtraction_patterns(SIMPLE_OFF)
    simple_00 = build_this_00_patterns(SIMPLE_OFF)
    all_simple = simple_fwd + simple_inv + simple_sub + simple_00

    for _ in range(5):
        content, changed = apply_patterns(content, all_simple)
        if not changed:
            break

    # Pass 2: Complex offsets (with balanced parens from prior THIS() insertions)
    complex_fwd = build_forward_patterns(COMPLEX_OFF)
    complex_inv = build_inverted_patterns(COMPLEX_OFF)
    complex_sub = build_subtraction_patterns(COMPLEX_OFF)
    complex_00 = build_this_00_patterns(COMPLEX_OFF)
    all_complex = complex_fwd + complex_inv + complex_sub + complex_00

    for _ in range(3):
        content, changed = apply_patterns(content, all_complex)
        if not changed:
            break

    return content


def add_macros_to_header(types_path):
    """Add THIS() and THIS_ADDR() macros to ghidra_types.h."""
    with open(types_path, 'r') as f:
        content = f.read()

    if '#define THIS(' in content:
        return False

    macro_block = (
        '\n'
        '/* Struct field access macros for decompiled this-pointer offsets */\n'
        '#define THIS(T, off)     (*(T *)((char *)(this) + (off)))\n'
        '#define THIS_ADDR(off)   ((void *)((char *)(this) + (off)))\n'
        '\n'
    )

    content = content.replace(
        '#endif /* GHIDRA_TYPES_H */',
        macro_block + '#endif /* GHIDRA_TYPES_H */'
    )

    with open(types_path, 'w') as f:
        f.write(content)

    return True


def main():
    src_dir = sys.argv[1] if len(sys.argv) > 1 else 'src'

    # Add macros to types header
    types_path = os.path.join(src_dir, 'ghidra_types.h')
    if os.path.exists(types_path):
        if add_macros_to_header(types_path):
            print('[+] Added THIS/THIS_ADDR macros to ghidra_types.h')
        else:
            print('[=] Macros already present in ghidra_types.h')

    # Process all C source files
    c_files = sorted(glob.glob(os.path.join(src_dir, '*.c')))
    total_before = 0
    total_after = 0

    print('\n{:25s} {:>10s} {:>10s}'.format('File', 'Replaced', 'Remaining'))
    print('-' * 47)

    for filepath in c_files:
        with open(filepath, 'r') as f:
            original = f.read()

        before_count = original.count('(int)this')
        fixed = fix_this_patterns(original)
        after_count = fixed.count('(int)this')

        total_before += before_count
        total_after += after_count

        if fixed != original:
            with open(filepath, 'w') as f:
                f.write(fixed)
            replaced = before_count - after_count
            print('{:25s} {:10d} {:10d}'.format(os.path.basename(filepath), replaced, after_count))
        else:
            if before_count > 0:
                print('{:25s} {:10d} {:10d}'.format(os.path.basename(filepath), 0, before_count))
            else:
                print('{:25s} {:>10s} {:>10s}'.format(os.path.basename(filepath), '-', '-'))

    total_replaced = total_before - total_after
    print('-' * 47)
    print('{:25s} {:10d} {:10d}'.format('TOTAL', total_replaced, total_after))
    print('\n[+] Done! {} of {} (int)this patterns replaced'.format(total_replaced, total_before))
    if total_after > 0:
        print('    {} remaining are bare (int)this in function calls and arithmetic'.format(total_after))


if __name__ == '__main__':
    main()
