# MMath Decompilation Project

## What This Is

Decompiled source for **MMath.exe**, a 32-bit Windows math game from ~1995. Built with MSVC++ 4.0, targeting Windows 3.1/95. Source recovered via **Ghidra 12.0.4** headless decompiler.

- 3,154 functions total (2,738 with full bodies, 416 stubbed)
- 11 source files split by address range, 3 headers
- ~55,000 lines of C
- Compiles with MinGW32 (`i686-w64-mingw32-gcc`), does NOT link yet (needs stub libs for SMACKW32.DLL and WING32.DLL, plus ~900 `DAT_` globals)

## Build

```bash
make          # builds all .o files into build/
make clean    # removes build/
```

Requires MSYS2 MinGW32 toolchain. Flags: `-O0 -std=gnu99 -DWIN32 -D_WIN32 -mwindows -fpermissive -w`

## Source Layout

```
src/
  ghidra_types.h      # Primitive aliases: byte, word, dword, undefined1/2/4/8, etc.
  ghidra_funcs.h      # Forward declarations for all 3,154 functions
  ghidra_globals.h    # Extern globals (DAT_), string literals, CONCAT/SUB macros, stack placeholders
  game_structs.h      # Reverse-engineered packed structs with exact byte offsets
  game_objects.c      # 0x401000-0x408FFF  (223 funcs)
  game_logic.c        # 0x409000-0x40FFFF  (209 funcs)
  game_systems.c      # 0x410000-0x41FFFF  (309 funcs)
  game_render.c       # 0x420000-0x42FFFF  (465 funcs)
  game_ui.c           # 0x430000-0x43AFFF  (366 funcs)
  game_input.c        # 0x43B000-0x43FFFF  (181 funcs)
  game_audio.c        # 0x440000-0x44FFFF  (353 funcs)
  game_data.c         # 0x450000-0x45BFFF  (472 funcs)
  game_resources.c    # 0x45C000-0x45FFFF  (218 funcs)
  game_misc.c         # 0x460000-0x46FFFF  (293 funcs)
  crt_startup.c       # 0x470000-0x47FFFF  (65 funcs)
tools/
  decompile_all.py    # Ghidra headless decompiler script (Jython)
  split_source.py     # Splits monolithic output into per-module .c files
  fix_ghidra.py       # Fixes common Ghidra artifacts
  fix_forward_decls.py
  fix_this_structs.py # Struct field fixing utility
  fix_this_fields.py  # this->field access pattern fixer
  stub_broken.py      # Stubs 416 unfixable functions
```

## Key Structs (game_structs.h)

All structs use `#pragma pack(push, 1)` for exact byte-level layout. Offsets in hex comments.

| Struct | Size | Notes |
|--------|------|-------|
| AnswerSlot | 0x12 (18) | Answer choice in MathProblem, used in arrays with stride 0x12 |
| MathProblem | 0x268 | Math problem engine. Contains AnswerSlot slots[5] at +0x20A |
| UIElement | 0xC6 | Base UI element with vtable, rect, position, flags |
| UIWidget | 0x118 | Extends UIElement. Adds scroll, animation, tile data |
| GameWidget | 0x19C | Extends UIWidget. Adds slot pointers, group data, cleanup_fn |
| DialogWidget | 0x1DA | Extends UIWidget. Dialog/popup with result, input_mode |
| GameBoard | 0x280 | Board state. PlayerSlot players[4] at +0x1D0, reward objects, scores |
| PlayerSlot | 0x12 (18) | Player data in GameBoard, stride 0x12 |
| GameScreen | 0x48A | GDI rendering surface. Font, color, HDC handles |
| CString | 0x1A | Dynamic string with double-indirection buffer |
| TextDisplay | 0x5E0 | Text rendering with embedded widget base |
| SoundPlayer | 0x1D0 | Audio with ring buffer sequence_data[96] |

Inheritance chain: UIElement -> UIWidget -> GameWidget / DialogWidget

## Conventions

- **Calling conventions**: `__thiscall` (object pointer in ECX), `__fastcall`, and standard `__cdecl`
- **Function names**: `FUN_XXXXXXXX` where XXXXXXXX is the original address
- **Globals**: `DAT_XXXXXXXX` for data, `_DAT_` prefix means overlapping symbol warning
- **Labels**: `LAB_XXXXXXXX` for code labels
- **Vtables**: `PTR_FUN_XXXXXXXX` for vtable entries

## Dependencies

KERNEL32, USER32, GDI32, COMDLG32, WINMM, MSVCRT40, SMACKW32 (Smacker video), WING32 (WinG fast blitting)

---

# Ghidra Output Cleanup Instructions

When cleaning up Ghidra decompiler output in this project, follow these rules precisely. **Do not be lazy. Do not skip lines. Do not abbreviate. Do not summarize.** Every function must be shown complete and copy-pasteable.

## The Cardinal Rule

**Fix EVERY instance in a function, not just the first few.** If a function has 40 lines of pointer arithmetic, rewrite all 40. No "and so on", no "similar changes throughout", no "..." ellipsis skipping code. The output must be a drop-in replacement for the original.

## What To Fix (in priority order)

### 1. Pointer arithmetic -> struct field access

This is the most common Ghidra artifact and the highest priority fix. Raw Ghidra output looks like:

```c
// RAW GHIDRA — never leave code like this
*(undefined4 *)((int)param_1 + 0x11a) = 0;
*(undefined4 *)((intptr_t)this + 4) = 0;
*(int *)(param_1 + 0x2a) = value;
*(uint *)((int)param_1 + sVar1 * 0x16 + 0x154)
```

Must become:

```c
// CORRECT — struct field access using game_structs.h definitions
widget->pair_x_1 = 0;
this->field_04 = 0;
board->event_type = value;
widget->group_count_a  // for stride-0x16 group access at base 0x14A/0x154
```

**Match every hex offset against game_structs.h.** The structs have exact byte-offset comments on every field. Use them.

### 2. Parameter and return types

Ghidra defaults everything to `void *this`, `undefined4 *param_1`, `int *param_1`. Retype to the correct struct pointer based on which offsets the function accesses:

```c
// BAD
undefined4 * __thiscall FUN_00401140(undefined4 *param_1)

// GOOD — accesses offsets up to 0x19B = GameWidget
GameWidget * __fastcall FUN_00401140(GameWidget *this)
```

For `__thiscall`, the first param is always the object pointer — name it `this` and type it correctly.

### 3. Undefined types -> real C types

```c
// BAD
undefined4 uVar1;
undefined1 *puStack_c;
undefined2 local_10;

// GOOD — infer from usage context
int uVar1;           // compared/assigned as int
char *puStack_c;     // used with string functions
short local_10;      // 2-byte local used as short
```

Context clues: assigned to int field = `int`. Passed to string function = `char *`. Window handle = `HWND`. Device context = `HDC`. Compared as boolean = `BOOL` or `int`.

### 4. Cast soup -> clean expressions

Ghidra produces deeply nested casts. Simplify:

```c
// BAD — triple-indirection cast nightmare
(**(void (**)(void))**(undefined4 **)((int)param_1 + 0x136))();

// GOOD — vtable/function pointer call through cleanup_fn_ptr
if (widget->cleanup_fn_ptr) {
    (*(void (*)(void))(*widget->cleanup_fn_ptr))();
}
```

```c
// BAD
*(undefined2 *)((int)this + 0x1bc) = 1;
*(undefined1 *)((int)this + 0x1ba) = 1;

// GOOD — GameBoard fields
board->refresh_counter = 1;
board->needs_refresh = 1;
```

### 5. Array access with stride arithmetic

When you see `base + index * stride + offset`, map it to struct array indexing:

```c
// BAD — stride 0x12 access into slots
*(int *)((int)problem + 0x20a + i * 0x12)

// GOOD
problem->slots[i].value

// BAD — stride 0x16 group data access
*(uint *)((int)param_1 + sVar1 * 0x16 + 0x154)

// GOOD
widget->group_count_a  // when sVar1=0, base offset 0x154
```

### 6. CONCAT/SUB macros

Replace with explicit bit operations where clearer:

```c
// Ghidra macro
CONCAT44(high, low)
SUB41(x, 2)

// Cleaner
((uint64_t)high << 32) | (uint32_t)low
(uint8_t)(x >> 16)
```

Or leave the macros if they're already defined in ghidra_globals.h and readable enough.

### 7. Vtable calls

```c
// BAD
(*(code **)(**(int **)param_1 + 0x10))(param_1);

// GOOD — vtable[4] call (offset 0x10 / sizeof(void*) = 4)
this->vtable[4](this);
```

### 8. Boolean simplification

```c
// BAD
if (*(int *)((int)this + 0x1e) != 0) {
// GOOD
if (this->active_flag) {

// BAD
if (*(char *)(DAT_00489ac8 + 0xc) == '\0') {
// GOOD — keep as-is if DAT_ struct is unknown, but clean the cast
if (*(char *)(DAT_00489ac8 + 0xc) == '\0') {  // TODO: identify DAT_00489ac8 struct
```

## What NOT To Do

- **Do NOT rename FUN_ functions** unless you are highly confident of the purpose. Keep original address in a comment if you do rename.
- **Do NOT change control flow or logic.** This is cosmetic/type cleanup, not refactoring.
- **Do NOT remove WARNING comments** from Ghidra — they contain decompilation metadata.
- **Do NOT invent struct fields.** If an offset falls in a `_pad` region, use the padding name and add a `/* TODO */` comment.
- **Do NOT silently drop unknown offsets.** If an offset doesn't match any struct, leave a `/* TODO: unknown offset 0xNN on <type> */` comment.
- **Do NOT leave any `*(type *)((int)param + 0xNN)` pattern** when the offset matches a known struct field. This is the whole point of the cleanup.
- **Do NOT output partial functions.** Every function must be complete, compilable, and a drop-in replacement.
- **Do NOT skip complex functions.** Long functions with heavy pointer math are exactly what need fixing most. Do not say "this function is too complex" or defer it.

## Quality Checklist

Before outputting a cleaned function, verify:

1. Every `*(type *)((int/intptr_t)X + 0xNN)` has been checked against game_structs.h
2. Parameter types match the struct indicated by the offsets accessed
3. `__thiscall` first param is named `this` and typed correctly
4. No `undefined4`/`undefined1`/`undefined2` remain where the type is inferable
5. Array accesses with stride math use struct array indexing
6. Vtable calls use indexed notation
7. The function is complete — no elided sections
8. The code still compiles (don't break syntax while cleaning up casts)

## Output Format Per Function

```c
/* Function: FUN_XXXXXXXX @ 0xXXXXXXXX
 * Struct types: GameWidget (this), GameBoard (via DAT_XXXXXXXX)
 * TODO: offset 0xNN in _pad region, needs investigation
 */
<complete cleaned function>
```
