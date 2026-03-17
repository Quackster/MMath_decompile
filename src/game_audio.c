/*
 * game_audio.c - Audio and media
 * Address range: 0x440000 - 0x44FFFF
 * Functions: 353
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_0044033c @ 0x0044033c */

void FUN_0044033c(void) { return; }


/* FUN_00440356 @ 0x00440356 */

void FUN_00440356(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x3c));
}


/* FUN_00440360 @ 0x00440360 */

void __fastcall FUN_00440360(GameBoard *param_1)
{
  int u1;
  int n2;
  int n3;
  UIWidget *pv4;
  char c5;
  int u6;

  n3 = 0x440379;
  u1 = FUN_0043a6b0(DAT_004838c0,0x444000d);
  *(int *)&((GameBoard *)param_1)->board_slots[0] = u1; /* store int at GameBoard +0x1D8 (board_slots base) */
  pv4 = *(void **)&((UIWidget *)DAT_004897c0)->field_44;
  if (pv4 != NULL) {
    c5 = '\x01';
    u1 = 0;
    n2 = 0x3f400000;
    FUN_004404f0((int *)&_tmp_38);
    FUN_004404f0((int *)&_tmp_37);
    FUN_00406130(pv4,n2,n3,u1,c5);
    pv4 = *(void **)&((UIWidget *)DAT_004897c0)->field_44;
    FUN_0041b5f0(pv4,0);
    u6 = 7;
    u1 = 0x1e0;
    FUN_00401ba0(&_tmp_39,0x1e0);
    FUN_00401ba0(&_tmp_38,0x280);
    FUN_0041d020(*(void **)&((UIWidget *)DAT_004897c0)->field_44,u1,(int)pv4,u6);
    FUN_0041dd40(*(void **)&((UIWidget *)DAT_004897c0)->field_44);
    (*(void **)&((UIWidget *)DAT_004897c0)->field_44)->field_109 = 0;
    FUN_0043f8c0(*(void **)&((UIWidget *)DAT_004897c0)->field_44);
  }
  if (param_1->reward_obj_a != NULL) {
    FUN_00406ca0(param_1->reward_obj_a,'\x05','\0');
  }
  if (param_1->reward_obj_d != NULL) {
    FUN_00406ca0(param_1->reward_obj_d,'\x05','\0');
  }
  n3 = *(int *)&param_1->_pad192[0x26]; /* GameBoard +0x1B8: UIWidget ptr in _pad192 area */
  if (n3 != 0) {
    if (3 < ((GameSession *)DAT_0048345c)->field_9e) {
      ((UIWidget *)n3)->pending_frame = 1;
      pv4 = *(UIWidget **)&param_1->_pad192[0x26]; /* GameBoard +0x1B8: UIWidget ptr */
      pv4->anim_flag_0 = 0;
      pv4->anim_flag_2 = 0;
      pv4->anim_flag_1 = 0;
      pv4->anim_flag_3 = 0;
      FUN_00405d30(pv4,1);
      return;
    }
    ((UIWidget *)n3)->pending_frame = 0;
    pv4 = *(UIWidget **)&param_1->_pad192[0x26]; /* GameBoard +0x1B8: UIWidget ptr */
    pv4->anim_flag_0 = 0;
    pv4->anim_flag_2 = 0;
    pv4->anim_flag_1 = 0;
    pv4->anim_flag_3 = 0;
    FUN_00405d30(pv4,0);
  }
  return;
}


/* FUN_004404f0 @ 0x004404f0 */

int * __fastcall FUN_004404f0(int *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


/* FUN_0044094b @ 0x0044094b */

void FUN_0044094b(void) { return; }


/* FUN_00440953 @ 0x00440953 */

void FUN_00440953(void) { return; }


/* FUN_00440965 @ 0x00440965 */

void FUN_00440965(void) { return; }


/* FUN_00440980 @ 0x00440980 */

void __fastcall FUN_00440980(int param_1)
{
  int n1;
  int n2;
  int n3;
  UIWidget *pv4;
  char c5;
  int u6;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00440c8f;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  n3 = 0;
  n1 = FUN_0043a6b0(DAT_004838c0, 0x444000d);
  *(int *)((char *)param_1 + 0x1D8) = n1; /* SoundChannelState field */
  pv4 = *(UIWidget **)((char *)param_1 + 0x44);
  if (pv4 != NULL) {
    c5 = 0x01;
    n1 = 0;
    n2 = 0x3f400000;
    FUN_004404f0((int *)&_tmp_38);
    FUN_004404f0((int *)&_tmp_37);
    FUN_00406130(pv4, n2, n3, n1, c5);
    pv4 = *(UIWidget **)((char *)param_1 + 0x44);
    FUN_0041b5f0(pv4, 0);
    u6 = 7;
    n1 = 0x1e0;
    FUN_00401ba0(&_tmp_39, 0x1e0);
    FUN_00401ba0(&_tmp_38, 0x280);
    FUN_0041d020(*(void **)((char *)param_1 + 0x44), n1, (int)pv4, u6);
    FUN_0041dd40(*(void **)((char *)param_1 + 0x44));
    (*(UIWidget **)((char *)param_1 + 0x44))->field_109 = 0;
    FUN_0043f8c0(*(void **)((char *)param_1 + 0x44));
  }
  if (*(void **)((char *)param_1 + 0x150) != NULL) {
    FUN_00406ca0(*(void **)((char *)param_1 + 0x150), 0x05, 0x00);
  }
  if (*(void **)((char *)param_1 + 0x160) != NULL) {
    FUN_00406ca0(*(void **)((char *)param_1 + 0x160), 0x05, 0x00);
  }
  n3 = *(int *)((char *)param_1 + 0x1B8);
  if (n3 != 0) {
    if (3 < ((GameSession *)DAT_0048345c)->field_9e) {
      ((UIWidget *)n3)->pending_frame = 1;
      pv4 = *(UIWidget **)((char *)param_1 + 0x1B8);
      pv4->anim_flag_0 = 0;
      pv4->anim_flag_2 = 0;
      pv4->anim_flag_1 = 0;
      pv4->anim_flag_3 = 0;
      FUN_00405d30(pv4, 1);
    }
    else {
      ((UIWidget *)n3)->pending_frame = 0;
      pv4 = *(UIWidget **)((char *)param_1 + 0x1B8);
      pv4->anim_flag_0 = 0;
      pv4->anim_flag_2 = 0;
      pv4->anim_flag_1 = 0;
      pv4->anim_flag_3 = 0;
      FUN_00405d30(pv4, 0);
    }
  }
  *_fs = _seh_prev;
  return;
}


/* FUN_00440ca0 @ 0x00440ca0
 * Struct types: SoundChannelState (param_1)
 */
void __fastcall FUN_00440ca0(SoundChannelState *param_1)
{
  int n1;
  uint u2;
  short s3;
  short s4;
  uint u5;

  do {
    n1 = rand();
    s3 = (short)(n1 % 3);
    n1 = rand();
    s4 = (short)(n1 % 3);
  } while (s4 == s3);
  if (param_1->resource_handle != 0) {
    switch(*(short *)((char *)param_1->resource_handle + 0xC)) {
    case 1:
      FUN_0045d510(0x13d000c,'\0');
      FUN_00404870(param_1,0x10c000c);
      u2 = rand();
      u5 = (int)u2 >> 0x1f;
      if (((u2 ^ u5) - u5 & 1 ^ u5) == u5) {
        param_1->channel_b = 0x14;        param_1->channel_a = 0xb;       }
      else {
        param_1->channel_b = 0xb;        param_1->channel_a = 0x14;      }
      break;
    case 2:
      FUN_0045d510(0x158000c,'\0');
      FUN_00404870(param_1,0x10d000c);
      if (s3 == 1) {
        param_1->channel_b = 6;      }
      else {
        param_1->channel_b = 10;        if (s3 != 2) {
          param_1->channel_b = 5;        }
      }
      if (s4 == 1) {
        param_1->channel_a = 6;      }
      else if (s4 == 2) {
        param_1->channel_a = 10;      }
      else {
        param_1->channel_a = 5;      }
      break;
    case 3:
      FUN_0045d510(0x159000c,'\0');
      FUN_00404870(param_1,0x10e000c);
      if (s3 == 1) {
        param_1->channel_b = 0x1d;      }
      else {
        param_1->channel_b = 0x11;        if (s3 != 2) {
          param_1->channel_b = 0x10;        }
      }
      if (s4 == 1) {
        param_1->channel_a = 0x1d;      }
      else if (s4 == 2) {
        param_1->channel_a = 0x11;      }
      else {
        param_1->channel_a = 0x10;      }
      break;
    case 4:
      FUN_0045d510(0x15a000c,'\0');
      FUN_00404870(param_1,0x10f000c);
      if (s3 == 1) {
        param_1->channel_b = 0xf;      }
      else {
        param_1->channel_b = 0xc;        if (s3 != 2) {
          param_1->channel_b = 0x1c;        }
      }
      if (s4 == 1) {
        param_1->channel_a = 0xf;      }
      else if (s4 == 2) {
        param_1->channel_a = 0xc;      }
      else {
        param_1->channel_a = 0x1c;      }
      break;
    case 5:
      FUN_0045d510(0x15b000c,'\0');
      FUN_00404870(param_1,0x110000c);
      u2 = rand();
      u5 = (int)u2 >> 0x1f;
      if (((u2 ^ u5) - u5 & 1 ^ u5) == u5) {
        param_1->channel_b = 8;        param_1->channel_a = 0x13;      }
      else {
        param_1->channel_b = 0x13;        param_1->channel_a = 8;      }
      break;
    case 6:
      FUN_0045d510(0x15c000c,'\0');
      FUN_00404870(param_1,0x111000c);
      if (s3 == 1) {
        param_1->channel_b = 0x1e;      }
      else {
        param_1->channel_b = 9;        if (s3 != 2) {
          param_1->channel_b = 0x12;        }
      }
      if (s4 == 1) {
        param_1->channel_a = 0x1e;      }
      else if (s4 == 2) {
        param_1->channel_a = 9;      }
      else {
        param_1->channel_a = 0x12;      }
      break;
    case 7:
      FUN_00404870(param_1,0x111000c);
      param_1->channel_b = 0x1e;      param_1->channel_a = 0x12;      break;
    case 8:
      FUN_0045d510(0x15d000c,'\0');
      FUN_00404870(param_1,0x113000c);
      param_1->channel_b = 2;      param_1->channel_a = 3;    }
  }
  ((GameSession *)DAT_0048345c)->field_e8 = param_1->channel_a;  return;
}


/* FUN_004412d0 @ 0x004412d0 */

void __cdecl FUN_004412d0(int param_1,int param_2)
{
  if (param_2 != 0) {
    FUN_0045f100(param_1,'\x01');
    return;
  }
  FUN_00441320();
  DAT_00488e38 = (int *)FUN_0043a6b0(DAT_004838c0,param_1);
  DAT_00488e58 = param_1;
  DAT_0048065c = FUN_00434300(DAT_00488e38);
}


/* FUN_00441320 @ 0x00441320 */

void FUN_00441320(void)
{
  if (DAT_0048065c != 0) {
    FUN_00434490(DAT_0048065c);
    DAT_0048065c = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488e58,DAT_00488e38);
  }
  return;
}


/* FUN_00441370 @ 0x00441370 */

void FUN_00441370(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488ed0,u1,_arg1);
}


/* FUN_004413c0 @ 0x004413c0 */

void FUN_004413c0(void) { return; }


/* FUN_004413e0 @ 0x004413e0 */

/* NOTE: overlapping globals */

void FUN_004413e0(void)
{
  _DAT_00488eee = 0;
  _DAT_00488eec = 0;
}


/* FUN_004413f0 @ 0x004413f0 */

void FUN_004413f0(void)
{
  _atexit(FUN_00441400);
}


/* FUN_00441400 @ 0x00441400 */

void FUN_00441400(void) { return; }


/* FUN_00441420 @ 0x00441420 */

/* NOTE: overlapping globals */

void FUN_00441420(void)
{
  _DAT_00488eea = 0;
  _DAT_00488ee8 = 0;
}


/* FUN_00441430 @ 0x00441430 */

void FUN_00441430(void)
{
  _atexit(FUN_00441440);
}


/* FUN_00441440 @ 0x00441440 */

void FUN_00441440(void) { return; }


/* FUN_00441460 @ 0x00441460 */

/* NOTE: overlapping globals */

void FUN_00441460(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00441499;
  *_fs = (int)&_seh_prev;
  _seh_state = 0;
  _DAT_00488ea0 = (int)&PTR_LAB_00472e08;
  DAT_00488ea4 = 0;
  _DAT_00488ea8 = 0;
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_004414a0 @ 0x004414a0 */

void FUN_004414a0(void)
{
  _atexit(FUN_004414b0);
}


/* FUN_004414b0 @ 0x004414b0 */

/* NOTE: overlapping globals */

void FUN_004414b0(void)
{
  _DAT_00488ea0 = &PTR_LAB_00472e08;
  if (DAT_00488ea4 != NULL) {
    FUN_0046d110(DAT_00488ea4);
  }
  DAT_00488ea4 = NULL;
  _DAT_00488ea8 = 0;
}


/* FUN_00441da0 @ 0x00441da0 */

/* NOTE: overlapping globals */

void FUN_00441da0(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00441dd9;
  *_fs = (int)&_seh_prev;
  _seh_state = 0;
  _DAT_00488e80 = (int)&PTR_LAB_004752f0;
  DAT_00488e84 = 0;
  _DAT_00488e88 = 0;
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_00441de0 @ 0x00441de0 */

void FUN_00441de0(void)
{
  _atexit(FUN_00441df0);
}


/* FUN_00441df0 @ 0x00441df0 */

/* NOTE: overlapping globals */

void FUN_00441df0(void)
{
  _DAT_00488e80 = &PTR_LAB_004752f0;
  if (DAT_00488e84 != NULL) {
    FUN_0046d110(DAT_00488e84);
  }
  DAT_00488e84 = NULL;
  _DAT_00488e88 = 0;
}


/* FUN_00441e30 @ 0x00441e30 */

/* NOTE: overlapping globals */

void FUN_00441e30(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00441e69;
  *_fs = (int)&_seh_prev;
  _seh_state = 0;
  _DAT_00488eb8 = (int)&PTR_LAB_004752f0;
  DAT_00488ebc = 0;
  _DAT_00488ec0 = 0;
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_00441e70 @ 0x00441e70 */

void FUN_00441e70(void)
{
  _atexit(FUN_00441e80);
}


/* FUN_00441e80 @ 0x00441e80 */

/* NOTE: overlapping globals */

void FUN_00441e80(void)
{
  _DAT_00488eb8 = &PTR_LAB_004752f0;
  if (DAT_00488ebc != NULL) {
    FUN_0046d110(DAT_00488ebc);
  }
  DAT_00488ebc = NULL;
  _DAT_00488ec0 = 0;
}


/* FUN_00441eb0 @ 0x00441eb0 */

void __fastcall FUN_00441eb0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00441f09;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004052b0((UIWidget *)param_1);
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  *(void **)param_1 = &PTR_FUN_004753c0;
  FUN_0041da90((UIWidget *)param_1, 1);
  *_fs = _seh_prev;
}


/* FUN_00441f10 @ 0x00441f10
 * Struct types: UIWidget (this)
 * Stops animation — resets pending_frame, clears anim flags, calls vtable[0x30].
 * param_1[0x45] = byte offset 0x114 = anim_flag_0
 */

void __fastcall FUN_00441f10(UIWidget *this)
{
  this->pending_frame = 0;
  /* vtable[0x30] call (offset 0xc0 / 4 = 0x30) */
  /* vtable[0x30] call (offset 0xc0 / 4 = 0x30) */
  ((void (*)(void))this->vtable[0x30])();
  this->anim_flag_0 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_1 = 0;
  this->anim_flag_3 = 0;
  FUN_00405d30(this,0);
  this->pending_frame = 0;
  DAT_00480748 = 0;
}


/* FUN_00441f60 @ 0x00441f60
 * Struct types: UIWidget (this)
 * Starts animation at frame 2 — sets pending_frame, clears anim flags,
 * then sets direction frame to 2.
 */

void __fastcall FUN_00441f60(UIWidget *this)
{
  this->pending_frame = 2;
  this->anim_flag_0 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_1 = 0;
  this->anim_flag_3 = 0;
  FUN_00405e10(this,1,'\0');
  this->anim_flag_0 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_1 = 0;
  this->anim_flag_3 = 0;
  this->pending_frame = 2;
  FUN_00405d30(this,2);
  DAT_00480748 = this;
}


/* FUN_00442100 @ 0x00442100 */

void __thiscall FUN_00442100(void *this,int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x0044217f;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004052b0((UIWidget *)this);
  *(void **)this = &PTR_FUN_004753c0;
  _seh_state = 0;
  ((UIWidget *)this)->is_interactive = 1;
  FUN_0041da90((UIWidget *)this, 1);
  if (param_1 != NULL) {
    FUN_0041d780(this, *(int *)((char *)param_1 + 4));
    FUN_0041dbb0(this);
    FUN_0041dd40(this);
  }
  *_fs = _seh_prev;
}


/* FUN_00442180 @ 0x00442180 */

/* NOTE: Removing unreachable block (ram,0x004421b4) */

void __fastcall FUN_00442180(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x004421e9;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004052b0((UIWidget *)param_1);
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  *(void **)param_1 = &PTR_FUN_00475828;
  FUN_0041da90((UIWidget *)param_1, 1);
  *_fs = _seh_prev;
}


/* FUN_004421f0 @ 0x004421f0 */

int * __fastcall FUN_004421f0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x004423d4;
  *_fs = (int)&_seh_prev;
  FUN_004052b0((UIWidget *)param_1);
  *(void **)param_1 = &PTR_FUN_00475828;
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041da90((UIWidget *)param_1, 1);
  _seh_state = 1;
  *(void **)((char *)param_1 + 0x118) = 0;
  *(int *)((char *)param_1 + 0x11C) = 0;
  *(void **)((char *)param_1 + 0x126) = 0;
  *(void **)((char *)param_1 + 0x130) = 0;
  *(void **)((char *)param_1 + 0x136) = 0;
  *(void **)((char *)param_1 + 0x13A) = 0;
  *(void **)((char *)param_1 + 0x13E) = 0;
  *(void **)((char *)param_1 + 0x142) = 0;
  *(void **)((char *)param_1 + 0x146) = 0;
  *(void **)((char *)param_1 + 0x14A) = 0;
  *(void **)((char *)param_1 + 0x14E) = 0;
  *(void **)((char *)param_1 + 0x152) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004423e5 @ 0x004423e5 */

void FUN_004423e5(void) { return; }


/* FUN_004423f3 @ 0x004423f3 */

void FUN_004423f3(void) { return; }


/* FUN_00442401 @ 0x00442401 */

void FUN_00442401(void)
{
  int _ebp;
  
  FUN_00449450((int *)(*(int *)(_ebp + -0x10) + 0x118));
}


/* FUN_00442419 @ 0x00442419 */

void FUN_00442419(void)
{
  FUN_004012a0();
}


/* FUN_00442430 @ 0x00442430 */

void FUN_00442430(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004424b7;
  *_fs = &_seh_prev;
  _seh_state = (_seh_state & ~0xFF) | 2;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_0044248d();
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_0044249b();
  _seh_state &= ~0xFF;
  FUN_004424a9();
  _seh_state = 0xffffffff;
  FUN_004424c1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0044248d @ 0x0044248d */

void FUN_0044248d(void) { return; }


/* FUN_0044249b @ 0x0044249b */

void FUN_0044249b(void) { return; }


/* FUN_004424a9 @ 0x004424a9 */

void FUN_004424a9(void)
{
  int _ebp;
  
  FUN_00449450((int *)(*(int *)(_ebp + -0x10) + 0x118));
}


/* FUN_004424c1 @ 0x004424c1 */

void FUN_004424c1(void)
{
  FUN_004012a0();
}


/* FUN_00442550 @ 0x00442550 */

int * __thiscall FUN_00442550(void *this,byte param_1)
{
  FUN_00442570(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00442570 @ 0x00442570
 * Struct types: GameWidget (param_1)
 * Destructor - cleans up slot/group pointers and calls destructors
 */
void __fastcall FUN_00442570(GameWidget *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &L_0044263d;
  *(void **)param_1 = &PTR_FUN_004753c0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  /* offset 0x152 falls in groups_a[0]._pad04 region */
  if (*(void **)&param_1->groups_a[0]._pad04[4] != NULL) { /* GameWidget +0x152: callback ptr in groups_a[0] */
    ((void (*)(void))**(void ***)&param_1->groups_a[0]._pad04[4])(); /* GameWidget +0x152 */
    *(void **)&param_1->groups_a[0]._pad04[4] = 0; /* GameWidget +0x152 */
  }
  *(void **)&param_1->groups_a[0]._pad04 = 0;  /* GameWidget->_pad14e */
  param_1->groups_a[0].data_ptr = 0;        /* GameWidget->group_data_a +0x14A */
  if (*(void **)&param_1->_pad146 != NULL) { /* GameWidget->_pad146 */
    ((void (*)(void))**(void ***)&param_1->_pad146)();
    *(void **)&param_1->_pad146 = 0;
  }
  if (param_1->name_data_ptr != NULL) { /* GameWidget->name_data_ptr +0x142 */
    ((void (*)(void))**(void ***)&param_1->name_data_ptr)();
    param_1->name_data_ptr = 0;
  }
  if (*(void **)&param_1->_pad13e != NULL) { /* GameWidget->_pad13e */
    ((void (*)(void))**(void ***)&param_1->_pad13e)();
    *(void **)&param_1->_pad13e = 0;
  }
  _seh_state = 0xffffffff;
  FUN_00442647();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00442647 @ 0x00442647 */

void FUN_00442647(void)
{
  FUN_00442430();
}


/* FUN_00442650 @ 0x00442650
 * Struct types: GameWidget (param_1)
 * Cleanup - destroys slot/group pointers and stops animation
 */
void __fastcall FUN_00442650(GameWidget *param_1)
{
  /* offset 0x152 falls in groups_a[0]._pad04 region */
  if (*(void **)&param_1->groups_a[0]._pad04[4] != NULL) { /* GameWidget +0x152: callback ptr in groups_a[0] */
    ((void (*)(void))**(void ***)&param_1->groups_a[0]._pad04[4])(); /* GameWidget +0x152 */
    *(void **)&param_1->groups_a[0]._pad04[4] = 0; /* GameWidget +0x152 */
  }
  if (param_1->groups_a[0].data_ptr != 0) { /* GameWidget->group_data_a +0x14A */
    ((void (*)(void))**(void ***)&param_1->groups_a[0].data_ptr)();
    param_1->groups_a[0].data_ptr = 0;
  }
  if (*(void **)&param_1->groups_a[0]._pad04 != NULL) { /* GameWidget->_pad14e */
    ((void (*)(void))**(void ***)&param_1->groups_a[0]._pad04)();
    *(void **)&param_1->groups_a[0]._pad04 = 0;
  }
  if (*(void **)&param_1->_pad146 != NULL) { /* GameWidget->_pad146 */
    ((void (*)(void))**(void ***)&param_1->_pad146)();
    *(void **)&param_1->_pad146 = 0;
  }
  if (param_1->name_data_ptr != NULL) { /* GameWidget->name_data_ptr +0x142 */
    ((void (*)(void))**(void ***)&param_1->name_data_ptr)();
    param_1->name_data_ptr = 0;
  }
  if (*(void **)&param_1->_pad13e != NULL) { /* GameWidget->_pad13e */
    ((void (*)(void))**(void ***)&param_1->_pad13e)();
    *(void **)&param_1->_pad13e = 0;
  }
  FUN_00441f10((UIWidget *)param_1);
}


/* FUN_00442d6c @ 0x00442d6c */

void FUN_00442d6c(void) { return; }


/* FUN_00442ef0 @ 0x00442ef0 */

void FUN_00442ef0(void) { return; }


/* FUN_00443010 @ 0x00443010
 * Struct types: GameWidget (this)
 * Setter for field_118 (writes 4 bytes spanning field_118 + pair_x_1 low bytes)
 */
void __thiscall FUN_00443010(GameWidget *this,int param_1)
{
  *(int *)&this->field_118 = param_1; /* 4-byte write at +0x118 */
  return;
}


/* FUN_00443079 @ 0x00443079 */

void FUN_00443079(void)
{
  FUN_004012a0();
}


/* FUN_00443090 @ 0x00443090 */

int FUN_00443090(void)
{
  return DAT_00480660;
}


/* FUN_004430f9 @ 0x004430f9 */

void FUN_004430f9(void)
{
  FUN_004012a0();
}


/* FUN_00443169 @ 0x00443169 */

void FUN_00443169(void)
{
  FUN_004012a0();
}


/* FUN_004431d9 @ 0x004431d9 */

void FUN_004431d9(void)
{
  FUN_004012a0();
}


/* FUN_004432d7 @ 0x004432d7 */

void FUN_004432d7(void) { return; }


/* FUN_004432f0 @ 0x004432f0
 * Struct types: GameBoard (via DAT_00480758)
 * Records tick count in GameBoard->last_tick, then calls vtable[0x25]
 */
void __fastcall FUN_004432f0(int *param_1)
{
  GameBoard *board;
  DWORD dw2;

  board = (GameBoard *)DAT_00480758;
  dw2 = GetTickCount();
  board->last_tick = dw2;
  /* vtable[0x25] call (offset 0x94 / 4 = 0x25) */
  ((void (*)(void))((void **)(*param_1))[0x25])();
}


/* FUN_004434dc @ 0x004434dc */

void FUN_004434dc(void) { return; }


/* FUN_004434e4 @ 0x004434e4 */

void FUN_004434e4(void) { return; }


/* FUN_004434f6 @ 0x004434f6 */

void FUN_004434f6(void) { return; }


/* FUN_00443500 @ 0x00443500
 * Struct types: GameBoard (via DAT_00480758)
 * Records tick count in GameBoard->last_tick, then calls vtable[0x25]
 */
void __fastcall FUN_00443500(int *param_1)
{
  GameBoard *board;
  DWORD dw2;

  board = (GameBoard *)DAT_00480758;
  dw2 = GetTickCount();
  board->last_tick = dw2;
  /* vtable[0x25] call (offset 0x94 / 4 = 0x25) */
  ((void (*)(void))((void **)(*param_1))[0x25])();
}


/* FUN_00443800 @ 0x00443800 */

void FUN_00443800(void) { return; }


/* FUN_00443808 @ 0x00443808 */

void FUN_00443808(void)
{
  int _ebp;
  
  FUN_00432a50((int *)(_ebp + -0x44));
}


/* FUN_00443810 @ 0x00443810 */

void FUN_00443810(void) { return; }


/* FUN_00443822 @ 0x00443822 */

void FUN_00443822(void) { return; }


/* FUN_00443830 @ 0x00443830 */

int * __fastcall FUN_00443830(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x004439eb;
  *_fs = (int)&_seh_prev;
  FUN_004052b0((UIWidget *)param_1);
  *(void **)param_1 = &PTR_FUN_004753c0;
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041da90((UIWidget *)param_1, 1);
  _seh_state = 1;
  *(void **)((char *)param_1 + 0x118) = 0;
  *(int *)((char *)param_1 + 0x11A) = 0;
  *(int *)((char *)param_1 + 0x11E) = 0;
  *(int *)((char *)param_1 + 0x122) = 0;
  *(void **)((char *)param_1 + 0x126) = 0;
  *(int *)((char *)param_1 + 0x12A) = 0;
  *(int *)((char *)param_1 + 0x130) = 0;
  *(void **)((char *)param_1 + 0x136) = 0;
  *(void **)((char *)param_1 + 0x13A) = 0;
  *(void **)((char *)param_1 + 0x13E) = 0;
  *(void **)((char *)param_1 + 0x142) = 0;
  *(void **)((char *)param_1 + 0x146) = 0;
  *(void **)((char *)param_1 + 0x14A) = 0;
  *(void **)((char *)param_1 + 0x14E) = 0;
  *(void **)((char *)param_1 + 0x152) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004439fc @ 0x004439fc */

void FUN_004439fc(void)
{
  int _ebp;

  FUN_00442570(*(GameWidget **)(_ebp + -0x10));
  FUN_0046c410(*(uint *)(_ebp + -0x10));
}


/* FUN_00443a1e @ 0x00443a1e */

void FUN_00443a1e(void)
{
  FUN_00442430();
}


/* FUN_00443ae1 @ 0x00443ae1 */

void FUN_00443ae1(void) { return; }


/* FUN_00443c56 @ 0x00443c56 */

void FUN_00443c56(void) { return; }


/* FUN_00443db2 @ 0x00443db2 */

void FUN_00443db2(void) { return; }


/* FUN_00443dc0 @ 0x00443dc0 */

int * __fastcall FUN_00443dc0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x00443f09;
  *_fs = (int)&_seh_prev;
  FUN_004052b0((UIWidget *)param_1);
  *(void **)param_1 = &PTR_FUN_00475828;
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041da90((UIWidget *)param_1, 1);
  _seh_state = 1;
  *(void **)((char *)param_1 + 0x146) = 0;
  *(void **)((char *)param_1 + 0x14A) = 0;
  *(void **)((char *)param_1 + 0x14E) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00443f10 @ 0x00443f10 */

int * __thiscall FUN_00443f10(void *this,byte param_1)
{
  FUN_00443f30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00443f30 @ 0x00443f30
 * Struct types: GameWidget (param_1)
 * Destructor - cleans up slot/group pointers
 */
void __fastcall FUN_00443f30(GameWidget *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &L_00443fcb;
  *(void **)param_1 = &PTR_FUN_00475828;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (*(void **)&param_1->groups_a[0]._pad04 != NULL) { /* GameWidget->_pad14e */
    ((void (*)(void))**(void ***)&param_1->groups_a[0]._pad04)();
    *(void **)&param_1->groups_a[0]._pad04 = 0;
  }
  if (param_1->groups_a[0].data_ptr != 0) { /* GameWidget->group_data_a +0x14A */
    ((void (*)(void))**(void ***)&param_1->groups_a[0].data_ptr)();
    param_1->groups_a[0].data_ptr = 0;
  }
  if (*(void **)&param_1->_pad146 != NULL) { /* GameWidget->_pad146 */
    ((void (*)(void))**(void ***)&param_1->_pad146)();
    *(void **)&param_1->_pad146 = 0;
  }
  _seh_state = 0xffffffff;
  FUN_00443fd5();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00443fd5 @ 0x00443fd5 */

void FUN_00443fd5(void)
{
  FUN_00442430();
}


/* FUN_00443fe0 @ 0x00443fe0
 * Struct types: GameWidget (param_1)
 * Cleanup - destroys slot/group pointers and stops animation
 */
void __fastcall FUN_00443fe0(GameWidget *param_1)
{
  if (*(void **)&param_1->groups_a[0]._pad04 != NULL) { /* GameWidget->_pad14e */
    ((void (*)(void))**(void ***)&param_1->groups_a[0]._pad04)();
    *(void **)&param_1->groups_a[0]._pad04 = 0;
  }
  if (param_1->groups_a[0].data_ptr != 0) { /* GameWidget->group_data_a +0x14A */
    ((void (*)(void))**(void ***)&param_1->groups_a[0].data_ptr)();
    param_1->groups_a[0].data_ptr = 0;
  }
  if (*(void **)&param_1->_pad146 != NULL) { /* GameWidget->_pad146 */
    ((void (*)(void))**(void ***)&param_1->_pad146)();
    *(void **)&param_1->_pad146 = 0;
  }
  FUN_00441f10((UIWidget *)param_1);
}


/* FUN_0044439d @ 0x0044439d */

void FUN_0044439d(void) { return; }


/* FUN_004444b9 @ 0x004444b9 */

void FUN_004444b9(void)
{
  FUN_004012a0();
}


/* FUN_00444529 @ 0x00444529 */

void FUN_00444529(void)
{
  FUN_004012a0();
}


/* FUN_00444720 @ 0x00444720 */

void FUN_00444720(void) { return; }


/* FUN_004448c6 @ 0x004448c6 */

void FUN_004448c6(void) { return; }


/* FUN_004448ce @ 0x004448ce */

void FUN_004448ce(void) { return; }


/* FUN_004448e0 @ 0x004448e0 */

void FUN_004448e0(void) { return; }


/* FUN_00444a2e @ 0x00444a2e */

void FUN_00444a2e(void) { return; }


/* FUN_00444a40 @ 0x00444a40 */

/* NOTE: overlapping globals */

int * __fastcall FUN_00444a40(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x00444d0b;
  *_fs = (int)&_seh_prev;
  FUN_0042cbd0(param_1);
  *(void **)param_1 = &PTR_FUN_00475d98;
  _seh_state = 0;
  param_1[0x66] = 0;
  _seh_state = 1;
  FUN_00413810((CString *)((char *)param_1 + 0x1dc));
  _seh_state = 2;
  *(int *)((char *)param_1 + 0x19c) = 0;
  *(int *)((char *)param_1 + 0x1a0) = 0;
  *(int *)((char *)param_1 + 0x1a4) = 0;
  *(int *)((char *)param_1 + 0x1a8) = 0;
  *(int *)((char *)param_1 + 0x1ac) = 0;
  *(int *)((char *)param_1 + 0x1b0) = 0;
  *(int *)((char *)param_1 + 0x1b4) = 0;
  *(int *)((char *)param_1 + 0x1b8) = 0;
  *(int *)((char *)param_1 + 0x1bc) = 0;
  *(int *)((char *)param_1 + 0x1c0) = 0;
  *(int *)((char *)param_1 + 0x1c4) = 0;
  *(int *)((char *)param_1 + 0x1c8) = 0;
  *(int *)((char *)param_1 + 0x1cc) = 0;
  *(int *)((char *)param_1 + 0x1d0) = 0;
  *(int *)((char *)param_1 + 0x1d4) = 0;
  *(int *)((char *)param_1 + 0x1d8) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00444d1c @ 0x00444d1c */

void FUN_00444d1c(void)
{
  int _ebp;
  
  FUN_00413840((int *)(*(int *)(_ebp + -0x10) + 0x1dc));
}


/* FUN_00444d34 @ 0x00444d34 */

void FUN_00444d34(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_00444f71 @ 0x00444f71 */

void FUN_00444f71(void) { return; }


/* FUN_00444f79 @ 0x00444f79 */

void FUN_00444f79(void) { return; }


/* FUN_00444f81 @ 0x00444f81 */

void FUN_00444f81(void) { return; }


/* FUN_00444f91 @ 0x00444f91 */

void FUN_00444f91(void) { return; }


/* FUN_00444f99 @ 0x00444f99 */

void FUN_00444f99(void) { return; }


/* FUN_00444fa1 @ 0x00444fa1 */

void FUN_00444fa1(void) { return; }


/* FUN_004453c5 @ 0x004453c5 */

void FUN_004453c5(void)
{
  int _ebp;
  
  FUN_0040f520((int *)(_ebp + -0x38));
}


/* FUN_00445459 @ 0x00445459 */

void FUN_00445459(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_00445470 @ 0x00445470 */

char __thiscall
FUN_00445470(void *this,int param_1,int param_2,char param_3,char param_4,int param_5,
            char param_6)
{
  char c1;
  SHORT sz2;
  SHORT sz3;
  SHORT sz4;
  DWORD dw5;
  uint u6;
  short s7;
  ushort *pu8;
  int *_fs;
  int v30;
  int v2c;
  int v28;
  ushort *v24;
  int v20;
  ushort *v1c;
  void *v18;
  char v13;
  char v12;
  char v11;
  int v10;
  char *_handler;
  uint v8;
  
  /* SEH prolog */
  v10 = *_fs;
  v8 = 0xffffffff;
  _handler = &L_00445791;
  *_fs = &v10;
  v12 = 0;
  v13 = '\0';
  v18 = this;
  FUN_0041d780(this,((UIWidget *)DAT_004897c0)->sub_widgets_a[3]);
  FUN_0041dbb0(v18);
  v1c = FUN_0042c860(DAT_004838c0,param_2);
  if (v1c != NULL) {
    sz2 = GetAsyncKeyState(2);
    sz3 = GetAsyncKeyState(4);
    sz4 = GetAsyncKeyState(1);
    v2c = 0;
    v30 = 0;
    v8 = 0;
    v11 = (-1 < sz2 && -1 < sz3) && -1 < sz4;
    dw5 = GetTickCount();
    v20 = (int)(((longlong)(int)dw5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
    if (param_4 == '\0') {
      FUN_00403030(&v30,&v28,(int *)&DAT_00488ed0);
      v8 = v8 & 0xffffff00;
      FUN_00445789();
    }
    else {
      FUN_0041ce10(v18,&v30,param_5);
    }
    v24 = FUN_0042c5b0((short *)v1c,&v30,NULL);
    if (v24 != NULL) {
      s7 = 0;
      if (0 < (short)*v1c) {
        do {
          if ((param_6 == '\0') && (s7 != 0)) {
            if (param_3 == '\0') {
              FUN_00431160((void *)((UIWidget *)v18)->field_06,'\0'); /* UIWidget->field_06 used as GameScreen ptr */
            }
            else {
              dw5 = GetTickCount();
              u6 = (int)(((longlong)(int)dw5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                      v20;
              while (u6 < 5) {
                FUN_00431160((void *)((UIWidget *)v18)->field_06,'\0'); /* UIWidget->field_06 used as GameScreen ptr */
                dw5 = GetTickCount();
                u6 = (int)(((longlong)(int)dw5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000)
                        - v20;
              }
              dw5 = GetTickCount();
              v20 = (int)(((longlong)(int)dw5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000)
              ;
            }
          }
          sz2 = GetAsyncKeyState(2);
          sz3 = GetAsyncKeyState(4);
          sz4 = GetAsyncKeyState(1);
          if ((sz2 < 0 || sz3 < 0) || sz4 < 0) {
            if (v11 != '\0') {
              v12 = 1;
              if (s7 < (short)*v1c) {
                do {
                  pu8 = v24 + s7 * 0xd;
                  FUN_0041d3a0(v18,*(int *)(pu8 + 2),*(int *)pu8,'\0');
                  if ((char)v1c[1] != '\0') {
                    FUN_00406130(v18,*(int *)(pu8 + 6),*(int *)(pu8 + 4),0,'\x01');
                  }
                  s7 = s7 + 1;
                } while (s7 < (short)*v1c);
              }
              break;
            }
          }
          else if (v11 == '\0') {
            v11 = '\x01';
          }
          pu8 = v24 + s7 * 0xd;
          FUN_0041d2d0(v18,(int *)pu8,'\0');
          if ((char)v1c[1] != '\0') {
            FUN_00406130(v18,*(int *)(pu8 + 6),*(int *)(pu8 + 4),0,'\x01');
          }
          if ((v13 == '\0') && (c1 = FUN_00406fc0((int)v18,param_1), c1 == '\0')) {
            FUN_0041d780(v18,((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
            FUN_0041dd40(v18);
            v13 = '\x01';
          }
          s7 = s7 + 1;
        } while (s7 < (short)*v1c);
      }
      FUN_0046f5f0((uint)v24);
    }
    FUN_0042c8d0(DAT_004838c0,param_2,(uint)v1c);
    v8 = 0xffffffff;
    FUN_0044579b();
  }
  FUN_0041d780(v18,((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
  *_fs = v10;
  return v12;
}


/* FUN_00445789 @ 0x00445789 */

void FUN_00445789(void) { return; }


/* FUN_0044579b @ 0x0044579b */

void FUN_0044579b(void) { return; }


/* FUN_004457b0 @ 0x004457b0 */

void FUN_004457b0(void *param_1)
{
  int n1;
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0044583a;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  _seh_state = 0;
  FUN_0041ce10(param_1,&v18,4);
  n1 = rand();
  v14 = v14 + (n1 % 0x32 + 1) * 0x100;
  n1 = rand();
  v18 = v18 + (n1 % 0x19 + 1) * 0x100;
  FUN_0041cef0(param_1,&v18,4);
  _seh_state = 0xffffffff;
  FUN_00445844();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00445844 @ 0x00445844 */

void FUN_00445844(void) { return; }


/* FUN_004459bd @ 0x004459bd */

void FUN_004459bd(void) { return; }


/* FUN_004459c5 @ 0x004459c5 */

void FUN_004459c5(void) { return; }


/* FUN_004459d7 @ 0x004459d7 */

void FUN_004459d7(void) { return; }


/* FUN_004459f0 @ 0x004459f0
 * TODO: param_1 offsets 0x1bc, 0x1d0, 0x1d4, 0x1d8, 0x20a don't fully match known structs
 */
void __fastcall FUN_004459f0(void *param_1)
{
  UIWidget *widget_44;

  FUN_004048d0(param_1);
  FUN_0040b1e0(*(void **)&((GameBoard *)param_1)->players[3].color,  /* GameBoard +0x20A: ptr in players overlay */
               *(int *)(&DAT_00480718 + *(int *)&((GameBoard *)param_1)->board_slots[0] * 8));
  FUN_0040d840(DAT_004897c0,9);
  widget_44 = *(void **)&((UIWidget *)DAT_004897c0)->field_44; /* TODO: unknown struct for DAT_004897c0, offset 0x44 */
  FUN_0041dbb0(widget_44);
  FUN_0041ba40(widget_44,0,1,0);
  FUN_0041dbb0((void *)(intptr_t)((GameBoard *)param_1)->board_slot_count);
  FUN_0041dd40(((UIWidget *)DAT_004897c0)->sub_widgets_a[1]); /* TODO: unknown struct for DAT_004897c0, offset 0x4a */
  ((UIWidget *)((UIWidget *)DAT_004897c0)->sub_widgets_a[1])->type_or_mode = 3; /* TODO: unknown struct for DAT_004897c0, offset 0x4a; UIWidget->type_or_mode +0x16 */
  FUN_0042d7d0((int)param_1);
  if (1 < ((GameSession *)DAT_0048345c)->scroll_origin) {
    FUN_0042da60(param_1,0x4df000d,NULL,-1,-1);
  }
  FUN_0042da60(param_1,DAT_00488ef0,(ushort *)((GameBoard *)param_1)->refresh_counter,-1,-1);
  FUN_0042da60(param_1,0x4de000d,NULL,-1,-1);
  FUN_0042d860((int)param_1);
  if ((((GameSession *)DAT_0048345c)->level_mode != '\0') && (((GameBoard *)param_1)->_players0_score != 0)) {    DAT_00480664 = 1;
    FUN_0042dba0(param_1,((GameBoard *)param_1)->_players0_score + 0x32);    DAT_00480664 = 0;
  }
  DAT_00480760 = 0;
}


/* FUN_00445b10 @ 0x00445b10 */

/* NOTE: overlapping globals */

void __thiscall FUN_00445b10(void *this,int param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1;

  _seh_prev = *_fs;
  _handler = (char *)0x00445dc2;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  FUN_00404a80((int)this);
  _seh_state = 0;
  n1 = FUN_0043a6b0(DAT_004838c0, param_1);
  *(int *)((char *)this + 0x1D8) = n1;
  FUN_004048d0(this);
  FUN_0040b1e0(*(void **)((char *)this + 0x20A),
               *(int *)(&DAT_00480718 + *(int *)((char *)this + 0x1D8) * 8));
  FUN_0040d840(DAT_004897c0, 9);
  FUN_0042d7d0((int)this);
  FUN_0042da60(this, DAT_00488ef0, (ushort *)*(int *)((char *)this + 0x1BC), -1, -1);
  FUN_0042d860((int)this);
  _seh_state = 0xffffffff;
  DAT_00480760 = 0;
  *_fs = _seh_prev;
}


/* FUN_00445dd3 @ 0x00445dd3 */

void FUN_00445dd3(void) { return; }


/* FUN_00445ddb @ 0x00445ddb */

void FUN_00445ddb(void) { return; }


/* FUN_00445ded @ 0x00445ded */

void FUN_00445ded(void) { return; }


/* FUN_00445e10 @ 0x00445e10 */

void __fastcall FUN_00445e10(int param_1)
{
  FUN_00448df0();
  FUN_00404a80(param_1);
}


/* FUN_004461a2 @ 0x004461a2 */

void FUN_004461a2(void)
{
  FUN_00411360();
}


/* FUN_00446280 @ 0x00446280 */

void FUN_00446280(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;

  _seh_prev = *_fs;
  _handler = (char *)0x00446c47;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;
  _seh_state = 0;
  FUN_004113d0((int *)&v10);
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_00446c58 @ 0x00446c58 */

void FUN_00446c58(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x30));
}


/* FUN_004470f2 @ 0x004470f2 */

void FUN_004470f2(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x30));
}


/* FUN_004475fd @ 0x004475fd */

void FUN_004475fd(void)
{
  int _ebp;
  
  FUN_00447a70((int *)(_ebp + -0x60));
}


/* FUN_00447605 @ 0x00447605 */

void FUN_00447605(void) { return; }


/* FUN_004479af @ 0x004479af */

void FUN_004479af(void)
{
  int _ebp;
  
  FUN_00447a70((int *)(_ebp + -0x3c));
}


/* FUN_00447a5b @ 0x00447a5b */

void FUN_00447a5b(void)
{
  int _ebp;
  
  FUN_00413840((int *)(_ebp + -0x54));
}


/* FUN_00447a70 @ 0x00447a70 */

void __fastcall FUN_00447a70(int *param_1)
{
  *param_1 = &PTR_LAB_00474de4;
}


/* FUN_00447b18 @ 0x00447b18 */

void FUN_00447b18(void)
{
  FUN_00411360();
}


/* FUN_00447f00 @ 0x00447f00 */

void FUN_00447f00(void) { return; }


/* FUN_00447f1d @ 0x00447f1d */

void FUN_00447f1d(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x3c));
}


/* FUN_00447fb0 @ 0x00447fb0
 * Struct types: GameWidget (this)
 * Setter for field_118
 */
void __thiscall FUN_00447fb0(GameWidget *this,short param_1)
{
  this->field_118 = param_1;
}


/* FUN_00447fd0 @ 0x00447fd0
 * Struct types: GameWidget (this)
 * Setter for pair_x_1
 */
void __thiscall FUN_00447fd0(GameWidget *this,int param_1)
{
  this->pair_x_1 = param_1;
}


/* FUN_00447ff0 @ 0x00447ff0
 * Struct types: GameWidget (this)
 * Setter for pair_y_1
 */
void __thiscall FUN_00447ff0(GameWidget *this,int param_1)
{
  this->pair_y_1 = param_1;
}


/* FUN_00448010 @ 0x00448010
 * Struct types: GameWidget (this)
 * Setter for pair_x_2
 */
void __thiscall FUN_00448010(GameWidget *this,int param_1)
{
  this->pair_x_2 = param_1;
  FUN_00406ca0(this,(char)param_1,'\0');
}


/* FUN_00448030 @ 0x00448030
 * Struct types: GameWidget (this)
 * Setter for object_ptr
 */
void __thiscall FUN_00448030(GameWidget *this,void *param_1)
{
  this->object_ptr = param_1;
}


/* FUN_00448050 @ 0x00448050
 * Struct types: GameWidget (this)
 * Setter for scrollbar_ref
 */
void __thiscall FUN_00448050(GameWidget *this,int param_1)
{
  this->scrollbar_ref = param_1;
}


/* FUN_004480c9 @ 0x004480c9 */

void FUN_004480c9(void)
{
  FUN_004012a0();
}


/* FUN_0044875d @ 0x0044875d */

void FUN_0044875d(void) { return; }


/* FUN_0044876f @ 0x0044876f */

void FUN_0044876f(void) { return; }


/* FUN_004489e1 @ 0x004489e1 */

void FUN_004489e1(void) { return; }


/* FUN_00448a74 @ 0x00448a74 */

void FUN_00448a74(void) { return; }


/* FUN_00448aad @ 0x00448aad */

void FUN_00448aad(void) { return; }


/* FUN_00448ab5 @ 0x00448ab5 */

void FUN_00448ab5(void) { return; }


/* FUN_00448ac7 @ 0x00448ac7 */

void FUN_00448ac7(void) { return; }


/* FUN_00448ad0 @ 0x00448ad0 */

int * FUN_00448ad0(short param_1,short param_2,int param_3,int param_4,int param_5)
{
  int *result;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x00448ca0;
  *_fs = (int)&_seh_prev;
  result = (int *)FUN_0046ccb0(DAT_00483df4, 7, 0x200);
  if (result != NULL) {
    _seh_state = 0;
    FUN_0044bc50(result);
    _seh_state = 1;
    *(short *)((char *)result + 0x118) = param_1;
    *(int *)((char *)result + 0x11A) = param_3;
    *(int *)((char *)result + 0x11E) = param_4;
    *(int *)((char *)result + 0x122) = param_5;
    *(short *)((char *)result + 0x126) = param_2;
  }
  *_fs = _seh_prev;
  return result;
}


/* FUN_00448cb0 @ 0x00448cb0
 * Struct types: GameWidget (this)
 * TODO: offset 0x124 is pair_x_2(+0x122) + 2, possibly misaligned field access
 */
void __thiscall FUN_00448cb0(GameWidget *this,int param_1)
{
  *(int *)((char *)&this->pair_x_2 + 2) = param_1; /* misaligned 4-byte write spanning pair_x_2(+0x122) and object_ptr(+0x126) */
  FUN_00406ca0(this,(char)param_1,'\0');
}


/* FUN_00448d49 @ 0x00448d49 */

void FUN_00448d49(void)
{
  FUN_004012a0();
}


/* FUN_00448d60 @ 0x00448d60 */

void __cdecl FUN_00448d60(int *param_1,int *param_2)
{
  if (param_1 != NULL && param_2 != NULL) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
  }
}


/* FUN_00448da0 @ 0x00448da0 */

void __cdecl FUN_00448da0(int param_1,int param_2)
{
  if (param_2 != 0) {
    FUN_0045f100(param_1,'\x01');
    return;
  }
  FUN_00448df0();
  DAT_00488e78 = (int *)FUN_0043a6b0(DAT_004838c0,param_1);
  DAT_00488edc = param_1;
  DAT_004807a0 = FUN_00434300(DAT_00488e78);
}


/* FUN_00448df0 @ 0x00448df0 */

void FUN_00448df0(void)
{
  if (DAT_004807a0 != 0) {
    FUN_00434490(DAT_004807a0);
    DAT_004807a0 = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488edc,DAT_00488e78);
  }
  return;
}


/* FUN_00448e50 @ 0x00448e50 */

void __cdecl FUN_00448e50(int param_1,short *param_2)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;
  int v14;
  int v18;

  _seh_prev = *_fs;
  _handler = (char *)0x0044941d;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  v10 = 0;
  v14 = 0;
  v18 = 0;
  if (param_2 != NULL) {
    FUN_0040f380(DAT_004838c0, param_1, param_2);
    if ((short)*param_2 > 0) {
      _seh_state = 0;
      FUN_00413810((CString *)&v10);
      _seh_state = 1;
      FUN_004113d0((int *)&v14);
      _seh_state = 2;
      FUN_0040f520((int *)&v18);
      _seh_state = 0xffffffff;
    }
  }
  *_fs = _seh_prev;
}


/* FUN_0044941e @ 0x0044941e */

void FUN_0044941e(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x7c));
}


/* FUN_0044942e @ 0x0044942e */

void FUN_0044942e(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x30));
}


/* FUN_00449436 @ 0x00449436 */

void FUN_00449436(void)
{
  int _ebp;
  
  FUN_0040f520((int *)(_ebp + -0x60));
}


/* FUN_00449448 @ 0x00449448 */

void FUN_00449448(void)
{
  int _ebp;
  
  FUN_0040f520((int *)(_ebp + -0x48));
}


/* FUN_00449450 @ 0x00449450 */

void __fastcall FUN_00449450(int *param_1)
{
  *param_1 = &PTR_LAB_004752f4;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_00449500 @ 0x00449500 */

int __thiscall FUN_00449500(void *this,int param_1,char param_2)
{
  int n1;
  int n2;
  int *self = (int *)this;

  if (param_2 != '\0') {
    n1 = *(int *)((char *)self + 4);
    if (n1 != 0) {
      n2 = *(int *)n1;
      if (n2 != 0) {
        return ((int (*)(void *, int))((int **)n2)[1])(this, param_1);
      }
    }
  }
  else {
    n1 = *(int *)((char *)self + 4);
    if (n1 != 0) {
      n2 = *(int *)n1;
      if (n2 != 0) {
        return ((int (*)(void *, int))((int **)n2)[2])(this, param_1);
      }
    }
  }
  return 0;
}


/* FUN_004495a0 @ 0x004495a0 */

void __cdecl FUN_004495a0(short *param_1)
{
  short u1;
  char c2;
  short s3;
  
  *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  c2 = DAT_00483ddc;
  s3 = 0;
  do {
    if (c2 != '\0') {
      u1 = param_1[s3 * 3 + 2];
      param_1[s3 * 3 + 2] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
    }
    u1 = param_1[s3 * 3 + 3];
    param_1[s3 * 3 + 3] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
    s3 = s3 + 1;
  } while (s3 < 7);
}


/* FUN_00449610 @ 0x00449610
 * Initializes a small struct (14 bytes) - zeroes all fields
 * TODO: struct type unknown - offsets 0x00-0x0D
 */
int * __fastcall FUN_00449610(int *param_1)
{
  *(short *)(param_1 + 2) = 0;          /* +0x08 */
  *param_1 = 0;                          /* +0x00 */
  ((NoteEvent *)param_1)->note_on = 0;
  ((NoteEvent *)param_1)->velocity = 0;
  *(char *)(param_1 + 3) = 0;           /* +0x0C */
  param_1[1] = 0;                        /* +0x04 */
  ((NoteEvent *)param_1)->flags = 0;
  return param_1;
}


/* FUN_00449630 @ 0x00449630 */

void __fastcall FUN_00449630(int *param_1)
{
  if (*(int *)((char *)param_1 + 4) != 0) {
    *(short *)((char *)param_1 + 8) = *(short *)((char *)param_1 + 8) + 1;
    if (*(short *)((char *)param_1 + 8) >= (short)*(int *)((char *)param_1 + 4)) {
      *(short *)((char *)param_1 + 8) = 0;
    }
  }
}


/* FUN_00449660 @ 0x00449660 */

uint __thiscall FUN_00449660(void *this,char *param_1)
{
  int n1;
  int n2;
  int n3;
  char c1;
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00449789;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return 0;
  }

  n1 = 0;
  c1 = *param_1;
  while (c1 != '\0') {
    if (c1 == '/') {
      n1 = n1 + 1;
    }
    param_1 = param_1 + 1;
    c1 = *param_1;
  }

  if (n1 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  n2 = *(int *)((char *)self + 4);
  if (n2 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  n3 = *(int *)n2;
  if (n3 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  *_fs = _seh_prev;
  return 1;
}


/* FUN_00449790 @ 0x00449790 */

void FUN_00449790(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f00,u1,_arg1);
}


/* FUN_004497e0 @ 0x004497e0 */

void FUN_004497e0(void) { return; }


/* FUN_004497f0 @ 0x004497f0 */

int __fastcall FUN_004497f0(int *param_1)
{
  int n1;
  int n2;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *param_1;
  if (n1 == 0) {
    return 0;
  }
  n2 = *(int *)(n1 + 4);
  if (n2 == 0) {
    return 0;
  }
  return *(int *)n2;
}


/* FUN_00449850 @ 0x00449850 */

/* NOTE: overlapping globals */

void FUN_00449850(void)
{
  _DAT_00488f2a = 0;
  _DAT_00488f28 = 0;
}


/* FUN_00449860 @ 0x00449860 */

void FUN_00449860(void)
{
  _atexit(FUN_00449870);
}


/* FUN_00449870 @ 0x00449870 */

void FUN_00449870(void) { return; }


/* FUN_00449890 @ 0x00449890 */

/* NOTE: overlapping globals */

void FUN_00449890(void)
{
  _DAT_00488f26 = 0;
  _DAT_00488f24 = 0;
}


/* FUN_004498a0 @ 0x004498a0 */

void FUN_004498a0(void)
{
  _atexit(FUN_004498b0);
}


/* FUN_004498b0 @ 0x004498b0 */

void FUN_004498b0(void) { return; }


/* FUN_004498c0 @ 0x004498c0 */

void __thiscall
FUN_004498c0(void *this,int *param_1,void *param_2,int param_3,short *param_4)
{
  int n1;
  int n2;
  short s1;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00449abb;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL || param_2 == NULL) {
    *_fs = _seh_prev;
    return;
  }

  s1 = 0;
  if (param_4 != NULL) {
    s1 = *param_4;
  }

  n1 = *(int *)((int)this + 4);
  if (n1 != 0) {
    n2 = *param_1;
    FUN_0044a080(this, (uint *)param_1, param_2, param_3);
    if (s1 != 0) {
      FUN_0044a3a0(this, s1);
    }
  }

  *_fs = _seh_prev;
  return;
}


/* FUN_00449abc @ 0x00449abc */

void FUN_00449abc(void) { return; }


/* FUN_00449b40 @ 0x00449b40 */

void __thiscall FUN_00449b40(void *this,void *param_1,uint param_2)
{
  int n1;
  int n2;
  int n3;
  uint u1;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00449dda;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return;
  }

  n1 = *(int *)((int)this + 4);
  if (n1 == 0) {
    *_fs = _seh_prev;
    return;
  }

  u1 = param_2;
  n2 = *(int *)n1;
  if (n2 != 0) {
    n3 = *(int *)((int)param_1);
    if (n3 != 0) {
      FUN_0043b810((int *)((int)this + 4));
    }
  }

  *_fs = _seh_prev;
  return;
}


/* FUN_00449ddb @ 0x00449ddb */

void FUN_00449ddb(void) { return; }


/* FUN_00449de3 @ 0x00449de3 */

void FUN_00449de3(void) { return; }


/* FUN_00449df5 @ 0x00449df5 */

void FUN_00449df5(void)
{
  int _ebp;
  
  FUN_0043b810((int *)(_ebp + -100));
}


/* FUN_00449e00 @ 0x00449e00 */

int * __thiscall FUN_00449e00(void *this,int param_1)
{
  int *result;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x00449e99;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  result = (int *)FUN_0046ccb0(DAT_00483df4, 7, 0x100);
  if (result != NULL) {
    _seh_state = 0;
    FUN_00449610(result);
    *(int *)result = param_1;
    *(int *)((char *)result + 4) = 0;
  }
  *_fs = _seh_prev;
  return result;
}


/* FUN_00449ea0 @ 0x00449ea0 */

uint __thiscall FUN_00449ea0(void *this,short param_1,int *param_2,int *param_3)
{
  int n1;
  int n2;
  short s1;
  int *self = (int *)this;

  if (param_2 == NULL || param_3 == NULL) {
    return 0;
  }

  *param_2 = 0;
  *param_3 = 0;
  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return 0;
  }
  n2 = *(int *)n1;
  if (n2 == 0) {
    return 0;
  }
  s1 = param_1;
  if (s1 < 0) {
    return 0;
  }

  *param_2 = *(int *)(n2 + s1 * 4);
  *param_3 = *(int *)(n2 + s1 * 4 + 4);
  return 1;
}


/* FUN_00449fa0 @ 0x00449fa0 */

ushort * __thiscall FUN_00449fa0(void *this,ushort *param_1,int param_2)
{
  int n1;
  int n2;
  int *self = (int *)this;

  if (param_1 == NULL) {
    return NULL;
  }

  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return NULL;
  }
  n2 = *(int *)n1;
  if (n2 == 0) {
    return NULL;
  }

  *param_1 = (ushort)param_2;
  return param_1;
}


/* FUN_0044a080 @ 0x0044a080 */

void __thiscall FUN_0044a080(void *this,uint *param_1,LPCVOID param_2,uint param_3)
{
  int n1;
  int *self = (int *)this;

  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return;
  }
  if (param_1 == NULL || param_2 == NULL) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  memcpy((void *)*param_1, param_2, param_3);
}


/* FUN_0044a130 @ 0x0044a130 */

int * __thiscall FUN_0044a130(void *this,int *param_1,int param_2)
{
  int n1;
  int *self = (int *)this;

  if (param_1 == NULL) {
    return NULL;
  }

  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return NULL;
  }

  *param_1 = param_2;
  param_1[1] = 0;
  return param_1;
}


/* FUN_0044a1a0 @ 0x0044a1a0 */

void __thiscall FUN_0044a1a0(void *this,int *param_1,short *param_2,uint param_3)
{
  int n1;
  int *self = (int *)this;

  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return;
  }
  if (param_1 == NULL || param_2 == NULL) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  memcpy((void *)param_1, (void *)param_2, param_3);
}


/* FUN_0044a230 @ 0x0044a230 */

ushort __fastcall FUN_0044a230(int *param_1)
{
  int n1;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    return 0;
  }
  return (ushort)*(short *)((char *)param_1 + 8);
}


/* FUN_0044a260 @ 0x0044a260 */

ushort __fastcall FUN_0044a260(int *param_1)
{
  int n1;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *param_1;
  if (n1 == 0) {
    return 0;
  }
  return (ushort)*(short *)(n1 + 2);
}


/* FUN_0044a290 @ 0x0044a290 */

char __fastcall FUN_0044a290(int *param_1)
{
  int n1;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    return 0;
  }
  return *(char *)((char *)param_1 + 0x0C);
}


/* FUN_0044a2c0 @ 0x0044a2c0 */

void __fastcall FUN_0044a2c0(int *param_1)
{
  int n1;
  int n2;

  if (param_1 == NULL) {
    return;
  }
  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    return;
  }
  n2 = *(int *)n1;
  if (n2 == 0) {
    return;
  }
  *(short *)((char *)param_1 + 8) = *(short *)((char *)param_1 + 8) + 1;
  if (*(short *)((char *)param_1 + 8) >= (short)n2) {
    *(short *)((char *)param_1 + 8) = 0;
  }
}


/* FUN_0044a330 @ 0x0044a330 */

void __fastcall FUN_0044a330(int *param_1)
{
  int n1;
  int n2;

  if (param_1 == NULL) {
    return;
  }
  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    return;
  }
  n2 = *(int *)n1;
  if (n2 == 0) {
    return;
  }
  *(short *)((char *)param_1 + 8) = *(short *)((char *)param_1 + 8) - 1;
  if (*(short *)((char *)param_1 + 8) < 0) {
    *(short *)((char *)param_1 + 8) = (short)(n2 - 1);
  }
}


/* FUN_0044a3a0 @ 0x0044a3a0
 * TODO: struct type unknown - offset 0x08
 */
void __thiscall FUN_0044a3a0(void *this,short param_1)
{
  ((NoteEvent *)this)->duration = param_1;
  FUN_0044ab30(this);
}


/* FUN_0044a3c0 @ 0x0044a3c0 */

void __thiscall FUN_0044a3c0(void *this,short param_1)
{
  FUN_0044a290(this);
  while (param_1 = param_1 + -1, param_1 != 0) {
    FUN_0044a2c0(this);
  }
  FUN_0044ab30(this);
}


/* FUN_0044a400 @ 0x0044a400 */

int __fastcall FUN_0044a400(int *param_1)
{
  int n1;
  int n2;
  int n3;
  short s1;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *param_1;
  if (n1 == 0) {
    return 0;
  }
  n2 = *(int *)(n1 + 4);
  if (n2 == 0) {
    return 0;
  }
  s1 = *(short *)((char *)param_1 + 8);
  if (s1 < 0) {
    return 0;
  }
  n3 = *(int *)(n2 + s1 * 4);
  return n3;
}


/* FUN_0044a500 @ 0x0044a500 */

uint FUN_0044a500(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;
  int v14;
  int v18;
  int v1c;

  _seh_prev = *_fs;
  _handler = (char *)0x0044a74a;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  v10 = 0;
  v14 = 0;
  v18 = 0;
  v1c = 0;

  _seh_state = 0;
  FUN_00460010((int *)&v10);
  _seh_state = 1;
  FUN_00460010((int *)&v14);
  _seh_state = 0xffffffff;

  *_fs = _seh_prev;
  return 0;
}


/* FUN_0044a74b @ 0x0044a74b */

void FUN_0044a74b(void)
{
  int _ebp;
  
  FUN_00460010((int *)(_ebp + -0x98));
}


/* FUN_0044a760 @ 0x0044a760 */

void FUN_0044a760(void)
{
  int _ebp;
  
  FUN_00460010((int *)(_ebp + -0x58));
}


/* FUN_0044a770 @ 0x0044a770 */

short __fastcall FUN_0044a770(int *param_1)
{
  if (*param_1 != 0) {
    return (short)param_1[2];
  }
  return 0;
}


/* FUN_0044a780 @ 0x0044a780 */

/* NOTE: overlapping globals */

void * __fastcall FUN_0044a780(int *param_1)
{
  int n1;
  int n2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;

  _seh_prev = *_fs;
  _handler = (char *)0x0044aa09;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return NULL;
  }

  n1 = *param_1;
  if (n1 == 0) {
    *_fs = _seh_prev;
    return NULL;
  }

  _seh_state = 0;
  v10 = 0;
  FUN_004524e0((int)&v10);
  _seh_state = 0xffffffff;

  n2 = *(int *)(n1 + 4);
  *_fs = _seh_prev;
  return (void *)n2;
}


/* FUN_0044aa10 @ 0x0044aa10 */

void FUN_0044aa10(void)
{
  int _ebp;
  
  FUN_004524e0(_ebp + -0x120);
}


/* FUN_0044aa66 @ 0x0044aa66 */

void FUN_0044aa66(void)
{
  FUN_00413810((int *)&DAT_00488f08);
}


/* FUN_0044aa70 @ 0x0044aa70 */

short __fastcall FUN_0044aa70(int *param_1)
{
  int n1;
  int n2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;

  _seh_prev = *_fs;
  _handler = (char *)0x0044ab15;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return 0;
  }

  n1 = *param_1;
  if (n1 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  _seh_state = 0;
  v10 = 0;
  FUN_004524e0((int)&v10);
  _seh_state = 0xffffffff;

  *_fs = _seh_prev;
  return (short)param_1[2];
}


/* FUN_0044ab16 @ 0x0044ab16 */

void FUN_0044ab16(void)
{
  int _ebp;
  
  FUN_004524e0(_ebp + -0x120);
}


/* FUN_0044ab30 @ 0x0044ab30 */

uint __fastcall FUN_0044ab30(int *param_1)
{
  int n1;

  if (param_1 == NULL) {
    return 0;
  }
  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    return 0;
  }
  return (uint)*(short *)((char *)param_1 + 8);
}


/* FUN_0044ab70 @ 0x0044ab70 */

uint __thiscall
FUN_0044ab70(void *this,ushort *param_1,int *param_2,int *param_3,ushort param_4)
{
  int *self = (int *)this;
  int n1;

  if (param_1 == NULL || param_2 == NULL || param_3 == NULL) {
    return 0;
  }
  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    return 0;
  }
  *param_1 = param_4;
  *param_2 = 0;
  *param_3 = 0;
  return 1;
}


/* FUN_0044ac00 @ 0x0044ac00 */

uint __thiscall FUN_0044ac00(void *this,LPCVOID param_1,void *param_2,short *param_3)
{
  int n1;
  int n2;
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x0044adc9;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  if (param_1 == NULL || param_2 == NULL) {
    *_fs = _seh_prev;
    return 0;
  }

  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    *_fs = _seh_prev;
    return 0;
  }
  n2 = *(int *)n1;
  if (n2 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  if (param_3 != NULL) {
    *param_3 = 0;
  }

  *_fs = _seh_prev;
  return 1;
}


/* FUN_0044add0 @ 0x0044add0 */

int __thiscall FUN_0044add0(void *this,int param_1,char param_2)
{
  int n1;
  int n2;
  int *self = (int *)this;

  if (param_2 != '\0') {
    n1 = *(int *)((char *)self + 4);
    if (n1 != 0) {
      n2 = *(int *)n1;
      if (n2 != 0) {
        return ((int (*)(void *, int))((int **)n2)[1])(this, param_1);
      }
    }
  }
  else {
    n1 = *(int *)((char *)self + 4);
    if (n1 != 0) {
      n2 = *(int *)n1;
      if (n2 != 0) {
        return ((int (*)(void *, int))((int **)n2)[2])(this, param_1);
      }
    }
  }
  return 0;
}


/* FUN_0044ae80 @ 0x0044ae80 */

void FUN_0044ae80(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f30,u1,_arg1);
}


/* FUN_0044aed0 @ 0x0044aed0 */

void FUN_0044aed0(void) { return; }


/* FUN_0044aef0 @ 0x0044aef0 */

/* NOTE: overlapping globals */

void FUN_0044aef0(void)
{
  _DAT_00488f3e = 0;
  _DAT_00488f3c = 0;
}


/* FUN_0044af00 @ 0x0044af00 */

void FUN_0044af00(void)
{
  _atexit(FUN_0044af10);
}


/* FUN_0044af10 @ 0x0044af10 */

void FUN_0044af10(void) { return; }


/* FUN_0044af30 @ 0x0044af30 */

/* NOTE: overlapping globals */

void FUN_0044af30(void)
{
  _DAT_00488f3a = 0;
  _DAT_00488f38 = 0;
}


/* FUN_0044af40 @ 0x0044af40 */

void FUN_0044af40(void)
{
  _atexit(FUN_0044af50);
}


/* FUN_0044af50 @ 0x0044af50 */

void FUN_0044af50(void) { return; }


/* FUN_0044af70 @ 0x0044af70 */

void FUN_0044af70(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f40,u1,_arg1);
}


/* FUN_0044afb0 @ 0x0044afb0 */

void FUN_0044afb0(void)
{
  _atexit(FUN_0044afc0);
}


/* FUN_0044afc0 @ 0x0044afc0 */

void FUN_0044afc0(void) { return; }


/* FUN_0044afe0 @ 0x0044afe0 */

/* NOTE: overlapping globals */

void FUN_0044afe0(void)
{
  _DAT_00488f4e = 0;
  _DAT_00488f4c = 0;
}


/* FUN_0044aff0 @ 0x0044aff0 */

void FUN_0044aff0(void)
{
  _atexit(FUN_0044b000);
}


/* FUN_0044b000 @ 0x0044b000 */

void FUN_0044b000(void) { return; }


/* FUN_0044b020 @ 0x0044b020 */

/* NOTE: overlapping globals */

void FUN_0044b020(void)
{
  _DAT_00488f4a = 0;
  _DAT_00488f48 = 0;
}


/* FUN_0044b030 @ 0x0044b030 */

void FUN_0044b030(void)
{
  _atexit(FUN_0044b040);
}


/* FUN_0044b040 @ 0x0044b040 */

void FUN_0044b040(void) { return; }


/* FUN_0044b050 @ 0x0044b050 */

int * __fastcall FUN_0044b050(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0044b09f;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  *param_1 = &PTR_FUN_00475d98;
  param_1[0x66] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0044b119 @ 0x0044b119 */

void FUN_0044b119(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_0044b1c0 @ 0x0044b1c0 */

void __fastcall FUN_0044b1c0(int param_1)
{
  int n1;

  if (param_1 == 0) {
    return;
  }
  n1 = *(int *)(param_1 + 4);
  if (n1 == 0) {
    return;
  }
  FUN_0041d780((void *)param_1, n1);
  FUN_0041dbb0((void *)param_1);
  FUN_0041dd40((void *)param_1);
}


/* FUN_0044b2e0 @ 0x0044b2e0 */

void FUN_0044b2e0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f50,u1,_arg1);
}


/* FUN_0044b330 @ 0x0044b330 */

void FUN_0044b330(void) { return; }


/* FUN_0044b350 @ 0x0044b350 */

/* NOTE: overlapping globals */

void FUN_0044b350(void)
{
  _DAT_00488f5e = 0;
  _DAT_00488f5c = 0;
}


/* FUN_0044b360 @ 0x0044b360 */

void FUN_0044b360(void)
{
  _atexit(FUN_0044b370);
}


/* FUN_0044b370 @ 0x0044b370 */

void FUN_0044b370(void) { return; }


/* FUN_0044b390 @ 0x0044b390 */

/* NOTE: overlapping globals */

void FUN_0044b390(void)
{
  _DAT_00488f5a = 0;
  _DAT_00488f58 = 0;
}


/* FUN_0044b3a0 @ 0x0044b3a0 */

void FUN_0044b3a0(void)
{
  _atexit(FUN_0044b3b0);
}


/* FUN_0044b3b0 @ 0x0044b3b0 */

void FUN_0044b3b0(void) { return; }


/* FUN_0044b3d0 @ 0x0044b3d0 */

void FUN_0044b3d0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f60,u1,_arg1);
}


/* FUN_0044b410 @ 0x0044b410 */

void FUN_0044b410(void)
{
  _atexit(FUN_0044b420);
}


/* FUN_0044b420 @ 0x0044b420 */

void FUN_0044b420(void) { return; }


/* FUN_0044b4b0 @ 0x0044b4b0 */

/* NOTE: overlapping globals */

void FUN_0044b4b0(void)
{
  _DAT_00488f8a = 0;
  _DAT_00488f88 = 0;
}


/* FUN_0044b4c0 @ 0x0044b4c0 */

void FUN_0044b4c0(void)
{
  _atexit(FUN_0044b4d0);
}


/* FUN_0044b4d0 @ 0x0044b4d0 */

void FUN_0044b4d0(void) { return; }


/* FUN_0044b5f0 @ 0x0044b5f0 */

void FUN_0044b5f0(void)
{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(s_MMATH_004804d8,s_GAMELEVEL_0048284c,-1,s_MMATH_INI_004804cc);
  if ((int)UVar1 < 1) {
                    /* NOTE: Could not recover jumptable at 0x0044b60b. Too many branches */
                    /* NOTE: Treating indirect jump as call */
    rand();
    return;
  }
  return;
}


/* FUN_0044b630 @ 0x0044b630 */

/* NOTE: overlapping globals */

void FUN_0044b630(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = (char *)0x0044b669;
  *_fs = (int)&_seh_prev;
  _seh_state = 0;
  _DAT_00488f68 = (int)&PTR_LAB_00475f64;
  DAT_00488f6c = 0;
  DAT_00488f70 = 0;
  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_0044b670 @ 0x0044b670 */

void FUN_0044b670(void)
{
  _atexit(FUN_0044b680);
}


/* FUN_0044b680 @ 0x0044b680 */

/* NOTE: overlapping globals */

void FUN_0044b680(void)
{
  if ((DAT_00488f84 & 1) == 0) {
    _DAT_00488f68 = &PTR_LAB_00475f64;
    DAT_00488f84 = DAT_00488f84 | 1;
    if (DAT_00488f6c != NULL) {
      FUN_0046d110(DAT_00488f6c);
    }
    DAT_00488f6c = NULL;
    DAT_00488f70 = 0;
  }
  return;
}


/* FUN_0044b6c0 @ 0x0044b6c0 */

int FUN_0044b6c0(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;
  int v14;

  _seh_prev = *_fs;
  _handler = (char *)0x0044bab0;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  v10 = 0;
  v14 = 0;
  _seh_state = 0;
  FUN_004113d0((int *)&v10);
  _seh_state = 0xffffffff;

  *_fs = _seh_prev;
  return 0;
}


/* FUN_0044bab1 @ 0x0044bab1 */

void FUN_0044bab1(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x48));
}


/* FUN_0044bb00 @ 0x0044bb00 */

/* NOTE: overlapping globals */

void FUN_0044bb00(void)
{
  _DAT_00488f82 = 0;
  _DAT_00488f80 = 0;
}


/* FUN_0044bb10 @ 0x0044bb10 */

void FUN_0044bb10(void)
{
  _atexit(FUN_0044bb20);
}


/* FUN_0044bb20 @ 0x0044bb20 */

void FUN_0044bb20(void) { return; }


/* FUN_0044bb30 @ 0x0044bb30 */

/* NOTE: Removing unreachable block (ram,0x0044bb9c) */

int FUN_0044bb30(void)
{
  int n1;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;

  _seh_prev = *_fs;
  _handler = (char *)0x0044bbf5;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  v10 = 0;
  n1 = 0;
  _seh_state = 0;
  FUN_004113d0((int *)&v10);
  _seh_state = 0xffffffff;

  *_fs = _seh_prev;
  return n1;
}


/* FUN_0044bbf6 @ 0x0044bbf6 */

void FUN_0044bbf6(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(*(int *)(_ebp + -0x14) + 4));
}


/* FUN_0044bc10 @ 0x0044bc10 */

int __cdecl FUN_0044bc10(int param_1)
{
  int n1;

  if (param_1 == 0) {
    return 0;
  }
  n1 = FUN_0043a6b0(DAT_004838c0, param_1);
  if (n1 == 0) {
    return 0;
  }
  return n1;
}


/* FUN_0044bc50 @ 0x0044bc50 */

int * __fastcall FUN_0044bc50(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x0044bef3;
  *_fs = (int)&_seh_prev;
  FUN_004052b0((UIWidget *)param_1);
  *(void **)param_1 = &PTR_FUN_00475828;
  _seh_state = 0;
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041da90((UIWidget *)param_1, 1);
  _seh_state = 1;
  *(short *)((char *)param_1 + 0x118) = 0;
  *(int *)((char *)param_1 + 0x11A) = 0;
  *(int *)((char *)param_1 + 0x11E) = 0;
  *(int *)((char *)param_1 + 0x122) = 0;
  *(short *)((char *)param_1 + 0x126) = 0;
  *(void **)((char *)param_1 + 0x12A) = 0;
  *(int *)((char *)param_1 + 0x12E) = 0;
  *(int *)((char *)param_1 + 0x130) = 0;
  *(void **)((char *)param_1 + 0x136) = 0;
  *(void **)((char *)param_1 + 0x13A) = 0;
  *(void **)((char *)param_1 + 0x13E) = 0;
  *(void **)((char *)param_1 + 0x142) = 0;
  *(void **)((char *)param_1 + 0x146) = 0;
  *(void **)((char *)param_1 + 0x14A) = 0;
  *(void **)((char *)param_1 + 0x14E) = 0;
  *(void **)((char *)param_1 + 0x152) = 0;
  FUN_004113d0((int *)((char *)param_1 + 0x156));
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0044bef4 @ 0x0044bef4 */

void FUN_0044bef4(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_0044bf50 @ 0x0044bf50 */

int FUN_0044bf50(int *param_1,char param_2)
{
  char c1;
  short s2;
  DWORD _Seed;
  int n3;
  LPCVOID pv4;
  uint *pu5;
  char *pc6;
  int n7;
  char *pc8;
  uint u9;
  uint u10;
  int n11;
  int *pu12;
  void *pv13;
  int *pu14;
  int *pn15;
  int *_fs;
  ushort v1ec;
  short v1ea [127];
  char vec [32];
  void **vcc;
  int *vc8;
  int vc4;
  int vc0;
  int vbc;
  char vb8;
  int vb6;
  void **vb0;
  int *vac;
  int va8;
  int va4;
  int va0;
  char v9c;
  int v9a;
  void **v94;
  int *v90;
  int _seh_statec;
  int _seh_state8;
  int _seh_state4;
  char _seh_state0;
  int v7e;
  void **v78;
  int *v74;
  int v70;
  int v6c;
  int v68;
  char v64;
  int v62;
  int v5c;
  int v58;
  int v54;
  int *v50;
  int v4c;
  int *v48;
  int v44;
  void **v40;
  int *v3c;
  int v38;
  int v34;
  int v30;
  char v2c;
  void *v2a;
  short *v24;
  int v20;
  int v1c;
  char *v18;
  short v14;
  ushort v12;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0044c7cd;
  *_fs = &_seh_prev;
  u10 = 0;
  v14 = 0;
  v4c = 0;
  v12 = 1;
  _Seed = GetTickCount();
  srand(_Seed);
  v40 = &PTR_LAB_00472e04;
  ((MusicTrack *)v18)->playback_param = 0;
  v3c = NULL;
  v38 = 0;
  v34 = 0;
  v2a = NULL;
  v30 = 0xffffffff;
  v2c = 0;
  FUN_004173e0(&v40,(char *)&DAT_0047ef44,0xffffffff);
  v40 = &PTR_LAB_00472e00;
  _seh_state = 1;
  if ((v3c != NULL) && (pc8 = (char *)*v3c, pc8 != NULL)) {
    c1 = *pc8;
    while (c1 != '\0') {
      pc8 = pc8 + 1;
      u10 = u10 + 1;
      c1 = *pc8;
    }
  }
  if (((MusicTrack *)v18)->capacity + -1 < (int)u10) {
    n3 = FUN_00417570(v18 + 4);
    n11 = u10 + 1;
    if ((int)(u10 + 1) <= n3 + 1) {
      n11 = n3 + 1;
    }
    n11 = (((int)(n11 + (n11 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (*(uint **)(v18 + 8) == NULL) {
      pv4 = (LPCVOID)((MusicTrack *)v18)->allocator;
      if (((MusicTrack *)v18)->allocator == NULL) {
        pv4 = DAT_00483df4;
      }
      pu5 = FUN_0046ccb0(pv4,7,n11);
    }
    else {
      pu5 = FUN_0046cdc0(*(uint **)(v18 + 8),n11,7);
    }
    *(uint **)(v18 + 8) = pu5;
    ((MusicTrack *)v18)->capacity = n11;
  }
  pu12 = (int *)*v3c;
  pu14 = (int *)**(int **)(v18 + 8);
  for (u9 = u10 >> 2; u9 != 0; u9 = u9 - 1) {
    *pu14 = *pu12;
    pu12 = pu12 + 1;
    pu14 = pu14 + 1;
  }
  for (u9 = u10 & 3; u9 != 0; u9 = u9 - 1) {
    *(char *)pu14 = *(char *)pu12;
    pu12 = (int *)((char *)pu12 + 1);
    pu14 = (int *)((char *)pu14 + 1);
  }
  _seh_state = 0xffffffff;
  *(char *)(**(int **)(v18 + 8) + u10) = 0;
  FUN_0044c7d7();
  FUN_0040f380(DAT_004838c0,*param_1,&v1ec);
  v44 = 1;
  if (0 < (short)v1ec) {
    v24 = v1ea;
    v50 = (int *)(v18 + 0x48);
    v20 = 0;
    do {
      s2 = *v24;
      if (s2 == 0) {
        v1c = 0;
        v2a = (void *)(v18 + 4);
        n11 = FUN_00417570((int)v2a);
        FUN_004176a0(v2a,n11 + 1);
        pc8 = NULL;
        if (*(int **)(v18 + 8) != NULL) {
          pc8 = (char *)**(int **)(v18 + 8);
          c1 = *pc8;
          while (c1 != '\0') {
            pc8 = pc8 + 1;
            c1 = *pc8;
          }
        }
        *pc8 = '\v';
        pc8[1] = '\0';
        n11 = *v50;
        while (n11 != 0) {
          if ((param_2 == '\0') &&
             (n11 = ((MusicTrack *)v18)->notes[v20 + v1c], n11 < 0)) {
            _itoa(-n11,vec,10);
            if (v12 == 0) {
              vb0 = &PTR_LAB_00472e04;
              vac = NULL;
              va8 = 0;
              va4 = 0;
              v9a = 0;
              va0 = 0xffffffff;
              v9c = 0;
              FUN_004173e0(&vb0,&DAT_0048289c,0xffffffff);
              _seh_state = 2;
              n11 = FUN_00417570((int)&vb0);
              n3 = FUN_00417570((int)v2a);
              if (n11 != 0) {
                pc8 = NULL;
                FUN_004176a0(v2a,n3 + n11);
                if (*(int **)(v18 + 8) != NULL) {
                  pc8 = (char *)**(int **)(v18 + 8);
                  c1 = *pc8;
                  while (c1 != '\0') {
                    pc8 = pc8 + 1;
                    c1 = *pc8;
                  }
                }
                pc6 = (char *)*vac;
                for (u10 = n11 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
                  *(int *)pc8 = *(int *)pc6;
                  pc6 = pc6 + 4;
                  pc8 = pc8 + 4;
                }
                for (u10 = n11 + 1U & 3; u10 != 0; u10 = u10 - 1) {
                  *pc8 = *pc6;
                  pc6 = pc6 + 1;
                  pc8 = pc8 + 1;
                }
              }
              _seh_state = 0xffffffff;
              FUN_0044c7a7();
            }
            else {
              v12 = (ushort)(v12 == 0);
            }
            vcc = &PTR_LAB_00472e04;
            vc8 = NULL;
            vc4 = 0;
            vc0 = 0;
            vb6 = 0;
            vbc = 0xffffffff;
            vb8 = 0;
            FUN_004173e0(&vcc,vec,0xffffffff);
            _seh_state = 3;
            n11 = FUN_00417570((int)&vcc);
            n3 = FUN_00417570((int)v2a);
            if (n11 != 0) {
              pc8 = NULL;
              FUN_004176a0(v2a,n3 + n11);
              if (*(int **)(v18 + 8) != NULL) {
                pc8 = (char *)**(int **)(v18 + 8);
                c1 = *pc8;
                while (c1 != '\0') {
                  pc8 = pc8 + 1;
                  c1 = *pc8;
                }
              }
              pc6 = (char *)*vc8;
              for (u10 = n11 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
                *(int *)pc8 = *(int *)pc6;
                pc6 = pc6 + 4;
                pc8 = pc8 + 4;
              }
              for (u10 = n11 + 1U & 3; u10 != 0; u10 = u10 - 1) {
                *pc8 = *pc6;
                pc6 = pc6 + 1;
                pc8 = pc8 + 1;
              }
            }
            _seh_state = 0xffffffff;
            FUN_0044c79c();
            v1c = v1c + 1;
            for (pn15 = (int *)(v18 + 0x48 + (v20 + v1c) * 4);
                (((n11 = *pn15, 0x659 < n11 && (n11 < 0x679)) ||
                 ((0x7fa < n11 && (n11 < 0x80d)))) || ((0x56a < n11 && (n11 < 0x571))));
                pn15 = pn15 + 1) {
              v5c = n11;
              FUN_00417720((void *)((MusicTrack *)v18)->render_data,&v5c,((MusicTrack *)v18)->playback_param);
              v1c = v1c + 1;
            }
          }
          else {
            v48 = (int *)(v18 + 0x48 + (v20 + v1c) * 4);
            n11 = *v48;
            if (0 < n11) {
              if (v12 != 0) {
                v12 = (ushort)(v12 == 0);
              }
              if (n11 == 0x51a) {
L_0044c4d2:
                v12 = 1;
              }
              else if ((((n11 == 0x682) || (n11 == 0x885)) || (n11 == 0x67f)) ||
                      ((0x6c0 < n11 && (n11 < 0x6cf)))) {
                if ((n11 == 0x51a) || ((n11 == 0x682 || (n11 == 0x885))))
                goto L_0044c4d2;
              }
              else {
                v94 = &PTR_LAB_00472e04;
                v90 = NULL;
                _seh_statec = 0;
                _seh_state8 = 0;
                v7e = 0;
                _seh_state4 = 0xffffffff;
                _seh_state0 = 0;
                FUN_004173e0(&v94,&DAT_0048289c,0xffffffff);
                _seh_state = 4;
                n11 = FUN_00417570((int)&v94);
                n3 = FUN_00417570((int)v2a);
                if (n11 != 0) {
                  FUN_004176a0(v2a,n3 + n11);
                  pc6 = FUN_0044da30((int)v2a);
                  pc8 = (char *)*v90;
                  for (u10 = n11 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
                    *(int *)pc6 = *(int *)pc8;
                    pc8 = pc8 + 4;
                    pc6 = pc6 + 4;
                  }
                  for (u10 = n11 + 1U & 3; u10 != 0; u10 = u10 - 1) {
                    *pc6 = *pc8;
                    pc8 = pc8 + 1;
                    pc6 = pc6 + 1;
                  }
                }
                _seh_state = 0xffffffff;
                FUN_0044c7b2();
              }
              n11 = FUN_0044bc10(*v48);
              n3 = FUN_00417570(n11);
              n7 = FUN_00417570((int)v2a);
              if (n3 != 0) {
                FUN_004176a0(v2a,n7 + n3);
                pc6 = FUN_0044da30((int)v2a);
                pc8 = (char *)**(int **)(n11 + 4);
                for (u10 = n3 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
                  *(int *)pc6 = *(int *)pc8;
                  pc8 = pc8 + 4;
                  pc6 = pc6 + 4;
                }
                for (u10 = n3 + 1U & 3; u10 != 0; u10 = u10 - 1) {
                  *pc6 = *pc8;
                  pc8 = pc8 + 1;
                  pc6 = pc6 + 1;
                }
              }
              v58 = *v48;
              FUN_00417720((void *)((MusicTrack *)v18)->render_data,&v58,((MusicTrack *)v18)->playback_param);
            }
            v1c = v1c + 1;
          }
          n11 = ((MusicTrack *)v18)->notes[v20 + v1c];
        }
        if ((short)v1ec == v44) {
          n11 = FUN_00417570((int)v2a);
          FUN_004176a0(v2a,n11 + 1);
          pc8 = FUN_0044da30((int)v2a);
          v14 = 1;
          *pc8 = '\x1e';
          pc8[1] = '\0';
        }
        n11 = FUN_00417570((int)v2a);
        FUN_004176a0(v2a,n11 + 1);
        pc8 = NULL;
        if (*(int **)(v18 + 8) != NULL) {
          pc8 = (char *)**(int **)(v18 + 8);
          c1 = *pc8;
          while (c1 != '\0') {
            pc8 = pc8 + 1;
            c1 = *pc8;
          }
        }
        *pc8 = '\f';
        v4c = v4c + 1;
        pc8[1] = '\0';
        v20 = v20 + 0x10;
        v50 = v50 + 0x10;
      }
      else {
        if (v12 != 0) {
          v12 = (ushort)(v12 == 0);
        }
        if ((((s2 != 0x51a) && (s2 != 0x682)) && (s2 != 0x885)) &&
           ((s2 != 0x67f && (s2 != 0x795)))) {
          v78 = &PTR_LAB_00472e04;
          v74 = NULL;
          v70 = 0;
          v6c = 0;
          v62 = 0;
          v68 = 0xffffffff;
          v64 = 0;
          FUN_004173e0(&v78,&DAT_0048289c,0xffffffff);
          _seh_state = 5;
          n11 = FUN_00417570((int)&v78);
          pv13 = (void *)(v18 + 4);
          n3 = FUN_00417570((int)pv13);
          if (n11 != 0) {
            FUN_004176a0(pv13,n3 + n11);
            pc6 = FUN_0044da30((int)pv13);
            pc8 = (char *)*v74;
            for (u10 = n11 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
              *(int *)pc6 = *(int *)pc8;
              pc8 = pc8 + 4;
              pc6 = pc6 + 4;
            }
            for (u10 = n11 + 1U & 3; u10 != 0; u10 = u10 - 1) {
              *pc6 = *pc8;
              pc8 = pc8 + 1;
              pc6 = pc6 + 1;
            }
          }
          _seh_state = 0xffffffff;
          FUN_0044c7bd();
        }
        n11 = FUN_0044bc10((int)*v24);
        n3 = FUN_00417570(n11);
        pv13 = (void *)(v18 + 4);
        n7 = FUN_00417570((int)pv13);
        if (n3 != 0) {
          FUN_004176a0(pv13,n7 + n3);
          pc6 = FUN_0044da30((int)pv13);
          pc8 = (char *)**(int **)(n11 + 4);
          for (u10 = n3 + 1U >> 2; u10 != 0; u10 = u10 - 1) {
            *(int *)pc6 = *(int *)pc8;
            pc8 = pc8 + 4;
            pc6 = pc6 + 4;
          }
          for (u10 = n3 + 1U & 3; u10 != 0; u10 = u10 - 1) {
            *pc6 = *pc8;
            pc8 = pc8 + 1;
            pc6 = pc6 + 1;
          }
        }
        v54 = (int)*v24;
        FUN_00417720((void *)((MusicTrack *)v18)->render_data,&v54,((MusicTrack *)v18)->playback_param);
      }
      v24 = v24 + 1;
      v44 = v44 + 1;
    } while (v44 <= (short)v1ec);
  }
  if (v14 == 0) {
    pv13 = (void *)(v18 + 4);
    n11 = FUN_00417570((int)pv13);
    FUN_004176a0(pv13,n11 + 1);
    pc8 = FUN_0044da30((int)pv13);
    *pc8 = '\x1e';
    pc8[1] = '\0';
  }
  *_fs = _seh_prev;
  return v4c;
}


/* FUN_0044c79c @ 0x0044c79c */

void FUN_0044c79c(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -200));
}


/* FUN_0044c7a7 @ 0x0044c7a7 */

void FUN_0044c7a7(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0xac));
}


/* FUN_0044c7b2 @ 0x0044c7b2 */

void FUN_0044c7b2(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x90));
}


/* FUN_0044c7bd @ 0x0044c7bd */

void FUN_0044c7bd(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x74));
}


/* FUN_0044c7d7 @ 0x0044c7d7 */

void FUN_0044c7d7(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x3c));
}


/* FUN_0044c7e0 @ 0x0044c7e0
 * Struct types: SoundPlayer (this)
 * Writes to sequence_data ring buffer using write_index
 */
void __thiscall FUN_0044c7e0(SoundPlayer *this,int param_1,int param_2,char param_3)
{
  this->sequence_data[this->write_index * 0x10 + param_2] = param_1;
  this->sequence_data[this->write_index * 0x10 + param_2 + 1] = 0;
  if (param_3 != '\0') {
    this->write_index = this->write_index + 1;
  }
  return;
}


/* FUN_0044c820 @ 0x0044c820 */

int __thiscall FUN_0044c820(void *this,uint param_1,int param_2,char param_3)
{
  SoundPlayer *player = (SoundPlayer *)this;
  int idx;
  int n1;

  idx = player->write_index;
  if (idx < 0 || idx >= 6) {
    return 0;
  }
  n1 = (int)param_1;
  player->sequence_data[idx * 0x10 + param_2] = n1;
  player->sequence_data[idx * 0x10 + param_2 + 1] = 0;
  if (param_3 != '\0') {
    player->write_index = player->write_index + 1;
    if (player->write_index >= 6) {
      player->write_index = 0;
    }
  }
  return 1;
}


/* FUN_0044c990 @ 0x0044c990 */

int __thiscall FUN_0044c990(void *this,uint param_1,int param_2,char param_3)
{
  SoundPlayer *player = (SoundPlayer *)this;
  int idx;
  int n1;

  idx = player->write_index;
  if (idx < 0 || idx >= 6) {
    return 0;
  }
  n1 = (int)param_1;
  player->sequence_data[idx * 0x10 + param_2] = n1;
  player->sequence_data[idx * 0x10 + param_2 + 1] = 1;
  if (param_3 != '\0') {
    player->write_index = player->write_index + 1;
    if (player->write_index >= 6) {
      player->write_index = 0;
    }
  }
  return 1;
}


/* FUN_0044cb00 @ 0x0044cb00 */

void __thiscall FUN_0044cb00(void *this,int param_1,int param_2,char param_3)
{
  SoundPlayer *player = (SoundPlayer *)this;

  player->sequence_data[player->write_index * 0x10 + param_2] = param_1;
  player->sequence_data[player->write_index * 0x10 + param_2 + 1] = 0;
  player->sequence_data[player->write_index * 0x10 + param_2 + 2] = 0;
  if (param_3 != '\0') {
    player->write_index = player->write_index + 1;
    if (player->write_index >= 6) {
      player->write_index = 0;
    }
  }
  return;
}


/* FUN_0044cb70 @ 0x0044cb70 */

int __thiscall
FUN_0044cb70(void *this,uint param_1,uint param_2,char param_3,int param_4,char param_5)
{
  SoundPlayer *player = (SoundPlayer *)this;
  int n1;
  int n2;
  int n3;
  int result;

  result = 0;
  if (player == NULL) {
    return 0;
  }

  n1 = player->write_index;
  if (n1 < 0 || n1 >= 6) {
    return 0;
  }

  n2 = player->instrument_id;
  n3 = player->note_value;

  player->sequence_data[n1 * 0x10] = (int)param_1;
  player->sequence_data[n1 * 0x10 + 1] = (int)param_2;
  player->sequence_data[n1 * 0x10 + 2] = param_4;
  player->sequence_data[n1 * 0x10 + 3] = (int)param_3;

  if (param_5 != '\0') {
    player->write_index = player->write_index + 1;
    if (player->write_index >= 6) {
      player->write_index = 0;
    }
  }

  result = 1;
  return result;
}


/* FUN_0044d170 @ 0x0044d170 */

int __thiscall FUN_0044d170(void *this,int param_1,int param_2,int param_3,char param_4)
{
  SoundPlayer *player = (SoundPlayer *)this;

  if (player == NULL) {
    return 0;
  }
  player->sequence_data[player->write_index * 0x10 + param_3] = param_1;
  player->sequence_data[player->write_index * 0x10 + param_3 + 1] = param_2;
  if (param_4 != '\0') {
    player->write_index = player->write_index + 1;
    if (player->write_index >= 6) {
      player->write_index = 0;
    }
  }
  return 1;
}


/* FUN_0044d200 @ 0x0044d200 */

int __thiscall
FUN_0044d200(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)
{
  SoundPlayer *player = (SoundPlayer *)this;

  if (player == NULL) {
    return 0;
  }
  FUN_0044c7e0(player, param_1, 0, '\0');
  FUN_0044c7e0(player, param_2, 1, '\0');
  FUN_0044c7e0(player, param_3, 2, '\0');
  FUN_0044c7e0(player, param_4, 3, '\0');
  FUN_0044c7e0(player, param_5, 4, '\0');
  FUN_0044c7e0(player, param_6, 5, '\0');
  FUN_0044c7e0(player, param_7, 6, '\0');
  FUN_0044c7e0(player, param_8, 7, '\x01');
  return 1;
}


/* FUN_0044d2a0 @ 0x0044d2a0 */

int __thiscall
FUN_0044d2a0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)
{
  SoundPlayer *player = (SoundPlayer *)this;
  int idx;

  if (player == NULL) {
    return 0;
  }
  idx = player->write_index;
  if (idx < 0 || idx >= 6) {
    return 0;
  }
  player->sequence_data[idx * 0x10 + 0] = param_1;
  player->sequence_data[idx * 0x10 + 1] = param_2;
  player->sequence_data[idx * 0x10 + 2] = param_3;
  player->sequence_data[idx * 0x10 + 3] = param_4;
  player->sequence_data[idx * 0x10 + 4] = param_5;
  player->sequence_data[idx * 0x10 + 5] = param_6;
  player->sequence_data[idx * 0x10 + 6] = param_7;
  player->sequence_data[idx * 0x10 + 7] = param_8;
  player->write_index = player->write_index + 1;
  if (player->write_index >= 6) {
    player->write_index = 0;
  }
  return 1;
}


/* FUN_0044d400 @ 0x0044d400 */

int FUN_0044d400(int param_1,int param_2,int param_3,int *param_4,int *param_5)
{
  int n1;
  int n2;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  n1 = rand();
  n1 = (n1 % ((param_2 - param_1) / param_3 + 1)) * param_3 + param_1;
  n2 = rand();
  n2 = n2 % (n1 + -1) + 1;
  *param_4 = n2;
  *param_5 = n1 - n2;
  return n1;
}


/* FUN_0044d460 @ 0x0044d460 */

int FUN_0044d460(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6,
                int param_7,int param_8,int param_9)
{
  int n1;
  int n2;
  int v8;
  
  *param_4 = 0;
  *param_5 = 0;
  while ((*param_4 == 0 || (*param_5 == 0))) {
    if (((param_6 == -1) || (param_7 == -1)) && ((param_8 == -1 || (param_9 == -1)))) {
      n2 = rand();
      v8 = param_1 + (n2 % ((param_2 - param_1) / param_3)) * param_3;
      n2 = rand();
      n2 = n2 % (param_2 - v8) + v8;
      *param_4 = n2;
      *param_5 = n2 - v8;
    }
    else if ((param_6 == -1) || (param_7 == -1)) {
      n2 = rand();
      v8 = param_1 + (n2 % ((param_2 - param_1) / param_3)) * param_3;
      n2 = rand();
      *param_5 = param_8 + n2 % (param_9 - param_8);
      *param_4 = v8 - *param_5;
    }
    else if ((param_8 == -1) || (param_9 == -1)) {
      do {
        do {
          n2 = rand();
          v8 = param_1 + (n2 % ((param_2 - param_1) / param_3)) * param_3;
          n2 = rand();
          n2 = n2 % (param_7 - param_6) + param_6;
          *param_4 = n2;
          n2 = n2 - v8;
          *param_5 = n2;
        } while (*param_4 < param_6);
      } while (n2 < param_6);
    }
    else {
      do {
        n2 = rand();
        *param_4 = n2 % (param_7 - param_6) + param_6;
        n2 = rand();
        n2 = param_8 + n2 % (param_9 - param_8);
        *param_5 = n2;
      } while (n2 == *param_4);
      n1 = *param_4;
      if (n1 < n2) {
        *param_4 = n2;
        *param_5 = n1;
      }
      v8 = *param_4 - *param_5;
    }
  }
  return v8;
}


/* FUN_0044d610 @ 0x0044d610 */

int FUN_0044d610(int param_1,int param_2,int param_3,int *param_4,int *param_5)
{
  int n1;
  int n2;

  if (param_1 < 2) {
    param_1 = 2;
  }
  n1 = rand();
  n1 = (n1 % ((param_2 - param_1) / param_3 + 1)) * param_3 + param_1;
  n2 = rand();
  n2 = n2 % (n1 + -1) + 1;
  *param_5 = n2;
  *param_4 = n1 - n2;
  if (*param_4 < *param_5) {
    n2 = *param_4;
    *param_4 = *param_5;
    *param_5 = n2;
  }
  return *param_4 * *param_5;
}


/* FUN_0044d700 @ 0x0044d700 */

int FUN_0044d700(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6,
                int param_7,int param_8,int param_9)
{
  int n1;
  int n2;
  int v8;

  *param_4 = 0;
  *param_5 = 0;
  while ((*param_4 == 0 || (*param_5 == 0))) {
    if (((param_6 == -1) || (param_7 == -1)) && ((param_8 == -1 || (param_9 == -1)))) {
      n2 = rand();
      *param_4 = param_1 + (n2 % ((param_2 - param_1) / param_3)) * param_3;
      n2 = rand();
      *param_5 = n2 % (*param_4) + 1;
      if (*param_5 == 0) *param_5 = 1;
    }
    else if ((param_6 == -1) || (param_7 == -1)) {
      n2 = rand();
      *param_5 = param_8 + n2 % (param_9 - param_8);
      if (*param_5 == 0) *param_5 = 1;
      n2 = rand();
      *param_4 = *param_5 * (param_1 + (n2 % ((param_2 - param_1) / param_3)) * param_3);
    }
    else if ((param_8 == -1) || (param_9 == -1)) {
      n2 = rand();
      *param_4 = n2 % (param_7 - param_6) + param_6;
      if (*param_4 == 0) *param_4 = 1;
      n2 = rand();
      *param_5 = n2 % (param_7 - param_6) + param_6;
      if (*param_5 == 0) *param_5 = 1;
    }
    else {
      n2 = rand();
      *param_4 = n2 % (param_7 - param_6) + param_6;
      if (*param_4 == 0) *param_4 = 1;
      n2 = rand();
      *param_5 = param_8 + n2 % (param_9 - param_8);
      if (*param_5 == 0) *param_5 = 1;
    }
  }
  v8 = *param_4 * *param_5;
  return v8;
}


/* FUN_0044d900 @ 0x0044d900 */

int FUN_0044d900(int param_1,int param_2,int *param_3,int *param_4)
{
  int n1;
  
  n1 = rand();
  n1 = param_1 + n1 % ((param_2 - param_1) + 1);
  *param_4 = 100;
  *param_3 = (n1 * 100) / 100;
  return n1;
}


/* FUN_0044d950 @ 0x0044d950 */

uint __thiscall FUN_0044d950(void *this,int param_1,int param_2,int param_3)
{
  uint u1;
  short *ps2;
  short *ps3;
  uint u4;
  int n5;
  int n6;
  
  u4 = 1;
  u1 = (uint)*(short *)((char *)((GameSession *)DAT_0048345c)->child_list + ((int)(short)param_2 + (short)param_3 * 6) * 2); /* GameSession->child_list(+0x3A) used as array base */
  n6 = 0;
  ((SoundPlayer *)this)->playback_rate = u1;
  ps2 = (short *)(&DAT_004802a8 + (param_3 + param_2 * 6) * 0xe0);
  do {
    u4 = u4 * 2;
    if ((u1 & u4) == 0) {
      n5 = 0;
      ps3 = ps2;
      do {
        if (*ps3 == 0) break;
        if (param_1 == *ps3) {
          return CONCAT31((unsigned int)((uint)ps2 >> 8),1);
        }
        ps3 = ps3 + 1;
        n5 = n5 + 1;
      } while (n5 < 0x10);
    }
    ps2 = ps2 + 0x10;
    n6 = n6 + 1;
    if (6 < n6) {
      return (uint)ps2 & 0xffffff00;
    }
  } while( true );
}


/* FUN_0044da30 @ 0x0044da30 */

char * __fastcall FUN_0044da30(int param_1)
{
  char c1;
  char *pc2;
  
  pc2 = NULL;
  if (*(int **)(param_1 + 4) != NULL) {
    pc2 = (char *)**(int **)(param_1 + 4);
    c1 = *pc2;
    while (c1 != '\0') {
      pc2 = pc2 + 1;
      c1 = *pc2;
    }
  }
  return pc2;
}


/* FUN_0044da50 @ 0x0044da50 */

char FUN_0044da50(void)
{
  return 1;
}


/* FUN_0044da60 @ 0x0044da60 */

void FUN_0044da60(void)
{
  SetFocus(((GameScreen *)((UIWidget *)(intptr_t)DAT_004897c0)->field_06)->hwnd); /* GameScreen->hwnd at +0x0E */
}


/* FUN_0044da80 @ 0x0044da80 */

void __cdecl FUN_0044da80(int param_1,int param_2,int param_3)
{
  ushort *pu1;
  HDC hdc;
  HGDIOBJ pv2;
  DOCINFOA v14;
  
  if (*(HGLOBAL *)(param_1 + 4) != (HGLOBAL)0x0) {
    pu1 = GlobalLock(*(HGLOBAL *)(param_1 + 4));
    hdc = CreateDCA((LPCSTR)((uint)*pu1 + (int)pu1),(LPCSTR)((uint)pu1[1] + (int)pu1),
                    (LPCSTR)((uint)pu1[2] + (int)pu1),(DEVMODEA *)0x0);
    GlobalUnlock(*(HGLOBAL *)(param_1 + 4));
    *(HDC *)(param_3 + 4) = hdc;
    if (hdc != NULL) {
      v14.cbSize = 0x14;
      v14.lpszDocName = s_A_MONSTER_004828a0;
      v14.lpszOutput = (LPCSTR)0x0;
      pv2 = GetStockObject(5);
      SelectObject(hdc,pv2);
      pv2 = GetStockObject(7);
      SelectObject(hdc,pv2);
      StartDocA(hdc,&v14);
    }
  }
  return;
}


/* FUN_0044db20 @ 0x0044db20 */

void __cdecl FUN_0044db20(int param_1)
{
  if (*(HDC *)(param_1 + 4) != NULL) {
    EndDoc(*(HDC *)(param_1 + 4));
    DeleteDC(*(HDC *)(param_1 + 4));
    *(int *)(param_1 + 4) = 0;
  }
  return;
}


/* FUN_0044db50 @ 0x0044db50 */

void __cdecl FUN_0044db50(int param_1)
{
  HGDIOBJ pv1;
  
  if (*(HDC *)(param_1 + 4) != NULL) {
    StartPage(*(HDC *)(param_1 + 4));
    pv1 = GetStockObject(5);
    SelectObject(*(HDC *)(param_1 + 4),pv1);
    pv1 = GetStockObject(7);
    SelectObject(*(HDC *)(param_1 + 4),pv1);
  }
  return;
}


/* FUN_0044db90 @ 0x0044db90 */

void __cdecl FUN_0044db90(int param_1)
{
  if (*(HDC *)(param_1 + 4) != NULL) {
    EndPage(*(HDC *)(param_1 + 4));
  }
  return;
}


/* FUN_0044dbb0 @ 0x0044dbb0 */

bool __cdecl FUN_0044dbb0(int param_1,int *param_2)
{
  PRINTDLGA pd;
  BOOL result;

  memset(&pd, 0, sizeof(pd));
  pd.lStructSize = sizeof(PRINTDLGA);
  pd.hwndOwner = ((GameScreen *)((UIWidget *)(intptr_t)DAT_004897c0)->field_06)->hwnd;
  pd.Flags = 0x100;
  result = PrintDlgA(&pd);
  if (result != 0) {
    *(int *)(param_1 + 4) = (int)pd.hDevNames;
    if (param_2 != NULL) {
      *param_2 = (int)pd.hDC;
    }
    return 1;
  }
  return 0;
}


/* FUN_0044dc20 @ 0x0044dc20 */

int __cdecl FUN_0044dc20(int param_1,int *param_2)
{
  int n1;
  HDC hdc;
  int result;

  result = 0;
  if (*(HGLOBAL *)(param_1 + 4) != (HGLOBAL)0x0) {
    ushort *pu1 = (ushort *)GlobalLock(*(HGLOBAL *)(param_1 + 4));
    hdc = CreateDCA((LPCSTR)((uint)*pu1 + (int)pu1), (LPCSTR)((uint)pu1[1] + (int)pu1),
                    (LPCSTR)((uint)pu1[2] + (int)pu1), (DEVMODEA *)0x0);
    GlobalUnlock(*(HGLOBAL *)(param_1 + 4));
    if (hdc != NULL) {
      if (param_2 != NULL) {
        *param_2 = (int)hdc;
      }
      result = 1;
      DeleteDC(hdc);
    }
  }
  return result;
}


/* FUN_0044dcb0 @ 0x0044dcb0 */

void FUN_0044dcb0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488f90,u1,_arg1);
}


/* FUN_0044dd00 @ 0x0044dd00 */

void FUN_0044dd00(void) { return; }


/* FUN_0044dd20 @ 0x0044dd20 */

/* NOTE: overlapping globals */

void FUN_0044dd20(void)
{
  _DAT_00488f9e = 0;
  _DAT_00488f9c = 0;
}


/* FUN_0044dd30 @ 0x0044dd30 */

void FUN_0044dd30(void)
{
  _atexit(FUN_0044dd40);
}


/* FUN_0044dd40 @ 0x0044dd40 */

void FUN_0044dd40(void) { return; }


/* FUN_0044dd60 @ 0x0044dd60 */

/* NOTE: overlapping globals */

void FUN_0044dd60(void)
{
  _DAT_00488f9a = 0;
  _DAT_00488f98 = 0;
}


/* FUN_0044dd70 @ 0x0044dd70 */

void FUN_0044dd70(void)
{
  _atexit(FUN_0044dd80);
}


/* FUN_0044dd80 @ 0x0044dd80 */

void FUN_0044dd80(void) { return; }


/* FUN_0044dd90 @ 0x0044dd90 */

int * __fastcall FUN_0044dd90(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0044dde4;
  *_fs = &_seh_prev;
  FUN_004534e0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00475f90;
  FUN_0041da90(param_1,1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0044de59 @ 0x0044de59 */

void FUN_0044de59(void)
{
  FUN_00427c00();
}


/* FUN_0044de70 @ 0x0044de70 */

short FUN_0044de70(void *param_1,short param_2)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short result;

  _seh_prev = *_fs;
  _handler = (char *)0x0044e2bf;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  result = 0;
  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return 0;
  }

  result = param_2;
  *_fs = _seh_prev;
  return result;
}


/* FUN_0044e2c0 @ 0x0044e2c0 */

void FUN_0044e2c0(void) { return; }


/* FUN_0044e2d5 @ 0x0044e2d5 */

void FUN_0044e2d5(void) { return; }


/* FUN_0044e2dd @ 0x0044e2dd */

void FUN_0044e2dd(void) { return; }


/* FUN_0044e2ef @ 0x0044e2ef */

void FUN_0044e2ef(void) { return; }


/* FUN_0044e310 @ 0x0044e310 */

void FUN_0044e310(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488fa0,u1,_arg1);
}


/* FUN_0044e360 @ 0x0044e360 */

void FUN_0044e360(void) { return; }


/* FUN_0044e380 @ 0x0044e380 */

/* NOTE: overlapping globals */

void FUN_0044e380(void)
{
  _DAT_00488fae = 0;
  _DAT_00488fac = 0;
}


/* FUN_0044e390 @ 0x0044e390 */

void FUN_0044e390(void)
{
  _atexit(FUN_0044e3a0);
}


/* FUN_0044e3a0 @ 0x0044e3a0 */

void FUN_0044e3a0(void) { return; }


/* FUN_0044e3c0 @ 0x0044e3c0 */

/* NOTE: overlapping globals */

void FUN_0044e3c0(void)
{
  _DAT_00488faa = 0;
  _DAT_00488fa8 = 0;
}


/* FUN_0044e3d0 @ 0x0044e3d0 */

void FUN_0044e3d0(void)
{
  _atexit(FUN_0044e3e0);
}


/* FUN_0044e3e0 @ 0x0044e3e0 */

void FUN_0044e3e0(void) { return; }


/* FUN_0044e3f0 @ 0x0044e3f0
 * Struct types: UIWidget (this)
 * Constructor — calls UIWidget base ctor, sets is_interactive, vtable.
 */

UIWidget * __fastcall FUN_0044e3f0(UIWidget *this)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0044e44b;
  *_fs = &_seh_prev;
  FUN_004052b0(this);
  _seh_state = 0;
  this->is_interactive = 1;
  this->vtable = (void **)&PTR_FUN_00476038;
  FUN_0041da90(this,1);
  *_fs = _seh_prev;
  return this;
}


/* FUN_0044e4b9 @ 0x0044e4b9 */

void FUN_0044e4b9(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_0044e520 @ 0x0044e520 */

void FUN_0044e520(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488fb0,u1,_arg1);
}


/* FUN_0044e570 @ 0x0044e570 */

void FUN_0044e570(void) { return; }


/* FUN_0044e590 @ 0x0044e590 */

/* NOTE: overlapping globals */

void FUN_0044e590(void)
{
  _DAT_00488fbe = 0;
  _DAT_00488fbc = 0;
}


/* FUN_0044e5a0 @ 0x0044e5a0 */

void FUN_0044e5a0(void)
{
  _atexit(FUN_0044e5b0);
}


/* FUN_0044e5b0 @ 0x0044e5b0 */

void FUN_0044e5b0(void) { return; }


/* FUN_0044e5d0 @ 0x0044e5d0 */

/* NOTE: overlapping globals */

void FUN_0044e5d0(void)
{
  _DAT_00488fba = 0;
  _DAT_00488fb8 = 0;
}


/* FUN_0044e5e0 @ 0x0044e5e0 */

void FUN_0044e5e0(void)
{
  _atexit(FUN_0044e5f0);
}


/* FUN_0044e5f0 @ 0x0044e5f0 */

void FUN_0044e5f0(void) { return; }


/* FUN_0044e600 @ 0x0044e600
 * Byte-swaps (endian conversion) on a series of 16-bit values in a data structure.
 * Uses CONCAT11 to swap high/low bytes of each short.
 * TODO: param_1 struct unknown - accesses offsets 0x00-0x16 as shorts
 */
void __fastcall FUN_0044e600(int *param_1)
{
  unsigned short u1;

  u1 = *(unsigned short *)(param_1 + 3);                /* +0x0C */
  param_1[3] = CONCAT22(CONCAT11((char)u1,(char)(u1 >> 8)),
                        CONCAT11((char)((WaveHeader *)param_1)->field_0e, /* byte-swap at +0x0E */
                                 (char)(((WaveHeader *)param_1)->field_0e >> 8)));
  u1 = *(unsigned short *)(param_1 + 2);                /* +0x08 */
  param_1[2] = CONCAT22(CONCAT11((char)u1,(char)(u1 >> 8)),
                        CONCAT11((char)((WaveHeader *)param_1)->field_0a, /* byte-swap at +0x0A */
                                 (char)(((WaveHeader *)param_1)->field_0a >> 8)));
  u1 = *(unsigned short *)(param_1 + 1);                /* +0x04 */
  param_1[1] = CONCAT22(CONCAT11((char)u1,(char)(u1 >> 8)),
                        CONCAT11((char)((WaveHeader *)param_1)->field_06, /* byte-swap at +0x06 */
                                 (char)(((WaveHeader *)param_1)->field_06 >> 8)));
  *param_1 = CONCAT22(CONCAT11((char)*(unsigned short *)param_1,    /* +0x00 */
                               (char)(*(unsigned short *)param_1 >> 8)),
                      CONCAT11((char)((WaveHeader *)param_1)->field_02, /* byte-swap at +0x02 */
                               (char)(((WaveHeader *)param_1)->field_02 >> 8)));
  u1 = *(unsigned short *)(param_1 + 4);                /* +0x10 */
  param_1[4] = CONCAT22(CONCAT11((char)u1,(char)(u1 >> 8)),
                        CONCAT11((char)((WaveHeader *)param_1)->field_12, /* byte-swap at +0x12 */
                                 (char)(((WaveHeader *)param_1)->field_12 >> 8)));
  u1 = *(unsigned short *)(param_1 + 5);                /* +0x14 */
  *(unsigned short *)(param_1 + 5) = CONCAT11((char)u1,(char)(u1 >> 8));
  u1 = ((WaveHeader *)param_1)->field_16;
  ((WaveHeader *)param_1)->field_16 = CONCAT11((char)u1,(char)(u1 >> 8));
  return;
}


/* FUN_0044e6d0 @ 0x0044e6d0 */

void FUN_0044e6d0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488fc0,u1,_arg1);
}


/* FUN_0044e720 @ 0x0044e720 */

void FUN_0044e720(void) { return; }


/* FUN_0044e740 @ 0x0044e740 */

/* NOTE: overlapping globals */

void FUN_0044e740(void)
{
  _DAT_00488fce = 0;
  _DAT_00488fcc = 0;
}


/* FUN_0044e750 @ 0x0044e750 */

void FUN_0044e750(void)
{
  _atexit(FUN_0044e760);
}


/* FUN_0044e760 @ 0x0044e760 */

void FUN_0044e760(void) { return; }


/* FUN_0044e780 @ 0x0044e780 */

/* NOTE: overlapping globals */

void FUN_0044e780(void)
{
  _DAT_00488fca = 0;
  _DAT_00488fc8 = 0;
}


/* FUN_0044e790 @ 0x0044e790 */

void FUN_0044e790(void)
{
  _atexit(FUN_0044e7a0);
}


/* FUN_0044e7a0 @ 0x0044e7a0 */

void FUN_0044e7a0(void) { return; }


/* FUN_0044e7b0 @ 0x0044e7b0 */

int * __fastcall FUN_0044e7b0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0044e7ff;
  *_fs = &_seh_prev;
  FUN_00417c70(param_1);
  *param_1 = &PTR_LAB_004760e0;
  param_1[4] = 0;
  param_1[5] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0044e820 @ 0x0044e820 */

int * __thiscall FUN_0044e820(void *this,byte param_1)
{
  FUN_0044e840(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0044e840 @ 0x0044e840 */

void __fastcall FUN_0044e840(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0044e889;
  *param_1 = &PTR_LAB_004760e0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_0044e990((int)param_1);
  _seh_state = 0xffffffff;
  FUN_0044e893();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0044e893 @ 0x0044e893 */

void FUN_0044e893(void)
{
  int _ebp;
  
  FUN_00417cc0(*(int **)(_ebp + -0x10));
}


/* FUN_0044e8a0 @ 0x0044e8a0 */

int __thiscall FUN_0044e8a0(void *this,short param_1,short param_2)
{
  int n1;
  int n2;
  HGLOBAL hMem;
  void *pMem;

  FUN_0044e990((char *)this);
  if (param_1 <= 0 || param_2 <= 0) {
    return 0;
  }

  n1 = ((int)param_1 + 3) & ~3;
  n2 = 0x28 + 0x400 + n1 * (int)param_2;
  hMem = GlobalAlloc(0x42, n2);
  if (hMem == NULL) {
    return 0;
  }
  pMem = GlobalLock(hMem);
  memset(pMem, 0, n2);
  *(int *)pMem = 0x28;
  *(int *)((char *)pMem + 4) = (int)param_1;
  *(int *)((char *)pMem + 8) = (int)param_2;
  *(short *)((char *)pMem + 0x0C) = 1;
  *(short *)((char *)pMem + 0x0E) = 8;
  ((BitmapResource *)this)->dib_data_ptr = (int *)pMem;
  return 1;
}


/* FUN_0044e990 @ 0x0044e990 */

void __fastcall FUN_0044e990(BitmapResource *param_1)
{
  HGLOBAL pv1;

  if (param_1->dib_data_ptr != NULL) {
    pv1 = GlobalHandle((LPCVOID)param_1->dib_data_ptr);
    GlobalUnlock(pv1);
    pv1 = GlobalHandle((LPCVOID)param_1->dib_data_ptr);
    GlobalFree(pv1);
  }
  param_1->dib_data_ptr = 0;
  if (param_1->palette_handle != NULL) {
    DeleteObject((HGDIOBJ)param_1->palette_handle);
  }
  param_1->palette_handle = 0;
}


/* FUN_0044ea40 @ 0x0044ea40 */

int __fastcall FUN_0044ea40(BitmapResource *param_1)
{
  int n1;

  n1 = (int)param_1->dib_data_ptr;
  if (n1 != 0) {
    return CONCAT22((short)((uint)n1 >> 0x10),*(short *)(n1 + 4));
  }
  return 0;
}


/* FUN_0044ea70 @ 0x0044ea70 */

int __fastcall FUN_0044ea70(BitmapResource *param_1)
{
  short s1;
  int n2;
  short u4;
  int u3;

  n2 = (int)param_1->dib_data_ptr;
  u4 = (short)((uint)n2 >> 0x10);
  if (n2 == 0) {
    u3 = 0;
  }
  else {
    s1 = *(short *)(n2 + 8);
    u3 = CONCAT22(u4,s1);
    if (s1 < 0) {
      return CONCAT22(u4,-s1);
    }
  }
  return u3;
}


/* FUN_0044eac0 @ 0x0044eac0 */

int __fastcall FUN_0044eac0(int *param_1)
{
  int n1;

  n1 = *(int *)((char *)param_1 + 0x10);
  if (n1 == 0) {
    return 0;
  }
  return *(int *)((char *)n1 + 0x10);
}


/* FUN_0044eb00 @ 0x0044eb00 */

short FUN_0044eb00(void)
{
  return 0x100;
}


/* FUN_0044eb10 @ 0x0044eb10 */

void __thiscall FUN_0044eb10(void *this,void *param_1,char param_2)
{
  FUN_0041abd0(this,param_1,param_2);
  FUN_0044eb30(this,(int)param_1);
}


/* FUN_0044eb30 @ 0x0044eb30
 * TODO: 'this' struct unknown - has pointer at +0x10 (palette/bitmap data)
 */
void __thiscall FUN_0044eb30(void *this,int param_1)
{
  char *pu1;
  int *pn2;
  int n3;
  short s4;
  int n5;

  pn2 = ((BitmapResource *)this)->dib_data_ptr;
  n3 = *pn2;
  pn2[8] = 0x100;
  s4 = 0;
  do {
    n5 = (int)s4;
    s4 = s4 + 1;
    n5 = n5 * 4;
    pu1 = (char *)((char *)pn2 + n5 + n3);
    pu1[2] = *(char *)(n5 + 6 + param_1);
    pu1[1] = *(char *)(n5 + param_1 + 7);
    *pu1 = *(char *)(n5 + param_1 + 8);
    pu1[3] = 0;
  } while (s4 < 0x100);
  FUN_0044ebe0((intptr_t)this);
}


/* FUN_0044ebe0 @ 0x0044ebe0 */

char __fastcall FUN_0044ebe0(BitmapResource *param_1)
{
  ushort u1;
  ushort *pu2;
  LOGPALETTE *pLVar3;
  HLOCAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar4;
  int n5;
  BYTE *pBVar6;
  
  if (param_1->dib_data_ptr == NULL) {
    return '\0';
  }
  if (*param_1->dib_data_ptr == 0x28) { /* BITMAPINFOHEADER size check */
    if (param_1->palette_handle != NULL) {
      DeleteObject((HGDIOBJ)param_1->palette_handle);
    }
    pu2 = (ushort *)param_1->dib_data_ptr;
    param_1->palette_handle = 0;
    u1 = *pu2;
    hMem = LocalAlloc(0x40,0x408);
    if (hMem != (HLOCAL)0x0) {
      plpal = LocalLock(hMem);
      n5 = 0x100;
      plpal->palNumEntries = 0x100;
      plpal->palVersion = 0x300;
      pBVar6 = (BYTE *)((char *)pu2 + u1 + 2);
      pLVar3 = plpal;
      do {
        n5 = n5 + -1;
        pLVar3->palPalEntry[0].peRed = *pBVar6;
        pLVar3->palPalEntry[0].peGreen = pBVar6[-1];
        pLVar3->palPalEntry[0].peBlue = pBVar6[-2];
        pLVar3->palPalEntry[0].peFlags = '\0';
        pBVar6 = pBVar6 + 4;
        pLVar3 = (LOGPALETTE *)pLVar3->palPalEntry;
      } while (n5 != 0);
      pHVar4 = CreatePalette(plpal);
      param_1->palette_handle = (void *)pHVar4;
      LocalUnlock(hMem);
      LocalFree(hMem);
      return '\x01' - ((int)param_1->palette_handle == 0);
    }
    return '\0';
  }
  return '\0';
}


/* FUN_0044eca0 @ 0x0044eca0 */

uint __thiscall FUN_0044eca0(void *this,int param_1,char param_2,byte param_3)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1;
  int n2;

  _seh_prev = *_fs;
  _handler = (char *)0x0044f0dd;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  n1 = *(int *)((char *)this + 0x10);
  if (n1 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  n2 = *(int *)((char *)param_1 + 0x10);
  if (n2 == 0) {
    *_fs = _seh_prev;
    return 0;
  }

  *_fs = _seh_prev;
  return 1;
}


/* FUN_0044f0de @ 0x0044f0de */

void FUN_0044f0de(void) { return; }


/* FUN_0044f0f0 @ 0x0044f0f0 */

void FUN_0044f0f0(void) { return; }


/* FUN_0044f140 @ 0x0044f140 */

void FUN_0044f140(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488fd0,u1,_arg1);
}


/* FUN_0044f190 @ 0x0044f190 */

void FUN_0044f190(void) { return; }


/* FUN_0044f1b0 @ 0x0044f1b0 */

/* NOTE: overlapping globals */

void FUN_0044f1b0(void)
{
  _DAT_00488fde = 0;
  _DAT_00488fdc = 0;
}


/* FUN_0044f1c0 @ 0x0044f1c0 */

void FUN_0044f1c0(void)
{
  _atexit(FUN_0044f1d0);
}


/* FUN_0044f1d0 @ 0x0044f1d0 */

void FUN_0044f1d0(void) { return; }


/* FUN_0044f1f0 @ 0x0044f1f0 */

/* NOTE: overlapping globals */

void FUN_0044f1f0(void)
{
  _DAT_00488fda = 0;
  _DAT_00488fd8 = 0;
}


/* FUN_0044f200 @ 0x0044f200 */

void FUN_0044f200(void)
{
  _atexit(FUN_0044f210);
}


/* FUN_0044f210 @ 0x0044f210 */

void FUN_0044f210(void) { return; }


/* FUN_0044f230 @ 0x0044f230 */

void FUN_0044f230(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488fe0,u1,_arg1);
}


/* FUN_0044f270 @ 0x0044f270 */

void FUN_0044f270(void)
{
  _atexit(FUN_0044f280);
}


/* FUN_0044f280 @ 0x0044f280 */

void FUN_0044f280(void) { return; }


/* FUN_0044f2a0 @ 0x0044f2a0 */

/* NOTE: overlapping globals */

void FUN_0044f2a0(void)
{
  _DAT_00488fee = 0;
  _DAT_00488fec = 0;
}


/* FUN_0044f2b0 @ 0x0044f2b0 */

void FUN_0044f2b0(void)
{
  _atexit(FUN_0044f2c0);
}


/* FUN_0044f2c0 @ 0x0044f2c0 */

void FUN_0044f2c0(void) { return; }


/* FUN_0044f2e0 @ 0x0044f2e0 */

/* NOTE: overlapping globals */

void FUN_0044f2e0(void)
{
  _DAT_00488fea = 0;
  _DAT_00488fe8 = 0;
}


/* FUN_0044f2f0 @ 0x0044f2f0 */

void FUN_0044f2f0(void)
{
  _atexit(FUN_0044f300);
}


/* FUN_0044f300 @ 0x0044f300 */

void FUN_0044f300(void) { return; }


/* FUN_0044f310 @ 0x0044f310 */

char __cdecl FUN_0044f310(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int v10;
  char result;

  _seh_prev = *_fs;
  _handler = (char *)0x0044f6c3;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  result = '\0';
  if (param_1 == NULL) {
    *_fs = _seh_prev;
    return '\0';
  }

  v10 = *param_1;
  if (v10 != 0) {
    result = '\x01';
  }

  *_fs = _seh_prev;
  return result;
}


/* FUN_0044f6c4 @ 0x0044f6c4 */

void FUN_0044f6c4(void) { return; }


/* FUN_0044f6e0 @ 0x0044f6e0 */

void FUN_0044f6e0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488ff0,u1,_arg1);
}


/* FUN_0044f730 @ 0x0044f730 */

void FUN_0044f730(void) { return; }


/* FUN_0044f740 @ 0x0044f740 */

int * __fastcall FUN_0044f740(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = (char *)0x0044f839;
  *_fs = (int)&_seh_prev;
  FUN_004534e0(param_1);
  _seh_state = 0;
  *param_1 = (int)&PTR_FUN_00476218;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0044f840 @ 0x0044f840 */

void __thiscall FUN_0044f840(MathProblem *this,int param_1)
{
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (6 < param_1) {
    param_1 = 6;
  }
  this->difficulty = param_1;
  this->field_1cc = (int)*(short *)((char *)&((GameSession *)DAT_0048345c)->field_42 + 2 + (short)param_1 * 0x0C); /* GameSession +0x44: stride-0x0C lookup table */
  this->problem_type = param_1 << 4;
  ((void (*)(void))this->vtable[1])();
}


/* FUN_0044f890 @ 0x0044f890 */

int __fastcall FUN_0044f890(void *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1;
  int n2;
  int n3;
  int result;
  MathProblem *problem;
  int v10, v14, v18, v1c, v20;

  _seh_prev = *_fs;
  _handler = (char *)0x0044ffff;
  *_fs = (int)&_seh_prev;
  _seh_state = 0xffffffff;

  problem = (MathProblem *)param_1;
  result = 0;
  v10 = 0;
  v14 = 0;
  v18 = 0;
  v1c = 0;
  v20 = 0;

  if (problem == NULL) {
    *_fs = _seh_prev;
    return 0;
  }

  n1 = problem->difficulty;
  n2 = problem->problem_type;
  n3 = problem->game_mode;

  /* Generate operands based on difficulty */
  if (n1 < 1) n1 = 1;
  if (n1 > 6) n1 = 6;

  /* Basic random problem generation */
  switch (n2 & 0xF) {
    case 1: /* addition */
      FUN_0044d400(n1, n1 * 10, 1, &v10, &v14);
      problem->operand_a = v10;
      problem->operand_a_denom = v14;
      problem->operation = 1;
      break;
    case 2: /* subtraction */
      FUN_0044d400(n1, n1 * 10, 1, &v10, &v14);
      problem->operand_a = v10;
      problem->operand_a_denom = v14;
      problem->operation = 2;
      break;
    case 3: /* multiplication */
      FUN_0044d610(n1, n1 * 10, 1, &v10, &v14);
      problem->operand_a = v10;
      problem->operand_a_denom = v14;
      problem->operation = 3;
      break;
    case 4: /* division */
      FUN_0044d610(2, n1 * 10, 1, &v10, &v14);
      if (v14 == 0) v14 = 1;
      problem->operand_a = v10;
      problem->operand_a_denom = v14;
      problem->operation = 4;
      break;
    default:
      FUN_0044d400(n1, n1 * 10, 1, &v10, &v14);
      problem->operand_a = v10;
      problem->operand_a_denom = v14;
      problem->operation = 1;
      break;
  }

  /* Generate answer slots */
  problem->correct_slot = 0;
  problem->slots[0].value = v10 + v14;
  problem->slots[0].flags = problem->operation;

  n3 = rand();
  problem->slots[1].value = problem->slots[0].value + (n3 % 5) + 1;
  problem->slots[1].flags = problem->operation;

  n3 = rand();
  problem->slots[2].value = problem->slots[0].value - (n3 % 5) - 1;
  if (problem->slots[2].value < 0) problem->slots[2].value = 0;
  problem->slots[2].flags = problem->operation;

  result = 1;
  *_fs = _seh_prev;
  return result;
}


