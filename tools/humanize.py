#!/usr/bin/env python3
"""
humanize.py - Make decompiled source look more human-written.

Mechanical transformations:
1. Rename SEH boilerplate variables to descriptive names
2. Simplify SEH state machine bit manipulation patterns
3. Replace ghidra_stack_* with local temp variables
4. Clean up undefined4 in header files
"""

import re
import os
import sys

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')

# =============================================================================
# 1. SEH Variable Renaming
# =============================================================================

SEH_VAR_RENAMES = [
    # (pattern, replacement) - applied in order
    # Variable declarations
    (r'\bint \*unaff_FS_OFFSET\b', 'int *__seh_chain'),
    (r'\bvoid \*puStack_c\b', 'void *__seh_handler'),
    # References
    (r'\bunaff_FS_OFFSET\b', '__seh_chain'),
    (r'\bpuStack_c\b', '__seh_handler'),
]

# =============================================================================
# 2. SEH State Machine Simplification
# =============================================================================

SEH_STATE_PATTERNS = [
    # local_8 = (local_8 & ~0xFF) | ((unsigned char)(N));
    # → __seh_state = (__seh_state & ~0xFF) | N;
    (r'(\w+) = \(\1 & ~0xFF\) \| \(\(unsigned char\)\((\w+)\)\);',
     r'\1 = (\1 & ~0xFF) | \2;'),

    # local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(N) & 0xFFFFFF) << 8);
    # → __seh_state = (__seh_state & 0xFF) | (N << 8);
    (r'(\w+) = \(\1 & ~\(0xFFFFFF << 8\)\) \| \(\(\(unsigned int\)\((\w+)\) & 0xFFFFFF\) << 8\);',
     r'\1 = (\1 & 0xFF) | (\2 << 8);'),

    # local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    # → __seh_state &= ~0xFF;
    (r'(\w+) = \(uint\)\(\(\(\1\) >> 8\) & 0xFFFFFF\) << 8;',
     r'\1 &= ~0xFF;'),
]

# =============================================================================
# 3. Ghidra stack placeholder renaming
# =============================================================================

def build_stack_rename_map():
    """Build a map from ghidra_stack_XXXXXXXX to __stk_N."""
    # Collect all unique ghidra_stack names from source files
    names = set()
    for fname in os.listdir(SRC_DIR):
        if fname.endswith('.c') or fname.endswith('.h'):
            with open(os.path.join(SRC_DIR, fname), 'r') as f:
                content = f.read()
            for m in re.finditer(r'\bghidra_stack_([0-9a-f]+)\b', content):
                names.add(m.group(0))

    # Sort by offset for consistent numbering
    sorted_names = sorted(names)
    return {name: f'__stk_{i}' for i, name in enumerate(sorted_names)}


# =============================================================================
# 4. Cleanup undefined4 in headers
# =============================================================================

def clean_header_types(content):
    """Replace undefined types in header declarations."""
    content = re.sub(r'\bundefined4\b', 'int', content)
    content = re.sub(r'\bundefined2\b', 'short', content)
    content = re.sub(r'\bundefined1\b', 'char', content)
    content = re.sub(r'\bundefined\b', 'char', content)
    return content


# =============================================================================
# Main transformation
# =============================================================================

def transform_source(content, stack_map):
    """Apply all transformations to a source file."""
    # 1. SEH variable renaming
    for pattern, replacement in SEH_VAR_RENAMES:
        content = re.sub(pattern, replacement, content)

    # 2. SEH state machine simplification
    for pattern, replacement in SEH_STATE_PATTERNS:
        content = re.sub(pattern, replacement, content)

    # 3. Replace ghidra_stack references
    for old_name, new_name in sorted(stack_map.items(), key=lambda x: -len(x[0])):
        content = content.replace(old_name, new_name)

    return content


def main():
    stack_map = build_stack_rename_map()
    print(f"Found {len(stack_map)} unique ghidra_stack variables")

    files_changed = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        if fname.endswith('.c'):
            transformed = transform_source(original, stack_map)
        elif fname == 'ghidra_globals.h':
            transformed = transform_source(original, stack_map)
            transformed = clean_header_types(transformed)
        elif fname == 'ghidra_funcs.h':
            transformed = clean_header_types(original)
        elif fname == 'ghidra_types.h':
            transformed = original  # leave as-is, defines the base types
        else:
            transformed = original

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            # Count changes
            orig_lines = original.split('\n')
            new_lines = transformed.split('\n')
            changes = sum(1 for a, b in zip(orig_lines, new_lines) if a != b)
            print(f"  {fname}: {changes} lines changed")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
