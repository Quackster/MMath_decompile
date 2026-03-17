/*
 * game_render.c - Rendering and display
 * Address range: 0x420000 - 0x42FFFF
 * Functions: 465
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00422e70 @ 0x00422e70 */

/* NOTE: overlapping globals */

void FUN_00422e70(void)
{
  _DAT_004861d2 = 0;
  _DAT_004861d0 = 0;
}


/* FUN_00422e80 @ 0x00422e80 */

void FUN_00422e80(void)
{
  _atexit(FUN_00422e90);
}


/* FUN_00422e90 @ 0x00422e90 */

void FUN_00422e90(void) { return; }


/* FUN_00422eb0 @ 0x00422eb0 */

int FUN_00422eb0(void)
{
  return 4;
}


/* FUN_00422ec0 @ 0x00422ec0 */

int __thiscall FUN_00422ec0(GameBoard *this,int param_1)
{
  return CONCAT31((unsigned int)((uint)(param_1 * 0x12) >> 8),
                  (&DAT_00480848)[(uint)this->players[param_1].color * 4]);
}


/* FUN_00422ee0 @ 0x00422ee0 */

int __thiscall FUN_00422ee0(GameBoard *this,int param_1)
{
  return (int)&this->players[param_1];
}


/* FUN_00422f00 @ 0x00422f00 */

bool __thiscall FUN_00422f00(GameBoard *this,int param_1,int param_2)
{
  bool b1;
  int n2;
  
  b1 = false;
  if (this->board_mode == 1) {
    n2 = this->event_type;
    if (n2 < 0x202) {
      if ((n2 != 0x201) && (n2 != 0x101)) {
        return b1;
      }
      return this->match_note == param_2;
    }
    if (n2 < 0x403) {
      if (n2 < 0x401) {
        if (n2 < 0x301) {
          return false;
        }
        if (0x302 < n2) {
          return b1;
        }
      }
      goto sw_501;
    }
    if (n2 < 0x603) {
      if (n2 < 0x601) {
        switch(n2) {
        case 0x501:
        case 0x502:
          break;
        case 0x503:
        case 0x504:
          goto sw_503;
        default:
          goto sw_0042_default;
        }
      }
sw_501:
      if ((this->match_note == param_2) && (this->match_player == param_1)) {
        return true;
      }
      return false;
    }
    if (n2 < 0x603) {
      return false;
    }
    if (0x604 < n2) {
      return b1;
    }
sw_503:
    n2 = param_2 - this->transpose_offset;
    if (n2 < 0) {
      n2 = n2 + 0x2d0;
    }
    if ((this->match_note == n2) && (this->match_player == param_1)) {
      return true;
    }
  }
sw_0042_default:
  return false;
}


/* FUN_00423000 @ 0x00423000 */

bool __thiscall FUN_00423000(void *this,int param_1)
{
    /* STUB: 175 lines not yet reconstructed */
    return 0;
}


/* FUN_00423520 @ 0x00423520 */

byte __thiscall FUN_00423520(void *this,int param_1)
{
    /* STUB: 122 lines not yet reconstructed */
    return 0;
}


/* FUN_00423890 @ 0x00423890 */

void __fastcall FUN_00423890(int param_1)
{
  int n1;
  int n2;
  int *pn3;

  n1 = 0;
  n2 = 1;
  pn3 = (int *)&((GameBoard *)param_1)->players[1].total; /* param_1 + 0x1ec = players[1].total */
  do {
    if (((GameBoard *)param_1)->players[n1].total < *pn3) {
      n1 = n2;
    }
    pn3 = (int *)((char *)pn3 + sizeof(PlayerSlot));
    n2 = n2 + 1;
  } while (n2 < 4);
}


/* FUN_004238d0 @ 0x004238d0 */

void __fastcall FUN_004238d0(int param_1)
{
  int n1;
  int n2;
  int *pn3;

  n1 = 0;
  n2 = 1;
  pn3 = (int *)&((GameBoard *)param_1)->players[1].total; /* param_1 + 0x1ec = players[1].total */
  do {
    if (*pn3 < ((GameBoard *)param_1)->players[n1].total) {
      n1 = n2;
    }
    pn3 = (int *)((char *)pn3 + sizeof(PlayerSlot));
    n2 = n2 + 1;
  } while (n2 < 4);
}


/* FUN_00423910 @ 0x00423910 */

void __fastcall FUN_00423910(int param_1)
{
  int n1;
  int n2;
  int *pn3;

  n1 = 0;
  n2 = 1;
  pn3 = (int *)&((GameBoard *)param_1)->players[1].rank; /* param_1 + 0x1e8 = players[1].rank */
  do {
    if (((GameBoard *)param_1)->players[n1].rank < *pn3) {
      n1 = n2;
    }
    pn3 = (int *)((char *)pn3 + sizeof(PlayerSlot));
    n2 = n2 + 1;
  } while (n2 < 4);
}


/* FUN_00423950 @ 0x00423950 */

void __fastcall FUN_00423950(int param_1)
{
  int n1;
  int *pn2;
  int n3;

  n1 = 0;
  pn2 = (int *)&((GameBoard *)param_1)->players[1].rank; /* param_1 + 0x1e8 = players[1].rank */
  n3 = 1;
  do {
    if (*pn2 < ((GameBoard *)param_1)->players[n1].rank) {
      n1 = n3;
    }
    pn2 = (int *)((char *)pn2 + sizeof(PlayerSlot));
    n3 = n3 + 1;
  } while (n3 < 4);
}


/* FUN_00423990 @ 0x00423990 */

int __thiscall FUN_00423990(GameBoard *this,int param_1)
{
  int n1;
  int n2;
  uint u3;
  
  n2 = 0;
  u3 = 1;
  if (((CVector *)param_1)->count != 0) {
    do {
      n1 = u3 * 4;
      u3 = u3 + 1;
      n2 = n2 + this->players[*(int *)(**(int **)((CVector *)param_1)->data + -4 + n1)].rank;
    } while (u3 <= ((CVector *)param_1)->count);
  }
  return n2;
}


/* FUN_004239d0 @ 0x004239d0 */

int __thiscall FUN_004239d0(GameBoard *this,int param_1)
{
  int n1;
  int n2;
  uint u3;

  n2 = 0;
  u3 = 1;
  if (((CVector *)param_1)->count != 0) {
    do {
      n1 = u3 * 4;
      u3 = u3 + 1;
      n2 = n2 + this->players[*(int *)(**(int **)((CVector *)param_1)->data + -4 + n1)].total;
    } while (u3 <= ((CVector *)param_1)->count);
  }
  return n2;
}


/* FUN_00423a10 @ 0x00423a10 */

void __thiscall FUN_00423a10(GameBoard *this,int param_1,uint param_2)
{
  uint u1;
  bool b2;
  uint u3;
  
  b2 = true;
  u1 = ((CVector *)param_1)->count;
  if (u1 != 0) {
    if (param_2 == 0xffffffff) {
      param_2 = (uint)this->players[*(int *)**(int **)((CVector *)param_1)->data].color;
    }
    u3 = 1;
    if (u1 != 0) {
      do {
        if ((!b2) ||
           (b2 = true,
           this->players[*(int *)(**(int **)((CVector *)param_1)->data + -4 + u3 * 4)].color
           != param_2)) {
          b2 = false;
        }
        u3 = u3 + 1;
      } while (u3 <= u1);
    }
  }
  return;
}


/* FUN_00423a80 @ 0x00423a80 */

void __thiscall FUN_00423a80(GameBoard *this,int param_1,int param_2)
{
  uint u1;
  bool b2;
  uint u3;

  b2 = true;
  u1 = ((CVector *)param_1)->count;
  if (u1 != 0) {
    if (param_2 == -1) {
      param_2 = this->players[*(int *)**(int **)((CVector *)param_1)->data].score;
    }
    u3 = 1;
    if (u1 != 0) {
      do {
        if ((!b2) ||
           (b2 = true,
           this->players[*(int *)(**(int **)((CVector *)param_1)->data + -4 + u3 * 4)].score
           != param_2)) {
          b2 = false;
        }
        u3 = u3 + 1;
      } while (u3 <= u1);
    }
  }
  return;
}


/* FUN_00423ae0 @ 0x00423ae0 */

void FUN_00423ae0(int param_1,int param_2)
{
  uint u1;
  bool b2;
  uint u3;
  
  b2 = true;
  u1 = ((CVector *)param_1)->count;
  if (u1 != 0) {
    if (param_2 == -1) {
      param_2 = *(int *)**(int **)((CVector *)param_1)->data;
    }
    u3 = 1;
    if (u1 != 0) {
      do {
        if ((!b2) ||
           (b2 = true, *(int *)(**(int **)((CVector *)param_1)->data + -4 + u3 * 4) != param_2)) {
          b2 = false;
        }
        u3 = u3 + 1;
      } while (u3 <= u1);
    }
  }
  return;
}


/* FUN_00423b30 @ 0x00423b30 */

uint __thiscall FUN_00423b30(GameBoard *this,int param_1,int param_2)
{
  uint _eax;
  uint u1;
  
  u1 = 1;
  while( true ) {
    if (((CVector *)param_1)->count < u1) {
      return _eax & 0xffffff00;
    }
    _eax = *(int *)(**(int **)((CVector *)param_1)->data + -4 + u1 * 4) * 0x12;
    if (this->players[*(int *)(**(int **)((CVector *)param_1)->data + -4 + u1 * 4)].score == param_2) break;
    u1 = u1 + 1;
  }
  return CONCAT31(_eax >> 8,1);
}


/* FUN_00423b80 @ 0x00423b80 */

int __thiscall FUN_00423b80(GameBoard *this,int param_1,int param_2,int param_3)
{
  char c1;
  uint u2;
  uint u3;
  int n4;
  int n5;
  
  n5 = 1;
  for (n4 = 0; (n4 == param_2 || (n4 == param_3)); n4 = n4 + 1) {
  }
  for (; (n5 == param_2 || ((n5 == param_3 || (n5 == n4)))); n5 = n5 + 1) {
  }
  u2 = FUN_00423b30(this,param_1,param_2);
  c1 = '\x01' - ((char)u2 == '\0');
  u2 = CONCAT31(u2 >> 8,c1);
  if (c1 == '\0') {
L_00423bdc:
    u2 = u2 & 0xffffff00;
  }
  else {
    u3 = FUN_00423b30(this,param_1,param_3);
    u2 = CONCAT31(u3 >> 8,1);
    if ((char)u3 == '\0') goto L_00423bdc;
  }
  if ((char)u2 != '\0') {
    u3 = FUN_00423b30(this,param_1,n4);
    u2 = CONCAT31(u3 >> 8,1);
    if ((char)u3 == '\0') goto L_00423bf5;
  }
  u2 = u2 & 0xffffff00;
L_00423bf5:
  if ((char)u2 != '\0') {
    u2 = FUN_00423b30(this,param_1,n5);
    if ((char)u2 == '\0') {
      return CONCAT31(u2 >> 8,1);
    }
  }
  return u2 & 0xffffff00;
}


/* FUN_00423c30 @ 0x00423c30 */

void FUN_00423c30(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004861d8,u1,_arg2);
}


/* FUN_00423c80 @ 0x00423c80 */

void FUN_00423c80(void) { return; }


/* FUN_00423ca0 @ 0x00423ca0 */

/* NOTE: overlapping globals */

void FUN_00423ca0(void)
{
  _DAT_004861e6 = 0;
  _DAT_004861e4 = 0;
}


/* FUN_00423cb0 @ 0x00423cb0 */

void FUN_00423cb0(void)
{
  _atexit(FUN_00423cc0);
}


/* FUN_00423cc0 @ 0x00423cc0 */

void FUN_00423cc0(void) { return; }


/* FUN_00423ce0 @ 0x00423ce0 */

/* NOTE: overlapping globals */

void FUN_00423ce0(void)
{
  _DAT_004861e2 = 0;
  _DAT_004861e0 = 0;
}


/* FUN_00423cf0 @ 0x00423cf0 */

void FUN_00423cf0(void)
{
  _atexit(FUN_00423d00);
}


/* FUN_00423d00 @ 0x00423d00 */

void FUN_00423d00(void) { return; }


/* FUN_00423d80 @ 0x00423d80 */

int * __fastcall FUN_00423d80(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00423e07;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  _seh_state = 0;
  FUN_0040ab70((int *)((char *)param_1 + 0x1a6)); /* TODO: offset 0x1A6 on GameBoard subclass (PTR_FUN_00473288) */
  *(short *)((char *)param_1 + 0x1a0) = 1; /* TODO: offset 0x1A0 on GameBoard subclass (PTR_FUN_00473288) */
  *param_1 = &PTR_FUN_00473288;
  param_1[0x67] = 0; /* byte offset 0x19c */
  *(int *)((char *)param_1 + 0x1a2) = 0; /* TODO: offset 0x1A2 on GameBoard subclass (PTR_FUN_00473288) */
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00423e20 @ 0x00423e20 */

int * __thiscall FUN_00423e20(void *this,byte param_1)
{
  FUN_00423e40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00423e40 @ 0x00423e40 */

void __fastcall FUN_00423e40(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00423e98;
  *param_1 = &PTR_FUN_00473288;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00423e8a();
  _seh_state = 0xffffffff;
  FUN_00423ea2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00423e8a @ 0x00423e8a */

void FUN_00423e8a(void)
{
  int _ebp;
  
  FUN_0040ac40((int *)(*(int *)(_ebp + -0x10) + 0x1a6));
}


/* FUN_00423ea2 @ 0x00423ea2 */

void FUN_00423ea2(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_00423eb0 @ 0x00423eb0 */

void __fastcall FUN_00423eb0(int *param_1)
{
  int u1;
  int n2;
  char c3;
  
  FUN_0041d780(((UIWidget *)DAT_004897c0)->sub_widgets_a[1],param_1);
  FUN_0041dd40(((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
  ((UIElement *)((UIWidget *)DAT_004897c0)->sub_widgets_a[1])->type_or_mode = 3;
  ((void (*)(void))((void **)(*param_1))[0xdc / 4])();
  if (*(void **)&((UIWidget *)DAT_004897c0)->field_44 != NULL) {
    n2 = 0x423f05;
    FUN_0041d780(*(void **)&((UIWidget *)DAT_004897c0)->field_44,((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
    c3 = '\0';
    u1 = 0xffffff9c;
    FUN_00401050(&_tmp_41,-100);
    FUN_00401050(&_tmp_40,-100);
    FUN_0041d3a0(*(void **)&((UIWidget *)DAT_004897c0)->field_44,u1,n2,c3);
    FUN_0041dd40(*(void **)&((UIWidget *)DAT_004897c0)->field_44);
    FUN_0041c2a0(*(void **)&((UIWidget *)DAT_004897c0)->field_44,0);
  }
  FUN_0041dd40((void *)param_1[0x66]);
  FUN_00404870(param_1,0x2e000c);
}


/* FUN_00423f80 @ 0x00423f80 */

void __fastcall FUN_00423f80(void *param_1)
{
  int v8;
  int v4;
  
  FUN_004048d0(param_1);
  switch(*(short *)(((UIElement *)param_1)->sub_widgets_a[9] + 0xc)) { /* sub-object at sub_widgets_a[9], offset +0x0C */
  case 1:
    v8 = 0x762000d;
    v4 = 0x4d0011;
    ((GameSession *)DAT_0048345c)->field_f2 = 1;
    break;
  case 2:
    v8 = 0x79e000d;
    v4 = 0x220011;
    ((GameSession *)DAT_0048345c)->field_f3 = 1;
    break;
  case 3:
    v8 = 0x763000d;
    v4 = 0x230011;
    ((GameSession *)DAT_0048345c)->field_f4 = 1;
    break;
  case 4:
    v8 = 0x764000d;
    v4 = 0x250011;
    ((GameSession *)DAT_0048345c)->field_f5 = 1;
  }
  switch(((GameSession *)DAT_0048345c)->field_9c) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    ((GameSession *)DAT_0048345c)->score_display = ((GameSession *)DAT_0048345c)->score_display + 0xfa;
  }
  FUN_0045f100(v8,'\x01');
  FUN_0040b1e0((void *)((char *)param_1 + 0x1a6),v4);
  *(short *)((char *)param_1 + 0x1a0) = 2; /* TODO: offset 0x1A0 on GameBoard subclass (PTR_FUN_00473288) */
  return;
}


/* FUN_004240b0 @ 0x004240b0 */

void __fastcall FUN_004240b0(int *param_1)
{
    /* STUB: 59 lines not yet reconstructed */
    return;
}


/* FUN_004243e9 @ 0x004243e9 */

void FUN_004243e9(void)
{
  FUN_004012a0();
}


/* FUN_00424400 @ 0x00424400 */

int * __fastcall FUN_00424400(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00424476;
  *_fs = &_seh_prev;
  FUN_00417c70(param_1);
  *param_1 = &PTR_LAB_00473418;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[5] = 0;
  *(short *)(param_1 + 0x114) = 0;
  param_1[4] = 0;
  *(short *)((char *)param_1 + 0x452) = 0; /* TODO: offset 0x452 on PTR_LAB_00473418 subclass - beyond known structs */
  param_1[0x111] = 0;
  param_1[6] = 1;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00424490 @ 0x00424490 */

int * __thiscall FUN_00424490(void *this,byte param_1)
{
  FUN_004244b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004244b0 @ 0x004244b0 */

void __fastcall FUN_004244b0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_004244f9;
  *param_1 = &PTR_LAB_00473418;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_004246b0((int)param_1);
  _seh_state = 0xffffffff;
  FUN_00424503();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00424503 @ 0x00424503 */

void FUN_00424503(void)
{
  int _ebp;
  
  FUN_00417cc0(*(int **)(_ebp + -0x10));
}


/* FUN_004246b0 @ 0x004246b0 */

void __fastcall FUN_004246b0(int param_1)
{
  HGDIOBJ ho;
  
  ho = SelectObject(*(HDC *)(param_1 + 0x14),*(HGDIOBJ *)(param_1 + 0x10));
  DeleteObject(ho);
  DeleteDC(*(HDC *)(param_1 + 0x14));
  *(int *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x448) = 0;
  *(int *)(param_1 + 0x44c) = 0;
  *(short *)(param_1 + 0x450) = 0;
  *(int *)(param_1 + 0x14) = 0;
  *(short *)(param_1 + 0x452) = 0;
  *(int *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x444) = 0;
}


/* FUN_004247a0 @ 0x004247a0 */

int __fastcall FUN_004247a0(int param_1)
{
  return *(int *)(param_1 + 0x14);
}


/* FUN_004247b0 @ 0x004247b0 */

void __thiscall FUN_004247b0(GameBoard *this,HDC param_1,short *param_2)
{
  short s1;
  short s2;
  
  SelectPalette(param_1,DAT_004838bc,0);
  RealizePalette(param_1);
  s1 = *param_2;
  s2 = param_2[1];
  WinGBitBlt(param_1,(int)s2,(int)s1,(int)(short)(param_2[3] - s2),
             (int)(short)(param_2[2] - s1),this->field_14,(int)s2,
             (int)s1);
  GdiFlush();
}


/* FUN_00424820 @ 0x00424820 */

void __fastcall FUN_00424820(int param_1)
{
    /* STUB: 22 lines not yet reconstructed */
    return;
}


/* FUN_004248b0 @ 0x004248b0 */

void FUN_004248b0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004861e8,u1,_arg2);
}


/* FUN_00424900 @ 0x00424900 */

void FUN_00424900(void) { return; }


/* FUN_00424920 @ 0x00424920 */

/* NOTE: overlapping globals */

void FUN_00424920(void)
{
  _DAT_004861f6 = 0;
  _DAT_004861f4 = 0;
}


/* FUN_00424930 @ 0x00424930 */

void FUN_00424930(void)
{
  _atexit(FUN_00424940);
}


/* FUN_00424940 @ 0x00424940 */

void FUN_00424940(void) { return; }


/* FUN_00424960 @ 0x00424960 */

/* NOTE: overlapping globals */

void FUN_00424960(void)
{
  _DAT_004861f2 = 0;
  _DAT_004861f0 = 0;
}


/* FUN_00424970 @ 0x00424970 */

void FUN_00424970(void)
{
  _atexit(FUN_00424980);
}


/* FUN_00424980 @ 0x00424980 */

void FUN_00424980(void) { return; }


/* FUN_004249a0 @ 0x004249a0 */

void FUN_004249a0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004861f8,u1,_arg2);
}


/* FUN_004249e0 @ 0x004249e0 */

void FUN_004249e0(void)
{
  _atexit(FUN_004249f0);
}


/* FUN_004249f0 @ 0x004249f0 */

void FUN_004249f0(void) { return; }


/* FUN_00424a10 @ 0x00424a10 */

/* NOTE: overlapping globals */

void FUN_00424a10(void)
{
  _DAT_00486206 = 0;
  _DAT_00486204 = 0;
}


/* FUN_00424a20 @ 0x00424a20 */

void FUN_00424a20(void)
{
  _atexit(FUN_00424a30);
}


/* FUN_00424a30 @ 0x00424a30 */

void FUN_00424a30(void) { return; }


/* FUN_00424a50 @ 0x00424a50 */

/* NOTE: overlapping globals */

void FUN_00424a50(void)
{
  _DAT_00486202 = 0;
  _DAT_00486200 = 0;
}


/* FUN_00424a60 @ 0x00424a60 */

void FUN_00424a60(void)
{
  _atexit(FUN_00424a70);
}


/* FUN_00424a70 @ 0x00424a70 */

void FUN_00424a70(void) { return; }


/* FUN_00424a90 @ 0x00424a90 */

void FUN_00424a90(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486208,u1,_arg2);
}


/* FUN_00424ad0 @ 0x00424ad0 */

void FUN_00424ad0(void)
{
  _atexit(FUN_00424ae0);
}


/* FUN_00424ae0 @ 0x00424ae0 */

void FUN_00424ae0(void) { return; }


/* FUN_00424ba0 @ 0x00424ba0 */

/* NOTE: overlapping globals */

void FUN_00424ba0(void)
{
  _DAT_00486216 = 0;
  _DAT_00486214 = 0;
}


/* FUN_00424bb0 @ 0x00424bb0 */

void FUN_00424bb0(void)
{
  _atexit(FUN_00424bc0);
}


/* FUN_00424bc0 @ 0x00424bc0 */

void FUN_00424bc0(void) { return; }


/* FUN_00424d80 @ 0x00424d80 */

/* NOTE: overlapping globals */

void FUN_00424d80(void)
{
  _DAT_00486212 = 0;
  _DAT_00486210 = 0;
}


/* FUN_00424d90 @ 0x00424d90 */

void FUN_00424d90(void)
{
  _atexit(FUN_00424da0);
}


/* FUN_00424da0 @ 0x00424da0 */

void FUN_00424da0(void) { return; }


/* FUN_00424e40 @ 0x00424e40 */

int * __fastcall FUN_00424e40(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00424e96;
  *_fs = &_seh_prev;
  FUN_0044bc50(param_1);
  *(short *)(param_1 + 0x95) = 0;
  *param_1 = &PTR_LAB_004735e0;
  param_1[0x92] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00424eb0 @ 0x00424eb0 */

void __fastcall FUN_00424eb0(int *param_1)
{
  uint u1;
  uint u2;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00424f22;
  *param_1 = &PTR_LAB_004735e0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  u1 = param_1[0x92];
  if (u1 != 0) {
    for (u2 = *(uint *)(u1 + 4); u2 != 0; u2 = *(uint *)(u2 + 4)) {
      FUN_0046c410(u1);
      u1 = u2;
    }
    FUN_0046c410(u1);
  }
  _seh_state = 0xffffffff;
  FUN_00424f2c();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00424f2c @ 0x00424f2c */

void FUN_00424f2c(void)
{
  FUN_00411360();
}


/* FUN_00424f40 @ 0x00424f40 */

int __thiscall FUN_00424f40(void *this,short param_1,short param_2)
{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_00425200 @ 0x00425200 */

int __fastcall FUN_00425200(void *param_1)
{
  byte b1;
  int n2;
  int u3;
  int n4;
  uint u5;
  int n6;
  short s7;
  int *pn8;
  char c9;
  uint v18;
  int v14;
  int v10;
  uint vc;
  int v8;
  int v4;
  
  s7 = ((GameBoard *)param_1)->field_254;
  ((GameBoard *)param_1)->field_1c8 = 0;
  if (0 < s7) {
    ((GameBoard *)param_1)->field_254 = 0xffff;
    ((GameBoard *)param_1)->event_type = (int)s7;
  }
  if (((GameBoard *)param_1)->field_254 == 0) {
    ((GameBoard *)param_1)->field_254 = (short)((GameBoard *)param_1)->event_type;
  }
  switch(((GameBoard *)param_1)->event_type) {
  case 0x11:
  case 0x21:
  case 0x31:
  case 0x42:
  case 0x52:
  case 0x62:
    v18 = (uint)(((GameBoard *)param_1)->field_254 == -1);
    FUN_00424f40(param_1,(short)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                 (short)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y);
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_00480888 +
                          (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                 '\x01');
    FUN_0044bf50((int *)&DAT_004734c4,'\x01');
    ((GameBoard *)param_1)->target_x = ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x;
    ((GameBoard *)param_1)->target_y = ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y;
    break;
  case 0x12:
  case 0x13:
  case 0x3c:
  case 0x4d:
    s7 = 1000;
    do {
      FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,&v14,
                   &v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    if (((GameBoard *)param_1)->event_type == 0x4d) {
      b1 = 1;
      pn8 = (int *)&DAT_00473508;
    }
    else {
      b1 = (byte)((GameBoard *)param_1)->event_type & 1;
      pn8 = (int *)&DAT_004734cc;
    }
    FUN_0044bf50(pn8,b1);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x32:
  case 0x33:
  case 0x38:
  case 0x39:
  case 0x3d:
  case 0x43:
  case 0x44:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    s7 = 1000;
    do {
      FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,&v14,
                   &v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
    FUN_0044c990(param_1,vc,0,'\x01');
    n2 = ((GameBoard *)param_1)->event_type;
    if (n2 == 0x43) {
      b1 = 1;
      pn8 = (int *)&DAT_004734e0;
    }
    else if (n2 == 0x44) {
      b1 = 0;
      pn8 = (int *)&DAT_004734e4;
    }
    else if (n2 == 0x49) {
      b1 = 1;
      pn8 = (int *)&DAT_004734f8;
    }
    else if (n2 == 0x4a) {
      b1 = 0;
      pn8 = (int *)&DAT_004734fc;
    }
    else if (n2 == 0x4b) {
      b1 = 1;
      pn8 = (int *)&DAT_00473500;
    }
    else if (n2 == 0x4c) {
      b1 = 0;
      pn8 = (int *)&DAT_00473504;
    }
    else {
      b1 = (byte)n2 & 1;
      pn8 = (int *)&DAT_004734d0;
    }
    FUN_0044bf50(pn8,b1);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x22:
  case 0x23:
  case 0x3e:
  case 0x4e:
    s7 = 1000;
    n2 = rand();
    v18 = n2 % *(int *)((char *)param_1 + 0x1D4) /* board_slot_count */;
    do {
      FUN_00426350(param_1,((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                   ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y,&v14,&v10,
                   (int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    if (((GameBoard *)param_1)->event_type != 0x4e) {
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_00480888 +
                            (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                 '\x01');
    if (((GameBoard *)param_1)->event_type == 0x4e) {
      b1 = 0;
      pn8 = (int *)&DAT_0047350c;
    }
    else {
      b1 = (byte)((GameBoard *)param_1)->event_type & 1;
      pn8 = (int *)&DAT_004734d4;
    }
    FUN_0044bf50(pn8,b1);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    s7 = 1000;
    n2 = rand();
    v18 = n2 % *(int *)((char *)param_1 + 0x1D4) /* board_slot_count */;
    do {
      FUN_00426350(param_1,((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                   ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y,&v14,&v10,
                   (int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_00480888 +
                          (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                 '\x01');
    b1 = (byte)((GameBoard *)param_1)->event_type & 1;
    pn8 = (int *)&DAT_004734d8;
    goto L_004260b1;
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x3b:
  case 0x45:
  case 0x46:
    s7 = 1000;
    n2 = rand();
    v18 = n2 % *(int *)((char *)param_1 + 0x1D4) /* board_slot_count */;
    do {
      FUN_00426350(param_1,((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                   ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y,&v14,&v10,
                   (int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    if (((GameBoard *)param_1)->event_type == 0x45) {
      FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
      FUN_0044c990(param_1,vc,0,'\x01');
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                   '\x01');
      b1 = (byte)((GameBoard *)param_1)->event_type & 1;
      pn8 = (int *)&DAT_004734e8;
    }
    else if (((GameBoard *)param_1)->event_type == 0x46) {
      FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
      FUN_0044c990(param_1,vc,0,'\x01');
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                   '\x01');
      b1 = (byte)((GameBoard *)param_1)->event_type & 1;
      pn8 = (int *)&DAT_004734ec;
    }
    else {
      FUN_0044c990(param_1,vc,0,'\x01');
      FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_00480888 +
                            (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                   '\x01');
      b1 = (byte)((GameBoard *)param_1)->event_type & 1;
      pn8 = (int *)&DAT_004734d8;
    }
    FUN_0044bf50(pn8,b1);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x36:
  case 0x37:
  case 0x47:
  case 0x48:
    s7 = 1000;
    FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,
                 (int *)&v18,&v4,(int *)&vc,&v8);
    do {
      FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
    FUN_0044c990(param_1,vc,0,'\x01');
    if (((GameBoard *)param_1)->event_type < 0x40) {
      u3 = *(int *)(&DAT_0047f85c + v18 * 4);
    }
    else {
      u3 = *(int *)(&DAT_0047f884 + v18 * 4);
    }
    FUN_0044c7e0(param_1,u3,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v4 * -4),0,'\x01');
    if (((GameBoard *)param_1)->event_type == 0x47) {
      c9 = '\x01';
      pn8 = (int *)&DAT_004734f0;
    }
    else if (((GameBoard *)param_1)->event_type == 0x48) {
      c9 = '\0';
      pn8 = (int *)&DAT_004734f4;
    }
    else {
      c9 = '\0';
      pn8 = (int *)&DAT_004734dc;
    }
    FUN_0044bf50(pn8,c9);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x41:
  case 0x51:
  case 0x61:
    s7 = 1000;
    FUN_00426350(param_1,5,5,(int *)&v18,&v4,(int *)&vc,&v8);
    do {
      FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v14 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v10 * -4),0,'\x01');
    b1 = 0;
    pn8 = (int *)&DAT_004734c8;
    goto L_004260b1;
  case 0x4f:
    s7 = 1000;
    FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,
                 (int *)&v18,&v4,(int *)&vc,&v8);
    do {
      FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v4 * -4),0,'\x01');
    b1 = 0;
    pn8 = (int *)&DAT_00473510;
    goto L_004260b1;
  case 0x53:
  case 0x54:
  case 99:
  case 100:
    s7 = 1000;
    n2 = rand();
    v18 = n2 % *(int *)((char *)param_1 + 0x1D4) /* board_slot_count */;
    do {
      FUN_00426350(param_1,((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                   ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y,&v14,&v10,
                   (int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
    FUN_0044c990(param_1,vc * 10,0,'\x01');
    if ((((GameBoard *)param_1)->event_type == 99) || (((GameBoard *)param_1)->event_type == 100)) {
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_00480888 +
                            (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                 '\x01');
    if ((((GameBoard *)param_1)->event_type == 0x53) || (((GameBoard *)param_1)->event_type == 0x54)) {
      pn8 = (int *)&DAT_00473514;
    }
    else {
      pn8 = (int *)&DAT_00473528;
    }
    FUN_0044bf50(pn8,'\0');
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x55:
  case 0x56:
  case 0x65:
  case 0x66:
    s7 = 1000;
    FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,
                 (int *)&v18,&v4,(int *)&vc,&v8);
    do {
      FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f800 + v8 * 4),0,'\x01');
    FUN_0044c990(param_1,vc * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v4 * -4),0,'\x01');
    b1 = 0;
    pn8 = (int *)&DAT_0047352c;
    goto L_004260b1;
  case 0x57:
  case 0x67:
    s7 = 0;
    FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,
                 (int *)&v18,&v4,(int *)&vc,&v8);
    do {
      do {
        s7 = s7 + 1;
        FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      } while ((vc & 1) != 0);
      u3 = FUN_00424f40(param_1,(short)((int)(v14 + v18) / 2),
                           (short)((v10 + v4) / 2));
    } while (((short)u3 == 0) && (s7 < 1000));
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v4 * -4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v14 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v10 * -4),0,'\x01');
    FUN_0044bf50((int *)&DAT_00473518,'\0');
    ((GameBoard *)param_1)->target_x = (int)(v14 + v18) / 2;
    ((GameBoard *)param_1)->target_y = (v10 + v4) / 2;
    break;
  case 0x58:
  case 0x68:
    s7 = 1000;
    do {
      FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,&v14,
                   &v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    b1 = 0;
    pn8 = (int *)&DAT_0047351c;
    goto L_004260b1;
  case 0x59:
  case 0x69:
    s7 = 1000;
    n2 = rand();
    v18 = n2 % *(int *)((char *)param_1 + 0x1D4) /* board_slot_count */;
    do {
      FUN_00426350(param_1,((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_x,
                   ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].pos_y,&v14,&v10,
                   (int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    if (((GameBoard *)param_1)->event_type == 0x69) {
      FUN_0044c7e0(param_1,*(int *)
                            (&DAT_00480888 +
                            (uint)((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].slot_type * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(int *)
                          (&DAT_0047f830 + ((BoardSlotEntry *)((char *)param_1 + 0x1D8))[v18].resource_id * 4),0,
                 '\x01');
    if (((GameBoard *)param_1)->event_type == 0x69) {
      pn8 = (int *)&DAT_00473530;
    }
    else {
      pn8 = (int *)&DAT_00473520;
    }
    FUN_0044bf50(pn8,'\0');
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
    break;
  case 0x5a:
  case 0x6a:
    s7 = 1000;
    FUN_00426350(param_1,((GameBoard *)param_1)->target_x,((GameBoard *)param_1)->target_y,
                 (int *)&v18,&v4,(int *)&vc,&v8);
    do {
      FUN_00426350(param_1,v18,v4,&v14,&v10,(int *)&vc,&v8);
      u3 = FUN_00424f40(param_1,(short)v14,(short)v10);
      if ((short)u3 != 0) break;
      s7 = s7 + -1;
    } while (s7 != 0);
    FUN_0044c990(param_1,vc * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f7f0 + v8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f884 + v18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(int *)(&DAT_0047f8c8 + v4 * -4),0,'\x01');
    b1 = 0;
    pn8 = (int *)&DAT_00473524;
L_004260b1:
    FUN_0044bf50(pn8,b1);
    ((GameBoard *)param_1)->target_x = v14;
    ((GameBoard *)param_1)->target_y = v10;
  }
  s7 = 1000;
  do {
    n6 = ((GameBoard *)param_1)->field_26 * 4;
    n2 = *(int *)(&DAT_0047f8ec + n6);
    n4 = rand();
    n2 = ((uint)((GameBoard *)param_1)->event_type & 0xf0) +
            n4 % (*(int *)(&DAT_0047f8d4 + n6) - n2) + 1 + n2;
    u5 = FUN_0044d950(param_1,n2,6,((GameBoard *)param_1)->field_26);
    if ((char)u5 == '\0') break;
    s7 = s7 + -1;
  } while (s7 != 0);
  ((GameBoard *)param_1)->event_type = n2;
  ((GameBoard *)param_1)->board_mode = ((GameBoard *)param_1)->board_mode + -1;
  return (int)param_1 + 4;
}


/* FUN_00426230 @ 0x00426230 */

int __fastcall FUN_00426230(int param_1)
{
  return *(int *)(param_1 + 0x1d4); /* board_slot_count */
}


/* FUN_00426240 @ 0x00426240 */

int __thiscall FUN_00426240(GameBoard *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x1D4))) { /* board_slot_count */
    return *(int *)(&DAT_0047f810 + this->players[param_1].total * 4);
  }
  return 0xffffffff;
}


/* FUN_00426280 @ 0x00426280 */

char __thiscall FUN_00426280(GameBoard *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x1D4))) { /* board_slot_count */
    return (&DAT_00480848)[(uint)((BoardSlotEntry *)((char *)this + 0x1D8))[param_1].slot_type * 4];
  }
  return 0xff;
}


/* FUN_004262c0 @ 0x004262c0 */

int __thiscall FUN_004262c0(GameBoard *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x1D4))) { /* board_slot_count */
    return ((BoardSlotEntry *)((char *)this + 0x1D8))[param_1].pos_x;
  }
  return 0xffffffff;
}


/* FUN_004262f0 @ 0x004262f0 */

int __thiscall FUN_004262f0(GameBoard *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x1D4))) { /* board_slot_count */
    return ((BoardSlotEntry *)((char *)this + 0x1D8))[param_1].pos_y;
  }
  return 0xffffffff;
}


/* FUN_00426320 @ 0x00426320 */

void __thiscall FUN_00426320(GameBoard *this,int param_1,int param_2)
{
  if ((this->target_x == param_1) && (this->target_y == param_2)) {
    this->is_match = 1;
    return;
  }
  this->is_match = 0;
}


/* FUN_00426350 @ 0x00426350 */

int __thiscall
FUN_00426350(GameBoard *this,int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)
{
  int n1;
  bool b2;
  int n3;
  uint u4;
  short s5;
  uint u6;
  short va;
  
  b2 = false;
  va = 0;
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (9 < param_1) {
    param_1 = 9;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (6 < param_2) {
    param_2 = 6;
  }
  do {
    va = va + 1;
    n3 = rand();
    *param_5 = n3 % 7 + 2;
    u4 = rand();
    u6 = (int)u4 >> 0x1f;
    *param_6 = ((u4 ^ u6) - u6 & 3 ^ u6) - u6;
    *param_3 = param_1;
    *param_4 = param_2;
    switch(*param_6) {
    case 0:
      *param_4 = param_2 - *param_5;
      break;
    case 1:
      *param_4 = *param_5 + param_2;
      break;
    case 2:
      *param_3 = *param_3 + *param_5;
      break;
    case 3:
      *param_3 = *param_3 - *param_5;
    }
    if (va < 1000) {
      if ((((this->board_mode == 3) && (0 < *param_3)) && (*param_3 < 10)) &&
         ((n3 = *param_4, 0 < n3 && (n3 < 7)))) {
        s5 = 0;
        n1 = this->board_layer * 6;
        do {
          if (*(short *)(&DAT_0047f8f6 + ((char *)s5 + (n3 + n1) * 9) * 2) ==
              this->board_note) {
            b2 = true;
          }
          s5 = s5 + 1;
        } while (s5 < 9);
        s5 = 0;
        do {
          if (*(short *)(&DAT_0047f906 + ((s5 + n1) * 9 + *param_3) * 2) ==
              this->board_note) {
            b2 = true;
          }
          s5 = s5 + 1;
        } while (s5 < 6);
        if (!b2) {
          *param_3 = 0;
        }
      }
      if (((this->board_mode == 2) && (n3 = *param_3, 0 < n3)) &&
         ((n3 < 10 &&
          (((n1 = *param_4, 0 < n1 && (n1 < 7)) &&
           (*(short *)(&DAT_0047f8f4 + ((n1 + this->board_layer * 6) * 9 + n3) * 2
                      ) != this->board_note)))))) {
        *param_3 = 0;
      }
    }
  } while (((*param_3 < 1) || (9 < *param_3)) || ((*param_4 < 1 || (6 < *param_4))));
  return 0;
}


/* FUN_00426550 @ 0x00426550 */

int __thiscall FUN_00426550(GameBoard *this,int param_1,char param_2,char param_3)
{
  short s1;
  bool b2;
  int n3;
  uint u4;
  int n5;
  int n6;
  int n7;
  uint u8;
  int *pn9;
  int *pn10;
  int v14;
  char v8;
  short v4;
  
  n3 = rand();
  u4 = rand();
  u8 = (int)u4 >> 0x1f;
  n5 = ((u4 ^ u8) - u8 & 7 ^ u8) - u8;
  s1 = *(short *)(&DAT_0047f850 + n5 * 2);
  while (s1 != 2) {
    u4 = rand();
    u8 = (int)u4 >> 0x1f;
    n5 = ((u4 ^ u8) - u8 & 7 ^ u8) - u8;
    s1 = *(short *)(&DAT_0047f850 + n5 * 2);
  }
  v14 = 0;
  if (0 < param_1) {
    pn10 = (int *)&this->players[0].total;
    do {
      n6 = n5;
      if (param_2 != '\0') {
        u4 = n5 + v14 >> 0x1f;
        n6 = ((n5 + v14 ^ u4) - u4 & 7 ^ u4) - u4;
      }
      *pn10 = n6;
      if (param_3 == '\0') {
        v8 = (char)(n3 % 7);
        *(char *)((char *)pn10 - 2) = v8; /* BoardSlotEntry::slot_type (-2 bytes from resource_id) */
      }
      else {
        *(char *)((char *)pn10 - 2) = (char)((n3 % 7 + v14) % 7); /* BoardSlotEntry::slot_type */
      }
      v4 = 1000;
      n6 = v14 + -1;
      do {
        b2 = false;
        n7 = rand();
        pn10[1] = n7 % 9 + 1;
        n7 = rand();
        pn10[2] = n7 % 6 + 1;
        if (-1 < n6) {
          pn9 = (int *)&((BoardSlotEntry *)((char *)this + 0x1D8))[n6].pos_x;
          n7 = n6;
          do {
            if ((*pn9 == pn10[1]) && (pn9[1] == pn10[2])) {
              b2 = true;
            }
            pn9 = (int *)((char *)pn9 + -(int)sizeof(BoardSlotEntry));
            n7 = n7 + -1;
          } while (-1 < n7);
        }
        s1 = *(short *)(&DAT_0047f850 + *pn10 * 2);
        if (s1 != 0) {
          if ((s1 == 1) &&
             (*(short *)(&DAT_0047f8f4 +
                        ((this->board_layer * 6 + pn10[2]) * 9 + pn10[1]) * 2) !=
              1)) {
            b2 = true;
          }
          if ((s1 == 2) &&
             (*(short *)(&DAT_0047f8f4 +
                        ((this->board_layer * 6 + pn10[2]) * 9 + pn10[1]) * 2) ==
              1)) {
            b2 = true;
          }
        }
        if ((v14 == 0) &&
           (*(short *)(&DAT_0047f8f4 +
                      ((this->board_layer * 6 + pn10[2]) * 9 + pn10[1]) * 2) !=
            this->field_270)) {
          b2 = true;
        }
      } while ((b2) && (v4 = v4 + -1, v4 != 0));
      pn10 = (int *)((char *)pn10 + sizeof(BoardSlotEntry));
      v14 = v14 + 1;
    } while (v14 < param_1);
  }
  return 0;
}


/* FUN_00426740 @ 0x00426740 */

int __cdecl FUN_00426740(int param_1)
{
    /* STUB: 25 lines not yet reconstructed */
    return 0;
}


/* FUN_004267a0 @ 0x004267a0 */

void __cdecl FUN_004267a0(int param_1)
{
  BYTE *pBVar1;
  ushort u2;
  int n3;
  uint u4;
  PALETTEENTRY *pPVar5;
  LOGPALETTE v404 [128];
  char v4;
  char v3;
  char v2;
  char v1;
  
  v404[0].palVersion = 0x300;
  v404[0].palNumEntries = 0x100;
  pPVar5 = v404[0].palPalEntry;
  for (n3 = 0x100; n3 != 0; n3 = n3 + -1) {
    pPVar5->peRed = '\0';
    pPVar5->peGreen = '\0';
    pPVar5->peBlue = '\0';
    pPVar5->peFlags = '\0';
    pPVar5 = pPVar5 + 1;
  }
  u4 = 0;
  do {
    u2 = (short)u4 + 1;
    pBVar1 = (BYTE *)(u4 * 4 + param_1);
    v404[0].palPalEntry[u4].peRed = *(BYTE *)(u4 * 4 + 2 + param_1);
    v404[0].palPalEntry[u4].peGreen = pBVar1[1];
    v404[0].palPalEntry[u4].peBlue = *pBVar1;
    v404[0].palPalEntry[u4].peFlags = '\x01';
    u4 = (uint)u2;
  } while (u2 < 0x100);
  v404[0].palPalEntry[0].peRed = '\0';
  v404[0].palPalEntry[0].peGreen = '\0';
  v404[0].palPalEntry[0].peBlue = '\0';
  v404[0].palPalEntry[0].peFlags = '\0';
  v4 = 0xff;
  v3 = 0xff;
  v2 = 0xff;
  v1 = 0;
  CreatePalette(v404);
}


/* FUN_00426850 @ 0x00426850 */

void FUN_00426850(void) { return; }


/* FUN_00426860 @ 0x00426860 */

void __cdecl FUN_00426860(int param_1)
{
  HWND hWnd;
  HDC hdc;
  
  hWnd = ((GameScreen *)*(int *)(DAT_00489ac8 + 4))->hwnd;
  hdc = GetDC(hWnd);
  if (DAT_004838bc != NULL) {
    FUN_004268c0(DAT_004838bc);
  }
  DAT_004838bc = (HPALETTE)FUN_00426740(param_1);
  SelectPalette(hdc,DAT_004838bc,0);
  RealizePalette(hdc);
  ReleaseDC(hWnd,hdc);
}


/* FUN_004268c0 @ 0x004268c0 */

void __cdecl FUN_004268c0(HGDIOBJ param_1)
{
  DeleteObject(param_1);
}


/* FUN_004268d0 @ 0x004268d0 */

void __cdecl FUN_004268d0(int *param_1,short param_2)
{
    /* STUB: 52 lines not yet reconstructed */
    return;
}


/* FUN_00426a0b @ 0x00426a0b */

void FUN_00426a0b(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x820));
}


/* FUN_00426a20 @ 0x00426a20 */

void __cdecl FUN_00426a20(int *param_1,short param_2)
{
    /* STUB: 47 lines not yet reconstructed */
    return;
}


/* FUN_00426b61 @ 0x00426b61 */

void FUN_00426b61(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x820));
}


/* FUN_00426b70 @ 0x00426b70 */

void __cdecl FUN_00426b70(int param_1,short param_2)
{
    /* STUB: 50 lines not yet reconstructed */
    return;
}


/* FUN_00426cda @ 0x00426cda */

void FUN_00426cda(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x828));
}


/* FUN_00426cf0 @ 0x00426cf0 */

void __cdecl FUN_00426cf0(int param_1,short param_2)
{
    /* STUB: 53 lines not yet reconstructed */
    return;
}


/* FUN_00426e57 @ 0x00426e57 */

void FUN_00426e57(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x828));
}


/* FUN_00426e80 @ 0x00426e80 */

void FUN_00426e80(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486218,u1,_arg2);
}


/* FUN_00426ed0 @ 0x00426ed0 */

void FUN_00426ed0(void) { return; }


/* FUN_00426ef0 @ 0x00426ef0 */

/* NOTE: overlapping globals */

void FUN_00426ef0(void)
{
  _DAT_00486226 = 0;
  _DAT_00486224 = 0;
}


/* FUN_00426f00 @ 0x00426f00 */

void FUN_00426f00(void)
{
  _atexit(FUN_00426f10);
}


/* FUN_00426f10 @ 0x00426f10 */

void FUN_00426f10(void) { return; }


/* FUN_00426f30 @ 0x00426f30 */

/* NOTE: overlapping globals */

void FUN_00426f30(void)
{
  _DAT_00486222 = 0;
  _DAT_00486220 = 0;
}


/* FUN_00426f40 @ 0x00426f40 */

void FUN_00426f40(void)
{
  _atexit(FUN_00426f50);
}


/* FUN_00426f50 @ 0x00426f50 */

void FUN_00426f50(void) { return; }


/* FUN_00426f70 @ 0x00426f70 */

void FUN_00426f70(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486228,u1,_arg2);
}


/* FUN_00426fb0 @ 0x00426fb0 */

void FUN_00426fb0(void)
{
  _atexit(FUN_00426fc0);
}


/* FUN_00426fc0 @ 0x00426fc0 */

void FUN_00426fc0(void) { return; }


/* FUN_00426fe0 @ 0x00426fe0 */

/* NOTE: overlapping globals */

void FUN_00426fe0(void)
{
  _DAT_00486236 = 0;
  _DAT_00486234 = 0;
}


/* FUN_00426ff0 @ 0x00426ff0 */

void FUN_00426ff0(void)
{
  _atexit(FUN_00427000);
}


/* FUN_00427000 @ 0x00427000 */

void FUN_00427000(void) { return; }


/* FUN_00427020 @ 0x00427020 */

/* NOTE: overlapping globals */

void FUN_00427020(void)
{
  _DAT_00486232 = 0;
  _DAT_00486230 = 0;
}


/* FUN_00427030 @ 0x00427030 */

void FUN_00427030(void)
{
  _atexit(FUN_00427040);
}


/* FUN_00427040 @ 0x00427040 */

void FUN_00427040(void) { return; }


/* FUN_00427050 @ 0x00427050 */

/* NOTE: overlapping globals */

int __cdecl FUN_00427050(uint param_1,LPCVOID param_2)
{
  int n1;
  ushort *pu2;
  uint u3;
  short s4;
  int *pu5;
  
  if (param_2 == NULL) {
    param_2 = DAT_004833cc;
    if (DAT_004833cc == NULL) {
      param_2 = DAT_00483df4;
    }
    if ((param_2 == NULL) && (param_2 = DAT_004833cc, DAT_004833cc == NULL)) {
      param_2 = DAT_00483df4;
    }
  }
  if (DAT_0047fbfc == '\0') {
    FUN_004271c0();
  }
  /* PoolCacheEntry pool_cache[] = (PoolCacheEntry *)&DAT_00486240; -- 256 entries, stride 0x0E */
  s4 = 0;
  while (((n1 = s4 * 0xe, ((PoolCacheEntry *)&DAT_00486240)[s4].in_use != '\0' ||
          ((int)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr == 0)) ||
         ((uint)((PoolCacheEntry *)&DAT_00486240)[s4].alloc_size < param_1))) {
    s4 = s4 + 1;
    if (0xff < s4) {
      s4 = 0;
      while (((n1 = s4 * 0xe, ((PoolCacheEntry *)&DAT_00486240)[s4].in_use != '\0' ||
              ((int)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr != 0)) ||
             (((PoolCacheEntry *)&DAT_00486240)[s4].alloc_size != 0))) {
        s4 = s4 + 1;
        if (0xff < s4) {
          return 0;
        }
      }
      ((PoolCacheEntry *)&DAT_00486240)[s4].in_use = 1;
      ((PoolCacheEntry *)&DAT_00486240)[s4].used_size = param_1;
      ((PoolCacheEntry *)&DAT_00486240)[s4].alloc_size = param_1;
      pu2 = FUN_0046f060(param_2,param_1,0);
      _DAT_0047fc00 = _DAT_0047fc00 + 1;
      ((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr = pu2;
      _DAT_0047fc04 = _DAT_0047fc04 + 1;
      DAT_0047fc08 = DAT_0047fc08 + ((PoolCacheEntry *)&DAT_00486240)[s4].alloc_size;
      DAT_0047fc0c = DAT_0047fc0c + ((PoolCacheEntry *)&DAT_00486240)[s4].used_size;
      pu5 = (int *)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr;
      for (u3 = param_1 >> 2; u3 != 0; u3 = u3 - 1) {
        *pu5 = 0;
        pu5 = pu5 + 1;
      }
      for (u3 = param_1 & 3; u3 != 0; u3 = u3 - 1) {
        *(char *)pu5 = 0;
        pu5 = (int *)((char *)pu5 + 1);
      }
      return (int)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr;
    }
  }
  _DAT_0047fc04 = _DAT_0047fc04 + 1;
  DAT_0047fc0c = DAT_0047fc0c + param_1;
  u3 = param_1 >> 2;
  ((PoolCacheEntry *)&DAT_00486240)[s4].in_use = 1;
  ((PoolCacheEntry *)&DAT_00486240)[s4].used_size = param_1;
  pu5 = (int *)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr;
  for (; u3 != 0; u3 = u3 - 1) {
    *pu5 = 0;
    pu5 = pu5 + 1;
  }
  for (u3 = param_1 & 3; u3 != 0; u3 = u3 - 1) {
    *(char *)pu5 = 0;
    pu5 = (int *)((char *)pu5 + 1);
  }
  return (int)((PoolCacheEntry *)&DAT_00486240)[s4].data_ptr;
}


/* FUN_004271c0 @ 0x004271c0 */

/* NOTE: overlapping globals */

void FUN_004271c0(void)
{
  int n1;
  short s2;
  
  /* Clear all 256 PoolCacheEntry entries */
  s2 = 0;
  do {
    n1 = (int)s2;
    s2 = s2 + 1;
    ((PoolCacheEntry *)&DAT_00486240)[n1].in_use = 0;
    ((PoolCacheEntry *)&DAT_00486240)[n1].data_ptr = 0;
    ((PoolCacheEntry *)&DAT_00486240)[n1].used_size = 0;
    ((PoolCacheEntry *)&DAT_00486240)[n1].alloc_size = 0;
  } while (s2 < 0x100);
  _DAT_0047fc00 = 0;
  DAT_0047fc0c = 0;
  _DAT_0047fc04 = 0;
  DAT_0047fc08 = 0;
  DAT_0047fbfc = 1;
}


/* FUN_00427220 @ 0x00427220 */

/* NOTE: overlapping globals */

uint __cdecl FUN_00427220(int *param_1)
{
  int n1;
  int n2;
  short s3;
  uint _eax;
  uint u4;
  
  u4 = _eax & 0xffff0000;
  while( true ) {
    s3 = (short)u4;
    if (0xff < s3) {
      return u4 & 0xffffff00;
    }
    if ((int)((PoolCacheEntry *)&DAT_00486240)[s3].data_ptr == *param_1) break;
    u4 = CONCAT22((short)(u4 >> 0x10),s3 + 1);
  }
  _DAT_0047fc04 = _DAT_0047fc04 + -1;
  n2 = s3 * 0xe;
  n1 = ((PoolCacheEntry *)&DAT_00486240)[s3].used_size;
  ((PoolCacheEntry *)&DAT_00486240)[s3].used_size = 0;
  ((PoolCacheEntry *)&DAT_00486240)[s3].in_use = 0;
  DAT_0047fc0c = DAT_0047fc0c - n1;
  *param_1 = 0;
  return CONCAT31((unsigned int)((uint)n2 >> 8),1);
}


/* FUN_00427290 @ 0x00427290 */

/* NOTE: overlapping globals */

void FUN_00427290(void)
{
  int n1;
  uint u2;
  int n3;
  int n4;
  short s5;
  
  /* Free all PoolCacheEntry entries */
  s5 = 0;
  n3 = DAT_0047fc08;
  n4 = DAT_0047fc0c;
  do {
    u2 = (uint)((PoolCacheEntry *)&DAT_00486240)[s5].data_ptr;
    if (u2 != 0) {
      _DAT_0047fc00 = _DAT_0047fc00 + -1;
      if (((PoolCacheEntry *)&DAT_00486240)[s5].in_use != '\0') {
        _DAT_0047fc04 = _DAT_0047fc04 + -1;
      }
      DAT_0047fc08 = n3 - ((PoolCacheEntry *)&DAT_00486240)[s5].alloc_size;
      DAT_0047fc0c = n4 - ((PoolCacheEntry *)&DAT_00486240)[s5].used_size;
      FUN_0046f5f0(u2);
      n4 = DAT_0047fc0c;
      n3 = DAT_0047fc08;
      ((PoolCacheEntry *)&DAT_00486240)[s5].data_ptr = 0;
      ((PoolCacheEntry *)&DAT_00486240)[s5].alloc_size = 0;
      ((PoolCacheEntry *)&DAT_00486240)[s5].used_size = 0;
      ((PoolCacheEntry *)&DAT_00486240)[s5].in_use = 0;
    }
    s5 = s5 + 1;
  } while (s5 < 0x100);
}


/* FUN_00427340 @ 0x00427340 */

void __cdecl FUN_00427340(short param_1,uint param_2)
{
    /* STUB: 28 lines not yet reconstructed */
    return;
}


/* FUN_004273d0 @ 0x004273d0 */

void FUN_004273d0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486238,u1,_arg2);
}


/* FUN_00427420 @ 0x00427420 */

void FUN_00427420(void) { return; }


/* FUN_00427440 @ 0x00427440 */

/* NOTE: overlapping globals */

void FUN_00427440(void)
{
  _DAT_00487046 = 0;
  _DAT_00487044 = 0;
}


/* FUN_00427450 @ 0x00427450 */

void FUN_00427450(void)
{
  _atexit(FUN_00427460);
}


/* FUN_00427460 @ 0x00427460 */

void FUN_00427460(void) { return; }


/* FUN_00427480 @ 0x00427480 */

/* NOTE: overlapping globals */

void FUN_00427480(void)
{
  _DAT_00487042 = 0;
  _DAT_00487040 = 0;
}


/* FUN_00427490 @ 0x00427490 */

void FUN_00427490(void)
{
  _atexit(FUN_004274a0);
}


/* FUN_004274a0 @ 0x004274a0 */

void FUN_004274a0(void) { return; }


/* FUN_004274c0 @ 0x004274c0 */

void FUN_004274c0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487048,u1,_arg2);
}


/* FUN_00427500 @ 0x00427500 */

void FUN_00427500(void)
{
  _atexit(FUN_00427510);
}


/* FUN_00427510 @ 0x00427510 */

void FUN_00427510(void) { return; }


/* FUN_00427530 @ 0x00427530 */

/* NOTE: overlapping globals */

void FUN_00427530(void)
{
  _DAT_00487056 = 0;
  _DAT_00487054 = 0;
}


/* FUN_00427540 @ 0x00427540 */

void FUN_00427540(void)
{
  _atexit(FUN_00427550);
}


/* FUN_00427550 @ 0x00427550 */

void FUN_00427550(void) { return; }


/* FUN_00427570 @ 0x00427570 */

/* NOTE: overlapping globals */

void FUN_00427570(void)
{
  _DAT_00487052 = 0;
  _DAT_00487050 = 0;
}


/* FUN_00427580 @ 0x00427580 */

void FUN_00427580(void)
{
  _atexit(FUN_00427590);
}


/* FUN_00427590 @ 0x00427590 */

void FUN_00427590(void) { return; }


/* FUN_00427820 @ 0x00427820 */

unsigned char * __thiscall
FUN_00427820(void *this,unsigned char param_1,unsigned char param_2,unsigned char param_3)
{
  ((unsigned char *)this)[0] = param_1;
  ((unsigned char *)this)[1] = param_2;
  ((unsigned char *)this)[2] = param_3;
  return (unsigned char *)this;
}


/* FUN_00427850 @ 0x00427850 */

void FUN_00427850(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487058,u1,_arg2);
}


/* FUN_00427890 @ 0x00427890 */

void FUN_00427890(void)
{
  _atexit(FUN_004278a0);
}


/* FUN_004278a0 @ 0x004278a0 */

void FUN_004278a0(void) { return; }


/* FUN_004278c0 @ 0x004278c0 */

/* NOTE: overlapping globals */

void FUN_004278c0(void)
{
  _DAT_004870d6 = 0;
  _DAT_004870d4 = 0;
}


/* FUN_004278d0 @ 0x004278d0 */

void FUN_004278d0(void)
{
  _atexit(FUN_004278e0);
}


/* FUN_004278e0 @ 0x004278e0 */

void FUN_004278e0(void) { return; }


/* FUN_00427900 @ 0x00427900 */

/* NOTE: overlapping globals */

void FUN_00427900(void)
{
  _DAT_004870d2 = 0;
  _DAT_004870d0 = 0;
}


/* FUN_00427910 @ 0x00427910 */

void FUN_00427910(void)
{
  _atexit(FUN_00427920);
}


/* FUN_00427920 @ 0x00427920 */

void FUN_00427920(void) { return; }


/* FUN_00427940 @ 0x00427940 */

void FUN_00427940(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004870e8,u1,_arg2);
}


/* FUN_00427980 @ 0x00427980 */

void FUN_00427980(void)
{
  _atexit(FUN_00427990);
}


/* FUN_00427990 @ 0x00427990 */

void FUN_00427990(void) { return; }


/* FUN_004279b0 @ 0x004279b0 */

/* NOTE: overlapping globals */

void FUN_004279b0(void)
{
  _DAT_004870f6 = 0;
  _DAT_004870f4 = 0;
}


/* FUN_004279c0 @ 0x004279c0 */

void FUN_004279c0(void)
{
  _atexit(FUN_004279d0);
}


/* FUN_004279d0 @ 0x004279d0 */

void FUN_004279d0(void) { return; }


/* FUN_004279f0 @ 0x004279f0 */

/* NOTE: overlapping globals */

void FUN_004279f0(void)
{
  _DAT_004870f2 = 0;
  _DAT_004870f0 = 0;
}


/* FUN_00427a00 @ 0x00427a00 */

void FUN_00427a00(void)
{
  _atexit(FUN_00427a10);
}


/* FUN_00427a10 @ 0x00427a10 */

void FUN_00427a10(void) { return; }


/* FUN_00427a50 @ 0x00427a50 */

void FUN_00427a50(void)
{
  DAT_004870da = 0xf0;
  DAT_004870d8 = 0x15e;
}


/* FUN_00427a70 @ 0x00427a70 */

void FUN_00427a70(void)
{
  _atexit(FUN_00427a80);
}


/* FUN_00427a80 @ 0x00427a80 */

void FUN_00427a80(void) { return; }


/* FUN_00427b10 @ 0x00427b10 */

int * __fastcall FUN_00427b10(int *param_1)
{
  ushort *pu1;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00427bc4;
  *_fs = &_seh_prev;
  FUN_004534e0(param_1);
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  *param_1 = &PTR_FUN_00473698;
  FUN_0041da90(param_1,0);
  pu1 = FUN_0040f380(DAT_004838c0,0x94000c,NULL);
  param_1[0x48] = pu1;
  pu1 = FUN_0040f380(DAT_004838c0,0x93000c,NULL);
  param_1[0x46] = pu1;
  pu1 = FUN_0040f380(DAT_004838c0,0x92000c,NULL);
  param_1[0x47] = pu1;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00427be0 @ 0x00427be0 */

int * __thiscall FUN_00427be0(void *this,byte param_1)
{
  FUN_00427c50(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00427c00 @ 0x00427c00 */

void FUN_00427c00(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00427c37;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00427c41();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00427c41 @ 0x00427c41 */

void FUN_00427c41(void)
{
  FUN_004012a0();
}


/* FUN_00427c50 @ 0x00427c50 */

void __fastcall FUN_00427c50(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00427ccf;
  *param_1 = &PTR_FUN_00473698;
  *_fs = &_seh_prev;
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041da90(param_1,0);
  FUN_0046f5f0(param_1[0x46]);
  FUN_0046f5f0(param_1[0x47]);
  FUN_0046f5f0(param_1[0x48]);
  _seh_state = 0xffffffff;
  FUN_00427cd9();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00427cd9 @ 0x00427cd9 */

void FUN_00427cd9(void)
{
  FUN_00427c00();
}


/* FUN_00427f19 @ 0x00427f19 */

void FUN_00427f19(void) { return; }


/* FUN_00427f30 @ 0x00427f30 */

int * __fastcall FUN_00427f30(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00427fcc;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473740;
  _seh_state = 1;
  FUN_00454300(param_1 + 0x48);
  *param_1 = &PTR_FUN_00473898;
  *(int *)((char *)param_1 + 0x23a) = 0; /* TODO: offset 0x23A on PTR_LAB_004737e8 subclass */
  *param_1 = &PTR_LAB_004737e8;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00427fe0 @ 0x00427fe0 */

int * __thiscall FUN_00427fe0(void *this,byte param_1)
{
  FUN_004281b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00428000 @ 0x00428000 */

int * __thiscall FUN_00428000(void *this,byte param_1)
{
  FUN_00454660(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00428020 @ 0x00428020 */

void FUN_00428020(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00428057;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00428061();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00428061 @ 0x00428061 */

void FUN_00428061(void)
{
  FUN_004012a0();
}


/* FUN_00428070 @ 0x00428070 */

void FUN_00428070(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004280a7;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004280b1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004280b1 @ 0x004280b1 */

void FUN_004280b1(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_00428119 @ 0x00428119 */

void FUN_00428119(void)
{
  FUN_004012a0();
}


/* FUN_004281b0 @ 0x004281b0 */

void __fastcall FUN_004281b0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0042820f;
  *param_1 = &PTR_LAB_004737e8;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (*(void ***)((char *)param_1 + 0x23a) != (void **)0x0) { /* TODO: offset 0x23A on PTR_LAB_004737e8 subclass */
    ((void (*)(void))**(void ***)((char *)param_1 + 0x23a))(); /* obj at +0x23A->vtable[0] */
    *(int *)((char *)param_1 + 0x23a) = 0; /* TODO: offset 0x23A on PTR_LAB_004737e8 subclass */
  }
  _seh_state = 0xffffffff;
  FUN_00428219();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00428219 @ 0x00428219 */

void FUN_00428219(void)
{
  int _ebp;
  
  FUN_00454660(*(int **)(_ebp + -0x10));
}


/* FUN_0042840d @ 0x0042840d */

void FUN_0042840d(void) { return; }


/* FUN_00428415 @ 0x00428415 */

void FUN_00428415(void) { return; }


/* FUN_00428427 @ 0x00428427 */

void FUN_00428427(void) { return; }


/* FUN_0042853e @ 0x0042853e */

void FUN_0042853e(void) { return; }


/* FUN_00428550 @ 0x00428550 */

void __thiscall FUN_00428550(void *this,short param_1)
{
  char v28 [40];
  
  _itoa((int)param_1,v28,10);
  FUN_00458860(*(void **)((char *)this + 0x23a),v28); /* TODO: offset 0x23A on PTR_LAB_004737e8 subclass */
  return;
}


/* FUN_00428590 @ 0x00428590 */

int * __fastcall FUN_00428590(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004285df;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473948;
  param_1[0x46] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00428600 @ 0x00428600 */

int * __thiscall FUN_00428600(void *this,byte param_1)
{
  FUN_00428620(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00428620 @ 0x00428620 */

void __fastcall FUN_00428620(int *param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_00428689 @ 0x00428689 */

void FUN_00428689(void)
{
  FUN_004012a0();
}


/* FUN_004286a0 @ 0x004286a0 */

void __fastcall FUN_004286a0(void *param_1)
{
    /* STUB: 44 lines not yet reconstructed */
    return;
}


/* FUN_004287dc @ 0x004287dc */

void FUN_004287dc(void) { return; }


/* FUN_004287f0 @ 0x004287f0 */

void __fastcall FUN_004287f0(int *param_1)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}


/* FUN_00428820 @ 0x00428820 */

int * __fastcall FUN_00428820(int *param_1)
{
  short s1;
  int n2;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00428902;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  _seh_state = 0;
  FUN_004112e0((int *)((char *)param_1 + 0x1c2));
  *param_1 = &PTR_FUN_004739f0;
  ((GameBoard *)param_1)->field_198 = 1;
  s1 = 0;
  do {
    n2 = (int)s1;
    s1 = s1 + 1;
    ((GameBoard *)param_1)->slot_handles[n2] = 0;
  } while (s1 < 5);
  ((GameBoard *)param_1)->field_1b6 = 0;
  ((GameBoard *)param_1)->field_1ae = 0;
  ((GameBoard *)param_1)->field_1b2 = 0;
  ((GameBoard *)param_1)->field_1b8 = 0;
  ((GameBoard *)param_1)->field_199 = 0;
  *(int *)((char *)param_1 + 0x39e) = 0; /* TODO: offset 0x39E on GameBoard subclass (PTR_FUN_004739f0), beyond struct */
  ((GameBoard *)param_1)->refresh_counter = 0; /* param_1 + 0x6f = byte offset 0x1BC */
  *(int *)((char *)param_1 + 0x3a2) = 0; /* TODO: offset 0x3A2 on GameBoard subclass (PTR_FUN_004739f0), beyond struct */
  *(int *)((char *)param_1 + 0x3a6) = 0; /* TODO: offset 0x3A6 on GameBoard subclass (PTR_FUN_004739f0), beyond struct */
  ((GameBoard *)param_1)->field_1b9 = 0;
  ((GameBoard *)param_1)->needs_refresh = 0;
  ((GameBoard *)param_1)->field_1be = 0;
  param_1[0x5c] = &DAT_0047fc38;
  DAT_0047ef40 = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00428920 @ 0x00428920 */

int * __thiscall FUN_00428920(void *this,byte param_1)
{
  FUN_00428990(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00428940 @ 0x00428940 */

void FUN_00428940(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00428977;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00428981();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00428981 @ 0x00428981 */

void FUN_00428981(void)
{
  FUN_00411360();
}


/* FUN_00428990 @ 0x00428990 */

void __fastcall FUN_00428990(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_004289e8;
  *param_1 = &PTR_FUN_004739f0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_004289da();
  _seh_state = 0xffffffff;
  FUN_004289f2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004289da @ 0x004289da */

void FUN_004289da(void)
{
  FUN_00428940();
}


/* FUN_004289f2 @ 0x004289f2 */

void FUN_004289f2(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_00428a00 @ 0x00428a00 */

void __fastcall FUN_00428a00(int param_1)
{
    /* STUB: 42 lines not yet reconstructed */
    return;
}


/* FUN_00428ad0 @ 0x00428ad0 */

int FUN_00428ad0(void)
{
    /* STUB: 46 lines not yet reconstructed */
    return 0;
}


/* FUN_00428c00 @ 0x00428c00 */

short FUN_00428c00(void)
{
    /* STUB: 52 lines not yet reconstructed */
    return 0;
}


/* FUN_00428d80 @ 0x00428d80 */

int __fastcall FUN_00428d80(int param_1)
{
  int n1;
  short u2;
  
  n1 = ((GameSession *)DAT_0048345c)->field_96 + -1;
  u2 = (short)((uint)n1 >> 0x10);
  switch(n1) {
  case 0:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0xc);
  case 1:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0xc);
  case 2:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0x31);
  case 3:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0x31);
  case 4:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0x111);
  case 5:
    return CONCAT22(u2,*(short *)(param_1 + 0x1b6) + 0x111);
  default:
    return CONCAT22(u2,0xffff);
  }
}


/* FUN_00428e00 @ 0x00428e00 */

void FUN_00428e00(void) { return; }


/* FUN_00428e10 @ 0x00428e10 */

void __fastcall FUN_00428e10(void *param_1)
{
  uint u1;
  
  u1 = ((UIElement *)((GameBoard *)param_1)->reward_obj_b)->flags;
  FUN_0041da90(((GameBoard *)param_1)->reward_obj_b,1);
  FUN_0041dd40(((GameBoard *)param_1)->reward_obj_b);
  FUN_0042da60(param_1,0x5c4000d,NULL,-1,-1);
  FUN_0041da90(((GameBoard *)param_1)->reward_obj_b,(byte)(u1 >> 4) & 1);
}


/* FUN_00428e60 @ 0x00428e60 */

void __fastcall FUN_00428e60(int param_1)
{
  short s1;
  int *pu2;
  
  ((GameSession *)DAT_0048345c)->field_f0 = 0;
  pu2 = *(void **)&((UIWidget *)DAT_004897c0)->field_44;
  if (pu2 != NULL) {
    *(void **)&((UIWidget *)DAT_004897c0)->field_44 = 0;
    ((void (*)(void))((void **)*pu2)[0])(); /* pu2->vtable[0] */
  }
  s1 = 0;
  pu2 = NULL;
  do {
    if (((GameWidget *)*(int *)(param_1 + 0x19a + s1 * 4))->field_118 == 1) { /* TODO: param_1+0x19a = sub-object array */
      pu2 = FUN_00454520((void *)&((DialogWidget *)*(int *)(param_1 + 0x19a + s1 * 4))->is_registered); /* sub-object + 0x120 */
      break;
    }
    s1 = s1 + 1;
  } while (s1 < 5);
  if (DAT_00489288 == 0) {
    FUN_00407340(0x400011,'\x01','\0',4,'\0');
  }
  FUN_0041dd40(pu2);
  FUN_0041c2a0(pu2,2);
  FUN_0041ba40(pu2,1,1,0);
  ((UIWidget *)pu2)->field_109 = 1;
  FUN_0041b5f0(pu2,1);
  *(void **)&((UIWidget *)DAT_004897c0)->field_44 = pu2;
}


/* FUN_00428f30 @ 0x00428f30 */

void __cdecl FUN_00428f30(void *param_1,short param_2)
{
  uint u1;
  int n2;
  
  if (param_1 != NULL) {
    FUN_004094d0(param_1,param_2,'\x01');
    if ((int)((UIElement *)param_1)->child_list_2 != 0 &&
       (u1 = 1, ((CVector *)((UIElement *)param_1)->child_list_2)->count != 0)) {
      n2 = 4;
      do {
        n2 = n2 + 4;
        u1 = u1 + 1;
        FUN_00428f30(*(void **)(**(int **)((CVector *)((UIElement *)param_1)->child_list_2)->data + -8 + n2),param_2);
      } while (u1 <= ((CVector *)((UIElement *)param_1)->child_list_2)->count);
    }
  }
  return;
}


/* FUN_00428f90 @ 0x00428f90 */

void __cdecl FUN_00428f90(void *param_1)
{
  int n1;
  uint u2;
  
  if (param_1 != NULL) {
    FUN_00409580(param_1,'\x01');
    if ((int)((UIElement *)param_1)->child_list_2 != 0 &&
       (u2 = 1, ((CVector *)((UIElement *)param_1)->child_list_2)->count != 0)) {
      n1 = 4;
      do {
        n1 = n1 + 4;
        u2 = u2 + 1;
        FUN_00428f90(*(void **)(**(int **)((CVector *)((UIElement *)param_1)->child_list_2)->data + -8 + n1));
      } while (u2 <= ((CVector *)((UIElement *)param_1)->child_list_2)->count);
    }
  }
  return;
}


/* FUN_004292b0 @ 0x004292b0 */

void __fastcall FUN_004292b0(void *param_1)
{
  DWORD dw1;
  
  dw1 = GetTickCount();
  ((GameBoard *)param_1)->last_tick = dw1;
  FUN_0042dba0(param_1,(int)param_1 + 500);
  dw1 = GetTickCount();
  ((GameBoard *)param_1)->last_tick = dw1;
}


/* FUN_004292e0 @ 0x004292e0 */

/* NOTE: Removing unreachable block (ram,0x00429306) */

void __fastcall FUN_004292e0(int *param_1)
{
    /* STUB: 39 lines not yet reconstructed */
    return;
}


/* FUN_004299b0 @ 0x004299b0 */

void __fastcall FUN_004299b0(int param_1)
{
  DWORD dw1;
  
  FUN_0042db40(param_1);
  dw1 = GetTickCount();
  ((GameBoard *)param_1)->last_tick = dw1;
}


/* FUN_004299d0 @ 0x004299d0 */

void __fastcall FUN_004299d0(void *param_1)
{
    /* STUB: 35 lines not yet reconstructed */
    return;
}


/* FUN_00429b20 @ 0x00429b20 */

void __fastcall FUN_00429b20(int *param_1)
{
  if (((GameBoard *)param_1)->field_1b2 != 0) {
    ((void (*)(void))**(void ***)(int *)&((GameBoard *)param_1)->field_1b2)(); /* obj->vtable[0] */
    ((GameBoard *)param_1)->field_1b2 = 0;
  }
  FUN_00409330();
  ((void (*)(void))((void **)(*param_1))[0x90 / 4])();
  if (param_1[0x34] != 0) {
    FUN_0046f5f0(param_1[0x34]);
    param_1[0x34] = 0;
  }
  FUN_0040f070(DAT_004838c0,0,(uint)((GameBoard *)param_1)->reward_data_a);
  ((GameBoard *)param_1)->reward_data_a = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((char *)param_1 + 0x39e)); /* TODO: offset 0x39E beyond GameBoard struct */
  *(int *)((char *)param_1 + 0x39e) = 0; /* TODO: offset 0x39E beyond GameBoard struct */
  FUN_0040f070(DAT_004838c0,0,*(uint *)((char *)param_1 + 0x3a2)); /* TODO: offset 0x3A2 beyond GameBoard struct */
  *(int *)((char *)param_1 + 0x3a2) = 0; /* TODO: offset 0x3A2 beyond GameBoard struct */
  FUN_0040f070(DAT_004838c0,0,*(uint *)((char *)param_1 + 0x3a6)); /* TODO: offset 0x3A6 beyond GameBoard struct */
  *(int *)((char *)param_1 + 0x3a6) = 0; /* TODO: offset 0x3A6 beyond GameBoard struct */
  FUN_0040f070(DAT_004838c0,0,(uint)((GameBoard *)param_1)->reward_data_b);
  ((GameBoard *)param_1)->reward_data_b = 0;
  FUN_0040f070(DAT_004838c0,0,(uint)((GameBoard *)param_1)->reward_data_c);
  ((GameBoard *)param_1)->reward_data_c = 0;
  FUN_00428e00();
}


/* FUN_00429f29 @ 0x00429f29 */

void FUN_00429f29(void)
{
  FUN_00429f40();
}


/* FUN_00429f40 @ 0x00429f40 */

void FUN_00429f40(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00429f77;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00429f81();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00429f81 @ 0x00429f81 */

void FUN_00429f81(void)
{
  FUN_00428020();
}


/* FUN_0042a354 @ 0x0042a354 */

void FUN_0042a354(void) { return; }


/* FUN_0042a35c @ 0x0042a35c */

void FUN_0042a35c(void) { return; }


/* FUN_0042a4fb @ 0x0042a4fb */

void FUN_0042a4fb(void) { return; }


/* FUN_0042a503 @ 0x0042a503 */

void FUN_0042a503(void) { return; }


/* FUN_0042a50b @ 0x0042a50b */

void FUN_0042a50b(void) { return; }


/* FUN_0042a513 @ 0x0042a513 */

void FUN_0042a513(void) { return; }


/* FUN_0042a525 @ 0x0042a525 */

void FUN_0042a525(void) { return; }


/* FUN_0042a6bc @ 0x0042a6bc */

void FUN_0042a6bc(void)
{
  int _ebp;
  
  FUN_004097c0((int *)(_ebp + -0x24));
}


/* FUN_0042a6d0 @ 0x0042a6d0 */

char * __fastcall FUN_0042a6d0(char *param_1)
{
  FUN_0042a6e0(param_1);
  return param_1;
}


/* FUN_0042a6e0 @ 0x0042a6e0 */

void __fastcall FUN_0042a6e0(char *param_1)
{
  *(short *)(param_1 + 6) = 0;
  *param_1 = 0;
  *(int *)(param_1 + 2) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int *)(param_1 + 0xe) = 0;
  *(short *)(param_1 + 0xc) = 2;
}


/* FUN_0042a710 @ 0x0042a710 */

char __cdecl FUN_0042a710(short param_1,char param_2,char param_3,char *param_4)
{
  char c1;
  
  c1 = '\x01';
  if (*param_4 != '\0') {
    c1 = param_2;
  }
  if (param_1 == 1) {
    if ((c1 == '\0') && (param_3 == '\0')) {
      *param_4 = '\x01';
      return '\0';
    }
    *param_4 = '\x01';
    return '\x01';
  }
  if (param_1 != 2) {
    *param_4 = '\x01';
    return c1;
  }
  if ((c1 != '\0') && (param_3 != '\0')) {
    *param_4 = '\x01';
    return '\x01';
  }
  *param_4 = '\x01';
  return '\0';
}


/* FUN_0042a770 @ 0x0042a770 */

void __cdecl FUN_0042a770(int param_1,char *param_2)
{
  int n1;
  char c2;
  char v1;
  
  c2 = '\0';
  v1 = '\0';
  if (((param_1 != 0) && (param_2 != NULL)) && (n1 = (int)((UIWidget *)param_1)->level_data_ptr, n1 != 0)
     ) {
    if (*param_2 == '\0') {
      if (*(int *)(param_2 + 2) != 0) {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),'\0',param_1 == *(int *)(param_2 + 2),
                             &v1);
      }
      if (*(ushort *)(param_2 + 6) != 0) {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),c2,
                             (int)((UIWidget *)param_1)->active_anim_id == (uint)*(ushort *)(param_2 + 6),
                             &v1);
      }
      if (param_2[8] != '\0') {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),c2,*(char *)(n1 + 4) == param_2[8],
                             &v1);
      }
      if (param_2[9] != '\0') {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),c2,*(char *)(n1 + 7) == param_2[9],
                             &v1);
      }
      if (param_2[10] != '\0') {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),c2,*(char *)(n1 + 5) == param_2[10],
                             &v1);
      }
      if (param_2[0xb] != '\0') {
        c2 = FUN_0042a710(*(short *)(param_2 + 0xc),c2,*(char *)(n1 + 6) == param_2[0xb],
                             &v1);
      }
    }
    else {
      c2 = '\x01';
    }
  }
  if (c2 != '\0') {
    *(int *)(param_2 + 0xe) = *(int *)(param_2 + 0xe) + 1;
  }
  return;
}


/* FUN_0042a8b0 @ 0x0042a8b0 */

void __cdecl FUN_0042a8b0(int param_1,char *param_2)
{
  uint u1;
  int n2;
  
  if (param_1 != 0) {
    if (((UIElement *)param_1)->child_list_2 != 0 &&
       (u1 = 1, ((CVector *)((UIElement *)param_1)->child_list_2)->count != 0)) {
      n2 = 4;
      do {
        n2 = n2 + 4;
        u1 = u1 + 1;
        FUN_0042a8b0(*(int *)(**(int **)((CVector *)((UIElement *)param_1)->child_list_2)->data + -8 + n2),param_2);
      } while (u1 <= ((CVector *)((UIElement *)param_1)->child_list_2)->count);
    }
    FUN_0042a770(param_1,param_2);
  }
  return;
}


/* FUN_0042a910 @ 0x0042a910 */

int __cdecl FUN_0042a910(int param_1)
{
  char v14 [14];
  int v6;
  
  FUN_0042a6d0(v14);
  if (param_1 != 0) {
    v14[0] = '\x01';
    FUN_0042a8b0(param_1,v14);
  }
  return v6;
}


/* FUN_0042a950 @ 0x0042a950 */

void FUN_0042a950(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004870f8,u1,_arg2);
}


/* FUN_0042a9a0 @ 0x0042a9a0 */

void FUN_0042a9a0(void) { return; }


/* FUN_0042a9c0 @ 0x0042a9c0 */

/* NOTE: overlapping globals */

void FUN_0042a9c0(void)
{
  _DAT_00487106 = 0;
  _DAT_00487104 = 0;
}


/* FUN_0042a9d0 @ 0x0042a9d0 */

void FUN_0042a9d0(void)
{
  _atexit(FUN_0042a9e0);
}


/* FUN_0042a9e0 @ 0x0042a9e0 */

void FUN_0042a9e0(void) { return; }


/* FUN_0042aa00 @ 0x0042aa00 */

/* NOTE: overlapping globals */

void FUN_0042aa00(void)
{
  _DAT_00487102 = 0;
  _DAT_00487100 = 0;
}


/* FUN_0042aa10 @ 0x0042aa10 */

void FUN_0042aa10(void)
{
  _atexit(FUN_0042aa20);
}


/* FUN_0042aa20 @ 0x0042aa20 */

void FUN_0042aa20(void) { return; }


/* FUN_0042aa30 @ 0x0042aa30 */

int * __fastcall FUN_0042aa30(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042aaa7;
  *_fs = &_seh_prev;
  FUN_00458040(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00473b80;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(char *)(param_1 + 0x27) = 0;
  ((UIElement *)param_1)->type_or_mode = 1;
  FUN_0042ac60(param_1,0x14);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0042aac0 @ 0x0042aac0 */

int * __thiscall FUN_0042aac0(void *this,byte param_1)
{
  FUN_0042aae0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0042aae0 @ 0x0042aae0 */

void __fastcall FUN_0042aae0(int *param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0042ab49 @ 0x0042ab49 */

void FUN_0042ab49(void)
{
  int _ebp;
  
  FUN_00458710(*(int **)(_ebp + -0x10));
}


/* FUN_0042ab60 @ 0x0042ab60 */

int __fastcall FUN_0042ab60(int param_1)
{
  return param_1 + 0x42;
}


/* FUN_0042ab70 @ 0x0042ab70 */

void __thiscall FUN_0042ab70(TextDisplay *this,int param_1)
{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  char *pc5;
  uint u6;
  int n7;
  uint u8;
  int *pu9;
  int *pu10;
  
  u8 = 0;
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc5 = (char *)**(int **)(param_1 + 4), pc5 != NULL)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      u8 = u8 + 1;
      c1 = *pc5;
    }
  }
  if (this->text_capacity + -1 < (int)u8) {
    n7 = 0;
    pu4 = this->text_buffer_ptr;
    if ((pu4 != NULL) && (pc5 = (char *)*pu4, pc5 != NULL)) {
      c1 = *pc5;
      while (c1 != '\0') {
        pc5 = pc5 + 1;
        n7 = n7 + 1;
        c1 = *pc5;
      }
    }
    n2 = u8 + 1;
    if ((int)(u8 + 1) <= n7 + 1) {
      n2 = n7 + 1;
    }
    n7 = (((int)(n2 + (n2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (pu4 == NULL) {
      pv3 = this->text_allocator;
      if (this->text_allocator == NULL) {
        pv3 = DAT_00483df4;
      }
      pu4 = FUN_0046ccb0(pv3,7,n7);
    }
    else {
      pu4 = FUN_0046cdc0(pu4,n7,7);
    }
    this->text_buffer_ptr = pu4;
    this->text_capacity = n7;
  }
  pu9 = (int *)**(int **)(param_1 + 4);
  pu10 = (int *)*this->text_buffer_ptr;
  for (u6 = u8 >> 2; u6 != 0; u6 = u6 - 1) {
    *pu10 = *pu9;
    pu9 = pu9 + 1;
    pu10 = pu10 + 1;
  }
  n7 = 0;
  for (u6 = u8 & 3; u6 != 0; u6 = u6 - 1) {
    *(char *)pu10 = *(char *)pu9;
    pu9 = (int *)((char *)pu9 + 1);
    pu10 = (int *)((char *)pu10 + 1);
  }
  *(char *)(*this->text_buffer_ptr + u8) = 0;
  if ((this->text_buffer_ptr != NULL) &&
     (pc5 = (char *)*this->text_buffer_ptr, pc5 != NULL)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      n7 = n7 + 1;
      c1 = *pc5;
    }
  }
  this->text_length = n7;
  ((void (*)(void))this->vtable[0x90 / 4])();
}


/* FUN_0042ac60 @ 0x0042ac60 */

void __thiscall FUN_0042ac60(void *this,int param_1)
{
  ((TextDisplay *)this)->param_store = param_1;
  FUN_00458b40(this,(short)param_1 + 1,1);
}


/* FUN_0042ac80 @ 0x0042ac80 */

void __fastcall FUN_0042ac80(int *param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return;
}


/* FUN_0042ad70 @ 0x0042ad70 */

int __fastcall FUN_0042ad70(void *param_1)
{
    /* STUB: 53 lines not yet reconstructed */
    return 0;
}


/* FUN_0042aef4 @ 0x0042aef4 */

void FUN_0042aef4(void) { return; }


/* FUN_0042af00 @ 0x0042af00 */

void __thiscall FUN_0042af00(void *this,char param_1)
{
    /* STUB: 125 lines not yet reconstructed */
    return;
}


/* FUN_0042b170 @ 0x0042b170 */

void __fastcall FUN_0042b170(int param_1)
{
  DWORD dw1;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    dw1 = GetTickCount();
    if (700 < dw1 % 1000) {
      FUN_0041dad0(*(void **)(param_1 + 0xb4),0,'\0');
      return;
    }
    FUN_0041dad0(*(void **)(param_1 + 0xb4),1,'\0');
  }
  return;
}


/* FUN_0042b1c0 @ 0x0042b1c0 */

void __fastcall FUN_0042b1c0(int *param_1)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}


/* FUN_0042b200 @ 0x0042b200 */

void FUN_0042b200(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487108,u1,_arg2);
}


/* FUN_0042b250 @ 0x0042b250 */

void FUN_0042b250(void) { return; }


/* FUN_0042b270 @ 0x0042b270 */

/* NOTE: overlapping globals */

void FUN_0042b270(void)
{
  _DAT_00487116 = 0;
  _DAT_00487114 = 0;
}


/* FUN_0042b280 @ 0x0042b280 */

void FUN_0042b280(void)
{
  _atexit(FUN_0042b290);
}


/* FUN_0042b290 @ 0x0042b290 */

void FUN_0042b290(void) { return; }


/* FUN_0042b2b0 @ 0x0042b2b0 */

/* NOTE: overlapping globals */

void FUN_0042b2b0(void)
{
  _DAT_00487112 = 0;
  _DAT_00487110 = 0;
}


/* FUN_0042b2c0 @ 0x0042b2c0 */

void FUN_0042b2c0(void)
{
  _atexit(FUN_0042b2d0);
}


/* FUN_0042b2d0 @ 0x0042b2d0 */

void FUN_0042b2d0(void) { return; }


/* FUN_0042b2e0 @ 0x0042b2e0 */

void __thiscall FUN_0042b2e0(CString *this,int param_1,uint param_2)
{
  int n1;
  char c2;
  int n3;
  int n4;
  LPCVOID pv5;
  uint *pu6;
  uint u7;
  char *pc8;
  int n9;
  int *pu10;
  
  n9 = 0;
  pu6 = this->pp_buffer;
  if ((pu6 != NULL) && (pc8 = (char *)*pu6, pc8 != NULL)) {
    c2 = *pc8;
    while (c2 != '\0') {
      pc8 = pc8 + 1;
      n9 = n9 + 1;
      c2 = *pc8;
    }
  }
  if (param_1 <= n9) {
    if (this->capacity + -1 < (int)(param_2 + n9)) {
      n3 = 0;
      if ((pu6 != NULL) && (pc8 = (char *)*pu6, pc8 != NULL)) {
        c2 = *pc8;
        while (c2 != '\0') {
          pc8 = pc8 + 1;
          n3 = n3 + 1;
          c2 = *pc8;
        }
      }
      n1 = param_2 + 1 + n9;
      n4 = n3 + 1;
      if (n3 + 1 <= n1) {
        n4 = n1;
      }
      n3 = (((int)(n4 + (n4 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (pu6 == NULL) {
        pv5 = this->allocator;
        if (this->allocator == NULL) {
          pv5 = DAT_00483df4;
        }
        pu6 = FUN_0046ccb0(pv5,7,n3);
      }
      else {
        pu6 = FUN_0046cdc0(pu6,n3,7);
      }
      this->pp_buffer = pu6;
      this->capacity = n3;
    }
    if (param_1 < n9) {
      memmove((void *)(param_2 + *this->pp_buffer + param_1),
              (void *)(param_1 + *this->pp_buffer),(n9 - param_1) + 1);
    }
    pu10 = (int *)(*this->pp_buffer + param_1);
    for (u7 = param_2 >> 2; u7 != 0; u7 = u7 - 1) {
      *pu10 = 0;
      pu10 = pu10 + 1;
    }
    for (u7 = param_2 & 3; u7 != 0; u7 = u7 - 1) {
      *(char *)pu10 = 0;
      pu10 = (int *)((char *)pu10 + 1);
    }
    *(char *)(*this->pp_buffer + n9 + param_2) = 0;
  }
  return;
}


/* FUN_0042b3e0 @ 0x0042b3e0 */

/* NOTE: overlapping globals */

uint FUN_0042b3e0(void)
{
    /* STUB: 69 lines not yet reconstructed */
    return 0;
}


/* FUN_0042b5f0 @ 0x0042b5f0 */

uint FUN_0042b5f0(void)
{
    /* STUB: 43 lines not yet reconstructed */
    return 0;
}


/* FUN_0042b700 @ 0x0042b700 */

short FUN_0042b700(void)
{
  return DAT_00487122;
}


/* FUN_0042b710 @ 0x0042b710 */

short __cdecl FUN_0042b710(short param_1)
{
  if (DAT_00487122 != param_1) {
    if (param_1 < 0) {
      DAT_00487122 = 0;
      return 0;
    }
    if (0x1ff < param_1) {
      DAT_00487122 = 0x1ff;
      return 0x1ff;
    }
    DAT_00487122 = param_1;
  }
  return DAT_00487122;
}


/* FUN_0042b760 @ 0x0042b760 */

void __cdecl FUN_0042b760(LPWAVEHDR param_1)
{
  byte *pb1;
  char *pc2;
  ushort u3;
  int n4;
  byte b5;
  short s6;
  short s7;
  int n8;
  short s9;
  uint u10;
  int n11;
  short s12;
  int *pu13;
  int *pu14;
  short v10;
  char *vc;
  int v8;
  int v4;
  
  waveOutUnprepareHeader(DAT_00487372,param_1,0x20);
  v10 = 0x1000;
  param_1->dwFlags = 0;
  s6 = DAT_00487126;
  vc = param_1->lpData;
  do {
    v4 = 0;
    v8 = 0;
    s12 = 0;
    if (0 < s6) {
      do {
        n8 = (int)s12;
        n11 = n8 * 0x78;
        if ((&DAT_00487132)[n8 * 0x3c] == 0) {
          s9 = (short)*(char *)(&DAT_0048713a)[n8 * 0x1e];
          v4 = v4 + (short)((&DAT_00487130)[n8 * 0x3c] * s9);
          s7 = (&DAT_0048712e)[n8 * 0x3c];
          (&DAT_0048713a)[n8 * 0x1e] = (char *)(&DAT_0048713a)[n8 * 0x1e] + 1;
          v8 = v8 + (short)(s7 * s9);
          n4 = (&DAT_00487142)[n8 * 0x1e];
          (&DAT_00487142)[n8 * 0x1e] = n4 + -1;
          if (n4 + -1 == 0) {
            u3 = (&DAT_00487134)[n8 * 0x3c];
            if ((char)(u3 >> 8) == '\0') {
L_0042b912:
              (&DAT_00487132)[n8 * 0x3c] = 1;
            }
            else if ((u3 & 0x2000) == 0) {
              if ((u3 & 0x4000) == 0) goto L_0042b912;
              (&DAT_0048713a)[n8 * 0x1e] = (&DAT_00487136)[n8 * 0x1e];
              (&DAT_00487142)[n8 * 0x1e] = (&DAT_0048713e)[n8 * 0x1e];
              (&DAT_00487132)[n8 * 0x3c] = 0;
            }
            else {
              if ((u3 & 0x1000) != 0) {
                s7 = 0;
                do {
                  if ((&DAT_00487312)[s7] == 0) {
                    (&DAT_00487312)[s7] = (&DAT_00487136)[n8 * 0x1e];
                    pb1 = (byte *)((char *)&DAT_00487134 + n11 + 1);
                    *pb1 = *pb1 & 0xef;
                    break;
                  }
                  s7 = s7 + 1;
                } while (s7 < 0x18);
                DAT_00487310 = 1;
              }
              pu14 = &DAT_0048714c + n8 * 0x1e;
              (&DAT_00487136)[n8 * 0x1e] = *pu14;
              (&DAT_0048713a)[n8 * 0x1e] = *pu14;
              (&DAT_0048713e)[n8 * 0x1e] = (&DAT_00487150)[n8 * 0x1e];
              (&DAT_00487142)[n8 * 0x1e] = (&DAT_00487150)[n8 * 0x1e];
              (&DAT_00487146)[n8 * 0x1e] = (&DAT_00487154)[n8 * 0x1e];
              if (((&DAT_00487159)[n11] & 0x10) != 0) {
                pb1 = (byte *)((char *)&DAT_00487134 + n11 + 1);
                *pb1 = *pb1 | 0x10;
              }
              s7 = (&DAT_0048714a)[n8 * 0x3c] + -1;
              (&DAT_0048714a)[n8 * 0x3c] = s7;
              if (s7 == 0) {
                pb1 = (byte *)((char *)&DAT_00487134 + n11 + 1);
                *pb1 = *pb1 & 0xdf;
              }
              else {
                pu13 = &DAT_0048715a + n8 * 0x1e;
                for (u10 = (uint)(s7 * 0xe) >> 2; u10 != 0; u10 = u10 - 1) {
                  *pu14 = *pu13;
                  pu13 = pu13 + 1;
                  pu14 = pu14 + 1;
                }
                for (u10 = s7 * 0xe & 3; u10 != 0; u10 = u10 - 1) {
                  *(char *)pu14 = *(char *)pu13;
                  pu13 = (int *)((char *)pu13 + 1);
                  pu14 = (int *)((char *)pu14 + 1);
                }
              }
              *(int *)
               ((char *)&DAT_0048714c + (short)(&DAT_0048714a)[n8 * 0x3c] * 0xe + n11) = 0;
              *(int *)
               ((char *)&DAT_00487150 + (short)(&DAT_0048714a)[n8 * 0x3c] * 0xe + n11) = 0;
              *(int *)
               ((char *)&DAT_00487154 + (short)(&DAT_0048714a)[n8 * 0x3c] * 0xe + n11) = 0;
              *(short *)(&DAT_00487158 + (short)(&DAT_0048714a)[n8 * 0x3c] * 0xe + n11) =
                   0;
              (&DAT_00487132)[n8 * 0x3c] = 0;
            }
          }
        }
        s12 = s12 + 1;
      } while (s12 < s6);
    }
    n11 = (int)DAT_00487122;
    b5 = DAT_00487124 & 0x1f;
    pc2 = vc + 1;
    *vc = (char)(n11 * v4 >> (DAT_00487124 & 0x1f)) + -0x80;
    vc = vc + 2;
    *pc2 = (char)(n11 * v8 >> b5) + -0x80;
    v10 = v10 + -1;
    if (v10 == 0) {
      param_1->dwBufferLength = 0x2000;
      waveOutPrepareHeader(DAT_00487372,param_1,0x20);
      waveOutWrite(DAT_00487372,param_1,0x20);
      return;
    }
  } while( true );
}


/* FUN_0042b9b0 @ 0x0042b9b0 */

void FUN_0042b9b0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487118,u1,_arg2);
}


/* FUN_0042ba00 @ 0x0042ba00 */

void FUN_0042ba00(void) { return; }


/* FUN_0042ba20 @ 0x0042ba20 */

/* NOTE: overlapping globals */

void FUN_0042ba20(void)
{
  _DAT_0048739a = 0;
  _DAT_00487398 = 0;
}


/* FUN_0042ba30 @ 0x0042ba30 */

void FUN_0042ba30(void)
{
  _atexit(FUN_0042ba40);
}


/* FUN_0042ba40 @ 0x0042ba40 */

void FUN_0042ba40(void) { return; }


/* FUN_0042ba60 @ 0x0042ba60 */

/* NOTE: overlapping globals */

void FUN_0042ba60(void)
{
  _DAT_00487396 = 0;
  _DAT_00487394 = 0;
}


/* FUN_0042ba70 @ 0x0042ba70 */

void FUN_0042ba70(void)
{
  _atexit(FUN_0042ba80);
}


/* FUN_0042ba80 @ 0x0042ba80 */

void FUN_0042ba80(void) { return; }


/* FUN_0042baa0 @ 0x0042baa0 */

void FUN_0042baa0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873a0,u1,_arg2);
}


/* FUN_0042bae0 @ 0x0042bae0 */

void FUN_0042bae0(void)
{
  _atexit(FUN_0042baf0);
}


/* FUN_0042baf0 @ 0x0042baf0 */

void FUN_0042baf0(void) { return; }


/* FUN_0042bb10 @ 0x0042bb10 */

/* NOTE: overlapping globals */

void FUN_0042bb10(void)
{
  _DAT_004873ae = 0;
  _DAT_004873ac = 0;
}


/* FUN_0042bb20 @ 0x0042bb20 */

void FUN_0042bb20(void)
{
  _atexit(FUN_0042bb30);
}


/* FUN_0042bb30 @ 0x0042bb30 */

void FUN_0042bb30(void) { return; }


/* FUN_0042bb50 @ 0x0042bb50 */

/* NOTE: overlapping globals */

void FUN_0042bb50(void)
{
  _DAT_004873aa = 0;
  _DAT_004873a8 = 0;
}


/* FUN_0042bb60 @ 0x0042bb60 */

void FUN_0042bb60(void)
{
  _atexit(FUN_0042bb70);
}


/* FUN_0042bb70 @ 0x0042bb70 */

void FUN_0042bb70(void) { return; }


/* FUN_0042bb90 @ 0x0042bb90 */

void FUN_0042bb90(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873b0,u1,_arg2);
}


/* FUN_0042bbd0 @ 0x0042bbd0 */

void FUN_0042bbd0(void)
{
  _atexit(FUN_0042bbe0);
}


/* FUN_0042bbe0 @ 0x0042bbe0 */

void FUN_0042bbe0(void) { return; }


/* FUN_0042bc00 @ 0x0042bc00 */

/* NOTE: overlapping globals */

void FUN_0042bc00(void)
{
  _DAT_004873be = 0;
  _DAT_004873bc = 0;
}


/* FUN_0042bc10 @ 0x0042bc10 */

void FUN_0042bc10(void)
{
  _atexit(FUN_0042bc20);
}


/* FUN_0042bc20 @ 0x0042bc20 */

void FUN_0042bc20(void) { return; }


/* FUN_0042bc40 @ 0x0042bc40 */

/* NOTE: overlapping globals */

void FUN_0042bc40(void)
{
  _DAT_004873ba = 0;
  _DAT_004873b8 = 0;
}


/* FUN_0042bc50 @ 0x0042bc50 */

void FUN_0042bc50(void)
{
  _atexit(FUN_0042bc60);
}


/* FUN_0042bc60 @ 0x0042bc60 */

void FUN_0042bc60(void) { return; }


/* FUN_0042bc70 @ 0x0042bc70 */

int * __thiscall
FUN_0042bc70(DialogWidget *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  short s1;
  void *pv2;
  short _extra;
  int n3;
  int n4;
  int *_fs;
  int n5;
  char c6;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042bdd9;
  *_fs = &_seh_prev;
  FUN_004052b0(this);
  *(char ***)this = &PTR_FUN_00473c28;
  _seh_state = 0;
  pv2 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3]; /* TODO: unknown struct at DAT_004897c0, offset 0x52 */
  this->dialog_result = 0;
  this->child_list = 0;
  n5 = 0x42bccf;
  FUN_00406720(this,param_1);
  if ((param_2 == -1) || (n3 = CONCAT22(_extra,param_3), param_3 == -1)) {
    c6 = '\0';
    n3 = FUN_0042c590((intptr_t)this);
    s1 = *(short *)(n3 + 4);
    n3 = FUN_0042c590((intptr_t)this);
    n3 = (int)s1 + (int)*(short *)(n3 + 8);
    FUN_00401050(&_tmp_35,n3);
    n4 = FUN_0042c590((intptr_t)this);
    s1 = *(short *)(n4 + 6);
    n4 = FUN_0042c590((intptr_t)this);
    FUN_00401050(&_tmp_34,(int)s1 + (int)*(short *)(n4 + 10));
  }
  else {
    c6 = '\0';
    FUN_00401ba0(&_tmp_35,param_3);
    FUN_00401ba0(&_tmp_34,param_2);
  }
  FUN_0041d3a0(this,n3,n5,c6);
  this->prev_dialog = ((UIElement *)((UIElement *)pv2)->field_06)->flags;
  if (param_5 == NULL) {
    param_5 = DAT_004897c0;
  }
  FUN_0041d780(this,param_5);
  this->dialog_result = param_4;
  if (pv2 != NULL) {
    if ((void *)((UIElement *)pv2)->field_06 != NULL) {
      FUN_00430ac0((void *)((UIElement *)pv2)->field_06,this);
    }
    if ((((UIElement *)pv2)->flags & 0x2000) == 0) {
      ((UIElement *)pv2)->flags = ((UIElement *)pv2)->flags | 0x2000;
      FUN_0041cad0(pv2);
    }
  }
  this->is_registered = 1;
  this->is_closing = 0;
  *_fs = _seh_prev;
  return this;
}


/* FUN_0042bdf0 @ 0x0042bdf0 */

int * __thiscall FUN_0042bdf0(void *this,byte param_1)
{
  FUN_0042be10(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0042be10 @ 0x0042be10 */

void __fastcall FUN_0042be10(int *param_1)
{
  void *this;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0042bea8;
  *param_1 = (int)&PTR_FUN_00473c28;
  *_fs = &_seh_prev;
  _seh_state = 0;
  this = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  if (this != NULL) {
    if (((char)param_1[0x48] != '\0') && ((((UIElement *)this)->flags & 0x2000) != 0)) {
      ((UIElement *)this)->flags = ((UIElement *)this)->flags & 0xffffdfff;
      FUN_0041cad0(this);
    }
    if (((DialogWidget *)param_1)->is_closing == '\0') {
      FUN_0042bf10((int)param_1);
      FUN_00404db0(this,NULL);
    }
  }
  FUN_0042c3f0(param_1);
  _seh_state = 0xffffffff;
  FUN_0042beb2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0042beb2 @ 0x0042beb2 */

void FUN_0042beb2(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_0042bec0 @ 0x0042bec0 */

void __fastcall FUN_0042bec0(int *param_1)
{
  void *this;
  
  this = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  if (this == NULL) {
    FUN_00430ac0(*(void **)(DAT_004897c0 + 6),NULL);
  }
  else {
    FUN_0042bf10((int)param_1);
    FUN_00404db0(this,NULL);
    FUN_00404de0((int)this);
  }
  FUN_0042c390((int)param_1);
  ((DialogWidget *)param_1)->is_closing = 1;
  FUN_00405570(param_1);
}


/* FUN_0042bf10 @ 0x0042bf10 */

void __fastcall FUN_0042bf10(int param_1)
{
  void *this;
  
  this = *(void **)(((UIWidget *)DAT_004897c0)->sub_widgets_a[3] + 6);
  if ((this != NULL) && (((DialogWidget *)param_1)->is_registered != '\0')) {
    FUN_00430ac0(this,((DialogWidget *)param_1)->prev_dialog);
  }
  return;
}


/* FUN_0042bf40 @ 0x0042bf40 */

void FUN_0042bf40(void) { return; }


/* FUN_0042bf70 @ 0x0042bf70 */

void __fastcall FUN_0042bf70(int *param_1)
{
    /* STUB: 17 lines not yet reconstructed */
    return;
}


/* FUN_0042bfe0 @ 0x0042bfe0 */

int * __thiscall FUN_0042bfe0(void *this,short param_1)
{
    /* STUB: 38 lines not yet reconstructed */
    return 0;
}


/* FUN_0042c0e0 @ 0x0042c0e0 */

void __fastcall FUN_0042c0e0(int *param_1)
{
    /* STUB: 128 lines not yet reconstructed */
    return;
}


/* FUN_0042c390 @ 0x0042c390 */

void __fastcall FUN_0042c390(int param_1)
{
    /* STUB: 20 lines not yet reconstructed */
    return;
}


/* FUN_0042c3f0 @ 0x0042c3f0 */

void __fastcall FUN_0042c3f0(int *param_1)
{
    /* STUB: 14 lines not yet reconstructed */
    return;
}


/* FUN_0042c4b0 @ 0x0042c4b0 */

void FUN_0042c4b0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873c8,u1,_arg2);
}


/* FUN_0042c500 @ 0x0042c500 */

void FUN_0042c500(void) { return; }


/* FUN_0042c520 @ 0x0042c520 */

/* NOTE: overlapping globals */

void FUN_0042c520(void)
{
  _DAT_004873d6 = 0;
  _DAT_004873d4 = 0;
}


/* FUN_0042c530 @ 0x0042c530 */

void FUN_0042c530(void)
{
  _atexit(FUN_0042c540);
}


/* FUN_0042c540 @ 0x0042c540 */

void FUN_0042c540(void) { return; }


/* FUN_0042c560 @ 0x0042c560 */

/* NOTE: overlapping globals */

void FUN_0042c560(void)
{
  _DAT_004873d2 = 0;
  _DAT_004873d0 = 0;
}


/* FUN_0042c570 @ 0x0042c570 */

void FUN_0042c570(void)
{
  _atexit(FUN_0042c580);
}


/* FUN_0042c580 @ 0x0042c580 */

void FUN_0042c580(void) { return; }


/* FUN_0042c590 @ 0x0042c590 */

int __fastcall FUN_0042c590(int param_1)
{
  return (int)((UIWidget *)param_1)->tile_data_ptr + -0xc + ((UIWidget *)param_1)->cell_count * 0xe;
}


/* FUN_0042c5b0 @ 0x0042c5b0 */

ushort * __cdecl FUN_0042c5b0(short *param_1,int *param_2,ushort *param_3)
{
    /* STUB: 65 lines not yet reconstructed */
    return 0;
}


/* FUN_0042c700 @ 0x0042c700 */

void FUN_0042c700(void) { return; }


/* FUN_0042c708 @ 0x0042c708 */

void FUN_0042c708(void) { return; }


/* FUN_0042c710 @ 0x0042c710 */

void FUN_0042c710(void) { return; }


/* FUN_0042c718 @ 0x0042c718 */

void FUN_0042c718(void) { return; }


/* FUN_0042c72a @ 0x0042c72a */

void FUN_0042c72a(void) { return; }


/* FUN_0042c740 @ 0x0042c740 */

void __cdecl FUN_0042c740(short *param_1,char param_2)
{
  int n1;
  short s2;
  
  if (param_1 != NULL) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    s2 = param_1[5];
    *(uint *)(param_1 + 5) =
         CONCAT22(CONCAT11((char)s2,(char)((ushort)s2 >> 8)),
                  CONCAT11((char)param_1[6],(char)((ushort)param_1[6] >> 8)));
    s2 = param_1[3];
    *(uint *)(param_1 + 3) =
         CONCAT22(CONCAT11((char)s2,(char)((ushort)s2 >> 8)),
                  CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8)));
    s2 = param_1[9];
    *(uint *)(param_1 + 9) =
         CONCAT22(CONCAT11((char)s2,(char)((ushort)s2 >> 8)),
                  CONCAT11((char)param_1[10],(char)((ushort)param_1[10] >> 8)));
    s2 = param_1[7];
    *(uint *)(param_1 + 7) =
         CONCAT22(CONCAT11((char)s2,(char)((ushort)s2 >> 8)),
                  CONCAT11((char)param_1[8],(char)((ushort)param_1[8] >> 8)));
    s2 = param_1[0xb];
    *(uint *)(param_1 + 0xb) =
         CONCAT22(CONCAT11((char)s2,(char)((ushort)s2 >> 8)),
                  CONCAT11((char)param_1[0xc],(char)((ushort)param_1[0xc] >> 8)));
    s2 = 0;
    if (0 < *param_1) {
      do {
        n1 = (int)s2;
        s2 = s2 + 1;
        FUN_0044e600((int *)(param_1 + n1 * 0xd + 0x19));
      } while (s2 < *param_1);
    }
    if (*(char *)((char *)param_1 + 3) != '\0') { /* byte 3 of short* record - high byte of param_1[1] */
      FUN_00457980(*(short **)(param_1 + 0xf),param_2);
    }
    if ((char)param_1[2] != '\0') {
      FUN_00462720(*(short **)(param_1 + 0x13),param_2);
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}


/* FUN_0042c860 @ 0x0042c860 */

ushort * __cdecl FUN_0042c860(void *param_1,int param_2)
{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  if (pu1 != NULL) {
    FUN_0042c740((short *)pu1,'\0');
    if (*(char *)((char *)pu1 + 3) != '\0') { /* byte 3 of short* record - high byte of pu1[1] */
      *(char *)((char *)pu1 + 3) = 0; /* clear high byte of pu1[1] */
    }
    pu1[0xf] = 0;
    pu1[0x10] = 0;
    pu1[0x11] = 0;
    pu1[0x12] = 0;
    if ((char)pu1[2] != '\0') {
      *(char *)(pu1 + 2) = 0;
      pu1[0x13] = 0;
      pu1[0x14] = 0;
      pu1[0x15] = 0;
      pu1[0x16] = 0;
      return pu1;
    }
    pu1[0x13] = 0;
    pu1[0x14] = 0;
    pu1[0x15] = 0;
    pu1[0x16] = 0;
  }
  return pu1;
}


/* FUN_0042c8d0 @ 0x0042c8d0 */

void __cdecl FUN_0042c8d0(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    if (*(char *)(param_3 + 3) != '\0') {
      FUN_0046f5f0(*(uint *)(param_3 + 0x1e));
    }
    if (*(char *)(param_3 + 4) != '\0') {
      FUN_0046f5f0(*(uint *)(param_3 + 0x26));
    }
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0042c910 @ 0x0042c910 */

void FUN_0042c910(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873d8,u1,_arg2);
}


/* FUN_0042c960 @ 0x0042c960 */

void FUN_0042c960(void) { return; }


/* FUN_0042c980 @ 0x0042c980 */

/* NOTE: overlapping globals */

void FUN_0042c980(void)
{
  _DAT_004873e6 = 0;
  _DAT_004873e4 = 0;
}


/* FUN_0042c990 @ 0x0042c990 */

void FUN_0042c990(void)
{
  _atexit(FUN_0042c9a0);
}


/* FUN_0042c9a0 @ 0x0042c9a0 */

void FUN_0042c9a0(void) { return; }


/* FUN_0042c9c0 @ 0x0042c9c0 */

/* NOTE: overlapping globals */

void FUN_0042c9c0(void)
{
  _DAT_004873e2 = 0;
  _DAT_004873e0 = 0;
}


/* FUN_0042c9d0 @ 0x0042c9d0 */

void FUN_0042c9d0(void)
{
  _atexit(FUN_0042c9e0);
}


/* FUN_0042c9e0 @ 0x0042c9e0 */

void FUN_0042c9e0(void) { return; }


/* FUN_0042ca00 @ 0x0042ca00 */

void FUN_0042ca00(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873e8,u1,_arg2);
}


/* FUN_0042ca40 @ 0x0042ca40 */

void FUN_0042ca40(void)
{
  _atexit(FUN_0042ca50);
}


/* FUN_0042ca50 @ 0x0042ca50 */

void FUN_0042ca50(void) { return; }


/* FUN_0042ca70 @ 0x0042ca70 */

/* NOTE: overlapping globals */

void FUN_0042ca70(void)
{
  _DAT_004873f6 = 0;
  _DAT_004873f4 = 0;
}


/* FUN_0042ca80 @ 0x0042ca80 */

void FUN_0042ca80(void)
{
  _atexit(FUN_0042ca90);
}


/* FUN_0042ca90 @ 0x0042ca90 */

void FUN_0042ca90(void) { return; }


/* FUN_0042cab0 @ 0x0042cab0 */

/* NOTE: overlapping globals */

void FUN_0042cab0(void)
{
  _DAT_004873f2 = 0;
  _DAT_004873f0 = 0;
}


/* FUN_0042cac0 @ 0x0042cac0 */

void FUN_0042cac0(void)
{
  _atexit(FUN_0042cad0);
}


/* FUN_0042cad0 @ 0x0042cad0 */

void FUN_0042cad0(void) { return; }


/* FUN_0042caf0 @ 0x0042caf0 */

void FUN_0042caf0(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004873f8,u1,_arg2);
}


/* FUN_0042cb30 @ 0x0042cb30 */

void FUN_0042cb30(void)
{
  _atexit(FUN_0042cb40);
}


/* FUN_0042cb40 @ 0x0042cb40 */

void FUN_0042cb40(void) { return; }


/* FUN_0042cb60 @ 0x0042cb60 */

/* NOTE: overlapping globals */

void FUN_0042cb60(void)
{
  _DAT_00487406 = 0;
  _DAT_00487404 = 0;
}


/* FUN_0042cb70 @ 0x0042cb70 */

void FUN_0042cb70(void)
{
  _atexit(FUN_0042cb80);
}


/* FUN_0042cb80 @ 0x0042cb80 */

void FUN_0042cb80(void) { return; }


/* FUN_0042cba0 @ 0x0042cba0 */

/* NOTE: overlapping globals */

void FUN_0042cba0(void)
{
  _DAT_00487402 = 0;
  _DAT_00487400 = 0;
}


/* FUN_0042cbb0 @ 0x0042cbb0 */

void FUN_0042cbb0(void)
{
  _atexit(FUN_0042cbc0);
}


/* FUN_0042cbc0 @ 0x0042cbc0 */

void FUN_0042cbc0(void) { return; }


/* FUN_0042cbd0 @ 0x0042cbd0 */

int * __fastcall FUN_0042cbd0(int *param_1)
{
  DWORD dw1;
  int n2;
  int *pu3;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042cccf;
  *_fs = &_seh_prev;
  FUN_00403370(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00473d00;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  ((GameBoard *)param_1)->is_timed = 1; /* param_1 + 0x5d = byte offset 0x174 */
  ((GameBoard *)param_1)->field_196 = 0;
  pu3 = param_1 + 0x36;
  for (n2 = 0x1e; n2 != 0; n2 = n2 + -1) {
    *pu3 = 0;
    pu3 = pu3 + 1;
  }
  ((GameBoard *)param_1)->score_current = 0;
  ((GameBoard *)param_1)->score_secondary = 0; /* param_1 + 0x5f = byte offset 0x17C */
  dw1 = GetTickCount();
  ((GameBoard *)param_1)->score_current = 0;
  ((GameBoard *)param_1)->last_tick = dw1;
  ((GameBoard *)param_1)->score_secondary = 0; /* param_1 + 0x5f = byte offset 0x17C */
  param_1[0x5c] = 0;
  ((GameBoard *)param_1)->score_checkpoint_a = 0;
  ((GameBoard *)param_1)->reward_data_a = 0;
  ((GameBoard *)param_1)->score_checkpoint_b = 0; /* param_1 + 0x60 = byte offset 0x180 */
  ((GameBoard *)param_1)->reward_data_b = 0;
  ((GameBoard *)param_1)->reward_data_c = 0;
  ((GameBoard *)param_1)->sound_handle = 0;
  ((GameBoard *)param_1)->field_192 = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0042ccf0 @ 0x0042ccf0 */

int * __thiscall FUN_0042ccf0(void *this,byte param_1)
{
  FUN_0042cd10(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0042cd10 @ 0x0042cd10 */

void __fastcall FUN_0042cd10(int *param_1)
{
    /* STUB: 32 lines not yet reconstructed */
    return;
}


/* FUN_0042ce11 @ 0x0042ce11 */

void FUN_0042ce11(void)
{
  int _ebp;
  
  FUN_00403580(*(int **)(_ebp + -0x10));
}


/* FUN_0042ce20 @ 0x0042ce20 */

int * __thiscall FUN_0042ce20(void *this,int param_1)
{
    /* STUB: 69 lines not yet reconstructed */
    return 0;
}


/* FUN_0042d069 @ 0x0042d069 */

void FUN_0042d069(void)
{
  FUN_0042d080();
}


/* FUN_0042d080 @ 0x0042d080 */

void FUN_0042d080(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0042d0b7;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_0042d0c1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0042d0c1 @ 0x0042d0c1 */

void FUN_0042d0c1(void)
{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
}


/* FUN_0042d129 @ 0x0042d129 */

void FUN_0042d129(void)
{
  FUN_0042d080();
}


/* FUN_0042d199 @ 0x0042d199 */

void FUN_0042d199(void)
{
  FUN_0042d080();
}


/* FUN_0042d1c0 @ 0x0042d1c0 */

void __thiscall FUN_0042d1c0(void *this,int param_1)
{
    /* STUB: 66 lines not yet reconstructed */
    return;
}


/* FUN_0042d3c0 @ 0x0042d3c0 */

void __fastcall FUN_0042d3c0(void *param_1)
{
  DWORD dw1;
  
  if (*(void ***)((char *)param_1 + 0xd4) != (void **)0x0) { /* UIWidget::scroll_data[0x0A] - embedded object pointer */
    ((void (*)(void))**(void ***)((char *)param_1 + 0xd4))(); /* scroll_data embedded obj->vtable[0] */
  }
  FUN_0041cad0(param_1);
  dw1 = GetTickCount();
  ((GameBoard *)param_1)->last_tick = dw1;
}


/* FUN_0042d3f0 @ 0x0042d3f0 */

void __thiscall FUN_0042d3f0(void *this,int param_1)
{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_0042d590 @ 0x0042d590 */

void __fastcall FUN_0042d590(int param_1)
{
  if (((GameBoard *)param_1)->callback_ptr != NULL) {
    ((void (*)(void))*((GameBoard *)param_1)->callback_ptr)();
    ((GameBoard *)param_1)->callback_ptr = 0;
  }
  if (((GameBoard *)param_1)->reward_obj_d != 0) {
    ((UIElement *)((GameBoard *)param_1)->reward_obj_d)->type_or_mode = 0;
  }
  if (((GameBoard *)param_1)->reward_obj_c != 0) {
    ((UIElement *)((GameBoard *)param_1)->reward_obj_c)->type_or_mode = 0;
  }
  return;
}


/* FUN_0042d5d0 @ 0x0042d5d0 */

void __fastcall FUN_0042d5d0(int param_1)
{
  if (((GameBoard *)param_1)->callback_ptr != NULL) {
    ((void (*)(void))*((GameBoard *)param_1)->callback_ptr)();
    ((GameBoard *)param_1)->callback_ptr = 0;
  }
  return;
}


/* FUN_0042d73a @ 0x0042d73a */

void FUN_0042d73a(void) { return; }


/* FUN_0042d7b9 @ 0x0042d7b9 */

void FUN_0042d7b9(void)
{
  FUN_0042d080();
}


/* FUN_0042d7d0 @ 0x0042d7d0 */

void __fastcall FUN_0042d7d0(int param_1)
{
  void *this;
  
  if (((GameBoard *)param_1)->reward_obj_b != 0 && (*(char *)(param_1 + 0x196) == '\0')) { /* TODO: unknown offset 0x196 */
    FUN_0040e270(DAT_004897c0,0xb);
    FUN_0041dad0(((GameBoard *)param_1)->reward_obj_b,1,'\0');
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b,1);
    FUN_0041dd40(((GameBoard *)param_1)->reward_obj_b);
    ((UIWidget *)((GameBoard *)param_1)->reward_obj_b)->pending_frame = 1;
    this = ((GameBoard *)param_1)->reward_obj_b;
    ((UIWidget *)this)->anim_flag_0 = 0;
    ((UIWidget *)this)->anim_flag_2 = 1;
    ((UIWidget *)this)->anim_flag_1 = 0;
    ((UIWidget *)this)->anim_flag_3 = 0;
    FUN_00405e10(this,0,'\0');
    *(char *)(param_1 + 0x196) = 1; /* TODO: unknown offset 0x196 */
  }
  return;
}


/* FUN_0042d860 @ 0x0042d860 */

void __fastcall FUN_0042d860(int param_1)
{
  void *this;
  
  if (((GameBoard *)param_1)->reward_obj_b != 0 && (*(char *)(param_1 + 0x196) != '\0')) { /* TODO: unknown offset 0x196 */
    FUN_0040e270(DAT_004897c0,0xc);
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b,1);
    ((UIWidget *)((GameBoard *)param_1)->reward_obj_b)->pending_frame = 0;
    this = ((GameBoard *)param_1)->reward_obj_b;
    ((UIWidget *)this)->anim_flag_0 = 0;
    ((UIWidget *)this)->anim_flag_2 = 1;
    ((UIWidget *)this)->anim_flag_1 = 0;
    ((UIWidget *)this)->anim_flag_3 = 0;
    FUN_00405e10(this,2,'\0');
    FUN_0041dad0(((GameBoard *)param_1)->reward_obj_b,0,'\0');
    FUN_0041da90(((GameBoard *)param_1)->reward_obj_b,0);
    *(char *)(param_1 + 0x196) = 0; /* TODO: unknown offset 0x196 */
  }
  return;
}


/* FUN_0042d8f0 @ 0x0042d8f0 */

void FUN_0042d8f0(int *param_1,int param_2,ushort *param_3,short param_4,short param_5)
{
  ushort u1;
  int n2;
  
  if (param_2 == 0) {
    if (param_4 == -1) {
      u1 = *param_3;
      n2 = rand();
      param_4 = (short)((int)(n2 * (uint)u1) / 0x7fff);
    }
    else if (param_5 != -1) {
      n2 = rand();
      param_4 = param_4 + (short)((int)(n2 * (uint)(ushort)(param_5 - param_4)) / 0x7fff);
    }
    param_2 = *(int *)(param_3 + param_4 * 2 + 1);
  }
  *param_1 = param_2;
}


/* FUN_0042d970 @ 0x0042d970 */

void __fastcall FUN_0042d970(int param_1)
{
  bool b1;
  int _extra;
  int *pn2;
  
  b1 = FUN_0045d930(((GameBoard *)param_1)->sound_handle);
  if ((short)CONCAT31(_extra,b1) != 0) {
    FUN_00434490(((GameBoard *)param_1)->sound_handle);
    ((GameBoard *)param_1)->sound_handle = 0;
  }
  pn2 = (int *)&((GameBoard *)param_1)->field_192;
  if (*pn2 != 0) {
    FUN_00433270(pn2);
    *pn2 = 0;
  }
  return;
}


/* FUN_0042d9c0 @ 0x0042d9c0 */

void __fastcall FUN_0042d9c0(int param_1)
{
  FUN_0042d970(param_1);
  FUN_00404a80(param_1);
  FUN_0042b5f0();
}


/* FUN_0042d9e0 @ 0x0042d9e0 */

void FUN_0042d9e0(void)
{
  FUN_0042b3e0();
}


/* FUN_0042d9f0 @ 0x0042d9f0 */

void __thiscall FUN_0042d9f0(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
    /* STUB: 14 lines not yet reconstructed */
    return;
}


/* FUN_0042da60 @ 0x0042da60 */

char __thiscall
FUN_0042da60(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
    /* STUB: 17 lines not yet reconstructed */
    return 0;
}


/* FUN_0042dae0 @ 0x0042dae0 */

char __thiscall
FUN_0042dae0(void *this,int param_1,ushort *param_2,short param_3,short param_4)
{
    /* STUB: 12 lines not yet reconstructed */
    return 0;
}


/* FUN_0042db40 @ 0x0042db40 */

void __fastcall FUN_0042db40(int param_1)
{
  if (((GameBoard *)param_1)->sound_handle != 0) {
    FUN_00434490(((GameBoard *)param_1)->sound_handle);
  }
  return;
}


/* FUN_0042db60 @ 0x0042db60 */

void FUN_0042db60(int param_1,ushort *param_2,short param_3,short param_4)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}


/* FUN_0042dba0 @ 0x0042dba0 */

void __thiscall FUN_0042dba0(void *this,int param_1)
{
    /* STUB: 138 lines not yet reconstructed */
    return;
}


/* FUN_0042df10 @ 0x0042df10 */

void __thiscall
FUN_0042df10(void *this,int param_1,int param_2,int param_3,int param_4)
{
    /* STUB: 34 lines not yet reconstructed */
    return;
}


/* FUN_0042e002 @ 0x0042e002 */

void FUN_0042e002(void) { return; }


/* FUN_0042e014 @ 0x0042e014 */

void FUN_0042e014(void) { return; }


/* FUN_0042e020 @ 0x0042e020 */

int __fastcall FUN_0042e020(void *param_1)
{
  int *_fs;
  int *pu1;
  int u2;
  int n3;
  int _arg1;
  int v3c [2];
  int v34 [2];
  char *v2c;
  char *v28;
  char *v24;
  char *v20;
  char *v1c;
  char *v18;
  void *v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042e125;
  *_fs = &_seh_prev;
  v14 = param_1;
  if (((GameBoard *)param_1)->field_16c == 0) {
    v2c = &_tmp_31;
    u2 = 0x32;
    FUN_00401050(&_tmp_31,0x32);
    v28 = &_tmp_30;
    FUN_00401050(&_tmp_30,0x140);
    FUN_00401060(v34,u2,_arg1);
    _seh_state = 0;
    v24 = &_tmp_31;
    n3 = 0x28;
    FUN_00401050(&_tmp_31,0x28);
    v20 = &_tmp_30;
    FUN_00401050(&_tmp_30,0x28);
    FUN_00401060(v3c,n3,_arg1);
    v18 = &_tmp_30;
    pu1 = v3c;
    _seh_state = (_seh_state & ~0xFF) | 1;
    u2 = 0x42e0bb;
    FUN_004090c0(&_tmp_30,pu1);
    v1c = &_tmp_28;
    _seh_state = (_seh_state & ~0xFF) | 2;
    FUN_004090c0(&_tmp_28,v34);
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0042df10(v14,u2,pu1,n3,_arg1);
    _seh_state &= ~0xFF;
    FUN_0042e11d();
    _seh_state = 0xffffffff;
    FUN_0042e12f();
  }
  *_fs = _seh_prev;
  return (int)((GameBoard *)v14)->field_16c;
}


/* FUN_0042e11d @ 0x0042e11d */

void FUN_0042e11d(void) { return; }


/* FUN_0042e12f @ 0x0042e12f */

void FUN_0042e12f(void) { return; }


/* FUN_0042e140 @ 0x0042e140 */

void __fastcall FUN_0042e140(int param_1)
{
  if (((GameBoard *)param_1)->field_16c != 0) {
    ((void (*)(void))**(void ***)&((GameBoard *)param_1)->field_16c)(); /* obj->vtable[0] */
    ((GameBoard *)param_1)->field_16c = 0;
  }
  FUN_00403aa0();
}


/* FUN_0042e170 @ 0x0042e170 */

bool __thiscall FUN_0042e170(void *this,int param_1)
{
  int n1;
  DWORD dw2;
  
  n1 = ((GameBoard *)this)->last_tick;
  dw2 = GetTickCount();
  return (uint)(n1 + param_1) < dw2;
}


/* FUN_0042e190 @ 0x0042e190 */

uint __fastcall FUN_0042e190(void *param_1)
{
  short s1;
  short s2;
  short s3;
  short s4;
  bool b5;
  uint _eax;
  int u6;
  int n7;
  int _extra;
  DWORD dw8;
  int _extra;
  
  if ((DAT_0048345c != 0) && (((GameBoard *)param_1)->is_timed != '\0')) {
    u6 = FUN_0040e580();
    n7 = (&((GameSession *)DAT_0048345c)->score_display)[(short)u6] * 10 + ((GameBoard *)param_1)->level_data_offset;
    s1 = *(short *)(n7 + -6);
    s2 = *(short *)(n7 + -10);
    s3 = *(short *)(n7 + -4);
    s4 = *(short *)(n7 + -8);
    b5 = FUN_0045d930(((GameBoard *)param_1)->sound_handle);
    _eax = CONCAT31(_extra,b5);
    if ((short)_eax != 0) {
      dw8 = GetTickCount();
      ((GameBoard *)param_1)->last_tick = dw8;
      return dw8 & 0xffffff00;
    }
    if ((s2 != -1) &&
       (_eax = (int)((GameBoard *)param_1)->score_current - (int)((GameBoard *)param_1)->score_checkpoint_a,
       (int)s2 <= (int)_eax)) {
      if (((GameBoard *)param_1)->reward_data_c != NULL) {
        FUN_0042d9f0(param_1,0,(ushort *)((GameBoard *)param_1)->reward_data_c,-1,-1);
      }
      dw8 = GetTickCount();
      ((GameBoard *)param_1)->score_checkpoint_a = ((GameBoard *)param_1)->score_current;
      ((GameBoard *)param_1)->last_tick = dw8;
      return CONCAT31(dw8 >> 8,1);
    }
    if ((s3 != -1) &&
       (_eax = (int)((GameBoard *)param_1)->score_secondary - (int)((GameBoard *)param_1)->score_checkpoint_b,
       (int)s3 <= (int)_eax)) {
      if (((GameBoard *)param_1)->reward_data_b != NULL) {
        FUN_0042d9f0(param_1,0,(ushort *)((GameBoard *)param_1)->reward_data_b,-1,-1);
      }
      dw8 = GetTickCount();
      ((GameBoard *)param_1)->score_checkpoint_b = ((GameBoard *)param_1)->score_secondary;
      ((GameBoard *)param_1)->last_tick = dw8;
      return CONCAT31(dw8 >> 8,1);
    }
    if ((s4 != -1) &&
       (_eax = (int)((GameBoard *)param_1)->score_current - (int)((GameBoard *)param_1)->score_checkpoint_a,
       (int)s4 <= (int)_eax)) {
      if (((GameBoard *)param_1)->reward_data_a != NULL) {
        FUN_0042d9f0(param_1,0,(ushort *)((GameBoard *)param_1)->reward_data_a,-1,-1);
      }
      dw8 = GetTickCount();
      ((GameBoard *)param_1)->score_checkpoint_a = ((GameBoard *)param_1)->score_current;
      ((GameBoard *)param_1)->last_tick = dw8;
      return CONCAT31(dw8 >> 8,1);
    }
    if (s1 != -1) {
      b5 = FUN_0042e170(param_1,s1 * 1000);
      _eax = CONCAT31(_extra,b5);
      if (b5) {
        if (((GameBoard *)param_1)->reward_data_a != NULL) {
          FUN_0042d9f0(param_1,0,(ushort *)((GameBoard *)param_1)->reward_data_a,-1,-1);
        }
        dw8 = GetTickCount();
        ((GameBoard *)param_1)->last_tick = dw8;
        return CONCAT31(dw8 >> 8,1);
      }
    }
  }
  return _eax & 0xffffff00;
}


/* FUN_0042e3a0 @ 0x0042e3a0 */

void __fastcall FUN_0042e3a0(int param_1)
{
  FUN_0042db40(param_1);
  if (((GameBoard *)param_1)->callback_ptr != NULL) {
    ((void (*)(void))*((GameBoard *)param_1)->callback_ptr)();
  }
  if (((GameBoard *)param_1)->reward_obj_a != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_a))[0x8c / 4])();
  }
  if (((GameBoard *)param_1)->reward_obj_b != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_b))[0x8c / 4])();
  }
  if (((GameBoard *)param_1)->reward_obj_c != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_c))[0x8c / 4])();
  }
  if (((GameBoard *)param_1)->reward_obj_d != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_d))[0x8c / 4])();
  }
  if (((GameBoard *)param_1)->reward_obj_e != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_e))[0x8c / 4])();
  }
  if (((GameBoard *)param_1)->reward_obj_f != NULL) {
    ((void (*)(void))((void **)(**(int **)&((GameBoard *)param_1)->reward_obj_f))[0x8c / 4])();
  }
  FUN_0041e0e0(param_1);
}


/* FUN_0042e440 @ 0x0042e440 */

void FUN_0042e440(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487410,u1,_arg2);
}


/* FUN_0042e490 @ 0x0042e490 */

void FUN_0042e490(void) { return; }


/* FUN_0042e4b0 @ 0x0042e4b0 */

/* NOTE: overlapping globals */

void FUN_0042e4b0(void)
{
  _DAT_00487422 = 0;
  _DAT_00487420 = 0;
}


/* FUN_0042e4c0 @ 0x0042e4c0 */

void FUN_0042e4c0(void)
{
  _atexit(FUN_0042e4d0);
}


/* FUN_0042e4d0 @ 0x0042e4d0 */

void FUN_0042e4d0(void) { return; }


/* FUN_0042e4f0 @ 0x0042e4f0 */

/* NOTE: overlapping globals */

void FUN_0042e4f0(void)
{
  _DAT_0048741e = 0;
  _DAT_0048741c = 0;
}


/* FUN_0042e500 @ 0x0042e500 */

void FUN_0042e500(void)
{
  _atexit(FUN_0042e510);
}


/* FUN_0042e510 @ 0x0042e510 */

void FUN_0042e510(void) { return; }


/* FUN_0042e560 @ 0x0042e560 */

int * __fastcall FUN_0042e560(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0042e5c2;
  *_fs = &_seh_prev;
  FUN_004534e0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_004740c8;
  FUN_0041da90(param_1,1);
  ((UIWidget *)param_1)->is_interactive = 1;
  ((UIWidget *)param_1)->type_or_mode = 1;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0042e639 @ 0x0042e639 */

void FUN_0042e639(void)
{
  FUN_00427c00();
}


/* FUN_0042e660 @ 0x0042e660 */

void __fastcall FUN_0042e660(void *param_1)
{
    /* STUB: 68 lines not yet reconstructed */
    return;
}


/* FUN_0042e850 @ 0x0042e850 */

int * __fastcall FUN_0042e850(int *param_1)
{
    /* STUB: 30 lines not yet reconstructed */
    return 0;
}


/* FUN_0042e920 @ 0x0042e920 */

int * __thiscall FUN_0042e920(void *this,byte param_1)
{
  FUN_0042e940(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0042e940 @ 0x0042e940 */

void __fastcall FUN_0042e940(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0042e9a7;
  *param_1 = &PTR_FUN_00474178;
  *_fs = &_seh_prev;
  DAT_00487408 = 1;
  _seh_state = 0;
  FUN_0042e999();
  _seh_state = 0xffffffff;
  FUN_0042e9b1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0042e999 @ 0x0042e999 */

void FUN_0042e999(void)
{
  int _ebp;
  
  FUN_0042f0a0((int *)(*(int *)(_ebp + -0x10) + 0x1a2));
}


/* FUN_0042e9b1 @ 0x0042e9b1 */

void FUN_0042e9b1(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_0042ea90 @ 0x0042ea90 */

void __fastcall FUN_0042ea90(void *param_1)
{
  DWORD dw1;
  
  FUN_004048d0(param_1);
  dw1 = GetTickCount();
  *(short *)((char *)param_1 + 0x19c) = 2; /* TODO: offset 0x19C on GameBoard subclass - state machine value */
  *(DWORD *)((char *)param_1 + 0x1b8) = dw1; /* TODO: offset 0x1B8 on GameBoard subclass - tick timestamp */
  return;
}


/* FUN_0042eab0 @ 0x0042eab0 */

void __fastcall FUN_0042eab0(int param_1)
{
  short s1;
  DWORD dw2;
  
  FUN_00404b00(param_1);
  if (*(char *)(DAT_004896b0 + 0x27) == '\0') {
    s1 = *(short *)(param_1 + 0x19c);
    if (s1 == 2) {
      dw2 = GetTickCount();
      if (*(int *)(param_1 + 0x1b8) + 5000U < dw2) {
        *(short *)(param_1 + 0x19c) = 3;
        FUN_00407df0(*(void **)(param_1 + 0x19e),7,0x758000d);
        dw2 = GetTickCount();
        *(DWORD *)(param_1 + 0x1b8) = dw2;
        return;
      }
    }
    else if (s1 == 3) {
      dw2 = GetTickCount();
      if (*(int *)(param_1 + 0x1b8) + 15000U < dw2) {
        *(short *)(param_1 + 0x19c) = 4;
        return;
      }
    }
    else {
      if (s1 != 4) {
        return;
      }
      *(short *)(param_1 + 0x19c) = 5;
      FUN_0042e660(*(void **)(param_1 + 0x19e));
    }
  }
  return;
}


/* FUN_0042eca0 @ 0x0042eca0 */

void FUN_0042eca0(void)
{
    /* STUB: 153 lines not yet reconstructed */
    return;
}


/* FUN_0042f059 @ 0x0042f059 */

void FUN_0042f059(void) { return; }


/* FUN_0042f061 @ 0x0042f061 */

void FUN_0042f061(void) { return; }


/* FUN_0042f071 @ 0x0042f071 */

void FUN_0042f071(void) { return; }


/* FUN_0042f079 @ 0x0042f079 */

void FUN_0042f079(void) { return; }


/* FUN_0042f081 @ 0x0042f081 */

void FUN_0042f081(void) { return; }


/* FUN_0042f093 @ 0x0042f093 */

void FUN_0042f093(void) { return; }


/* FUN_0042f0a0 @ 0x0042f0a0 */

void __fastcall FUN_0042f0a0(int *param_1)
{
  *param_1 = &PTR_LAB_00474170;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_0042f120 @ 0x0042f120 */

void * __thiscall FUN_0042f120(void *this,short param_1)
{
  FUN_0042f180(this,param_1);
  return this;
}


/* FUN_0042f140 @ 0x0042f140 */

void * __thiscall
FUN_0042f140(void *this,int *param_1,int param_2,int param_3,short param_4)
{
  FUN_0042f180(this,param_4);
  FUN_0042f1e0(this,param_1,param_2);
  return this;
}


/* Function: thunk_FUN_0042f1c0 @ 0x0042f170 */

void __fastcall thunk_FUN_0042f1c0(char *param_1)
{
  if ((*param_1 != '\0') && (*(uint *)(param_1 + 4) != 0)) {
    FUN_0046f5f0(*(uint *)(param_1 + 4));
    *param_1 = '\0';
  }
  return;
}


/* FUN_0042f180 @ 0x0042f180 */

void __thiscall FUN_0042f180(void *this,short param_1)
{
  ushort *pu1;
  LPCVOID pv2;
  
  ((ResourceHandle *)this)->resource_id = param_1;
  ((ResourceHandle *)this)->data_ptr = 0;
  pv2 = DAT_00483df4;
  if (DAT_004833cc != NULL) {
    pv2 = DAT_004833cc;
  }
  pu1 = FUN_0046f060(pv2,(int)param_1,5);
  ((ResourceHandle *)this)->data_ptr = pu1;
  ((ResourceHandle *)this)->loaded = 1;
}


/* FUN_0042f1c0 @ 0x0042f1c0 */

void __fastcall FUN_0042f1c0(char *param_1)
{
  if ((*param_1 != '\0') && (*(uint *)(param_1 + 4) != 0)) {
    FUN_0046f5f0(*(uint *)(param_1 + 4));
    *param_1 = '\0';
  }
  return;
}


/* FUN_0042f1e0 @ 0x0042f1e0 */

void __thiscall FUN_0042f1e0(void *this,int *param_1,int param_2)
{
    /* STUB: 55 lines not yet reconstructed */
    return;
}


/* FUN_0042f336 @ 0x0042f336 */

void FUN_0042f336(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x42c));
}


/* FUN_0042f350 @ 0x0042f350 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_0042f350(void *this,char param_1)
{
  short u1;
  int n2;
  
  n2 = (int)((ResourceHandle *)this)->data_ptr;
  if (n2 != 0) {
    if (param_1 == '\0') {
      u1 = ((ResourceHandle *)this)->resource_id;
      ((ResourceHandle *)this)->resource_id = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
      ((ResourceHandle *)this)->data_ptr = (void *)(
           CONCAT22(CONCAT11((char)n2,(char)((uint)n2 >> 8)),
                    CONCAT11((char)((uint)n2 >> 0x10),(char)((uint)n2 >> 0x18))) + (intptr_t)this);
    }
    else {
      u1 = ((ResourceHandle *)this)->resource_id;
      ((ResourceHandle *)this)->resource_id = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
      n2 = (int)((ResourceHandle *)this)->data_ptr - (intptr_t)this;
      ((ResourceHandle *)this)->data_ptr = (void *)
           CONCAT22(CONCAT11((char)n2,(char)((uint)n2 >> 8)),
                    CONCAT11((char)((uint)n2 >> 0x10),(char)((uint)n2 >> 0x18)));
    }
  }
  return;
}


/* FUN_0042f3f0 @ 0x0042f3f0 */

void __thiscall FUN_0042f3f0(void *this,int param_1,short param_2)
{
  ((ResourceHandle *)this)->resource_id = param_2;
  ((ResourceHandle *)this)->loaded = 0;
  ((ResourceHandle *)this)->data_ptr = (void *)param_1;
  return;
}


/* FUN_0042f420 @ 0x0042f420 */

void FUN_0042f420(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487428,u1,_arg2);
}


/* FUN_0042f470 @ 0x0042f470 */

void FUN_0042f470(void) { return; }


/* FUN_0042f490 @ 0x0042f490 */

/* NOTE: overlapping globals */

void FUN_0042f490(void)
{
  _DAT_00487436 = 0;
  _DAT_00487434 = 0;
}


/* FUN_0042f4a0 @ 0x0042f4a0 */

void FUN_0042f4a0(void)
{
  _atexit(FUN_0042f4b0);
}


/* FUN_0042f4b0 @ 0x0042f4b0 */

void FUN_0042f4b0(void) { return; }


/* FUN_0042f4d0 @ 0x0042f4d0 */

/* NOTE: overlapping globals */

void FUN_0042f4d0(void)
{
  _DAT_00487432 = 0;
  _DAT_00487430 = 0;
}


/* FUN_0042f4e0 @ 0x0042f4e0 */

void FUN_0042f4e0(void)
{
  _atexit(FUN_0042f4f0);
}


/* FUN_0042f4f0 @ 0x0042f4f0 */

void FUN_0042f4f0(void) { return; }


/* FUN_0042f510 @ 0x0042f510 */

void FUN_0042f510(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487438,u1,_arg2);
}


/* FUN_0042f550 @ 0x0042f550 */

void FUN_0042f550(void)
{
  _atexit(FUN_0042f560);
}


/* FUN_0042f560 @ 0x0042f560 */

void FUN_0042f560(void) { return; }


/* FUN_0042f580 @ 0x0042f580 */

/* NOTE: overlapping globals */

void FUN_0042f580(void)
{
  _DAT_00487446 = 0;
  _DAT_00487444 = 0;
}


/* FUN_0042f590 @ 0x0042f590 */

void FUN_0042f590(void)
{
  _atexit(FUN_0042f5a0);
}


/* FUN_0042f5a0 @ 0x0042f5a0 */

void FUN_0042f5a0(void) { return; }


/* FUN_0042f5c0 @ 0x0042f5c0 */

/* NOTE: overlapping globals */

void FUN_0042f5c0(void)
{
  _DAT_00487442 = 0;
  _DAT_00487440 = 0;
}


/* FUN_0042f5d0 @ 0x0042f5d0 */

void FUN_0042f5d0(void)
{
  _atexit(FUN_0042f5e0);
}


/* FUN_0042f5e0 @ 0x0042f5e0 */

void FUN_0042f5e0(void) { return; }


/* FUN_0042f600 @ 0x0042f600 */

void FUN_0042f600(void)
{
  int u1;
  int _arg2;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487448,u1,_arg2);
}


/* FUN_0042f640 @ 0x0042f640 */

void FUN_0042f640(void)
{
  _atexit(FUN_0042f650);
}


/* FUN_0042f650 @ 0x0042f650 */

void FUN_0042f650(void) { return; }


/* FUN_0042f670 @ 0x0042f670 */

/* NOTE: overlapping globals */

void FUN_0042f670(void)
{
  _DAT_00487456 = 0;
  _DAT_00487454 = 0;
}


/* FUN_0042f680 @ 0x0042f680 */

void FUN_0042f680(void)
{
  _atexit(FUN_0042f690);
}


/* FUN_0042f690 @ 0x0042f690 */

void FUN_0042f690(void) { return; }


/* FUN_0042f6b0 @ 0x0042f6b0 */

/* NOTE: overlapping globals */

void FUN_0042f6b0(void)
{
  _DAT_00487452 = 0;
  _DAT_00487450 = 0;
}


/* FUN_0042f6c0 @ 0x0042f6c0 */

void FUN_0042f6c0(void)
{
  _atexit(FUN_0042f6d0);
}


/* FUN_0042f6d0 @ 0x0042f6d0 */

void FUN_0042f6d0(void) { return; }


/* FUN_0042f6f0 @ 0x0042f6f0 */

void FUN_0042f6f0(void)
{
    /* STUB: 4 lines not yet reconstructed */
    return;
}


/* FUN_0042f710 @ 0x0042f710 */

void FUN_0042f710(void)
{
  _atexit(FUN_0042f720);
}


/* FUN_0042f720 @ 0x0042f720 */

void FUN_0042f720(void)
{
    /* STUB: 3 lines not yet reconstructed */
    return;
}


/* FUN_0042f740 @ 0x0042f740 */

void __fastcall FUN_0042f740(void *param_1)
{
    /* STUB: 26 lines not yet reconstructed */
    return;
}


/* FUN_0042f7c1 @ 0x0042f7c1 */

void FUN_0042f7c1(void) { return; }


/* FUN_0042f7d0 @ 0x0042f7d0 */

void __fastcall FUN_0042f7d0(void *param_1)
{
  FUN_0042f7f0((int)param_1);
  FUN_0042f740(param_1);
}


/* FUN_0042f7f0 @ 0x0042f7f0 */

void __fastcall FUN_0042f7f0(int param_1)
{
                    /* NOTE: Could not recover jumptable at 0x0042f7f6. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  ((void (*)(void))((void **)(*(int *)&((GameScreen *)param_1)->draw_context))[0x58 / 4])(); /* draw_context->vtable[22] */
  return;
}


/* FUN_0042f800 @ 0x0042f800
 * Struct types: GameScreen (this)
 * Blits draw_context to screen DC at the given rect.
 */

void __thiscall FUN_0042f800(GameScreen *this,short *param_1)
{
  FUN_004247b0(&this->draw_context,this->hdc_screen,param_1);
}


/* FUN_0042f820 @ 0x0042f820
 * Struct types: GameScreen (this)
 * Sets active DC to the back buffer DC.
 */

void __fastcall FUN_0042f820(GameScreen *this)
{
  this->hdc_active = this->hdc_buffer;
}


/* FUN_0042f830 @ 0x0042f830
 * Struct types: GameScreen (this)
 * Sets active DC to the screen DC.
 */

void __fastcall FUN_0042f830(GameScreen *this)
{
  this->hdc_active = this->hdc_screen;
}


/* FUN_0042f840 @ 0x0042f840 */

int * __fastcall FUN_0042f840(int *param_1)
{
    /* STUB: 62 lines not yet reconstructed */
    return 0;
}


/* FUN_0042f990 @ 0x0042f990 */

int * __thiscall FUN_0042f990(void *this,byte param_1)
{
  FUN_0042f9b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0042f9b0 @ 0x0042f9b0 */

void __fastcall FUN_0042f9b0(int *param_1)
{
    /* STUB: 24 lines not yet reconstructed */
    return;
}


/* FUN_0042fa22 @ 0x0042fa22 */

void FUN_0042fa22(void) { return; }


/* FUN_0042fa30 @ 0x0042fa30 */

void FUN_0042fa30(void)
{
  int _ebp;
  
  FUN_004244b0((int *)&((GameScreen *)*(int *)(_ebp + -0x10))->draw_context);
}


/* FUN_0042fa45 @ 0x0042fa45 */

void FUN_0042fa45(void) { return; }


/* FUN_0042fa50 @ 0x0042fa50 */

void __thiscall FUN_0042fa50(void *this,short *param_1,int param_2)
{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_0042fc70 @ 0x0042fc70
 * Struct types: GameScreen (this)
 * Destroys the GameScreen — releases screen DC, destroys window.
 */

void __fastcall FUN_0042fc70(GameScreen *this)
{
  FUN_0042f7f0(this);
  if (this->hdc_screen != NULL) {
    ReleaseDC(this->hwnd,this->hdc_screen);
    this->hdc_screen = NULL;
  }
  if (this->hwnd != NULL) {
    DestroyWindow(this->hwnd);
    this->hwnd = NULL;
  }
  return;
}


/* FUN_0042fcb0 @ 0x0042fcb0
 * Struct types: GameScreen (this)
 * Updates draw_context visibility, then refreshes screen.
 */

void __thiscall FUN_0042fcb0(GameScreen *this,char param_1)
{
  FUN_0041b150(&this->draw_context,param_1);
  FUN_00430690(this);
}


/* FUN_0042fcd0 @ 0x0042fcd0 */

void FUN_0042fcd0(void) { return; }


/* FUN_0042fce0 @ 0x0042fce0 */

void __cdecl FUN_0042fce0(short *param_1,short param_2)
{
  short s1;
  int n2;
  
  s1 = param_1[1];
  if ((s1 < param_1[3]) && (*param_1 < param_1[2])) {
    n2 = (int)param_2;
    if (((short)(&DAT_00487462)[n2 * 4] < (short)(&DAT_00487466)[n2 * 4]) &&
       ((short)(&DAT_00487460)[n2 * 4] < (short)(&DAT_00487464)[n2 * 4])) {
      if (s1 < (short)(&DAT_00487462)[n2 * 4]) {
        (&DAT_00487462)[n2 * 4] = s1;
      }
      if ((short)(&DAT_00487466)[n2 * 4] < param_1[3]) {
        (&DAT_00487466)[n2 * 4] = param_1[3];
      }
      if (*param_1 < (short)(&DAT_00487460)[n2 * 4]) {
        (&DAT_00487460)[n2 * 4] = *param_1;
      }
      if ((short)(&DAT_00487464)[n2 * 4] < param_1[2]) {
        (&DAT_00487464)[n2 * 4] = param_1[2];
      }
    }
    else {
      (&DAT_00487462)[n2 * 4] = s1;
      (&DAT_00487460)[n2 * 4] = *param_1;
      (&DAT_00487466)[n2 * 4] = param_1[3];
      (&DAT_00487464)[n2 * 4] = param_1[2];
    }
  }
  FUN_0042fcd0();
}


/* FUN_0042fdb0 @ 0x0042fdb0 */

void __cdecl FUN_0042fdb0(short *param_1)
{
  int n1;
  short s2;
  short s3;
  short s4;
  
  if ((((DAT_004800c0 == 0) ||
       (n1 = DAT_004800c0 * 8, *(short *)(&DAT_0048745a + n1) != param_1[1])) ||
      (*(short *)(&DAT_0048745e + n1) != param_1[3])) ||
     ((*(short *)(&DAT_00487458 + n1) != *param_1 ||
      (*(short *)(&DAT_0048745c + n1) != param_1[2])))) {
    s2 = 0;
    if (0 < DAT_004800c0) {
      s3 = param_1[1];
      do {
        n1 = (int)s2;
        if ((((short)(&DAT_00487462)[n1 * 4] <= s3) &&
            (param_1[3] <= (short)(&DAT_00487466)[n1 * 4])) &&
           (((short)(&DAT_00487460)[n1 * 4] <= *param_1 &&
            (param_1[2] <= (short)(&DAT_00487464)[n1 * 4])))) {
          DAT_004800c4 = 0;
          return;
        }
        if ((((s3 <= (short)(&DAT_00487462)[n1 * 4]) &&
             ((short)(&DAT_00487466)[n1 * 4] <= param_1[3])) &&
            (*param_1 <= (short)(&DAT_00487460)[n1 * 4])) &&
           ((short)(&DAT_00487464)[n1 * 4] <= param_1[2])) {
          n1 = (int)s2;
          (&DAT_00487462)[n1 * 4] = s3;
          (&DAT_00487466)[n1 * 4] = param_1[3];
          (&DAT_00487460)[n1 * 4] = *param_1;
          (&DAT_00487464)[n1 * 4] = param_1[2];
          FUN_0042fcd0();
          DAT_004800c4 = 0;
          return;
        }
        s2 = s2 + 1;
      } while (s2 < DAT_004800c0);
    }
    s2 = 0;
    if (0 < DAT_004800c0) {
      do {
        n1 = (int)s2;
        s3 = (&DAT_00487460)[n1 * 4];
        if ((short)(&DAT_00487460)[n1 * 4] <= *param_1) {
          s3 = *param_1;
        }
        s4 = (&DAT_00487464)[n1 * 4];
        if (param_1[2] <= (short)(&DAT_00487464)[n1 * 4]) {
          s4 = param_1[2];
        }
        if (s3 <= s4) {
          s3 = (&DAT_00487462)[n1 * 4];
          if ((short)(&DAT_00487462)[n1 * 4] <= param_1[1]) {
            s3 = param_1[1];
          }
          s4 = (&DAT_00487466)[n1 * 4];
          if (param_1[3] <= (short)(&DAT_00487466)[n1 * 4]) {
            s4 = param_1[3];
          }
          if (s3 <= s4) {
            FUN_0042fce0(param_1,s2);
            DAT_004800c4 = 0;
            return;
          }
        }
        s2 = s2 + 1;
      } while (s2 < DAT_004800c0);
    }
    if (DAT_004800c0 < 0x31) {
      n1 = (int)DAT_004800c0;
      (&DAT_00487462)[n1 * 4] = param_1[1];
      (&DAT_00487466)[n1 * 4] = param_1[3];
      (&DAT_00487460)[n1 * 4] = *param_1;
      (&DAT_00487464)[n1 * 4] = param_1[2];
      DAT_004800c0 = DAT_004800c0 + 1;
      DAT_004800c4 = 1;
      return;
    }
    DAT_004800c4 = 0;
  }
  return;
}


/* FUN_0042ffd0 @ 0x0042ffd0 */

void __cdecl FUN_0042ffd0(int param_1,short *param_2)
{
  if ((((param_2[1] == 0) && (param_2[3] == 0x280)) && (*param_2 == 0)) && (param_2[2] == 0x1e0)) {
    param_2[1] = 0;
  }
  if ((param_2[1] < param_2[3]) && (*param_2 < param_2[2])) {
    DAT_004800c4 = 1;
    FUN_0042fdb0(param_2);
  }
  return;
}


