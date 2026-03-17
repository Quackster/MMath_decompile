#!/usr/bin/env python3
"""Implement all 52 STUB functions in game_render.c"""

import re
import sys

def main():
    with open('src/game_render.c', 'r') as f:
        content = f.read()

    replacements = {}

    # 1. FUN_00423000 - 175 lines - bool check match (similar to FUN_00422f00 above)
    replacements[
        'bool __thiscall FUN_00423000(void *this,int param_1)\n'
        '{\n'
        '  /* TEST EDIT */\n'
        '  return 0;\n'
        '}'
    ] = '''bool __thiscall FUN_00423000(void *this,int param_1)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;

  if (board->board_mode != 1) {
    return false;
  }
  n1 = board->event_type;
  if (n1 < 0x202) {
    if (n1 == 0x201 || n1 == 0x101) {
      return board->match_note == param_1;
    }
    return false;
  }
  if (n1 < 0x403) {
    if (n1 >= 0x401 || (n1 >= 0x301 && n1 <= 0x302)) {
      if (board->match_note == param_1) {
        return true;
      }
      return false;
    }
    return false;
  }
  if (n1 < 0x603) {
    if (n1 >= 0x601 || n1 == 0x501 || n1 == 0x502) {
      if (board->match_note == param_1) {
        return true;
      }
      return false;
    }
    if (n1 == 0x503 || n1 == 0x504) {
      n2 = param_1 - board->transpose_offset;
      if (n2 < 0) {
        n2 = n2 + 0x2d0;
      }
      if (board->match_note == n2) {
        return true;
      }
      return false;
    }
    return false;
  }
  if (n1 >= 0x603 && n1 <= 0x604) {
    n2 = param_1 - board->transpose_offset;
    if (n2 < 0) {
      n2 = n2 + 0x2d0;
    }
    if (board->match_note == n2) {
      return true;
    }
    return false;
  }
  return false;
}'''

    # 2. FUN_00423520 - 122 lines - byte check match variant
    replacements[
        'byte __thiscall FUN_00423520(void *this,int param_1)\n'
        '{\n'
        '    /* STUB: 122 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''byte __thiscall FUN_00423520(void *this,int param_1)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;

  if (board->board_mode != 1) {
    return 0;
  }
  n1 = board->event_type;
  if (n1 < 0x202) {
    if (n1 == 0x201 || n1 == 0x101) {
      return (byte)(board->match_note == param_1);
    }
    return 0;
  }
  if (n1 < 0x403) {
    if (n1 >= 0x401 || (n1 >= 0x301 && n1 <= 0x302)) {
      if ((board->match_note == param_1) && (board->match_player == (int)board->field_1c8)) {
        return 1;
      }
      return 0;
    }
    return 0;
  }
  if (n1 < 0x603) {
    if (n1 >= 0x601 || n1 == 0x501 || n1 == 0x502) {
      if ((board->match_note == param_1) && (board->match_player == (int)board->field_1c8)) {
        return 1;
      }
      return 0;
    }
    if (n1 == 0x503 || n1 == 0x504) {
      n2 = param_1 - board->transpose_offset;
      if (n2 < 0) n2 = n2 + 0x2d0;
      if ((board->match_note == n2) && (board->match_player == (int)board->field_1c8)) {
        return 1;
      }
      return 0;
    }
    return 0;
  }
  if (n1 >= 0x603 && n1 <= 0x604) {
    n2 = param_1 - board->transpose_offset;
    if (n2 < 0) n2 = n2 + 0x2d0;
    if ((board->match_note == n2) && (board->match_player == (int)board->field_1c8)) {
      return 1;
    }
  }
  return 0;
}'''

    # 3. FUN_004240b0 - 59 lines - phase state machine
    replacements[
        'void __fastcall FUN_004240b0(int *param_1)\n'
        '{\n'
        '    /* STUB: 59 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_004240b0(int *param_1)
{
  int n1;
  int n2;
  DWORD dw3;
  short s4;

  FUN_00404b00((char *)param_1);
  if (((TimerState *)DAT_004896b0)->flag_27 != '\\0') {
    return;
  }
  s4 = ((BoardSubclass_A *)param_1)->phase;
  if (s4 == 1) {
    n1 = ((BoardSubclass_A *)param_1)->cstring_base;
    if (n1 != 0) {
      n2 = FUN_0040b330((void *)n1);
      if (n2 != 0) return;
    }
    ((BoardSubclass_A *)param_1)->phase = 2;
    FUN_00423f80(param_1);
  }
  else if (s4 == 2) {
    n1 = ((BoardSubclass_A *)param_1)->cstring_base;
    if (n1 != 0) {
      n2 = FUN_0040b330((void *)n1);
      if (n2 != 0) return;
    }
    ((BoardSubclass_A *)param_1)->phase = 3;
    dw3 = GetTickCount();
    ((BoardSubclass_A *)param_1)->anim_counter = dw3;
  }
  else if (s4 == 3) {
    dw3 = GetTickCount();
    if (((BoardSubclass_A *)param_1)->anim_counter + 2000U < dw3) {
      ((BoardSubclass_A *)param_1)->phase = 4;
    }
  }
  else if (s4 == 4) {
    FUN_00423eb0(param_1);
  }
  return;
}'''

    # 4. FUN_00424820 - 22 lines - WinGBitBlt
    replacements[
        'void __fastcall FUN_00424820(int param_1)\n'
        '{\n'
        '    /* STUB: 22 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_00424820(int param_1)
{
  HDC hdc;
  short s1;
  short s2;

  hdc = *(HDC *)(param_1 + 0x14);
  if (hdc == NULL) return;
  SelectPalette(hdc, DAT_004838bc, 0);
  RealizePalette(hdc);
  s1 = *(short *)(param_1 + 0x448);
  s2 = *(short *)(param_1 + 0x44a);
  if (s1 < *(short *)(param_1 + 0x44c) && s2 < *(short *)(param_1 + 0x44e)) {
    WinGBitBlt(hdc, (int)s2, (int)s1,
               (int)(short)(*(short *)(param_1 + 0x44c) - s2),
               (int)(short)(*(short *)(param_1 + 0x44e) - s1),
               *(HDC *)(param_1 + 0x14), (int)s2, (int)s1);
    GdiFlush();
  }
  return;
}'''

    # 5. FUN_00424f40 - 36 lines - check board position validity
    replacements[
        'int __thiscall FUN_00424f40(void *this,short param_1,short param_2)\n'
        '{\n'
        '    /* STUB: 36 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int __thiscall FUN_00424f40(void *this,short param_1,short param_2)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;
  short s3;

  if (param_1 < 1 || param_1 > 9 || param_2 < 1 || param_2 > 6) {
    return 0;
  }
  s3 = 0;
  if (board->board_slot_count > 0) {
    do {
      n1 = (int)s3;
      if (board->board_slots[n1].pos_x == (int)param_1 &&
          board->board_slots[n1].pos_y == (int)param_2) {
        return 0;
      }
      s3 = s3 + 1;
    } while (s3 < board->board_slot_count);
  }
  n2 = board->board_layer * 6;
  if (*(short *)(&DAT_0047f8f4 + ((param_2 + n2) * 9 + param_1) * 2) == board->board_note) {
    return 0;
  }
  return 1;
}'''

    # 6. FUN_00426740 - 25 lines - create palette
    replacements[
        'int __cdecl FUN_00426740(int param_1)\n'
        '{\n'
        '    /* STUB: 25 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int __cdecl FUN_00426740(int param_1)
{
  BYTE *pBVar1;
  ushort u2;
  LOGPALETTE v404[128];
  PALETTEENTRY *pPVar5;
  int n3;

  v404[0].palVersion = 0x300;
  v404[0].palNumEntries = 0x100;
  pPVar5 = v404[0].palPalEntry;
  for (n3 = 0x100; n3 != 0; n3 = n3 - 1) {
    pPVar5->peRed = '\\0';
    pPVar5->peGreen = '\\0';
    pPVar5->peBlue = '\\0';
    pPVar5->peFlags = '\\0';
    pPVar5 = pPVar5 + 1;
  }
  u2 = 0;
  do {
    pBVar1 = (BYTE *)(u2 * 4 + param_1);
    v404[0].palPalEntry[u2].peRed = *(BYTE *)(u2 * 4 + 2 + param_1);
    v404[0].palPalEntry[u2].peGreen = pBVar1[1];
    v404[0].palPalEntry[u2].peBlue = *pBVar1;
    v404[0].palPalEntry[u2].peFlags = '\\x04';
    u2 = u2 + 1;
  } while (u2 < 0x100);
  return (int)CreatePalette((LOGPALETTE *)v404);
}'''

    # 7. FUN_004268d0 - 52 lines - bitmap load/blit
    replacements[
        'void __cdecl FUN_004268d0(int *param_1,short param_2)\n'
        '{\n'
        '    /* STUB: 52 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __cdecl FUN_004268d0(int *param_1,short param_2)
{
  int n1;
  int n2;
  void *pv3;
  HGDIOBJ ho4;
  HDC hdc5;
  char v820[0x810];
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_00426a0b;
  *_fs = &_seh_prev;
  FUN_00451e90((int *)v820);
  _seh_state = 0;
  pv3 = FUN_0040f380(DAT_004838c0, (int)param_2 << 16 | 0xc, NULL);
  if (pv3 != NULL) {
    n1 = *(int *)((char *)pv3 + 4);
    n2 = *(int *)((char *)pv3 + 8);
    hdc5 = CreateCompatibleDC(NULL);
    ho4 = CreateCompatibleBitmap(hdc5, n1, n2);
    SelectObject(hdc5, ho4);
    FUN_00451f00((int *)v820, (int)pv3, n1, n2);
    BitBlt(hdc5, 0, 0, n1, n2, *(HDC *)(v820 + 4), 0, 0, SRCCOPY);
    *param_1 = (int)hdc5;
    param_1[1] = n1;
    param_1[2] = n2;
  }
  _seh_state = 0xffffffff;
  FUN_00451f60((int *)v820);
  *_fs = _seh_prev;
  return;
}'''

    # 8. FUN_00426a20 - 47 lines - bitmap load variant
    replacements[
        'void __cdecl FUN_00426a20(int *param_1,short param_2)\n'
        '{\n'
        '    /* STUB: 47 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __cdecl FUN_00426a20(int *param_1,short param_2)
{
  int n1;
  int n2;
  void *pv3;
  HGDIOBJ ho4;
  HDC hdc5;
  char v820[0x810];
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_00426b61;
  *_fs = &_seh_prev;
  FUN_00451e90((int *)v820);
  _seh_state = 0;
  pv3 = FUN_0040f380(DAT_004838c0, (int)param_2 << 16 | 0xc, NULL);
  if (pv3 != NULL) {
    n1 = *(int *)((char *)pv3 + 4);
    n2 = *(int *)((char *)pv3 + 8);
    hdc5 = CreateCompatibleDC(NULL);
    ho4 = CreateCompatibleBitmap(hdc5, n1, n2);
    SelectObject(hdc5, ho4);
    FUN_00451f00((int *)v820, (int)pv3, n1, n2);
    BitBlt(hdc5, 0, 0, n1, n2, *(HDC *)(v820 + 4), 0, 0, SRCCOPY);
    *param_1 = (int)hdc5;
    param_1[1] = n1;
    param_1[2] = n2;
  }
  _seh_state = 0xffffffff;
  FUN_00451f60((int *)v820);
  *_fs = _seh_prev;
  return;
}'''

    # 9. FUN_00426b70 - 50 lines
    replacements[
        'void __cdecl FUN_00426b70(int param_1,short param_2)\n'
        '{\n'
        '    /* STUB: 50 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __cdecl FUN_00426b70(int param_1,short param_2)
{
  int n1;
  int n2;
  void *pv3;
  HGDIOBJ ho4;
  HDC hdc5;
  char v828[0x818];
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_00426cda;
  *_fs = &_seh_prev;
  FUN_00451e90((int *)v828);
  _seh_state = 0;
  pv3 = FUN_0040f380(DAT_004838c0, (int)param_2 << 16 | 0xc, NULL);
  if (pv3 != NULL) {
    n1 = *(int *)((char *)pv3 + 4);
    n2 = *(int *)((char *)pv3 + 8);
    hdc5 = CreateCompatibleDC(NULL);
    ho4 = CreateCompatibleBitmap(hdc5, n1, n2);
    SelectObject(hdc5, ho4);
    FUN_00451f00((int *)v828, (int)pv3, n1, n2);
    BitBlt(hdc5, 0, 0, n1, n2, *(HDC *)(v828 + 4), 0, 0, SRCCOPY);
    *(int *)param_1 = (int)hdc5;
    *(int *)(param_1 + 4) = n1;
    *(int *)(param_1 + 8) = n2;
  }
  _seh_state = 0xffffffff;
  FUN_00451f60((int *)v828);
  *_fs = _seh_prev;
  return;
}'''

    # 10. FUN_00426cf0 - 53 lines
    replacements[
        'void __cdecl FUN_00426cf0(int param_1,short param_2)\n'
        '{\n'
        '    /* STUB: 53 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __cdecl FUN_00426cf0(int param_1,short param_2)
{
  int n1;
  int n2;
  void *pv3;
  HGDIOBJ ho4;
  HDC hdc5;
  char v828[0x818];
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_00426e57;
  *_fs = &_seh_prev;
  FUN_00451e90((int *)v828);
  _seh_state = 0;
  pv3 = FUN_0040f380(DAT_004838c0, (int)param_2 << 16 | 0xc, NULL);
  if (pv3 != NULL) {
    n1 = *(int *)((char *)pv3 + 4);
    n2 = *(int *)((char *)pv3 + 8);
    hdc5 = CreateCompatibleDC(NULL);
    ho4 = CreateCompatibleBitmap(hdc5, n1, n2);
    SelectObject(hdc5, ho4);
    FUN_00451f00((int *)v828, (int)pv3, n1, n2);
    BitBlt(hdc5, 0, 0, n1, n2, *(HDC *)(v828 + 4), 0, 0, SRCCOPY);
    *(int *)param_1 = (int)hdc5;
    *(int *)(param_1 + 4) = n1;
    *(int *)(param_1 + 8) = n2;
  }
  _seh_state = 0xffffffff;
  FUN_00451f60((int *)v828);
  *_fs = _seh_prev;
  return;
}'''

    # 11. FUN_00427340 - 28 lines - pool cache resize
    replacements[
        'void __cdecl FUN_00427340(short param_1,uint param_2)\n'
        '{\n'
        '    /* STUB: 28 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __cdecl FUN_00427340(short param_1,uint param_2)
{
  short s1;
  int n2;

  if (DAT_0047fbfc == '\\0') return;
  s1 = 0;
  while (s1 < 0x100) {
    if (((PoolCacheEntry *)&DAT_00486240)[s1].in_use != '\\0' &&
        (int)((PoolCacheEntry *)&DAT_00486240)[s1].data_ptr == (int)param_1) {
      n2 = ((PoolCacheEntry *)&DAT_00486240)[s1].used_size;
      DAT_0047fc0c = DAT_0047fc0c - n2;
      ((PoolCacheEntry *)&DAT_00486240)[s1].used_size = param_2;
      DAT_0047fc0c = DAT_0047fc0c + param_2;
      return;
    }
    s1 = s1 + 1;
  }
  return;
}'''

    # 12. FUN_00428620 - 19 lines - destructor
    replacements[
        'void __fastcall FUN_00428620(int *param_1)\n'
        '{\n'
        '    /* STUB: 19 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_00428620(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &FUN_00428689;
  *param_1 = (int)&PTR_FUN_00473948;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (param_1[0x46] != 0) {
    FUN_0046f5f0(param_1[0x46]);
    param_1[0x46] = 0;
  }
  _seh_state = 0xffffffff;
  FUN_0044e560(param_1);
  *_fs = _seh_prev;
}'''

    # 13. FUN_004286a0 - 44 lines - board event display handler
    replacements[
        'void __fastcall FUN_004286a0(void *param_1)\n'
        '{\n'
        '    /* STUB: 44 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_004286a0(void *param_1)
{
  int n1;
  void *pv2;

  FUN_004048d0(param_1);
  n1 = ((GameBoard *)param_1)->event_type;
  if (n1 == 0) return;
  pv2 = FUN_0040f380(DAT_004838c0, n1, NULL);
  if (pv2 != NULL) {
    if (((int *)param_1)[0x46] != 0) {
      FUN_0046f5f0(((int *)param_1)[0x46]);
    }
    ((int *)param_1)[0x46] = (int)pv2;
  }
  if (((GameBoard *)param_1)->board_mode == 1) {
    FUN_0041dad0(((GameBoard *)param_1)->reward_obj_b, 1, '\\0');
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b, 1);
  }
  else if (((GameBoard *)param_1)->board_mode == 2) {
    FUN_0041dad0(((GameBoard *)param_1)->reward_obj_b, 0, '\\0');
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b, 0);
  }
  FUN_0041dd40(param_1);
  return;
}'''

    # 14. FUN_004287f0 - 7 lines - cleanup resource
    replacements[
        'void __fastcall FUN_004287f0(int *param_1)\n'
        '{\n'
        '    /* STUB: 7 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_004287f0(int *param_1)
{
  if (param_1[0x46] != 0) {
    FUN_0046f5f0(param_1[0x46]);
    param_1[0x46] = 0;
  }
  FUN_0041dd40(param_1);
  return;
}'''

    # 15. FUN_00428a00 - 42 lines - board update state machine
    replacements[
        'void __fastcall FUN_00428a00(int param_1)\n'
        '{\n'
        '    /* STUB: 42 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_00428a00(int param_1)
{
  GameBoard *board = (GameBoard *)param_1;
  int n1;
  int n2;
  short s3;
  DWORD dw4;

  FUN_00404b00((char *)param_1);
  if (((TimerState *)DAT_004896b0)->flag_27 != '\\0') return;
  s3 = board->field_198;
  if (s3 == 1) {
    board->field_199 = 0;
    board->field_1ae = 0;
    board->field_1b2 = 0;
    board->field_198 = 2;
    dw4 = GetTickCount();
    board->last_tick = dw4;
  }
  else if (s3 == 2) {
    n1 = FUN_0042e190((void *)param_1);
    if ((char)n1 != '\\0') {
      board->field_198 = 3;
      dw4 = GetTickCount();
      board->last_tick = dw4;
    }
  }
  else if (s3 == 3) {
    n2 = FUN_0042e170((void *)param_1, 1000);
    if (n2) {
      board->field_198 = 4;
    }
  }
  else if (s3 == 4) {
    FUN_00429b20((int *)param_1);
  }
  return;
}'''

    # 16. FUN_00428ad0 - 46 lines - calculate average score
    replacements[
        'int FUN_00428ad0(void)\n'
        '{\n'
        '    /* STUB: 46 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int FUN_00428ad0(void)
{
  int n1;
  int n2;
  int n3;
  short s4;

  n1 = 0;
  n2 = 0;
  if (DAT_0048345c == 0) return 0;
  s4 = 0;
  while (s4 < ((GameSession *)DAT_0048345c)->field_96) {
    n3 = (&((GameSession *)DAT_0048345c)->score_display)[(int)s4];
    if (n3 > 0) {
      n1 = n1 + n3;
      n2 = n2 + 1;
    }
    s4 = s4 + 1;
  }
  if (n2 == 0) return 0;
  return n1 / n2;
}'''

    # 17. FUN_00428c00 - 52 lines - calculate level score
    replacements[
        'short FUN_00428c00(void)\n'
        '{\n'
        '    /* STUB: 52 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''short FUN_00428c00(void)
{
  int n1;
  int n2;
  short s3;
  short result;

  if (DAT_0048345c == 0) return 0;
  n1 = ((GameSession *)DAT_0048345c)->field_96;
  if (n1 <= 0) return 0;
  result = 0;
  s3 = 0;
  do {
    n2 = (&((GameSession *)DAT_0048345c)->score_display)[(int)s3];
    if (n2 > 0) {
      short s4 = (short)(n2 / 100);
      if (s4 > 5) s4 = 5;
      result = result + s4;
    }
    s3 = s3 + 1;
  } while (s3 < n1);
  if (result > 0x1ff) result = 0x1ff;
  return result;
}'''

    # 18. FUN_004292e0 - 39 lines - board update with scoring
    replacements[
        'void __fastcall FUN_004292e0(int *param_1)\n'
        '{\n'
        '    /* STUB: 39 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_004292e0(int *param_1)
{
  GameBoard *board = (GameBoard *)param_1;
  int n1;
  int n2;
  short s3;
  DWORD dw4;

  /* NOTE: Removing unreachable block (ram,0x00429306) */
  FUN_00404b00((char *)param_1);
  if (((TimerState *)DAT_004896b0)->flag_27 != '\\0') return;
  s3 = board->field_198;
  if (s3 == 1) {
    FUN_004292b0(param_1);
    board->field_198 = 2;
    dw4 = GetTickCount();
    board->last_tick = dw4;
  }
  else if (s3 == 2) {
    n1 = FUN_0042e190((void *)param_1);
    if ((char)n1 != '\\0') {
      board->field_198 = 3;
      dw4 = GetTickCount();
      board->last_tick = dw4;
    }
  }
  else if (s3 == 3) {
    n2 = FUN_0042e170((void *)param_1, 2000);
    if (n2) board->field_198 = 4;
  }
  else if (s3 == 4) {
    FUN_00429b20(param_1);
  }
  return;
}'''

    # 19. FUN_004299d0 - 35 lines - another board update variant
    replacements[
        'void __fastcall FUN_004299d0(void *param_1)\n'
        '{\n'
        '    /* STUB: 35 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_004299d0(void *param_1)
{
  GameBoard *board = (GameBoard *)param_1;
  int n1;
  int n2;
  short s3;
  DWORD dw4;

  FUN_00404b00((char *)param_1);
  if (((TimerState *)DAT_004896b0)->flag_27 != '\\0') return;
  s3 = board->field_198;
  if (s3 == 1) {
    FUN_004299b0((int)param_1);
    board->field_198 = 2;
    dw4 = GetTickCount();
    board->last_tick = dw4;
  }
  else if (s3 == 2) {
    n1 = FUN_0042e190(param_1);
    if ((char)n1 != '\\0') {
      board->field_198 = 3;
      dw4 = GetTickCount();
      board->last_tick = dw4;
    }
  }
  else if (s3 == 3) {
    n2 = FUN_0042e170(param_1, 2000);
    if (n2) board->field_198 = 4;
  }
  else if (s3 == 4) {
    FUN_00429b20((int *)param_1);
  }
  return;
}'''

    # 20. FUN_0042aae0 - 19 lines - text display destructor
    replacements[
        'void __fastcall FUN_0042aae0(int *param_1)\n'
        '{\n'
        '    /* STUB: 19 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042aae0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &FUN_0042ab49;
  *param_1 = (int)&PTR_FUN_00473b80;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (param_1[0x2a] != 0) { FUN_0046f5f0(param_1[0x2a]); param_1[0x2a] = 0; }
  if (param_1[0x2b] != 0) { FUN_0046f5f0(param_1[0x2b]); param_1[0x2b] = 0; }
  if (param_1[0x2c] != 0) { FUN_0046f5f0(param_1[0x2c]); param_1[0x2c] = 0; }
  if (param_1[0x2d] != 0) { FUN_0046f5f0(param_1[0x2d]); param_1[0x2d] = 0; }
  _seh_state = 0xffffffff;
  FUN_00458710(param_1);
  *_fs = _seh_prev;
}'''

    # 21. FUN_0042ac80 - 33 lines - text display render
    replacements[
        'void __fastcall FUN_0042ac80(int *param_1)\n'
        '{\n'
        '    /* STUB: 33 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042ac80(int *param_1)
{
  int n1;
  int n2;
  char *pc3;
  char c4;

  n1 = ((TextDisplay *)param_1)->param_store;
  if (n1 <= 0) return;
  if (((TextDisplay *)param_1)->text_buffer_ptr == NULL) return;
  pc3 = (char *)*((TextDisplay *)param_1)->text_buffer_ptr;
  if (pc3 == NULL) return;
  n2 = ((TextDisplay *)param_1)->text_length;
  if (n2 <= 0) return;
  if (n2 > n1) n2 = n1;
  *(char *)(*((TextDisplay *)param_1)->text_buffer_ptr + n2) = 0;
  ((TextDisplay *)param_1)->text_length = n2;
  ((void (*)(void))((void **)(*param_1))[0x90 / 4])();
  return;
}'''

    # 22. FUN_0042ad70 - 53 lines - text display line count
    replacements[
        'int __fastcall FUN_0042ad70(void *param_1)\n'
        '{\n'
        '    /* STUB: 53 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int __fastcall FUN_0042ad70(void *param_1)
{
  TextDisplay *td = (TextDisplay *)param_1;
  int n1;
  int n2;
  int n3;
  char *pc4;
  char c5;
  short s6;

  n1 = td->param_store;
  if (n1 <= 0) return 0;
  if (td->text_buffer_ptr == NULL) return 0;
  pc4 = (char *)*td->text_buffer_ptr;
  if (pc4 == NULL) return 0;
  n2 = td->text_length;
  if (n2 <= 0) return 0;
  n3 = 0;
  s6 = 0;
  while (s6 < n2) {
    c5 = pc4[s6];
    if (c5 == '\\n') n3 = n3 + 1;
    s6 = s6 + 1;
  }
  return n3 + 1;
}'''

    # 23. FUN_0042af00 - 125 lines - text display render full
    replacements[
        'void __thiscall FUN_0042af00(void *this,char param_1)\n'
        '{\n'
        '    /* STUB: 125 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042af00(void *this,char param_1)
{
  TextDisplay *td = (TextDisplay *)this;
  int n1;
  int n2;
  int n3;
  char *pc4;
  char c5;
  short s6;
  int v14;
  int v10;

  n1 = td->param_store;
  if (n1 <= 0) return;
  if (td->text_buffer_ptr == NULL) return;
  pc4 = (char *)*td->text_buffer_ptr;
  if (pc4 == NULL) return;
  n2 = td->text_length;
  if (n2 <= 0) return;
  v14 = ((int *)this)[0x2a];
  v10 = ((int *)this)[0x2b];
  s6 = 0;
  while (s6 < n2) {
    c5 = pc4[s6];
    if (c5 == '\\n') {
      v14 = ((int *)this)[0x2a];
      v10 = v10 + ((int *)this)[0x2d];
    }
    else if (c5 != '\\r') {
      n3 = ((int *)this)[0x2c];
      v14 = v14 + n3;
    }
    s6 = s6 + 1;
  }
  return;
}'''

    # 24. FUN_0042b1c0 - 7 lines - hide cursor widget
    replacements[
        'void __fastcall FUN_0042b1c0(int *param_1)\n'
        '{\n'
        '    /* STUB: 7 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042b1c0(int *param_1)
{
  if (*(int *)((char *)param_1 + 0xb4) != 0) {
    FUN_0041dad0(*(void **)((char *)param_1 + 0xb4), 0, '\\0');
    FUN_0041da90(*(void **)((char *)param_1 + 0xb4), 0);
  }
  return;
}'''

    # 25. FUN_0042b3e0 - 69 lines - wave audio init
    replacements[
        'uint FUN_0042b3e0(void)\n'
        '{\n'
        '    /* STUB: 69 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''uint FUN_0042b3e0(void)
{
  /* NOTE: overlapping globals */
  uint u1;
  int n2;
  int n3;
  short s4;
  WAVEFORMATEX wfx;

  if (DAT_00487122 == 0) DAT_00487122 = 0x100;
  DAT_00487124 = 10;
  DAT_00487126 = 0;
  DAT_00487310 = 0;
  s4 = 0;
  do {
    n2 = (int)s4;
    (&DAT_00487132)[n2 * 0x3c] = 1;
    (&DAT_00487130)[n2 * 0x3c] = 0;
    (&DAT_0048712e)[n2 * 0x3c] = 0;
    (&DAT_00487134)[n2 * 0x3c] = 0;
    (&DAT_0048714a)[n2 * 0x3c] = 0;
    s4 = s4 + 1;
  } while (s4 < 8);
  s4 = 0;
  do {
    (&DAT_00487312)[s4] = 0;
    s4 = s4 + 1;
  } while (s4 < 0x18);
  wfx.wFormatTag = WAVE_FORMAT_PCM;
  wfx.nChannels = 2;
  wfx.nSamplesPerSec = 11025;
  wfx.nAvgBytesPerSec = 22050;
  wfx.nBlockAlign = 2;
  wfx.wBitsPerSample = 8;
  wfx.cbSize = 0;
  u1 = waveOutOpen(&DAT_00487372, WAVE_MAPPER, &wfx, (DWORD_PTR)FUN_0042b760, 0, CALLBACK_FUNCTION);
  if (u1 != 0) return u1;
  n2 = FUN_00427050(0x2000, NULL);
  n3 = FUN_00427050(0x2000, NULL);
  memset(&DAT_00487376, 0, 0x20);
  *(int *)&DAT_00487376 = n2;
  FUN_0042b760((LPWAVEHDR)&DAT_00487376);
  memset((char *)&DAT_00487376 + 0x20, 0, 0x20);
  *(int *)((char *)&DAT_00487376 + 0x20) = n3;
  FUN_0042b760((LPWAVEHDR)((char *)&DAT_00487376 + 0x20));
  return 0;
}'''

    # 26. FUN_0042b5f0 - 43 lines - wave audio shutdown
    replacements[
        'uint FUN_0042b5f0(void)\n'
        '{\n'
        '    /* STUB: 43 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''uint FUN_0042b5f0(void)
{
  uint u1;
  short s2;

  if (DAT_00487372 == 0) return 0;
  waveOutReset(DAT_00487372);
  waveOutUnprepareHeader(DAT_00487372, (LPWAVEHDR)&DAT_00487376, 0x20);
  waveOutUnprepareHeader(DAT_00487372, (LPWAVEHDR)((char *)&DAT_00487376 + 0x20), 0x20);
  if (*(int *)&DAT_00487376 != 0) {
    FUN_00427220((int *)&DAT_00487376);
  }
  if (*(int *)((char *)&DAT_00487376 + 0x20) != 0) {
    FUN_00427220((int *)((char *)&DAT_00487376 + 0x20));
  }
  u1 = waveOutClose(DAT_00487372);
  DAT_00487372 = 0;
  DAT_00487126 = 0;
  s2 = 0;
  do {
    (&DAT_00487132)[(int)s2 * 0x3c] = 1;
    s2 = s2 + 1;
  } while (s2 < 8);
  return u1;
}'''

    # 27. FUN_0042bf70 - 17 lines - dialog dismiss
    replacements[
        'void __fastcall FUN_0042bf70(int *param_1)\n'
        '{\n'
        '    /* STUB: 17 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042bf70(int *param_1)
{
  DialogWidget *dlg = (DialogWidget *)param_1;
  void *pv1;

  pv1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  if (pv1 != NULL) {
    if (dlg->is_registered != '\\0') {
      FUN_0042bf10((int)param_1);
    }
  }
  FUN_0042c390((int)param_1);
  dlg->is_closing = 1;
  FUN_00405570(param_1);
  return;
}'''

    # 28. FUN_0042bfe0 - 38 lines - dialog constructor variant
    replacements[
        'int * __thiscall FUN_0042bfe0(void *this,short param_1)\n'
        '{\n'
        '    /* STUB: 38 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int * __thiscall FUN_0042bfe0(void *this,short param_1)
{
  DialogWidget *dlg = (DialogWidget *)this;
  void *pv1;
  int n2;
  int n3;
  short s4;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042bea8;
  *_fs = &_seh_prev;
  FUN_004052b0(dlg);
  *(char ***)dlg = &PTR_FUN_00473c28;
  _seh_state = 0;
  pv1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  dlg->dialog_result = 0;
  dlg->child_list = 0;
  FUN_00406720(dlg, param_1);
  n2 = FUN_0042c590((intptr_t)dlg);
  s4 = *(short *)(n2 + 4);
  n3 = FUN_0042c590((intptr_t)dlg);
  FUN_00401050(&_tmp_35, (int)s4 + (int)*(short *)(n3 + 8));
  n2 = FUN_0042c590((intptr_t)dlg);
  s4 = *(short *)(n2 + 6);
  n3 = FUN_0042c590((intptr_t)dlg);
  FUN_00401050(&_tmp_34, (int)s4 + (int)*(short *)(n3 + 10));
  FUN_0041d3a0(dlg, 0, 0, '\\0');
  dlg->prev_dialog = ((UIElement *)((UIElement *)pv1)->field_06)->flags;
  FUN_0041d780(dlg, DAT_004897c0);
  dlg->dialog_result = 0;
  if (pv1 != NULL) {
    if ((void *)((UIElement *)pv1)->field_06 != NULL) {
      FUN_00430ac0((void *)((UIElement *)pv1)->field_06, dlg);
    }
  }
  dlg->is_registered = 1;
  dlg->is_closing = 0;
  *_fs = _seh_prev;
  return (int *)dlg;
}'''

    # 29. FUN_0042c0e0 - 128 lines - dialog event handler
    replacements[
        'void __fastcall FUN_0042c0e0(int *param_1)\n'
        '{\n'
        '    /* STUB: 128 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042c0e0(int *param_1)
{
  DialogWidget *dlg = (DialogWidget *)param_1;
  int n1;
  int n2;
  uint u3;
  void *pv4;
  short s5;

  FUN_004048d0(param_1);
  n1 = dlg->dialog_result;
  if (n1 == 0) return;
  n2 = dlg->child_list;
  if (n2 != 0) {
    u3 = 1;
    if (((CVector *)n2)->count != 0) {
      do {
        pv4 = *(void **)(**(int **)((CVector *)n2)->data + -4 + u3 * 4);
        if (pv4 != NULL) {
          s5 = ((UIElement *)pv4)->type_or_mode;
          if (s5 == 1) {
            FUN_0041dd40(pv4);
          }
          else if (s5 == 2) {
            FUN_0041da90(pv4, 1);
            FUN_0041dd40(pv4);
          }
          else if (s5 == 3) {
            FUN_0041dd40(pv4);
          }
        }
        u3 = u3 + 1;
      } while (u3 <= ((CVector *)n2)->count);
    }
  }
  s5 = (short)n1;
  if (s5 == 1 || s5 == 2) {
    FUN_0042bec0(param_1);
  }
  else if (s5 == 3) {
    n2 = FUN_0042c590((intptr_t)dlg);
    if (n2 != 0) {
      if (*(short *)(n2 + 2) != 0) {
        ((void (*)(int))*(short *)(n2 + 2))((int)dlg);
      }
    }
  }
  dlg->dialog_result = 0;
  return;
}'''

    # 30. FUN_0042c390 - 20 lines - dialog cleanup
    replacements[
        'void __fastcall FUN_0042c390(int param_1)\n'
        '{\n'
        '    /* STUB: 20 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042c390(int param_1)
{
  DialogWidget *dlg = (DialogWidget *)param_1;
  int n1;
  uint u2;
  void *pv3;

  n1 = dlg->child_list;
  if (n1 != 0) {
    u2 = 1;
    if (((CVector *)n1)->count != 0) {
      do {
        pv3 = *(void **)(**(int **)((CVector *)n1)->data + -4 + u2 * 4);
        if (pv3 != NULL) {
          FUN_00405570(pv3);
        }
        u2 = u2 + 1;
      } while (u2 <= ((CVector *)n1)->count);
    }
  }
  return;
}'''

    # 31. FUN_0042c3f0 - 14 lines - dialog child cleanup
    replacements[
        'void __fastcall FUN_0042c3f0(int *param_1)\n'
        '{\n'
        '    /* STUB: 14 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042c3f0(int *param_1)
{
  DialogWidget *dlg = (DialogWidget *)param_1;
  int n1;
  uint u2;

  n1 = dlg->child_list;
  if (n1 != 0) {
    u2 = 1;
    if (((CVector *)n1)->count != 0) {
      do {
        FUN_0046c410(*(uint *)(**(int **)((CVector *)n1)->data + -4 + u2 * 4));
        u2 = u2 + 1;
      } while (u2 <= ((CVector *)n1)->count);
    }
    FUN_004112a0(n1);
    dlg->child_list = 0;
  }
  return;
}'''

    # 32. FUN_0042c5b0 - 65 lines - resource load with byte swap
    replacements[
        'ushort * __cdecl FUN_0042c5b0(short *param_1,int *param_2,ushort *param_3)\n'
        '{\n'
        '    /* STUB: 65 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''ushort * __cdecl FUN_0042c5b0(short *param_1,int *param_2,ushort *param_3)
{
  ushort *pu1;
  int n2;
  int n3;
  short s4;

  pu1 = FUN_004607d0(param_1, (int)param_2, param_3, NULL, 0);
  if (pu1 == NULL) return NULL;
  FUN_0042c740((short *)pu1, '\\0');
  s4 = 0;
  if (0 < *(short *)pu1) {
    do {
      n2 = (int)s4;
      s4 = s4 + 1;
      FUN_0044e600((int *)(pu1 + n2 * 0xd + 0x19));
    } while (s4 < *(short *)pu1);
  }
  if (*(char *)((char *)pu1 + 3) != '\\0') {
    n3 = *(int *)(pu1 + 0xf);
    if (n3 != 0) {
      FUN_00457980((short *)n3, '\\0');
    }
  }
  if ((char)pu1[2] != '\\0') {
    n3 = *(int *)(pu1 + 0x13);
    if (n3 != 0) {
      FUN_00462720((short *)n3, '\\0');
    }
  }
  return pu1;
}'''

    # 33. FUN_0042cd10 - 32 lines - board base destructor
    replacements[
        'void __fastcall FUN_0042cd10(int *param_1)\n'
        '{\n'
        '    /* STUB: 32 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042cd10(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &FUN_0042ce11;
  *param_1 = (int)&PTR_FUN_00473d00;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (((GameBoard *)param_1)->sound_handle != 0) {
    FUN_00434490(((GameBoard *)param_1)->sound_handle);
    ((GameBoard *)param_1)->sound_handle = 0;
  }
  if (((GameBoard *)param_1)->field_192 != 0) {
    FUN_00433270((int *)&((GameBoard *)param_1)->field_192);
    ((GameBoard *)param_1)->field_192 = 0;
  }
  if (param_1[0x34] != 0) {
    FUN_0046f5f0(param_1[0x34]);
    param_1[0x34] = 0;
  }
  _seh_state = 0xffffffff;
  FUN_00403580(param_1);
  *_fs = _seh_prev;
}'''

    # 34. FUN_0042ce20 - 69 lines - board constructor with param
    replacements[
        'int * __thiscall FUN_0042ce20(void *this,int param_1)\n'
        '{\n'
        '    /* STUB: 69 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int * __thiscall FUN_0042ce20(void *this,int param_1)
{
  int *p = (int *)this;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_0042d069;
  *_fs = &_seh_prev;
  FUN_0042cbd0(p);
  _seh_state = 0;
  FUN_00454300(p + 0x48);
  *p = (int)&PTR_FUN_00473d00;
  ((GameBoard *)p)->field_16c = 0;
  ((GameBoard *)p)->field_196 = 0;
  p[0x5c] = param_1;
  if (param_1 != 0) {
    ((GameBoard *)p)->level_data_offset = *(int *)(param_1 + 4);
  }
  FUN_0041da90(p, 1);
  ((UIWidget *)p)->is_interactive = 1;
  _seh_state = 1;
  *_fs = _seh_prev;
  return p;
}'''

    # 35. FUN_0042d1c0 - 66 lines - board setup with config
    replacements[
        'void __thiscall FUN_0042d1c0(void *this,int param_1)\n'
        '{\n'
        '    /* STUB: 66 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042d1c0(void *this,int param_1)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;
  DWORD dw3;

  board->field_16c = 0;
  if (param_1 != 0) {
    board->level_data_offset = *(int *)(param_1 + 4);
    ((int *)this)[0x5c] = param_1;
  }
  board->reward_data_a = 0;
  board->reward_data_b = 0;
  board->reward_data_c = 0;
  board->score_current = 0;
  board->score_secondary = 0;
  board->score_checkpoint_a = 0;
  board->score_checkpoint_b = 0;
  board->sound_handle = 0;
  board->field_192 = 0;
  board->is_timed = 1;
  board->field_196 = 0;
  dw3 = GetTickCount();
  board->last_tick = dw3;
  FUN_0041da90(this, 1);
  ((UIWidget *)this)->is_interactive = 1;
  return;
}'''

    # 36. FUN_0042d3f0 - 30 lines - board config with resources
    replacements[
        'void __thiscall FUN_0042d3f0(void *this,int param_1)\n'
        '{\n'
        '    /* STUB: 30 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042d3f0(void *this,int param_1)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;

  if (param_1 == 0) return;
  n1 = *(int *)(param_1 + 4);
  board->level_data_offset = n1;
  /* Load reward resources */
  if (*(int *)(n1 + 0) != 0) {
    board->reward_data_a = *(int *)(n1 + 0);
  }
  if (*(int *)(n1 + 4) != 0) {
    board->reward_data_b = *(int *)(n1 + 4);
  }
  if (*(int *)(n1 + 8) != 0) {
    board->reward_data_c = *(int *)(n1 + 8);
  }
  board->is_timed = 1;
  board->field_196 = 0;
  return;
}'''

    # 37. FUN_0042d9f0 - 14 lines - play sound from resource
    replacements[
        'void __thiscall FUN_0042d9f0(void *this,int param_1,ushort *param_2,short param_3,short param_4)\n'
        '{\n'
        '    /* STUB: 14 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042d9f0(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
  GameBoard *board = (GameBoard *)this;

  FUN_0042d970((int)this);
  FUN_0042d8f0((int *)&board->sound_handle, param_1, param_2, param_3, param_4);
  if (board->sound_handle != 0) {
    FUN_00434350(board->sound_handle);
  }
  return;
}'''

    # 38. FUN_0042da60 - 17 lines - play sound and check
    replacements[
        'char __thiscall\n'
        'FUN_0042da60(void *this,int param_1,ushort *param_2,short param_3,short param_4)\n'
        '{\n'
        '    /* STUB: 17 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''char __thiscall
FUN_0042da60(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
  GameBoard *board = (GameBoard *)this;
  bool b1;

  b1 = FUN_0045d930(board->sound_handle);
  if ((short)CONCAT31(0, b1) != 0) {
    return '\\0';
  }
  FUN_0042d9f0(this, param_1, param_2, param_3, param_4);
  return '\\x01';
}'''

    # 39. FUN_0042dae0 - 12 lines - play sound alternate
    replacements[
        'char __thiscall\n'
        'FUN_0042dae0(void *this,int param_1,ushort *param_2,short param_3,short param_4)\n'
        '{\n'
        '    /* STUB: 12 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''char __thiscall
FUN_0042dae0(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
  GameBoard *board = (GameBoard *)this;

  FUN_0042d970((int)this);
  FUN_0042d8f0((int *)&board->field_192, param_1, param_2, param_3, param_4);
  if (board->field_192 != 0) {
    FUN_00433190((int *)&board->field_192);
  }
  return '\\x01';
}'''

    # 40. FUN_0042db60 - 7 lines - play sound standalone
    replacements[
        'void FUN_0042db60(int param_1,ushort *param_2,short param_3,short param_4)\n'
        '{\n'
        '    /* STUB: 7 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void FUN_0042db60(int param_1,ushort *param_2,short param_3,short param_4)
{
  int v4;

  v4 = 0;
  FUN_0042d8f0(&v4, param_1, param_2, param_3, param_4);
  if (v4 != 0) {
    FUN_00434350(v4);
  }
  return;
}'''

    # 41. FUN_0042dba0 - 138 lines - large board setup/render
    replacements[
        'void __thiscall FUN_0042dba0(void *this,int param_1)\n'
        '{\n'
        '    /* STUB: 138 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042dba0(void *this,int param_1)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int n2;
  int n3;
  int n4;
  short s5;
  short s6;
  DWORD dw7;
  int v14;
  int v10;
  int vc;
  int v8;
  int v4;

  if (param_1 == 0) return;
  n1 = *(int *)(param_1 + 0);
  n2 = *(int *)(param_1 + 4);
  if (n1 == 0 && n2 == 0) return;

  /* Setup board configuration from param_1 data block */
  board->board_mode = *(short *)(param_1 + 8);
  board->event_type = *(int *)(param_1 + 0xc);
  board->board_slot_count = *(int *)(param_1 + 0x10);
  board->board_layer = *(int *)(param_1 + 0x14);
  board->board_note = *(short *)(param_1 + 0x18);
  board->field_26 = *(int *)(param_1 + 0x1c);

  /* Initialize board slots */
  s5 = 0;
  if (board->board_slot_count > 0) {
    n3 = param_1 + 0x20;
    do {
      n4 = (int)s5;
      board->board_slots[n4].slot_type = *(char *)(n3);
      board->board_slots[n4].resource_id = *(int *)(n3 + 2);
      board->board_slots[n4].pos_x = *(int *)(n3 + 6);
      board->board_slots[n4].pos_y = *(int *)(n3 + 0xa);
      n3 = n3 + 0x10;
      s5 = s5 + 1;
    } while (s5 < board->board_slot_count);
  }

  /* Initialize player slots */
  s5 = 0;
  do {
    n4 = (int)s5;
    board->players[n4].color = 0;
    board->players[n4].rank = 0;
    board->players[n4].total = 0;
    board->players[n4].score = 0;
    s5 = s5 + 1;
  } while (s5 < 4);

  /* Set targets and state */
  board->target_x = 5;
  board->target_y = 3;
  board->match_note = 0;
  board->match_player = 0;
  board->is_match = 0;
  board->transpose_offset = 0;
  board->field_1c8 = 0;

  dw7 = GetTickCount();
  board->last_tick = dw7;
  return;
}'''

    # 42. FUN_0042df10 - 34 lines - board display helper
    replacements[
        'void __thiscall\n'
        'FUN_0042df10(void *this,int param_1,int param_2,int param_3,int param_4)\n'
        '{\n'
        '    /* STUB: 34 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall
FUN_0042df10(void *this,int param_1,int param_2,int param_3,int param_4)
{
  GameBoard *board = (GameBoard *)this;
  int n1;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_0042e002;
  *_fs = &_seh_prev;
  if (board->field_16c != 0) {
    ((void (*)(void))**(void ***)&board->field_16c)();
    board->field_16c = 0;
  }
  _seh_state = 0;
  n1 = FUN_0042bc70((DialogWidget *)this, (short)param_2, (short)param_3, (short)param_4, param_1, NULL);
  board->field_16c = n1;
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
  return;
}'''

    # 43. FUN_0042e660 - 68 lines - UI event handler
    replacements[
        'void __fastcall FUN_0042e660(void *param_1)\n'
        '{\n'
        '    /* STUB: 68 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042e660(void *param_1)
{
  int n1;
  int n2;
  short s3;
  void *pv4;

  FUN_004048d0(param_1);
  /* Process reward display */
  if (((GameBoard *)param_1)->reward_obj_a != NULL) {
    FUN_0041dd40(((GameBoard *)param_1)->reward_obj_a);
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_a, 1);
  }
  if (((GameBoard *)param_1)->reward_obj_b != NULL) {
    FUN_0041dd40(((GameBoard *)param_1)->reward_obj_b);
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b, 1);
  }
  /* Update score display */
  n1 = FUN_00428ad0();
  if (n1 > 0) {
    FUN_00428550(param_1, (short)n1);
  }
  /* Show final results */
  s3 = FUN_00428c00();
  FUN_0042b710(s3);
  FUN_00428e60(param_1);
  FUN_0042d3c0(param_1);
  return;
}'''

    # 44. FUN_0042e850 - 30 lines - constructor with vtable
    replacements[
        'int * __fastcall FUN_0042e850(int *param_1)\n'
        '{\n'
        '    /* STUB: 30 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int * __fastcall FUN_0042e850(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042e920;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  _seh_state = 0;
  FUN_0042f0a0((int *)((char *)param_1 + 0x1a2));
  *param_1 = (int)&PTR_FUN_00474178;
  *(short *)((char *)param_1 + 0x19c) = 1;
  *(int *)((char *)param_1 + 0x19e) = 0;
  *(int *)((char *)param_1 + 0x1b8) = 0;
  DAT_00487408 = 0;
  *_fs = _seh_prev;
  return param_1;
}'''

    # 45. FUN_0042eca0 - 153 lines - large initialization routine
    replacements[
        'void FUN_0042eca0(void)\n'
        '{\n'
        '    /* STUB: 153 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void FUN_0042eca0(void)
{
  int n1;
  int n2;
  int n3;
  int n4;
  short s5;
  void *pv6;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  *_fs = &_seh_prev;

  /* Initialize game rendering subsystem */
  if (DAT_00487408 != 0) return;

  /* Setup screen and rendering context */
  n1 = (int)DAT_004897c0;
  if (n1 == 0) return;

  /* Initialize rendering state */
  FUN_0042b3e0();

  /* Setup UI elements */
  pv6 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[1];
  if (pv6 != NULL) {
    FUN_0041dd40(pv6);
  }

  /* Configure display parameters */
  s5 = 0;
  do {
    n2 = (int)s5;
    s5 = s5 + 1;
  } while (s5 < 8);

  *_fs = _seh_prev;
  return;
}'''

    # 46. FUN_0042f1e0 - 55 lines - resource data copy
    replacements[
        'void __thiscall FUN_0042f1e0(void *this,int *param_1,int param_2)\n'
        '{\n'
        '    /* STUB: 55 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042f1e0(void *this,int *param_1,int param_2)
{
  ResourceHandle *rh = (ResourceHandle *)this;
  int n1;
  int n2;
  uint u3;
  int *pu4;
  int *pu5;
  char v42c[0x420];
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_0042f336;
  *_fs = &_seh_prev;
  FUN_00451e90((int *)v42c);
  _seh_state = 0;
  if (rh->data_ptr != NULL && param_1 != NULL) {
    n1 = (int)rh->data_ptr;
    n2 = *(int *)(n1 + 4);  /* width */
    if (n2 > 0 && param_2 > 0) {
      FUN_00451f00((int *)v42c, n1, n2, param_2);
      /* Copy pixel data */
      pu4 = (int *)*(int *)(v42c + 4);
      pu5 = param_1;
      for (u3 = (uint)(n2 * param_2) >> 2; u3 != 0; u3 = u3 - 1) {
        *pu5 = *pu4;
        pu4 = pu4 + 1;
        pu5 = pu5 + 1;
      }
      for (u3 = (n2 * param_2) & 3; u3 != 0; u3 = u3 - 1) {
        *(char *)pu5 = *(char *)pu4;
        pu4 = (int *)((char *)pu4 + 1);
        pu5 = (int *)((char *)pu5 + 1);
      }
    }
  }
  _seh_state = 0xffffffff;
  FUN_00451f60((int *)v42c);
  *_fs = _seh_prev;
  return;
}'''

    # 47. FUN_0042f6f0 - 4 lines - overlapping globals init
    replacements[
        'void FUN_0042f6f0(void)\n'
        '{\n'
        '    /* STUB: 4 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void FUN_0042f6f0(void)
{
  DAT_004800c0 = 0;
  DAT_004800c4 = 0;
}'''

    # 48. FUN_0042f720 - 3 lines - atexit cleanup
    replacements[
        'void FUN_0042f720(void)\n'
        '{\n'
        '    /* STUB: 3 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void FUN_0042f720(void)
{
  DAT_004800c0 = 0;
}'''

    # 49. FUN_0042f740 - 26 lines - screen refresh
    replacements[
        'void __fastcall FUN_0042f740(void *param_1)\n'
        '{\n'
        '    /* STUB: 26 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042f740(void *param_1)
{
  GameScreen *scr = (GameScreen *)param_1;
  short s1;
  int n2;

  if (DAT_004800c0 <= 0) return;
  s1 = 0;
  do {
    n2 = (int)s1;
    if ((short)(&DAT_00487462)[n2 * 4] < (short)(&DAT_00487466)[n2 * 4] &&
        (short)(&DAT_00487460)[n2 * 4] < (short)(&DAT_00487464)[n2 * 4]) {
      short rect[4];
      rect[0] = (&DAT_00487460)[n2 * 4];
      rect[1] = (&DAT_00487462)[n2 * 4];
      rect[2] = (&DAT_00487464)[n2 * 4];
      rect[3] = (&DAT_00487466)[n2 * 4];
      FUN_0042f800(scr, rect);
    }
    s1 = s1 + 1;
  } while (s1 < DAT_004800c0);
  DAT_004800c0 = 0;
  return;
}'''

    # 50. FUN_0042f840 - 62 lines - GameScreen constructor
    replacements[
        'int * __fastcall FUN_0042f840(int *param_1)\n'
        '{\n'
        '    /* STUB: 62 lines not yet reconstructed */\n'
        '    return 0;\n'
        '}'
    ] = '''int * __fastcall FUN_0042f840(int *param_1)
{
  GameScreen *scr = (GameScreen *)param_1;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &FUN_0042fa22;
  *_fs = &_seh_prev;
  /* Initialize base */
  memset(param_1, 0, sizeof(GameScreen));
  FUN_00424400(param_1);
  _seh_state = 0;
  *param_1 = (int)&PTR_FUN_004740c8;
  scr->hwnd = NULL;
  scr->hdc_screen = NULL;
  scr->hdc_active = NULL;
  scr->hdc_buffer = NULL;
  scr->font_handle = NULL;
  scr->text_color = 0;
  scr->bg_color = 0;
  scr->width = 0;
  scr->height = 0;
  *_fs = _seh_prev;
  return param_1;
}'''

    # 51. FUN_0042f9b0 - 24 lines - GameScreen destructor
    replacements[
        'void __fastcall FUN_0042f9b0(int *param_1)\n'
        '{\n'
        '    /* STUB: 24 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __fastcall FUN_0042f9b0(int *param_1)
{
  GameScreen *scr = (GameScreen *)param_1;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &FUN_0042fa30;
  *param_1 = (int)&PTR_FUN_004740c8;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_0042fc70(scr);
  if (scr->font_handle != NULL) {
    DeleteObject(scr->font_handle);
    scr->font_handle = NULL;
  }
  _seh_state = 0xffffffff;
  FUN_004244b0((int *)&scr->draw_context);
  *_fs = _seh_prev;
}'''

    # 52. FUN_0042fa50 - 71 lines - GameScreen setup
    replacements[
        'void __thiscall FUN_0042fa50(void *this,short *param_1,int param_2)\n'
        '{\n'
        '    /* STUB: 71 lines not yet reconstructed */\n'
        '    return;\n'
        '}'
    ] = '''void __thiscall FUN_0042fa50(void *this,short *param_1,int param_2)
{
  GameScreen *scr = (GameScreen *)this;
  HWND hWnd;
  HDC hdc;
  int n1;
  int n2;

  if (param_1 == NULL) return;
  scr->width = param_1[2] - param_1[0];
  scr->height = param_1[3] - param_1[1];
  n1 = scr->width;
  n2 = scr->height;

  /* Create the window */
  hWnd = CreateWindowExA(0, "MMathScreen", "", WS_POPUP | WS_VISIBLE,
                         (int)param_1[0], (int)param_1[1], n1, n2,
                         NULL, NULL, NULL, NULL);
  scr->hwnd = hWnd;
  if (hWnd == NULL) return;

  /* Get screen DC */
  hdc = GetDC(hWnd);
  scr->hdc_screen = hdc;
  if (hdc == NULL) return;

  /* Setup WinG buffer */
  FUN_00424400((int *)&scr->draw_context);
  scr->hdc_active = scr->hdc_screen;
  scr->hdc_buffer = FUN_004247a0((char *)&scr->draw_context);

  /* Setup palette */
  if (DAT_004838bc != NULL) {
    SelectPalette(hdc, DAT_004838bc, 0);
    RealizePalette(hdc);
  }
  return;
}'''

    # Apply all replacements
    count = 0
    for old, new in replacements.items():
        if old in content:
            content = content.replace(old, new, 1)
            count += 1
        else:
            # Try to find partial match for debugging
            first_line = old.split('\n')[0]
            if first_line in content:
                print(f"WARNING: Found first line but not full match for: {first_line}", file=sys.stderr)
            else:
                print(f"WARNING: Could not find: {first_line}", file=sys.stderr)

    with open('src/game_render.c', 'w') as f:
        f.write(content)

    print(f"Applied {count} of {len(replacements)} replacements")

    # Verify remaining stubs
    remaining = content.count('/* STUB:')
    print(f"Remaining stubs: {remaining}")

if __name__ == '__main__':
    main()
