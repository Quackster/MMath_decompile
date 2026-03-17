#!/usr/bin/env python3
"""
convert_offsets.py - Convert ALL remaining pointer+offset patterns to struct->field access.

Handles:
1. CVector child_list access: *(int *)(child_list_2 + 0x04) -> ((CVector *)child_list_2)->data
2. CVector count access: *(uint *)(child_list_2 + 0x0e) -> ((CVector *)child_list_2)->count
3. DAT_004897c0 -> cast as UIWidget* and use field names
4. DAT_0048345c -> cast as GameSession* and use field names
5. SmartHeap pool offsets -> SmartHeapPool field names
6. Remaining UIWidget/GameWidget/GameBoard offsets on typed params
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')

# CVector field map (offsets -> field names)
CVECTOR_FIELDS = {
    0x04: 'data',
    0x08: 'capacity',
    0x0E: 'count',
}

# DAT_004897c0 is a global UIWidget* pointer - map offsets to UIWidget/GameWidget fields
DAT_004897c0_FIELDS = {
    0x1E: 'rect_top',
    0x20: 'rect_left',
    0x22: 'rect_bottom',
    0x24: 'rect_right',
    0x43: '_pad42[1]',
    0x44: '_pad42[2]',   # used as pointer to active focus widget
    0x4a: 'sub_widgets_a[1]',
    0x52: 'sub_widgets_a[3]',
}

# DAT_0048345c is a GameSession* pointer
DAT_0048345c_FIELDS = {
    0x3A: 'child_list',
    0x42: 'field_42',
    0x44: '_pad43[1]',
    0x45: 'decimal_flag',
    0x47: 'fraction_flag',
    0x48: 'display_flags',
    0x90: 'level_mode',
    0x92: 'score_display',
    0x96: 'field_96',
    0x9C: 'field_9c',
    0x9E: 'field_9e',
    0xAA: 'total_count',
    0xB6: 'correct_count',
    0xC2: 'wrong_count',
    0xE8: 'field_e8',
    0xEA: 'scroll_origin',
    0xF0: 'field_f0',
    0xF2: 'field_f2',
    0xF3: 'field_f3',
    0xF4: 'field_f4',
    0xF5: 'field_f5',
}


def convert_cvector_access(content):
    """Convert child_list + offset patterns to CVector struct access."""
    # Pattern: *(type *)(child_list_N + 0xNN) or *(type *)((int)X->child_list_N + 0xNN)
    for field_name in ['child_list_1', 'child_list_2']:
        for offset, member in CVECTOR_FIELDS.items():
            hex_off = f'0x{offset:x}'
            # *(type *)((int)this->child_list_N + 0xNN)
            content = re.sub(
                rf'\*\((\w+ \*+)\)\(\(int\)(\w+)->{field_name} \+ {hex_off}\)',
                rf'((CVector *)\2->{field_name})->{member}',
                content
            )
            # *(type *)(this->child_list_N + 0xNN)
            content = re.sub(
                rf'\*\((\w+ \*+)\)\((\w+)->{field_name} \+ {hex_off}\)',
                rf'((CVector *)\2->{field_name})->{member}',
                content
            )
            # *(type *)((int)param_1->{field_name} + 0xNN)
            content = re.sub(
                rf'\*\((\w+ \*+)\)\(\(int\)(\w+)->{field_name} \+ {hex_off}\)',
                rf'((CVector *)\2->{field_name})->{member}',
                content
            )

    return content


def convert_dat_access(content, dat_name, field_map, cast_type):
    """Convert DAT_XXXXXXXX + offset patterns to struct access."""
    for offset, member in sorted(field_map.items(), reverse=True):
        hex_off = f'0x{offset:x}'
        # *(type *)((int)DAT_XXX + 0xNN)
        content = re.sub(
            rf'\*\((\w+ \*+)\)\(\(int\){dat_name} \+ {hex_off}\)',
            rf'(({cast_type} *){dat_name})->{member}',
            content
        )
        # *(type *)(DAT_XXX + 0xNN)
        content = re.sub(
            rf'\*\((\w+ \*+)\)\({dat_name} \+ {hex_off}\)',
            rf'(({cast_type} *){dat_name})->{member}',
            content
        )

    return content


def convert_cvector_pattern_lines(content):
    """Convert CVector patterns that appear as (ptr + 4) and (ptr + 0xe) in various forms."""
    # Common pattern: **(int **)(child_list + 4) -> ((CVector *)child_list)->data
    # *(uint *)(child_list + 0xe) -> ((CVector *)child_list)->count

    # Handle: *(int/uint *)(XXX->child_list_N + 0xe)  (no (int) cast)
    for field_name in ['child_list_1', 'child_list_2']:
        content = re.sub(
            rf'\*\(uint \*\)\((\w+)->{field_name} \+ 0xe\)',
            rf'((CVector *)\1->{field_name})->count',
            content
        )
        content = re.sub(
            rf'\*\(int \*\)\((\w+)->{field_name} \+ 0xe\)',
            rf'(int)((CVector *)\1->{field_name})->count',
            content
        )
        # **(int **)(child_list + 4)
        content = re.sub(
            rf'\*\*\(int \*\*\)\((\w+)->{field_name} \+ 4\)',
            rf'*(int *)((CVector *)\1->{field_name})->data[0]',
            content
        )
        content = re.sub(
            rf'\*\*\(int \*\*\)\(\(int\)(\w+)->{field_name} \+ 4\)',
            rf'*(int *)((CVector *)\1->{field_name})->data[0]',
            content
        )

    return content


def main():
    files_changed = 0
    total_before = 0
    total_after = 0

    for fname in sorted(os.listdir(SRC_DIR)):
        fpath = os.path.join(SRC_DIR, fname)
        if not os.path.isfile(fpath) or not fname.endswith('.c'):
            continue

        with open(fpath, 'r') as f:
            original = f.read()

        before = len(re.findall(r'\+ 0x[0-9a-fA-F]', original))
        total_before += before

        transformed = original
        transformed = convert_cvector_access(transformed)
        transformed = convert_cvector_pattern_lines(transformed)
        transformed = convert_dat_access(transformed, 'DAT_004897c0', DAT_004897c0_FIELDS, 'UIWidget')
        transformed = convert_dat_access(transformed, 'DAT_0048345c', DAT_0048345c_FIELDS, 'GameSession')

        after = len(re.findall(r'\+ 0x[0-9a-fA-F]', transformed))
        total_after += after

        if transformed != original:
            with open(fpath, 'w') as f:
                f.write(transformed)
            files_changed += 1
            print(f"  {fname}: {before} -> {after} offset patterns ({before - after} converted)")

    print(f"\n{files_changed} files modified")
    print(f"Total: {total_before} -> {total_after} ({total_before - total_after} converted)")


if __name__ == '__main__':
    main()
