#!/usr/bin/env python3
"""
Fix common Ghidra decompilation artifacts in C source files.
Designed to be run on each split source file.
"""

import re
import sys
import os
import glob

def fix_source(filepath):
    """Apply all Ghidra artifact fixes to a single source file."""
    with open(filepath, 'r') as f:
        content = f.read()

    # 1. Fix switchD_XXXX::caseD_N names
    content = re.sub(r'switchD_([0-9a-fA-F]+)::caseD_(\w+)', r'switchD_\1_caseD_\2', content)
    content = re.sub(r'switchD_([0-9a-fA-F]+)::default', r'switchD_\1_default', content)

    # 2. Fix backtick-quoted MSVC names
    content = re.sub(r"`(\w+)'", r'__\1', content)

    # 3. Fix _func types
    content = re.sub(r'\b_func_void_void_ptr\b', 'ghidra_func_ptr', content)
    content = re.sub(r'\b_func_(\d+)\b', r'ghidra_func_\1', content)

    # 4. Fix undefined3
    content = re.sub(r'\bundefined3\b', 'undefined4', content)

    # 5. Fix stack0x references
    content = re.sub(r'\bstack0x([0-9a-fA-F]+)\b', r'ghidra_stack_\1', content)

    # 6. Fix double semicolons
    content = content.replace(';;', ';')

    # 7. Fix subpiece member access: var._N_M_ = val  and  var._N_M_
    def fix_subpiece_assign(m):
        var = m.group(1)
        offset = int(m.group(2))
        size = int(m.group(3))
        value = m.group(4)
        shift = offset * 8
        if size == 1:
            mask = 0xFF << shift
            return f'{var} = ({var} & ~0x{mask:x}u) | (((unsigned int)(unsigned char)({value})) << {shift})'
        elif size == 2:
            mask = 0xFFFF << shift
            return f'{var} = ({var} & ~0x{mask:x}u) | (((unsigned int)(unsigned short)({value})) << {shift})'
        elif size == 3:
            return f'{var} = ({var} & ~(0xFFFFFFu << {shift})) | (((unsigned int)({value}) & 0xFFFFFF) << {shift})'
        return m.group(0)

    content = re.sub(r'(\w+)\._(\d+)_(\d+)_\s*=\s*([^;]+)', fix_subpiece_assign, content)

    def fix_subpiece_read(m):
        var = m.group(1)
        offset = int(m.group(2))
        size = int(m.group(3))
        shift = offset * 8
        if size == 1:
            return f'((unsigned char)(({var}) >> {shift}))'
        elif size == 2:
            return f'((unsigned short)(({var}) >> {shift}))'
        elif size == 3:
            return f'((({var}) >> {shift}) & 0xFFFFFF)'
        elif size == 4:
            return f'((unsigned int)(({var}) >> {shift}))'
        return m.group(0)

    content = re.sub(r'(\w+)\._(\d+)_(\d+)_', fix_subpiece_read, content)

    # 8. Fix int3 type
    content = re.sub(r'\(int3\)', '(unsigned int)', content)

    # 9. Fix initterm -> _initterm
    content = re.sub(r'\binitterm\b', '_initterm', content)

    with open(filepath, 'w') as f:
        f.write(content)


def collect_externs(src_dir):
    """Scan all source files and collect extern references that need declaring."""
    all_content = ''
    for f in glob.glob(os.path.join(src_dir, '*.c')):
        with open(f) as fh:
            all_content += fh.read()

    # Collect unique references
    dat_refs = sorted(set(re.findall(r'\b(DAT_[0-9a-fA-F]+)\b', all_content)))
    udat_refs = sorted(set(re.findall(r'\b(_DAT_[0-9a-fA-F]+)\b', all_content)))
    lab_refs = sorted(set(re.findall(r'&(LAB_[0-9a-fA-F]+)', all_content)))
    str_refs = sorted(set(re.findall(r'\b(s_[a-zA-Z0-9_]+_[0-9a-fA-F]{8})\b', all_content)))
    ptr_refs = sorted(set(re.findall(r'\b(PTR_(?:LAB|FUN|DAT)_[0-9a-fA-F]+)\b', all_content)))
    stack_refs = sorted(set(re.findall(r'\b(ghidra_stack_[0-9a-fA-F]+)\b', all_content)))

    return dat_refs, udat_refs, lab_refs, str_refs, ptr_refs, stack_refs


def write_ghidra_globals(src_dir, dat, udat, lab, strings, ptrs, stacks):
    """Write ghidra_globals.h with all extern declarations."""
    path = os.path.join(src_dir, 'ghidra_globals.h')
    with open(path, 'w') as f:
        f.write('#ifndef GHIDRA_GLOBALS_H\n#define GHIDRA_GLOBALS_H\n\n')
        f.write('#include "ghidra_types.h"\n\n')

        f.write('/* Ghidra helper types */\n')
        f.write('typedef void (*ghidra_func_ptr)(void *);\n')
        f.write('typedef void (*ghidra_func_4879)(void);\n\n')

        f.write('/* Ghidra bitfield macros */\n')
        f.write('#define CONCAT11(a,b) ((unsigned short)(((unsigned char)(a) << 8) | (unsigned char)(b)))\n')
        f.write('#define CONCAT22(a,b) ((unsigned int)(((unsigned short)(a) << 16) | (unsigned short)(b)))\n')
        f.write('#define CONCAT31(a,b) ((unsigned int)((((unsigned int)(a) & 0xFFFFFF) << 8) | (unsigned char)(b)))\n')
        f.write('#define CONCAT44(a,b) ((unsigned long long)(((unsigned long long)(unsigned int)(a) << 32) | (unsigned int)(b)))\n')
        f.write('#define SUB41(x,n) ((unsigned char)((x) >> ((n)*8)))\n')
        f.write('#define SUB42(x,n) ((unsigned short)((x) >> ((n)*8)))\n')
        f.write('#define SUB21(x,n) ((unsigned char)((x) >> ((n)*8)))\n')
        f.write('#define SUB81(x,n) ((unsigned char)((x) >> ((n)*8)))\n')
        f.write('#define SUB82(x,n) ((unsigned short)((x) >> ((n)*8)))\n')
        f.write('#define SUB84(x,n) ((unsigned int)((x) >> ((n)*8)))\n\n')

        if stacks:
            f.write('/* Ghidra stack placeholders */\n')
            for s in stacks:
                f.write(f'extern unsigned int {s};\n')
            f.write('\n')

        if dat:
            f.write('/* Global data references (DAT_) */\n')
            for d in dat:
                f.write(f'extern undefined4 {d};\n')
            f.write('\n')

        if udat:
            f.write('/* Global data references (_DAT_) */\n')
            for d in udat:
                f.write(f'extern undefined4 {d};\n')
            f.write('\n')

        if lab:
            f.write('/* Label address references */\n')
            for l in lab:
                f.write(f'extern char {l};\n')
            f.write('\n')

        if strings:
            f.write('/* String data references */\n')
            for s in strings:
                f.write(f'extern char {s}[];\n')
            f.write('\n')

        if ptrs:
            f.write('/* Pointer data references */\n')
            for p in ptrs:
                f.write(f'extern void *{p};\n')
            f.write('\n')

        f.write('#endif /* GHIDRA_GLOBALS_H */\n')

    print(f"    ghidra_globals.h: {len(dat)} DAT, {len(udat)} _DAT, "
          f"{len(lab)} LAB, {len(strings)} strings, {len(ptrs)} ptrs, {len(stacks)} stacks")


def main():
    src_dir = sys.argv[1] if len(sys.argv) > 1 else 'src'

    print("[*] Fixing Ghidra artifacts in source files...")
    c_files = glob.glob(os.path.join(src_dir, '*.c'))
    for filepath in sorted(c_files):
        fix_source(filepath)
        print(f"    Fixed {os.path.basename(filepath)}")

    print("[*] Collecting extern declarations...")
    dat, udat, lab, strings, ptrs, stacks = collect_externs(src_dir)
    write_ghidra_globals(src_dir, dat, udat, lab, strings, ptrs, stacks)

    # Add the globals include to each source file
    print("[*] Adding ghidra_globals.h include...")
    for filepath in sorted(c_files):
        with open(filepath, 'r') as f:
            content = f.read()
        if 'ghidra_globals.h' not in content:
            content = content.replace(
                '#include "ghidra_funcs.h"',
                '#include "ghidra_funcs.h"\n#include "ghidra_globals.h"'
            )
            with open(filepath, 'w') as f:
                f.write(content)

    print("[+] Done!")

if __name__ == '__main__':
    main()
