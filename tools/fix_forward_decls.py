"""
Scans .c files in src/ for __thiscall function definitions with typed 'this'
parameters and updates the corresponding forward declarations in ghidra_funcs.h
to match.
"""

import re
import os
import glob

SRC_DIR = os.path.join(os.path.dirname(__file__), '..', 'src')
HEADER_PATH = os.path.join(SRC_DIR, 'ghidra_funcs.h')

STRUCT_TYPES = {
    'MathProblem', 'UIElement', 'UIWidget', 'GameWidget', 'GameBoard',
    'GameScreen', 'CString', 'DialogWidget', 'TextDisplay', 'SoundPlayer',
}

# Pattern to match __thiscall function definitions in .c files
# Captures: return_type, function_name, first_param_type
# e.g. "void __thiscall FUN_0044f840(MathProblem *this,int param_1)"
FUNC_DEF_RE = re.compile(
    r'^(\S+(?:\s\*)?)\s+__thiscall\s+(FUN_[0-9a-fA-F]+)\s*\((\w+)\s+\*\s*this'
    , re.MULTILINE
)

def find_typed_this_functions():
    """Scan all .c files and return dict of func_name -> this_type for non-void this params."""
    typed = {}
    c_files = glob.glob(os.path.join(SRC_DIR, '*.c'))
    for cfile in c_files:
        with open(cfile, 'r', encoding='utf-8', errors='replace') as f:
            content = f.read()
        for m in FUNC_DEF_RE.finditer(content):
            ret_type, func_name, this_type = m.group(1), m.group(2), m.group(3)
            if this_type != 'void' and this_type in STRUCT_TYPES:
                typed[func_name] = this_type
    return typed

def fix_header(typed_funcs):
    """Update ghidra_funcs.h forward declarations to use typed this parameters."""
    with open(HEADER_PATH, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()

    original = content
    changes = 0
    used_types = set()

    for func_name, this_type in typed_funcs.items():
        # Match the forward declaration with void *this for this function
        pattern = re.compile(
            r'((?:\S+(?:\s\*)?)\s+__thiscall\s+' + re.escape(func_name) + r'\s*\()void\s+\*\s*this'
        )
        match = pattern.search(content)
        if match:
            old = match.group(0)
            new = match.group(1) + this_type + ' *this'
            if old != new:
                content = content.replace(old, new, 1)
                changes += 1
                used_types.add(this_type)
                print(f"  Updated: {func_name} -- void *this -> {this_type} *this")

    # Add #include "game_structs.h" if struct types are used and not already included
    if used_types and '#include "game_structs.h"' not in content:
        # Insert after #include "ghidra_types.h"
        content = content.replace(
            '#include "ghidra_types.h"',
            '#include "ghidra_types.h"\n#include "game_structs.h"',
            1
        )
        print(f'  Added #include "game_structs.h"')

    if content != original:
        with open(HEADER_PATH, 'w', encoding='utf-8', newline='\n') as f:
            f.write(content)

    return changes

def main():
    print("Scanning .c files for typed __thiscall definitions...")
    typed_funcs = find_typed_this_functions()
    print(f"Found {len(typed_funcs)} functions with typed 'this' parameter.")

    print("\nUpdating ghidra_funcs.h forward declarations...")
    changes = fix_header(typed_funcs)
    print(f"\nDone. Updated {changes} forward declaration(s).")

if __name__ == '__main__':
    main()
