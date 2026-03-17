/*
 * game_audio.c - Audio and media
 * Address range: 0x440000 - 0x44FFFF
 * Functions: 353
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_0044033c @ 0x0044033c */

void FUN_0044033c(void)

{
  return;
}



/* Function: FUN_00440356 @ 0x00440356 */

void FUN_00440356(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x3c));
  return;
}



/* Function: FUN_00440360 @ 0x00440360 */

void __fastcall FUN_00440360(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  undefined4 uVar6;
  
  iVar3 = 0x440379;
  uVar1 = FUN_0043a6b0(DAT_004838c0,0x444000d);
  *(undefined4 *)(param_1 + 0x1d8) = uVar1;
  pvVar4 = *(void **)(DAT_004897c0 + 0x44);
  if (pvVar4 != (void *)0x0) {
    cVar5 = '\x01';
    uVar1 = 0;
    iVar2 = 0x3f400000;
    FUN_004404f0((undefined4 *)&ghidra_stack_ffffffdc);
    FUN_004404f0((undefined4 *)&ghidra_stack_ffffffd8);
    FUN_00406130(pvVar4,iVar2,iVar3,uVar1,cVar5);
    pvVar4 = *(void **)(DAT_004897c0 + 0x44);
    FUN_0041b5f0(pvVar4,0);
    uVar6 = 7;
    uVar1 = 0x1e0;
    FUN_00401ba0(&ghidra_stack_ffffffe0,0x1e0);
    FUN_00401ba0(&ghidra_stack_ffffffdc,0x280);
    FUN_0041d020(*(void **)(DAT_004897c0 + 0x44),uVar1,(int)pvVar4,uVar6);
    FUN_0041dd40(*(void **)(DAT_004897c0 + 0x44));
    *(undefined1 *)(*(int *)(DAT_004897c0 + 0x44) + 0x109) = 0;
    FUN_0043f8c0(*(int *)(DAT_004897c0 + 0x44));
  }
  if (*(void **)(param_1 + 0x150) != (void *)0x0) {
    FUN_00406ca0(*(void **)(param_1 + 0x150),'\x05','\0');
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    FUN_00406ca0(*(void **)(param_1 + 0x160),'\x05','\0');
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (iVar3 != 0) {
    if (3 < *(short *)(DAT_0048345c + 0x9e)) {
      *(undefined2 *)(iVar3 + 0x112) = 1;
      pvVar4 = *(void **)(param_1 + 0x1b8);
      *(undefined1 *)((int)pvVar4 + 0x114) = 0;
      *(undefined1 *)((int)pvVar4 + 0x116) = 0;
      *(undefined1 *)((int)pvVar4 + 0x115) = 0;
      *(undefined1 *)((int)pvVar4 + 0x117) = 0;
      FUN_00405d30(pvVar4,1);
      return;
    }
    *(undefined2 *)(iVar3 + 0x112) = 0;
    pvVar4 = *(void **)(param_1 + 0x1b8);
    *(undefined1 *)((int)pvVar4 + 0x114) = 0;
    *(undefined1 *)((int)pvVar4 + 0x116) = 0;
    *(undefined1 *)((int)pvVar4 + 0x115) = 0;
    *(undefined1 *)((int)pvVar4 + 0x117) = 0;
    FUN_00405d30(pvVar4,0);
  }
  return;
}



/* Function: FUN_004404f0 @ 0x004404f0 */

undefined4 * __fastcall FUN_004404f0(undefined4 *param_1)

{
    /* TODO: 6 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044094b @ 0x0044094b */

void FUN_0044094b(void)

{
  return;
}



/* Function: FUN_00440953 @ 0x00440953 */

void FUN_00440953(void)

{
  return;
}



/* Function: FUN_00440965 @ 0x00440965 */

void FUN_00440965(void)

{
  return;
}



/* Function: FUN_00440980 @ 0x00440980 */

void __fastcall FUN_00440980(int param_1)

{
    /* TODO: 64 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00440ca0 @ 0x00440ca0 */

void __fastcall FUN_00440ca0(void *param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  
  do {
    iVar1 = rand();
    sVar3 = (short)(iVar1 % 3);
    iVar1 = rand();
    sVar4 = (short)(iVar1 % 3);
  } while (sVar4 == sVar3);
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    switch(*(undefined2 *)(*(int *)((int)param_1 + 0x6a) + 0xc)) {
    case 1:
      FUN_0045d510(0x13d000c,'\0');
      FUN_00404870(param_1,0x10c000c);
      uVar2 = rand();
      uVar5 = (int)uVar2 >> 0x1f;
      if (((uVar2 ^ uVar5) - uVar5 & 1 ^ uVar5) == uVar5) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0x14;
        *(undefined2 *)((int)param_1 + 0x1d0) = 0xb;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0xb;
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x14;
      }
      break;
    case 2:
      FUN_0045d510(0x158000c,'\0');
      FUN_00404870(param_1,0x10d000c);
      if (sVar3 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 6;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 10;
        if (sVar3 != 2) {
          *(undefined2 *)((int)param_1 + 0x1d6) = 5;
        }
      }
      if (sVar4 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 6;
      }
      else if (sVar4 == 2) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 10;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d0) = 5;
      }
      break;
    case 3:
      FUN_0045d510(0x159000c,'\0');
      FUN_00404870(param_1,0x10e000c);
      if (sVar3 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0x1d;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0x11;
        if (sVar3 != 2) {
          *(undefined2 *)((int)param_1 + 0x1d6) = 0x10;
        }
      }
      if (sVar4 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x1d;
      }
      else if (sVar4 == 2) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x11;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x10;
      }
      break;
    case 4:
      FUN_0045d510(0x15a000c,'\0');
      FUN_00404870(param_1,0x10f000c);
      if (sVar3 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0xf;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0xc;
        if (sVar3 != 2) {
          *(undefined2 *)((int)param_1 + 0x1d6) = 0x1c;
        }
      }
      if (sVar4 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0xf;
      }
      else if (sVar4 == 2) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0xc;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x1c;
      }
      break;
    case 5:
      FUN_0045d510(0x15b000c,'\0');
      FUN_00404870(param_1,0x110000c);
      uVar2 = rand();
      uVar5 = (int)uVar2 >> 0x1f;
      if (((uVar2 ^ uVar5) - uVar5 & 1 ^ uVar5) == uVar5) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 8;
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x13;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0x13;
        *(undefined2 *)((int)param_1 + 0x1d0) = 8;
      }
      break;
    case 6:
      FUN_0045d510(0x15c000c,'\0');
      FUN_00404870(param_1,0x111000c);
      if (sVar3 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d6) = 0x1e;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d6) = 9;
        if (sVar3 != 2) {
          *(undefined2 *)((int)param_1 + 0x1d6) = 0x12;
        }
      }
      if (sVar4 == 1) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x1e;
      }
      else if (sVar4 == 2) {
        *(undefined2 *)((int)param_1 + 0x1d0) = 9;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1d0) = 0x12;
      }
      break;
    case 7:
      FUN_00404870(param_1,0x111000c);
      *(undefined2 *)((int)param_1 + 0x1d6) = 0x1e;
      *(undefined2 *)((int)param_1 + 0x1d0) = 0x12;
      break;
    case 8:
      FUN_0045d510(0x15d000c,'\0');
      FUN_00404870(param_1,0x113000c);
      *(undefined2 *)((int)param_1 + 0x1d6) = 2;
      *(undefined2 *)((int)param_1 + 0x1d0) = 3;
    }
  }
  *(undefined2 *)(DAT_0048345c + 0xe8) = *(undefined2 *)((int)param_1 + 0x1d0);
  return;
}



/* Function: FUN_004412d0 @ 0x004412d0 */

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
  return;
}



/* Function: FUN_00441320 @ 0x00441320 */

void FUN_00441320(void)

{
  if (DAT_0048065c != 0) {
    FUN_00434490(DAT_0048065c);
    DAT_0048065c = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488e58,DAT_00488e38);
  }
  return;
}



/* Function: FUN_00441370 @ 0x00441370 */

void FUN_00441370(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488ed0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004413c0 @ 0x004413c0 */

void FUN_004413c0(void)

{
  return;
}



/* Function: FUN_004413e0 @ 0x004413e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004413e0(void)

{
  _DAT_00488eee = 0;
  _DAT_00488eec = 0;
  return;
}



/* Function: FUN_004413f0 @ 0x004413f0 */

void FUN_004413f0(void)

{
  _atexit(FUN_00441400);
  return;
}



/* Function: FUN_00441400 @ 0x00441400 */

void FUN_00441400(void)

{
  return;
}



/* Function: FUN_00441420 @ 0x00441420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441420(void)

{
  _DAT_00488eea = 0;
  _DAT_00488ee8 = 0;
  return;
}



/* Function: FUN_00441430 @ 0x00441430 */

void FUN_00441430(void)

{
  _atexit(FUN_00441440);
  return;
}



/* Function: FUN_00441440 @ 0x00441440 */

void FUN_00441440(void)

{
  return;
}



/* Function: FUN_00441460 @ 0x00441460 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441460(void)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004414a0 @ 0x004414a0 */

void FUN_004414a0(void)

{
  _atexit(FUN_004414b0);
  return;
}



/* Function: FUN_004414b0 @ 0x004414b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004414b0(void)

{
  _DAT_00488ea0 = &PTR_LAB_00472e08;
  if (DAT_00488ea4 != (uint *)0x0) {
    FUN_0046d110(DAT_00488ea4);
  }
  DAT_00488ea4 = (uint *)0x0;
  _DAT_00488ea8 = 0;
  return;
}



/* Function: FUN_00441da0 @ 0x00441da0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441da0(void)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00441de0 @ 0x00441de0 */

void FUN_00441de0(void)

{
  _atexit(FUN_00441df0);
  return;
}



/* Function: FUN_00441df0 @ 0x00441df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441df0(void)

{
  _DAT_00488e80 = &PTR_LAB_004752f0;
  if (DAT_00488e84 != (uint *)0x0) {
    FUN_0046d110(DAT_00488e84);
  }
  DAT_00488e84 = (uint *)0x0;
  _DAT_00488e88 = 0;
  return;
}



/* Function: FUN_00441e30 @ 0x00441e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441e30(void)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00441e70 @ 0x00441e70 */

void FUN_00441e70(void)

{
  _atexit(FUN_00441e80);
  return;
}



/* Function: FUN_00441e80 @ 0x00441e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441e80(void)

{
  _DAT_00488eb8 = &PTR_LAB_004752f0;
  if (DAT_00488ebc != (uint *)0x0) {
    FUN_0046d110(DAT_00488ebc);
  }
  DAT_00488ebc = (uint *)0x0;
  _DAT_00488ec0 = 0;
  return;
}



/* Function: FUN_00441eb0 @ 0x00441eb0 */

void __fastcall FUN_00441eb0(int *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00441f10 @ 0x00441f10 */

void __fastcall FUN_00441f10(int *param_1)

{
  *(undefined2 *)((int)param_1 + 0x112) = 0;
  (**(void (**)(void))(*param_1 + 0xc0))();
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)((int)param_1 + 0x117) = 0;
  FUN_00405d30(param_1,0);
  *(undefined2 *)((int)param_1 + 0x112) = 0;
  DAT_00480748 = 0;
  return;
}



/* Function: FUN_00441f60 @ 0x00441f60 */

void __fastcall FUN_00441f60(void *param_1)

{
  *(undefined2 *)((int)param_1 + 0x112) = 2;
  *(undefined1 *)((int)param_1 + 0x114) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)((int)param_1 + 0x117) = 0;
  FUN_00405e10(param_1,1,'\0');
  *(undefined1 *)((int)param_1 + 0x114) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)((int)param_1 + 0x117) = 0;
  *(undefined2 *)((int)param_1 + 0x112) = 2;
  FUN_00405d30(param_1,2);
  DAT_00480748 = param_1;
  return;
}



/* Function: FUN_00442100 @ 0x00442100 */

void __thiscall FUN_00442100(void *this,int *param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00442180 @ 0x00442180 */

/* WARNING: Removing unreachable block (ram,0x004421b4) */

void __fastcall FUN_00442180(int *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004421f0 @ 0x004421f0 */

undefined4 * __fastcall FUN_004421f0(undefined4 *param_1)

{
    /* TODO: 40 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004423e5 @ 0x004423e5 */

void FUN_004423e5(void)

{
  return;
}



/* Function: FUN_004423f3 @ 0x004423f3 */

void FUN_004423f3(void)

{
  return;
}



/* Function: FUN_00442401 @ 0x00442401 */

void FUN_00442401(void)

{
  int unaff_EBP;
  
  FUN_00449450((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x118));
  return;
}



/* Function: FUN_00442419 @ 0x00442419 */

void FUN_00442419(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00442430 @ 0x00442430 */

void FUN_00442430(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004424b7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_0044248d();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_0044249b();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_004424a9();
  local_8 = 0xffffffff;
  FUN_004424c1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0044248d @ 0x0044248d */

void FUN_0044248d(void)

{
  return;
}



/* Function: FUN_0044249b @ 0x0044249b */

void FUN_0044249b(void)

{
  return;
}



/* Function: FUN_004424a9 @ 0x004424a9 */

void FUN_004424a9(void)

{
  int unaff_EBP;
  
  FUN_00449450((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x118));
  return;
}



/* Function: FUN_004424c1 @ 0x004424c1 */

void FUN_004424c1(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00442550 @ 0x00442550 */

undefined4 * __thiscall FUN_00442550(void *this,byte param_1)

{
  FUN_00442570(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00442570 @ 0x00442570 */

void __fastcall FUN_00442570(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0044263d;
  *param_1 = &PTR_FUN_004753c0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(undefined4 **)((int)param_1 + 0x152) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x152))();
    *(undefined4 *)((int)param_1 + 0x152) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x14e) = 0;
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  if (*(undefined4 **)((int)param_1 + 0x146) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x146))();
    *(undefined4 *)((int)param_1 + 0x146) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x142) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x142))();
    *(undefined4 *)((int)param_1 + 0x142) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x13e) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x13e))();
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
  }
  local_8 = 0xffffffff;
  FUN_00442647();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00442647 @ 0x00442647 */

void FUN_00442647(void)

{
  FUN_00442430();
  return;
}



/* Function: FUN_00442650 @ 0x00442650 */

void __fastcall FUN_00442650(int *param_1)

{
  if (*(undefined4 **)((int)param_1 + 0x152) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x152))();
    *(undefined4 *)((int)param_1 + 0x152) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x14a) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14a))();
    *(undefined4 *)((int)param_1 + 0x14a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x14e) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14e))();
    *(undefined4 *)((int)param_1 + 0x14e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x146) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x146))();
    *(undefined4 *)((int)param_1 + 0x146) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x142) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x142))();
    *(undefined4 *)((int)param_1 + 0x142) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x13e) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x13e))();
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
  }
  FUN_00441f10(param_1);
  return;
}



/* Function: FUN_00442d6c @ 0x00442d6c */

void FUN_00442d6c(void)

{
  return;
}



/* Function: FUN_00442ef0 @ 0x00442ef0 */

void FUN_00442ef0(void)

{
  return;
}



/* Function: FUN_00443010 @ 0x00443010 */

void __thiscall FUN_00443010(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x118) = param_1;
  return;
}



/* Function: FUN_00443079 @ 0x00443079 */

void FUN_00443079(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00443090 @ 0x00443090 */

undefined4 FUN_00443090(void)

{
  return DAT_00480660;
}



/* Function: FUN_004430f9 @ 0x004430f9 */

void FUN_004430f9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00443169 @ 0x00443169 */

void FUN_00443169(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004431d9 @ 0x004431d9 */

void FUN_004431d9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004432d7 @ 0x004432d7 */

void FUN_004432d7(void)

{
  return;
}



/* Function: FUN_004432f0 @ 0x004432f0 */

void __fastcall FUN_004432f0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = DAT_00480758;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 0x176) = DVar2;
  (**(void (**)(void))(*param_1 + 0x94))();
  return;
}



/* Function: FUN_004434dc @ 0x004434dc */

void FUN_004434dc(void)

{
  return;
}



/* Function: FUN_004434e4 @ 0x004434e4 */

void FUN_004434e4(void)

{
  return;
}



/* Function: FUN_004434f6 @ 0x004434f6 */

void FUN_004434f6(void)

{
  return;
}



/* Function: FUN_00443500 @ 0x00443500 */

void __fastcall FUN_00443500(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = DAT_00480758;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 0x176) = DVar2;
  (**(void (**)(void))(*param_1 + 0x94))();
  return;
}



/* Function: FUN_00443800 @ 0x00443800 */

void FUN_00443800(void)

{
  return;
}



/* Function: FUN_00443808 @ 0x00443808 */

void FUN_00443808(void)

{
  int unaff_EBP;
  
  FUN_00432a50((undefined4 *)(unaff_EBP + -0x44));
  return;
}



/* Function: FUN_00443810 @ 0x00443810 */

void FUN_00443810(void)

{
  return;
}



/* Function: FUN_00443822 @ 0x00443822 */

void FUN_00443822(void)

{
  return;
}



/* Function: FUN_00443830 @ 0x00443830 */

undefined4 * __fastcall FUN_00443830(undefined4 *param_1)

{
    /* TODO: 49 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004439fc @ 0x004439fc */

void FUN_004439fc(void)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00443a1e @ 0x00443a1e */

void FUN_00443a1e(void)

{
  FUN_00442430();
  return;
}



/* Function: FUN_00443ae1 @ 0x00443ae1 */

void FUN_00443ae1(void)

{
  return;
}



/* Function: FUN_00443c56 @ 0x00443c56 */

void FUN_00443c56(void)

{
  return;
}



/* Function: FUN_00443db2 @ 0x00443db2 */

void FUN_00443db2(void)

{
  return;
}



/* Function: FUN_00443dc0 @ 0x00443dc0 */

undefined4 * __fastcall FUN_00443dc0(undefined4 *param_1)

{
    /* TODO: 37 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00443f10 @ 0x00443f10 */

undefined4 * __thiscall FUN_00443f10(void *this,byte param_1)

{
  FUN_00443f30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00443f30 @ 0x00443f30 */

void __fastcall FUN_00443f30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00443fcb;
  *param_1 = &PTR_FUN_00475828;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(undefined4 **)((int)param_1 + 0x14e) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14e))();
    *(undefined4 *)((int)param_1 + 0x14e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x14a) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14a))();
    *(undefined4 *)((int)param_1 + 0x14a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x146) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x146))();
    *(undefined4 *)((int)param_1 + 0x146) = 0;
  }
  local_8 = 0xffffffff;
  FUN_00443fd5();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00443fd5 @ 0x00443fd5 */

void FUN_00443fd5(void)

{
  FUN_00442430();
  return;
}



/* Function: FUN_00443fe0 @ 0x00443fe0 */

void __fastcall FUN_00443fe0(int *param_1)

{
  if (*(undefined4 **)((int)param_1 + 0x14e) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14e))();
    *(undefined4 *)((int)param_1 + 0x14e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x14a) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x14a))();
    *(undefined4 *)((int)param_1 + 0x14a) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x146) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x146))();
    *(undefined4 *)((int)param_1 + 0x146) = 0;
  }
  FUN_00441f10(param_1);
  return;
}



/* Function: FUN_0044439d @ 0x0044439d */

void FUN_0044439d(void)

{
  return;
}



/* Function: FUN_004444b9 @ 0x004444b9 */

void FUN_004444b9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00444529 @ 0x00444529 */

void FUN_00444529(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00444720 @ 0x00444720 */

void FUN_00444720(void)

{
  return;
}



/* Function: FUN_004448c6 @ 0x004448c6 */

void FUN_004448c6(void)

{
  return;
}



/* Function: FUN_004448ce @ 0x004448ce */

void FUN_004448ce(void)

{
  return;
}



/* Function: FUN_004448e0 @ 0x004448e0 */

void FUN_004448e0(void)

{
  return;
}



/* Function: FUN_00444a2e @ 0x00444a2e */

void FUN_00444a2e(void)

{
  return;
}



/* Function: FUN_00444a40 @ 0x00444a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00444a40(undefined4 *param_1)

{
    /* TODO: 82 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00444d1c @ 0x00444d1c */

void FUN_00444d1c(void)

{
  int unaff_EBP;
  
  FUN_00413840((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1dc));
  return;
}



/* Function: FUN_00444d34 @ 0x00444d34 */

void FUN_00444d34(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00444f71 @ 0x00444f71 */

void FUN_00444f71(void)

{
  return;
}



/* Function: FUN_00444f79 @ 0x00444f79 */

void FUN_00444f79(void)

{
  return;
}



/* Function: FUN_00444f81 @ 0x00444f81 */

void FUN_00444f81(void)

{
  return;
}



/* Function: FUN_00444f91 @ 0x00444f91 */

void FUN_00444f91(void)

{
  return;
}



/* Function: FUN_00444f99 @ 0x00444f99 */

void FUN_00444f99(void)

{
  return;
}



/* Function: FUN_00444fa1 @ 0x00444fa1 */

void FUN_00444fa1(void)

{
  return;
}



/* Function: FUN_004453c5 @ 0x004453c5 */

void FUN_004453c5(void)

{
  int unaff_EBP;
  
  FUN_0040f520((undefined4 *)(unaff_EBP + -0x38));
  return;
}



/* Function: FUN_00445459 @ 0x00445459 */

void FUN_00445459(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00445470 @ 0x00445470 */

undefined1 __thiscall
FUN_00445470(void *this,int param_1,int param_2,char param_3,char param_4,undefined4 param_5,
            char param_6)

{
  char cVar1;
  SHORT SVar2;
  SHORT SVar3;
  SHORT SVar4;
  DWORD DVar5;
  uint uVar6;
  short sVar7;
  ushort *puVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ushort *local_24;
  int local_20;
  ushort *local_1c;
  void *local_18;
  char local_13;
  undefined1 local_12;
  char local_11;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445791;
  *unaff_FS_OFFSET = &local_10;
  local_12 = 0;
  local_13 = '\0';
  local_18 = this;
  FUN_0041d780(this,*(void **)(DAT_004897c0 + 0x52));
  FUN_0041dbb0(local_18);
  local_1c = FUN_0042c860(DAT_004838c0,param_2);
  if (local_1c != (ushort *)0x0) {
    SVar2 = GetAsyncKeyState(2);
    SVar3 = GetAsyncKeyState(4);
    SVar4 = GetAsyncKeyState(1);
    local_2c = 0;
    local_30 = 0;
    local_8 = 0;
    local_11 = (-1 < SVar2 && -1 < SVar3) && -1 < SVar4;
    DVar5 = GetTickCount();
    local_20 = (int)(((longlong)(int)DVar5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
    if (param_4 == '\0') {
      FUN_00403030(&local_30,&local_28,(undefined4 *)&DAT_00488ed0);
      local_8 = local_8 & 0xffffff00;
      FUN_00445789();
    }
    else {
      FUN_0041ce10(local_18,&local_30,param_5);
    }
    local_24 = FUN_0042c5b0((short *)local_1c,&local_30,(ushort *)0x0);
    if (local_24 != (ushort *)0x0) {
      sVar7 = 0;
      if (0 < (short)*local_1c) {
        do {
          if ((param_6 == '\0') && (sVar7 != 0)) {
            if (param_3 == '\0') {
              FUN_00431160(*(void **)((int)local_18 + 6),'\0');
            }
            else {
              DVar5 = GetTickCount();
              uVar6 = (int)(((longlong)(int)DVar5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                      local_20;
              while (uVar6 < 5) {
                FUN_00431160(*(void **)((int)local_18 + 6),'\0');
                DVar5 = GetTickCount();
                uVar6 = (int)(((longlong)(int)DVar5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000)
                        - local_20;
              }
              DVar5 = GetTickCount();
              local_20 = (int)(((longlong)(int)DVar5 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000)
              ;
            }
          }
          SVar2 = GetAsyncKeyState(2);
          SVar3 = GetAsyncKeyState(4);
          SVar4 = GetAsyncKeyState(1);
          if ((SVar2 < 0 || SVar3 < 0) || SVar4 < 0) {
            if (local_11 != '\0') {
              local_12 = 1;
              if (sVar7 < (short)*local_1c) {
                do {
                  puVar8 = local_24 + sVar7 * 0xd;
                  FUN_0041d3a0(local_18,*(int *)(puVar8 + 2),*(int *)puVar8,'\0');
                  if ((char)local_1c[1] != '\0') {
                    FUN_00406130(local_18,*(int *)(puVar8 + 6),*(int *)(puVar8 + 4),0,'\x01');
                  }
                  sVar7 = sVar7 + 1;
                } while (sVar7 < (short)*local_1c);
              }
              break;
            }
          }
          else if (local_11 == '\0') {
            local_11 = '\x01';
          }
          puVar8 = local_24 + sVar7 * 0xd;
          FUN_0041d2d0(local_18,(int *)puVar8,'\0');
          if ((char)local_1c[1] != '\0') {
            FUN_00406130(local_18,*(int *)(puVar8 + 6),*(int *)(puVar8 + 4),0,'\x01');
          }
          if ((local_13 == '\0') && (cVar1 = FUN_00406fc0((int)local_18,param_1), cVar1 == '\0')) {
            FUN_0041d780(local_18,*(void **)(DAT_004897c0 + 0x4a));
            FUN_0041dd40(local_18);
            local_13 = '\x01';
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 < (short)*local_1c);
      }
      FUN_0046f5f0((uint)local_24);
    }
    FUN_0042c8d0(DAT_004838c0,param_2,(uint)local_1c);
    local_8 = 0xffffffff;
    FUN_0044579b();
  }
  FUN_0041d780(local_18,*(void **)(DAT_004897c0 + 0x4a));
  *unaff_FS_OFFSET = local_10;
  return local_12;
}



/* Function: FUN_00445789 @ 0x00445789 */

void FUN_00445789(void)

{
  return;
}



/* Function: FUN_0044579b @ 0x0044579b */

void FUN_0044579b(void)

{
  return;
}



/* Function: FUN_004457b0 @ 0x004457b0 */

void FUN_004457b0(void *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0044583a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_0041ce10(param_1,&local_18,4);
  iVar1 = rand();
  local_14 = local_14 + (iVar1 % 0x32 + 1) * 0x100;
  iVar1 = rand();
  local_18 = local_18 + (iVar1 % 0x19 + 1) * 0x100;
  FUN_0041cef0(param_1,&local_18,4);
  local_8 = 0xffffffff;
  FUN_00445844();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00445844 @ 0x00445844 */

void FUN_00445844(void)

{
  return;
}



/* Function: FUN_004459bd @ 0x004459bd */

void FUN_004459bd(void)

{
  return;
}



/* Function: FUN_004459c5 @ 0x004459c5 */

void FUN_004459c5(void)

{
  return;
}



/* Function: FUN_004459d7 @ 0x004459d7 */

void FUN_004459d7(void)

{
  return;
}



/* Function: FUN_004459f0 @ 0x004459f0 */

void __fastcall FUN_004459f0(void *param_1)

{
  FUN_004048d0(param_1);
  FUN_0040b1e0(*(void **)((int)param_1 + 0x20a),
               *(int *)(&DAT_00480718 + *(int *)((int)param_1 + 0x1d8) * 8));
  FUN_0040d840(DAT_004897c0,9);
  FUN_0041dbb0(*(void **)((int)DAT_004897c0 + 0x44));
  FUN_0041ba40(*(void **)((int)DAT_004897c0 + 0x44),0,1,0);
  FUN_0041dbb0(*(void **)((int)param_1 + 0x1d4));
  FUN_0041dd40(*(void **)((int)DAT_004897c0 + 0x4a));
  *(undefined4 *)(*(int *)((int)DAT_004897c0 + 0x4a) + 0x16) = 3;
  FUN_0042d7d0((int)param_1);
  if (1 < *(short *)(DAT_0048345c + 0xea)) {
    FUN_0042da60(param_1,0x4df000d,(ushort *)0x0,-1,-1);
  }
  FUN_0042da60(param_1,DAT_00488ef0,*(ushort **)((int)param_1 + 0x1bc),-1,-1);
  FUN_0042da60(param_1,0x4de000d,(ushort *)0x0,-1,-1);
  FUN_0042d860((int)param_1);
  if ((*(char *)(DAT_0048345c + 0x90) != '\0') && (*(int *)((int)param_1 + 0x1d0) != 0)) {
    DAT_00480664 = 1;
    FUN_0042dba0(param_1,*(int *)((int)param_1 + 0x1d0) + 0x32);
    DAT_00480664 = 0;
  }
  DAT_00480760 = 0;
  return;
}



/* Function: FUN_00445b10 @ 0x00445b10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00445b10(void *this,int param_1)

{
    /* TODO: 31 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00445dd3 @ 0x00445dd3 */

void FUN_00445dd3(void)

{
  return;
}



/* Function: FUN_00445ddb @ 0x00445ddb */

void FUN_00445ddb(void)

{
  return;
}



/* Function: FUN_00445ded @ 0x00445ded */

void FUN_00445ded(void)

{
  return;
}



/* Function: FUN_00445e10 @ 0x00445e10 */

void __fastcall FUN_00445e10(int param_1)

{
  FUN_00448df0();
  FUN_00404a80(param_1);
  return;
}



/* Function: FUN_004461a2 @ 0x004461a2 */

void FUN_004461a2(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_00446280 @ 0x00446280 */

void FUN_00446280(void)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00446c58 @ 0x00446c58 */

void FUN_00446c58(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x30));
  return;
}



/* Function: FUN_004470f2 @ 0x004470f2 */

void FUN_004470f2(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x30));
  return;
}



/* Function: FUN_004475fd @ 0x004475fd */

void FUN_004475fd(void)

{
  int unaff_EBP;
  
  FUN_00447a70((undefined4 *)(unaff_EBP + -0x60));
  return;
}



/* Function: FUN_00447605 @ 0x00447605 */

void FUN_00447605(void)

{
  return;
}



/* Function: FUN_004479af @ 0x004479af */

void FUN_004479af(void)

{
  int unaff_EBP;
  
  FUN_00447a70((undefined4 *)(unaff_EBP + -0x3c));
  return;
}



/* Function: FUN_00447a5b @ 0x00447a5b */

void FUN_00447a5b(void)

{
  int unaff_EBP;
  
  FUN_00413840((undefined4 *)(unaff_EBP + -0x54));
  return;
}



/* Function: FUN_00447a70 @ 0x00447a70 */

void __fastcall FUN_00447a70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00474de4;
  return;
}



/* Function: FUN_00447b18 @ 0x00447b18 */

void FUN_00447b18(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_00447f00 @ 0x00447f00 */

void FUN_00447f00(void)

{
  return;
}



/* Function: FUN_00447f1d @ 0x00447f1d */

void FUN_00447f1d(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x3c));
  return;
}



/* Function: FUN_00447fb0 @ 0x00447fb0 */

void __thiscall FUN_00447fb0(void *this,undefined2 param_1)

{
  *(undefined2 *)((intptr_t)this + 0x118) = param_1;
  return;
}



/* Function: FUN_00447fd0 @ 0x00447fd0 */

void __thiscall FUN_00447fd0(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x11a) = param_1;
  return;
}



/* Function: FUN_00447ff0 @ 0x00447ff0 */

void __thiscall FUN_00447ff0(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x11e) = param_1;
  return;
}



/* Function: FUN_00448010 @ 0x00448010 */

void __thiscall FUN_00448010(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x122) = param_1;
  FUN_00406ca0(this,(char)param_1,'\0');
  return;
}



/* Function: FUN_00448030 @ 0x00448030 */

void __thiscall FUN_00448030(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x126) = param_1;
  return;
}



/* Function: FUN_00448050 @ 0x00448050 */

void __thiscall FUN_00448050(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x12a) = param_1;
  return;
}



/* Function: FUN_004480c9 @ 0x004480c9 */

void FUN_004480c9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0044875d @ 0x0044875d */

void FUN_0044875d(void)

{
  return;
}



/* Function: FUN_0044876f @ 0x0044876f */

void FUN_0044876f(void)

{
  return;
}



/* Function: FUN_004489e1 @ 0x004489e1 */

void FUN_004489e1(void)

{
  return;
}



/* Function: FUN_00448a74 @ 0x00448a74 */

void FUN_00448a74(void)

{
  return;
}



/* Function: FUN_00448aad @ 0x00448aad */

void FUN_00448aad(void)

{
  return;
}



/* Function: FUN_00448ab5 @ 0x00448ab5 */

void FUN_00448ab5(void)

{
  return;
}



/* Function: FUN_00448ac7 @ 0x00448ac7 */

void FUN_00448ac7(void)

{
  return;
}



/* Function: FUN_00448ad0 @ 0x00448ad0 */

int * FUN_00448ad0(short param_1,short param_2,undefined4 param_3,int param_4,int param_5)

{
    /* TODO: 43 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00448cb0 @ 0x00448cb0 */

void __thiscall FUN_00448cb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0x124) = param_1;
  FUN_00406ca0(this,(char)param_1,'\0');
  return;
}



/* Function: FUN_00448d49 @ 0x00448d49 */

void FUN_00448d49(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00448d60 @ 0x00448d60 */

void __cdecl FUN_00448d60(int *param_1,int *param_2)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00448da0 @ 0x00448da0 */

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
  return;
}



/* Function: FUN_00448df0 @ 0x00448df0 */

void FUN_00448df0(void)

{
  if (DAT_004807a0 != 0) {
    FUN_00434490(DAT_004807a0);
    DAT_004807a0 = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488edc,DAT_00488e78);
  }
  return;
}



/* Function: FUN_00448e50 @ 0x00448e50 */

void __cdecl FUN_00448e50(int param_1,short *param_2)

{
    /* TODO: 44 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044941e @ 0x0044941e */

void FUN_0044941e(void)

{
  int unaff_EBP;
  
  FUN_00413810((undefined4 *)(unaff_EBP + -0x7c));
  return;
}



/* Function: FUN_0044942e @ 0x0044942e */

void FUN_0044942e(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x30));
  return;
}



/* Function: FUN_00449436 @ 0x00449436 */

void FUN_00449436(void)

{
  int unaff_EBP;
  
  FUN_0040f520((undefined4 *)(unaff_EBP + -0x60));
  return;
}



/* Function: FUN_00449448 @ 0x00449448 */

void FUN_00449448(void)

{
  int unaff_EBP;
  
  FUN_0040f520((undefined4 *)(unaff_EBP + -0x48));
  return;
}



/* Function: FUN_00449450 @ 0x00449450 */

void __fastcall FUN_00449450(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004752f4;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00449500 @ 0x00449500 */

undefined4 __thiscall FUN_00449500(void *this,int param_1,char param_2)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004495a0 @ 0x004495a0 */

void __cdecl FUN_004495a0(undefined2 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  
  *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  cVar2 = DAT_00483ddc;
  sVar3 = 0;
  do {
    if (cVar2 != '\0') {
      uVar1 = param_1[sVar3 * 3 + 2];
      param_1[sVar3 * 3 + 2] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    }
    uVar1 = param_1[sVar3 * 3 + 3];
    param_1[sVar3 * 3 + 3] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    sVar3 = sVar3 + 1;
  } while (sVar3 < 7);
  return;
}



/* Function: FUN_00449610 @ 0x00449610 */

undefined4 * __fastcall FUN_00449610(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return param_1;
}



/* Function: FUN_00449630 @ 0x00449630 */

void __fastcall FUN_00449630(int *param_1)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00449660 @ 0x00449660 */

uint __thiscall FUN_00449660(void *this,char *param_1)

{
    /* TODO: 83 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00449790 @ 0x00449790 */

void FUN_00449790(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f00,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004497e0 @ 0x004497e0 */

void FUN_004497e0(void)

{
  return;
}



/* Function: FUN_004497f0 @ 0x004497f0 */

undefined4 __fastcall FUN_004497f0(int *param_1)

{
    /* TODO: 20 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00449850 @ 0x00449850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449850(void)

{
  _DAT_00488f2a = 0;
  _DAT_00488f28 = 0;
  return;
}



/* Function: FUN_00449860 @ 0x00449860 */

void FUN_00449860(void)

{
  _atexit(FUN_00449870);
  return;
}



/* Function: FUN_00449870 @ 0x00449870 */

void FUN_00449870(void)

{
  return;
}



/* Function: FUN_00449890 @ 0x00449890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449890(void)

{
  _DAT_00488f26 = 0;
  _DAT_00488f24 = 0;
  return;
}



/* Function: FUN_004498a0 @ 0x004498a0 */

void FUN_004498a0(void)

{
  _atexit(FUN_004498b0);
  return;
}



/* Function: FUN_004498b0 @ 0x004498b0 */

void FUN_004498b0(void)

{
  return;
}



/* Function: FUN_004498c0 @ 0x004498c0 */

void __thiscall
FUN_004498c0(void *this,undefined4 *param_1,void *param_2,int param_3,undefined2 *param_4)

{
    /* TODO: 109 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00449abc @ 0x00449abc */

void FUN_00449abc(void)

{
  return;
}



/* Function: FUN_00449b40 @ 0x00449b40 */

void __thiscall FUN_00449b40(void *this,void *param_1,uint param_2)

{
    /* TODO: 127 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00449ddb @ 0x00449ddb */

void FUN_00449ddb(void)

{
  return;
}



/* Function: FUN_00449de3 @ 0x00449de3 */

void FUN_00449de3(void)

{
  return;
}



/* Function: FUN_00449df5 @ 0x00449df5 */

void FUN_00449df5(void)

{
  int unaff_EBP;
  
  FUN_0043b810((undefined4 *)(unaff_EBP + -100));
  return;
}



/* Function: FUN_00449e00 @ 0x00449e00 */

int * __thiscall FUN_00449e00(void *this,int param_1)

{
    /* TODO: 29 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00449ea0 @ 0x00449ea0 */

uint __thiscall FUN_00449ea0(void *this,undefined2 param_1,undefined4 *param_2,undefined4 *param_3)

{
    /* TODO: 54 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00449fa0 @ 0x00449fa0 */

ushort * __thiscall FUN_00449fa0(void *this,ushort *param_1,int param_2)

{
    /* TODO: 44 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a080 @ 0x0044a080 */

void __thiscall FUN_0044a080(void *this,uint *param_1,LPCVOID param_2,uint param_3)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044a130 @ 0x0044a130 */

undefined4 * __thiscall FUN_0044a130(void *this,undefined4 *param_1,int param_2)

{
    /* TODO: 26 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a1a0 @ 0x0044a1a0 */

void __thiscall FUN_0044a1a0(void *this,undefined4 *param_1,undefined2 *param_2,uint param_3)

{
    /* TODO: 23 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044a230 @ 0x0044a230 */

ushort __fastcall FUN_0044a230(undefined4 *param_1)

{
    /* TODO: 12 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a260 @ 0x0044a260 */

ushort __fastcall FUN_0044a260(undefined4 *param_1)

{
    /* TODO: 12 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a290 @ 0x0044a290 */

undefined1 __fastcall FUN_0044a290(int *param_1)

{
    /* TODO: 11 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a2c0 @ 0x0044a2c0 */

void __fastcall FUN_0044a2c0(int *param_1)

{
    /* TODO: 23 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044a330 @ 0x0044a330 */

void __fastcall FUN_0044a330(int *param_1)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044a3a0 @ 0x0044a3a0 */

void __thiscall FUN_0044a3a0(void *this,undefined2 param_1)

{
  *(undefined2 *)((intptr_t)this + 8) = param_1;
  FUN_0044ab30(this);
  return;
}



/* Function: FUN_0044a3c0 @ 0x0044a3c0 */

void __thiscall FUN_0044a3c0(void *this,short param_1)

{
  FUN_0044a290(this);
  while (param_1 = param_1 + -1, param_1 != 0) {
    FUN_0044a2c0(this);
  }
  FUN_0044ab30(this);
  return;
}



/* Function: FUN_0044a400 @ 0x0044a400 */

undefined4 __fastcall FUN_0044a400(int *param_1)

{
    /* TODO: 44 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a500 @ 0x0044a500 */

uint FUN_0044a500(void)

{
    /* TODO: 219 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044a74b @ 0x0044a74b */

void FUN_0044a74b(void)

{
  int unaff_EBP;
  
  FUN_00460010((undefined4 *)(unaff_EBP + -0x98));
  return;
}



/* Function: FUN_0044a760 @ 0x0044a760 */

void FUN_0044a760(void)

{
  int unaff_EBP;
  
  FUN_00460010((undefined4 *)(unaff_EBP + -0x58));
  return;
}



/* Function: FUN_0044a770 @ 0x0044a770 */

undefined2 __fastcall FUN_0044a770(int *param_1)

{
  if (*param_1 != 0) {
    return (short)param_1[2];
  }
  return 0;
}



/* Function: FUN_0044a780 @ 0x0044a780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_0044a780(undefined4 *param_1)

{
    /* TODO: 131 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044aa10 @ 0x0044aa10 */

void FUN_0044aa10(void)

{
  int unaff_EBP;
  
  FUN_004524e0(unaff_EBP + -0x120);
  return;
}



/* Function: FUN_0044aa66 @ 0x0044aa66 */

void FUN_0044aa66(void)

{
  FUN_00413810((undefined4 *)&DAT_00488f08);
  return;
}



/* Function: FUN_0044aa70 @ 0x0044aa70 */

undefined2 __fastcall FUN_0044aa70(undefined4 *param_1)

{
    /* TODO: 33 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044ab16 @ 0x0044ab16 */

void FUN_0044ab16(void)

{
  int unaff_EBP;
  
  FUN_004524e0(unaff_EBP + -0x120);
  return;
}



/* Function: FUN_0044ab30 @ 0x0044ab30 */

uint __fastcall FUN_0044ab30(undefined4 *param_1)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044ab70 @ 0x0044ab70 */

uint __thiscall
FUN_0044ab70(void *this,ushort *param_1,undefined4 *param_2,undefined4 *param_3,ushort param_4)

{
    /* TODO: 18 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044ac00 @ 0x0044ac00 */

uint __thiscall FUN_0044ac00(void *this,LPCVOID param_1,void *param_2,undefined2 *param_3)

{
    /* TODO: 65 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044add0 @ 0x0044add0 */

undefined4 __thiscall FUN_0044add0(void *this,int param_1,char param_2)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044ae80 @ 0x0044ae80 */

void FUN_0044ae80(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f30,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044aed0 @ 0x0044aed0 */

void FUN_0044aed0(void)

{
  return;
}



/* Function: FUN_0044aef0 @ 0x0044aef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044aef0(void)

{
  _DAT_00488f3e = 0;
  _DAT_00488f3c = 0;
  return;
}



/* Function: FUN_0044af00 @ 0x0044af00 */

void FUN_0044af00(void)

{
  _atexit(FUN_0044af10);
  return;
}



/* Function: FUN_0044af10 @ 0x0044af10 */

void FUN_0044af10(void)

{
  return;
}



/* Function: FUN_0044af30 @ 0x0044af30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044af30(void)

{
  _DAT_00488f3a = 0;
  _DAT_00488f38 = 0;
  return;
}



/* Function: FUN_0044af40 @ 0x0044af40 */

void FUN_0044af40(void)

{
  _atexit(FUN_0044af50);
  return;
}



/* Function: FUN_0044af50 @ 0x0044af50 */

void FUN_0044af50(void)

{
  return;
}



/* Function: FUN_0044af70 @ 0x0044af70 */

void FUN_0044af70(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f40,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044afb0 @ 0x0044afb0 */

void FUN_0044afb0(void)

{
  _atexit(FUN_0044afc0);
  return;
}



/* Function: FUN_0044afc0 @ 0x0044afc0 */

void FUN_0044afc0(void)

{
  return;
}



/* Function: FUN_0044afe0 @ 0x0044afe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044afe0(void)

{
  _DAT_00488f4e = 0;
  _DAT_00488f4c = 0;
  return;
}



/* Function: FUN_0044aff0 @ 0x0044aff0 */

void FUN_0044aff0(void)

{
  _atexit(FUN_0044b000);
  return;
}



/* Function: FUN_0044b000 @ 0x0044b000 */

void FUN_0044b000(void)

{
  return;
}



/* Function: FUN_0044b020 @ 0x0044b020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b020(void)

{
  _DAT_00488f4a = 0;
  _DAT_00488f48 = 0;
  return;
}



/* Function: FUN_0044b030 @ 0x0044b030 */

void FUN_0044b030(void)

{
  _atexit(FUN_0044b040);
  return;
}



/* Function: FUN_0044b040 @ 0x0044b040 */

void FUN_0044b040(void)

{
  return;
}



/* Function: FUN_0044b050 @ 0x0044b050 */

undefined4 * __fastcall FUN_0044b050(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044b09f;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  *param_1 = &PTR_FUN_00475d98;
  param_1[0x66] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0044b119 @ 0x0044b119 */

void FUN_0044b119(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0044b1c0 @ 0x0044b1c0 */

void __fastcall FUN_0044b1c0(int param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044b2e0 @ 0x0044b2e0 */

void FUN_0044b2e0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f50,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044b330 @ 0x0044b330 */

void FUN_0044b330(void)

{
  return;
}



/* Function: FUN_0044b350 @ 0x0044b350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b350(void)

{
  _DAT_00488f5e = 0;
  _DAT_00488f5c = 0;
  return;
}



/* Function: FUN_0044b360 @ 0x0044b360 */

void FUN_0044b360(void)

{
  _atexit(FUN_0044b370);
  return;
}



/* Function: FUN_0044b370 @ 0x0044b370 */

void FUN_0044b370(void)

{
  return;
}



/* Function: FUN_0044b390 @ 0x0044b390 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b390(void)

{
  _DAT_00488f5a = 0;
  _DAT_00488f58 = 0;
  return;
}



/* Function: FUN_0044b3a0 @ 0x0044b3a0 */

void FUN_0044b3a0(void)

{
  _atexit(FUN_0044b3b0);
  return;
}



/* Function: FUN_0044b3b0 @ 0x0044b3b0 */

void FUN_0044b3b0(void)

{
  return;
}



/* Function: FUN_0044b3d0 @ 0x0044b3d0 */

void FUN_0044b3d0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f60,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044b410 @ 0x0044b410 */

void FUN_0044b410(void)

{
  _atexit(FUN_0044b420);
  return;
}



/* Function: FUN_0044b420 @ 0x0044b420 */

void FUN_0044b420(void)

{
  return;
}



/* Function: FUN_0044b4b0 @ 0x0044b4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b4b0(void)

{
  _DAT_00488f8a = 0;
  _DAT_00488f88 = 0;
  return;
}



/* Function: FUN_0044b4c0 @ 0x0044b4c0 */

void FUN_0044b4c0(void)

{
  _atexit(FUN_0044b4d0);
  return;
}



/* Function: FUN_0044b4d0 @ 0x0044b4d0 */

void FUN_0044b4d0(void)

{
  return;
}



/* Function: FUN_0044b5f0 @ 0x0044b5f0 */

void FUN_0044b5f0(void)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(s_MMATH_004804d8,s_GAMELEVEL_0048284c,-1,s_MMATH_INI_004804cc);
  if ((int)UVar1 < 1) {
                    /* WARNING: Could not recover jumptable at 0x0044b60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    rand();
    return;
  }
  return;
}



/* Function: FUN_0044b630 @ 0x0044b630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b630(void)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044b670 @ 0x0044b670 */

void FUN_0044b670(void)

{
  _atexit(FUN_0044b680);
  return;
}



/* Function: FUN_0044b680 @ 0x0044b680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b680(void)

{
  if ((DAT_00488f84 & 1) == 0) {
    _DAT_00488f68 = &PTR_LAB_00475f64;
    DAT_00488f84 = DAT_00488f84 | 1;
    if (DAT_00488f6c != (uint *)0x0) {
      FUN_0046d110(DAT_00488f6c);
    }
    DAT_00488f6c = (uint *)0x0;
    DAT_00488f70 = 0;
  }
  return;
}



/* Function: FUN_0044b6c0 @ 0x0044b6c0 */

undefined4 FUN_0044b6c0(void)

{
    /* TODO: 273 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044bab1 @ 0x0044bab1 */

void FUN_0044bab1(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x48));
  return;
}



/* Function: FUN_0044bb00 @ 0x0044bb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bb00(void)

{
  _DAT_00488f82 = 0;
  _DAT_00488f80 = 0;
  return;
}



/* Function: FUN_0044bb10 @ 0x0044bb10 */

void FUN_0044bb10(void)

{
  _atexit(FUN_0044bb20);
  return;
}



/* Function: FUN_0044bb20 @ 0x0044bb20 */

void FUN_0044bb20(void)

{
  return;
}



/* Function: FUN_0044bb30 @ 0x0044bb30 */

/* WARNING: Removing unreachable block (ram,0x0044bb9c) */

undefined4 FUN_0044bb30(void)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044bbf6 @ 0x0044bbf6 */

void FUN_0044bbf6(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}



/* Function: FUN_0044bc10 @ 0x0044bc10 */

int __cdecl FUN_0044bc10(int param_1)

{
    /* TODO: 12 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044bc50 @ 0x0044bc50 */

undefined4 * __fastcall FUN_0044bc50(undefined4 *param_1)

{
    /* TODO: 146 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044bef4 @ 0x0044bef4 */

void FUN_0044bef4(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_0044bf50 @ 0x0044bf50 */

int FUN_0044bf50(int *param_1,char param_2)

{
  char cVar1;
  short sVar2;
  DWORD _Seed;
  int iVar3;
  LPCVOID pvVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *unaff_FS_OFFSET;
  ushort local_1ec;
  short local_1ea [127];
  char local_ec [32];
  undefined **local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b6;
  undefined **local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_9a;
  undefined **local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7e;
  undefined **local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_62;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  undefined **local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  void *local_2a;
  short *local_24;
  int local_20;
  int local_1c;
  int local_18;
  short local_14;
  ushort local_12;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044c7cd;
  *unaff_FS_OFFSET = &local_10;
  uVar10 = 0;
  local_14 = 0;
  local_4c = 0;
  local_12 = 1;
  _Seed = GetTickCount();
  srand(_Seed);
  local_40 = &PTR_LAB_00472e04;
  *(undefined4 *)(local_18 + 0x40) = 0;
  local_3c = (undefined4 *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_2a = (void *)0x0;
  local_30 = 0xffffffff;
  local_2c = 0;
  FUN_004173e0(&local_40,(char *)&DAT_0047ef44,0xffffffff);
  local_40 = &PTR_LAB_00472e00;
  local_8 = 1;
  if ((local_3c != (undefined4 *)0x0) && (pcVar8 = (char *)*local_3c, pcVar8 != (char *)0x0)) {
    cVar1 = *pcVar8;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar10 = uVar10 + 1;
      cVar1 = *pcVar8;
    }
  }
  if (*(int *)(local_18 + 0xc) + -1 < (int)uVar10) {
    iVar3 = FUN_00417570(local_18 + 4);
    iVar11 = uVar10 + 1;
    if ((int)(uVar10 + 1) <= iVar3 + 1) {
      iVar11 = iVar3 + 1;
    }
    iVar11 = (((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (*(uint **)(local_18 + 8) == (uint *)0x0) {
      pvVar4 = *(LPCVOID *)(local_18 + 0x10);
      if (*(LPCVOID *)(local_18 + 0x10) == (LPCVOID)0x0) {
        pvVar4 = DAT_00483df4;
      }
      puVar5 = FUN_0046ccb0(pvVar4,7,iVar11);
    }
    else {
      puVar5 = FUN_0046cdc0(*(uint **)(local_18 + 8),iVar11,7);
    }
    *(uint **)(local_18 + 8) = puVar5;
    *(int *)(local_18 + 0xc) = iVar11;
  }
  puVar12 = (undefined4 *)*local_3c;
  puVar14 = (undefined4 *)**(undefined4 **)(local_18 + 8);
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  local_8 = 0xffffffff;
  *(undefined1 *)(**(int **)(local_18 + 8) + uVar10) = 0;
  FUN_0044c7d7();
  FUN_0040f380(DAT_004838c0,*param_1,&local_1ec);
  local_44 = 1;
  if (0 < (short)local_1ec) {
    local_24 = local_1ea;
    local_50 = (int *)(local_18 + 0x48);
    local_20 = 0;
    do {
      sVar2 = *local_24;
      if (sVar2 == 0) {
        local_1c = 0;
        local_2a = (void *)(local_18 + 4);
        iVar11 = FUN_00417570((int)local_2a);
        FUN_004176a0(local_2a,iVar11 + 1);
        pcVar8 = (char *)0x0;
        if (*(undefined4 **)(local_18 + 8) != (undefined4 *)0x0) {
          pcVar8 = (char *)**(undefined4 **)(local_18 + 8);
          cVar1 = *pcVar8;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
        }
        *pcVar8 = '\v';
        pcVar8[1] = '\0';
        iVar11 = *local_50;
        while (iVar11 != 0) {
          if ((param_2 == '\0') &&
             (iVar11 = *(int *)(local_18 + 0x48 + (local_20 + local_1c) * 4), iVar11 < 0)) {
            _itoa(-iVar11,local_ec,10);
            if (local_12 == 0) {
              local_b0 = &PTR_LAB_00472e04;
              local_ac = (undefined4 *)0x0;
              local_a8 = 0;
              local_a4 = 0;
              local_9a = 0;
              local_a0 = 0xffffffff;
              local_9c = 0;
              FUN_004173e0(&local_b0,&DAT_0048289c,0xffffffff);
              local_8 = 2;
              iVar11 = FUN_00417570((int)&local_b0);
              iVar3 = FUN_00417570((int)local_2a);
              if (iVar11 != 0) {
                pcVar8 = (char *)0x0;
                FUN_004176a0(local_2a,iVar3 + iVar11);
                if (*(undefined4 **)(local_18 + 8) != (undefined4 *)0x0) {
                  pcVar8 = (char *)**(undefined4 **)(local_18 + 8);
                  cVar1 = *pcVar8;
                  while (cVar1 != '\0') {
                    pcVar8 = pcVar8 + 1;
                    cVar1 = *pcVar8;
                  }
                }
                pcVar6 = (char *)*local_ac;
                for (uVar10 = iVar11 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (uVar10 = iVar11 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar8 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar8 = pcVar8 + 1;
                }
              }
              local_8 = 0xffffffff;
              FUN_0044c7a7();
            }
            else {
              local_12 = (ushort)(local_12 == 0);
            }
            local_cc = &PTR_LAB_00472e04;
            local_c8 = (undefined4 *)0x0;
            local_c4 = 0;
            local_c0 = 0;
            local_b6 = 0;
            local_bc = 0xffffffff;
            local_b8 = 0;
            FUN_004173e0(&local_cc,local_ec,0xffffffff);
            local_8 = 3;
            iVar11 = FUN_00417570((int)&local_cc);
            iVar3 = FUN_00417570((int)local_2a);
            if (iVar11 != 0) {
              pcVar8 = (char *)0x0;
              FUN_004176a0(local_2a,iVar3 + iVar11);
              if (*(undefined4 **)(local_18 + 8) != (undefined4 *)0x0) {
                pcVar8 = (char *)**(undefined4 **)(local_18 + 8);
                cVar1 = *pcVar8;
                while (cVar1 != '\0') {
                  pcVar8 = pcVar8 + 1;
                  cVar1 = *pcVar8;
                }
              }
              pcVar6 = (char *)*local_c8;
              for (uVar10 = iVar11 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar8 = pcVar8 + 4;
              }
              for (uVar10 = iVar11 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
              }
            }
            local_8 = 0xffffffff;
            FUN_0044c79c();
            local_1c = local_1c + 1;
            for (piVar15 = (int *)(local_18 + 0x48 + (local_20 + local_1c) * 4);
                (((iVar11 = *piVar15, 0x659 < iVar11 && (iVar11 < 0x679)) ||
                 ((0x7fa < iVar11 && (iVar11 < 0x80d)))) || ((0x56a < iVar11 && (iVar11 < 0x571))));
                piVar15 = piVar15 + 1) {
              local_5c = iVar11;
              FUN_00417720((void *)(local_18 + 0x32),&local_5c,*(uint *)(local_18 + 0x40));
              local_1c = local_1c + 1;
            }
          }
          else {
            local_48 = (int *)(local_18 + 0x48 + (local_20 + local_1c) * 4);
            iVar11 = *local_48;
            if (0 < iVar11) {
              if (local_12 != 0) {
                local_12 = (ushort)(local_12 == 0);
              }
              if (iVar11 == 0x51a) {
LAB_0044c4d2:
                local_12 = 1;
              }
              else if ((((iVar11 == 0x682) || (iVar11 == 0x885)) || (iVar11 == 0x67f)) ||
                      ((0x6c0 < iVar11 && (iVar11 < 0x6cf)))) {
                if ((iVar11 == 0x51a) || ((iVar11 == 0x682 || (iVar11 == 0x885))))
                goto LAB_0044c4d2;
              }
              else {
                local_94 = &PTR_LAB_00472e04;
                local_90 = (undefined4 *)0x0;
                local_8c = 0;
                local_88 = 0;
                local_7e = 0;
                local_84 = 0xffffffff;
                local_80 = 0;
                FUN_004173e0(&local_94,&DAT_0048289c,0xffffffff);
                local_8 = 4;
                iVar11 = FUN_00417570((int)&local_94);
                iVar3 = FUN_00417570((int)local_2a);
                if (iVar11 != 0) {
                  FUN_004176a0(local_2a,iVar3 + iVar11);
                  pcVar6 = FUN_0044da30((int)local_2a);
                  pcVar8 = (char *)*local_90;
                  for (uVar10 = iVar11 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
                    pcVar8 = pcVar8 + 4;
                    pcVar6 = pcVar6 + 4;
                  }
                  for (uVar10 = iVar11 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *pcVar6 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                    pcVar6 = pcVar6 + 1;
                  }
                }
                local_8 = 0xffffffff;
                FUN_0044c7b2();
              }
              iVar11 = FUN_0044bc10(*local_48);
              iVar3 = FUN_00417570(iVar11);
              iVar7 = FUN_00417570((int)local_2a);
              if (iVar3 != 0) {
                FUN_004176a0(local_2a,iVar7 + iVar3);
                pcVar6 = FUN_0044da30((int)local_2a);
                pcVar8 = (char *)**(undefined4 **)(iVar11 + 4);
                for (uVar10 = iVar3 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
                  pcVar8 = pcVar8 + 4;
                  pcVar6 = pcVar6 + 4;
                }
                for (uVar10 = iVar3 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *pcVar6 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pcVar6 = pcVar6 + 1;
                }
              }
              local_58 = *local_48;
              FUN_00417720((void *)(local_18 + 0x32),&local_58,*(uint *)(local_18 + 0x40));
            }
            local_1c = local_1c + 1;
          }
          iVar11 = *(int *)(local_18 + 0x48 + (local_20 + local_1c) * 4);
        }
        if ((short)local_1ec == local_44) {
          iVar11 = FUN_00417570((int)local_2a);
          FUN_004176a0(local_2a,iVar11 + 1);
          pcVar8 = FUN_0044da30((int)local_2a);
          local_14 = 1;
          *pcVar8 = '\x1e';
          pcVar8[1] = '\0';
        }
        iVar11 = FUN_00417570((int)local_2a);
        FUN_004176a0(local_2a,iVar11 + 1);
        pcVar8 = (char *)0x0;
        if (*(undefined4 **)(local_18 + 8) != (undefined4 *)0x0) {
          pcVar8 = (char *)**(undefined4 **)(local_18 + 8);
          cVar1 = *pcVar8;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
        }
        *pcVar8 = '\f';
        local_4c = local_4c + 1;
        pcVar8[1] = '\0';
        local_20 = local_20 + 0x10;
        local_50 = local_50 + 0x10;
      }
      else {
        if (local_12 != 0) {
          local_12 = (ushort)(local_12 == 0);
        }
        if ((((sVar2 != 0x51a) && (sVar2 != 0x682)) && (sVar2 != 0x885)) &&
           ((sVar2 != 0x67f && (sVar2 != 0x795)))) {
          local_78 = &PTR_LAB_00472e04;
          local_74 = (undefined4 *)0x0;
          local_70 = 0;
          local_6c = 0;
          local_62 = 0;
          local_68 = 0xffffffff;
          local_64 = 0;
          FUN_004173e0(&local_78,&DAT_0048289c,0xffffffff);
          local_8 = 5;
          iVar11 = FUN_00417570((int)&local_78);
          pvVar13 = (void *)(local_18 + 4);
          iVar3 = FUN_00417570((int)pvVar13);
          if (iVar11 != 0) {
            FUN_004176a0(pvVar13,iVar3 + iVar11);
            pcVar6 = FUN_0044da30((int)pvVar13);
            pcVar8 = (char *)*local_74;
            for (uVar10 = iVar11 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar6 = pcVar6 + 4;
            }
            for (uVar10 = iVar11 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar6 = pcVar6 + 1;
            }
          }
          local_8 = 0xffffffff;
          FUN_0044c7bd();
        }
        iVar11 = FUN_0044bc10((int)*local_24);
        iVar3 = FUN_00417570(iVar11);
        pvVar13 = (void *)(local_18 + 4);
        iVar7 = FUN_00417570((int)pvVar13);
        if (iVar3 != 0) {
          FUN_004176a0(pvVar13,iVar7 + iVar3);
          pcVar6 = FUN_0044da30((int)pvVar13);
          pcVar8 = (char *)**(undefined4 **)(iVar11 + 4);
          for (uVar10 = iVar3 + 1U >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar10 = iVar3 + 1U & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar6 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          }
        }
        local_54 = (int)*local_24;
        FUN_00417720((void *)(local_18 + 0x32),&local_54,*(uint *)(local_18 + 0x40));
      }
      local_24 = local_24 + 1;
      local_44 = local_44 + 1;
    } while (local_44 <= (short)local_1ec);
  }
  if (local_14 == 0) {
    pvVar13 = (void *)(local_18 + 4);
    iVar11 = FUN_00417570((int)pvVar13);
    FUN_004176a0(pvVar13,iVar11 + 1);
    pcVar8 = FUN_0044da30((int)pvVar13);
    *pcVar8 = '\x1e';
    pcVar8[1] = '\0';
  }
  *unaff_FS_OFFSET = local_10;
  return local_4c;
}



/* Function: FUN_0044c79c @ 0x0044c79c */

void FUN_0044c79c(void)

{
  int unaff_EBP;
  
  FUN_00413810((undefined4 *)(unaff_EBP + -200));
  return;
}



/* Function: FUN_0044c7a7 @ 0x0044c7a7 */

void FUN_0044c7a7(void)

{
  int unaff_EBP;
  
  FUN_00413810((undefined4 *)(unaff_EBP + -0xac));
  return;
}



/* Function: FUN_0044c7b2 @ 0x0044c7b2 */

void FUN_0044c7b2(void)

{
  int unaff_EBP;
  
  FUN_00413810((undefined4 *)(unaff_EBP + -0x90));
  return;
}



/* Function: FUN_0044c7bd @ 0x0044c7bd */

void FUN_0044c7bd(void)

{
  int unaff_EBP;
  
  FUN_00413810((undefined4 *)(unaff_EBP + -0x74));
  return;
}



/* Function: FUN_0044c7d7 @ 0x0044c7d7 */

void FUN_0044c7d7(void)

{
  int unaff_EBP;
  
  FUN_004113d0((undefined4 *)(unaff_EBP + -0x3c));
  return;
}



/* Function: FUN_0044c7e0 @ 0x0044c7e0 */

void __thiscall FUN_0044c7e0(void *this,undefined4 param_1,int param_2,char param_3)

{
  *(undefined4 *)((intptr_t)this + (*(int *)((intptr_t)this + 0x1c8) * 0x10 + param_2) * 4 + 0x48) = param_1;
  *(undefined4 *)((intptr_t)this + (*(int *)((intptr_t)this + 0x1c8) * 0x10 + param_2 + 1) * 4 + 0x48) = 0;
  if (param_3 != '\0') {
    *(int *)((intptr_t)this + 0x1c8) = *(int *)((intptr_t)this + 0x1c8) + 1;
  }
  return;
}



/* Function: FUN_0044c820 @ 0x0044c820 */

int __thiscall FUN_0044c820(void *this,uint param_1,int param_2,char param_3)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044c990 @ 0x0044c990 */

int __thiscall FUN_0044c990(void *this,uint param_1,int param_2,char param_3)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044cb00 @ 0x0044cb00 */

void __thiscall FUN_0044cb00(void *this,int param_1,int param_2,char param_3)

{
    /* TODO: 15 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0044cb70 @ 0x0044cb70 */

int __thiscall
FUN_0044cb70(void *this,uint param_1,uint param_2,char param_3,int param_4,char param_5)

{
    /* TODO: 189 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d170 @ 0x0044d170 */

int __thiscall FUN_0044d170(void *this,int param_1,int param_2,int param_3,char param_4)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d200 @ 0x0044d200 */

int __thiscall
FUN_0044d200(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
    /* TODO: 26 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d2a0 @ 0x0044d2a0 */

int __thiscall
FUN_0044d2a0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
    /* TODO: 38 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d400 @ 0x0044d400 */

int FUN_0044d400(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  iVar1 = rand();
  iVar1 = (iVar1 % ((param_2 - param_1) / param_3 + 1)) * param_3 + param_1;
  iVar2 = rand();
  iVar2 = iVar2 % (iVar1 + -1) + 1;
  *param_4 = iVar2;
  *param_5 = iVar1 - iVar2;
  return iVar1;
}



/* Function: FUN_0044d460 @ 0x0044d460 */

int FUN_0044d460(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  *param_4 = 0;
  *param_5 = 0;
  while ((*param_4 == 0 || (*param_5 == 0))) {
    if (((param_6 == -1) || (param_7 == -1)) && ((param_8 == -1 || (param_9 == -1)))) {
      iVar2 = rand();
      local_8 = param_1 + (iVar2 % ((param_2 - param_1) / param_3)) * param_3;
      iVar2 = rand();
      iVar2 = iVar2 % (param_2 - local_8) + local_8;
      *param_4 = iVar2;
      *param_5 = iVar2 - local_8;
    }
    else if ((param_6 == -1) || (param_7 == -1)) {
      iVar2 = rand();
      local_8 = param_1 + (iVar2 % ((param_2 - param_1) / param_3)) * param_3;
      iVar2 = rand();
      *param_5 = param_8 + iVar2 % (param_9 - param_8);
      *param_4 = local_8 - *param_5;
    }
    else if ((param_8 == -1) || (param_9 == -1)) {
      do {
        do {
          iVar2 = rand();
          local_8 = param_1 + (iVar2 % ((param_2 - param_1) / param_3)) * param_3;
          iVar2 = rand();
          iVar2 = iVar2 % (param_7 - param_6) + param_6;
          *param_4 = iVar2;
          iVar2 = iVar2 - local_8;
          *param_5 = iVar2;
        } while (*param_4 < param_6);
      } while (iVar2 < param_6);
    }
    else {
      do {
        iVar2 = rand();
        *param_4 = iVar2 % (param_7 - param_6) + param_6;
        iVar2 = rand();
        iVar2 = param_8 + iVar2 % (param_9 - param_8);
        *param_5 = iVar2;
      } while (iVar2 == *param_4);
      iVar1 = *param_4;
      if (iVar1 < iVar2) {
        *param_4 = iVar2;
        *param_5 = iVar1;
      }
      local_8 = *param_4 - *param_5;
    }
  }
  return local_8;
}



/* Function: FUN_0044d610 @ 0x0044d610 */

int FUN_0044d610(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d700 @ 0x0044d700 */

int FUN_0044d700(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6,
                int param_7,int param_8,int param_9)

{
    /* TODO: 62 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044d900 @ 0x0044d900 */

int FUN_0044d900(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = rand();
  iVar1 = param_1 + iVar1 % ((param_2 - param_1) + 1);
  *param_4 = 100;
  *param_3 = (iVar1 * 100) / 100;
  return iVar1;
}



/* Function: FUN_0044d950 @ 0x0044d950 */

uint __thiscall FUN_0044d950(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 1;
  uVar1 = (uint)*(short *)(DAT_0048345c + 0x3a + ((int)(short)param_2 + (short)param_3 * 6) * 2);
  iVar6 = 0;
  *(uint *)((intptr_t)this + 0x1cc) = uVar1;
  psVar2 = (short *)(&DAT_004802a8 + (param_3 + param_2 * 6) * 0xe0);
  do {
    uVar4 = uVar4 * 2;
    if ((uVar1 & uVar4) == 0) {
      iVar5 = 0;
      psVar3 = psVar2;
      do {
        if (*psVar3 == 0) break;
        if (param_1 == *psVar3) {
          return CONCAT31((unsigned int)((uint)psVar2 >> 8),1);
        }
        psVar3 = psVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
    }
    psVar2 = psVar2 + 0x10;
    iVar6 = iVar6 + 1;
    if (6 < iVar6) {
      return (uint)psVar2 & 0xffffff00;
    }
  } while( true );
}



/* Function: FUN_0044da30 @ 0x0044da30 */

char * __fastcall FUN_0044da30(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    pcVar2 = (char *)**(undefined4 **)(param_1 + 4);
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
  }
  return pcVar2;
}



/* Function: FUN_0044da50 @ 0x0044da50 */

undefined1 FUN_0044da50(void)

{
  return 1;
}



/* Function: FUN_0044da60 @ 0x0044da60 */

void FUN_0044da60(void)

{
  SetFocus(*(HWND *)(*(int *)(DAT_004897c0 + 6) + 0xe));
  return;
}



/* Function: FUN_0044da80 @ 0x0044da80 */

void __cdecl FUN_0044da80(int param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  HDC hdc;
  HGDIOBJ pvVar2;
  DOCINFOA local_14;
  
  if (*(HGLOBAL *)(param_1 + 4) != (HGLOBAL)0x0) {
    puVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 4));
    hdc = CreateDCA((LPCSTR)((uint)*puVar1 + (int)puVar1),(LPCSTR)((uint)puVar1[1] + (int)puVar1),
                    (LPCSTR)((uint)puVar1[2] + (int)puVar1),(DEVMODEA *)0x0);
    GlobalUnlock(*(HGLOBAL *)(param_1 + 4));
    *(HDC *)(param_3 + 4) = hdc;
    if (hdc != (HDC)0x0) {
      local_14.cbSize = 0x14;
      local_14.lpszDocName = s_A_MONSTER_004828a0;
      local_14.lpszOutput = (LPCSTR)0x0;
      pvVar2 = GetStockObject(5);
      SelectObject(hdc,pvVar2);
      pvVar2 = GetStockObject(7);
      SelectObject(hdc,pvVar2);
      StartDocA(hdc,&local_14);
    }
  }
  return;
}



/* Function: FUN_0044db20 @ 0x0044db20 */

void __cdecl FUN_0044db20(int param_1)

{
  if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
    EndDoc(*(HDC *)(param_1 + 4));
    DeleteDC(*(HDC *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_0044db50 @ 0x0044db50 */

void __cdecl FUN_0044db50(int param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
    StartPage(*(HDC *)(param_1 + 4));
    pvVar1 = GetStockObject(5);
    SelectObject(*(HDC *)(param_1 + 4),pvVar1);
    pvVar1 = GetStockObject(7);
    SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  }
  return;
}



/* Function: FUN_0044db90 @ 0x0044db90 */

void __cdecl FUN_0044db90(int param_1)

{
  if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
    EndPage(*(HDC *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0044dbb0 @ 0x0044dbb0 */

bool __cdecl FUN_0044dbb0(int param_1,undefined4 *param_2)

{
    /* TODO: 23 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044dc20 @ 0x0044dc20 */

undefined4 __cdecl FUN_0044dc20(int param_1,undefined4 *param_2)

{
    /* TODO: 24 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044dcb0 @ 0x0044dcb0 */

void FUN_0044dcb0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488f90,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044dd00 @ 0x0044dd00 */

void FUN_0044dd00(void)

{
  return;
}



/* Function: FUN_0044dd20 @ 0x0044dd20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dd20(void)

{
  _DAT_00488f9e = 0;
  _DAT_00488f9c = 0;
  return;
}



/* Function: FUN_0044dd30 @ 0x0044dd30 */

void FUN_0044dd30(void)

{
  _atexit(FUN_0044dd40);
  return;
}



/* Function: FUN_0044dd40 @ 0x0044dd40 */

void FUN_0044dd40(void)

{
  return;
}



/* Function: FUN_0044dd60 @ 0x0044dd60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dd60(void)

{
  _DAT_00488f9a = 0;
  _DAT_00488f98 = 0;
  return;
}



/* Function: FUN_0044dd70 @ 0x0044dd70 */

void FUN_0044dd70(void)

{
  _atexit(FUN_0044dd80);
  return;
}



/* Function: FUN_0044dd80 @ 0x0044dd80 */

void FUN_0044dd80(void)

{
  return;
}



/* Function: FUN_0044dd90 @ 0x0044dd90 */

undefined4 * __fastcall FUN_0044dd90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044dde4;
  *unaff_FS_OFFSET = &local_10;
  FUN_004534e0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00475f90;
  FUN_0041da90(param_1,1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0044de59 @ 0x0044de59 */

void FUN_0044de59(void)

{
  FUN_00427c00();
  return;
}



/* Function: FUN_0044de70 @ 0x0044de70 */

undefined2 FUN_0044de70(void *param_1,short param_2)

{
    /* TODO: 180 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044e2c0 @ 0x0044e2c0 */

void FUN_0044e2c0(void)

{
  return;
}



/* Function: FUN_0044e2d5 @ 0x0044e2d5 */

void FUN_0044e2d5(void)

{
  return;
}



/* Function: FUN_0044e2dd @ 0x0044e2dd */

void FUN_0044e2dd(void)

{
  return;
}



/* Function: FUN_0044e2ef @ 0x0044e2ef */

void FUN_0044e2ef(void)

{
  return;
}



/* Function: FUN_0044e310 @ 0x0044e310 */

void FUN_0044e310(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488fa0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044e360 @ 0x0044e360 */

void FUN_0044e360(void)

{
  return;
}



/* Function: FUN_0044e380 @ 0x0044e380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e380(void)

{
  _DAT_00488fae = 0;
  _DAT_00488fac = 0;
  return;
}



/* Function: FUN_0044e390 @ 0x0044e390 */

void FUN_0044e390(void)

{
  _atexit(FUN_0044e3a0);
  return;
}



/* Function: FUN_0044e3a0 @ 0x0044e3a0 */

void FUN_0044e3a0(void)

{
  return;
}



/* Function: FUN_0044e3c0 @ 0x0044e3c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e3c0(void)

{
  _DAT_00488faa = 0;
  _DAT_00488fa8 = 0;
  return;
}



/* Function: FUN_0044e3d0 @ 0x0044e3d0 */

void FUN_0044e3d0(void)

{
  _atexit(FUN_0044e3e0);
  return;
}



/* Function: FUN_0044e3e0 @ 0x0044e3e0 */

void FUN_0044e3e0(void)

{
  return;
}



/* Function: FUN_0044e3f0 @ 0x0044e3f0 */

undefined4 * __fastcall FUN_0044e3f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044e44b;
  *unaff_FS_OFFSET = &local_10;
  FUN_004052b0(param_1);
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 0x10a) = 1;
  *param_1 = &PTR_FUN_00476038;
  FUN_0041da90(param_1,1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0044e4b9 @ 0x0044e4b9 */

void FUN_0044e4b9(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0044e520 @ 0x0044e520 */

void FUN_0044e520(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488fb0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044e570 @ 0x0044e570 */

void FUN_0044e570(void)

{
  return;
}



/* Function: FUN_0044e590 @ 0x0044e590 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e590(void)

{
  _DAT_00488fbe = 0;
  _DAT_00488fbc = 0;
  return;
}



/* Function: FUN_0044e5a0 @ 0x0044e5a0 */

void FUN_0044e5a0(void)

{
  _atexit(FUN_0044e5b0);
  return;
}



/* Function: FUN_0044e5b0 @ 0x0044e5b0 */

void FUN_0044e5b0(void)

{
  return;
}



/* Function: FUN_0044e5d0 @ 0x0044e5d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e5d0(void)

{
  _DAT_00488fba = 0;
  _DAT_00488fb8 = 0;
  return;
}



/* Function: FUN_0044e5e0 @ 0x0044e5e0 */

void FUN_0044e5e0(void)

{
  _atexit(FUN_0044e5f0);
  return;
}



/* Function: FUN_0044e5f0 @ 0x0044e5f0 */

void FUN_0044e5f0(void)

{
  return;
}



/* Function: FUN_0044e600 @ 0x0044e600 */

void __fastcall FUN_0044e600(undefined4 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 3);
  param_1[3] = CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                        CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                                 (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8)));
  uVar1 = *(undefined2 *)(param_1 + 2);
  param_1[2] = CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                        CONCAT11((char)*(undefined2 *)((int)param_1 + 10),
                                 (char)((ushort)*(undefined2 *)((int)param_1 + 10) >> 8)));
  uVar1 = *(undefined2 *)(param_1 + 1);
  param_1[1] = CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                        CONCAT11((char)*(undefined2 *)((int)param_1 + 6),
                                 (char)((ushort)*(undefined2 *)((int)param_1 + 6) >> 8)));
  *param_1 = CONCAT22(CONCAT11((char)*(undefined2 *)param_1,
                               (char)((ushort)*(undefined2 *)param_1 >> 8)),
                      CONCAT11((char)*(undefined2 *)((int)param_1 + 2),
                               (char)((ushort)*(undefined2 *)((int)param_1 + 2) >> 8)));
  uVar1 = *(undefined2 *)(param_1 + 4);
  param_1[4] = CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                        CONCAT11((char)*(undefined2 *)((int)param_1 + 0x12),
                                 (char)((ushort)*(undefined2 *)((int)param_1 + 0x12) >> 8)));
  uVar1 = *(undefined2 *)(param_1 + 5);
  *(ushort *)(param_1 + 5) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = *(undefined2 *)((int)param_1 + 0x16);
  *(undefined2 *)((int)param_1 + 0x16) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  return;
}



/* Function: FUN_0044e6d0 @ 0x0044e6d0 */

void FUN_0044e6d0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488fc0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044e720 @ 0x0044e720 */

void FUN_0044e720(void)

{
  return;
}



/* Function: FUN_0044e740 @ 0x0044e740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e740(void)

{
  _DAT_00488fce = 0;
  _DAT_00488fcc = 0;
  return;
}



/* Function: FUN_0044e750 @ 0x0044e750 */

void FUN_0044e750(void)

{
  _atexit(FUN_0044e760);
  return;
}



/* Function: FUN_0044e760 @ 0x0044e760 */

void FUN_0044e760(void)

{
  return;
}



/* Function: FUN_0044e780 @ 0x0044e780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e780(void)

{
  _DAT_00488fca = 0;
  _DAT_00488fc8 = 0;
  return;
}



/* Function: FUN_0044e790 @ 0x0044e790 */

void FUN_0044e790(void)

{
  _atexit(FUN_0044e7a0);
  return;
}



/* Function: FUN_0044e7a0 @ 0x0044e7a0 */

void FUN_0044e7a0(void)

{
  return;
}



/* Function: FUN_0044e7b0 @ 0x0044e7b0 */

undefined4 * __fastcall FUN_0044e7b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044e7ff;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417c70(param_1);
  *param_1 = &PTR_LAB_004760e0;
  param_1[4] = 0;
  param_1[5] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0044e820 @ 0x0044e820 */

undefined4 * __thiscall FUN_0044e820(void *this,byte param_1)

{
  FUN_0044e840(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0044e840 @ 0x0044e840 */

void __fastcall FUN_0044e840(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0044e889;
  *param_1 = &PTR_LAB_004760e0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0044e990((int)param_1);
  local_8 = 0xffffffff;
  FUN_0044e893();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0044e893 @ 0x0044e893 */

void FUN_0044e893(void)

{
  int unaff_EBP;
  
  FUN_00417cc0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0044e8a0 @ 0x0044e8a0 */

undefined4 __thiscall FUN_0044e8a0(void *this,short param_1,short param_2)

{
    /* TODO: 34 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044e990 @ 0x0044e990 */

void __fastcall FUN_0044e990(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x10) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(HGDIOBJ *)(param_1 + 0x14) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Function: FUN_0044ea40 @ 0x0044ea40 */

undefined4 __fastcall FUN_0044ea40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 4));
  }
  return 0;
}



/* Function: FUN_0044ea70 @ 0x0044ea70 */

undefined4 __fastcall FUN_0044ea70(int param_1)

{
  short sVar1;
  int iVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = (undefined2)((uint)iVar2 >> 0x10);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    sVar1 = *(short *)(iVar2 + 8);
    uVar3 = CONCAT22(uVar4,sVar1);
    if (sVar1 < 0) {
      return CONCAT22(uVar4,-sVar1);
    }
  }
  return uVar3;
}



/* Function: FUN_0044eac0 @ 0x0044eac0 */

int __fastcall FUN_0044eac0(int *param_1)

{
    /* TODO: 9 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044eb00 @ 0x0044eb00 */

undefined2 FUN_0044eb00(void)

{
  return 0x100;
}



/* Function: FUN_0044eb10 @ 0x0044eb10 */

void __thiscall FUN_0044eb10(void *this,void *param_1,char param_2)

{
  FUN_0041abd0(this,param_1,param_2);
  FUN_0044eb30(this,(int)param_1);
  return;
}



/* Function: FUN_0044eb30 @ 0x0044eb30 */

void __thiscall FUN_0044eb30(void *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  piVar2 = *(int **)((intptr_t)this + 0x10);
  iVar3 = *piVar2;
  piVar2[8] = 0x100;
  sVar4 = 0;
  do {
    iVar5 = (int)sVar4;
    sVar4 = sVar4 + 1;
    iVar5 = iVar5 * 4;
    puVar1 = (undefined1 *)((int)piVar2 + iVar5 + iVar3);
    puVar1[2] = *(undefined1 *)(iVar5 + 6 + param_1);
    puVar1[1] = *(undefined1 *)(iVar5 + param_1 + 7);
    *puVar1 = *(undefined1 *)(iVar5 + param_1 + 8);
    puVar1[3] = 0;
  } while (sVar4 < 0x100);
  FUN_0044ebe0((intptr_t)this);
  return;
}



/* Function: FUN_0044ebe0 @ 0x0044ebe0 */

char __fastcall FUN_0044ebe0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  LOGPALETTE *pLVar3;
  HLOCAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar4;
  int iVar5;
  BYTE *pBVar6;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    return '\0';
  }
  if (**(int **)(param_1 + 0x10) == 0x28) {
    if (*(HGDIOBJ *)(param_1 + 0x14) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
    }
    puVar2 = *(ushort **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar1 = *puVar2;
    hMem = LocalAlloc(0x40,0x408);
    if (hMem != (HLOCAL)0x0) {
      plpal = LocalLock(hMem);
      iVar5 = 0x100;
      plpal->palNumEntries = 0x100;
      plpal->palVersion = 0x300;
      pBVar6 = (BYTE *)((int)puVar2 + uVar1 + 2);
      pLVar3 = plpal;
      do {
        iVar5 = iVar5 + -1;
        pLVar3->palPalEntry[0].peRed = *pBVar6;
        pLVar3->palPalEntry[0].peGreen = pBVar6[-1];
        pLVar3->palPalEntry[0].peBlue = pBVar6[-2];
        pLVar3->palPalEntry[0].peFlags = '\0';
        pBVar6 = pBVar6 + 4;
        pLVar3 = (LOGPALETTE *)pLVar3->palPalEntry;
      } while (iVar5 != 0);
      pHVar4 = CreatePalette(plpal);
      *(HPALETTE *)(param_1 + 0x14) = pHVar4;
      LocalUnlock(hMem);
      LocalFree(hMem);
      return '\x01' - (*(int *)(param_1 + 0x14) == 0);
    }
    return '\0';
  }
  return '\0';
}



/* Function: FUN_0044eca0 @ 0x0044eca0 */

uint __thiscall FUN_0044eca0(void *this,int param_1,char param_2,byte param_3)

{
    /* TODO: 225 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044f0de @ 0x0044f0de */

void FUN_0044f0de(void)

{
  return;
}



/* Function: FUN_0044f0f0 @ 0x0044f0f0 */

void FUN_0044f0f0(void)

{
  return;
}



/* Function: FUN_0044f140 @ 0x0044f140 */

void FUN_0044f140(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488fd0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044f190 @ 0x0044f190 */

void FUN_0044f190(void)

{
  return;
}



/* Function: FUN_0044f1b0 @ 0x0044f1b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f1b0(void)

{
  _DAT_00488fde = 0;
  _DAT_00488fdc = 0;
  return;
}



/* Function: FUN_0044f1c0 @ 0x0044f1c0 */

void FUN_0044f1c0(void)

{
  _atexit(FUN_0044f1d0);
  return;
}



/* Function: FUN_0044f1d0 @ 0x0044f1d0 */

void FUN_0044f1d0(void)

{
  return;
}



/* Function: FUN_0044f1f0 @ 0x0044f1f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f1f0(void)

{
  _DAT_00488fda = 0;
  _DAT_00488fd8 = 0;
  return;
}



/* Function: FUN_0044f200 @ 0x0044f200 */

void FUN_0044f200(void)

{
  _atexit(FUN_0044f210);
  return;
}



/* Function: FUN_0044f210 @ 0x0044f210 */

void FUN_0044f210(void)

{
  return;
}



/* Function: FUN_0044f230 @ 0x0044f230 */

void FUN_0044f230(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488fe0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044f270 @ 0x0044f270 */

void FUN_0044f270(void)

{
  _atexit(FUN_0044f280);
  return;
}



/* Function: FUN_0044f280 @ 0x0044f280 */

void FUN_0044f280(void)

{
  return;
}



/* Function: FUN_0044f2a0 @ 0x0044f2a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f2a0(void)

{
  _DAT_00488fee = 0;
  _DAT_00488fec = 0;
  return;
}



/* Function: FUN_0044f2b0 @ 0x0044f2b0 */

void FUN_0044f2b0(void)

{
  _atexit(FUN_0044f2c0);
  return;
}



/* Function: FUN_0044f2c0 @ 0x0044f2c0 */

void FUN_0044f2c0(void)

{
  return;
}



/* Function: FUN_0044f2e0 @ 0x0044f2e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f2e0(void)

{
  _DAT_00488fea = 0;
  _DAT_00488fe8 = 0;
  return;
}



/* Function: FUN_0044f2f0 @ 0x0044f2f0 */

void FUN_0044f2f0(void)

{
  _atexit(FUN_0044f300);
  return;
}



/* Function: FUN_0044f300 @ 0x0044f300 */

void FUN_0044f300(void)

{
  return;
}



/* Function: FUN_0044f310 @ 0x0044f310 */

undefined1 __cdecl FUN_0044f310(undefined4 *param_1)

{
    /* TODO: 202 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044f6c4 @ 0x0044f6c4 */

void FUN_0044f6c4(void)

{
  return;
}



/* Function: FUN_0044f6e0 @ 0x0044f6e0 */

void FUN_0044f6e0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488ff0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0044f730 @ 0x0044f730 */

void FUN_0044f730(void)

{
  return;
}



/* Function: FUN_0044f740 @ 0x0044f740 */

undefined4 * __fastcall FUN_0044f740(undefined4 *param_1)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0044f840 @ 0x0044f840 */

void __thiscall FUN_0044f840(MathProblem *this,int param_1)

{
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (6 < param_1) {
    param_1 = 6;
  }
  this->difficulty = param_1;
  this->field_1cc = (int)*(short *)(DAT_0048345c + 0x44 + (short)param_1 * 0xc);
  this->problem_type = param_1 << 4;
  (**(void (**)(void))(*(int *)this + 4))();
  return;
}



/* Function: FUN_0044f890 @ 0x0044f890 */

int __fastcall FUN_0044f890(void *param_1)

{
    /* TODO: 1184 lines - has decompilation artifacts */
    return 0;
}



