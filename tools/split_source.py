#!/usr/bin/env python3
"""
Split the monolithic Ghidra decompiled C into multiple source files.
Groups functions by address range into logical chunks.
Also extracts the preamble (includes, types, forward decls) into a shared header.
"""

import re
import os

SRC_DIR = os.path.join(os.path.dirname(os.path.dirname(__file__)), 'src')

# Address range -> filename mapping
# Roughly grouped to keep files ~7000-10000 lines
FILE_MAP = [
    (0x00401000, 0x00408FFF, 'game_objects',   'Game objects and entities'),
    (0x00409000, 0x0040FFFF, 'game_logic',     'Core game logic'),
    (0x00410000, 0x0041FFFF, 'game_systems',   'Game subsystems'),
    (0x00420000, 0x0042FFFF, 'game_render',    'Rendering and display'),
    (0x00430000, 0x0043AFFF, 'game_ui',        'UI and menus'),
    (0x0043B000, 0x0043FFFF, 'game_input',     'Input handling'),
    (0x00440000, 0x0044FFFF, 'game_audio',     'Audio and media'),
    (0x00450000, 0x0045BFFF, 'game_data',      'Data management'),
    (0x0045C000, 0x0045FFFF, 'game_resources', 'Resource loading'),
    (0x00460000, 0x0046FFFF, 'game_misc',      'Miscellaneous utilities'),
    (0x00470000, 0x0047FFFF, 'crt_startup',    'CRT startup and runtime'),
]

def parse_functions(filepath):
    """Parse the decompiled C into preamble + list of (addr, name, text) functions."""
    with open(filepath, 'r') as f:
        lines = f.readlines()

    preamble_lines = []
    functions = []  # (addr_int, func_name, [lines])

    current_func_lines = []
    current_func_name = None
    current_func_addr = None
    in_preamble = True

    for line in lines:
        # Detect function comment marker
        m = re.match(r'^/\* Function: (\S+) @ (0x[0-9a-fA-F]+) \*/', line)
        if m:
            # Save previous function
            if current_func_name is not None:
                functions.append((current_func_addr, current_func_name, current_func_lines))
            elif in_preamble:
                in_preamble = False

            current_func_name = m.group(1)
            current_func_addr = int(m.group(2), 16)
            current_func_lines = [line]
            continue

        if in_preamble:
            preamble_lines.append(line)
        elif current_func_name is not None:
            current_func_lines.append(line)

    # Don't forget the last function
    if current_func_name is not None:
        functions.append((current_func_addr, current_func_name, current_func_lines))

    return preamble_lines, functions

def categorize_function(addr):
    """Return the file info for a given function address."""
    for start, end, basename, desc in FILE_MAP:
        if start <= addr <= end:
            return basename, desc
    return 'game_misc', 'Miscellaneous'

def extract_forward_decls(preamble_lines):
    """Separate forward declarations from other preamble content."""
    fwd_decls = []
    other = []
    in_fwd = False

    for line in preamble_lines:
        stripped = line.strip()
        if 'Forward Declarations' in stripped:
            in_fwd = True
            continue
        if in_fwd and stripped.startswith('/* ====='):
            in_fwd = False
            continue

        if in_fwd:
            if stripped and not stripped.startswith('/*'):
                fwd_decls.append(line)
        else:
            other.append(line)

    return other, fwd_decls

def main():
    src_file = os.path.join(os.path.dirname(os.path.dirname(__file__)), 'MMath_decompiled.c')

    print("[*] Parsing decompiled source...")
    preamble, functions = parse_functions(src_file)
    print(f"    Preamble: {len(preamble)} lines")
    print(f"    Functions: {len(functions)}")

    # Separate preamble into includes/types vs forward declarations
    other_preamble, fwd_decls = extract_forward_decls(preamble)

    # Group functions by file
    file_functions = {}  # basename -> [(addr, name, lines)]
    for addr, name, lines in functions:
        basename, desc = categorize_function(addr)
        if basename not in file_functions:
            file_functions[basename] = []
        file_functions[basename].append((addr, name, lines))

    # Create output directory
    os.makedirs(SRC_DIR, exist_ok=True)

    # Write the shared header: ghidra_types.h
    print("[*] Writing src/ghidra_types.h...")
    with open(os.path.join(SRC_DIR, 'ghidra_types.h'), 'w') as f:
        f.write('#ifndef GHIDRA_TYPES_H\n#define GHIDRA_TYPES_H\n\n')
        f.write('#include <windows.h>\n')
        f.write('#include <stdint.h>\n')
        f.write('#include <stdio.h>\n')
        f.write('#include <stdlib.h>\n')
        f.write('#include <string.h>\n')
        f.write('#include <math.h>\n\n')

        f.write('/* Ghidra primitive type aliases */\n')
        f.write('typedef unsigned char   byte;\n')
        f.write('typedef unsigned short  word;\n')
        f.write('typedef unsigned int    dword;\n')
        f.write('typedef long double     float10;\n')
        f.write('typedef long long       longlong;\n')
        f.write('typedef unsigned long long ulonglong;\n')
        f.write('typedef unsigned char   uchar;\n')
        f.write('typedef unsigned int    uint;\n')
        f.write('typedef unsigned long   ulong;\n')
        f.write('typedef unsigned char   undefined;\n')
        f.write('typedef unsigned char   undefined1;\n')
        f.write('typedef unsigned short  undefined2;\n')
        f.write('typedef unsigned int    undefined4;\n')
        f.write('typedef unsigned long long undefined5;\n')
        f.write('typedef unsigned long long undefined6;\n')
        f.write('typedef unsigned long long undefined8;\n')
        f.write('typedef unsigned short  ushort;\n')
        f.write('typedef unsigned char   undefined3;  /* Ghidra 3-byte, treated as 4 */\n')
        f.write('\n')
        f.write('#ifndef __cplusplus\n')
        f.write('#ifndef bool\n')
        f.write('typedef unsigned char   bool;\n')
        f.write('#endif\n')
        f.write('#define true 1\n')
        f.write('#define false 0\n')
        f.write('#endif\n')
        f.write('\n')
        f.write('/* Ghidra uses \'code\' for function pointer targets */\n')
        f.write('typedef void code;\n')
        f.write('\n')
        f.write('#endif /* GHIDRA_TYPES_H */\n')

    # Write the shared forward declarations: ghidra_funcs.h
    print("[*] Writing src/ghidra_funcs.h...")
    with open(os.path.join(SRC_DIR, 'ghidra_funcs.h'), 'w') as f:
        f.write('#ifndef GHIDRA_FUNCS_H\n#define GHIDRA_FUNCS_H\n\n')
        f.write('#include "ghidra_types.h"\n\n')
        f.write('/* Forward declarations for all decompiled functions */\n\n')
        for line in fwd_decls:
            # Fix double semicolons
            line = line.replace(';;', ';')
            f.write(line)
        f.write('\n#endif /* GHIDRA_FUNCS_H */\n')

    # Write each source file
    for start, end, basename, desc in FILE_MAP:
        funcs = file_functions.get(basename, [])
        if not funcs:
            continue

        filepath = os.path.join(SRC_DIR, f'{basename}.c')
        print(f"[*] Writing src/{basename}.c ({len(funcs)} functions, "
              f"0x{start:X}-0x{end:X}: {desc})...")

        with open(filepath, 'w') as f:
            f.write(f'/*\n')
            f.write(f' * {basename}.c - {desc}\n')
            f.write(f' * Address range: 0x{start:X} - 0x{end:X}\n')
            f.write(f' * Functions: {len(funcs)}\n')
            f.write(f' *\n')
            f.write(f' * Auto-generated from Ghidra decompilation of MMath.exe\n')
            f.write(f' */\n\n')
            f.write(f'#include "ghidra_types.h"\n')
            f.write(f'#include "ghidra_funcs.h"\n\n')

            total_lines = 0
            for addr, name, lines in sorted(funcs, key=lambda x: x[0]):
                for line in lines:
                    f.write(line)
                total_lines += len(lines)

        print(f"         {total_lines} lines")

    # Summary
    print(f"\n[+] Split into {len(file_functions)} source files in src/")
    total_funcs = sum(len(v) for v in file_functions.values())
    print(f"[+] {total_funcs} functions total")

if __name__ == '__main__':
    main()
