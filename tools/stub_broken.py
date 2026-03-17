#!/usr/bin/env python3
"""Stub out entire function bodies that contain compile errors."""
import subprocess, re, os, sys, glob

CC = 'gcc'
CFLAGS = ['-O0','-std=gnu99','-DWIN32','-D_WIN32','-Isrc',
    '-Wno-incompatible-pointer-types','-Wno-int-conversion',
    '-Wno-implicit-function-declaration','-Wno-pointer-to-int-cast',
    '-Wno-int-to-pointer-cast','-Wno-implicit-int','-w']

def get_error_lines(src):
    r = subprocess.run([CC]+CFLAGS+['-c',src,'-o','/dev/null'],
        capture_output=True, text=True)
    if r.returncode == 0:
        return set()
    errs = set()
    for line in (r.stdout+r.stderr).split('\n'):
        m = re.match(rf'{re.escape(src)}:(\d+):\d+: error:', line)
        if m:
            errs.add(int(m.group(1)))
    return errs

def find_functions(lines):
    """Find (comment_line, body_start, body_end, sig_text) for each function."""
    funcs = []
    i = 0
    while i < len(lines):
        if lines[i].strip().startswith('/* Function:'):
            comment = i
            # Find opening brace
            body_start = None
            sig = ''
            for j in range(i+1, min(i+15, len(lines))):
                s = lines[j].strip()
                if s == '{':
                    body_start = j
                    break
                if s and not s.startswith('/*') and not s.startswith('*'):
                    sig += ' ' + s
            if body_start is not None:
                depth = 0
                body_end = None
                for j in range(body_start, len(lines)):
                    depth += lines[j].count('{') - lines[j].count('}')
                    if depth == 0:
                        body_end = j
                        break
                if body_end is not None:
                    funcs.append((comment, body_start, body_end, sig.strip()))
                    i = body_end + 1
                    continue
        i += 1
    return funcs

def stub_function(sig):
    """Generate minimal stub return for a signature."""
    s = sig.strip()
    if s.startswith('void ') or s.startswith('void\t') or ' void ' in s.split('(')[0]:
        return '    return;\n'
    ret_part = s.split('(')[0] if '(' in s else s
    if '*' in ret_part:
        return '    return 0;\n'
    return '    return 0;\n'

def fix_file(src):
    errs = get_error_lines(src)
    if not errs:
        return 0

    with open(src) as f:
        lines = f.readlines()

    funcs = find_functions(lines)

    # Find which functions have errors
    broken = []
    for comment, bstart, bend, sig in funcs:
        for ln in range(bstart, bend+1):
            if (ln+1) in errs:
                broken.append((comment, bstart, bend, sig))
                break

    if not broken:
        return 0

    # Replace broken function bodies with stubs
    skip_ranges = set()
    replacements = {}  # body_start -> stub lines
    for comment, bstart, bend, sig in broken:
        for ln in range(bstart, bend+1):
            skip_ranges.add(ln)
        replacements[bstart] = [
            '{\n',
            f'    /* TODO: {bend-bstart} lines - has decompilation artifacts */\n',
            stub_function(sig),
            '}\n',
        ]

    output = []
    i = 0
    while i < len(lines):
        if i in replacements:
            output.extend(replacements[i])
            # Skip to after body_end
            while i in skip_ranges:
                i += 1
        else:
            output.append(lines[i])
            i += 1

    with open(src, 'w') as f:
        f.writelines(output)

    return len(broken)

def main():
    src_dir = sys.argv[1] if len(sys.argv) > 1 else 'src'
    total_stubbed = 0
    total_clean = 0

    for src in sorted(glob.glob(os.path.join(src_dir, '*.c'))):
        basename = os.path.basename(src)
        for iteration in range(10):
            stubbed = fix_file(src)
            if stubbed == 0:
                errs = get_error_lines(src)
                if not errs:
                    break
                # Errors outside function bodies - comment them out
                with open(src) as f:
                    lines = f.readlines()
                fixed = 0
                for idx in range(len(lines)):
                    if (idx+1) in errs:
                        s = lines[idx].strip()
                        if s and not s.startswith('/*'):
                            lines[idx] = '/* ' + lines[idx].rstrip() + ' */\n'
                            fixed += 1
                with open(src,'w') as f:
                    f.writelines(lines)
                if fixed == 0:
                    break
            else:
                total_stubbed += stubbed

        errs = get_error_lines(src)
        status = 'OK' if not errs else f'FAIL ({len(errs)} errors)'
        print(f'  {basename}: {status}')
        if not errs:
            total_clean += 1

    n = len(glob.glob(os.path.join(src_dir, '*.c')))
    print(f'\n{total_clean}/{n} files compile, {total_stubbed} functions stubbed')

if __name__ == '__main__':
    main()
