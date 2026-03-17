/*
 * game_input.c - Input handling
 * Address range: 0x43B000 - 0x43FFFF
 * Functions: 181
 *
 * Reconstructed source for MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_0043b020 @ 0x0043b020 */

int * __thiscall FUN_0043b020(void *this,byte param_1)
{
  FUN_0043b040(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043b040 @ 0x0043b040 */

void __fastcall FUN_0043b040(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043b07d;
  *param_1 = &PTR_FUN_00474ab0;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_0043b087();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043b087 @ 0x0043b087 */

void FUN_0043b087(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0043b090 @ 0x0043b090 */

void __fastcall FUN_0043b090(GameWidget *param_1)
{
  param_1->field_118 = 0;
  FUN_0041d780(param_1,(void *)0x0);
  FUN_0041da90(param_1,0);
  FUN_0041dad0(param_1,0,'\0');
  return;
}


/* Function: thunk_FUN_004058a0 @ 0x0043b0c0
 * Struct types: UIWidget (this)
 * Thunk for FUN_004058a0 — returns tile_data_ptr value if non-null.
 */

int __fastcall thunk_FUN_004058a0(UIWidget *this)
{
  short *pu1;

  pu1 = this->tile_data_ptr;
  if (pu1 == NULL) {
    return 0;
  }
  return CONCAT22((short)((uint)pu1 >> 0x10),*pu1);
}


/* FUN_0043b0d0 @ 0x0043b0d0 */

void __thiscall FUN_0043b0d0(void *this,short param_1)
{
  FUN_00406720(this,param_1);
  return;
}


/* FUN_0043b0e0 @ 0x0043b0e0 */

void __thiscall FUN_0043b0e0(SoundPlayer *this,short param_1)
{
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,param_1);
  return;
}


/* FUN_0043b110 @ 0x0043b110 */

void __thiscall FUN_0043b110(void *this,short param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0043b180 @ 0x0043b180 */

void __thiscall FUN_0043b180(void *this,char param_1)
{
  FUN_00406ca0(this,param_1,'\0');
  return;
}


/* FUN_0043b190 @ 0x0043b190 */

void __thiscall FUN_0043b190(GameWidget *this,short param_1)
{
  this->field_118 = param_1;
  return;
}


/* FUN_0043b1a0 @ 0x0043b1a0 */

void __thiscall FUN_0043b1a0(SoundPlayer *this,int *param_1,int *param_2)
{
  int *_fs;
  int n1;
  int v34 [3];
  char *v28;
  int v24;
  int v20;
  short v1c;
  short v1a;
  int v18;
  void *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0043b35d;
  *_fs = &_seh_prev;
  v20 = 0;
  v24 = 0;
  v34[1] = 0;
  v34[0] = 0;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  v18 = this->sequence_data[42] + -0xc + this->sequence_data[50] * 0xe;
  v14 = this;
  FUN_0041cde0(this,v34);
  if (param_2 == (int *)0x0) {
    n1 = 6;
    FUN_0041ce10(v14,&v24,6);
  }
  else {
    FUN_00403030(&v24,v34 + 2,param_2);
    _seh_state = (_seh_state & ~0xFF) | 1;
    n1 = 0x43b218;
    FUN_0043b21a();
  }
  FUN_00401ba0(&_tmp_31,*(short *)(v18 + 10));
  FUN_00402d00(&v20,n1);
  v28 = &_tmp_31;
  FUN_00401ba0(&_tmp_31,*(short *)(v18 + 8));
  FUN_00402d00(&v24,n1);
  FUN_0041cef0(v14,&v24,6);
  if (((GameWidget *)v14)->field_118 != 0) {
    v1a = 0;
    v28 = (char *)0x0;
    v1c = 0;
    v34[2] = 0;
    _seh_state = (_seh_state & ~0xFF) | 4;
    v18 = 0;
    FUN_0041cdc0(v14,v34 + 2);
    v1a = (short)((uint)(v20 - (int)v28) >> 8);
    v1c = (short)((uint)v24 >> 8);
    v18 = CONCAT22((short)((uint)v20 >> 8),(short)((uint)(v34[2] + v24) >> 8));
    FUN_0041b0c0(param_1,&v1c,(char)((GameWidget *)v14)->field_118);
    _seh_state = (_seh_state & ~0xFF) | 3;
    FUN_0043b345();
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0043b34d();
  }
  FUN_004091a0(v14,param_1);
  FUN_0041d2d0(v14,v34,'\0');
  _seh_state &= ~0xFF;
  FUN_0043b355();
  _seh_state = 0xffffffff;
  FUN_0043b367();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043b21a @ 0x0043b21a */

void FUN_0043b21a(void) { return; }


/* FUN_0043b345 @ 0x0043b345 */

void FUN_0043b345(void) { return; }


/* FUN_0043b34d @ 0x0043b34d */

void FUN_0043b34d(void) { return; }


/* FUN_0043b355 @ 0x0043b355 */

void FUN_0043b355(void) { return; }


/* FUN_0043b367 @ 0x0043b367 */

void FUN_0043b367(void) { return; }


/* FUN_0043b380 @ 0x0043b380 */

void FUN_0043b380(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488da0,u1,_p_fffffff4);
  return;
}


/* FUN_0043b3d0 @ 0x0043b3d0 */

void FUN_0043b3d0(void) { return; }


/* FUN_0043b3f0 @ 0x0043b3f0 */

/* NOTE: overlapping globals */

void FUN_0043b3f0(void)
{
  _DAT_00488dae = 0;
  _DAT_00488dac = 0;
  return;
}


/* FUN_0043b400 @ 0x0043b400 */

void FUN_0043b400(void)
{
  _atexit(FUN_0043b410);
  return;
}


/* FUN_0043b410 @ 0x0043b410 */

void FUN_0043b410(void) { return; }


/* FUN_0043b430 @ 0x0043b430 */

/* NOTE: overlapping globals */

void FUN_0043b430(void)
{
  _DAT_00488daa = 0;
  _DAT_00488da8 = 0;
  return;
}


/* FUN_0043b440 @ 0x0043b440 */

void FUN_0043b440(void)
{
  _atexit(FUN_0043b450);
  return;
}


/* FUN_0043b450 @ 0x0043b450 */

void FUN_0043b450(void) { return; }


/* FUN_0043b460 @ 0x0043b460 */

int FUN_0043b460(int param_1,int param_2)
{
    /* STUB: 191 lines not yet reconstructed */
    return 0;
}


/* FUN_0043b680 @ 0x0043b680 */

void FUN_0043b680(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488db0,u1,_p_fffffff4);
  return;
}


/* FUN_0043b6d0 @ 0x0043b6d0 */

void FUN_0043b6d0(void) { return; }


/* FUN_0043b6f0 @ 0x0043b6f0 */

/* NOTE: overlapping globals */

void FUN_0043b6f0(void)
{
  _DAT_00488dbe = 0;
  _DAT_00488dbc = 0;
  return;
}


/* FUN_0043b700 @ 0x0043b700 */

void FUN_0043b700(void)
{
  _atexit(FUN_0043b710);
  return;
}


/* FUN_0043b710 @ 0x0043b710 */

void FUN_0043b710(void) { return; }


/* FUN_0043b730 @ 0x0043b730 */

/* NOTE: overlapping globals */

void FUN_0043b730(void)
{
  _DAT_00488dba = 0;
  _DAT_00488db8 = 0;
  return;
}


/* FUN_0043b740 @ 0x0043b740 */

void FUN_0043b740(void)
{
  _atexit(FUN_0043b750);
  return;
}


/* FUN_0043b750 @ 0x0043b750 */

void FUN_0043b750(void) { return; }


/* FUN_0043b760 @ 0x0043b760 */

int * __fastcall FUN_0043b760(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  UIWidget *widget = (UIWidget *)param_1;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043b7cb;
  *_fs = &_seh_prev;
  FUN_00417c70(param_1);
  *(short *)&widget->flags = 0;
  *param_1 = &PTR_LAB_00474b50;
  *(short *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(short *)&widget->flags = 0;
  *(short *)(param_1 + 4) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0043b7f0 @ 0x0043b7f0 */

int * __thiscall FUN_0043b7f0(void *this,byte param_1)
{
  FUN_0043b810(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043b810 @ 0x0043b810 */

void __fastcall FUN_0043b810(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  uint _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043b86d;
  *param_1 = &PTR_LAB_00474b50;
  *_fs = &_seh_prev;
  _seh_state = 1;
  FUN_0043b910((int)param_1);
  _seh_state = _seh_state & 0xffffff00;
  FUN_0043b862();
  _seh_state = 0xffffffff;
  FUN_0043b877();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043b862 @ 0x0043b862 */

void FUN_0043b862(void) { return; }


/* FUN_0043b877 @ 0x0043b877 */

void FUN_0043b877(void)
{
  int _ebp;
  
  FUN_00417cc0(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0043b880 @ 0x0043b880 */

char __thiscall FUN_0043b880(void *this,short param_1,short param_2)
{
    /* STUB: 28 lines not yet reconstructed */
    return 0;
}


/* FUN_0043b910 @ 0x0043b910 */

void __fastcall FUN_0043b910(int param_1)
{
  if (*(uint **)(param_1 + 0x14) != (uint *)0x0) {
    FUN_0046d110(*(uint **)(param_1 + 0x14));
  }
  *(short *)(param_1 + 0x12) = 0;
  *(int *)(param_1 + 0x14) = 0;
  *(short *)(param_1 + 0x10) = 0;
  return;
}


/* FUN_0043b940 @ 0x0043b940 */

short __fastcall FUN_0043b940(int param_1)
{
  return *(short *)(param_1 + 0x12);
}


/* FUN_0043b970 @ 0x0043b970 */

short __fastcall FUN_0043b970(int param_1)
{
  return *(short *)(param_1 + 0x10);
}


/* FUN_0043b9c0 @ 0x0043b9c0 */

void FUN_0043b9c0(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488dc0,u1,_p_fffffff4);
  return;
}


/* FUN_0043ba10 @ 0x0043ba10 */

void FUN_0043ba10(void) { return; }


/* FUN_0043ba30 @ 0x0043ba30 */

/* NOTE: overlapping globals */

void FUN_0043ba30(void)
{
  _DAT_00488dce = 0;
  _DAT_00488dcc = 0;
  return;
}


/* FUN_0043ba40 @ 0x0043ba40 */

void FUN_0043ba40(void)
{
  _atexit(FUN_0043ba50);
  return;
}


/* FUN_0043ba50 @ 0x0043ba50 */

void FUN_0043ba50(void) { return; }


/* FUN_0043ba70 @ 0x0043ba70 */

/* NOTE: overlapping globals */

void FUN_0043ba70(void)
{
  _DAT_00488dca = 0;
  _DAT_00488dc8 = 0;
  return;
}


/* FUN_0043ba80 @ 0x0043ba80 */

void FUN_0043ba80(void)
{
  _atexit(FUN_0043ba90);
  return;
}


/* FUN_0043ba90 @ 0x0043ba90 */

void FUN_0043ba90(void) { return; }


/* FUN_0043bab0 @ 0x0043bab0 */

void FUN_0043bab0(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488dd0,u1,_p_fffffff4);
  return;
}


/* FUN_0043baf0 @ 0x0043baf0 */

void FUN_0043baf0(void)
{
  _atexit(FUN_0043bb00);
  return;
}


/* FUN_0043bb00 @ 0x0043bb00 */

void FUN_0043bb00(void) { return; }


/* FUN_0043bb20 @ 0x0043bb20 */

/* NOTE: overlapping globals */

void FUN_0043bb20(void)
{
  _DAT_00488dde = 0;
  _DAT_00488ddc = 0;
  return;
}


/* FUN_0043bb30 @ 0x0043bb30 */

void FUN_0043bb30(void)
{
  _atexit(FUN_0043bb40);
  return;
}


/* FUN_0043bb40 @ 0x0043bb40 */

void FUN_0043bb40(void) { return; }


/* FUN_0043bb60 @ 0x0043bb60 */

/* NOTE: overlapping globals */

void FUN_0043bb60(void)
{
  _DAT_00488dda = 0;
  _DAT_00488dd8 = 0;
  return;
}


/* FUN_0043bb70 @ 0x0043bb70 */

void FUN_0043bb70(void)
{
  _atexit(FUN_0043bb80);
  return;
}


/* FUN_0043bb80 @ 0x0043bb80 */

void FUN_0043bb80(void) { return; }


/* FUN_0043bba0 @ 0x0043bba0 */

void FUN_0043bba0(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488de0,u1,_p_fffffff4);
  return;
}


/* FUN_0043bbe0 @ 0x0043bbe0 */

void FUN_0043bbe0(void)
{
  _atexit(FUN_0043bbf0);
  return;
}


/* FUN_0043bbf0 @ 0x0043bbf0 */

void FUN_0043bbf0(void) { return; }


/* FUN_0043bc10 @ 0x0043bc10 */

/* NOTE: overlapping globals */

void FUN_0043bc10(void)
{
  _DAT_00488dee = 0;
  _DAT_00488dec = 0;
  return;
}


/* FUN_0043bc20 @ 0x0043bc20 */

void FUN_0043bc20(void)
{
  _atexit(FUN_0043bc30);
  return;
}


/* FUN_0043bc30 @ 0x0043bc30 */

void FUN_0043bc30(void) { return; }


/* FUN_0043bc50 @ 0x0043bc50 */

/* NOTE: overlapping globals */

void FUN_0043bc50(void)
{
  _DAT_00488dea = 0;
  _DAT_00488de8 = 0;
  return;
}


/* FUN_0043bc60 @ 0x0043bc60 */

void FUN_0043bc60(void)
{
  _atexit(FUN_0043bc70);
  return;
}


/* FUN_0043bc70 @ 0x0043bc70 */

void FUN_0043bc70(void) { return; }


/* FUN_0043bc90 @ 0x0043bc90 */

void FUN_0043bc90(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488df0,u1,_p_fffffff4);
  return;
}


/* FUN_0043bcd0 @ 0x0043bcd0 */

void FUN_0043bcd0(void)
{
  _atexit(FUN_0043bce0);
  return;
}


/* FUN_0043bce0 @ 0x0043bce0 */

void FUN_0043bce0(void) { return; }


/* FUN_0043bd00 @ 0x0043bd00 */

/* NOTE: overlapping globals */

void FUN_0043bd00(void)
{
  _DAT_00488dfe = 0;
  _DAT_00488dfc = 0;
  return;
}


/* FUN_0043bd10 @ 0x0043bd10 */

void FUN_0043bd10(void)
{
  _atexit(FUN_0043bd20);
  return;
}


/* FUN_0043bd20 @ 0x0043bd20 */

void FUN_0043bd20(void) { return; }


/* FUN_0043bd40 @ 0x0043bd40 */

/* NOTE: overlapping globals */

void FUN_0043bd40(void)
{
  _DAT_00488dfa = 0;
  _DAT_00488df8 = 0;
  return;
}


/* FUN_0043bd50 @ 0x0043bd50 */

void FUN_0043bd50(void)
{
  _atexit(FUN_0043bd60);
  return;
}


/* FUN_0043bd60 @ 0x0043bd60 */

void FUN_0043bd60(void) { return; }


/* FUN_0043bd80 @ 0x0043bd80 */

void FUN_0043bd80(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488e10,u1,_p_fffffff4);
  return;
}


/* FUN_0043bdc0 @ 0x0043bdc0 */

void FUN_0043bdc0(void)
{
  _atexit(FUN_0043bdd0);
  return;
}


/* FUN_0043bdd0 @ 0x0043bdd0 */

void FUN_0043bdd0(void) { return; }


/* FUN_0043bdf0 @ 0x0043bdf0 */

/* NOTE: overlapping globals */

void FUN_0043bdf0(void)
{
  _DAT_00488e32 = 0;
  _DAT_00488e30 = 0;
  return;
}


/* FUN_0043be00 @ 0x0043be00 */

void FUN_0043be00(void)
{
  _atexit(FUN_0043be10);
  return;
}


/* FUN_0043be10 @ 0x0043be10 */

void FUN_0043be10(void) { return; }


/* FUN_0043be30 @ 0x0043be30 */

/* NOTE: overlapping globals */

void FUN_0043be30(void)
{
  _DAT_00488e2e = 0;
  _DAT_00488e2c = 0;
  return;
}


/* FUN_0043be40 @ 0x0043be40 */

void FUN_0043be40(void)
{
  _atexit(FUN_0043be50);
  return;
}


/* FUN_0043be50 @ 0x0043be50 */

void FUN_0043be50(void) { return; }


/* FUN_0043c360 @ 0x0043c360 */

int * __fastcall FUN_0043c360(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043c3f6;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  *(int *)((int)param_1 + 0x1da) = 0; /* TODO: unknown offset 0x1DA on extended widget */
  *(int *)((int)param_1 + 0x1de) = 0; /* TODO: unknown offset 0x1DE on extended widget */
  *(int *)((int)param_1 + 0x1e2) = 0; /* TODO: unknown offset 0x1E2 on extended widget */
  *(int *)((int)param_1 + 0x1e6) = 0; /* TODO: unknown offset 0x1E6 on extended widget */
  *param_1 = &PTR_FUN_00474d00;
  DAT_00480558 = 1;
  DAT_00488e0c = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0043c410 @ 0x0043c410 */

int * __thiscall FUN_0043c410(void *this,byte param_1)
{
  FUN_0043c430(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043c430 @ 0x0043c430 */

void __fastcall FUN_0043c430(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043c4a6;
  *param_1 = &PTR_FUN_00474d00;
  *_fs = &_seh_prev;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_0043c48a();
  _seh_state &= ~0xFF;
  FUN_0043c498();
  _seh_state = 0xffffffff;
  FUN_0043c4b0();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043c48a @ 0x0043c48a */

void FUN_0043c48a(void) { return; }


/* FUN_0043c498 @ 0x0043c498 */

void FUN_0043c498(void) { return; }


/* FUN_0043c4b0 @ 0x0043c4b0 */

void FUN_0043c4b0(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0043c4c0 @ 0x0043c4c0 */

void FUN_0043c4c0(int param_1,short param_2)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_0043c510 @ 0x0043c510 */

void FUN_0043c510(int param_1,short param_2)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_0043c560 @ 0x0043c560 */

void FUN_0043c560(UIWidget *param_1)
{
  uint u1;
  int n2;

  FUN_0041ba40(param_1,0,1,0);
  param_1->field_109 = 0;
  if (((param_1->child_list_2 != NULL) &&
      (n2 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, n2 != 0)) &&
     (u1 = 1, n2 != 0)) {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0043c560(*(UIWidget **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n2));
    } while (u1 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0043c5d0 @ 0x0043c5d0 */

void __fastcall FUN_0043c5d0(int param_1)
{
  if (DAT_00488e24 == 0) {
    *(short *)(DAT_0048345c + 0x92) = *(short *)(DAT_0048345c + 0x92) + 600;
  }
  else {
    *(short *)(DAT_0048345c + 0x92) = *(short *)(DAT_0048345c + 0x92) + (5 - DAT_00488e24) * 100;
  }
  FUN_0042db60(DAT_00488e34,*(ushort **)(param_1 + 0x1ac),-1,-1);
  if ((int)*(short *)(DAT_0048345c + 0xc2) + (int)*(short *)(DAT_0048345c + 0xb6) !=
      (int)*(short *)(DAT_0048345c + 0xaa)) {
    *(short *)(DAT_0048345c + 0xb6) = *(short *)(DAT_0048345c + 0xb6) + 1;
  }
  return;
}


/* FUN_0043c660 @ 0x0043c660 */

/* NOTE: Removing unreachable block (ram,0x0043c6fe) */

void __fastcall FUN_0043c660(int param_1)
{
  ushort u1;
  DWORD DVar2;
  
  DAT_00488e24 = DAT_00488e24 + 1;
  if ((int)*(short *)(DAT_0048345c + 0xb6) + (int)*(short *)(DAT_0048345c + 0xc2) !=
      (int)*(short *)(DAT_0048345c + 0xaa)) {
    *(short *)(DAT_0048345c + 0xc2) = *(short *)(DAT_0048345c + 0xc2) + 1;
  }
  DAT_00488e04 = DAT_00488e04 + 1;
  *(short *)(param_1 + 0x1ca) = 1;
  FUN_0042db60(DAT_00488e34,*(ushort **)(param_1 + 0x19c),-1,-1);
  DVar2 = GetTickCount();
  *(short *)(param_1 + 0x1ca) = 0;
  *(DWORD *)(param_1 + 0x176) = DVar2;
  u1 = (short)DAT_00488e04 >> 0xf;
  if (((DAT_00488e04 ^ u1) - u1 & 1 ^ u1) == u1) {
    *(short *)(param_1 + 0x1ca) = 1;
    FUN_0042db60(DAT_00488e34,*(ushort **)(param_1 + 0x1a4),-1,-1);
    DVar2 = GetTickCount();
    *(short *)(param_1 + 0x1ca) = 0;
    *(DWORD *)(param_1 + 0x176) = DVar2;
  }
  return;
}


/* FUN_0043c760 @ 0x0043c760 */

void __fastcall FUN_0043c760(int param_1)
{
  int *pn1;
  int *pu2;
  int u3;
  
  for (pn1 = DAT_00480550; pu2 = DAT_0048055c, pn1 != (int *)0x0; pn1 = (int *)pn1[1]
      ) {
    FUN_00451c40(*(void **)(param_1 + 0x1bc),0,(int)(short)pn1[2]);
  }
  for (; pn1 = DAT_00480550, pu2 != (int *)0x0; pu2 = (int *)pu2[1]) {
    for (; pn1 != (int *)0x0; pn1 = (int *)pn1[1]) {
      u3 = FUN_0041ba00((void *)*pu2,*pn1);
      if ((char)u3 == '\x01') {
        FUN_00451c00(*(void **)(param_1 + 0x1bc),(int)*(short *)(pu2 + 2),(int)(short)pn1[2]);
      }
    }
  }
  return;
}


/* FUN_0043c7f0 @ 0x0043c7f0 */

void FUN_0043c7f0(void)
{
  UIWidget *pv1;
  int *pn2;

  *(short *)(*(int *)(DAT_004897c0 + 0x44) + 0x112) = 1; /* pending_frame */
  pv1 = *(UIWidget **)(DAT_004897c0 + 0x44);
  pv1->anim_flag_0 = 0;
  pv1->anim_flag_2 = 0;
  pv1->anim_flag_1 = 0;
  pv1->anim_flag_3 = 0;
  FUN_00405d30(pv1,1);
  for (pn2 = DAT_00480550; pn2 != (int *)0x0; pn2 = (int *)pn2[1]) {
    *(short *)(*pn2 + 0x112) = 1; /* pending_frame */
    pv1 = (UIWidget *)*pn2;
    pv1->anim_flag_0 = 0;
    pv1->anim_flag_2 = 0;
    pv1->anim_flag_1 = 0;
    pv1->anim_flag_3 = 0;
    FUN_00405d30(pv1,1);
    FUN_0043c560(pv1);
  }
  return;
}


/* FUN_0043c890 @ 0x0043c890 */

void __fastcall FUN_0043c890(int param_1)
{
  short s1;
  UIWidget *pv2;
  int *pn3;
  int *pn4;

  *(short *)(*(int *)(DAT_004897c0 + 0x44) + 0x112) = 0; /* pending_frame */
  pv2 = *(UIWidget **)(DAT_004897c0 + 0x44);
  pv2->anim_flag_0 = 0;
  pv2->anim_flag_2 = 0;
  pv2->anim_flag_1 = 0;
  pv2->anim_flag_3 = 0;
  FUN_00405d30(pv2,0);
  for (pn3 = DAT_00480550; pn4 = DAT_0048055c, pn3 != (int *)0x0; pn3 = (int *)pn3[1]
      ) {
    *(short *)(*pn3 + 0x112) = 0; /* pending_frame */
    pv2 = (UIWidget *)*pn3;
    pv2->anim_flag_0 = 0;
    pv2->anim_flag_2 = 0;
    pv2->anim_flag_1 = 0;
    pv2->anim_flag_3 = 0;
    FUN_00405d30(pv2,0);
  }
  for (; pn4 != (int *)0x0; pn4 = (int *)pn4[1]) {
    *(short *)(*pn4 + 0x112) = *(short *)(*(int *)(param_1 + 0x1bc) + 0x22c); /* pending_frame */
    pv2 = (UIWidget *)*pn4;
    s1 = *(short *)(*(int *)(param_1 + 0x1bc) + 0x22c);
    pv2->anim_flag_0 = 0;
    pv2->anim_flag_2 = 0;
    pv2->anim_flag_1 = 0;
    pv2->anim_flag_3 = 0;
    FUN_00405d30(pv2,s1);
  }
  return;
}


/* FUN_0043c970 @ 0x0043c970 */

void FUN_0043c970(void *param_1)
{
  int n1;
  int **ppn2;
  int *_fs;
  int *v3c;
  int v38;
  int *v34;
  int v30;
  int v2c;
  int v28;
  int v24;
  int v20;
  void *v1c;
  int v18;
  int *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0043cb76;
  *_fs = &_seh_prev;
  v2c = 0;
  v30 = 0;
  v24 = 0;
  v28 = 0;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_0041ce10(param_1,&v28,4);
  FUN_0041ce10(v1c,&v30,4);
  /* TODO: offsets 0x1DA-0x1E6 on v1c are beyond known struct bounds */
  if ((((*(int *)((int)v1c + 0x1e6) /* TODO: offset 0x1E6 */ == 0) && (*(int *)((int)v1c + 0x1e2) /* TODO: offset 0x1E2 */ == 0)) &&
      (*(int *)((int)v1c + 0x1de) /* TODO: offset 0x1DE */ == 0)) &&
     (v14 = (int *)((int)v1c + 0x1da), *v14 == 0)) {
    FUN_00403030((int *)((int)v1c + 0x1e2),&v38,&v28);
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0043ca42();
    FUN_00403030(v14,&v18,&v30);
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0043ca3a();
  }
  n1 = *(int *)((int)v1c + 0x1e6) /* TODO: offset 0x1E6 */;
  if (n1 < v24) {
    v14 = (int *)(v24 - n1);
    v34 = v14;
    if ((int)v14 < 1) {
      v14 = (int *)-(int)v14;
      ppn2 = &v14;
    }
    else {
      ppn2 = &v34;
    }
    v2c = *(int *)((int)v1c + 0x1de) /* TODO: offset 0x1DE */ + (int)*ppn2;
  }
  else {
    v14 = (int *)(v24 - n1);
    v34 = v14;
    ppn2 = &v34;
    if ((int)v14 < 1) {
      v14 = (int *)-(int)v14;
      ppn2 = &v14;
    }
    v2c = *(int *)((int)v1c + 0x1de) /* TODO: offset 0x1DE */ - (int)*ppn2;
  }
  v34 = (int *)((int)v1c + 0x1e2);
  n1 = *(int *)((int)v1c + 0x1e2) /* TODO: offset 0x1E2 */;
  if (n1 < v28) {
    v14 = (int *)(v28 - n1);
    v3c = v14;
    ppn2 = &v3c;
    if ((int)v14 < 1) {
      v14 = (int *)-(int)v14;
      ppn2 = &v14;
    }
    v14 = *ppn2;
    v30 = *(int *)((int)v1c + 0x1da) /* TODO: offset 0x1DA */ + (int)v14;
  }
  else {
    v14 = (int *)(v28 - n1);
    v3c = v14;
    ppn2 = &v3c;
    if ((int)v14 < 1) {
      v14 = (int *)-(int)v14;
      ppn2 = &v14;
    }
    v14 = *ppn2;
    v30 = *(int *)((int)v1c + 0x1da) /* TODO: offset 0x1DA */ - (int)v14;
  }
  FUN_00403030((void *)((int)v1c + 0x1da),&v20,&v30);
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_0043cb66();
  FUN_00403030(v34,&v20,&v28);
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_0043cb5e();
  _seh_state &= ~0xFF;
  FUN_0043cb6e();
  _seh_state = 0xffffffff;
  FUN_0043cb80();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043ca3a @ 0x0043ca3a */

void FUN_0043ca3a(void) { return; }


/* FUN_0043ca42 @ 0x0043ca42 */

void FUN_0043ca42(void) { return; }


/* FUN_0043cb5e @ 0x0043cb5e */

void FUN_0043cb5e(void) { return; }


/* FUN_0043cb66 @ 0x0043cb66 */

void FUN_0043cb66(void) { return; }


/* FUN_0043cb6e @ 0x0043cb6e */

void FUN_0043cb6e(void) { return; }


/* FUN_0043cb80 @ 0x0043cb80 */

void FUN_0043cb80(void) { return; }


/* FUN_0043cb90 @ 0x0043cb90 */

void FUN_0043cb90(void *param_1,UIWidget *param_2)
{
  uint u1;
  int n2;

  if (param_2 != param_1) {
    FUN_0043c970(param_1);
  }
  if (((param_2->child_list_2 != NULL) &&
      (n2 = *(int *)((int)param_2->child_list_2 + 0xe) /* CVector: count at +0x0E */, n2 != 0)) &&
     (u1 = 1, n2 != 0)) {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0043cb90(param_1,*(UIWidget **)(**(int **)((int)param_2->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n2));
    } while (u1 <= *(uint *)((int)param_2->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0043cc00 @ 0x0043cc00 */

void FUN_0043cc00(void)
{
    /* STUB: 249 lines not yet reconstructed */
    return;
}


/* FUN_0043d1e4 @ 0x0043d1e4 */

void FUN_0043d1e4(void) { return; }


/* FUN_0043d1ec @ 0x0043d1ec */

void FUN_0043d1ec(void) { return; }


/* FUN_0043d1f4 @ 0x0043d1f4 */

void FUN_0043d1f4(void) { return; }


/* FUN_0043d20e @ 0x0043d20e */

void FUN_0043d20e(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -100));
  return;
}


/* FUN_0043d220 @ 0x0043d220 */

int __fastcall FUN_0043d220(int *param_1)
{
  return *param_1 >> 8;
}


/* FUN_0043d230 @ 0x0043d230 */

int __fastcall FUN_0043d230(int *param_1)
{
  return *param_1 >> 8;
}


/* FUN_0043d240 @ 0x0043d240 */

void __cdecl FUN_0043d240(int *param_1,int param_2,int param_3)
{
  *param_1 = param_2 - param_3;
  return;
}


/* FUN_0043d250 @ 0x0043d250 */

void __fastcall FUN_0043d250(int param_1)
{
  UIWidget *pv1;
  int n2;
  int *pn3;
  bool b4;
  int *pn5;
  int *pn6;
  int n7;

  for (pn3 = DAT_00480550; pn5 = DAT_0048055c, pn3 != (int *)0x0; pn3 = (int *)pn3[1]
      ) {
    b4 = false;
    if (*(short *)(param_1 + 0x1cc) == 0) {
      for (; pn5 != (int *)0x0; pn5 = (int *)pn5[1]) {
        if (((((*(uint *)(*pn5 + 0x12) >> 6 & 1) != 0) &&
             (n2 = *(int *)(*pn5 + 0x36), n2 != 0)) &&
            (n7 = *(int *)(n2 + 0xe), n7 != 0)) && (n7 != 0)) {
          pn6 = (int *)**(int **)(n2 + 4);
          do {
            if (*pn6 == *pn3) {
              b4 = true;
            }
            pn6 = pn6 + 1;
            n7 = n7 + -1;
          } while (n7 != 0);
        }
      }
      if (b4) {
        *(short *)(*pn3 + 0x112) = 4; /* pending_frame */
        pv1 = (UIWidget *)*pn3;
        pv1->anim_flag_0 = 0;
        pv1->anim_flag_2 = 0;
        pv1->anim_flag_1 = 0;
        pv1->anim_flag_3 = 0;
        FUN_00405d30(pv1,4);
      }
      else {
        *(short *)(*pn3 + 0x112) = 0; /* pending_frame */
      }
    }
    else {
      *(short *)(*pn3 + 0x112) = 1; /* pending_frame */
      pv1 = (UIWidget *)*pn3;
      pv1->anim_flag_0 = 0;
      pv1->anim_flag_2 = 0;
      pv1->anim_flag_1 = 0;
      pv1->anim_flag_3 = 0;
      FUN_00405d30(pv1,1);
    }
  }
  for (; pn5 != (int *)0x0; pn5 = (int *)pn5[1]) {
    pv1 = (UIWidget *)*pn5;
    if ((pv1->flags >> 6 & 1) != 0) {
      FUN_0043cb90(pv1,pv1);
    }
  }
  return;
}


/* FUN_0043d9ca @ 0x0043d9ca */

void FUN_0043d9ca(void) { return; }


/* FUN_0043d9d2 @ 0x0043d9d2 */

void FUN_0043d9d2(void) { return; }


/* FUN_0043d9e4 @ 0x0043d9e4 */

void FUN_0043d9e4(void) { return; }


/* FUN_0043dc28 @ 0x0043dc28 */

void FUN_0043dc28(void)
{
  int _ebp;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(_ebp + -0x14) + 0x1d0),0x16,4,FUN_0040f520)
  ;
  return;
}


/* FUN_0043dc4a @ 0x0043dc4a */

void FUN_0043dc4a(void)
{
  FUN_00411360();
  return;
}


/* FUN_0043dc60 @ 0x0043dc60 */

void __fastcall FUN_0043dc60(int param_1)
{
  FUN_00409330();
  FUN_0043a700(DAT_004838c0,0x5e1000d,*(int **)(param_1 + 0x1d6));
  if (*(uint *)(param_1 + 0x198) != 0) {
    FUN_0040f070(DAT_004838c0,0x2d0000c,*(uint *)(param_1 + 0x198));
    *(int *)(param_1 + 0x198) = 0;
  }
  if (*(uint *)(param_1 + 0x1a8) != 0) {
    FUN_0040f070(DAT_004838c0,0xc1000c,*(uint *)(param_1 + 0x1a8));
    *(int *)(param_1 + 0x1a8) = 0;
  }
  if (*(uint *)(param_1 + 0x1ac) != 0) {
    FUN_0040f070(DAT_004838c0,0xb7000c,*(uint *)(param_1 + 0x1ac));
    *(int *)(param_1 + 0x1ac) = 0;
  }
  if (*(uint *)(param_1 + 0x19c) != 0) {
    FUN_0040f070(DAT_004838c0,0xb2000c,*(uint *)(param_1 + 0x19c));
    *(int *)(param_1 + 0x19c) = 0;
  }
  if (*(uint *)(param_1 + 0x1a0) != 0) {
    FUN_0040f070(DAT_004838c0,0xab000c,*(uint *)(param_1 + 0x1a0));
    *(int *)(param_1 + 0x1a0) = 0;
  }
  if (*(uint *)(param_1 + 0x1a4) != 0) {
    FUN_0040f070(DAT_004838c0,0xdc000c,*(uint *)(param_1 + 0x1a4));
    *(int *)(param_1 + 0x1a4) = 0;
  }
  if (*(uint *)(param_1 + 0x1b0) != 0) {
    FUN_0040f070(DAT_004838c0,0xdc000c,*(uint *)(param_1 + 0x1b0));
    *(int *)(param_1 + 0x1b0) = 0;
  }
  FUN_0043e530();
  return;
}


/* FUN_0043e4d8 @ 0x0043e4d8 */

void FUN_0043e4d8(void) { return; }


/* FUN_0043e4e0 @ 0x0043e4e0 */

void FUN_0043e4e0(void) { return; }


/* FUN_0043e4f2 @ 0x0043e4f2 */

void FUN_0043e4f2(void) { return; }


/* FUN_0043e500 @ 0x0043e500 */

void __fastcall FUN_0043e500(void *param_1)
{
  /* TODO: offsets 0x1BC-0x1CC suggest extended widget beyond DialogWidget */
  if (*(short *)((int)param_1 + 0x1cc) /* TODO: offset 0x1CC */ == 0) {
    *(short *)((int)param_1 + 0x1ca) /* TODO: offset 0x1CA */ = 1;
    FUN_0042dba0(param_1,*(int *)((int)param_1 + 0x1bc) /* TODO: offset 0x1BC */ + 0x32);
    *(short *)((int)param_1 + 0x1ca) /* TODO: offset 0x1CA */ = 0;
  }
  return;
}


/* FUN_0043e530 @ 0x0043e530 */

void FUN_0043e530(void)
{
  if (DAT_004805fc != 0) {
    FUN_00434490(DAT_004805fc);
    DAT_004805fc = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488e18,DAT_00488e00);
  }
  return;
}


/* FUN_0043e580 @ 0x0043e580 */

void FUN_0043e580(void)
{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488e50,u1,_p_fffffff4);
  return;
}


/* FUN_0043e5d0 @ 0x0043e5d0 */

void FUN_0043e5d0(void) { return; }


/* FUN_0043e5f0 @ 0x0043e5f0 */

/* NOTE: overlapping globals */

void FUN_0043e5f0(void)
{
  _DAT_00488e6e = 0;
  _DAT_00488e6c = 0;
  return;
}


/* FUN_0043e600 @ 0x0043e600 */

void FUN_0043e600(void)
{
  _atexit(FUN_0043e610);
  return;
}


/* FUN_0043e610 @ 0x0043e610 */

void FUN_0043e610(void) { return; }


/* FUN_0043e630 @ 0x0043e630 */

/* NOTE: overlapping globals */

void FUN_0043e630(void)
{
  _DAT_00488e6a = 0;
  _DAT_00488e68 = 0;
  return;
}


/* FUN_0043e640 @ 0x0043e640 */

void FUN_0043e640(void)
{
  _atexit(FUN_0043e650);
  return;
}


/* FUN_0043e650 @ 0x0043e650 */

void FUN_0043e650(void) { return; }


/* FUN_0043e900 @ 0x0043e900 */

int * __fastcall FUN_0043e900(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043e94b;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00474ef0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0043e960 @ 0x0043e960 */

int * __thiscall FUN_0043e960(void *this,byte param_1)
{
  FUN_0043e980(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043e980 @ 0x0043e980 */

void __fastcall FUN_0043e980(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043e9bd;
  *param_1 = &PTR_FUN_00474ef0;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_0043e9c7();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043e9c7 @ 0x0043e9c7 */

void FUN_0043e9c7(void)
{
  FUN_004012a0();
  return;
}


/* FUN_0043e9d0 @ 0x0043e9d0 */

void __fastcall FUN_0043e9d0(void *param_1)
{
    /* STUB: 156 lines not yet reconstructed */
    return;
}


/* FUN_0043ed53 @ 0x0043ed53 */

void FUN_0043ed53(void) { return; }


/* FUN_0043ed5b @ 0x0043ed5b */

void FUN_0043ed5b(void) { return; }


/* FUN_0043ed63 @ 0x0043ed63 */

void FUN_0043ed63(void) { return; }


/* FUN_0043ed6b @ 0x0043ed6b */

void FUN_0043ed6b(void) { return; }


/* FUN_0043ed7d @ 0x0043ed7d */

void FUN_0043ed7d(void) { return; }


/* FUN_0043ed90 @ 0x0043ed90 */

int * __fastcall FUN_0043ed90(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043edee;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00474f98;
  *_fs = _seh_prev;
  DAT_00488e64 = param_1;
  *(short *)&((GameWidget *)param_1)->pair_x_1 = 1; /* offset 0x11A - writes low 2 bytes of pair_x_1 */
  param_1[0x47] = 0;
  return param_1;
}


/* FUN_0043ee00 @ 0x0043ee00 */

int * __thiscall FUN_0043ee00(void *this,byte param_1)
{
  FUN_0043ee20(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043ee20 @ 0x0043ee20 */

void __fastcall FUN_0043ee20(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043ee72;
  *param_1 = &PTR_FUN_00474f98;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (param_1[0x47] != 0) {
    FUN_0043ef30((int)param_1);
  }
  _seh_state = 0xffffffff;
  FUN_0043ee7c();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043ee7c @ 0x0043ee7c */

void FUN_0043ee7c(void)
{
  FUN_004012a0();
  return;
}


/* FUN_0043ee90 @ 0x0043ee90 */

int __thiscall
FUN_0043ee90(void *this,int param_1,short param_2,short param_3)
{
    /* STUB: 26 lines not yet reconstructed */
    return 0;
}


/* FUN_0043ef10 @ 0x0043ef10 */

void __fastcall FUN_0043ef10(DialogWidget *param_1)
{
  int *pu1;

  for (pu1 = (int *)param_1->child_list; pu1 != (int *)0x0;
      pu1 = *(int **)((int)pu1 + 10)) {  /* TODO: linked list next pointer at node+0x0A */
    FUN_0041dd40((void *)*pu1);
  }
  return;
}


/* FUN_0043ef30 @ 0x0043ef30 */

void __fastcall FUN_0043ef30(int param_1)
{
    /* STUB: 22 lines not yet reconstructed */
    return;
}


/* FUN_0043ef90 @ 0x0043ef90 */

void FUN_0043ef90(void)
{
    /* STUB: 105 lines not yet reconstructed */
    return;
}


/* FUN_0043f219 @ 0x0043f219 */

void FUN_0043f219(void) { return; }


/* FUN_0043f221 @ 0x0043f221 */

void FUN_0043f221(void) { return; }


/* FUN_0043f229 @ 0x0043f229 */

void FUN_0043f229(void) { return; }


/* FUN_0043f231 @ 0x0043f231 */

void FUN_0043f231(void) { return; }


/* FUN_0043f243 @ 0x0043f243 */

void FUN_0043f243(void) { return; }


/* FUN_0043f536 @ 0x0043f536 */

void FUN_0043f536(void) { return; }


/* FUN_0043f53e @ 0x0043f53e */

void FUN_0043f53e(void) { return; }


/* FUN_0043f546 @ 0x0043f546 */

void FUN_0043f546(void) { return; }


/* FUN_0043f54e @ 0x0043f54e */

void FUN_0043f54e(void) { return; }


/* FUN_0043f556 @ 0x0043f556 */

void FUN_0043f556(void) { return; }


/* FUN_0043f55e @ 0x0043f55e */

void FUN_0043f55e(void) { return; }


/* FUN_0043f566 @ 0x0043f566 */

void FUN_0043f566(void) { return; }


/* FUN_0043f56e @ 0x0043f56e */

void FUN_0043f56e(void) { return; }


/* FUN_0043f590 @ 0x0043f590 */

int * __fastcall FUN_0043f590(int *param_1)
{
    /* STUB: 50 lines not yet reconstructed */
    return 0;
}


/* FUN_0043f740 @ 0x0043f740 */

int * __thiscall FUN_0043f740(void *this,byte param_1)
{
  FUN_0043f760(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043f760 @ 0x0043f760 */

void __fastcall FUN_0043f760(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043f79d;
  *param_1 = &PTR_FUN_00475040;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_0043f7a7();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
}


/* FUN_0043f7a7 @ 0x0043f7a7 */

void FUN_0043f7a7(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0043f7b0 @ 0x0043f7b0 */

void FUN_0043f7b0(void *param_1)
{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_0043f8a3 @ 0x0043f8a3 */

void FUN_0043f8a3(void) { return; }


/* FUN_0043f8b5 @ 0x0043f8b5 */

void FUN_0043f8b5(void) { return; }


/* FUN_0043f8c0 @ 0x0043f8c0 */

void FUN_0043f8c0(UIWidget *param_1)
{
  uint u1;
  int n2;

  param_1->field_109 = 0;
  if (((param_1->child_list_2 != NULL) &&
      (n2 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, n2 != 0)) && (u1 = 1, n2 != 0)) {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0043f8c0(*(UIWidget **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n2));
    } while (u1 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0043f920 @ 0x0043f920 */

void __thiscall FUN_0043f920(void *this,int param_1,int param_2)
{
    /* STUB: 128 lines not yet reconstructed */
    return;
}


/* FUN_0043fcd1 @ 0x0043fcd1 */

void FUN_0043fcd1(void) { return; }


/* FUN_0043fcf0 @ 0x0043fcf0 */

void FUN_0043fcf0(void) { return; }


/* FUN_0043fd00 @ 0x0043fd00 */

void __thiscall FUN_0043fd00(void *this,int param_1,int param_2)
{
    /* STUB: 69 lines not yet reconstructed */
    return;
}


/* FUN_0043ff59 @ 0x0043ff59 */

void FUN_0043ff59(void) { return; }


/* FUN_0043ff70 @ 0x0043ff70 */

void __fastcall FUN_0043ff70(void *param_1)
{
    /* STUB: 170 lines not yet reconstructed */
    return;
}


