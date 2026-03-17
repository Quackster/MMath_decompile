/*
 * game_logic.c - Core game logic
 * Address range: 0x409000 - 0x40FFFF
 * Functions: 209
 *
 * Reconstructed source for MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_0040908f @ 0x0040908f */

void FUN_0040908f(void) { return; }


/* FUN_004090a0 @ 0x004090a0 */

void FUN_004090a0(void) { return; }


/* FUN_004090b2 @ 0x004090b2 */

void FUN_004090b2(void) { return; }


/* FUN_004090c0 @ 0x004090c0 */

int * __thiscall FUN_004090c0(int *this,int *param_1)

{
  this[0] = 0;
  this[1] = 0;
  this[1] = param_1[1];
  this[0] = *param_1;
  return this;
}


/* FUN_004090e0 @ 0x004090e0 */

void FUN_004090e0(int param_1)

{
    /* STUB: 8 lines not yet reconstructed */
    return;
}


/* FUN_00409140 @ 0x00409140 */

void FUN_00409140(short *param_1)

{
    /* STUB: 8 lines not yet reconstructed */
    return;
}


/* FUN_004091a0 @ 0x004091a0 */

void __thiscall FUN_004091a0(void *this,int *param_1)

{
    /* STUB: 49 lines not yet reconstructed */
    return;
}


/* FUN_00409297 @ 0x00409297 */

void FUN_00409297(void) { return; }


/* FUN_004092c0 @ 0x004092c0 */

void __thiscall FUN_004092c0(GameWidget *this,int param_1,int param_2)

{
  uint u1;
  int n2;

  this->animation_timer = param_1;
  if (((((char)param_2 != '\0') && (this->child_list_2 != 0)) &&
      (n2 = *(int *)((int)this->child_list_2 + 0xe), n2 != 0)) && (u1 = 1, n2 != 0))  /* child_list_2 sub-struct count at +0xe */
  {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_004092c0(*(void **)(**(int **)((int)this->child_list_2 + 4) + -8 + n2),param_1,  /* child_list_2 sub-struct data at +4 */
                   param_2);
    } while (u1 <= *(uint *)((int)this->child_list_2 + 0xe));  /* child_list_2 sub-struct count at +0xe */
  }
  FUN_0041cad0(this);
  return;
}


/* FUN_00409330 @ 0x00409330 */

void FUN_00409330(void)

{
  char *pc1;
  uint u2;
  short s3;
  
  s3 = 0;
  u2 = DAT_0047e7b0;
  do {
    pc1 = (char *)(&DAT_004841a8)[s3];
    if (pc1 != (char *)0x0) {
      if ((u2 == 0) && (pc1 != (char *)0x0)) {
        thunk_FUN_0042f1c0(pc1);
        FUN_0046c410((uint)pc1);
        u2 = DAT_0047e7b0;
      }
      (&DAT_004841a8)[s3] = 0;
    }
    s3 = s3 + 1;
  } while (s3 < 0x10);
  if (u2 != 0) {
    FUN_00457b10(DAT_004838c0,0,u2);
    DAT_0047e7b0 = 0;
  }
  return;
}


/* FUN_004093a0 @ 0x004093a0 */

void __cdecl FUN_004093a0(int *param_1)

{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_00409460 @ 0x00409460 */

void __cdecl FUN_00409460(void *param_1,int param_2)

{
  ushort *pu1;
  int n2;
  int n3;
  short s4;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    pu1 = FUN_00457a10(param_1,param_2);
    if (pu1 != (ushort *)0x0) {
      s4 = 0;
      DAT_0047e7b0 = pu1;
      do {
        if (s4 < (short)*pu1) {
          n3 = *(int *)(pu1 + 8) + s4 * 8;
        }
        else {
          n3 = (short)*pu1 * 8 + *(int *)(pu1 + 8) + -8;
        }
        n2 = (int)s4;
        s4 = s4 + 1;
        (&DAT_004841a8)[n2] = n3;
      } while (s4 < 0x10);
    }
  }
  return;
}


/* FUN_004094d0 @ 0x004094d0 */

void __thiscall FUN_004094d0(UIWidget *this,short param_1,char param_2)

{
  int _ebx;
  int n1;
  uint u2;

  *(short *)((int)this + 0x44) = param_1;  /* TODO: unknown offset 0x44 in _pad42 region of UIWidget */
  if (param_1 == -1) {
    FUN_00409580(this,'\x01');
    return;
  }
  if (0x10 < param_1) {
    *(short *)((int)this + 0x44) = 0x10;  /* TODO: unknown offset 0x44 in _pad42 region */
  }
  if (*(short *)((int)this + 0x44) < 0) {  /* TODO: unknown offset 0x44 in _pad42 region */
    *(short *)((int)this + 0x44) = 0;  /* TODO: unknown offset 0x44 in _pad42 region */
  }
  if (((param_2 != '\0') && ((int)this->child_list_2 != 0)) &&
     (u2 = 1, *(int *)((int)this->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_004094d0(*(UIWidget **)(**(int **)((int)this->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n1),
                   *(short *)((int)this + 0x44),param_2);  /* TODO: unknown offset 0x44 in _pad42 region */
    } while (u2 <= *(uint *)((int)this->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  FUN_0041ab40((&DAT_004841a8)[*(short *)((int)this + 0x44)]);  /* TODO: unknown offset 0x44 in _pad42 region */
  FUN_004092c0(this,2,CONCAT31((unsigned int)((uint)_ebx >> 8),param_2));
  return;
}


/* FUN_00409580 @ 0x00409580 */

void __thiscall FUN_00409580(UIWidget *this,char param_1)

{
  int _ebx;
  int n1;
  uint u2;

  *(short *)((int)this + 0x44) = (short)0xffff;  /* TODO: unknown offset 0x44 in _pad42 region of UIWidget */
  if (((param_1 != '\0') && ((int)this->child_list_2 != 0)) &&
     (u2 = 1, *(int *)((int)this->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_00409580(*(UIWidget **)(**(int **)((int)this->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n1),'\x01');
    } while (u2 <= *(uint *)((int)this->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  FUN_0041ab40(0);
  FUN_004092c0(this,1,CONCAT31((unsigned int)((uint)_ebx >> 8),param_1));
  return;
}


/* FUN_004095f0 @ 0x004095f0 */

void __thiscall FUN_004095f0(int *this,int *param_1,int *param_2)

{
  int u1;
  int n2;
  int n3;
  int n4;
  int n5;
  int *_fs;
  char loc_10 [12];

  u1 = *_fs;
  *_fs = (int)loc_10;
  n2 = this[0];
  n3 = *param_2;
  n4 = this[1];
  n5 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = n4 + n5;
  *param_1 = n2 + n3;
  *_fs = u1;
  return;
}


/* FUN_00409670 @ 0x00409670 */

void __thiscall FUN_00409670(int *this,int *param_1,int *param_2)

{
  int u1;
  int n2;
  int n3;
  int n4;
  int n5;
  int *_fs;
  char loc_10 [12];

  u1 = *_fs;
  *_fs = (int)loc_10;
  n2 = this[0];
  n3 = *param_2;
  n4 = this[1];
  n5 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = n4 - n5;
  *param_1 = n2 - n3;
  *_fs = u1;
  return;
}


/* FUN_004096f0 @ 0x004096f0 */

short * __thiscall FUN_004096f0(short *this,short *param_1,short *param_2)

{
  int u1;
  short u2;
  int *_fs;
  char loc_10 [12];

  u1 = *_fs;
  *_fs = (int)loc_10;
  u2 = param_2[1];
  this[1] = u2;
  this[0] = *param_2;
  param_1[1] = u2;
  *param_1 = this[0];
  *_fs = u1;
  return param_1;
}


/* FUN_00409770 @ 0x00409770 */

ushort __fastcall FUN_00409770(ushort *param_1)

{
  ushort u1;
  
  u1 = param_1[3];
  if (((short)param_1[1] < (short)u1) && (u1 = *param_1, (short)u1 < (short)param_1[2])) {
    return u1 & 0xff00;
  }
  return CONCAT11((char)(u1 >> 8),1);
}


/* FUN_00409790 @ 0x00409790 */

void __thiscall
FUN_00409790(GameWidget *this,short param_1,short param_2,short param_3,short param_4)

{
  *(short *)((int)this + 2) = param_1;  /* TODO: offset 0x02 within vtable pointer - likely not GameWidget */
  *(short *)this = param_2;
  this->field_06 = param_3;
  this->field_04 = param_4;
  return;
}


/* FUN_004097c0 @ 0x004097c0 */

void __fastcall FUN_004097c0(int *param_1)

{
  *param_1 = &PTR_LAB_0047241c;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* FUN_00409830 @ 0x00409830 */

void __thiscall FUN_00409830(GameWidget *this,short *param_1)

{
  *(short *)((int)this + 2) = param_1[1];  /* TODO: offset 0x02 within vtable pointer - likely not GameWidget */
  *(short *)this = *param_1;
  this->field_06 = param_1[3];
  this->field_04 = param_1[2];
  return;
}


/* FUN_00409870 @ 0x00409870 */

void FUN_00409870(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004841f8,u1,_p_fffffff4);
  return;
}


/* FUN_004098c0 @ 0x004098c0 */

void FUN_004098c0(void) { return; }


/* FUN_004098e0 @ 0x004098e0 */

/* NOTE: overlapping globals */

void FUN_004098e0(void)

{
  _DAT_00484206 = 0;
  _DAT_00484204 = 0;
  return;
}


/* FUN_004098f0 @ 0x004098f0 */

void FUN_004098f0(void)

{
  _atexit(FUN_00409900);
  return;
}


/* FUN_00409900 @ 0x00409900 */

void FUN_00409900(void) { return; }


/* FUN_00409920 @ 0x00409920 */

/* NOTE: overlapping globals */

void FUN_00409920(void)

{
  _DAT_00484202 = 0;
  _DAT_00484200 = 0;
  return;
}


/* FUN_00409930 @ 0x00409930 */

void FUN_00409930(void)

{
  _atexit(FUN_00409940);
  return;
}


/* FUN_00409940 @ 0x00409940 */

void FUN_00409940(void) { return; }


/* FUN_00409950 @ 0x00409950 */

int * __thiscall
FUN_00409950(SoundPlayer *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  int n1;
  DWORD DVar2;
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_004099fe;
  *_fs = &loc_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  loc_8 = 0;
  *(void ***)this = &PTR_FUN_004724e8;
  n1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 1;
  DVar2 = GetTickCount();
  *(DWORD *)(n1 + 4) = DVar2;
  *(DWORD *)(n1 + 0xc) = DVar2;
  this->sequence_data[55] = 0;
  this->sequence_data[56] = 0;
  FUN_0042c0e0(this);
  FUN_00409ac0();
  FUN_0042bf70(this);
  *(char *)(*(int *)(DAT_004897c0 + 0x52) + 0x174) = 0;
  *_fs = loc_10;
  return this;
}


/* FUN_00409a10 @ 0x00409a10 */

GameWidget * __thiscall FUN_00409a10(GameWidget *this,byte param_1)

{
  FUN_00409a30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00409a30 @ 0x00409a30
 * Struct types: GameWidget (this)
 * Destructor — sets vtable, releases object_ptr and scrollbar_ref.
 */

void __fastcall FUN_00409a30(GameWidget *this)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;

  loc_10 = *_fs;
  _handler = &L_00409aa2;
  this->vtable = (void **)&PTR_FUN_004724e8;
  *_fs = &loc_10;
  loc_8 = 0;
  FUN_00434490((int)this->object_ptr);
  FUN_0043a700(DAT_004838c0,0,(int *)this->scrollbar_ref);
  loc_8 = 0xffffffff;
  FUN_00409aac();
  /* SEH epilog */
  *_fs = loc_10;
  return;
}


/* FUN_00409aac @ 0x00409aac */

void FUN_00409aac(void)

{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_00409ac0 @ 0x00409ac0 */

void FUN_00409ac0(void) { return; }


/* FUN_00409bd0 @ 0x00409bd0 */

int * __fastcall FUN_00409bd0(int *param_1)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_00409c2b;
  *_fs = &loc_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004725a8;
  param_1[0x47] = 0x1000d;
  param_1[0x46] = 0;
  *_fs = loc_10;
  return param_1;
}


/* FUN_00409cc9 @ 0x00409cc9 */

void FUN_00409cc9(void)

{
  FUN_004012a0();
  return;
}


/* FUN_00409f8b @ 0x00409f8b */

void FUN_00409f8b(void) { return; }


/* FUN_00409f9d @ 0x00409f9d */

void FUN_00409f9d(void) { return; }


/* FUN_00409fb0 @ 0x00409fb0 */

int * __thiscall FUN_00409fb0(void *this,int param_1)

{
  *(int *)this = *(int *)this - param_1;
  return this;
}


/* FUN_00409fc0 @ 0x00409fc0 */

void FUN_00409fc0(char *param_1)

{
  void *this;
  
  if (*(void **)(DAT_004897c0 + 0x52) != (void *)0x0) {
    this = (void *)FUN_0042e020(*(void **)(DAT_004897c0 + 0x52));
    FUN_00458860(this,param_1);
  }
  return;
}


/* FUN_00409fe0 @ 0x00409fe0 */

void FUN_00409fe0(void)

{
  FUN_0042e020(*(void **)(DAT_004897c0 + 0x52));
  return;
}


/* FUN_0040a190 @ 0x0040a190 */

void FUN_0040a190(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484208,u1,_p_fffffff4);
  return;
}


/* FUN_0040a1e0 @ 0x0040a1e0 */

void FUN_0040a1e0(void) { return; }


/* FUN_0040a200 @ 0x0040a200 */

/* NOTE: overlapping globals */

void FUN_0040a200(void)

{
  _DAT_00484216 = 0;
  _DAT_00484214 = 0;
  return;
}


/* FUN_0040a210 @ 0x0040a210 */

void FUN_0040a210(void)

{
  _atexit(FUN_0040a220);
  return;
}


/* FUN_0040a220 @ 0x0040a220 */

void FUN_0040a220(void) { return; }


/* FUN_0040a240 @ 0x0040a240 */

/* NOTE: overlapping globals */

void FUN_0040a240(void)

{
  _DAT_00484212 = 0;
  _DAT_00484210 = 0;
  return;
}


/* FUN_0040a250 @ 0x0040a250 */

void FUN_0040a250(void)

{
  _atexit(FUN_0040a260);
  return;
}


/* FUN_0040a260 @ 0x0040a260 */

void FUN_0040a260(void) { return; }


/* FUN_0040a270 @ 0x0040a270 */

void __cdecl FUN_0040a270(int param_1,char *param_2,short param_3)

{
  if (param_3 == 0) {
    FUN_0040a2d0(param_1,param_2);
    return;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      FUN_0040a3b0(param_1,param_2);
      return;
    }
    FUN_0040a370(param_1,param_2);
    return;
  }
  FUN_0040a310(param_1,param_2);
  return;
}


/* FUN_0040a2d0 @ 0x0040a2d0 */

int __cdecl FUN_0040a2d0(int param_1,char *param_2)

{
  char c1;
  uint _eax;
  uint u2;
  
  u2 = 0;
  c1 = *param_2;
  while( true ) {
    if (c1 == '\0') {
      return CONCAT31(_eax >> 8,1);
    }
    if (param_2[u2] != *(char *)(u2 + param_1)) break;
    u2 = (uint)(ushort)((short)u2 + 1);
    c1 = param_2[u2];
    _eax = u2;
  }
  return u2 & 0xffffff00;
}


/* FUN_0040a310 @ 0x0040a310 */

int __cdecl FUN_0040a310(int param_1,char *param_2)

{
  char c1;
  uint _eax;
  uint u2;
  uint u3;
  uint u4;
  
  u4 = 0;
  c1 = *param_2;
  while( true ) {
    if (c1 == '\0') {
      return CONCAT31(_eax >> 8,1);
    }
    u2 = toupper((int)param_2[u4]);
    u3 = toupper((int)*(char *)(param_1 + u4));
    if (u2 != u3) break;
    u4 = (uint)(ushort)((short)u4 + 1);
    c1 = param_2[u4];
    _eax = u4;
  }
  return u3 & 0xffffff00;
}


/* FUN_0040a370 @ 0x0040a370 */

int __cdecl FUN_0040a370(int param_1,char *param_2)

{
  char c1;
  uint _eax;
  uint u2;
  
  u2 = 0;
  c1 = *param_2;
  while( true ) {
    if (c1 == '\0') {
      return CONCAT31(_eax >> 8,1);
    }
    if (*(char *)(u2 + param_1) != param_2[u2]) break;
    u2 = (uint)(ushort)((short)u2 + 1);
    c1 = param_2[u2];
    _eax = u2;
  }
  return u2 & 0xffffff00;
}


/* FUN_0040a3b0 @ 0x0040a3b0 */

int __cdecl FUN_0040a3b0(int param_1,char *param_2)

{
  char c1;
  uint _eax;
  uint u2;
  uint u3;
  uint u4;
  
  u4 = 0;
  c1 = *param_2;
  while( true ) {
    if (c1 == '\0') {
      return CONCAT31(_eax >> 8,1);
    }
    u2 = toupper((int)*(char *)(param_1 + u4));
    u3 = toupper((int)param_2[u4]);
    if (u2 != u3) break;
    u4 = (uint)(ushort)((short)u4 + 1);
    c1 = param_2[u4];
    _eax = u4;
  }
  return u3 & 0xffffff00;
}


/* FUN_0040a410 @ 0x0040a410 */

char * __cdecl FUN_0040a410(char *param_1)

{
  char c1;
  
  if (param_1 != (char *)0x0) {
    c1 = *param_1;
    while (c1 != '\0') {
      param_1 = param_1 + 1;
      c1 = *param_1;
    }
    return param_1;
  }
  return (char *)0x0;
}


/* FUN_0040a440 @ 0x0040a440 */

void FUN_0040a440(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484218,u1,_p_fffffff4);
  return;
}


/* FUN_0040a490 @ 0x0040a490 */

void FUN_0040a490(void) { return; }


/* FUN_0040a4b0 @ 0x0040a4b0 */

/* NOTE: overlapping globals */

void FUN_0040a4b0(void)

{
  _DAT_00484236 = 0;
  _DAT_00484234 = 0;
  return;
}


/* FUN_0040a4c0 @ 0x0040a4c0 */

void FUN_0040a4c0(void)

{
  _atexit(FUN_0040a4d0);
  return;
}


/* FUN_0040a4d0 @ 0x0040a4d0 */

void FUN_0040a4d0(void) { return; }


/* FUN_0040a4f0 @ 0x0040a4f0 */

/* NOTE: overlapping globals */

void FUN_0040a4f0(void)

{
  _DAT_00484232 = 0;
  _DAT_00484230 = 0;
  return;
}


/* FUN_0040a500 @ 0x0040a500 */

void FUN_0040a500(void)

{
  _atexit(FUN_0040a510);
  return;
}


/* FUN_0040a510 @ 0x0040a510 */

void FUN_0040a510(void) { return; }


/* FUN_0040a530 @ 0x0040a530 */

void FUN_0040a530(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484240,u1,_p_fffffff4);
  return;
}


/* FUN_0040a570 @ 0x0040a570 */

void FUN_0040a570(void)

{
  _atexit(FUN_0040a580);
  return;
}


/* FUN_0040a580 @ 0x0040a580 */

void FUN_0040a580(void) { return; }


/* FUN_0040a5a0 @ 0x0040a5a0 */

/* NOTE: overlapping globals */

void FUN_0040a5a0(void)

{
  _DAT_00484266 = 0;
  _DAT_00484264 = 0;
  return;
}


/* FUN_0040a5b0 @ 0x0040a5b0 */

void FUN_0040a5b0(void)

{
  _atexit(FUN_0040a5c0);
  return;
}


/* FUN_0040a5c0 @ 0x0040a5c0 */

void FUN_0040a5c0(void) { return; }


/* FUN_0040a5e0 @ 0x0040a5e0 */

/* NOTE: overlapping globals */

void FUN_0040a5e0(void)

{
  _DAT_00484262 = 0;
  _DAT_00484260 = 0;
  return;
}


/* FUN_0040a5f0 @ 0x0040a5f0 */

void FUN_0040a5f0(void)

{
  _atexit(FUN_0040a600);
  return;
}


/* FUN_0040a600 @ 0x0040a600 */

void FUN_0040a600(void) { return; }


/* FUN_0040a620 @ 0x0040a620 */

void FUN_0040a620(void)

{
  DAT_00484254 = 0;
  DAT_00484250 = 0;
  return;
}


/* FUN_0040a630 @ 0x0040a630 */

void FUN_0040a630(void)

{
  _atexit(FUN_0040a640);
  return;
}


/* FUN_0040a640 @ 0x0040a640 */

void FUN_0040a640(void) { return; }


/* FUN_0040a6c0 @ 0x0040a6c0 */

int * __fastcall FUN_0040a6c0(int *param_1)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_0040a70b;
  *_fs = &loc_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004726b0;
  *_fs = loc_10;
  return param_1;
}


/* FUN_0040a720 @ 0x0040a720 */

void * __thiscall FUN_0040a720(void *this,byte param_1)

{
  FUN_0040a740(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0040a740 @ 0x0040a740 */

void __fastcall FUN_0040a740(int *param_1)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  loc_10 = *_fs;
  _handler = &L_0040a77d;
  *param_1 = &PTR_FUN_004726b0;
  *_fs = &loc_10;
  loc_8 = 0xffffffff;
  FUN_0040a787();
  /* SEH epilog */
  *_fs = loc_10;
  return;
}


/* FUN_0040a787 @ 0x0040a787 */

void FUN_0040a787(void)

{
  FUN_004012a0();
  return;
}


/* FUN_0040ab15 @ 0x0040ab15 */

void FUN_0040ab15(void) { return; }


/* FUN_0040ab1d @ 0x0040ab1d */

void FUN_0040ab1d(void) { return; }


/* FUN_0040ab25 @ 0x0040ab25 */

void FUN_0040ab25(void) { return; }


/* FUN_0040ab2d @ 0x0040ab2d */

void FUN_0040ab2d(void) { return; }


/* FUN_0040ab35 @ 0x0040ab35 */

void FUN_0040ab35(void) { return; }


/* FUN_0040ab3d @ 0x0040ab3d */

void FUN_0040ab3d(void) { return; }


/* FUN_0040ab45 @ 0x0040ab45 */

void FUN_0040ab45(void) { return; }


/* FUN_0040ab4d @ 0x0040ab4d */

void FUN_0040ab4d(void) { return; }


/* FUN_0040ab55 @ 0x0040ab55 */

void FUN_0040ab55(void) { return; }


/* FUN_0040ab67 @ 0x0040ab67 */

void FUN_0040ab67(void) { return; }


/* FUN_0040ab70 @ 0x0040ab70 */

int * __fastcall FUN_0040ab70(int *param_1)

{
    /* STUB: 25 lines not yet reconstructed */
    return 0;
}


/* FUN_0040ac20 @ 0x0040ac20 */

void * __thiscall FUN_0040ac20(void *this,byte param_1)

{
  FUN_0040ac40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0040ac40 @ 0x0040ac40 */

void __fastcall FUN_0040ac40(int *param_1)

{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_0040acbb @ 0x0040acbb */

void FUN_0040acbb(void)

{
  FUN_004012a0();
  return;
}


/* FUN_0040acd0 @ 0x0040acd0 */

void FUN_0040acd0(void)

{
    /* STUB: 201 lines not yet reconstructed */
    return;
}


/* FUN_0040b1a9 @ 0x0040b1a9 */

void FUN_0040b1a9(void) { return; }


/* FUN_0040b1be @ 0x0040b1be */

void FUN_0040b1be(void) { return; }


/* FUN_0040b1c6 @ 0x0040b1c6 */

void FUN_0040b1c6(void) { return; }


/* FUN_0040b1d8 @ 0x0040b1d8 */

void FUN_0040b1d8(void) { return; }


/* FUN_0040b1e0 @ 0x0040b1e0 */

void __thiscall FUN_0040b1e0(void *this,int param_1)

{
    /* STUB: 145 lines not yet reconstructed */
    return;
}


/* FUN_0040b651 @ 0x0040b651 */

void FUN_0040b651(void) { return; }


/* FUN_0040b659 @ 0x0040b659 */

void FUN_0040b659(void) { return; }


/* FUN_0040b66b @ 0x0040b66b */

void FUN_0040b66b(void) { return; }


/* FUN_0040b680 @ 0x0040b680 */

void __thiscall FUN_0040b680(void *this,int param_1)

{
    /* STUB: 186 lines not yet reconstructed */
    return;
}


/* FUN_0040bc46 @ 0x0040bc46 */

void FUN_0040bc46(void) { return; }


/* FUN_0040bc4e @ 0x0040bc4e */

void FUN_0040bc4e(void) { return; }


/* FUN_0040bc56 @ 0x0040bc56 */

void FUN_0040bc56(void) { return; }


/* FUN_0040bc68 @ 0x0040bc68 */

void FUN_0040bc68(void) { return; }


/* FUN_0040bc70 @ 0x0040bc70
 * Struct types: UIWidget (param_1)
 * Recursively sets visibility on this widget and all children via child_list_2.
 */

void FUN_0040bc70(UIWidget *this,short param_2)

{
  uint u1;
  int n2;

  FUN_0041dad0(this,(byte)param_2,'\0');
  if (((this->child_list_2 != NULL) &&
      (n2 = *(int *)((int)this->child_list_2 + 0xe), n2 != 0)) &&  /* child_list_2 sub-struct count at +0xe */
     (u1 = 1, n2 != 0)) {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0040bc70(*(UIWidget **)(**(int **)((int)this->child_list_2 + 4) + -8 + n2),param_2);  /* child_list_2 sub-struct data at +4 */
    } while (u1 <= *(uint *)((int)this->child_list_2 + 0xe));  /* child_list_2 sub-struct count at +0xe */
  }
  return;
}


/* FUN_0040bce0 @ 0x0040bce0 */

void FUN_0040bce0(void *param_1)

{
  int *pu1;
  int *_fs;
  int n2;
  int n3;
  int u4;
  char c5;
  int loc_34 [2];
  int loc_2c;
  int loc_28;
  int loc_24;
  char *loc_20;
  int loc_1c;
  int loc_18;
  void *loc_14;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  _handler = &L_0040be91;
  *_fs = &loc_10;
  loc_18 = 0;
  loc_1c = 0;
  loc_28 = 0;
  loc_2c = 0;
  loc_8 = (loc_8 & ~0xFF) | 1;
  loc_8 = (loc_8 & 0xFF) | (0 << 8);
  pu1 = FUN_0040bf50(*(void **)(DAT_004897c0 + 0x44),loc_34);
  loc_8 = (loc_8 & ~0xFF) | 2;
  FUN_00403030(&loc_2c,&loc_24,pu1);
  loc_8 = (loc_8 & ~0xFF) | 2;
  FUN_0040be81();
  loc_8 = (loc_8 & ~0xFF) | 1;
  FUN_0040be79();
  FUN_0041bb70(*(void **)(DAT_004897c0 + 0x44),param_1,'\x01');
  FUN_0041ce10(param_1,&DAT_00484250,0);
  FUN_0041ce10(*(void **)(DAT_004897c0 + 0x44),&loc_1c,0);
  DAT_00484254 = DAT_00484254 - loc_18;
  DAT_00484250 = DAT_00484250 - loc_1c;
  FUN_0041dd40(*(void **)(DAT_004897c0 + 0x44));
  FUN_0041dad0(param_1,1,'\0');
  n2 = 1;
  FUN_00407340(((DialogWidget *)loc_14)->is_registered,'\x01','\0',4,'\0');  /* TODO: verify offset 0x120 = is_registered */
  n3 = 0x40bded;
  FUN_0040bc70(*(void **)(DAT_004897c0 + 0x44),0);
  FUN_0041bd00(*(void **)(DAT_004897c0 + 0x44),(int)param_1);
  c5 = '\x01';
  u4 = 0;
  loc_20 = &_tmp_29;
  FUN_004090c0(&_tmp_29,&loc_2c);
  loc_8 = (loc_8 & ~0xFF) | 1;
  FUN_004060c0(*(void **)(DAT_004897c0 + 0x44),n2,n3,u4,c5);
  FUN_0041d780(*(void **)(DAT_004897c0 + 0x44),(void *)0x0);
  FUN_0041d780(loc_14,(void *)0x0);
  loc_8 &= ~0xFF;
  ((DialogWidget *)loc_14)->child_list = (void *)1;  /* TODO: verify offset 0x11C = child_list */
  FUN_0040be89();
  loc_8 = 0xffffffff;
  FUN_0040be9b();
  /* SEH epilog */
  *_fs = loc_10;
  return;
}


/* FUN_0040be79 @ 0x0040be79 */

void FUN_0040be79(void) { return; }


/* FUN_0040be81 @ 0x0040be81 */

void FUN_0040be81(void) { return; }


/* FUN_0040be89 @ 0x0040be89 */

void FUN_0040be89(void) { return; }


/* FUN_0040be9b @ 0x0040be9b */

void FUN_0040be9b(void) { return; }


/* FUN_0040beb0 @ 0x0040beb0 */

void __cdecl FUN_0040beb0(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0045f100(param_1,'\x01');
    return;
  }
  FUN_0040bf00();
  DAT_00484238 = (int *)FUN_0043a6b0(DAT_004838c0,param_1);
  DAT_00484248 = param_1;
  DAT_0047e7c8 = FUN_00434300(DAT_00484238);
  return;
}


/* FUN_0040bf00 @ 0x0040bf00 */

void FUN_0040bf00(void)

{
  if (DAT_0047e7c8 != 0) {
    FUN_00434490(DAT_0047e7c8);
    DAT_0047e7c8 = 0;
    FUN_0043a700(DAT_004838c0,DAT_00484248,DAT_00484238);
  }
  return;
}


/* FUN_0040bf50 @ 0x0040bf50 */

int * __thiscall FUN_0040bf50(SoundPlayer *this,int *param_1)

{
  int u1;
  int *_fs;
  char loc_10 [12];
  
  u1 = *_fs;
  *_fs = loc_10;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = this->sequence_data[41];
  *param_1 = this->sequence_data[40];
  *_fs = u1;
  return param_1;
}


/* FUN_0040bfd0 @ 0x0040bfd0 */

void __thiscall
FUN_0040bfd0(CString *this,int param_1,int param_2,int param_3,int param_4)

{
  this->pp_buffer = param_1;
  *(int *)this = param_2;  /* TODO: direct write to vtable - may be intentional init */
  this->allocator = param_3;
  this->capacity = param_4;
  return;
}


/* FUN_0040c000 @ 0x0040c000 */

void FUN_0040c000(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484268,u1,_p_fffffff4);
  return;
}


/* FUN_0040c050 @ 0x0040c050 */

void FUN_0040c050(void) { return; }


/* FUN_0040c070 @ 0x0040c070 */

/* NOTE: overlapping globals */

void FUN_0040c070(void)

{
  _DAT_00484276 = 0;
  _DAT_00484274 = 0;
  return;
}


/* FUN_0040c080 @ 0x0040c080 */

void FUN_0040c080(void)

{
  _atexit(FUN_0040c090);
  return;
}


/* FUN_0040c090 @ 0x0040c090 */

void FUN_0040c090(void) { return; }


/* FUN_0040c0b0 @ 0x0040c0b0 */

/* NOTE: overlapping globals */

void FUN_0040c0b0(void)

{
  _DAT_00484272 = 0;
  _DAT_00484270 = 0;
  return;
}


/* FUN_0040c0c0 @ 0x0040c0c0 */

void FUN_0040c0c0(void)

{
  _atexit(FUN_0040c0d0);
  return;
}


/* FUN_0040c0d0 @ 0x0040c0d0 */

void FUN_0040c0d0(void) { return; }


/* FUN_0040c1c0 @ 0x0040c1c0 */

int * __cdecl FUN_0040c1c0(short param_1)

{
    /* STUB: 152 lines not yet reconstructed */
    return 0;
}


/* FUN_0040c679 @ 0x0040c679 */

void FUN_0040c679(void)

{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0040c690 @ 0x0040c690 */

int * __fastcall FUN_0040c690(int *param_1)

{
  int n1;
  int *pu2;
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_0040c712;
  *_fs = &loc_10;
  FUN_004336c0(param_1);
  *param_1 = &PTR_FUN_00472a08;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x19] = 0;
  pu2 = param_1 + 0x1a;
  for (n1 = 7; n1 != 0; n1 = n1 + -1) {
    *pu2 = 0;
    pu2 = pu2 + 1;
  }
  param_1[0x21] = 0;
  pu2 = param_1 + 0x22;
  for (n1 = 0x1e; n1 != 0; n1 = n1 + -1) {
    *pu2 = 0;
    pu2 = pu2 + 1;
  }
  *_fs = loc_10;
  return param_1;
}


/* FUN_0040c730 @ 0x0040c730 */

void * __thiscall FUN_0040c730(void *this,byte param_1)

{
  FUN_0040c750(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0040c750 @ 0x0040c750 */

void __fastcall FUN_0040c750(int *param_1)

{
    /* STUB: 44 lines not yet reconstructed */
    return;
}


/* FUN_0040c85e @ 0x0040c85e */

void FUN_0040c85e(void)

{
  int _ebp;
  
  FUN_004337b0(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0040c9e5 @ 0x0040c9e5 */

void FUN_0040c9e5(void) { return; }


/* FUN_0040ca70 @ 0x0040ca70 */

void __fastcall FUN_0040ca70(void *param_1)

{
    /* STUB: 126 lines not yet reconstructed */
    return;
}


/* FUN_0040d3a0 @ 0x0040d3a0 */

int * FUN_0040d3a0(void)

{
    /* STUB: 33 lines not yet reconstructed */
    return 0;
}


/* FUN_0040d50a @ 0x0040d50a */

void FUN_0040d50a(void) { return; }


/* FUN_0040d5ca @ 0x0040d5ca */

void FUN_0040d5ca(void) { return; }


/* FUN_0040d630 @ 0x0040d630 */

void __thiscall FUN_0040d630(void *this,short param_1)

{
    /* STUB: 65 lines not yet reconstructed */
    return;
}


/* FUN_0040d82a @ 0x0040d82a */

void FUN_0040d82a(void)

{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x418));
  return;
}


/* FUN_0040d840 @ 0x0040d840 */

void __thiscall FUN_0040d840(void *this,uint param_1)

{
  void *pv1;
  uint u2;
  bool b3;
  int n4;
  int _extra;
  short *ps5;
  short s6;
  ushort *pu7;
  int *_fs;
  int loc_1c;
  void *loc_18;
  char loc_11;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_0040dc40;
  *_fs = &loc_10;
  s6 = 0;
  if (*(int *)((int)this + 0x44) != 0) {  /* TODO: unknown offset 0x44 on this */
    pu7 = (ushort *)0x0;
    loc_11 = DAT_00480100;
    loc_18 = (void *)FUN_004050d0(*(int *)((int)this + 0x44));  /* TODO: unknown offset 0x44 on this */
    DAT_00480100 = 0;
    if (param_1 == 0xf) {
      n4 = rand();
      param_1 = (n4 << 2) / 0x7fff & 0xffff;
    }
    switch(param_1) {
    case 0:
      s6 = 1;
      break;
    case 1:
      s6 = 2;
      break;
    case 2:
      s6 = 3;
      break;
    case 3:
      s6 = 4;
      break;
    case 4:
      s6 = 5;
      break;
    case 5:
      s6 = 6;
      break;
    case 6:
      s6 = 7;
      break;
    case 7:
      s6 = 4;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487a08;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00488a90;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00487ec8;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488750;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00488ad0;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00487b48;
      }
      break;
    case 8:
      s6 = 4;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487bc8;
        break;
      case 2:
        pu7 = (ushort *)&DAT_004879c8;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00487b08;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488b10;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00487848;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00488190;
      }
      break;
    case 9:
      s6 = 1;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487648;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00488c50;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00488690;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488a10;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00488990;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00488510;
      }
      break;
    case 10:
      s6 = 1;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487a48;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00488210;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00488050;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488490;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00488550;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00487d08;
      }
      break;
    case 0xb:
      s6 = 1;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487f08;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00487dc8;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00488710;
        break;
      case 4:
        pu7 = (ushort *)&DAT_004887d0;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00487a88;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00488450;
      }
      break;
    case 0xc:
      s6 = 7;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00488a50;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00487cc8;
        break;
      case 3:
        pu7 = (ushort *)&DAT_004877c8;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00487b88;
        break;
      case 5:
        pu7 = (ushort *)&DAT_00487c48;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00487608;
      }
      break;
    case 0xd:
      s6 = 6;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487f48;
        break;
      case 2:
        pu7 = (ushort *)&DAT_004885d0;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00488b50;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488790;
        break;
      case 5:
        pu7 = (ushort *)&DAT_004883d0;
        break;
      case 6:
        pu7 = (ushort *)&DAT_00488250;
      }
      break;
    case 0xe:
      s6 = 5;
      switch(DAT_00489398) {
      case 1:
        pu7 = (ushort *)&DAT_00487788;
        break;
      case 2:
        pu7 = (ushort *)&DAT_00487988;
        break;
      case 3:
        pu7 = (ushort *)&DAT_00488010;
        break;
      case 4:
        pu7 = (ushort *)&DAT_00488950;
        break;
      case 5:
        pu7 = (ushort *)&DAT_004886d0;
        break;
      case 6:
        pu7 = (ushort *)&DAT_004881d0;
      }
    }
    if (s6 != 0) {
      if (pu7 == (ushort *)0x0) {
        loc_18 = (void *)0x0;
        loc_1c = 0;
        loc_8 = 0;
        FUN_0041cde0(*(void **)((int)this + 0x44),&loc_1c);  /* TODO: unknown offset 0x44 on this */
        if ((*(int *)((int)this + 100) != 0) &&  /* TODO: unknown offset 0x64 on this */
           (b3 = FUN_0045d930(*(int *)((int)this + 100)),  /* TODO: unknown offset 0x64 on this */
           (short)CONCAT31(_extra,b3) != 0)) {
          FUN_00434490(*(int *)((int)this + 100));  /* TODO: unknown offset 0x64 on this */
          FUN_00433420(*(int **)((int)this +
                                *(short *)(*(int *)((int)this + 0x44) + 0x10e) * 4 + 100));  /* TODO: unknown offsets 0x44, 0x64 on this; 0x10e = current_frame on UIWidget */
        }
        ps5 = FUN_0045ef70(*(int **)((int)this + s6 * 4 + 100));  /* TODO: unknown offset (s6*4+0x64) on this */
        pv1 = *(void **)((int)this + 0x44);  /* TODO: unknown offset 0x44 on this */
        *(short **)((int)this + 100) = ps5;  /* TODO: unknown offset 0x64 on this */
        ((UIWidget *)pv1)->anim_flag_0 = 0;
        ((UIWidget *)pv1)->anim_flag_2 = 0;
        ((UIWidget *)pv1)->anim_flag_1 = 0;
        ((UIWidget *)pv1)->anim_flag_3 = 0;
        FUN_00405e10(pv1,s6,'\0');
        loc_8 = 0xffffffff;
        FUN_0040dc4a();
      }
      else {
        pv1 = *(void **)((int)this + 0x44);  /* TODO: unknown offset 0x44 on this */
        ((UIWidget *)pv1)->anim_flag_0 = 0;
        ((UIWidget *)pv1)->anim_flag_2 = 0;
        ((UIWidget *)pv1)->anim_flag_1 = 0;
        ((UIWidget *)pv1)->anim_flag_3 = 0;
        FUN_00405d30(pv1,s6);
        if (loc_18 == (void *)0x0) {
          FUN_00407b10(*(void **)((int)this + 0x44),7,pu7);  /* TODO: unknown offset 0x44 on this */
        }
        else {
          u2 = ((UIWidget *)loc_18)->flags;
          ((UIWidget *)loc_18)->flags = u2 & 0xffffffef;
          FUN_00407b10(loc_18,7,pu7);
          ((UIWidget *)loc_18)->flags =
               ((uint)((byte)(u2 >> 4) & 1) << 4 ^ ((UIWidget *)loc_18)->flags) & 0x10 ^
               ((UIWidget *)loc_18)->flags;
        }
      }
    }
    DAT_00480100 = loc_11;
  }
  /* SEH epilog */
  *_fs = loc_10;
  return;
}


/* FUN_0040dc4a @ 0x0040dc4a */

void FUN_0040dc4a(void) { return; }


/* FUN_0040dde0 @ 0x0040dde0 */

void __thiscall FUN_0040dde0(void *this,short param_1)

{
    /* STUB: 120 lines not yet reconstructed */
    return;
}


/* FUN_0040e0c0 @ 0x0040e0c0 */

void __fastcall FUN_0040e0c0(int param_1)

{
  int n1;
  DWORD DVar2;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    DVar2 = GetTickCount();
    if (DVar2 < *(int *)(param_1 + 0x60) + 5000U) {
      n1 = *(int *)(param_1 + 0x60);
      DVar2 = GetTickCount();
      FUN_00456310((int)(((longlong)(int)((n1 - DVar2) + 5000) * (longlong)DAT_004890a4 &
                         0xffffffffU) / 1000),'\x01','\0');
    }
    FUN_004268d0(*(int **)(param_1 + 0x58),10);
    ((void (*)(void))*(void **)**(int **)(param_1 + 0x5c))(); /* obj at *(param_1+0x5c)->vtable[0] */
    *(int *)(param_1 + 0x5c) = 0;
    FUN_0046f5f0(*(uint *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = 0;
  }
  return;
}


/* FUN_0040e140 @ 0x0040e140 */

void __thiscall FUN_0040e140(void *this,int param_1)

{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_0040e1f0 @ 0x0040e1f0 */

void __thiscall FUN_0040e1f0(void *this,short param_1)

{
    /* STUB: 17 lines not yet reconstructed */
    return;
}


/* FUN_0040e270 @ 0x0040e270 */

void __thiscall FUN_0040e270(void *this,short param_1)

{
    /* STUB: 49 lines not yet reconstructed */
    return;
}


/* FUN_0040e355 @ 0x0040e355 */

void FUN_0040e355(void) { return; }


/* FUN_0040e360 @ 0x0040e360 */

void __fastcall FUN_0040e360(int param_1)

{
  int *pn1;
  short s2;
  
  s2 = 0;
  do {
    pn1 = (int *)(param_1 + 0x88 + s2 * 6);
    if (*pn1 != 0) {
      FUN_00433270(pn1);
    }
    s2 = s2 + 1;
    *pn1 = 0;
  } while (s2 < 0x14);
  return;
}


/* FUN_0040e3a0 @ 0x0040e3a0 */

void __thiscall FUN_0040e3a0(void *this,short param_1)

{
    /* STUB: 48 lines not yet reconstructed */
    return;
}


/* FUN_0040e4f0 @ 0x0040e4f0 */

short __cdecl FUN_0040e4f0(short *param_1,short param_2)

{
  short s1;
  
  s1 = 1;
  if (0 < *param_1) {
    do {
      if (param_1[s1] == param_2) {
        return s1;
      }
      s1 = s1 + 1;
    } while (s1 <= *param_1);
  }
  return 0;
}


/* FUN_0040e520 @ 0x0040e520 */

int __cdecl FUN_0040e520(short param_1)

{
  short s1;
  short _extra;
  short extraout_var_00;
  
  s1 = FUN_0040e4f0(&DAT_00483498,param_1);
  if (s1 != 0) {
    return CONCAT22(_extra,6);
  }
  s1 = FUN_0040e4f0(&DAT_00483478,param_1);
  if (s1 != 0) {
    return CONCAT22(extraout_var_00,3);
  }
  s1 = FUN_0040e4f0(&DAT_00483488,param_1);
  return (-(uint)(s1 == 0) & 0xfffffffb) + 4;
}


/* FUN_0040e580 @ 0x0040e580 */

int FUN_0040e580(void)

{
  short s1;
  short u2;
  
  s1 = FUN_00433a80(DAT_004897c0);
  u2 = (short)((uint)(s1 + -4) >> 0x10);
  switch(s1) {
  case 4:
    return CONCAT22(u2,1);
  case 5:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    return CONCAT22(u2,4);
  case 6:
  case 0xc:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    return CONCAT22(u2,6);
  case 7:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
    return CONCAT22(u2,5);
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x10:
    return CONCAT22(u2,3);
  default:
    return CONCAT22(u2,0xffff);
  }
}


/* FUN_0040e610 @ 0x0040e610 */

int __cdecl FUN_0040e610(short param_1)

{
  ushort u1;
  ushort u2;
  ushort u3;
  ushort u4;
  int n5;
  uint u6;
  short s7;
  short s8;
  
  n5 = FUN_0040e520(param_1);
  if ((short)n5 != -1) {
    *(char *)((short)n5 + 0x41 + DAT_0048345c) = 1;
  }
  u1 = *(ushort *)(DAT_0048345c + 0x48);
  if ((u1 & 1) == 0) {
    *(char *)(DAT_0048345c + 0x90) = 0;
  }
  else {
    *(char *)(DAT_0048345c + 0x90) = (char)u1;
  }
  s7 = 0;
  while (u4 = DAT_00483498, u3 = DAT_00483488, u2 = DAT_00483478, s8 = s7 + 1,
        s7 < 0x65) {
    n5 = rand();
    u4 = DAT_00483498;
    u3 = DAT_00483488;
    u2 = DAT_00483478;
    n5 = n5 % 3;
    s7 = s8;
    if (n5 == 0) {
      if (((u1 & 0x30) != 0) && (*(char *)(DAT_0048345c + 0x47) == '\0')) {
        n5 = rand();
        u6 = (int)(n5 * (uint)u4) / 0x7fff;
        return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048349a + (u6 & 0xffff) * 2)
                       );
      }
    }
    else if (n5 == 1) {
      if (((u1 & 0x50) != 0) && (*(char *)(DAT_0048345c + 0x45) == '\0')) {
        n5 = rand();
        u6 = (int)(n5 * (uint)u3) / 0x7fff;
        return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048348a + (u6 & 0xffff) * 2)
                       );
      }
    }
    else if (((n5 == 2) && ((u1 & 0x90) != 0)) && (*(char *)(DAT_0048345c + 0x44) == '\0')) {
      n5 = rand();
      u6 = (int)(n5 * (uint)u2) / 0x7fff;
      return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048347a + (u6 & 0xffff) * 2));
    }
  }
  if ((u1 & 0x20) != 0) {
    n5 = rand();
    u6 = (int)(n5 * (uint)u4) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048349a + (u6 & 0xffff) * 2));
  }
  if ((u1 & 0x40) != 0) {
    n5 = rand();
    u6 = (int)(n5 * (uint)u3) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048348a + (u6 & 0xffff) * 2));
  }
  if ((u1 & 0x80) != 0) {
    n5 = rand();
    u6 = (int)(n5 * (uint)u2) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048347a + (u6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x44) == '\0') {
    n5 = rand();
    u6 = (int)(n5 * (uint)u2) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048347a + (u6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x47) == '\0') {
    n5 = rand();
    u6 = (int)(n5 * (uint)u4) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048349a + (u6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x45) != '\0') {
    *(char *)(DAT_0048345c + 0x44) = '\0';
    *(char *)(DAT_0048345c + 0x45) = 0;
    *(char *)(DAT_0048345c + 0x47) = 0;
    u1 = DAT_00483478;
    n5 = rand();
    u6 = (int)(n5 * (uint)u1) / 0x7fff;
    return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048347a + (u6 & 0xffff) * 2));
  }
  n5 = rand();
  u6 = (int)(n5 * (uint)u3) / 0x7fff;
  return CONCAT22((short)(u6 >> 0x10),*(short *)(&DAT_0048348a + (u6 & 0xffff) * 2));
}


/* FUN_0040e890 @ 0x0040e890 */

void __fastcall FUN_0040e890(char *param_1)

{
    /* STUB: 288 lines not yet reconstructed */
    return;
}


/* FUN_0040efc0 @ 0x0040efc0 */

void __cdecl FUN_0040efc0(short *param_1,char param_2)

{
  short s1;
  short s2;
  short s3;
  
  if (param_2 == '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  s3 = 0;
  s1 = *param_1;
  if (0 < s1) {
    do {
      if (DAT_00483ddc != '\0') {
        s2 = param_1[s3 * 2 + 2];
        param_1[s3 * 2 + 2] = CONCAT11((char)s2,(char)((ushort)s2 >> 8));
      }
      s3 = s3 + 1;
    } while (s3 < s1);
  }
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}


/* FUN_0040f040 @ 0x0040f040 */

ushort * __cdecl FUN_0040f040(void *param_1,int param_2)

{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (pu1 != (ushort *)0x0) {
    FUN_0040efc0((short *)pu1,'\0');
  }
  return pu1;
}


/* FUN_0040f070 @ 0x0040f070 */

void __cdecl FUN_0040f070(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0040f080 @ 0x0040f080 */

int __cdecl FUN_0040f080(void *param_1,uint param_2,short *param_3)

{
    /* STUB: 17 lines not yet reconstructed */
    return 0;
}


/* FUN_0040f0f0 @ 0x0040f0f0 */

ushort * __cdecl FUN_0040f0f0(void *param_1,int param_2,ushort *param_3)

{
    /* STUB: 89 lines not yet reconstructed */
    return 0;
}


/* FUN_0040f280 @ 0x0040f280 */

CString * __thiscall FUN_0040f280(CString *this,uint param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x16,*(int *)((int)this - 4),FUN_0040f520);  /* TODO: array count stored at (this - 4), MSVC array cookie */
    FUN_0046c410((int)this - 4);
    return this;
  }
  *(void ***)this = &PTR_FUN_00472acc;
  if (this->pp_buffer != (uint *)0x0) {
    FUN_0046d110(this->pp_buffer);
  }
  this->pp_buffer = 0;
  this->capacity = 0;
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0040f2f0 @ 0x0040f2f0 */

int __cdecl FUN_0040f2f0(void *param_1,uint param_2,int param_3)

{
    /* STUB: 28 lines not yet reconstructed */
    return 0;
}


/* FUN_0040f380 @ 0x0040f380 */

ushort * __cdecl FUN_0040f380(void *param_1,int param_2,ushort *param_3)

{
  short s1;
  ushort *pu2;
  LPCVOID pv3;
  int n4;
  
  pu2 = FUN_0040f040(param_1,param_2);
  if (pu2 == (ushort *)0x0) {
    return param_3;
  }
  if (param_3 == (ushort *)0x0) {
    pv3 = DAT_00483df4;
    if (DAT_004833cc != (LPCVOID)0x0) {
      pv3 = DAT_004833cc;
    }
    param_3 = FUN_0046f060(pv3,(short)*pu2 * 2 + 2,1);
    if (param_3 == (ushort *)0x0) goto L_0040f3f2;
  }
  *param_3 = *pu2;
  s1 = 1;
  if (0 < (short)*pu2) {
    do {
      n4 = (int)s1;
      s1 = s1 + 1;
      param_3[n4] = pu2[n4 * 2];
    } while (s1 <= (short)*pu2);
  }
L_0040f3f2:
  FUN_0040f070(param_1,param_2,(uint)pu2);
  return param_3;
}


/* FUN_0040f410 @ 0x0040f410 */

void __cdecl FUN_0040f410(ushort *param_1,ushort *param_2)

{
  LPCVOID pv1;
  short s2;
  int n3;
  
  if (param_2 == (ushort *)0x0) {
    pv1 = DAT_00483df4;
    if (DAT_004833cc != (LPCVOID)0x0) {
      pv1 = DAT_004833cc;
    }
    param_2 = FUN_0046f060(pv1,(short)*param_1 * 2 + 2,1);
  }
  if (param_2 != (ushort *)0x0) {
    *param_2 = *param_1;
    s2 = 1;
    if (0 < (short)*param_1) {
      do {
        n3 = (int)s2;
        s2 = s2 + 1;
        param_2[n3] = param_1[n3 * 2];
      } while (s2 <= (short)*param_1);
    }
  }
  return;
}


/* FUN_0040f480 @ 0x0040f480 */

char __cdecl FUN_0040f480(void *param_1,int param_2,ushort *param_3)

{
  ushort *pu1;
  char u2;
  short s3;
  int n4;
  
  u2 = 0;
  pu1 = FUN_0040f040(param_1,param_2);
  if (pu1 != (ushort *)0x0) {
    s3 = 1;
    u2 = 1;
    *param_3 = *pu1;
    if (0 < (short)*pu1) {
      do {
        n4 = (int)s3;
        s3 = s3 + 1;
        param_3[n4] = pu1[n4 * 2];
      } while (s3 <= (short)*pu1);
    }
    FUN_0040f070(param_1,param_2,(uint)pu1);
  }
  return u2;
}


/* FUN_0040f520 @ 0x0040f520 */

void __fastcall FUN_0040f520(int *param_1)

{
  *param_1 = &PTR_FUN_00472acc;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* FUN_0040f560 @ 0x0040f560 */

void FUN_0040f560(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484278,u1,_p_fffffff4);
  return;
}


/* FUN_0040f5b0 @ 0x0040f5b0 */

void FUN_0040f5b0(void) { return; }


/* FUN_0040f5d0 @ 0x0040f5d0 */

/* NOTE: overlapping globals */

void FUN_0040f5d0(void)

{
  _DAT_00484286 = 0;
  _DAT_00484284 = 0;
  return;
}


/* FUN_0040f5e0 @ 0x0040f5e0 */

void FUN_0040f5e0(void)

{
  _atexit(FUN_0040f5f0);
  return;
}


/* FUN_0040f5f0 @ 0x0040f5f0 */

void FUN_0040f5f0(void) { return; }


/* FUN_0040f610 @ 0x0040f610 */

/* NOTE: overlapping globals */

void FUN_0040f610(void)

{
  _DAT_00484282 = 0;
  _DAT_00484280 = 0;
  return;
}


/* FUN_0040f620 @ 0x0040f620 */

void FUN_0040f620(void)

{
  _atexit(FUN_0040f630);
  return;
}


/* FUN_0040f630 @ 0x0040f630 */

void FUN_0040f630(void) { return; }


/* FUN_0040f650 @ 0x0040f650 */

void FUN_0040f650(void)

{
  int u1;
  int _p_fffffff4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484288,u1,_p_fffffff4);
  return;
}


/* FUN_0040f690 @ 0x0040f690 */

void FUN_0040f690(void)

{
  _atexit(FUN_0040f6a0);
  return;
}


/* FUN_0040f6a0 @ 0x0040f6a0 */

void FUN_0040f6a0(void) { return; }


/* FUN_0040f6c0 @ 0x0040f6c0 */

/* NOTE: overlapping globals */

void FUN_0040f6c0(void)

{
  _DAT_00484296 = 0;
  _DAT_00484294 = 0;
  return;
}


/* FUN_0040f6d0 @ 0x0040f6d0 */

void FUN_0040f6d0(void)

{
  _atexit(FUN_0040f6e0);
  return;
}


/* FUN_0040f6e0 @ 0x0040f6e0 */

void FUN_0040f6e0(void) { return; }


/* FUN_0040f700 @ 0x0040f700 */

/* NOTE: overlapping globals */

void FUN_0040f700(void)

{
  _DAT_00484292 = 0;
  _DAT_00484290 = 0;
  return;
}


/* FUN_0040f710 @ 0x0040f710 */

void FUN_0040f710(void)

{
  _atexit(FUN_0040f720);
  return;
}


/* FUN_0040f720 @ 0x0040f720 */

void FUN_0040f720(void) { return; }


/* FUN_0040f730 @ 0x0040f730 */

void * __thiscall FUN_0040f730(void *this,int param_1)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_0040f785;
  *_fs = &loc_10;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00472af8;
  *(int *)((int)this + 0x11c) = 0;  /* TODO: offset 0x11c - likely linked sibling pointer */
  *_fs = loc_10;
  return this;
}


/* FUN_0040f819 @ 0x0040f819 */

void FUN_0040f819(void)

{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0040fb0d @ 0x0040fb0d */

void FUN_0040fb0d(void) { return; }


/* FUN_0040fb15 @ 0x0040fb15 */

void FUN_0040fb15(void) { return; }


/* FUN_0040fb1d @ 0x0040fb1d */

void FUN_0040fb1d(void) { return; }


/* FUN_0040fb25 @ 0x0040fb25 */

void FUN_0040fb25(void) { return; }


/* FUN_0040fb2d @ 0x0040fb2d */

void FUN_0040fb2d(void) { return; }


/* FUN_0040fb35 @ 0x0040fb35 */

void FUN_0040fb35(void) { return; }


/* FUN_0040fb3d @ 0x0040fb3d */

void FUN_0040fb3d(void) { return; }


/* FUN_0040fb45 @ 0x0040fb45 */

void FUN_0040fb45(void) { return; }


/* FUN_0040fb4d @ 0x0040fb4d */

void FUN_0040fb4d(void) { return; }


/* FUN_0040fb55 @ 0x0040fb55 */

void FUN_0040fb55(void) { return; }


/* FUN_0040fb5d @ 0x0040fb5d */

void FUN_0040fb5d(void) { return; }


/* FUN_0040fb6f @ 0x0040fb6f */

void FUN_0040fb6f(void) { return; }


/* FUN_0040fb80 @ 0x0040fb80 */

void __fastcall FUN_0040fb80(void *param_1)

{
    /* STUB: 58 lines not yet reconstructed */
    return;
}


/* FUN_0040fd15 @ 0x0040fd15 */

void FUN_0040fd15(void) { return; }


/* FUN_0040fd1d @ 0x0040fd1d */

void FUN_0040fd1d(void) { return; }


/* FUN_0040fd25 @ 0x0040fd25 */

void FUN_0040fd25(void) { return; }


/* FUN_0040fd2d @ 0x0040fd2d */

void FUN_0040fd2d(void) { return; }


/* FUN_0040fd35 @ 0x0040fd35 */

void FUN_0040fd35(void) { return; }


/* FUN_0040fd3d @ 0x0040fd3d */

void FUN_0040fd3d(void) { return; }


/* FUN_0040fd4f @ 0x0040fd4f */

void FUN_0040fd4f(void) { return; }


/* FUN_0040fd60 @ 0x0040fd60 */

void * __thiscall FUN_0040fd60(void *this,int param_1)

{
  int *_fs;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  loc_8 = 0xffffffff;
  _handler = &L_0040fdb5;
  *_fs = &loc_10;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00472ba8;
  *(int *)((int)this + 0x11c) = 0;  /* TODO: offset 0x11c - likely linked sibling pointer */
  *_fs = loc_10;
  return this;
}


/* FUN_0040fe29 @ 0x0040fe29 */

void FUN_0040fe29(void)

{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
  return;
}


/* FUN_0040fe40 @ 0x0040fe40 */

void __thiscall FUN_0040fe40(void *this,int param_1)

{
  int *_fs;
  int loc_18;
  int loc_14;
  int loc_10;
  char *_handler;
  int loc_8;
  
  /* SEH prolog */
  loc_10 = *_fs;
  _handler = &L_0040fec0;
  *_fs = &loc_10;
  *(int *)((int)this + 0x11c) = param_1;  /* TODO: offset 0x11c - linked sibling pointer */
  if (param_1 != 0) {
    loc_14 = 0;
    loc_18 = 0;
    loc_8 = 0;
    FUN_0041ce10(this,&loc_18,1);
    FUN_0041d020(*(void **)((int)this + 0x11c),loc_14,loc_18,1);  /* TODO: offset 0x11c */
    loc_8 = 0xffffffff;
    *(void **)(*(int *)((int)this + 0x11c) + 0x11c) = this;  /* TODO: offset 0x11c - sets reciprocal link */
    FUN_0040feca();
  }
  /* SEH epilog */
  *_fs = loc_10;
  return;
}


/* FUN_0040feca @ 0x0040feca */

void FUN_0040feca(void) { return; }


/* FUN_0040fee0 @ 0x0040fee0 */

void __fastcall FUN_0040fee0(int param_1)

{
  if (*(void **)(param_1 + 0x11c) != (void *)0x0) {  /* TODO: offset 0x11c - linked sibling pointer */
    FUN_0040fb80(*(void **)(param_1 + 0x11c));  /* TODO: offset 0x11c */
  }
  return;
}


/* FUN_0040ff00 @ 0x0040ff00 */

void __thiscall FUN_0040ff00(void *this,int param_1)

{
    /* STUB: 5 lines not yet reconstructed */
    return;
}


