# MMath Decompilation

Decompiled source code for **MMath.exe**, a 32-bit Windows game from the mid-1990s.

## Binary Information

| Property | Value |
|----------|-------|
| File | `MMath.exe` |
| Format | PE32 executable (GUI), Intel 80386, Windows |
| Size | 606,208 bytes (592 KB) |
| MD5 | `9b8655a472df169e739b0961e74c085b` |
| SHA-256 | `f51c9dcef4b4fa44f1d256f34cc7c2db7a2be1b93cff8bbcd2c063cd0e5c613d` |
| Compiler | Microsoft Visual C++ 4.0 (MSVCRT40.DLL) |
| Architecture | x86 (32-bit) |
| Subsystem | Windows GUI |

## Dependencies

The original binary imports from:

- **KERNEL32.DLL** - Windows core API
- **USER32.DLL** - Window management, input
- **GDI32.DLL** - Graphics device interface
- **COMDLG32.DLL** - Common dialogs (open/save file, print)
- **WINMM.DLL** - Multimedia (audio, timers, joystick)
- **MSVCRT40.DLL** - C runtime (Visual C++ 4.0)
- **SMACKW32.DLL** - RAD Game Tools Smacker video codec
- **WING32.DLL** - Microsoft WinG (fast DIB blitting, precursor to DirectDraw)

The use of WinG and MSVCRT40 places this binary in the **Windows 3.1/95 era (1994-1996)**.

## Decompilation

Source was recovered using **Ghidra 12.0.4** headless decompiler.

### Statistics

| Metric | Count |
|--------|-------|
| Total functions decompiled | 3,154 |
| Functions with full bodies | 2,738 (87%) |
| Functions stubbed (decompilation artifacts) | 416 (13%) |
| Source files | 11 |
| Header files | 3 |
| Total lines of C | ~55,000 |

Stubbed functions contain Ghidra decompilation artifacts (vtable calls, type mismatches) that
prevent direct compilation. Their original decompiled bodies were replaced with minimal stubs.
The function signatures and calling conventions are preserved.

## Project Structure

```
MMath/
  Makefile                  # Build system
  src/
    ghidra_types.h          # Ghidra primitive type aliases (byte, uint, undefined4, etc.)
    ghidra_funcs.h          # Forward declarations for all 3,154 functions
    ghidra_globals.h        # Extern declarations for globals, strings, labels, macros
    game_objects.c           # 0x401000-0x408FFF  Game objects and entities (223 funcs)
    game_logic.c             # 0x409000-0x40FFFF  Core game logic (209 funcs)
    game_systems.c           # 0x410000-0x41FFFF  Game subsystems (309 funcs)
    game_render.c            # 0x420000-0x42FFFF  Rendering and display (465 funcs)
    game_ui.c                # 0x430000-0x43AFFF  UI and menus (366 funcs)
    game_input.c             # 0x43B000-0x43FFFF  Input handling (181 funcs)
    game_audio.c             # 0x440000-0x44FFFF  Audio and media (353 funcs)
    game_data.c              # 0x450000-0x45BFFF  Data management (472 funcs)
    game_resources.c         # 0x45C000-0x45FFFF  Resource loading (218 funcs)
    game_misc.c              # 0x460000-0x46FFFF  Miscellaneous utilities (293 funcs)
    crt_startup.c            # 0x470000-0x47FFFF  CRT startup and runtime (65 funcs)
  tools/
    decompile_all.py         # Ghidra headless decompiler script (Jython)
    split_source.py          # Splits monolithic output into per-module .c files
    fix_ghidra.py            # Fixes common Ghidra artifacts (names, types, macros)
    stub_broken.py           # Stubs out functions that have unfixable decompilation errors
```

## Building

### Requirements

- **MSYS2 MinGW32** toolchain (GCC targeting i686-w64-mingw32)
- GNU Make

### Steps

```bash
# Ensure MinGW32 and make are in PATH
export PATH="/c/msys64/mingw32/bin:/c/msys64/usr/bin:$PATH"

# Build all object files
make

# Clean
make clean
```

All 11 source files compile to `.o` object files in `build/`.

> **Note:** The project does not currently link into a final executable. Linking requires
> stub libraries for SMACKW32.DLL and WING32.DLL, plus resolution of the ~900 global
> data symbols (`DAT_XXXXXXXX`) which are currently declared as externs.

## Re-running Decompilation

To regenerate the decompiled source from the original binary:

```bash
# 1. Run Ghidra headless decompiler
mkdir -p ghidra_project
analyzeHeadless ghidra_project MMath_Project \
    -import MMath.exe \
    -postScript tools/decompile_all.py . \
    -scriptPath tools \
    -deleteProject

# 2. Split into source files
python3 tools/split_source.py

# 3. Fix Ghidra artifacts
python3 tools/fix_ghidra.py src

# 4. Stub broken functions
python3 tools/stub_broken.py src

# 5. Verify build
make
```

## Version History

- **v1** - Initial Ghidra decompilation, monolithic single-file output
- **v2** - Split into 11 source files by address range, compileable with MinGW32
