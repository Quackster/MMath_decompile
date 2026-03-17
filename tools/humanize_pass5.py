#!/usr/bin/env python3
"""
humanize_pass5.py - Final polish.

1. Rename SEH locals: loc_10 -> _seh_prev, loc_8 -> _seh_state (only when used in SEH context)
2. Remove blank line before opening brace in function definitions
3. Remove trailing "return;" at end of void functions where it's the only statement after cleanup
4. Clean up "loc_" prefixed variables to more natural names
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'src')


def transform_source(content):
    """Final polish transformations."""

    # 1. Remove blank line between function signature and opening brace
    # Pattern: ")\n\n{" -> ")\n{"
    content = re.sub(r'\)\n\n\{', ')\n{', content)

    # 2. In SEH contexts, rename loc_10/loc_8 to cleaner names
    # We do this function-by-function to avoid renaming non-SEH locals
    # Find functions that contain the SEH pattern
    lines = content.split('\n')
    result_lines = []
    in_function = False
    func_lines = []
    brace_depth = 0

    for line in lines:
        if not in_function:
            # Detect function start
            if re.match(r'^(\w|[*\s])', line) and '{' not in line and '(' in line and ')' in line and '#' not in line and '/*' not in line and '//' not in line:
                func_lines = [line]
                in_function = True
                brace_depth = 0
                continue
            elif line.strip() == '{' and func_lines:
                func_lines.append(line)
                brace_depth = 1
                in_function = True
                continue
            result_lines.append(line)
        else:
            func_lines.append(line)
            brace_depth += line.count('{') - line.count('}')
            if brace_depth <= 0:
                # End of function - process it
                func_text = '\n'.join(func_lines)
                # Check if this is an SEH function
                if '_fs' in func_text and 'loc_10 = *_fs' in func_text:
                    # Rename SEH locals in this function
                    func_text = func_text.replace('loc_10', '_seh_prev')
                    func_text = func_text.replace('loc_8', '_seh_state')
                result_lines.extend(func_text.split('\n'))
                func_lines = []
                in_function = False

    # Handle any remaining lines
    if func_lines:
        result_lines.extend(func_lines)

    content = '\n'.join(result_lines)

    # 3. Simplify remaining loc_ names
    # loc_14 -> v14, loc_1c -> v1c, etc. (local stack variables)
    content = re.sub(r'\bloc_([0-9a-f]{1,2})\b', r'v\1', content)
    # Keep loc_ for larger offsets (3+ hex digits) - those are distinct
    content = re.sub(r'\bloc_([0-9a-f]{3,})\b', r'v\1', content)

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
            print(f"  {fname}")

    print(f"\n{files_changed} files modified")


if __name__ == '__main__':
    main()
