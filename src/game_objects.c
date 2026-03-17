/*
 * game_objects.c - Game objects and entities
 * Address range: 0x401000 - 0x408FFF
 * Functions: 223
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_00401010 @ 0x00401010 */

void FUN_00401010(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484158,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00401050 @ 0x00401050 */

int * __thiscall FUN_00401050(void *this,int param_1)

{
  *(int *)this = param_1 << 8;
  return this;
}



/* Function: FUN_00401060 @ 0x00401060 */

undefined4 * __thiscall FUN_00401060(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((intptr_t)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((intptr_t)this + 4) = param_1;
  *(undefined4 *)this = param_2;
  return this;
}



/* Function: FUN_004010b0 @ 0x004010b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004010b0(void)

{
  _DAT_00484166 = 0;
  _DAT_00484164 = 0;
  return;
}



/* Function: FUN_004010c0 @ 0x004010c0 */

void FUN_004010c0(void)

{
  _atexit(FUN_004010d0);
  return;
}



/* Function: FUN_004010d0 @ 0x004010d0 */

void FUN_004010d0(void)

{
  return;
}



/* Function: FUN_004010f0 @ 0x004010f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004010f0(void)

{
  _DAT_00484162 = 0;
  _DAT_00484160 = 0;
  return;
}



/* Function: FUN_00401100 @ 0x00401100 */

void FUN_00401100(void)

{
  _atexit(FUN_00401110);
  return;
}



/* Function: FUN_00401110 @ 0x00401110 */

void FUN_00401110(void)

{
  return;
}



/* Function: FUN_00401140 @ 0x00401140 */

undefined4 * __fastcall FUN_00401140(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040124f;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = 0x40116a;
  FUN_0044e3f0(param_1);
  *(undefined4 *)((int)param_1 + 0x11a) = 0;
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  local_8 = 2;
  *param_1 = &PTR_FUN_00472078;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  *(undefined1 *)((int)param_1 + 0x12f) = 0;
  *(undefined4 *)((int)param_1 + 0x12a) = 0;
  uVar1 = 0xffffffff;
  FUN_00401050(&ghidra_stack_ffffffcc,-1);
  FUN_00401050(&ghidra_stack_ffffffc8,-1);
  FUN_00401270((void *)((int)param_1 + 0x11a),uVar1,uVar2);
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_ffffffcc,0);
  FUN_00401050(&ghidra_stack_ffffffc8,0);
  FUN_00401270((undefined4 *)((int)param_1 + 0x122),uVar1,uVar2);
  param_1[0x4c] = 0;
  FUN_0041da90(param_1,1);
  *(undefined4 *)((int)param_1 + 0x16) = 2;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00401270 @ 0x00401270 */

void __thiscall FUN_00401270(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((intptr_t)this + 4) = param_1;
  *(undefined4 *)this = param_2;
  return;
}



/* Function: FUN_00401280 @ 0x00401280 */

undefined4 * __thiscall FUN_00401280(void *this,byte param_1)

{
  FUN_004012f0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004012a0 @ 0x004012a0 */

void FUN_004012a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004012d7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004012e1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004012e1 @ 0x004012e1 */

void FUN_004012e1(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_004012f0 @ 0x004012f0 */

void __fastcall FUN_004012f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00401366;
  *param_1 = &PTR_FUN_00472078;
  *unaff_FS_OFFSET = &local_10;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_0040134a();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_00401358();
  local_8 = 0xffffffff;
  FUN_00401370();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040134a @ 0x0040134a */

void FUN_0040134a(void)

{
  return;
}



/* Function: FUN_00401358 @ 0x00401358 */

void FUN_00401358(void)

{
  return;
}



/* Function: FUN_00401370 @ 0x00401370 */

void FUN_00401370(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00401592 @ 0x00401592 */

void FUN_00401592(void)

{
  return;
}



/* Function: FUN_0040159a @ 0x0040159a */

void FUN_0040159a(void)

{
  return;
}



/* Function: FUN_004015a2 @ 0x004015a2 */

void FUN_004015a2(void)

{
  return;
}



/* Function: FUN_004015b4 @ 0x004015b4 */

void FUN_004015b4(void)

{
  return;
}



/* Function: FUN_004015c0 @ 0x004015c0 */

undefined4 * __thiscall
FUN_004015c0(void *this,short param_1,short param_2,short param_3,undefined4 param_4,void *param_5)

{
    /* TODO: 45 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00401730 @ 0x00401730 */

int * __thiscall FUN_00401730(void *this,byte param_1)

{
  FUN_00401750(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00401750 @ 0x00401750 */

void __fastcall FUN_00401750(int *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004017e4;
  *param_1 = (int)&PTR_FUN_00472120;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  if ((char)param_1[0x4b] == '\0') {
    FUN_00401d20(param_1);
  }
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_004017b4();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_004017cc();
  local_8 = 0xffffffff;
  FUN_004017ee();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004017b4 @ 0x004017b4 */

void FUN_004017b4(void)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004017cc @ 0x004017cc */

void FUN_004017cc(void)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004017ee @ 0x004017ee */

void FUN_004017ee(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00401930 @ 0x00401930 */

void FUN_00401930(int param_1,short param_2,int param_3,int param_4,int param_5,char param_6,
                 char param_7)

{
    /* TODO: 133 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00401ba0 @ 0x00401ba0 */

int * __thiscall FUN_00401ba0(void *this,short param_1)

{
  *(int *)this = (int)param_1 << 8;
  return this;
}



/* Function: FUN_00401d20 @ 0x00401d20 */

void __fastcall FUN_00401d20(int *param_1)

{
  void *this;
  short sVar1;
  short sVar2;
  
  *(undefined1 *)(param_1 + 0x4b) = 1;
  if (*(undefined4 **)((int)param_1 + 0x136) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x136))();
  }
  sVar1 = 0;
  do {
    for (sVar2 = 1; (uint)(int)sVar2 <= *(uint *)((int)param_1 + sVar1 * 0x16 + 0x154);
        sVar2 = sVar2 + 1) {
      (**(void (**)(void))**(undefined4 **)
                    (**(int **)((int)param_1 + sVar1 * 0x16 + 0x14a) + -4 + sVar2 * 4))();
    }
    for (sVar2 = 1; (uint)(int)sVar2 <= *(uint *)((int)param_1 + sVar1 * 0x16 + 0x196);
        sVar2 = sVar2 + 1) {
      (**(void (**)(void))**(undefined4 **)
                    (**(int **)((int)param_1 + sVar1 * 0x16 + 0x18c) + -4 + sVar2 * 4))();
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 3);
  FUN_00402f60((int)param_1);
  FUN_0041dad0(param_1,0,'\0');
  if (*(char *)(DAT_00489ac8 + 0xc) == '\0') {
    this = *(void **)(DAT_004897c0 + 0x52);
    FUN_0042dae0(this,0,*(ushort **)((int)param_1 + 0x142),-1,-1);
    *(undefined2 *)((int)this + 0x1bc) = 1;
    *(undefined1 *)((int)this + 0x1ba) = 1;
    sVar1 = *(short *)(DAT_0048345c + 0x92);
    switch(*(undefined2 *)(DAT_0048345c + 0x96)) {
    case 1:
      sVar1 = sVar1 + 0xfa;
      break;
    case 2:
      sVar1 = sVar1 + 300;
      break;
    case 3:
      sVar1 = sVar1 + 0x15e;
      break;
    case 4:
      sVar1 = sVar1 + 400;
      break;
    case 5:
      sVar1 = sVar1 + 0x1c2;
      break;
    case 6:
      sVar1 = sVar1 + 500;
    }
    *(short *)(DAT_0048345c + 0x92) = sVar1;
  }
  FUN_0042c3f0(param_1);
  return;
}



/* Function: FUN_00401e70 @ 0x00401e70 */

void __fastcall FUN_00401e70(void *param_1)

{
    /* TODO: 41 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00401f80 @ 0x00401f80 */

int __thiscall FUN_00401f80(void *this,short param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 1;
  do {
    if (*(short *)((int)this + param_1 * 0x16 + 0x154) < sVar2) {
      return 0;
    }
    iVar1 = *(int *)(**(int **)((int)this + param_1 * 0x16 + 0x14a) + -4 + sVar2 * 4);
    if (*(char *)(iVar1 + 0x12f) == '\0') {
      if (param_2 == '\0') {
        return iVar1;
      }
      if (*(char *)(iVar1 + 0x12e) == '\0') {
        return iVar1;
      }
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



/* Function: FUN_00401fe0 @ 0x00401fe0 */

int __thiscall FUN_00401fe0(void *this,short param_1)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 1;
  while( true ) {
    if (*(short *)((int)this + param_1 * 0x16 + 0x196) < sVar2) {
      return 0;
    }
    iVar1 = *(int *)(**(int **)((int)this + param_1 * 0x16 + 0x18c) + -4 + sVar2 * 4);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x118) == '\0')) break;
    sVar2 = sVar2 + 1;
  }
  return iVar1;
}



/* Function: FUN_00402030 @ 0x00402030 */

void __fastcall FUN_00402030(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401f80(param_1,0,'\0');
  if (iVar1 == 0) {
    iVar1 = FUN_00401f80(param_1,1,'\0');
    if (iVar1 == 0) {
      iVar1 = FUN_00401f80(param_1,2,'\0');
      if (iVar1 == 0) {
        *(undefined4 *)((int)param_1 + 0x126) = 3;
      }
    }
  }
  return;
}



/* Function: FUN_00402070 @ 0x00402070 */

uint FUN_00402070(void *param_1)

{
    /* TODO: 159 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0040227d @ 0x0040227d */

void FUN_0040227d(void)

{
  return;
}



/* Function: FUN_00402499 @ 0x00402499 */

void FUN_00402499(void)

{
  return;
}



/* Function: FUN_004024a1 @ 0x004024a1 */

void FUN_004024a1(void)

{
  return;
}



/* Function: FUN_004024a9 @ 0x004024a9 */

void FUN_004024a9(void)

{
  return;
}



/* Function: FUN_004024b1 @ 0x004024b1 */

void FUN_004024b1(void)

{
  return;
}



/* Function: FUN_004024b9 @ 0x004024b9 */

void FUN_004024b9(void)

{
  return;
}



/* Function: FUN_004024cb @ 0x004024cb */

void FUN_004024cb(void)

{
  return;
}



/* Function: FUN_004024e0 @ 0x004024e0 */

void FUN_004024e0(undefined4 *param_1)

{
    /* TODO: 203 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00402a37 @ 0x00402a37 */

void FUN_00402a37(void)

{
  return;
}



/* Function: FUN_00402a3f @ 0x00402a3f */

void FUN_00402a3f(void)

{
  return;
}



/* Function: FUN_00402a47 @ 0x00402a47 */

void FUN_00402a47(void)

{
  return;
}



/* Function: FUN_00402a4f @ 0x00402a4f */

void FUN_00402a4f(void)

{
  return;
}



/* Function: FUN_00402a64 @ 0x00402a64 */

void FUN_00402a64(void)

{
  return;
}



/* Function: FUN_00402a6c @ 0x00402a6c */

void FUN_00402a6c(void)

{
  return;
}



/* Function: FUN_00402a7e @ 0x00402a7e */

void FUN_00402a7e(void)

{
  return;
}



/* Function: FUN_00402a90 @ 0x00402a90 */

int __thiscall FUN_00402a90(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xf6) + 7);
  sVar1 = *(short *)((int)this + uVar4 * 0x16 + 0x154);
  sVar3 = 1;
  if (0 < sVar1) {
    do {
      iVar2 = *(int *)(**(int **)((int)this + uVar4 * 0x16 + 0x14a) + -4 + sVar3 * 4);
      if ((*(char *)(iVar2 + 0x12e) == '\0') && (*(char *)(iVar2 + 0x12f) == '\0')) {
        return iVar2;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 <= sVar1);
  }
  return 0;
}



/* Function: FUN_00402af0 @ 0x00402af0 */

int * __thiscall FUN_00402af0(SoundPlayer *this,int *param_1,int param_2,char param_3)

{
  SoundPlayer *self_this_00 = (SoundPlayer *)this_00;

  short sVar1;
  void *this_00;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar7;
  undefined4 in_stack_ffffffc0;
  int *piVar8;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00402ced;
  *unaff_FS_OFFSET = &local_10;
  uVar7 = 0;
  FUN_00401050(&ghidra_stack_ffffffc0,0);
  local_14 = &ghidra_stack_ffffffbc;
  FUN_00401050(&ghidra_stack_ffffffbc,0);
  FUN_00401060(&local_20,uVar7,in_stack_ffffffc0);
  local_8 = 1;
  uVar2 = (ushort)*(byte *)(*(int *)(param_2 + 0xf6) + 7);
  local_18 = 0;
  uVar3 = uVar2 + 1;
  if (param_3 != '\0') {
    uVar3 = uVar2;
  }
  if (uVar3 < 3) {
    iVar5 = (int)(short)uVar3;
    sVar1 = *(short *)((int)this + iVar5 * 0x16 + 0x196);
    iVar4 = (int)*(short *)(&DAT_00472040 + iVar5 * 2) << 8;
    local_14 = &ghidra_stack_ffffffbc;
    local_18 = iVar4;
    FUN_00401ba0(&ghidra_stack_ffffffbc,*(short *)(&DAT_00472030 + iVar5 * 2));
    FUN_00401270(&local_20,uVar7,iVar4);
    local_14 = (undefined1 *)((uint)local_14 & 0xffff);
    if (0 < *(short *)(&DAT_00472050 + iVar5 * 2)) {
      do {
        sVar6 = 1;
        while( true ) {
          if (sVar1 < sVar6) {
            local_14 = &ghidra_stack_ffffffbc;
            iVar4 = local_18;
            FUN_00401ba0(&ghidra_stack_ffffffbc,*(short *)(&DAT_00472030 + iVar5 * 2));
            FUN_00401270(&local_20,uVar7,iVar4);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[1] = local_1c;
            goto LAB_00402c7b;
          }
          this_00 = *(void **)(**(int **)((int)this + iVar5 * 0x16 + 0x18c) + -4 + sVar6 * 4);
          piVar8 = &local_20;
          uVar7 = 0x402bf8;
          FUN_0041cde0(this_00,piVar8);
          if (((local_18 == local_20) && (*(short *)(&DAT_00472038 + iVar5 * 2) * 0x100 == local_1c)
              ) || ((this_00->sequence_data[52] != '\0' &&
                    (this_00->sequence_data[52] == local_18)))) break;
          sVar6 = sVar6 + 1;
        }
        FUN_00401ba0(&ghidra_stack_ffffffc0,*(short *)(&DAT_00472048 + iVar5 * 2));
        uVar7 = 0x402c47;
        FUN_00402d00(&local_18,(int)piVar8);
        sVar6 = ((unsigned short)((local_14) >> 16)) + 1;
        local_14 = (undefined1 *)CONCAT22(sVar6,(undefined2)local_14);
      } while (sVar6 < *(short *)(&DAT_00472050 + iVar5 * 2));
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = DAT_0048415c;
  local_20 = DAT_00484158;
LAB_00402c7b:
  local_8 = local_8 & 0xffffff00;
  *param_1 = local_20;
  FUN_00402cf7();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00402cf7 @ 0x00402cf7 */

void FUN_00402cf7(void)

{
  return;
}



/* Function: FUN_00402d00 @ 0x00402d00 */

int * __thiscall FUN_00402d00(void *this,int param_1)

{
  *(int *)this = *(int *)this + param_1;
  return this;
}



/* Function: FUN_00402d10 @ 0x00402d10 */

void __fastcall FUN_00402d10(void *param_1)

{
    /* TODO: 92 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00402e39 @ 0x00402e39 */

void FUN_00402e39(void)

{
  return;
}



/* Function: FUN_00402f0b @ 0x00402f0b */

void FUN_00402f0b(void)

{
  return;
}



/* Function: FUN_00402f2d @ 0x00402f2d */

void FUN_00402f2d(void)

{
  return;
}



/* Function: FUN_00402f3f @ 0x00402f3f */

void FUN_00402f3f(void)

{
  return;
}



/* Function: FUN_00402f50 @ 0x00402f50 */

void __thiscall FUN_00402f50(void *this,int param_1,int param_2)

{
  *(int *)((intptr_t)this + 4) = *(int *)((intptr_t)this + 4) + param_1;
  *(int *)this = *(int *)this + param_2;
  return;
}



/* Function: FUN_00402f60 @ 0x00402f60 */

void __fastcall FUN_00402f60(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1ca) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x1ca))();
    *(undefined4 *)(param_1 + 0x1ca) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1ce) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x1ce))();
    *(undefined4 *)(param_1 + 0x1ce) = 0;
  }
  return;
}



/* Function: FUN_00402fa0 @ 0x00402fa0 */

void __fastcall FUN_00402fa0(int param_1)

{
  char local_28 [40];
  
  if (*(int *)(param_1 + 0x1ce) != 0) {
    _itoa((int)*(short *)(param_1 + 0x130),local_28,10);
    FUN_00458860(*(void **)(param_1 + 0x1ce),local_28);
  }
  if (*(int *)(param_1 + 0x1ca) != 0) {
    _itoa((int)*(short *)(param_1 + 0x12e),local_28,10);
    FUN_00458860(*(void **)(param_1 + 0x1ca),local_28);
  }
  return;
}



/* Function: FUN_00403030 @ 0x00403030 */

undefined4 * __thiscall FUN_00403030(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)((intptr_t)this + 4) = param_2[1];
  *(undefined4 *)this = *param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((intptr_t)this + 4);
  *param_1 = *(undefined4 *)this;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}



/* Function: FUN_00403160 @ 0x00403160 */

void __thiscall FUN_00403160(void *this,undefined4 *param_1,uint param_2)

{
    /* TODO: 51 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00403230 @ 0x00403230 */

void FUN_00403230(void)

{
    /* TODO: 10 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00403290 @ 0x00403290 */

void FUN_00403290(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484168,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004032e0 @ 0x004032e0 */

void FUN_004032e0(void)

{
  return;
}



/* Function: FUN_00403300 @ 0x00403300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403300(void)

{
  _DAT_00484176 = 0;
  _DAT_00484174 = 0;
  return;
}



/* Function: FUN_00403310 @ 0x00403310 */

void FUN_00403310(void)

{
  _atexit(FUN_00403320);
  return;
}



/* Function: FUN_00403320 @ 0x00403320 */

void FUN_00403320(void)

{
  return;
}



/* Function: FUN_00403340 @ 0x00403340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403340(void)

{
  _DAT_00484172 = 0;
  _DAT_00484170 = 0;
  return;
}



/* Function: FUN_00403350 @ 0x00403350 */

void FUN_00403350(void)

{
  _atexit(FUN_00403360);
  return;
}



/* Function: FUN_00403360 @ 0x00403360 */

void FUN_00403360(void)

{
  return;
}



/* Function: FUN_00403370 @ 0x00403370 */

undefined4 * __fastcall FUN_00403370(undefined4 *param_1)

{
    /* TODO: 58 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004034e0 @ 0x004034e0 */

undefined4 * __thiscall FUN_004034e0(void *this,byte param_1)

{
  FUN_00403580(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00403500 @ 0x00403500 */

void FUN_00403500(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0040356a;
  *unaff_FS_OFFSET = &local_10;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_00403554();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0040355f();
  local_8 = 0xffffffff;
  FUN_00403574();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00403554 @ 0x00403554 */

void FUN_00403554(void)

{
  return;
}



/* Function: FUN_0040355f @ 0x0040355f */

void FUN_0040355f(void)

{
  int unaff_EBP;
  
  FUN_0043b810((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x42));
  return;
}



/* Function: FUN_00403574 @ 0x00403574 */

void FUN_00403574(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00403580 @ 0x00403580 */

void __fastcall FUN_00403580(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00403684;
  *param_1 = &PTR_FUN_004721f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_00404830(param_1,0);
  if (*(uint *)((int)param_1 + 0x6a) != 0) {
    FUN_0046f5f0(*(uint *)((int)param_1 + 0x6a));
  }
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  if (*(uint *)((int)param_1 + 0xca) != 0) {
    FUN_0046f5f0(*(uint *)((int)param_1 + 0xca));
  }
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  FUN_004036a0(param_1,(undefined4 *)0x0);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    FUN_00409330();
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    FUN_0042c3f0((int *)param_1[0x21]);
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    FUN_0042c3f0((int *)param_1[0x22]);
  }
  if (((LPCVOID)param_1[0x29] != (LPCVOID)0x0) && (*(char *)((int)param_1 + 0xa2) != '\0')) {
    FUN_0046e210((LPCVOID)param_1[0x29]);
    param_1[0x29] = 0;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_00403679();
  local_8 = 0xffffffff;
  FUN_0040368e();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00403679 @ 0x00403679 */

void FUN_00403679(void)

{
  int unaff_EBP;
  
  FUN_00404e10((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x6e));
  return;
}



/* Function: FUN_0040368e @ 0x0040368e */

void FUN_0040368e(void)

{
  FUN_00403500();
  return;
}



/* Function: FUN_004036a0 @ 0x004036a0 */

void __thiscall FUN_004036a0(void *this,undefined4 *param_1)

{
    /* TODO: 33 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00403755 @ 0x00403755 */

void FUN_00403755(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x418));
  return;
}



/* Function: FUN_00403790 @ 0x00403790 */

void __thiscall FUN_00403790(void *this,void *param_1,uint param_2)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004037e0 @ 0x004037e0 */

void __fastcall FUN_004037e0(void *param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort *puVar4;
  LPCVOID pvVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined4 *unaff_FS_OFFSET;
  int iVar11;
  int in_stack_ffffffa8;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_38 [5];
  undefined1 *local_24;
  undefined4 local_20;
  short local_1c [2];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00403a2f;
  *unaff_FS_OFFSET = &local_10;
  puVar4 = (ushort *)0x0;
  iVar8 = *(int *)((int)param_1 + 0x6a);
  if ((iVar8 != 0) && (*(int *)(iVar8 + 8) != 0)) {
    in_stack_ffffffa8 = 0x403826;
    puVar4 = FUN_004607d0(DAT_004838c0,*(int *)(iVar8 + 8),(ushort *)0x0,(ushort *)0x0,0);
  }
  if (puVar4 == (ushort *)0x0) {
    uVar15 = 0;
    uVar14 = 0x400;
    pvVar5 = (LPCVOID)FUN_00460080(DAT_004838c0,0x400);
    puVar4 = FUN_0046f060(pvVar5,uVar14,uVar15);
    sVar7 = 0;
    do {
      iVar9 = (int)sVar7;
      sVar7 = sVar7 + 1;
      iVar8 = iVar9 * 4;
      puVar1 = puVar4 + iVar9 * 2;
      *(undefined1 *)puVar1 = (&DAT_0047fcc2)[iVar8];
      *(undefined1 *)((int)puVar1 + 1) = (&DAT_0047fcc1)[iVar8];
      *(undefined1 *)(puVar1 + 1) = (&DAT_0047fcc0)[iVar8];
      *(undefined1 *)((int)puVar1 + 3) = 0;
    } while (sVar7 < 0x100);
  }
  FUN_004036a0(param_1,(undefined4 *)puVar4);
  sVar7 = *(short *)((int)param_1 + 0x7c);
  if ((sVar7 != 0) && (sVar10 = 1, 0 < sVar7)) {
    do {
      iVar8 = (int)sVar10;
      sVar10 = sVar10 + 1;
      (**(void (**)(void))(**(int **)(**(int **)((int)param_1 + 0x72) + -4 + iVar8 * 4) + 0xa0))();
    } while (sVar10 <= sVar7);
  }
  (**(void (**)(void))(*(int *)((int)param_1 + 0x42) + 0x54))();
  cVar13 = '\0';
  cVar12 = '\0';
  local_24 = &ghidra_stack_ffffffa8;
  iVar11 = 0x1e0;
  FUN_00401050(&ghidra_stack_ffffffa8,0x1e0);
  local_18 = &ghidra_stack_ffffffa4;
  iVar9 = 0x280;
  FUN_00401050(&ghidra_stack_ffffffa4,0x280);
  local_14 = &ghidra_stack_ffffffa0;
  iVar8 = 0;
  FUN_00401050(&ghidra_stack_ffffffa0,0);
  local_20 = &ghidra_stack_ffffff9c;
  FUN_00401050(&ghidra_stack_ffffff9c,0);
  FUN_0041cca0(param_1,iVar8,iVar9,iVar11,in_stack_ffffffa8,cVar12,cVar13);
  FUN_0041b150((void *)((int)param_1 + 0x42),1);
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    FUN_0043b760(local_38);
    local_8 = 2;
    local_14 = (undefined1 *)0x0;
    local_1c[1] = 0;
    local_1c[0] = 0;
    local_18 = (undefined1 *)0x28001e0;
    uVar6 = FUN_0041ace0(DAT_004838c0,**(int **)((int)param_1 + 0x6a));
    if ((char)uVar6 != '\0') {
      sVar7 = FUN_0043b970((int)local_38);
      local_20 = (undefined1 *)CONCAT22((short)((0x1e0 - sVar7) / 2),(undefined2)local_20);
      sVar7 = FUN_0043b940((int)local_38);
      local_14 = (undefined1 *)CONCAT22((short)((0x280 - sVar7) / 2),((unsigned short)((local_20) >> 16)));
      uVar2 = FUN_0043b970((int)local_38);
      uVar3 = FUN_0043b940((int)local_38);
      local_1c[1] = 0;
      local_1c[0] = 0;
      local_18 = (undefined1 *)CONCAT22(uVar3,uVar2);
      FUN_00419570(local_38,local_1c,(int *)((int)param_1 + 0x42),(short *)&local_14,1,0,0);
    }
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_00403a1f();
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    FUN_00403a27();
    local_8 = 0xffffffff;
    FUN_00403a39();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00403a1f @ 0x00403a1f */

void FUN_00403a1f(void)

{
  return;
}



/* Function: FUN_00403a27 @ 0x00403a27 */

void FUN_00403a27(void)

{
  return;
}



/* Function: FUN_00403a39 @ 0x00403a39 */

void FUN_00403a39(void)

{
  int unaff_EBP;
  
  FUN_0043b810((undefined4 *)(unaff_EBP + -0x34));
  return;
}



/* Function: FUN_00403a50 @ 0x00403a50 */

void __fastcall FUN_00403a50(void *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  FUN_004036a0(param_1,(undefined4 *)0x0);
  sVar1 = *(short *)((int)param_1 + 0x7c);
  if ((sVar1 != 0) && (sVar3 = 1, 0 < sVar1)) {
    do {
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 1;
      (**(void (**)(void))(**(int **)(**(int **)((int)param_1 + 0x72) + -4 + iVar2 * 4) + 0xa4))();
    } while (sVar3 <= sVar1);
  }
  return;
}



/* Function: FUN_00403aa0 @ 0x00403aa0 */

void FUN_00403aa0(void)

{
  return;
}



/* Function: FUN_00403ae0 @ 0x00403ae0 */

undefined4 * FUN_00403ae0(int param_1)

{
    /* TODO: 113 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00403eb9 @ 0x00403eb9 */

void FUN_00403eb9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00403f29 @ 0x00403f29 */

void FUN_00403f29(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00403f40 @ 0x00403f40 */

void __thiscall FUN_00403f40(void *this,void *param_1)

{
    /* TODO: 89 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00404120 @ 0x00404120 */

void __fastcall FUN_00404120(void *param_1)

{
    /* TODO: 183 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040450f @ 0x0040450f */

void FUN_0040450f(void)

{
  return;
}



/* Function: FUN_00404517 @ 0x00404517 */

void FUN_00404517(void)

{
  return;
}



/* Function: FUN_00404529 @ 0x00404529 */

void FUN_00404529(void)

{
  return;
}



/* Function: FUN_00404580 @ 0x00404580 */

void FUN_00404580(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484178,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004045d0 @ 0x004045d0 */

void FUN_004045d0(void)

{
  return;
}



/* Function: FUN_00404610 @ 0x00404610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404610(void)

{
  _DAT_00484186 = 0;
  _DAT_00484184 = 0;
  return;
}



/* Function: FUN_00404620 @ 0x00404620 */

void FUN_00404620(void)

{
  _atexit(FUN_00404630);
  return;
}



/* Function: FUN_00404630 @ 0x00404630 */

void FUN_00404630(void)

{
  return;
}



/* Function: FUN_004046c0 @ 0x004046c0 */

void __fastcall FUN_004046c0(int param_1)

{
    /* TODO: 55 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004047d0 @ 0x004047d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004047d0(void)

{
  _DAT_00484182 = 0;
  _DAT_00484180 = 0;
  return;
}



/* Function: FUN_004047e0 @ 0x004047e0 */

void FUN_004047e0(void)

{
  _atexit(FUN_004047f0);
  return;
}



/* Function: FUN_004047f0 @ 0x004047f0 */

void FUN_004047f0(void)

{
  return;
}



/* Function: FUN_00404830 @ 0x00404830 */

void __thiscall FUN_00404830(SoundPlayer *this,undefined4 param_1)

{
  if ((this->sequence_data[17] != 0) && (this->sequence_data[17] != '\0')) {
    this->sequence_data[17] = 0;
    FUN_0046f5f0(this->sequence_data[17]);
  }
  this->sequence_data[17] = param_1;
  return;
}



/* Function: FUN_00404870 @ 0x00404870 */

void __thiscall FUN_00404870(void *this,int param_1)

{
    /* TODO: 15 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004048d0 @ 0x004048d0 */

void __fastcall FUN_004048d0(void *param_1)

{
    /* TODO: 54 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00404a80 @ 0x00404a80 */

void __fastcall FUN_00404a80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x9e) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x96);
    FUN_00434490(*(int *)(param_1 + 0x9e));
    if ((int *)*puVar1 != (int *)0x0) {
      FUN_00433420((int *)*puVar1);
      FUN_00433270(puVar1);
    }
    puVar2 = (undefined4 *)(param_1 + 0x9a);
    if ((int *)*puVar2 != (int *)0x0) {
      FUN_00433420((int *)*puVar2);
      FUN_00433270(puVar2);
    }
    *(undefined2 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9e) = 0;
    *(undefined2 *)(param_1 + 0x92) = 0;
    *puVar1 = 0;
    *puVar2 = 0;
  }
  return;
}



/* Function: FUN_00404b00 @ 0x00404b00 */

void __fastcall FUN_00404b00(int param_1)

{
    /* TODO: 71 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00404d00 @ 0x00404d00 */

undefined2 __thiscall FUN_00404d00(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *(int **)((intptr_t)this + 0x88) = param_1;
  FUN_0042c0e0(param_1);
  (**(void (**)(void))(*param_1 + 0x9c))();
  FUN_0042bf70(param_1);
  do {
    uVar1 = FUN_0041b9c0(DAT_004897c0,(int)param_1);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0041b9c0(this,(int)param_1);
      if ((char)uVar1 == '\0') {
        *(undefined4 *)((intptr_t)this + 0x88) = 0;
        return DAT_004873c0;
      }
    }
    FUN_004561a0(DAT_004896b0);
  } while( true );
}



/* Function: FUN_00404d80 @ 0x00404d80 */

void __thiscall FUN_00404d80(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(int **)((intptr_t)this + 0x84) = param_1;
    FUN_0042c0e0(param_1);
    (**(void (**)(void))(*param_1 + 0x9c))();
    FUN_0042bf70(param_1);
  }
  return;
}



/* Function: FUN_00404db0 @ 0x00404db0 */

void __thiscall FUN_00404db0(void *this,int *param_1)

{
  if (*(int **)((intptr_t)this + 0x84) != (int *)0x0) {
    FUN_0042c3f0(*(int **)((intptr_t)this + 0x84));
    *(undefined4 *)((intptr_t)this + 0x84) = 0;
  }
  if (param_1 != (int *)0x0) {
    FUN_00404d80(this,param_1);
  }
  return;
}



/* Function: FUN_00404de0 @ 0x00404de0 */

void __fastcall FUN_00404de0(int param_1)

{
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



/* Function: FUN_00404e10 @ 0x00404e10 */

void __fastcall FUN_00404e10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004721e8;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00404e90 @ 0x00404e90 */

void FUN_00404e90(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484188,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00404ee0 @ 0x00404ee0 */

void FUN_00404ee0(void)

{
  return;
}



/* Function: FUN_00404f00 @ 0x00404f00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f00(void)

{
  _DAT_00484196 = 0;
  _DAT_00484194 = 0;
  return;
}



/* Function: FUN_00404f10 @ 0x00404f10 */

void FUN_00404f10(void)

{
  _atexit(FUN_00404f20);
  return;
}



/* Function: FUN_00404f20 @ 0x00404f20 */

void FUN_00404f20(void)

{
  return;
}



/* Function: FUN_00404f40 @ 0x00404f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f40(void)

{
  _DAT_00484192 = 0;
  _DAT_00484190 = 0;
  return;
}



/* Function: FUN_00404f50 @ 0x00404f50 */

void FUN_00404f50(void)

{
  _atexit(FUN_00404f60);
  return;
}



/* Function: FUN_00404f60 @ 0x00404f60 */

void FUN_00404f60(void)

{
  return;
}



/* Function: FUN_00404f80 @ 0x00404f80 */

void FUN_00404f80(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484198,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00404fc0 @ 0x00404fc0 */

void FUN_00404fc0(void)

{
  _atexit(FUN_00404fd0);
  return;
}



/* Function: FUN_00404fd0 @ 0x00404fd0 */

void FUN_00404fd0(void)

{
  return;
}



/* Function: FUN_00404ff0 @ 0x00404ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ff0(void)

{
  _DAT_004841a6 = 0;
  _DAT_004841a4 = 0;
  return;
}



/* Function: FUN_00405000 @ 0x00405000 */

void FUN_00405000(void)

{
  _atexit(FUN_00405010);
  return;
}



/* Function: FUN_00405010 @ 0x00405010 */

void FUN_00405010(void)

{
  return;
}



/* Function: FUN_00405030 @ 0x00405030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405030(void)

{
  _DAT_004841a2 = 0;
  _DAT_004841a0 = 0;
  return;
}



/* Function: FUN_00405040 @ 0x00405040 */

void FUN_00405040(void)

{
  _atexit(FUN_00405050);
  return;
}



/* Function: FUN_00405050 @ 0x00405050 */

void FUN_00405050(void)

{
  return;
}



/* Function: FUN_00405060 @ 0x00405060 */

void FUN_00405060(void)

{
  int iVar1;
  void *this;
  
  if ((DAT_004897c0 != (void *)0x0) && (DAT_0047e7a8 != '\0')) {
    *(undefined4 *)((int)DAT_004897c0 + 0x44) = 0;
    if ((*(int *)((int)DAT_004897c0 + 0x4a) != 0) &&
       (((iVar1 = *(int *)(*(int *)((int)DAT_004897c0 + 0x4a) + 0x1a), iVar1 != 0 &&
         (*(int *)(iVar1 + 0xe) != 0)) && (*(int *)**(undefined4 **)(iVar1 + 4) != 0)))) {
      this = (void *)FUN_0041c0f0(*(int *)**(undefined4 **)(iVar1 + 4));
      FUN_0041da90(this,1);
      *(undefined1 *)((int)this + 0x108) = 0;
      *(void **)((int)DAT_004897c0 + 0x44) = this;
      FUN_00434090(DAT_004897c0,*(undefined4 *)((int)DAT_004897c0 + 0x44));
    }
  }
  return;
}



/* Function: FUN_004050d0 @ 0x004050d0 */

undefined4 __cdecl FUN_004050d0(int param_1)

{
    /* TODO: 41 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00405187 @ 0x00405187 */

void FUN_00405187(void)

{
  int unaff_EBP;
  
  FUN_004097c0((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00405190 @ 0x00405190 */

void __cdecl FUN_00405190(int param_1,undefined4 param_2,int param_3)

{
    /* TODO: 66 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004052b0 @ 0x004052b0 */

undefined4 * __fastcall FUN_004052b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405406;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041b6c0(param_1);
  local_8 = 0;
  uVar2 = 0x4052e7;
  FUN_00465a60((undefined4 *)((int)param_1 + 0xca));
  *(undefined4 *)((int)param_1 + 0xea) = 0;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  local_8 = CONCAT31((unsigned int)((uint)local_8 >> 8),2);
  *(undefined2 *)(param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_00472420;
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  *(undefined4 *)((int)param_1 + 0xf2) = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = 0;
  *(undefined2 *)((int)param_1 + 0x112) = 0;
  *(undefined1 *)((int)param_1 + 0x102) = 0;
  *(undefined4 *)((int)param_1 + 0xf6) = 0;
  *(undefined1 *)((int)param_1 + 0x10a) = 0;
  *(undefined1 *)((int)param_1 + 0x109) = 0;
  *(undefined1 *)((int)param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 199) = 0;
  uVar1 = 1;
  *(undefined1 *)((int)param_1 + 0x10b) = 1;
  *(undefined2 *)((int)param_1 + 0x10e) = 0xffff;
  FUN_00401050(&ghidra_stack_ffffffd8,1);
  FUN_00401050(&ghidra_stack_ffffffd4,1);
  FUN_00401270((void *)((int)param_1 + 0xea),uVar1,uVar2);
  *(uint *)((int)param_1 + 0x12) = *(uint *)((int)param_1 + 0x12) | 0x1000;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0xc9) = 0;
  param_1[0x41] = 1;
  FUN_0041da90(param_1,1);
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00405420 @ 0x00405420 */

void __fastcall FUN_00405420(undefined4 *param_1)

{
    /* TODO: 52 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0040553e @ 0x0040553e */

void FUN_0040553e(void)

{
  return;
}



/* Function: FUN_0040554c @ 0x0040554c */

void FUN_0040554c(void)

{
  int unaff_EBP;
  
  FUN_00465af0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xca));
  return;
}



/* Function: FUN_00405564 @ 0x00405564 */

void FUN_00405564(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00405570 @ 0x00405570 */

void __fastcall FUN_00405570(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  FUN_00409580(param_1,'\x01');
  *(undefined2 *)((int)param_1 + 0x10e) = 0xffff;
  FUN_0041d780(param_1,(void *)0x0);
  if (*(void **)((int)param_1 + 0x3a) != (void *)0x0) {
    FUN_0041bd00(*(void **)((int)param_1 + 0x3a),(int)param_1);
  }
  if (*(int *)((int)param_1 + 0x36) != 0) {
    uVar4 = *(int *)(*(int *)((int)param_1 + 0x36) + 0xe) * 4;
    while (3 < uVar4) {
      uVar4 = uVar4 - 4;
      puVar1 = *(undefined4 **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + uVar4);
      FUN_0041bd00(param_1,(int)puVar1);
      (**(void (**)(void))*puVar1)();
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x36) + 0xe) = 0;
  }
  FUN_004068f0(param_1);
  sVar3 = 0;
  do {
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 1;
    *(undefined4 *)((int)param_1 + iVar2 * 4 + 0x46) = 0;
    *(undefined4 *)((int)param_1 + iVar2 * 4 + 0x86) = 0;
  } while (sVar3 < 0x10);
  if (((*(char *)((int)param_1 + 0x10b) != '\0') && (DAT_004897c0 != 0)) &&
     (*(int **)(DAT_004897c0 + 0x44) == param_1)) {
    FUN_00405060();
  }
  FUN_0041e260(param_1);
  return;
}



/* Function: FUN_00405630 @ 0x00405630 */

void __thiscall FUN_00405630(SoundPlayer *this,char param_1)

{
  this->sequence_data[31] = param_1;
  if (param_1 != '\0') {
    this->sequence_data[32] = 0x21;
    this->sequence_data[32] = 0x22;
    return;
  }
  this->sequence_data[32] = 0;
  this->sequence_data[32] = 0;
  return;
}



/* Function: FUN_00405660 @ 0x00405660 */

int * __thiscall FUN_00405660(UIWidget *this,short *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((((param_1[1] < this->rect_left) || (this->rect_right <= param_1[1]))
      || (*param_1 < this->rect_top)) || (this->rect_bottom <= *param_1)) {
    return (int *)0x0;
  }
  if (((this->child_list_1 != 0) &&
      (iVar3 = *(int *)(this->child_list_1 + 0xe), iVar3 != 0)) && (uVar2 = 1, iVar3 != 0))
  {
    iVar3 = 4;
    do {
      piVar1 = FUN_0041c2f0(*(void **)(**(int **)(this->child_list_1 + 4) + -4 + iVar3),
                            param_1);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(this->child_list_1 + 0xe));
  }
  if ((this->cell_count != 0) && (this->cell_info_ptr != 0)) {
    uVar2 = FUN_0041a9a0((void *)&this->scroll_data,(short *)&this->rect_top,param_1,
                         this->mirror_flag);
    return (int *)(((char)uVar2 == '\0') - 1 & (uint)this);
  }
  return (int *)0x0;
}



/* Function: FUN_00405730 @ 0x00405730 */

void __fastcall FUN_00405730(void *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 *unaff_FS_OFFSET;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00405885;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = *(int *)((int)param_1 +
                  *(short *)(*(int *)((int)param_1 + 0xf6) + 8 +
                            *(short *)((int)param_1 + 0x10e) * 2) * 4 + 0x82);
  *(int *)((int)param_1 + 0xfa) = iVar2;
  if (iVar2 != 0) {
    if (*(short *)(iVar2 + 4) < *(short *)((int)param_1 + 0x110)) {
      *(short *)((int)param_1 + 0x110) = *(short *)(iVar2 + 4);
    }
    if ((*(short *)((int)param_1 + 0x110) != 0) && (iVar2 != 0)) {
      iVar1 = *(int *)(iVar2 + 8 + (short)(*(short *)((int)param_1 + 0x110) + -1) * 4);
      psVar3 = (short *)(iVar2 + iVar1);
      if (iVar1 == 0) {
        psVar3 = (short *)0x0;
      }
      FUN_00465c20((int *)((int)param_1 + 0xca),iVar2);
      *(undefined2 *)((int)param_1 + 0xe8) = *(undefined2 *)((int)param_1 + 0x110);
      (**(void (**)(void))(*(int *)((int)param_1 + 0xca) + 0x80))();
      if (psVar3 != (short *)0x0) {
        local_20 = 0;
        local_24 = 0;
        local_8 = 0;
        iVar2 = (int)*psVar3 * *(int *)((int)param_1 + 0xee) * 0x100;
        local_18 = (iVar2 >> 8) - (iVar2 >> 0x1f) >> 1;
        iVar2 = (int)psVar3[1] * *(int *)((int)param_1 + 0xea) * 0x100;
        local_14 = (iVar2 >> 8) - (iVar2 >> 0x1f) >> 1;
        FUN_0041cde0(param_1,&local_24);
        local_1c = local_24 + local_14;
        local_14 = local_24 - local_14;
        *(int *)((int)param_1 + 0x32) = local_18 + local_20;
        *(int *)((int)param_1 + 0x26) = local_14;
        *(int *)((int)param_1 + 0x2a) = local_20 - local_18;
        *(int *)((int)param_1 + 0x2e) = local_1c;
        FUN_0041d490((int)param_1);
        local_8 = 0xffffffff;
        FUN_0040588f();
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040588f @ 0x0040588f */

void FUN_0040588f(void)

{
  return;
}



/* Function: FUN_004058a0 @ 0x004058a0 */

undefined4 __fastcall FUN_004058a0(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_1 + 0xf2);
  if (puVar1 == (undefined2 *)0x0) {
    return 0;
  }
  return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
}



/* Function: FUN_004058c0 @ 0x004058c0 */

void __thiscall FUN_004058c0(GameWidget *this,short param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_1 != 0) || (this->cell_count != 0)) {
    iVar4 = 0;
    iVar3 = 0;
    local_10 = 0;
    local_8 = 0;
    if (this->cell_count != 0) {
      FUN_0041cb20(this);
    }
    if (this->cell_count != 0) {
      iVar1 = (intptr_t)this->cell_count;
      iVar3 = this->tile_data_ptr;
      iVar2 = iVar3 + iVar1 * 0xe;
      iVar4 = *(short *)(iVar3 + -2 + iVar1 * 0xe) * -0x100;
      iVar3 = *(short *)(iVar3 + -4 + iVar1 * 0xe) * -0x100;
      local_10 = *(short *)(iVar2 + -6) * -0x100;
      local_8 = *(short *)(iVar2 + -8) * -0x100;
    }
    if (param_1 != 0) {
      if (param_1 < 0) {
        param_1 = 1;
      }
      else if (*this->tile_data_ptr < param_1) {
        param_1 = *this->tile_data_ptr;
      }
    }
    this->cell_count = param_1;
    if (param_1 != 0) {
      FUN_00405730(this);
      iVar2 = this->cell_count * 0xe + this->tile_data_ptr;
      iVar4 = iVar4 + *(short *)(iVar2 + -2) * 0x100;
      iVar3 = iVar3 + *(short *)(iVar2 + -4) * 0x100;
      local_10 = local_10 + *(short *)(iVar2 + -6) * 0x100;
      local_8 = local_8 + *(short *)(iVar2 + -8) * 0x100;
    }
    iVar2 = this->origin_x;
    local_10 = local_10 * this->origin_y >> 8;
    local_c = iVar4 * this->origin_y >> 8;
    iVar4 = local_8 * iVar2 >> 8;
    if (this->mirror_flag != '\0') {
      local_10 = -local_10;
      local_c = -local_c;
    }
    this->pos_y = this->pos_y + local_10;
    this->pos_h = this->pos_h + local_10;
    this->pos_x = this->pos_x + iVar4;
    this->pos_w = this->pos_w + iVar4;
    FUN_0041d490((intptr_t)this);
    FUN_0041c200(this,local_c,iVar3 * iVar2 >> 8,0);
    if (param_1 != 0) {
      FUN_0041cb20(this);
    }
  }
  return;
}



/* Function: FUN_00405a80 @ 0x00405a80 */

void FUN_00405a80(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004841e8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00405ad0 @ 0x00405ad0 */

void FUN_00405ad0(void)

{
  return;
}



/* Function: FUN_00405ae0 @ 0x00405ae0 */

void __cdecl FUN_00405ae0(int *param_1,short param_2,char param_3)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  sVar2 = 0;
  do {
    if ((*(uint *)((int)param_1 + 0x12) >> 4 & 1) == 0) {
LAB_00405bd3:
      if (((*(int *)((int)param_1 + 0x36) != 0) &&
          (iVar5 = *(int *)(*(int *)((int)param_1 + 0x36) + 0xe), iVar5 != 0)) &&
         (uVar4 = 1, iVar5 != 0)) {
        iVar5 = 4;
        do {
          piVar1 = *(int **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + -4 + iVar5);
          if (*(char *)((int)piVar1 + 10) == '\0') {
            FUN_00405ae0(piVar1,param_2,'\0');
          }
          iVar5 = iVar5 + 4;
          uVar4 = uVar4 + 1;
        } while (uVar4 <= *(uint *)(*(int *)((int)param_1 + 0x36) + 0xe));
      }
      return;
    }
    sVar3 = 0;
    while( true ) {
      if (**(short **)((int)param_1 + 0xf2) <= sVar3) break;
      sVar2 = sVar2 + (*(short **)((int)param_1 + 0xf2))[sVar3 * 7 + 7];
      if (param_2 < sVar2) {
        sVar3 = sVar3 + 1;
        goto LAB_00405bc2;
      }
      sVar3 = sVar3 + 1;
    }
    if ((char)param_1[0x45] != '\0') {
      (**(void (**)(void))*param_1)();
      return;
    }
    if (*(char *)((int)param_1 + 0x115) != '\0') {
      FUN_0041dad0(param_1,0,'\0');
      FUN_0041da90(param_1,0);
      (**(void (**)(void))(*param_1 + 0x98))();
      goto LAB_00405bd3;
    }
    if (*(char *)((int)param_1 + 0x116) != '\0') {
      sVar3 = **(short **)((int)param_1 + 0xf2);
      *(undefined1 *)((int)param_1 + 0x117) = 1;
      FUN_0041da90(param_1,0);
      (**(void (**)(void))(*param_1 + 0x98))();
LAB_00405bc2:
      if ((short)param_1[0x44] != sVar3) {
        FUN_004058c0(param_1,sVar3);
      }
      goto LAB_00405bd3;
    }
    if (param_3 != '\0') {
      FUN_00405d30(param_1,*(short *)((int)param_1 + 0x112));
      return;
    }
  } while( true );
}



/* Function: FUN_00405c40 @ 0x00405c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c40(void)

{
  _DAT_004841f6 = 0;
  _DAT_004841f4 = 0;
  return;
}



/* Function: FUN_00405c50 @ 0x00405c50 */

void FUN_00405c50(void)

{
  _atexit(FUN_00405c60);
  return;
}



/* Function: FUN_00405c60 @ 0x00405c60 */

void FUN_00405c60(void)

{
  return;
}



/* Function: FUN_00405c80 @ 0x00405c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c80(void)

{
  _DAT_004841f2 = 0;
  _DAT_004841f0 = 0;
  return;
}



/* Function: FUN_00405c90 @ 0x00405c90 */

void FUN_00405c90(void)

{
  _atexit(FUN_00405ca0);
  return;
}



/* Function: FUN_00405ca0 @ 0x00405ca0 */

void FUN_00405ca0(void)

{
  return;
}



/* Function: FUN_00405cb0 @ 0x00405cb0 */

void __fastcall FUN_00405cb0(int *param_1)

{
  DWORD DVar1;
  short sVar2;
  
  if ((*(int *)((int)param_1 + 0x3a) == 0) && (*(int *)((int)param_1 + 0xf6) != 0)) {
    DVar1 = GetTickCount();
    if (*(int *)((int)param_1 + 0xfe) == 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      sVar2 = 1;
    }
    else {
      sVar2 = (short)((ulonglong)(DAT_004890a4 * DVar1) / 1000) -
              (short)((ulonglong)(uint)(DAT_004890a4 * *(int *)((int)param_1 + 0xfe)) / 1000);
    }
    FUN_00405ae0(param_1,sVar2,'\x01');
  }
  return;
}



/* Function: FUN_00405d30 @ 0x00405d30 */

void __thiscall FUN_00405d30(UIWidget *this,short param_1)

{
  UIWidget *self_this_00 = (UIWidget *)this_00;

  short *psVar1;
  short sVar2;
  void *this_00;
  DWORD DVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  
  FUN_00460a80(DAT_004838c0,0x74727073);
  this->anim_flag_3 = 0;
  this->current_frame = param_1;
  psVar1 = (short *)(this->level_data_ptr + 8 + param_1 * 2);
  sVar2 = *psVar1;
  if (sVar2 < 1) {
    sVar4 = 1;
  }
  else {
    sVar4 = *(short *)(this->level_data_ptr + 0x18);
    if (sVar2 <= sVar4) goto LAB_00405d84;
  }
  *psVar1 = sVar4;
  sVar2 = sVar4;
LAB_00405d84:
  FUN_004058c0(this,0);
  FUN_00406980(this,sVar2);
  this->tile_data_ptr = *(undefined4 *)((intptr_t)this + sVar2 * 4 + 0x42);
  this->cell_info_ptr = *(undefined4 *)((intptr_t)this + sVar2 * 4 + 0x82);
  FUN_004058c0(this,1);
  if ((this->child_list_2 != 0) &&
     (uVar5 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    iVar6 = 4;
    do {
      this_00 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar6);
      if (this_00->is_visible == '\0') {
        FUN_00405d30(this_00,param_1);
      }
      iVar6 = iVar6 + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(this->child_list_2 + 0xe));
  }
  DVar3 = GetTickCount();
  this->timestamp = DVar3;
  return;
}



/* Function: FUN_00405e10 @ 0x00405e10 */

undefined1 __thiscall FUN_00405e10(void *this,short param_1,char param_2)

{
    /* TODO: 105 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004060c0 @ 0x004060c0 */

void __thiscall FUN_004060c0(void *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00406117;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00406130(this,param_2,param_1,param_3,param_4);
  local_8 = 0xffffffff;
  FUN_0040610f();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0040610f @ 0x0040610f */

void FUN_0040610f(void)

{
  return;
}



/* Function: FUN_00406130 @ 0x00406130 */

void __thiscall FUN_00406130(void *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
    /* TODO: 101 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004063a8 @ 0x004063a8 */

void FUN_004063a8(void)

{
  return;
}



/* Function: FUN_004063b0 @ 0x004063b0 */

void FUN_004063b0(void)

{
  return;
}



/* Function: FUN_004063b8 @ 0x004063b8 */

void FUN_004063b8(void)

{
  return;
}



/* Function: FUN_004063c0 @ 0x004063c0 */

void FUN_004063c0(void)

{
  return;
}



/* Function: FUN_004063c8 @ 0x004063c8 */

void FUN_004063c8(void)

{
  return;
}



/* Function: FUN_004063d0 @ 0x004063d0 */

void FUN_004063d0(void)

{
  return;
}



/* Function: FUN_004063d8 @ 0x004063d8 */

void FUN_004063d8(void)

{
  return;
}



/* Function: FUN_004063e0 @ 0x004063e0 */

void FUN_004063e0(void)

{
  return;
}



/* Function: FUN_004063f2 @ 0x004063f2 */

void FUN_004063f2(void)

{
  return;
}



/* Function: FUN_00406400 @ 0x00406400 */

void __cdecl FUN_00406400(int *param_1,int param_2,int param_3)

{
  *param_1 = param_3 * param_2 >> 8;
  return;
}



/* Function: FUN_00406420 @ 0x00406420 */

void __fastcall FUN_00406420(int param_1)

{
    /* TODO: 135 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004066fc @ 0x004066fc */

void FUN_004066fc(void)

{
  return;
}



/* Function: FUN_00406704 @ 0x00406704 */

void FUN_00406704(void)

{
  return;
}



/* Function: FUN_00406716 @ 0x00406716 */

void FUN_00406716(void)

{
  return;
}



/* Function: FUN_00406720 @ 0x00406720 */

void __thiscall FUN_00406720(UIWidget *this,short param_1)

{
  uint uVar1;
  
  if ((param_1 == 0) || (this->active_anim_id == param_1)) {
    this->anim_flag_0 = 0;
    this->anim_flag_2 = 0;
    this->anim_flag_1 = 0;
    this->anim_flag_3 = 0;
    FUN_00405d30(this,this->current_frame);
  }
  else {
    this->current_frame = 0xffff;
    uVar1 = this->flags >> 4;
    if ((uVar1 & 1) != 0) {
      FUN_0041da90(this,0);
    }
    FUN_004058c0(this,0);
    FUN_004068f0(this);
    this->active_anim_id = param_1;
    FUN_004067f0(this);
    this->anim_flag_0 = 0;
    this->anim_flag_2 = 0;
    this->anim_flag_1 = 0;
    this->anim_flag_3 = 0;
    FUN_00405d30(this,this->pending_frame);
    if ((uVar1 & 1) != 0) {
      FUN_0041da90(this,1);
      return;
    }
  }
  return;
}



/* Function: FUN_004067f0 @ 0x004067f0 */

void * __fastcall FUN_004067f0(void *param_1)

{
    /* TODO: 3 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004068f0 @ 0x004068f0 */

void __fastcall FUN_004068f0(void *param_1)

{
    /* TODO: 23 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00406980 @ 0x00406980 */

void __thiscall FUN_00406980(void *this,short param_1)

{
    /* TODO: 67 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00406b20 @ 0x00406b20 */

void __thiscall FUN_00406b20(SoundPlayer *this,short param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((this->sequence_data[49] == -1) ||
     (*(short *)(this->sequence_data[43] + 8 + this->sequence_data[49] * 2) != param_1)) {
    iVar3 = (int)param_1;
    uVar1 = *(uint *)((intptr_t)this + iVar3 * 4 + 0x42);
    if (uVar1 != 0) {
      if (*(char *)((intptr_t)this + 0x42) == '\0') {
        piVar2 = this->sequence_data[43];
        if ((*piVar2 == 0) || (*(char *)(*piVar2 + 6) == '\0')) {
          FUN_0046b490(DAT_004838c0,*(undefined4 *)((int)piVar2 + iVar3 * 8 + 0x12),uVar1);
        }
        else {
          FUN_0046b4e0(DAT_004838c0,*(uint *)((int)piVar2 + iVar3 * 8 + 0x12),uVar1);
        }
      }
      *(undefined4 *)((intptr_t)this + iVar3 * 4 + 0x42) = 0;
    }
    uVar1 = *(uint *)((intptr_t)this + iVar3 * 4 + 0x82);
    if (uVar1 != 0) {
      if (*(char *)((intptr_t)this + 0x42) == '\0') {
        piVar2 = this->sequence_data[43];
        if (((*piVar2 == 0) || (*(char *)(*piVar2 + 6) == '\0')) &&
           (this->sequence_data[31] != '\0')) {
          FUN_0046b620(DAT_004838c0,*(undefined4 *)((int)piVar2 + iVar3 * 8 + 0x12),uVar1);
        }
        else {
          FUN_0046b680(DAT_004838c0,*(uint *)((int)piVar2 + iVar3 * 8 + 0x12),uVar1);
        }
      }
      else {
        FUN_0046f5f0(uVar1);
      }
      *(undefined4 *)((intptr_t)this + iVar3 * 4 + 0x82) = 0;
      if (this->sequence_data[39] == uVar1) {
        FUN_00465c20((void *)&this->sequence_data[32],0);
      }
    }
  }
  return;
}



/* Function: FUN_00406ca0 @ 0x00406ca0 */

void __thiscall FUN_00406ca0(GameWidget *this,char param_1,char param_2)

{
  char cVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  undefined1 local_5;
  
  local_5 = (byte)(this->flags >> 4) & 1;
  FUN_0041da90(this,0);
  cVar1 = *(char *)(this->level_data_ptr + 5);
  if ((cVar1 != '\0') && (cVar1 != param_1)) {
    *(char *)(this->level_data_ptr + 5) = param_1;
    FUN_00406db0(this);
    FUN_0041cad0(this);
  }
  if (((this->child_list_2 != 0) &&
      (iVar2 = *(int *)(this->child_list_2 + 0xe), iVar2 != 0)) && (uVar3 = 1, iVar2 != 0))
  {
    iVar2 = 4;
    do {
      this_00 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar2);
      FUN_00406d60(this_00,param_1);
      if (param_2 != '\0') {
        FUN_00406ca0(this_00,param_1,'\x01');
      }
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 <= *(uint *)(this->child_list_2 + 0xe));
  }
  if (this->parent_ptr == 0) {
    FUN_00406d60(this,param_1);
  }
  FUN_0041da90(this,local_5);
  return;
}



/* Function: FUN_00406d60 @ 0x00406d60 */

void __thiscall FUN_00406d60(GameWidget *this,char param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = this->flags;
  FUN_0041da90(this,0);
  cVar1 = *(char *)(this->level_data_ptr + 6);
  if ((cVar1 != '\0') && (param_1 != cVar1)) {
    *(char *)(this->level_data_ptr + 6) = param_1;
    FUN_00406db0(this);
    FUN_0041cad0(this);
  }
  FUN_0041da90(this,(byte)(uVar2 >> 4) & 1);
  return;
}



/* Function: FUN_00406db0 @ 0x00406db0 */

void __fastcall FUN_00406db0(void *param_1)

{
    /* TODO: 78 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00406fc0 @ 0x00406fc0 */

undefined1 __cdecl FUN_00406fc0(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    sVar4 = *(short *)(param_2 + 0x22);
    if (*(short *)(param_1 + 0x22) <= *(short *)(param_2 + 0x22)) {
      sVar4 = *(short *)(param_1 + 0x22);
    }
    sVar3 = *(short *)(param_2 + 0x1e);
    sVar1 = *(short *)(param_1 + 0x1e);
    if (sVar3 <= sVar1) {
      sVar3 = sVar1;
    }
    if (sVar3 <= sVar4) {
      sVar4 = *(short *)(param_2 + 0x24);
      if (*(short *)(param_1 + 0x24) <= *(short *)(param_2 + 0x24)) {
        sVar4 = *(short *)(param_1 + 0x24);
      }
      sVar3 = *(short *)(param_2 + 0x20);
      if (*(short *)(param_2 + 0x20) <= *(short *)(param_1 + 0x20)) {
        sVar3 = *(short *)(param_1 + 0x20);
      }
      if (((sVar3 <= sVar4) && (*(char *)(param_1 + 10) == '\0')) &&
         (*(char *)(param_2 + 10) == '\0')) {
        uVar2 = FUN_0041a150((void *)(param_1 + 0xca),(short *)(param_1 + 0x1e),
                             *(char *)(param_1 + 0x102),(int *)(param_2 + 0xca),
                             (short *)(param_2 + 0x1e),*(char *)(param_2 + 0x102));
        return uVar2;
      }
    }
  }
  return 0;
}



/* Function: FUN_00407070 @ 0x00407070 */

int __fastcall FUN_00407070(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  sVar3 = FUN_0041e020(param_1);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x1a);
  if ((iVar4 != 0) && (uVar5 = (int)sVar3 + 1, uVar5 <= *(uint *)(iVar4 + 0xe))) {
    iVar4 = uVar5 * 4;
    do {
      iVar1 = *(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0x1a) + 4) + -4 + iVar4);
      if (*(char *)(iVar1 + 0x10) != '\0') {
        cVar2 = FUN_00406fc0(param_1,iVar1);
        if (cVar2 != '\0') {
          return iVar1;
        }
      }
      iVar4 = iVar4 + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1a) + 0xe));
  }
  return 0;
}



/* Function: FUN_004070e0 @ 0x004070e0 */

void __thiscall FUN_004070e0(GameWidget *this,char param_1,short param_2)

{
  GameWidget *self_this_00 = (GameWidget *)this_00;

  short sVar1;
  short sVar2;
  void *this_00;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int in_stack_ffffffdc;
  char cVar6;
  uint local_8;
  
  if (this->mirror_flag != param_1) {
    this->mirror_flag = param_1;
    if ((this->child_list_2 != 0) &&
       (iVar3 = *(int *)(this->child_list_2 + 0xe), iVar3 != 0)) {
      local_8 = 1;
      sVar1 = this->rect_right;
      sVar2 = this->rect_left;
      if (iVar3 != 0) {
        iVar3 = 4;
        do {
          this_00 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar3);
          bVar4 = this_00->mirror_flag == '\0';
          iVar3 = iVar3 + 4;
          in_stack_ffffffdc = CONCAT31((unsigned int)((uint)this->child_list_2 >> 8),bVar4);
          FUN_004070e0(this_00,bVar4,
                       ((short)((int)sVar1 + (int)sVar2 >> 1) -
                       (short)((intptr_t)this_00->rect_right +
                               (intptr_t)this_00->rect_left >> 1)) * 2);
          local_8 = local_8 + 1;
        } while (local_8 <= *(uint *)(this->child_list_2 + 0xe));
      }
    }
    cVar6 = '\x01';
    uVar5 = 0;
    FUN_00401050(&ghidra_stack_ffffffdc,0);
    FUN_00401ba0(&ghidra_stack_ffffffd8,param_2);
    FUN_0041d3a0(this,uVar5,in_stack_ffffffdc,cVar6);
  }
  return;
}



/* Function: FUN_004071c0 @ 0x004071c0 */

void __thiscall FUN_004071c0(DialogWidget *this,int param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  short local_16;
  undefined4 local_11;
  undefined1 uStack_d;
  undefined1 *puStack_c;
  int local_8;
  
  uVar1 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00407329;
  uStack_d = (undefined1)((uint)uVar1 >> 0x18);
  *unaff_FS_OFFSET = (int)&local_11 + 1;
  local_1c = 0;
  local_20 = 0;
  local_8 = 2;
  local_11 = CONCAT31((unsigned int)uVar1,(char)(this->flags >> 4)) & 0xffffff01;
  FUN_0041da90(this,0);
  FUN_0041cde0(this,&local_20);
  uVar8 = (uint)param_3;
  iVar3 = param_2 - local_1c;
  local_16 = 1;
  iVar4 = param_1 - local_20;
  if (param_3 != 0) {
    do {
      local_1c = local_1c + iVar3 / (int)uVar8;
      local_20 = local_20 + iVar4 / (int)uVar8;
      FUN_0041d3a0(this,local_1c,local_20,'\0');
      DVar5 = GetTickCount();
      lVar2 = (longlong)DAT_004890a4;
      DVar6 = GetTickCount();
      iVar7 = (int)(((longlong)(int)DVar6 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
      while (iVar7 == (int)(((int)DVar5 * lVar2 & 0xffffffffU) / 1000)) {
        FUN_00431160(this->field_06,'\0');
        DVar6 = GetTickCount();
        iVar7 = (int)(((longlong)(int)DVar6 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
      }
      FUN_00431160(this->field_06,'\0');
      local_16 = local_16 + 1;
    } while ((int)local_16 <= (int)uVar8);
  }
  FUN_0041d3a0(this,param_2,param_1,'\0');
  FUN_0041da90(this,(byte)local_11);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_00407319();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_00407321();
  local_8 = 0xffffffff;
  FUN_00407333();
  *unaff_FS_OFFSET = CONCAT13(uStack_d,(((local_11) >> 8) & 0xFFFFFF));
  return;
}



/* Function: FUN_00407319 @ 0x00407319 */

void FUN_00407319(void)

{
  return;
}



/* Function: FUN_00407321 @ 0x00407321 */

void FUN_00407321(void)

{
  return;
}



/* Function: FUN_00407333 @ 0x00407333 */

void FUN_00407333(void)

{
  return;
}



/* Function: FUN_00407340 @ 0x00407340 */

undefined1 FUN_00407340(int param_1,char param_2,char param_3,undefined4 param_4,char param_5)

{
  undefined1 uVar1;
  ushort *puVar2;
  
  uVar1 = 0;
  puVar2 = FUN_0042c860(DAT_004838c0,param_1);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = FUN_004073a0((short *)puVar2,param_2,param_3,param_4,param_5);
    FUN_0042c8d0(DAT_004838c0,param_1,(uint)puVar2);
  }
  return uVar1;
}



/* Function: FUN_004073a0 @ 0x004073a0 */

undefined1 FUN_004073a0(short *param_1,char param_2,char param_3,undefined4 param_4,char param_5)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  DWORD DVar4;
  uint uVar5;
  ushort *puVar6;
  short sVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ushort *local_20;
  int local_1c;
  void *local_18;
  undefined1 local_12;
  char local_11;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00407617;
  *unaff_FS_OFFSET = &local_10;
  local_12 = 0;
  SVar1 = GetAsyncKeyState(2);
  SVar2 = GetAsyncKeyState(4);
  SVar3 = GetAsyncKeyState(1);
  local_28 = 0;
  local_2c = 0;
  local_8 = 0;
  local_11 = (-1 < SVar1 && -1 < SVar2) && -1 < SVar3;
  DVar4 = GetTickCount();
  local_1c = (int)(((longlong)(int)DVar4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
  if (param_3 == '\0') {
    FUN_00403030(&local_2c,&local_24,&DAT_004841e8);
    local_8 = local_8 & 0xffffff00;
    FUN_0040760f();
  }
  else {
    FUN_0041ce10(local_18,&local_2c,param_4);
  }
  local_20 = FUN_0042c5b0(param_1,&local_2c,(ushort *)0x0);
  if (local_20 != (ushort *)0x0) {
    sVar7 = 0;
    if (0 < *param_1) {
      do {
        if ((param_5 == '\0') && (sVar7 != 0)) {
          if (param_2 == '\0') {
            FUN_00431160(*(void **)((int)local_18 + 6),'\0');
          }
          else {
            DVar4 = GetTickCount();
            uVar5 = (int)(((longlong)(int)DVar4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                    local_1c;
            while (uVar5 < 5) {
              FUN_00431160(*(void **)((int)local_18 + 6),'\0');
              DVar4 = GetTickCount();
              uVar5 = (int)(((longlong)(int)DVar4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                      local_1c;
            }
            DVar4 = GetTickCount();
            local_1c = (int)(((longlong)(int)DVar4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
          }
        }
        SVar1 = GetAsyncKeyState(2);
        SVar2 = GetAsyncKeyState(4);
        SVar3 = GetAsyncKeyState(1);
        if ((SVar1 < 0 || SVar2 < 0) || SVar3 < 0) {
          if (local_11 != '\0') {
            local_12 = 1;
            if (sVar7 < *param_1) {
              do {
                puVar6 = local_20 + sVar7 * 0xd;
                FUN_0041d3a0(local_18,*(int *)(puVar6 + 2),*(int *)puVar6,'\0');
                if ((char)param_1[1] != '\0') {
                  FUN_00406130(local_18,*(int *)(puVar6 + 6),*(int *)(puVar6 + 4),0,'\x01');
                }
                sVar7 = sVar7 + 1;
              } while (sVar7 < *param_1);
            }
            break;
          }
        }
        else if (local_11 == '\0') {
          local_11 = '\x01';
        }
        puVar6 = local_20 + sVar7 * 0xd;
        FUN_0041d2d0(local_18,(int *)puVar6,'\0');
        if ((char)param_1[1] != '\0') {
          FUN_00406130(local_18,*(int *)(puVar6 + 6),*(int *)(puVar6 + 4),0,'\x01');
        }
        sVar7 = sVar7 + 1;
      } while (sVar7 < *param_1);
    }
    FUN_0046f5f0((uint)local_20);
  }
  local_8 = 0xffffffff;
  FUN_00407621();
  *unaff_FS_OFFSET = local_10;
  return local_12;
}



/* Function: FUN_0040760f @ 0x0040760f */

void FUN_0040760f(void)

{
  return;
}



/* Function: FUN_00407621 @ 0x00407621 */

void FUN_00407621(void)

{
  return;
}



/* Function: FUN_00407630 @ 0x00407630 */

undefined1 __thiscall
FUN_00407630(void *this,short param_1,ushort *param_2,ushort *param_3,ushort *param_4,
            ushort *param_5)

{
    /* TODO: 172 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00407b10 @ 0x00407b10 */

undefined1 __thiscall FUN_00407b10(void *this,short param_1,ushort *param_2)

{
    /* TODO: 96 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00407df0 @ 0x00407df0 */

undefined1 __thiscall FUN_00407df0(UIWidget *this,short param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  SHORT SVar6;
  SHORT SVar7;
  SHORT SVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  DWORD DVar12;
  undefined4 extraout_var;
  uint uVar13;
  undefined4 extraout_var_00;
  undefined1 uStack_12;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int local_8;
  int local_4;
  
  uVar1 = this->pending_frame;
  sVar2 = this->current_frame;
  uStack_12 = 0;
  SVar6 = GetAsyncKeyState(2);
  SVar7 = GetAsyncKeyState(4);
  SVar8 = GetAsyncKeyState(1);
  bVar4 = (-1 < SVar6 && -1 < SVar7) && -1 < SVar8;
  uVar3 = this->flags;
  FUN_0041da90(this,0);
  this->anim_flag_0 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_1 = 0;
  this->anim_flag_3 = 0;
  FUN_00405d30(this,param_1);
  this->pending_frame = param_1;
  uStack_c = 0;
  uStack_a = 0;
  iVar10 = FUN_0043a6b0(DAT_004838c0,param_2);
  uStack_c = (undefined2)iVar10;
  uStack_a = (undefined2)((uint)iVar10 >> 0x10);
  FUN_004090e0(iVar10);
  FUN_004564c0();
  FUN_00433050((undefined4 *)CONCAT22(uStack_a,uStack_c));
  psVar11 = FUN_00434300((int *)CONCAT22(uStack_a,uStack_c));
  FUN_00409140(psVar11);
  sVar9 = FUN_0042b700();
  FUN_0045d780(psVar11,sVar9);
  FUN_0045d720((int)psVar11,3);
  FUN_004564c0();
  DVar12 = GetTickCount();
  local_8 = (int)(((longlong)(int)DVar12 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
  local_4 = local_8 + 1000;
  bVar5 = FUN_0045d930((int)psVar11);
  sVar9 = (short)CONCAT31(extraout_var,bVar5);
  do {
    if ((sVar9 == 0) || (local_4 <= local_8)) goto LAB_00407fdc;
    uVar13 = FUN_0045d8e0((int)psVar11);
    if ((short)uVar13 < 0) goto LAB_00407fdc;
    FUN_004564c0();
    FUN_004058c0(this,(short)((int)((uint)(ushort)((short)uVar13 >> 0xf) << 0x10 | uVar13 & 0xffff)
                             % 5) + 1);
    FUN_00430860();
    DVar12 = GetTickCount();
    local_8 = (int)(((longlong)(int)DVar12 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
    SVar6 = GetAsyncKeyState(2);
    SVar7 = GetAsyncKeyState(4);
    SVar8 = GetAsyncKeyState(1);
    if ((SVar6 < 0 || SVar7 < 0) || SVar8 < 0) {
      if (bVar4) {
        uStack_12 = 1;
LAB_00407fdc:
        FUN_00434490((int)psVar11);
        FUN_00433420((int *)CONCAT22(uStack_a,uStack_c));
        FUN_00433270((undefined4 *)&uStack_c);
        this->pending_frame = uVar1;
        FUN_0041da90(this,(byte)(uVar3 >> 4) & 1);
        this->anim_flag_0 = 0;
        this->anim_flag_2 = 0;
        this->anim_flag_1 = 0;
        this->anim_flag_3 = 0;
        FUN_00405d30(this,sVar2);
        return uStack_12;
      }
    }
    else if (!bVar4) {
      bVar4 = true;
    }
    bVar5 = FUN_0045d930((int)psVar11);
    sVar9 = (short)CONCAT31(extraout_var_00,bVar5);
  } while( true );
}



/* Function: FUN_00408070 @ 0x00408070 */

void * __cdecl FUN_00408070(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  void *this;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408148;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(DAT_004897c0 + 0x52);
  if (((((*(short *)(DAT_004897c0 + 0x20) <= ((unsigned short)((param_1) >> 16))) &&
        (((unsigned short)((param_1) >> 16)) < *(short *)(DAT_004897c0 + 0x24))) &&
       (*(short *)(DAT_004897c0 + 0x1e) <= (short)param_1)) &&
      (((short)param_1 < *(short *)(DAT_004897c0 + 0x22) && (*(int *)(iVar1 + 0x1a) != 0)))) &&
     (uVar4 = 1, *(int *)(*(int *)(iVar1 + 0x1a) + 0xe) != 0)) {
    iVar3 = 4;
    do {
      this = *(void **)(**(int **)(*(int *)(iVar1 + 0x1a) + 4) + -4 + iVar3);
      if (*(void **)(DAT_004897c0 + 0x4a) != this) {
        piVar2 = FUN_0041c2f0(this,(short *)&param_1);
        if (((piVar2 != (int *)0x0) && (*(int *)((int)piVar2 + 0xf6) != 0)) &&
           (*(char *)((int)piVar2 + 10) == '\0')) {
          local_8 = 0xffffffff;
          FUN_00408152();
          goto LAB_00408126;
        }
      }
      iVar3 = iVar3 + 4;
      uVar4 = uVar4 + 1;
    } while (uVar4 <= *(uint *)(*(int *)(iVar1 + 0x1a) + 0xe));
  }
  local_8 = 0xffffffff;
  FUN_00408152();
  this = (void *)0x0;
LAB_00408126:
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00408152 @ 0x00408152 */

void FUN_00408152(void)

{
  return;
}



/* Function: FUN_00408160 @ 0x00408160 */

void __thiscall FUN_00408160(GameWidget *this,undefined1 param_1)

{
  int iVar1;
  uint uVar2;
  
  this->field_108 = param_1;
  if (((this->child_list_2 != 0) &&
      (iVar1 = *(int *)(this->child_list_2 + 0xe), iVar1 != 0)) && (uVar2 = 1, iVar1 != 0))
  {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_00408160(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + iVar1),param_1);
    } while (uVar2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_004081f0 @ 0x004081f0 */

undefined1 __thiscall FUN_004081f0(void *this,char param_1)

{
    /* TODO: 291 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00408760 @ 0x00408760 */

void FUN_00408760(void)

{
  return;
}



/* Function: FUN_00408768 @ 0x00408768 */

void FUN_00408768(void)

{
  return;
}



/* Function: FUN_004087fa @ 0x004087fa */

void FUN_004087fa(void)

{
  return;
}



/* Function: FUN_00408802 @ 0x00408802 */

void FUN_00408802(void)

{
  return;
}



/* Function: FUN_0040880a @ 0x0040880a */

void FUN_0040880a(void)

{
  return;
}



/* Function: FUN_0040881c @ 0x0040881c */

void FUN_0040881c(void)

{
  return;
}



/* Function: FUN_00408830 @ 0x00408830 */

undefined2 * __thiscall FUN_00408830(void *this,undefined2 *param_1)

{
  *(undefined2 *)((intptr_t)this + 2) = param_1[1];
  *(undefined2 *)this = *param_1;
  return this;
}



/* Function: FUN_00408850 @ 0x00408850 */

int __fastcall FUN_00408850(int param_1)

{
  return param_1 + 0x1c;
}



/* Function: FUN_00408870 @ 0x00408870 */

undefined1 __thiscall FUN_00408870(void *this,void *param_1,int param_2)

{
    /* TODO: 86 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00408a60 @ 0x00408a60 */

void FUN_00408a60(void *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  
  puVar1 = FUN_0046b8f0(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    sVar3 = 0;
    if (0 < (short)puVar1[0x12]) {
      do {
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        FUN_00408a60(param_1,*(uint *)(puVar1 + iVar2 * 2 + 0x13));
      } while (sVar3 < (short)puVar1[0x12]);
    }
    FUN_00461420(param_1,param_2,'\x01');
    FUN_0046f5f0((uint)puVar1);
  }
  return;
}



/* Function: FUN_00408ac0 @ 0x00408ac0 */

uint * __thiscall FUN_00408ac0(void *this,uint *param_1,void *param_2,byte param_3,short param_4)

{
    /* TODO: 105 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00408d29 @ 0x00408d29 */

void FUN_00408d29(void)

{
  return;
}



/* Function: FUN_00408d40 @ 0x00408d40 */

undefined2 __cdecl FUN_00408d40(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00408e93;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_2 + ((unsigned short)((param_3) >> 16)) * -0x100;
  local_18 = local_14;
  piVar1 = &local_18;
  if (local_14 < 1) {
    local_14 = -local_14;
    piVar1 = &local_14;
  }
  if (*piVar1 < 0x1000) {
    local_14 = param_1 + (short)param_3 * -0x100;
    local_18 = local_14;
    piVar1 = &local_18;
    if (local_14 < 1) {
      local_14 = -local_14;
      piVar1 = &local_14;
    }
    if (*piVar1 < 0x1000) {
      local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(1)) << 16);
    }
    else {
      local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(4)) << 16);
      if (param_1 <= (short)param_3 * 0x100) {
        local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(8)) << 16);
      }
    }
  }
  else {
    iVar2 = (int)(short)param_3;
    if (param_2 < ((unsigned short)((param_3) >> 16)) * 0x100) {
      local_14 = param_1 + iVar2 * -0x100;
      local_18 = local_14;
      piVar1 = &local_18;
      if (local_14 < 1) {
        local_14 = -local_14;
        piVar1 = &local_14;
      }
      if (*piVar1 < 0x1000) {
        local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(2)) << 16);
      }
      else {
        local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(3)) << 16);
        if (param_1 <= iVar2 * 0x100) {
          local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(9)) << 16);
        }
      }
    }
    else {
      local_14 = param_1 + iVar2 * -0x100;
      local_18 = local_14;
      piVar1 = &local_18;
      if (local_14 < 1) {
        local_14 = -local_14;
        piVar1 = &local_14;
      }
      if (*piVar1 < 0x1000) {
        local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(6)) << 16);
      }
      else {
        local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(5)) << 16);
        if (param_1 <= iVar2 * 0x100) {
          local_14 = (local_14 & ~(0xFFFF << 16)) | (((unsigned short)(7)) << 16);
        }
      }
    }
  }
  local_8 = 0;
  FUN_00408e8b();
  local_8 = 0xffffffff;
  FUN_00408e9d();
  *unaff_FS_OFFSET = local_10;
  return ((unsigned short)((local_14) >> 16));
}



/* Function: FUN_00408e8b @ 0x00408e8b */

void FUN_00408e8b(void)

{
  return;
}



/* Function: FUN_00408e9d @ 0x00408e9d */

void FUN_00408e9d(void)

{
  return;
}



/* Function: FUN_00408eb0 @ 0x00408eb0 */

void __cdecl FUN_00408eb0(void *param_1,void *param_2,char param_3)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  int *piVar5;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  undefined2 local_14;
  short local_12;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004090a8;
  *unaff_FS_OFFSET = &local_10;
  local_1c = 0;
  local_20 = 0;
  local_12 = 0;
  local_14 = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  if ((*(int *)((int)param_1 + 6) == 0) || (*(char *)((int)param_1 + 10) != '\0')) {
    local_8 = 0;
  }
  else if (param_1 == param_2) {
    local_8 = 0;
  }
  else {
    if (*(char *)(*(int *)((int)param_1 + 0xf6) + 4) == '\x02') {
      if (param_3 == '\0') {
        FUN_0041da90(param_1,1);
        *(undefined1 *)((int)param_1 + 0x114) = 0;
        *(undefined1 *)((int)param_1 + 0x116) = 0;
        *(undefined1 *)((int)param_1 + 0x115) = 0;
        *(undefined1 *)((int)param_1 + 0x117) = 0;
        FUN_00405d30(param_1,0);
      }
      else {
        if (*(short *)((int)param_1 + 0x10e) != 6) {
          *(undefined1 *)((int)param_1 + 0x114) = 0;
          *(undefined1 *)((int)param_1 + 0x116) = 0;
          *(undefined1 *)((int)param_1 + 0x115) = 0;
          *(undefined1 *)((int)param_1 + 0x117) = 0;
          FUN_00405d30(param_1,6);
        }
        FUN_0041da90(param_1,0);
        puVar2 = (undefined2 *)FUN_00430bc0(*(int *)((int)param_1 + 6));
        FUN_004096f0(&local_14,(undefined2 *)&local_18,puVar2);
        local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
        FUN_0040908f();
        piVar5 = &local_20;
        FUN_0041cde0(param_1,piVar5);
        if (*(char *)((int)param_1 + 0x102) != '\0') {
          iVar4 = (int)local_12;
          local_12 = (short)((uint)local_1c >> 8);
          local_1c = iVar4 << 8;
        }
        local_18 = &ghidra_stack_ffffffcc;
        puVar2 = &local_14;
        iVar4 = 0x40904f;
        FUN_00408830(&ghidra_stack_ffffffcc,puVar2);
        local_8 = (local_8 & ~0xFF) | ((unsigned char)(3));
        FUN_004090c0(&ghidra_stack_ffffffc4,&local_20);
        local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
        sVar1 = FUN_00408d40(iVar4,(int)puVar2,piVar5);
        FUN_004058c0(param_1,sVar1);
      }
    }
    if (((*(int *)((int)param_1 + 0x36) != 0) &&
        (iVar4 = *(int *)(*(int *)((int)param_1 + 0x36) + 0xe), iVar4 != 0)) &&
       (uVar3 = 1, iVar4 != 0)) {
      iVar4 = 4;
      do {
        iVar4 = iVar4 + 4;
        uVar3 = uVar3 + 1;
        FUN_00408eb0(*(void **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + -8 + iVar4),param_2,
                     param_3);
      } while (uVar3 <= *(uint *)(*(int *)((int)param_1 + 0x36) + 0xe));
    }
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  }
  FUN_004090a0();
  local_8 = 0xffffffff;
  FUN_004090b2();
  *unaff_FS_OFFSET = local_10;
  return;
}



