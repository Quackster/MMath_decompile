/*
 * game_logic.c - Core game logic
 * Address range: 0x409000 - 0x40FFFF
 * Functions: 209
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_0040908f @ 0x0040908f */

void FUN_0040908f(void)

{
  return;
}



/* Function: FUN_004090a0 @ 0x004090a0 */

void FUN_004090a0(void)

{
  return;
}



/* Function: FUN_004090b2 @ 0x004090b2 */

void FUN_004090b2(void)

{
  return;
}



/* Function: FUN_004090c0 @ 0x004090c0 */

undefined4 * __thiscall FUN_004090c0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((intptr_t)this + 4) = 0;
  *(undefined4 *)((intptr_t)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  return this;
}



/* Function: FUN_004090e0 @ 0x004090e0 */

void FUN_004090e0(int param_1)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00409140 @ 0x00409140 */

void FUN_00409140(short *param_1)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004091a0 @ 0x004091a0 */

void __thiscall FUN_004091a0(void *this,int *param_1)

{
    /* TODO: 49 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00409297 @ 0x00409297 */

void FUN_00409297(void)

{
  return;
}



/* Function: FUN_004092c0 @ 0x004092c0 */

void __thiscall FUN_004092c0(GameWidget *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  this->animation_timer = param_1;
  if (((((char)param_2 != '\0') && (this->child_list_2 != 0)) &&
      (iVar2 = *(int *)(this->child_list_2 + 0xe), iVar2 != 0)) && (uVar1 = 1, iVar2 != 0))
  {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_004092c0(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + iVar2),param_1,
                   param_2);
    } while (uVar1 <= *(uint *)(this->child_list_2 + 0xe));
  }
  FUN_0041cad0(this);
  return;
}



/* Function: FUN_00409330 @ 0x00409330 */

void FUN_00409330(void)

{
  char *pcVar1;
  uint uVar2;
  short sVar3;
  
  sVar3 = 0;
  uVar2 = DAT_0047e7b0;
  do {
    pcVar1 = (char *)(&DAT_004841a8)[sVar3];
    if (pcVar1 != (char *)0x0) {
      if ((uVar2 == 0) && (pcVar1 != (char *)0x0)) {
        thunk_FUN_0042f1c0(pcVar1);
        FUN_0046c410((uint)pcVar1);
        uVar2 = DAT_0047e7b0;
      }
      (&DAT_004841a8)[sVar3] = 0;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x10);
  if (uVar2 != 0) {
    FUN_00457b10(DAT_004838c0,0,uVar2);
    DAT_0047e7b0 = 0;
  }
  return;
}



/* Function: FUN_004093a0 @ 0x004093a0 */

void __cdecl FUN_004093a0(undefined4 *param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00409460 @ 0x00409460 */

void __cdecl FUN_00409460(void *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    puVar1 = FUN_00457a10(param_1,param_2);
    if (puVar1 != (ushort *)0x0) {
      sVar4 = 0;
      DAT_0047e7b0 = puVar1;
      do {
        if (sVar4 < (short)*puVar1) {
          iVar3 = *(int *)(puVar1 + 8) + sVar4 * 8;
        }
        else {
          iVar3 = (short)*puVar1 * 8 + *(int *)(puVar1 + 8) + -8;
        }
        iVar2 = (int)sVar4;
        sVar4 = sVar4 + 1;
        (&DAT_004841a8)[iVar2] = iVar3;
      } while (sVar4 < 0x10);
    }
  }
  return;
}



/* Function: FUN_004094d0 @ 0x004094d0 */

void __thiscall FUN_004094d0(void *this,short param_1,char param_2)

{
  undefined4 unaff_EBX;
  int iVar1;
  uint uVar2;
  
  *(short *)((intptr_t)this + 0x44) = param_1;
  if (param_1 == -1) {
    FUN_00409580(this,'\x01');
    return;
  }
  if (0x10 < param_1) {
    *(undefined2 *)((intptr_t)this + 0x44) = 0x10;
  }
  if (*(short *)((intptr_t)this + 0x44) < 0) {
    *(undefined2 *)((intptr_t)this + 0x44) = 0;
  }
  if (((param_2 != '\0') && (*(int *)((intptr_t)this + 0x36) != 0)) &&
     (uVar2 = 1, *(int *)(*(int *)((intptr_t)this + 0x36) + 0xe) != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_004094d0(*(void **)(**(int **)(*(int *)((intptr_t)this + 0x36) + 4) + -8 + iVar1),
                   *(short *)((intptr_t)this + 0x44),param_2);
    } while (uVar2 <= *(uint *)(*(int *)((intptr_t)this + 0x36) + 0xe));
  }
  FUN_0041ab40((&DAT_004841a8)[*(short *)((intptr_t)this + 0x44)]);
  FUN_004092c0(this,2,CONCAT31((unsigned int)((uint)unaff_EBX >> 8),param_2));
  return;
}



/* Function: FUN_00409580 @ 0x00409580 */

void __thiscall FUN_00409580(void *this,char param_1)

{
  undefined4 unaff_EBX;
  int iVar1;
  uint uVar2;
  
  *(undefined2 *)((intptr_t)this + 0x44) = 0xffff;
  if (((param_1 != '\0') && (*(int *)((intptr_t)this + 0x36) != 0)) &&
     (uVar2 = 1, *(int *)(*(int *)((intptr_t)this + 0x36) + 0xe) != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_00409580(*(void **)(**(int **)(*(int *)((intptr_t)this + 0x36) + 4) + -8 + iVar1),'\x01');
    } while (uVar2 <= *(uint *)(*(int *)((intptr_t)this + 0x36) + 0xe));
  }
  FUN_0041ab40(0);
  FUN_004092c0(this,1,CONCAT31((unsigned int)((uint)unaff_EBX >> 8),param_1));
  return;
}



/* Function: FUN_004095f0 @ 0x004095f0 */

void __thiscall FUN_004095f0(void *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar2 = *(int *)this;
  iVar3 = *param_2;
  iVar4 = *(int *)((intptr_t)this + 4);
  iVar5 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = iVar4 + iVar5;
  *param_1 = iVar2 + iVar3;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_00409670 @ 0x00409670 */

void __thiscall FUN_00409670(void *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar2 = *(int *)this;
  iVar3 = *param_2;
  iVar4 = *(int *)((intptr_t)this + 4);
  iVar5 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = iVar4 - iVar5;
  *param_1 = iVar2 - iVar3;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_004096f0 @ 0x004096f0 */

undefined2 * __thiscall FUN_004096f0(void *this,undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  uVar2 = param_2[1];
  *(undefined2 *)((intptr_t)this + 2) = uVar2;
  *(undefined2 *)this = *param_2;
  param_1[1] = uVar2;
  *param_1 = *(undefined2 *)this;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}



/* Function: FUN_00409770 @ 0x00409770 */

ushort __fastcall FUN_00409770(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = param_1[3];
  if (((short)param_1[1] < (short)uVar1) && (uVar1 = *param_1, (short)uVar1 < (short)param_1[2])) {
    return uVar1 & 0xff00;
  }
  return CONCAT11((char)(uVar1 >> 8),1);
}



/* Function: FUN_00409790 @ 0x00409790 */

void __thiscall
FUN_00409790(GameWidget *this,undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *(undefined2 *)((intptr_t)this + 2) = param_1;
  *(undefined2 *)this = param_2;
  this->field_06 = param_3;
  this->field_04 = param_4;
  return;
}



/* Function: FUN_004097c0 @ 0x004097c0 */

void __fastcall FUN_004097c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0047241c;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00409830 @ 0x00409830 */

void __thiscall FUN_00409830(GameWidget *this,undefined2 *param_1)

{
  *(undefined2 *)((intptr_t)this + 2) = param_1[1];
  *(undefined2 *)this = *param_1;
  this->field_06 = param_1[3];
  this->field_04 = param_1[2];
  return;
}



/* Function: FUN_00409870 @ 0x00409870 */

void FUN_00409870(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004841f8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004098c0 @ 0x004098c0 */

void FUN_004098c0(void)

{
  return;
}



/* Function: FUN_004098e0 @ 0x004098e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004098e0(void)

{
  _DAT_00484206 = 0;
  _DAT_00484204 = 0;
  return;
}



/* Function: FUN_004098f0 @ 0x004098f0 */

void FUN_004098f0(void)

{
  _atexit(FUN_00409900);
  return;
}



/* Function: FUN_00409900 @ 0x00409900 */

void FUN_00409900(void)

{
  return;
}



/* Function: FUN_00409920 @ 0x00409920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409920(void)

{
  _DAT_00484202 = 0;
  _DAT_00484200 = 0;
  return;
}



/* Function: FUN_00409930 @ 0x00409930 */

void FUN_00409930(void)

{
  _atexit(FUN_00409940);
  return;
}



/* Function: FUN_00409940 @ 0x00409940 */

void FUN_00409940(void)

{
  return;
}



/* Function: FUN_00409950 @ 0x00409950 */

int * __thiscall
FUN_00409950(SoundPlayer *this,short param_1,short param_2,short param_3,undefined4 param_4,void *param_5)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004099fe;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004724e8;
  iVar1 = DAT_004896b0;
  *(undefined1 *)(DAT_004896b0 + 0x28) = 1;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 4) = DVar2;
  *(DWORD *)(iVar1 + 0xc) = DVar2;
  this->sequence_data[55] = 0;
  this->sequence_data[56] = 0;
  FUN_0042c0e0(this);
  FUN_00409ac0();
  FUN_0042bf70(this);
  *(undefined1 *)(*(int *)(DAT_004897c0 + 0x52) + 0x174) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00409a10 @ 0x00409a10 */

undefined4 * __thiscall FUN_00409a10(void *this,byte param_1)

{
  FUN_00409a30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00409a30 @ 0x00409a30 */

void __fastcall FUN_00409a30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00409aa2;
  *param_1 = &PTR_FUN_004724e8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00434490(*(int *)((int)param_1 + 0x126));
  FUN_0043a700(DAT_004838c0,0,*(int **)((int)param_1 + 0x12a));
  local_8 = 0xffffffff;
  FUN_00409aac();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00409aac @ 0x00409aac */

void FUN_00409aac(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00409ac0 @ 0x00409ac0 */

void FUN_00409ac0(void)

{
  return;
}



/* Function: FUN_00409bd0 @ 0x00409bd0 */

undefined4 * __fastcall FUN_00409bd0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00409c2b;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004725a8;
  param_1[0x47] = 0x1000d;
  param_1[0x46] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00409cc9 @ 0x00409cc9 */

void FUN_00409cc9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00409f8b @ 0x00409f8b */

void FUN_00409f8b(void)

{
  return;
}



/* Function: FUN_00409f9d @ 0x00409f9d */

void FUN_00409f9d(void)

{
  return;
}



/* Function: FUN_00409fb0 @ 0x00409fb0 */

int * __thiscall FUN_00409fb0(void *this,int param_1)

{
  *(int *)this = *(int *)this - param_1;
  return this;
}



/* Function: FUN_00409fc0 @ 0x00409fc0 */

void FUN_00409fc0(char *param_1)

{
  void *this;
  
  if (*(void **)(DAT_004897c0 + 0x52) != (void *)0x0) {
    this = (void *)FUN_0042e020(*(void **)(DAT_004897c0 + 0x52));
    FUN_00458860(this,param_1);
  }
  return;
}



/* Function: FUN_00409fe0 @ 0x00409fe0 */

void FUN_00409fe0(void)

{
  FUN_0042e020(*(void **)(DAT_004897c0 + 0x52));
  return;
}



/* Function: FUN_0040a190 @ 0x0040a190 */

void FUN_0040a190(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484208,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040a1e0 @ 0x0040a1e0 */

void FUN_0040a1e0(void)

{
  return;
}



/* Function: FUN_0040a200 @ 0x0040a200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a200(void)

{
  _DAT_00484216 = 0;
  _DAT_00484214 = 0;
  return;
}



/* Function: FUN_0040a210 @ 0x0040a210 */

void FUN_0040a210(void)

{
  _atexit(FUN_0040a220);
  return;
}



/* Function: FUN_0040a220 @ 0x0040a220 */

void FUN_0040a220(void)

{
  return;
}



/* Function: FUN_0040a240 @ 0x0040a240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a240(void)

{
  _DAT_00484212 = 0;
  _DAT_00484210 = 0;
  return;
}



/* Function: FUN_0040a250 @ 0x0040a250 */

void FUN_0040a250(void)

{
  _atexit(FUN_0040a260);
  return;
}



/* Function: FUN_0040a260 @ 0x0040a260 */

void FUN_0040a260(void)

{
  return;
}



/* Function: FUN_0040a270 @ 0x0040a270 */

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



/* Function: FUN_0040a2d0 @ 0x0040a2d0 */

undefined4 __cdecl FUN_0040a2d0(int param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return CONCAT31(in_EAX >> 8,1);
    }
    if (param_2[uVar2] != *(char *)(uVar2 + param_1)) break;
    uVar2 = (uint)(ushort)((short)uVar2 + 1);
    cVar1 = param_2[uVar2];
    in_EAX = uVar2;
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0040a310 @ 0x0040a310 */

undefined4 __cdecl FUN_0040a310(int param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return CONCAT31(in_EAX >> 8,1);
    }
    uVar2 = toupper((int)param_2[uVar4]);
    uVar3 = toupper((int)*(char *)(param_1 + uVar4));
    if (uVar2 != uVar3) break;
    uVar4 = (uint)(ushort)((short)uVar4 + 1);
    cVar1 = param_2[uVar4];
    in_EAX = uVar4;
  }
  return uVar3 & 0xffffff00;
}



/* Function: FUN_0040a370 @ 0x0040a370 */

undefined4 __cdecl FUN_0040a370(int param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return CONCAT31(in_EAX >> 8,1);
    }
    if (*(char *)(uVar2 + param_1) != param_2[uVar2]) break;
    uVar2 = (uint)(ushort)((short)uVar2 + 1);
    cVar1 = param_2[uVar2];
    in_EAX = uVar2;
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0040a3b0 @ 0x0040a3b0 */

undefined4 __cdecl FUN_0040a3b0(int param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return CONCAT31(in_EAX >> 8,1);
    }
    uVar2 = toupper((int)*(char *)(param_1 + uVar4));
    uVar3 = toupper((int)param_2[uVar4]);
    if (uVar2 != uVar3) break;
    uVar4 = (uint)(ushort)((short)uVar4 + 1);
    cVar1 = param_2[uVar4];
    in_EAX = uVar4;
  }
  return uVar3 & 0xffffff00;
}



/* Function: FUN_0040a410 @ 0x0040a410 */

char * __cdecl FUN_0040a410(char *param_1)

{
  char cVar1;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    return param_1;
  }
  return (char *)0x0;
}



/* Function: FUN_0040a440 @ 0x0040a440 */

void FUN_0040a440(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484218,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040a490 @ 0x0040a490 */

void FUN_0040a490(void)

{
  return;
}



/* Function: FUN_0040a4b0 @ 0x0040a4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4b0(void)

{
  _DAT_00484236 = 0;
  _DAT_00484234 = 0;
  return;
}



/* Function: FUN_0040a4c0 @ 0x0040a4c0 */

void FUN_0040a4c0(void)

{
  _atexit(FUN_0040a4d0);
  return;
}



/* Function: FUN_0040a4d0 @ 0x0040a4d0 */

void FUN_0040a4d0(void)

{
  return;
}



/* Function: FUN_0040a4f0 @ 0x0040a4f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4f0(void)

{
  _DAT_00484232 = 0;
  _DAT_00484230 = 0;
  return;
}



/* Function: FUN_0040a500 @ 0x0040a500 */

void FUN_0040a500(void)

{
  _atexit(FUN_0040a510);
  return;
}



/* Function: FUN_0040a510 @ 0x0040a510 */

void FUN_0040a510(void)

{
  return;
}



/* Function: FUN_0040a530 @ 0x0040a530 */

void FUN_0040a530(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484240,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040a570 @ 0x0040a570 */

void FUN_0040a570(void)

{
  _atexit(FUN_0040a580);
  return;
}



/* Function: FUN_0040a580 @ 0x0040a580 */

void FUN_0040a580(void)

{
  return;
}



/* Function: FUN_0040a5a0 @ 0x0040a5a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a5a0(void)

{
  _DAT_00484266 = 0;
  _DAT_00484264 = 0;
  return;
}



/* Function: FUN_0040a5b0 @ 0x0040a5b0 */

void FUN_0040a5b0(void)

{
  _atexit(FUN_0040a5c0);
  return;
}



/* Function: FUN_0040a5c0 @ 0x0040a5c0 */

void FUN_0040a5c0(void)

{
  return;
}



/* Function: FUN_0040a5e0 @ 0x0040a5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a5e0(void)

{
  _DAT_00484262 = 0;
  _DAT_00484260 = 0;
  return;
}



/* Function: FUN_0040a5f0 @ 0x0040a5f0 */

void FUN_0040a5f0(void)

{
  _atexit(FUN_0040a600);
  return;
}



/* Function: FUN_0040a600 @ 0x0040a600 */

void FUN_0040a600(void)

{
  return;
}



/* Function: FUN_0040a620 @ 0x0040a620 */

void FUN_0040a620(void)

{
  DAT_00484254 = 0;
  DAT_00484250 = 0;
  return;
}



/* Function: FUN_0040a630 @ 0x0040a630 */

void FUN_0040a630(void)

{
  _atexit(FUN_0040a640);
  return;
}



/* Function: FUN_0040a640 @ 0x0040a640 */

void FUN_0040a640(void)

{
  return;
}



/* Function: FUN_0040a6c0 @ 0x0040a6c0 */

undefined4 * __fastcall FUN_0040a6c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040a70b;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004726b0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0040a720 @ 0x0040a720 */

undefined4 * __thiscall FUN_0040a720(void *this,byte param_1)

{
  FUN_0040a740(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0040a740 @ 0x0040a740 */

void __fastcall FUN_0040a740(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040a77d;
  *param_1 = &PTR_FUN_004726b0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040a787();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040a787 @ 0x0040a787 */

void FUN_0040a787(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0040ab15 @ 0x0040ab15 */

void FUN_0040ab15(void)

{
  return;
}



/* Function: FUN_0040ab1d @ 0x0040ab1d */

void FUN_0040ab1d(void)

{
  return;
}



/* Function: FUN_0040ab25 @ 0x0040ab25 */

void FUN_0040ab25(void)

{
  return;
}



/* Function: FUN_0040ab2d @ 0x0040ab2d */

void FUN_0040ab2d(void)

{
  return;
}



/* Function: FUN_0040ab35 @ 0x0040ab35 */

void FUN_0040ab35(void)

{
  return;
}



/* Function: FUN_0040ab3d @ 0x0040ab3d */

void FUN_0040ab3d(void)

{
  return;
}



/* Function: FUN_0040ab45 @ 0x0040ab45 */

void FUN_0040ab45(void)

{
  return;
}



/* Function: FUN_0040ab4d @ 0x0040ab4d */

void FUN_0040ab4d(void)

{
  return;
}



/* Function: FUN_0040ab55 @ 0x0040ab55 */

void FUN_0040ab55(void)

{
  return;
}



/* Function: FUN_0040ab67 @ 0x0040ab67 */

void FUN_0040ab67(void)

{
  return;
}



/* Function: FUN_0040ab70 @ 0x0040ab70 */

undefined4 * __fastcall FUN_0040ab70(undefined4 *param_1)

{
    /* TODO: 25 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040ac20 @ 0x0040ac20 */

undefined4 * __thiscall FUN_0040ac20(void *this,byte param_1)

{
  FUN_0040ac40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0040ac40 @ 0x0040ac40 */

void __fastcall FUN_0040ac40(undefined4 *param_1)

{
    /* TODO: 21 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040acbb @ 0x0040acbb */

void FUN_0040acbb(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0040acd0 @ 0x0040acd0 */

void FUN_0040acd0(void)

{
    /* TODO: 201 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040b1a9 @ 0x0040b1a9 */

void FUN_0040b1a9(void)

{
  return;
}



/* Function: FUN_0040b1be @ 0x0040b1be */

void FUN_0040b1be(void)

{
  return;
}



/* Function: FUN_0040b1c6 @ 0x0040b1c6 */

void FUN_0040b1c6(void)

{
  return;
}



/* Function: FUN_0040b1d8 @ 0x0040b1d8 */

void FUN_0040b1d8(void)

{
  return;
}



/* Function: FUN_0040b1e0 @ 0x0040b1e0 */

void __thiscall FUN_0040b1e0(void *this,int param_1)

{
    /* TODO: 145 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040b651 @ 0x0040b651 */

void FUN_0040b651(void)

{
  return;
}



/* Function: FUN_0040b659 @ 0x0040b659 */

void FUN_0040b659(void)

{
  return;
}



/* Function: FUN_0040b66b @ 0x0040b66b */

void FUN_0040b66b(void)

{
  return;
}



/* Function: FUN_0040b680 @ 0x0040b680 */

void __thiscall FUN_0040b680(void *this,undefined4 param_1)

{
    /* TODO: 186 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040bc46 @ 0x0040bc46 */

void FUN_0040bc46(void)

{
  return;
}



/* Function: FUN_0040bc4e @ 0x0040bc4e */

void FUN_0040bc4e(void)

{
  return;
}



/* Function: FUN_0040bc56 @ 0x0040bc56 */

void FUN_0040bc56(void)

{
  return;
}



/* Function: FUN_0040bc68 @ 0x0040bc68 */

void FUN_0040bc68(void)

{
  return;
}



/* Function: FUN_0040bc70 @ 0x0040bc70 */

void FUN_0040bc70(void *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_0041dad0(param_1,(byte)param_2,'\0');
  if (((*(int *)((int)param_1 + 0x36) != 0) &&
      (iVar2 = *(int *)(*(int *)((int)param_1 + 0x36) + 0xe), iVar2 != 0)) &&
     (uVar1 = 1, iVar2 != 0)) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0040bc70(*(void **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + -8 + iVar2),param_2);
    } while (uVar1 <= *(uint *)(*(int *)((int)param_1 + 0x36) + 0xe));
  }
  return;
}



/* Function: FUN_0040bce0 @ 0x0040bce0 */

void FUN_0040bce0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040be91;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  puVar1 = FUN_0040bf50(*(void **)(DAT_004897c0 + 0x44),local_34);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  FUN_00403030(&local_2c,&local_24,puVar1);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  FUN_0040be81();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_0040be79();
  FUN_0041bb70(*(void **)(DAT_004897c0 + 0x44),param_1,'\x01');
  FUN_0041ce10(param_1,&DAT_00484250,0);
  FUN_0041ce10(*(void **)(DAT_004897c0 + 0x44),&local_1c,0);
  DAT_00484254 = DAT_00484254 - local_18;
  DAT_00484250 = DAT_00484250 - local_1c;
  FUN_0041dd40(*(void **)(DAT_004897c0 + 0x44));
  FUN_0041dad0(param_1,1,'\0');
  iVar2 = 1;
  FUN_00407340(*(int *)((int)local_14 + 0x120),'\x01','\0',4,'\0');
  iVar3 = 0x40bded;
  FUN_0040bc70(*(void **)(DAT_004897c0 + 0x44),0);
  FUN_0041bd00(*(void **)(DAT_004897c0 + 0x44),(int)param_1);
  cVar5 = '\x01';
  uVar4 = 0;
  local_20 = &ghidra_stack_ffffffb8;
  FUN_004090c0(&ghidra_stack_ffffffb8,&local_2c);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_004060c0(*(void **)(DAT_004897c0 + 0x44),iVar2,iVar3,uVar4,cVar5);
  FUN_0041d780(*(void **)(DAT_004897c0 + 0x44),(void *)0x0);
  FUN_0041d780(local_14,(void *)0x0);
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  *(undefined2 *)((int)local_14 + 0x11c) = 1;
  FUN_0040be89();
  local_8 = 0xffffffff;
  FUN_0040be9b();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040be79 @ 0x0040be79 */

void FUN_0040be79(void)

{
  return;
}



/* Function: FUN_0040be81 @ 0x0040be81 */

void FUN_0040be81(void)

{
  return;
}



/* Function: FUN_0040be89 @ 0x0040be89 */

void FUN_0040be89(void)

{
  return;
}



/* Function: FUN_0040be9b @ 0x0040be9b */

void FUN_0040be9b(void)

{
  return;
}



/* Function: FUN_0040beb0 @ 0x0040beb0 */

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



/* Function: FUN_0040bf00 @ 0x0040bf00 */

void FUN_0040bf00(void)

{
  if (DAT_0047e7c8 != 0) {
    FUN_00434490(DAT_0047e7c8);
    DAT_0047e7c8 = 0;
    FUN_0043a700(DAT_004838c0,DAT_00484248,DAT_00484238);
  }
  return;
}



/* Function: FUN_0040bf50 @ 0x0040bf50 */

undefined4 * __thiscall FUN_0040bf50(SoundPlayer *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = this->sequence_data[41];
  *param_1 = this->sequence_data[40];
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}



/* Function: FUN_0040bfd0 @ 0x0040bfd0 */

void __thiscall
FUN_0040bfd0(CString *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  this->pp_buffer = param_1;
  *(undefined4 *)this = param_2;
  this->allocator = param_3;
  this->capacity = param_4;
  return;
}



/* Function: FUN_0040c000 @ 0x0040c000 */

void FUN_0040c000(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484268,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040c050 @ 0x0040c050 */

void FUN_0040c050(void)

{
  return;
}



/* Function: FUN_0040c070 @ 0x0040c070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c070(void)

{
  _DAT_00484276 = 0;
  _DAT_00484274 = 0;
  return;
}



/* Function: FUN_0040c080 @ 0x0040c080 */

void FUN_0040c080(void)

{
  _atexit(FUN_0040c090);
  return;
}



/* Function: FUN_0040c090 @ 0x0040c090 */

void FUN_0040c090(void)

{
  return;
}



/* Function: FUN_0040c0b0 @ 0x0040c0b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c0b0(void)

{
  _DAT_00484272 = 0;
  _DAT_00484270 = 0;
  return;
}



/* Function: FUN_0040c0c0 @ 0x0040c0c0 */

void FUN_0040c0c0(void)

{
  _atexit(FUN_0040c0d0);
  return;
}



/* Function: FUN_0040c0d0 @ 0x0040c0d0 */

void FUN_0040c0d0(void)

{
  return;
}



/* Function: FUN_0040c1c0 @ 0x0040c1c0 */

undefined4 * __cdecl FUN_0040c1c0(undefined2 param_1)

{
    /* TODO: 152 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040c679 @ 0x0040c679 */

void FUN_0040c679(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0040c690 @ 0x0040c690 */

undefined4 * __fastcall FUN_0040c690(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040c712;
  *unaff_FS_OFFSET = &local_10;
  FUN_004336c0(param_1);
  *param_1 = &PTR_FUN_00472a08;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x19] = 0;
  puVar2 = param_1 + 0x1a;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x21] = 0;
  puVar2 = param_1 + 0x22;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0040c730 @ 0x0040c730 */

undefined4 * __thiscall FUN_0040c730(void *this,byte param_1)

{
  FUN_0040c750(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0040c750 @ 0x0040c750 */

void __fastcall FUN_0040c750(undefined4 *param_1)

{
    /* TODO: 44 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040c85e @ 0x0040c85e */

void FUN_0040c85e(void)

{
  int unaff_EBP;
  
  FUN_004337b0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0040c9e5 @ 0x0040c9e5 */

void FUN_0040c9e5(void)

{
  return;
}



/* Function: FUN_0040ca70 @ 0x0040ca70 */

void __fastcall FUN_0040ca70(void *param_1)

{
    /* TODO: 126 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040d3a0 @ 0x0040d3a0 */

undefined4 * FUN_0040d3a0(void)

{
    /* TODO: 33 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040d50a @ 0x0040d50a */

void FUN_0040d50a(void)

{
  return;
}



/* Function: FUN_0040d5ca @ 0x0040d5ca */

void FUN_0040d5ca(void)

{
  return;
}



/* Function: FUN_0040d630 @ 0x0040d630 */

void __thiscall FUN_0040d630(void *this,short param_1)

{
    /* TODO: 65 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040d82a @ 0x0040d82a */

void FUN_0040d82a(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x418));
  return;
}



/* Function: FUN_0040d840 @ 0x0040d840 */

void __thiscall FUN_0040d840(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 extraout_var;
  short *psVar5;
  short sVar6;
  ushort *puVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  void *local_18;
  undefined1 local_11;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040dc40;
  *unaff_FS_OFFSET = &local_10;
  sVar6 = 0;
  if (*(int *)((intptr_t)this + 0x44) != 0) {
    puVar7 = (ushort *)0x0;
    local_11 = DAT_00480100;
    local_18 = (void *)FUN_004050d0(*(int *)((intptr_t)this + 0x44));
    DAT_00480100 = 0;
    if (param_1 == 0xf) {
      iVar4 = rand();
      param_1 = (iVar4 << 2) / 0x7fff & 0xffff;
    }
    switch(param_1) {
    case 0:
      sVar6 = 1;
      break;
    case 1:
      sVar6 = 2;
      break;
    case 2:
      sVar6 = 3;
      break;
    case 3:
      sVar6 = 4;
      break;
    case 4:
      sVar6 = 5;
      break;
    case 5:
      sVar6 = 6;
      break;
    case 6:
      sVar6 = 7;
      break;
    case 7:
      sVar6 = 4;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487a08;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00488a90;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00487ec8;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488750;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00488ad0;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00487b48;
      }
      break;
    case 8:
      sVar6 = 4;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487bc8;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_004879c8;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00487b08;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488b10;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00487848;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00488190;
      }
      break;
    case 9:
      sVar6 = 1;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487648;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00488c50;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00488690;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488a10;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00488990;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00488510;
      }
      break;
    case 10:
      sVar6 = 1;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487a48;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00488210;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00488050;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488490;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00488550;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00487d08;
      }
      break;
    case 0xb:
      sVar6 = 1;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487f08;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00487dc8;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00488710;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_004887d0;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00487a88;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00488450;
      }
      break;
    case 0xc:
      sVar6 = 7;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00488a50;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00487cc8;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_004877c8;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00487b88;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_00487c48;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00487608;
      }
      break;
    case 0xd:
      sVar6 = 6;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487f48;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_004885d0;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00488b50;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488790;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_004883d0;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_00488250;
      }
      break;
    case 0xe:
      sVar6 = 5;
      switch(DAT_00489398) {
      case 1:
        puVar7 = (ushort *)&DAT_00487788;
        break;
      case 2:
        puVar7 = (ushort *)&DAT_00487988;
        break;
      case 3:
        puVar7 = (ushort *)&DAT_00488010;
        break;
      case 4:
        puVar7 = (ushort *)&DAT_00488950;
        break;
      case 5:
        puVar7 = (ushort *)&DAT_004886d0;
        break;
      case 6:
        puVar7 = (ushort *)&DAT_004881d0;
      }
    }
    if (sVar6 != 0) {
      if (puVar7 == (ushort *)0x0) {
        local_18 = (void *)0x0;
        local_1c = 0;
        local_8 = 0;
        FUN_0041cde0(*(void **)((intptr_t)this + 0x44),&local_1c);
        if ((*(int *)((intptr_t)this + 100) != 0) &&
           (bVar3 = FUN_0045d930(*(int *)((intptr_t)this + 100)),
           (short)CONCAT31(extraout_var,bVar3) != 0)) {
          FUN_00434490(*(int *)((intptr_t)this + 100));
          FUN_00433420(*(int **)((intptr_t)this +
                                *(short *)(*(int *)((intptr_t)this + 0x44) + 0x10e) * 4 + 100));
        }
        psVar5 = FUN_0045ef70(*(int **)((intptr_t)this + sVar6 * 4 + 100));
        pvVar1 = *(void **)((intptr_t)this + 0x44);
        *(short **)((intptr_t)this + 100) = psVar5;
        *(undefined1 *)((int)pvVar1 + 0x114) = 0;
        *(undefined1 *)((int)pvVar1 + 0x116) = 0;
        *(undefined1 *)((int)pvVar1 + 0x115) = 0;
        *(undefined1 *)((int)pvVar1 + 0x117) = 0;
        FUN_00405e10(pvVar1,sVar6,'\0');
        local_8 = 0xffffffff;
        FUN_0040dc4a();
      }
      else {
        pvVar1 = *(void **)((intptr_t)this + 0x44);
        *(undefined1 *)((int)pvVar1 + 0x114) = 0;
        *(undefined1 *)((int)pvVar1 + 0x116) = 0;
        *(undefined1 *)((int)pvVar1 + 0x115) = 0;
        *(undefined1 *)((int)pvVar1 + 0x117) = 0;
        FUN_00405d30(pvVar1,sVar6);
        if (local_18 == (void *)0x0) {
          FUN_00407b10(*(void **)((intptr_t)this + 0x44),7,puVar7);
        }
        else {
          uVar2 = *(uint *)((int)local_18 + 0x12);
          *(uint *)((int)local_18 + 0x12) = uVar2 & 0xffffffef;
          FUN_00407b10(local_18,7,puVar7);
          *(uint *)((int)local_18 + 0x12) =
               ((uint)((byte)(uVar2 >> 4) & 1) << 4 ^ *(uint *)((int)local_18 + 0x12)) & 0x10 ^
               *(uint *)((int)local_18 + 0x12);
        }
      }
    }
    DAT_00480100 = local_11;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040dc4a @ 0x0040dc4a */

void FUN_0040dc4a(void)

{
  return;
}



/* Function: FUN_0040dde0 @ 0x0040dde0 */

void __thiscall FUN_0040dde0(void *this,short param_1)

{
    /* TODO: 120 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040e0c0 @ 0x0040e0c0 */

void __fastcall FUN_0040e0c0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    DVar2 = GetTickCount();
    if (DVar2 < *(int *)(param_1 + 0x60) + 5000U) {
      iVar1 = *(int *)(param_1 + 0x60);
      DVar2 = GetTickCount();
      FUN_00456310((int)(((longlong)(int)((iVar1 - DVar2) + 5000) * (longlong)DAT_004890a4 &
                         0xffffffffU) / 1000),'\x01','\0');
    }
    FUN_004268d0(*(undefined4 **)(param_1 + 0x58),10);
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x5c))();
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_0046f5f0(*(uint *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Function: FUN_0040e140 @ 0x0040e140 */

void __thiscall FUN_0040e140(void *this,int param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040e1f0 @ 0x0040e1f0 */

void __thiscall FUN_0040e1f0(void *this,short param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040e270 @ 0x0040e270 */

void __thiscall FUN_0040e270(void *this,short param_1)

{
    /* TODO: 49 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040e355 @ 0x0040e355 */

void FUN_0040e355(void)

{
  return;
}



/* Function: FUN_0040e360 @ 0x0040e360 */

void __fastcall FUN_0040e360(int param_1)

{
  int *piVar1;
  short sVar2;
  
  sVar2 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x88 + sVar2 * 6);
    if (*piVar1 != 0) {
      FUN_00433270(piVar1);
    }
    sVar2 = sVar2 + 1;
    *piVar1 = 0;
  } while (sVar2 < 0x14);
  return;
}



/* Function: FUN_0040e3a0 @ 0x0040e3a0 */

void __thiscall FUN_0040e3a0(void *this,short param_1)

{
    /* TODO: 48 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040e4f0 @ 0x0040e4f0 */

short __cdecl FUN_0040e4f0(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = 1;
  if (0 < *param_1) {
    do {
      if (param_1[sVar1] == param_2) {
        return sVar1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 <= *param_1);
  }
  return 0;
}



/* Function: FUN_0040e520 @ 0x0040e520 */

int __cdecl FUN_0040e520(short param_1)

{
  short sVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  sVar1 = FUN_0040e4f0(&DAT_00483498,param_1);
  if (sVar1 != 0) {
    return CONCAT22(extraout_var,6);
  }
  sVar1 = FUN_0040e4f0(&DAT_00483478,param_1);
  if (sVar1 != 0) {
    return CONCAT22(extraout_var_00,3);
  }
  sVar1 = FUN_0040e4f0(&DAT_00483488,param_1);
  return (-(uint)(sVar1 == 0) & 0xfffffffb) + 4;
}



/* Function: FUN_0040e580 @ 0x0040e580 */

undefined4 FUN_0040e580(void)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_00433a80(DAT_004897c0);
  uVar2 = (undefined2)((uint)(sVar1 + -4) >> 0x10);
  switch(sVar1) {
  case 4:
    return CONCAT22(uVar2,1);
  case 5:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    return CONCAT22(uVar2,4);
  case 6:
  case 0xc:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    return CONCAT22(uVar2,6);
  case 7:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
    return CONCAT22(uVar2,5);
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x10:
    return CONCAT22(uVar2,3);
  default:
    return CONCAT22(uVar2,0xffff);
  }
}



/* Function: FUN_0040e610 @ 0x0040e610 */

undefined4 __cdecl FUN_0040e610(short param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  
  iVar5 = FUN_0040e520(param_1);
  if ((short)iVar5 != -1) {
    *(undefined1 *)((short)iVar5 + 0x41 + DAT_0048345c) = 1;
  }
  uVar1 = *(ushort *)(DAT_0048345c + 0x48);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(DAT_0048345c + 0x90) = 0;
  }
  else {
    *(char *)(DAT_0048345c + 0x90) = (char)uVar1;
  }
  sVar7 = 0;
  while (uVar4 = DAT_00483498, uVar3 = DAT_00483488, uVar2 = DAT_00483478, sVar8 = sVar7 + 1,
        sVar7 < 0x65) {
    iVar5 = rand();
    uVar4 = DAT_00483498;
    uVar3 = DAT_00483488;
    uVar2 = DAT_00483478;
    iVar5 = iVar5 % 3;
    sVar7 = sVar8;
    if (iVar5 == 0) {
      if (((uVar1 & 0x30) != 0) && (*(char *)(DAT_0048345c + 0x47) == '\0')) {
        iVar5 = rand();
        uVar6 = (int)(iVar5 * (uint)uVar4) / 0x7fff;
        return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048349a + (uVar6 & 0xffff) * 2)
                       );
      }
    }
    else if (iVar5 == 1) {
      if (((uVar1 & 0x50) != 0) && (*(char *)(DAT_0048345c + 0x45) == '\0')) {
        iVar5 = rand();
        uVar6 = (int)(iVar5 * (uint)uVar3) / 0x7fff;
        return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048348a + (uVar6 & 0xffff) * 2)
                       );
      }
    }
    else if (((iVar5 == 2) && ((uVar1 & 0x90) != 0)) && (*(char *)(DAT_0048345c + 0x44) == '\0')) {
      iVar5 = rand();
      uVar6 = (int)(iVar5 * (uint)uVar2) / 0x7fff;
      return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048347a + (uVar6 & 0xffff) * 2));
    }
  }
  if ((uVar1 & 0x20) != 0) {
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar4) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048349a + (uVar6 & 0xffff) * 2));
  }
  if ((uVar1 & 0x40) != 0) {
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar3) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048348a + (uVar6 & 0xffff) * 2));
  }
  if ((uVar1 & 0x80) != 0) {
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar2) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048347a + (uVar6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x44) == '\0') {
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar2) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048347a + (uVar6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x47) == '\0') {
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar4) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048349a + (uVar6 & 0xffff) * 2));
  }
  if (*(char *)(DAT_0048345c + 0x45) != '\0') {
    *(char *)(DAT_0048345c + 0x44) = '\0';
    *(undefined1 *)(DAT_0048345c + 0x45) = 0;
    *(undefined1 *)(DAT_0048345c + 0x47) = 0;
    uVar1 = DAT_00483478;
    iVar5 = rand();
    uVar6 = (int)(iVar5 * (uint)uVar1) / 0x7fff;
    return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048347a + (uVar6 & 0xffff) * 2));
  }
  iVar5 = rand();
  uVar6 = (int)(iVar5 * (uint)uVar3) / 0x7fff;
  return CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(&DAT_0048348a + (uVar6 & 0xffff) * 2));
}



/* Function: FUN_0040e890 @ 0x0040e890 */

void __fastcall FUN_0040e890(undefined *param_1)

{
    /* TODO: 288 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040efc0 @ 0x0040efc0 */

void __cdecl FUN_0040efc0(short *param_1,char param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if (param_2 == '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  sVar3 = 0;
  sVar1 = *param_1;
  if (0 < sVar1) {
    do {
      if (DAT_00483ddc != '\0') {
        sVar2 = param_1[sVar3 * 2 + 2];
        param_1[sVar3 * 2 + 2] = CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8));
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < sVar1);
  }
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}



/* Function: FUN_0040f040 @ 0x0040f040 */

ushort * __cdecl FUN_0040f040(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_0040efc0((short *)puVar1,'\0');
  }
  return puVar1;
}



/* Function: FUN_0040f070 @ 0x0040f070 */

void __cdecl FUN_0040f070(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0040f080 @ 0x0040f080 */

undefined4 __cdecl FUN_0040f080(void *param_1,uint param_2,short *param_3)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040f0f0 @ 0x0040f0f0 */

ushort * __cdecl FUN_0040f0f0(void *param_1,int param_2,ushort *param_3)

{
    /* TODO: 89 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040f280 @ 0x0040f280 */

undefined4 * __thiscall FUN_0040f280(CString *this,uint param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x16,*(int *)((intptr_t)this - 4U),FUN_0040f520);
    FUN_0046c410((intptr_t)this - 4U);
    return this;
  }
  *(undefined ***)this = &PTR_FUN_00472acc;
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



/* Function: FUN_0040f2f0 @ 0x0040f2f0 */

undefined4 __cdecl FUN_0040f2f0(void *param_1,uint param_2,int param_3)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040f380 @ 0x0040f380 */

ushort * __cdecl FUN_0040f380(void *param_1,int param_2,ushort *param_3)

{
  short sVar1;
  ushort *puVar2;
  LPCVOID pvVar3;
  int iVar4;
  
  puVar2 = FUN_0040f040(param_1,param_2);
  if (puVar2 == (ushort *)0x0) {
    return param_3;
  }
  if (param_3 == (ushort *)0x0) {
    pvVar3 = DAT_00483df4;
    if (DAT_004833cc != (LPCVOID)0x0) {
      pvVar3 = DAT_004833cc;
    }
    param_3 = FUN_0046f060(pvVar3,(short)*puVar2 * 2 + 2,1);
    if (param_3 == (ushort *)0x0) goto LAB_0040f3f2;
  }
  *param_3 = *puVar2;
  sVar1 = 1;
  if (0 < (short)*puVar2) {
    do {
      iVar4 = (int)sVar1;
      sVar1 = sVar1 + 1;
      param_3[iVar4] = puVar2[iVar4 * 2];
    } while (sVar1 <= (short)*puVar2);
  }
LAB_0040f3f2:
  FUN_0040f070(param_1,param_2,(uint)puVar2);
  return param_3;
}



/* Function: FUN_0040f410 @ 0x0040f410 */

void __cdecl FUN_0040f410(ushort *param_1,ushort *param_2)

{
  LPCVOID pvVar1;
  short sVar2;
  int iVar3;
  
  if (param_2 == (ushort *)0x0) {
    pvVar1 = DAT_00483df4;
    if (DAT_004833cc != (LPCVOID)0x0) {
      pvVar1 = DAT_004833cc;
    }
    param_2 = FUN_0046f060(pvVar1,(short)*param_1 * 2 + 2,1);
  }
  if (param_2 != (ushort *)0x0) {
    *param_2 = *param_1;
    sVar2 = 1;
    if (0 < (short)*param_1) {
      do {
        iVar3 = (int)sVar2;
        sVar2 = sVar2 + 1;
        param_2[iVar3] = param_1[iVar3 * 2];
      } while (sVar2 <= (short)*param_1);
    }
  }
  return;
}



/* Function: FUN_0040f480 @ 0x0040f480 */

undefined1 __cdecl FUN_0040f480(void *param_1,int param_2,ushort *param_3)

{
  ushort *puVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  
  uVar2 = 0;
  puVar1 = FUN_0040f040(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    sVar3 = 1;
    uVar2 = 1;
    *param_3 = *puVar1;
    if (0 < (short)*puVar1) {
      do {
        iVar4 = (int)sVar3;
        sVar3 = sVar3 + 1;
        param_3[iVar4] = puVar1[iVar4 * 2];
      } while (sVar3 <= (short)*puVar1);
    }
    FUN_0040f070(param_1,param_2,(uint)puVar1);
  }
  return uVar2;
}



/* Function: FUN_0040f520 @ 0x0040f520 */

void __fastcall FUN_0040f520(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00472acc;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_0040f560 @ 0x0040f560 */

void FUN_0040f560(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484278,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040f5b0 @ 0x0040f5b0 */

void FUN_0040f5b0(void)

{
  return;
}



/* Function: FUN_0040f5d0 @ 0x0040f5d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f5d0(void)

{
  _DAT_00484286 = 0;
  _DAT_00484284 = 0;
  return;
}



/* Function: FUN_0040f5e0 @ 0x0040f5e0 */

void FUN_0040f5e0(void)

{
  _atexit(FUN_0040f5f0);
  return;
}



/* Function: FUN_0040f5f0 @ 0x0040f5f0 */

void FUN_0040f5f0(void)

{
  return;
}



/* Function: FUN_0040f610 @ 0x0040f610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f610(void)

{
  _DAT_00484282 = 0;
  _DAT_00484280 = 0;
  return;
}



/* Function: FUN_0040f620 @ 0x0040f620 */

void FUN_0040f620(void)

{
  _atexit(FUN_0040f630);
  return;
}



/* Function: FUN_0040f630 @ 0x0040f630 */

void FUN_0040f630(void)

{
  return;
}



/* Function: FUN_0040f650 @ 0x0040f650 */

void FUN_0040f650(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484288,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0040f690 @ 0x0040f690 */

void FUN_0040f690(void)

{
  _atexit(FUN_0040f6a0);
  return;
}



/* Function: FUN_0040f6a0 @ 0x0040f6a0 */

void FUN_0040f6a0(void)

{
  return;
}



/* Function: FUN_0040f6c0 @ 0x0040f6c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f6c0(void)

{
  _DAT_00484296 = 0;
  _DAT_00484294 = 0;
  return;
}



/* Function: FUN_0040f6d0 @ 0x0040f6d0 */

void FUN_0040f6d0(void)

{
  _atexit(FUN_0040f6e0);
  return;
}



/* Function: FUN_0040f6e0 @ 0x0040f6e0 */

void FUN_0040f6e0(void)

{
  return;
}



/* Function: FUN_0040f700 @ 0x0040f700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f700(void)

{
  _DAT_00484292 = 0;
  _DAT_00484290 = 0;
  return;
}



/* Function: FUN_0040f710 @ 0x0040f710 */

void FUN_0040f710(void)

{
  _atexit(FUN_0040f720);
  return;
}



/* Function: FUN_0040f720 @ 0x0040f720 */

void FUN_0040f720(void)

{
  return;
}



/* Function: FUN_0040f730 @ 0x0040f730 */

undefined4 * __thiscall FUN_0040f730(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040f785;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454a70(this,param_1);
  *(undefined ***)this = &PTR_FUN_00472af8;
  *(undefined4 *)((intptr_t)this + 0x11c) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_0040f819 @ 0x0040f819 */

void FUN_0040f819(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0040fb0d @ 0x0040fb0d */

void FUN_0040fb0d(void)

{
  return;
}



/* Function: FUN_0040fb15 @ 0x0040fb15 */

void FUN_0040fb15(void)

{
  return;
}



/* Function: FUN_0040fb1d @ 0x0040fb1d */

void FUN_0040fb1d(void)

{
  return;
}



/* Function: FUN_0040fb25 @ 0x0040fb25 */

void FUN_0040fb25(void)

{
  return;
}



/* Function: FUN_0040fb2d @ 0x0040fb2d */

void FUN_0040fb2d(void)

{
  return;
}



/* Function: FUN_0040fb35 @ 0x0040fb35 */

void FUN_0040fb35(void)

{
  return;
}



/* Function: FUN_0040fb3d @ 0x0040fb3d */

void FUN_0040fb3d(void)

{
  return;
}



/* Function: FUN_0040fb45 @ 0x0040fb45 */

void FUN_0040fb45(void)

{
  return;
}



/* Function: FUN_0040fb4d @ 0x0040fb4d */

void FUN_0040fb4d(void)

{
  return;
}



/* Function: FUN_0040fb55 @ 0x0040fb55 */

void FUN_0040fb55(void)

{
  return;
}



/* Function: FUN_0040fb5d @ 0x0040fb5d */

void FUN_0040fb5d(void)

{
  return;
}



/* Function: FUN_0040fb6f @ 0x0040fb6f */

void FUN_0040fb6f(void)

{
  return;
}



/* Function: FUN_0040fb80 @ 0x0040fb80 */

void __fastcall FUN_0040fb80(void *param_1)

{
    /* TODO: 58 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040fd15 @ 0x0040fd15 */

void FUN_0040fd15(void)

{
  return;
}



/* Function: FUN_0040fd1d @ 0x0040fd1d */

void FUN_0040fd1d(void)

{
  return;
}



/* Function: FUN_0040fd25 @ 0x0040fd25 */

void FUN_0040fd25(void)

{
  return;
}



/* Function: FUN_0040fd2d @ 0x0040fd2d */

void FUN_0040fd2d(void)

{
  return;
}



/* Function: FUN_0040fd35 @ 0x0040fd35 */

void FUN_0040fd35(void)

{
  return;
}



/* Function: FUN_0040fd3d @ 0x0040fd3d */

void FUN_0040fd3d(void)

{
  return;
}



/* Function: FUN_0040fd4f @ 0x0040fd4f */

void FUN_0040fd4f(void)

{
  return;
}



/* Function: FUN_0040fd60 @ 0x0040fd60 */

undefined4 * __thiscall FUN_0040fd60(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040fdb5;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454a70(this,param_1);
  *(undefined ***)this = &PTR_FUN_00472ba8;
  *(undefined4 *)((intptr_t)this + 0x11c) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_0040fe29 @ 0x0040fe29 */

void FUN_0040fe29(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0040fe40 @ 0x0040fe40 */

void __thiscall FUN_0040fe40(void *this,int param_1)

{
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040fec0;
  *unaff_FS_OFFSET = &local_10;
  *(int *)((intptr_t)this + 0x11c) = param_1;
  if (param_1 != 0) {
    local_14 = 0;
    local_18 = 0;
    local_8 = 0;
    FUN_0041ce10(this,&local_18,1);
    FUN_0041d020(*(void **)((intptr_t)this + 0x11c),local_14,local_18,1);
    local_8 = 0xffffffff;
    *(void **)(*(int *)((intptr_t)this + 0x11c) + 0x11c) = this;
    FUN_0040feca();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040feca @ 0x0040feca */

void FUN_0040feca(void)

{
  return;
}



/* Function: FUN_0040fee0 @ 0x0040fee0 */

void __fastcall FUN_0040fee0(int param_1)

{
  if (*(void **)(param_1 + 0x11c) != (void *)0x0) {
    FUN_0040fb80(*(void **)(param_1 + 0x11c));
  }
  return;
}



/* Function: FUN_0040ff00 @ 0x0040ff00 */

void __thiscall FUN_0040ff00(void *this,undefined4 param_1)

{
    /* TODO: 5 lines - has decompilation artifacts */
    return;
}



