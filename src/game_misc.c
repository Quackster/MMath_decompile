/*
 * game_misc.c - Miscellaneous utilities
 * Address range: 0x460000 - 0x46FFFF
 * Functions: 293
 *
 * Auto-generated from decompilation of MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* Function: FUN_00460010 @ 0x00460010 */

void __fastcall FUN_00460010(void **param_1)

{
  *param_1 = &PTR_FUN_0047771c;
  FUN_00460400(param_1);
  return;
}



/* Function: FUN_00460020 @ 0x00460020 */

int __thiscall FUN_00460020(void *this,char param_1)

{
    /* TODO: 11 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00460050 @ 0x00460050
 * TODO: param_1 is a resource object with heap handles at offsets 0x10, 0x14, 0x18
 *       FUN_0046e4a0 destroys heap handles.
 */

void __fastcall FUN_00460050(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0046e4a0(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0046e4a0(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0046e4a0(*(int *)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00460080 @ 0x00460080
 * Struct types: MathProblem (this)
 * TODO: offset 0x18 falls in _pad15 region of MathProblem
 */

int __thiscall FUN_00460080(MathProblem *this,uint param_1)

{
  int iVar1;

  iVar1 = *(int *)((intptr_t)this + 0x18); /* TODO: unknown offset 0x18 on MathProblem (_pad15 region) */
  if (param_1 != 0) {
    if ((param_1 < 0x1001) && (this->field_10 != 0)) {
      return this->field_10;
    }
    if ((param_1 < 0x8001) && (this->field_14 != 0)) {
      iVar1 = this->field_14;
    }
  }
  return iVar1;
}



/* Function: FUN_004600c0 @ 0x004600c0 */

ushort * __thiscall FUN_004600c0(void *this,uint param_1,uint param_2)

{
  LPCVOID pvVar1;
  ushort *puVar2;
  
  if (param_1 == 0) {
    return (ushort *)0x0;
  }
  pvVar1 = (LPCVOID)FUN_00460080(this,param_1);
  puVar2 = FUN_0046f060(pvVar1,param_1,param_2);
  return puVar2;
}



/* Function: FUN_004600f0 @ 0x004600f0 */

uint __thiscall FUN_004600f0(void *this,char *param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort *puVar4;
  uint uVar5;
  HANDLE pvVar6;
  int uVar7;

  FUN_00460020(this,'\x01');
  iVar2 = (uint)param_2 * 0xe;
  uVar1 = iVar2 + 0x1a;
  puVar4 = FUN_004600c0(this,uVar1,0);
  uVar5 = FUN_004527f0(param_1);
  if ((char)uVar5 == '\0') {
    return uVar5 & 0xffffff00;
  }
  pvVar6 = FUN_00452850(param_1,0,2);
  if (pvVar6 == (HANDLE)0x0) {
    return 0;
  }
  puVar4[0] = 0x4e49;
  puVar4[1] = 0x5844;
  puVar4[2] = 0x656d;
  puVar4[3] = 0x6174;
  *(int *)(puVar4 + 4) = iVar2 + 0xe;
  bVar3 = 1;
  puVar4[6] = 0;
  puVar4[7] = param_2;
  puVar4[8] = 7;
  puVar4[9] = 0x4e49;
  puVar4[10] = 0x5844;
  puVar4[0xb] = 0x3f3f;
  puVar4[0xc] = 0x3f3f;
  if (param_2 != 0) {
    do {
      uVar5 = (uint)bVar3;
      bVar3 = bVar3 + 1;
      puVar4[uVar5 * 7 + 6] = 0;
      (puVar4 + uVar5 * 7 + 7)[0] = 0;
      (puVar4 + uVar5 * 7 + 7)[1] = 0;
      (puVar4 + uVar5 * 7 + 9)[0] = 0;
      (puVar4 + uVar5 * 7 + 9)[1] = 0;
      (puVar4 + uVar5 * 7 + 0xb)[0] = 0;
      (puVar4 + uVar5 * 7 + 0xb)[1] = 0;
    } while ((uint)bVar3 <= (uint)param_2);
  }
  FUN_0045feb0((int)puVar4,'\x01');
  FUN_004528b0(pvVar6);
  FUN_00452970(pvVar6,uVar1,puVar4);
  FUN_0045feb0((int)puVar4,'\0');
  FUN_0046f5f0((uint)puVar4);
  uVar7 = FUN_004529c0(pvVar6);
  return CONCAT31((unsigned int)((uint)uVar7 >> 8),1);
}



/* Function: FUN_00460220 @ 0x00460220 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * __thiscall
FUN_00460220(void *this,char *param_1,int param_2,char param_3,int param_4)

{
    /* TODO: 100 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00460400 @ 0x00460400 */

uint __fastcall FUN_00460400(void *param_1)

{
    /* TODO: 56 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00460510 @ 0x00460510 */

byte __thiscall
FUN_00460510(void *this,ushort param_1,ushort param_2,int param_3,int param_4)

{
    /* TODO: 65 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00460670 @ 0x00460670 */

char __thiscall FUN_00460670(void *this,uint param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ushort *local_4;

  if ((byte)param_1 == 0) {
    *param_2 = *(int *)(*(int *)((intptr_t)this + 0xc) + 8) + 0xc; /* TODO: custom internal struct via offset 0xc */
    *param_3 = 0;
    return '\x01';
  }
  iVar2 = (param_1 & 0xff) * 0xe + *(int *)((intptr_t)this + 0xc); /* TODO: custom internal struct via offset 0xc */
  if (((unsigned short)((param_1) >> 16)) != 0) {
    local_4 = FUN_004608a0(this,(byte)param_1);
    cVar1 = FUN_00460730(param_1,(int)local_4,param_2,param_3);
    FUN_004609a0(&local_4);
    return cVar1;
  }
  uVar3 = *(uint *)(iVar2 + 0x12) & 0x3fffffff;
  *param_2 = *(uint *)(iVar2 + 0xe) & 0x7fffffff;
  *param_3 = uVar3;
  return '\x01' - (uVar3 == 0);
}



/* Function: FUN_00460730 @ 0x00460730 */

char FUN_00460730(uint param_1,int param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((((unsigned short)((param_1) >> 16)) != 0) && (((unsigned short)((param_1) >> 16)) <= *(ushort *)(param_2 + 0xe))) {
    iVar1 = param_2 + (uint)((unsigned short)((param_1) >> 16)) * 0xe;
    *param_3 = *(uint *)(iVar1 + 0xe) & 0x7fffffff;
    uVar2 = *(uint *)(iVar1 + 0x12) & 0x3fffffff;
    *param_4 = uVar2;
    return '\x01' - (uVar2 == 0);
  }
  return '\0';
}



/* Function: FUN_00460780 @ 0x00460780 */

ushort * __thiscall FUN_00460780(void *this,uint param_1)

{
  ushort *puVar1;
  uint local_8;
  uint local_4;
  
  FUN_00460670(this,param_1,&local_8,&local_4);
  puVar1 = FUN_004600c0(this,local_8,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_004610e0(this,param_1,puVar1);
  }
  return puVar1;
}



/* Function: FUN_004607d0 @ 0x004607d0 */

ushort * __thiscall FUN_004607d0(void *this,int param_1,ushort *param_2,ushort *param_3,int param_4)

{
  HANDLE pvVar1;
  uint local_8;
  uint local_4;
  
  if (param_1 == 0) {
    return (ushort *)0x0;
  }
  FUN_00461130(this,param_1,&local_8,&local_4,param_3);
  if (local_8 < 0x1e8481) {
    if (local_4 != 0) {
      if (param_2 == (ushort *)0x0) {
        if (local_8 != 0) {
          param_2 = FUN_004600c0(this,local_8,0);
        }
        if (param_2 == (ushort *)0x0) {
          return (ushort *)0x0;
        }
      }
      if (local_8 != 0) {
        pvVar1 = (HANDLE)FUN_00462160(this,param_1);
        local_4 = local_4 + param_4;
        local_8 = local_8 - param_4;
        FUN_004178e0(pvVar1,local_4);
        FUN_004179a0(pvVar1,local_8,param_2);
        return param_2;
      }
    }
    return (ushort *)0x0;
  }
  return (ushort *)0x0;
}



/* Function: FUN_004608a0 @ 0x004608a0 */

ushort * __thiscall FUN_004608a0(void *this,byte param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint local_8;
  
  if (param_1 != 0) {
    uVar1 = (ushort)param_1;
    if (uVar1 <= *(ushort *)(*(int *)((intptr_t)this + 0xc) + 0xc)) {
      puVar4 = (ushort *)0x0;
      if (param_1 != 0) {
        puVar4 = *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + (uint)uVar1 * 0xe);
      }
      if (puVar4 == (ushort *)0x0) {
        local_8 = (uint)param_1;
        puVar4 = FUN_00460780(this,local_8);
        if (puVar4 == (ushort *)0x0) {
          return (ushort *)0x0;
        }
        uVar3 = 0;
        if (puVar4 != (ushort *)0x0) {
          FUN_0045feb0((int)puVar4,'\0');
          if (puVar4[6] != 0) {
            do {
              uVar2 = (short)uVar3 + 1;
              (puVar4 + uVar3 * 7 + 0x12)[0] = 0;
              (puVar4 + uVar3 * 7 + 0x12)[1] = 0;
              puVar4[uVar3 * 7 + 0xd] = 0;
              uVar3 = (uint)uVar2;
            } while (uVar2 < puVar4[6]);
          }
          if (param_1 != 0) {
            *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + (uint)uVar1 * 0xe) = puVar4;
            *(short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (uint)uVar1 * 0xe) = 0;
          }
        }
      }
      return puVar4;
    }
  }
  return (ushort *)0x0;
}



/* Function: FUN_004609a0 @ 0x004609a0 */

void FUN_004609a0(int *param_1)

{
  *param_1 = 0;
  return;
}



/* Function: FUN_004609b0 @ 0x004609b0 */

uint FUN_004609b0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint __reg_eax;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 <= *(ushort *)(param_1 + 0xc)) {
    return __reg_eax & 0xffff0000;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(param_1 + 0x20 + uVar3 * 0xe) == 0) {
        return (uint)(ushort)((short)uVar3 + 1);
      }
      uVar2 = (short)uVar3 + 1;
      uVar3 = (uint)uVar2;
    } while (uVar2 < uVar1);
  }
  return 0;
}



/* Function: FUN_00460a00 @ 0x00460a00 */

byte __thiscall FUN_00460a00(void *this,int param_1,int param_2)

{
  byte bVar1;
  ushort *local_4;
  
  bVar1 = 1;
  if (*(short *)(*(int *)((intptr_t)this + 0xc) + 0xc) != 0) {
    do {
      local_4 = FUN_004608a0(this,bVar1);
      if ((*(int *)(local_4 + 9) == param_1) && (*(int *)(local_4 + 0xb) == param_2)) {
        FUN_004609a0(&local_4);
        return bVar1;
      }
      bVar1 = bVar1 + 1;
      FUN_004609a0(&local_4);
    } while ((ushort)bVar1 <= *(ushort *)(*(int *)((intptr_t)this + 0xc) + 0xc));
  }
  return 0;
}



/* Function: FUN_00460a80 @ 0x00460a80 */

void __thiscall FUN_00460a80(void *this,int param_1)

{
  FUN_00460a00(this,0x41544144,param_1);
  return;
}



/* Function: FUN_00460aa0 @ 0x00460aa0 */

int __thiscall FUN_00460aa0(void *this,char *param_1,int param_2)

{
    /* TODO: 11 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00460ac0 @ 0x00460ac0 */

void __thiscall
FUN_00460ac0(void *this,int *param_1,LPCVOID param_2,DWORD param_3,byte param_4)

{
    /* TODO: 22 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00460b50 @ 0x00460b50 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00460b50(void *this,uint *param_1,LPCVOID param_2,DWORD param_3,uint param_4,int param_5,
            int param_6,ushort *param_7)

{
    /* TODO: 116 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00460e60 @ 0x00460e60 */

void __thiscall FUN_00460e60(void *this,uint *param_1,uint param_2,LPCVOID param_3,uint param_4)

{
    /* TODO: 58 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00461000 @ 0x00461000 */

void FUN_00461000(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489b18,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_00461050 @ 0x00461050 */

void FUN_00461050(void)

{
  return;
}



/* Function: FUN_00461070 @ 0x00461070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461070(void)

{
  _DAT_00489b26 = 0;
  _DAT_00489b24 = 0;
  return;
}



/* Function: FUN_00461080 @ 0x00461080 */

void FUN_00461080(void)

{
  _atexit(FUN_00461090);
  return;
}



/* Function: FUN_00461090 @ 0x00461090 */

void FUN_00461090(void)

{
  return;
}



/* Function: FUN_004610a0 @ 0x004610a0 */

short __thiscall FUN_004610a0(void *this,byte param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *local_4;
  
  local_4 = FUN_004608a0(this,param_1);
  uVar1 = local_4[7];
  uVar2 = local_4[6];
  FUN_004609a0(&local_4);
  return uVar1 - uVar2;
}



/* Function: FUN_004610e0 @ 0x004610e0 */

uint __thiscall FUN_004610e0(void *this,uint param_1,LPVOID param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  uint local_8;
  DWORD local_4;
  
  FUN_00460670(this,param_1,&local_4,&local_8);
  pvVar1 = (HANDLE)FUN_00462160(this,param_1);
  uVar2 = FUN_00461270(param_2,local_4,local_8,pvVar1);
  return uVar2 & 0xffffff00;
}



/* Function: FUN_00461130 @ 0x00461130 */

void __thiscall
FUN_00461130(void *this,uint param_1,uint *param_2,uint *param_3,ushort *param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  bVar2 = param_4 == (ushort *)0x0;
  if (bVar2) {
    param_4 = FUN_004608a0(this,(byte)param_1);
  }
  if (param_4 == (ushort *)0x0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  switch(param_4[8]) {
  case 0:
    iVar1 = 0;
    break;
  case 1:
  case 2:
  case 4:
    iVar1 = 4;
    break;
  case 3:
    iVar1 = 8;
    break;
  case 7:
    iVar1 = 0xc;
    break;
  case 8:
    iVar1 = 0x548;
  }
  FUN_00460730(param_1,(int)param_4,param_2,param_3);
  if ((*param_3 != 0) && (*param_2 != 0)) {
    *param_3 = *param_3 + iVar1;
    *param_2 = *param_2 - iVar1;
  }
  if (bVar2) {
    FUN_004609a0(&param_4);
  }
  return;
}



/* Function: FUN_00461240 @ 0x00461240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461240(void)

{
  _DAT_00489b22 = 0;
  _DAT_00489b20 = 0;
  return;
}



/* Function: FUN_00461250 @ 0x00461250 */

void FUN_00461250(void)

{
  _atexit(FUN_00461260);
  return;
}



/* Function: FUN_00461260 @ 0x00461260 */

void FUN_00461260(void)

{
  return;
}



/* Function: FUN_00461270 @ 0x00461270 */

int FUN_00461270(LPVOID param_1,DWORD param_2,uint param_3,HANDLE param_4)

{
    /* TODO: 6 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004612a0 @ 0x004612a0 */

time_t FUN_004612a0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  time_t tVar6;
  
  if (param_2 == (char *)0x0) {
    param_2 = s_Unnamed_Chunk_004839e4;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_chunk_of_unknown_origin_004839cc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x40;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  time((time_t *)(param_1 + 0x140));
  tVar6 = time((time_t *)(param_1 + 0x144));
  return tVar6;
}



/* Function: FUN_00461320 @ 0x00461320 */

char __thiscall FUN_00461320(void *this,int param_1,LPVOID param_2)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  char uVar4;
  ushort *local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = 0;
  local_c = FUN_004608a0(this,(byte)param_1);
  if (local_c == (ushort *)0x0) {
    return 0;
  }
  if (local_c[8] == 8) {
    cVar2 = FUN_00460730(param_1,(int)local_c,&local_4,&local_8);
    if (cVar2 != '\0') {
      FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),local_8);
      FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),0x548,param_2);
      sVar3 = 0;
      do {
        pcVar1 = (char *)(sVar3 + 0x148 + (int)param_2);
        if (*pcVar1 == -1) {
          *pcVar1 = '\x01';
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < 0x400);
      uVar4 = 1;
      *(char *)((int)param_2 + 0x3f) = 0; /* TODO: unknown struct for param_2 */
      *(char *)((int)param_2 + 0x13f) = 0; /* TODO: unknown struct for param_2 */
    }
  }
  FUN_004609a0(&local_c);
  return uVar4;
}



/* Function: FUN_004613e0 @ 0x004613e0 */

void FUN_004613e0(void)

{
  return;
}



/* Function: FUN_004613f0 @ 0x004613f0 */

void FUN_004613f0(void)

{
  return;
}



/* Function: FUN_00461400 @ 0x00461400 */

void FUN_00461400(void)

{
  return;
}



/* Function: FUN_00461410 @ 0x00461410 */

void __fastcall FUN_00461410(int param_1)

{
  FUN_004528c0(*(HANDLE *)(param_1 + 8));
  return;
}



/* Function: FUN_00461420 @ 0x00461420 */

int __thiscall FUN_00461420(void *this,uint param_1,char param_2)

{
    /* TODO: 39 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00461540 @ 0x00461540 */

ushort * __thiscall FUN_00461540(void *this,uint param_1)

{
  uint uVar1;
  ushort *puVar2;
  ushort *local_4;
  
  puVar2 = (ushort *)0x0;
  if (((unsigned short)((param_1) >> 16)) != 0) {
    if ((byte)param_1 == 0) {
      puVar2 = FUN_004608a0(this,(byte)((uint)param_1 >> 0x10));
      return puVar2;
    }
    local_4 = FUN_004608a0(this,(byte)param_1);
    if (local_4 != (ushort *)0x0) {
      if (((unsigned short)((param_1) >> 16)) <= local_4[7]) {
        uVar1 = (uint)((unsigned short)((param_1) >> 16));
        if ((*(int *)(local_4 + uVar1 * 7 + 9) != 0) && (local_4[uVar1 * 7 + 6] != 0)) {
          local_4[uVar1 * 7 + 6] = local_4[uVar1 * 7 + 6] + 1;
          puVar2 = *(ushort **)(local_4 + uVar1 * 7 + 0xb);
        }
      }
      FUN_004609a0(&local_4);
    }
  }
  return puVar2;
}



/* Function: FUN_004615d0 @ 0x004615d0 */

void __thiscall FUN_004615d0(void *this,uint param_1)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  ushort *local_4;
  
  if (((unsigned short)((param_1) >> 16)) != 0) {
    if ((byte)param_1 != 0) {
      local_4 = FUN_004608a0(this,(byte)param_1);
      if (local_4 != (ushort *)0x0) {
        uVar3 = (uint)((unsigned short)((param_1) >> 16));
        uVar2 = local_4[uVar3 * 7 + 6];
        if (uVar2 != 0) {
          local_4[uVar3 * 7 + 6] = uVar2 - 1;
          if (local_4[uVar3 * 7 + 6] == 0) {
            if (*(uint *)(local_4 + uVar3 * 7 + 0xb) != 0) {
              FUN_0046f5f0(*(uint *)(local_4 + uVar3 * 7 + 0xb));
            }
            (local_4 + uVar3 * 7 + 0xb)[0] = 0;
            (local_4 + uVar3 * 7 + 0xb)[1] = 0;
            psVar1 = (short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (param_1 & 0xff) * 0xe);
            *psVar1 = *psVar1 + -1;
          }
        }
        FUN_004609a0(&local_4);
      }
    }
  }
  return;
}



/* Function: FUN_00461670 @ 0x00461670 */

void __thiscall FUN_00461670(void *this,uint param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  ushort *local_4;
  
  if ((param_2 != 0) && (((unsigned short)((param_1) >> 16)) != 0)) {
    if ((byte)param_1 != 0) {
      local_4 = FUN_004608a0(this,(byte)param_1);
      if (local_4 != (ushort *)0x0) {
        uVar2 = (uint)((unsigned short)((param_1) >> 16));
        if ((local_4[uVar2 * 7 + 6] == 0) && (*(int *)(local_4 + uVar2 * 7 + 0xb) == 0)) {
          local_4[uVar2 * 7 + 6] = 1;
          *(int *)(local_4 + uVar2 * 7 + 0xb) = param_2;
          psVar1 = (short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (param_1 & 0xff) * 0xe);
          *psVar1 = *psVar1 + 1;
        }
        FUN_004609a0(&local_4);
      }
    }
  }
  return;
}



/* Function: FUN_00461700 @ 0x00461700 */

char __thiscall FUN_00461700(void *this,char *param_1,uint param_2)

{
    /* TODO: 81 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00461830 @ 0x00461830 */

char __thiscall FUN_00461830(GameWidget *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  char local_9;
  
  if (this->pos_x == 0) {
    return 0;
  }
  local_9 = 0;
  puVar4 = FUN_004608a0(this,(byte)param_1);
  if (puVar4 != (ushort *)0x0) {
    uVar3 = param_1 >> 0x10;
    uVar1 = *(uint *)(puVar4 + uVar3 * 7 + 9);
    if ((uVar1 & 0x80000000) != 0) {
      return 1;
    }
    uVar2 = this->child_list_2;
    uVar6 = *(uint *)(puVar4 + uVar3 * 7 + 7) & 0x7fffffff;
    if (uVar2 + uVar6 <= this->pos_w) {
      puVar5 = FUN_004600c0(this,uVar6,0);
      if (puVar5 != (ushort *)0x0) {
        FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),uVar1 & 0x3fffffff);
        FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),uVar6,puVar5);
        FUN_004178e0(this->pos_x,uVar2);
        FUN_00452970(this->pos_x,uVar6,puVar5);
        FUN_0046f5f0((uint)puVar5);
        this->child_list_2 = this->child_list_2 + uVar6;
        local_9 = 1;
        *(uint *)(puVar4 + uVar3 * 7 + 9) = uVar2;
        *(uint *)(puVar4 + uVar3 * 7 + 9) = uVar2 | 0xc0000000;
      }
    }
  }
  return local_9;
}



/* Function: FUN_00461940 @ 0x00461940 */

char __thiscall FUN_00461940(GameWidget *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  char local_d;
  ushort *local_4;
  
  if (this->pos_x == 0) {
    return 0;
  }
  local_d = 0;
  puVar4 = FUN_004608a0(this,(byte)param_1);
  if (puVar4 == (ushort *)0x0) {
    return 0;
  }
  uVar3 = param_1 >> 0x10;
  uVar1 = *(uint *)(puVar4 + uVar3 * 7 + 9);
  local_4 = puVar4;
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = this->pos_h;
    uVar6 = *(uint *)(puVar4 + uVar3 * 7 + 7) & 0x7fffffff;
    if ((this->pos_w < uVar6 + uVar2) ||
       (puVar5 = FUN_004600c0(this,uVar6,0), puVar5 == (ushort *)0x0)) goto __label_00461a2c;
    FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),uVar1 & 0x3fffffff);
    FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),uVar6,puVar5);
    FUN_004178e0(this->pos_x,uVar2);
    FUN_00452970(this->pos_x,uVar6,puVar5);
    FUN_0046f5f0((uint)puVar5);
    this->child_list_2 = this->child_list_2 + uVar6;
    this->pos_h = this->pos_h + uVar6;
    *(uint *)(puVar4 + uVar3 * 7 + 9) = uVar2;
    *(uint *)(puVar4 + uVar3 * 7 + 9) = uVar2 | 0x80000000;
  }
  local_d = 1;
__label_00461a2c:
  FUN_004609a0(&local_4);
  return local_d;
}



/* Function: FUN_00461a60 @ 0x00461a60 */

char __thiscall FUN_00461a60(GameWidget *this,byte param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  char local_9;
  
  if (this->pos_x == 0) {
    return 0;
  }
  local_9 = 0;
  uVar2 = *(uint *)(this->parent_widget + 0x12 + (uint)param_1 * 0xe);
  iVar1 = this->parent_widget + 0xc + (uint)param_1 * 0xe;
  if ((uVar2 & 0x80000000) != 0) {
    return 1;
  }
  uVar3 = this->pos_h;
  uVar5 = *(uint *)(iVar1 + 2) & 0x7fffffff;
  if (uVar5 + uVar3 <= this->pos_w) {
    puVar4 = FUN_004600c0(this,uVar5,0);
    if (puVar4 != (ushort *)0x0) {
      FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),uVar2 & 0x3fffffff);
      FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),uVar5,puVar4);
      FUN_004178e0(this->pos_x,uVar3);
      FUN_00452970(this->pos_x,uVar5,puVar4);
      FUN_0046f5f0((uint)puVar4);
      this->child_list_2 = this->child_list_2 + uVar5;
      local_9 = 1;
      this->pos_h = this->pos_h + uVar5;
      *(uint *)(iVar1 + 6) = uVar3;
      *(uint *)(iVar1 + 6) = uVar3 | 0x80000000;
    }
  }
  return local_9;
}



/* Function: FUN_00461b60 @ 0x00461b60
 * TODO: param_1 is a resource/file manager object, not a known struct
 */

void __fastcall FUN_00461b60(void *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  byte local_b;
  ushort local_a;
  uint local_4;

  if (*(int *)((int)param_1 + 0x26) != 0) { /* TODO: resource manager field 0x26 */
    local_b = 1;
    if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xc) != 0) { /* TODO: resource manager->0x0c->0x0c */
      do {
        puVar3 = (ushort *)0x0;
        iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)local_b * 0xe); /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
        if (iVar2 != 0) {
          local_a = 1;
          if (*(short *)(iVar2 + 0xe) != 0) {
            do {
              iVar1 = iVar2 + 0xc + (uint)local_a * 0xe;
              if ((*(byte *)(iVar1 + 9) & 0x40) != 0) {
                if (puVar3 == (ushort *)0x0) {
                  local_4 = (uint)local_b;
                  puVar3 = FUN_00460780(param_1,local_4);
                  FUN_0045feb0((int)puVar3,'\0');
                }
                *(uint *)(iVar1 + 6) = *(uint *)(puVar3 + (uint)local_a * 7 + 9) & 0x3fffffff;
              }
              local_a = local_a + 1;
            } while (local_a <= *(ushort *)(iVar2 + 0xe));
          }
          if (puVar3 != (ushort *)0x0) {
            FUN_0046f5f0((uint)puVar3);
          }
        }
        local_b = local_b + 1;
      } while ((ushort)local_b <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xc)); /* TODO: resource manager->0x0c->0x0c */
    }
    *(int *)((int)param_1 + 0x36) = *(int *)((int)param_1 + 0x32); /* TODO: resource manager fields 0x36 = 0x32 */
  }
  return;
}



/* Function: FUN_00461c60 @ 0x00461c60 */

void __fastcall FUN_00461c60(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x26) != (HANDLE)0x0) {
    FUN_004529c0(*(HANDLE *)(param_1 + 0x26));
    *(int *)(param_1 + 0x26) = 0;
    FUN_00452840(*(LPCSTR *)(param_1 + 0x2a));
    FUN_0046f5f0(*(uint *)(param_1 + 0x2a));
    *(int *)(param_1 + 0x2a) = 0;
  }
  return;
}



/* Function: FUN_00461ca0 @ 0x00461ca0 */

uint __thiscall FUN_00461ca0(void *this,char *param_1)

{
    /* TODO: 47 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00461d70 @ 0x00461d70
 * NOTE: param_1 is a resource/file manager object, NOT a known game struct.
 * Offsets 0x0c, 0x20, 0x26, 0x32, 0x36 are fields of that manager object.
 */

int __fastcall FUN_00461d70(void *param_1)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  void *pvVar5;
  byte bVar6;
  ushort uVar7;
  byte local_11;
  ushort *local_c;
  int local_8;
  uint local_4;
  
  bVar6 = 1;
  if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x0c->0x0e */
    do {
      local_c = FUN_004608a0(param_1,bVar6);
      if (local_c != (ushort *)0x0) {
        puVar2 = FUN_004608a0(*(void **)((int)param_1 + 0x20),bVar6); /* TODO: resource manager field 0x20 */
        if ((puVar2 != (ushort *)0x0) && (*(int *)(puVar2 + 0xb) != *(int *)(local_c + 0xb))) {
          return (uint)puVar2 & 0xffffff00;
        }
        FUN_004609a0(&local_c);
      }
      bVar6 = bVar6 + 1;
    } while ((ushort)bVar6 <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe)); /* TODO: resource manager->0x0c->0x0e */
  }
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x20) + 0xc); /* TODO: resource manager->0x20->0x0c */
  if (*(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe) < *(ushort *)(iVar4 + 0xe)) { /* TODO: resource manager->0x0c->0x0e */
    FUN_004624b0(param_1,*(ushort *)(iVar4 + 0xc));
  }
  local_11 = 1;
  pvVar5 = param_1;
  if (*(short *)(*(int *)(*(int *)((int)param_1 + 0x20) + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x20->0x0c->0x0e */
    do {
      puVar2 = FUN_004608a0(*(void **)((int)param_1 + 0x20),local_11); /* TODO: resource manager field 0x20 */
      if (puVar2 != (ushort *)0x0) {
        if (*(ushort *)(*(int *)((int)param_1 + 0xc) + 0xc) < (ushort)local_11) { /* TODO: resource manager->0x0c->0x0c */
          FUN_00460510(param_1,puVar2[7],puVar2[8],*(int *)(puVar2 + 9),
                       *(int *)(puVar2 + 0xb));
        }
        puVar3 = FUN_004608a0(param_1,local_11);
        if (puVar3 != (ushort *)0x0) {
          if (puVar3[7] < puVar2[7]) {
            FUN_004623a0(param_1,local_11,puVar2[7]);
          }
          uVar7 = 1;
          if (puVar2[7] != 0) {
            do {
              iVar4 = (int)(short)uVar7;
              if ((*(int *)(puVar2 + iVar4 * 7 + 9) != 0) && (*(int *)(puVar2 + iVar4 * 7 + 7) != 0)
                 ) {
                local_8 = (uint)uVar7 << 0x10;
                local_8 = CONCAT31((((local_8) >> 8) & 0xFFFFFF),local_11);
                FUN_00461130(*(void **)((int)param_1 + 0x20),local_8,&local_4,(uint *)&local_c, /* TODO: resource manager field 0x20 */
                             puVar2);
                if (*(int *)(puVar3 + iVar4 * 7 + 9) == 0) {
                  if (local_4 != 0) {
                    puVar3[6] = puVar3[6] + 1;
__label_00461f1a:
                    *(uint *)(puVar3 + iVar4 * 7 + 9) =
                         *(uint *)(puVar2 + iVar4 * 7 + 9) & 0x3fffffff;
                    uVar1 = *(uint *)(puVar2 + iVar4 * 7 + 7);
                    *(uint *)(puVar3 + iVar4 * 7 + 7) = uVar1;
                    *(uint *)(puVar3 + iVar4 * 7 + 7) = uVar1 | 0x80000000;
                  }
                }
                else {
                  if (local_4 != 0) goto __label_00461f1a;
                  (puVar3 + iVar4 * 7 + 9)[0] = 0;
                  (puVar3 + iVar4 * 7 + 9)[1] = 0;
                  (puVar3 + iVar4 * 7 + 7)[0] = 0;
                  (puVar3 + iVar4 * 7 + 7)[1] = 0;
                  puVar3[6] = puVar3[6] - 1;
                }
              }
              uVar7 = uVar7 + 1;
            } while ((int)(short)uVar7 <= (int)(uint)puVar2[7]);
          }
        }
      }
      local_11 = local_11 + 1;
      pvVar5 = (void *)CONCAT22((short)((uint)param_1 >> 0x10),(ushort)local_11);
    } while ((ushort)local_11 <= *(ushort *)(*(int *)(*(int *)((int)param_1 + 0x20) + 0xc) + 0xe)); /* TODO: resource manager->0x20->0x0c->0x0e */
  }
  return CONCAT31((unsigned int)((uint)pvVar5 >> 8),1);
}



/* Function: FUN_00461fa0 @ 0x00461fa0
 * NOTE: param_1 is a resource/file manager object, NOT a known game struct.
 * Offsets 0x0c, 0x0e, 0x16 are fields of that manager object.
 */

void __fastcall FUN_00461fa0(void *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  
  puVar1 = FUN_00460780(param_1,0);
  bVar3 = 1;
  FUN_0045feb0((int)puVar1,'\0');
  if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x0c->0x0e */
    do {
      puVar2 = FUN_004608a0(param_1,bVar3);
      if (puVar2 != (ushort *)0x0) {
        FUN_0046f5f0(*(uint *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)bVar3 * 0xe)); /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
        *(int *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)bVar3 * 0xe) = 0; /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
      }
      if ((ushort)bVar3 <= puVar1[6]) {
        FUN_004608a0(param_1,bVar3);
      }
      bVar3 = bVar3 + 1;
    } while ((ushort)bVar3 <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe)); /* TODO: resource manager->0x0c->0x0e */
  }
  FUN_0046f5f0((uint)puVar1);
  return;
}



/* Function: FUN_00462030 @ 0x00462030 */

void __fastcall FUN_00462030(void *param_1)

{
    /* TODO: 10 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00462060 @ 0x00462060 */

char __thiscall FUN_00462060(void *this,int param_1)

{
    /* TODO: 19 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004620d0 @ 0x004620d0 */

char __thiscall FUN_004620d0(void *this,int param_1)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00462160 @ 0x00462160 */

int __thiscall FUN_00462160(GameScreen *this,int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return this->font_id;
  }
  if (this->pen_style != 0) {
    cVar1 = FUN_004620d0(this,param_1);
    if (cVar1 != '\0') {
      return this->pen_style;
    }
  }
  if (this->color_b != 0) {
    cVar1 = FUN_00462060(this,param_1);
    if (cVar1 != '\0') {
      return *(int *)(this->color_b + 8);
    }
  }
  return this->font_id;
}



/* Function: FUN_004621c0 @ 0x004621c0 */

void __thiscall FUN_004621c0(void *this,byte param_1)

{
  FUN_004621d0(this,param_1,'\0');
  return;
}



/* Function: FUN_004621d0 @ 0x004621d0 */

void __thiscall FUN_004621d0(void *this,byte param_1,char param_2)

{
    /* TODO: 71 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00462350 @ 0x00462350 */

int __thiscall FUN_00462350(void *this,uint param_1)

{
    /* TODO: 15 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004623a0 @ 0x004623a0 */

uint __thiscall FUN_004623a0(void *this,byte param_1,ushort param_2)

{
  int iVar1;
  uint _Size;
  uint uVar2;
  ushort uVar3;
  ushort *_Src;
  ushort *_Dst;
  int uVar4;
  uint uVar5;
  ushort *puVar6;
  
  _Src = FUN_004608a0(this,param_1);
  uVar3 = _Src[7];
  _Size = (uint)uVar3 * 0xe + 0x1a;
  iVar1 = (uint)param_2 * 0xe;
  uVar2 = iVar1 + 0x1a;
  if (uVar2 <= _Size) {
    return (uint)param_2 * 7 & 0xffffff00;
  }
  _Dst = FUN_004600c0(this,uVar2,0);
  if (_Dst != (ushort *)0x0) {
    puVar6 = _Dst + (uint)uVar3 * 7 + 0xd;
    for (uVar5 = uVar2 - _Size >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
    }
    for (uVar5 = uVar2 - _Size & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar6 = 0;
      puVar6 = (ushort *)((int)puVar6 + 1);
    }
    memmove(_Dst,_Src,_Size);
    *(int *)(_Dst + 4) = iVar1 + 0xe;
    _Dst[7] = param_2;
    iVar1 = (uint)param_1 * 0xe;
    FUN_00461400();
    uVar4 = FUN_0046f5f0((uint)_Src);
    *(uint *)(*(int *)((intptr_t)this + 0xc) + 0xe + iVar1) = uVar2;
    *(int *)(*(int *)((intptr_t)this + 0xc) + 0x12 + iVar1) = 0;
    *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + iVar1) = _Dst;
    return CONCAT31((unsigned int)((uint)uVar4 >> 8),1);
  }
  return 0;
}



/* Function: FUN_004624b0 @ 0x004624b0 */

int __thiscall FUN_004624b0(void *this,ushort param_1)

{
    /* TODO: 51 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004625b0 @ 0x004625b0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_004625b0(int param_1)

{
    /* TODO: 36 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00462720 @ 0x00462720 */

void __cdecl FUN_00462720(short *param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  if (param_1 != (short *)0x0) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    sVar2 = 0;
    if (0 < *param_1) {
      do {
        iVar1 = (int)sVar2;
        sVar2 = sVar2 + 1;
        FUN_00465750(param_1 + iVar1 * 7 + 6,param_2);
      } while (sVar2 < *param_1);
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}



/* Function: FUN_004627a0 @ 0x004627a0 */

void FUN_004627a0(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489b28,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_004627f0 @ 0x004627f0 */

void FUN_004627f0(void)

{
  return;
}



/* Function: FUN_00462810 @ 0x00462810 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462810(void)

{
  _DAT_00489b36 = 0;
  _DAT_00489b34 = 0;
  return;
}



/* Function: FUN_00462820 @ 0x00462820 */

void FUN_00462820(void)

{
  _atexit(FUN_00462830);
  return;
}



/* Function: FUN_00462830 @ 0x00462830 */

void FUN_00462830(void)

{
  return;
}



/* Function: FUN_00462850 @ 0x00462850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462850(void)

{
  _DAT_00489b32 = 0;
  _DAT_00489b30 = 0;
  return;
}



/* Function: FUN_00462860 @ 0x00462860 */

void FUN_00462860(void)

{
  _atexit(FUN_00462870);
  return;
}



/* Function: FUN_00462870 @ 0x00462870 */

void FUN_00462870(void)

{
  return;
}



/* Function: FUN_00462890 @ 0x00462890 */

void FUN_00462890(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489b38,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_004628d0 @ 0x004628d0 */

void FUN_004628d0(void)

{
  _atexit(FUN_004628e0);
  return;
}



/* Function: FUN_004628e0 @ 0x004628e0 */

void FUN_004628e0(void)

{
  return;
}



/* Function: FUN_00462900 @ 0x00462900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462900(void)

{
  _DAT_00489b46 = 0;
  _DAT_00489b44 = 0;
  return;
}



/* Function: FUN_00462910 @ 0x00462910 */

void FUN_00462910(void)

{
  _atexit(FUN_00462920);
  return;
}



/* Function: FUN_00462920 @ 0x00462920 */

void FUN_00462920(void)

{
  return;
}



/* Function: FUN_00462940 @ 0x00462940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462940(void)

{
  _DAT_00489b42 = 0;
  _DAT_00489b40 = 0;
  return;
}



/* Function: FUN_00462950 @ 0x00462950 */

void FUN_00462950(void)

{
  _atexit(FUN_00462960);
  return;
}



/* Function: FUN_00462960 @ 0x00462960 */

void FUN_00462960(void)

{
  return;
}



/* Function: FUN_00462980 @ 0x00462980 */

void FUN_00462980(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489b70,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_004629c0 @ 0x004629c0 */

void FUN_004629c0(void)

{
  _atexit(FUN_004629d0);
  return;
}



/* Function: FUN_004629d0 @ 0x004629d0 */

void FUN_004629d0(void)

{
  return;
}



/* Function: FUN_004629f0 @ 0x004629f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004629f0(void)

{
  _DAT_00489b9a = 0;
  _DAT_00489b98 = 0;
  return;
}



/* Function: FUN_00462a00 @ 0x00462a00 */

void FUN_00462a00(void)

{
  _atexit(FUN_00462a10);
  return;
}



/* Function: FUN_00462a10 @ 0x00462a10 */

void FUN_00462a10(void)

{
  return;
}



/* Function: FUN_00462a30 @ 0x00462a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462a30(void)

{
  _DAT_00489b96 = 0;
  _DAT_00489b94 = 0;
  return;
}



/* Function: FUN_00462a40 @ 0x00462a40 */

void FUN_00462a40(void)

{
  _atexit(FUN_00462a50);
  return;
}



/* Function: FUN_00462a50 @ 0x00462a50 */

void FUN_00462a50(void)

{
  return;
}



/* Function: FUN_00463ec0 @ 0x00463ec0 */

void ** __fastcall FUN_00463ec0(void **param_1)

{
    /* TODO: 46 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00464000 @ 0x00464000 */

void ** __thiscall FUN_00464000(void *this,byte param_1)

{
  FUN_00464020(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00464020 @ 0x00464020 */

void __fastcall FUN_00464020(void **param_1)

{
    /* TODO: 6 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00464040 @ 0x00464040 */

bool FUN_00464040(void)

{
    /* TODO: 36 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00464160 @ 0x00464160 */

void ** __fastcall FUN_00464160(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  local_8 = 0xffffffff;
  __seh_handler = &__label_004641ab;
  *__seh_chain = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004779b0;
  *__seh_chain = local_10;
  return param_1;
}



/* Function: FUN_004641c0 @ 0x004641c0 */

void ** __thiscall FUN_004641c0(void *this,byte param_1)

{
  FUN_004641e0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004641e0 @ 0x004641e0 */

void __fastcall FUN_004641e0(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  __seh_handler = &__label_0046421d;
  *param_1 = &PTR_FUN_004779b0;
  *__seh_chain = &local_10;
  local_8 = 0xffffffff;
  FUN_00464227();
  *__seh_chain = local_10;
  return;
}



/* Function: FUN_00464227 @ 0x00464227 */

void FUN_00464227(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00464230 @ 0x00464230
 * Struct types: GameWidget (this) - accesses field_118(0x118)
 */

void __thiscall FUN_00464230(GameWidget *this,short param_1)

{
  this->field_118 = param_1;
  return;
}



/* Function: FUN_00464240 @ 0x00464240 */

void __fastcall FUN_00464240(int param_1)

{
  FUN_00456450();
  if ((int)*(short *)(param_1 + 0x118) - (int)DAT_00489b68 != -1) {
    FUN_00464e50(DAT_00489b9c);
    DAT_00489b48 = 1;
    DAT_00489b68 = *(short *)(param_1 + 0x118) + 1;
  }
  return;
}



/* Function: FUN_00464290 @ 0x00464290 */

void ** __fastcall FUN_00464290(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  local_8 = 0xffffffff;
  __seh_handler = &__label_004642dd;
  *__seh_chain = &local_10;
  FUN_00454a70(param_1,0);
  *param_1 = &PTR_FUN_00477a58;
  *__seh_chain = local_10;
  return param_1;
}



/* Function: FUN_004642f0 @ 0x004642f0 */

void ** __thiscall FUN_004642f0(void *this,byte param_1)

{
  FUN_00464310(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00464310 @ 0x00464310 */

void __fastcall FUN_00464310(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  __seh_handler = &__label_0046434d;
  *param_1 = &PTR_FUN_00477a58;
  *__seh_chain = &local_10;
  local_8 = 0xffffffff;
  FUN_00464357();
  *__seh_chain = local_10;
  return;
}



/* Function: FUN_00464357 @ 0x00464357 */

void FUN_00464357(void)

{
  int __saved_ebp;
  
  FUN_00454b00(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00464b90 @ 0x00464b90 */

void __thiscall FUN_00464b90(SoundPlayer *this,short param_1)

{
  this->sequence_data[50] = param_1;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,param_1);
  return;
}



/* Function: FUN_00464bc0 @ 0x00464bc0 */

int * __thiscall
FUN_00464bc0(SoundPlayer *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  short sVar1;
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  local_8 = 0xffffffff;
  __seh_handler = &__label_00464c81;
  *__seh_chain = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  *(void ***)this = &PTR_FUN_00477b08;
  DAT_00489b5c = 0;
  DAT_00489b48 = 0;
  DAT_00489b84 = 0;
  DAT_00489b9c = this;
  this->sequence_data[50] = DAT_00489b68 + -1;
  sVar1 = DAT_00489b68 + -1;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,sVar1);
  FUN_0042bf40();
  FUN_0042bf70(this);
  *__seh_chain = local_10;
  return this;
}



/* Function: FUN_00464ca0 @ 0x00464ca0 */

void ** __thiscall FUN_00464ca0(void *this,byte param_1)

{
  FUN_00464cc0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00464cc0 @ 0x00464cc0 */

void __fastcall FUN_00464cc0(void **param_1)

{
    /* TODO: 59 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00464de7 @ 0x00464de7 */

void FUN_00464de7(void)

{
  int __saved_ebp;
  
  FUN_0042be10(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00464e50 @ 0x00464e50 */

void __fastcall FUN_00464e50(int *param_1)

{
  FUN_00465050(0);
  FUN_00464f20();
  FUN_0042c3f0(param_1);
  return;
}



/* Function: FUN_00464e70 @ 0x00464e70 */

void FUN_00464e70(int param_1,short param_2,int param_3,char param_4,
                 char param_5)

{
    /* TODO: 23 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00464ed0 @ 0x00464ed0 */

void FUN_00464ed0(int param_1,short param_2)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00464f20 @ 0x00464f20 */

void FUN_00464f20(void)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  
  sVar4 = 0;
  do {
    sVar4 = sVar4 + 1;
    *(short *)(DAT_0048345c + 0x3a + ((int)DAT_00489b68 + sVar4 * 6) * 2) = 0;
    piVar3 = DAT_00489b50;
  } while (sVar4 < 6);
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (DAT_00489b68 == 1) {
      sVar4 = *(short *)(*piVar3 + 0x10e) + -1;
    }
    else {
      sVar4 = *(short *)(*piVar3 + 0x10e) + -2;
    }
    uVar5 = (ushort)(sVar4 == 0);
    uVar6 = 0;
    do {
      iVar1 = (short)uVar6 * 6;
      if ((&DAT_00483a10)[(short)uVar6 * 3] == (short)piVar3[2]) {
        puVar2 = (ushort *)
                 (DAT_0048345c + 0x3a + ((int)DAT_00489b68 + (char)(&DAT_00483a13)[iVar1] * 6) * 2);
        uVar5 = uVar5 << ((&DAT_00483a14)[iVar1] & 0x1f) | *puVar2;
        *puVar2 = uVar5;
        if (((uVar5 & 1) != 0) && (DAT_00489b68 != 1)) {
          *(short *)(DAT_0048345c + 0x92 + DAT_00489b68 * 2) = (short)(char)(&DAT_00483a13)[iVar1];
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x92);
  }
  if (DAT_0048345c != 0) {
    if ((*(ushort *)(DAT_0048345c + 0x48) & 1) != 0) {
      *(char *)(DAT_0048345c + 0x90) = (char)*(ushort *)(DAT_0048345c + 0x48);
      return;
    }
    *(char *)(DAT_0048345c + 0x90) = 0;
  }
  return;
}



/* Function: FUN_00465050 @ 0x00465050 */

void FUN_00465050(byte param_1)

{
  int *puVar1;
  
  for (puVar1 = DAT_00489b50; puVar1 != (int *)0x0; puVar1 = (int *)puVar1[1]) {
    FUN_0041dad0((void *)*puVar1,param_1,'\0');
  }
  return;
}



/* Function: FUN_00465080 @ 0x00465080 */

void FUN_00465080(void)

{
  int iVar1;
  int *puVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  
  for (puVar2 = DAT_00489b50; puVar2 != (int *)0x0; puVar2 = (int *)puVar2[1]) {
    uVar3 = 1;
    uVar4 = 0;
    do {
      iVar1 = (short)uVar4 * 6;
      if ((&DAT_00483a10)[(short)uVar4 * 3] == *(short *)(puVar2 + 2)) {
        uVar3 = uVar3 << ((&DAT_00483a14)[iVar1] & 0x1f) &
                *(ushort *)
                 (DAT_0048345c + 0x3a + ((int)DAT_00489b68 + (char)(&DAT_00483a13)[iVar1] * 6) * 2);
        if (uVar3 == 0) {
          if ((*(short *)(DAT_0048345c + 0x92 + DAT_00489b68 * 2) ==
               (short)*(char *)((int)puVar2 + 10)) && (DAT_00489b68 != 1)) { /* TODO: unknown linked-list node field at offset 0x0a */
            sVar5 = 1;
          }
          else {
            sVar5 = 0;
          }
        }
        else if ((*(char *)((int)puVar2 + 0xb) == '\0') || (DAT_00489b68 == 1)) { /* TODO: unknown linked-list node field at offset 0x0b */
          sVar5 = 1;
        }
        else {
          sVar5 = 2;
        }
        FUN_00464b90((void *)*puVar2,sVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x92);
  }
  return;
}



/* Function: FUN_0046561c @ 0x0046561c */

void FUN_0046561c(void)

{
  return;
}



/* Function: FUN_00465640 @ 0x00465640 */

void FUN_00465640(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489ba0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_00465690 @ 0x00465690 */

void FUN_00465690(void)

{
  return;
}



/* Function: FUN_004656b0 @ 0x004656b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004656b0(void)

{
  _DAT_00489bae = 0;
  _DAT_00489bac = 0;
  return;
}



/* Function: FUN_004656c0 @ 0x004656c0 */

void FUN_004656c0(void)

{
  _atexit(FUN_004656d0);
  return;
}



/* Function: FUN_004656d0 @ 0x004656d0 */

void FUN_004656d0(void)

{
  return;
}



/* Function: FUN_004656f0 @ 0x004656f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004656f0(void)

{
  _DAT_00489baa = 0;
  _DAT_00489ba8 = 0;
  return;
}



/* Function: FUN_00465700 @ 0x00465700 */

void FUN_00465700(void)

{
  _atexit(FUN_00465710);
  return;
}



/* Function: FUN_00465710 @ 0x00465710 */

void FUN_00465710(void)

{
  return;
}



/* Function: thunk_FUN_00465730 @ 0x00465720 */

void __fastcall thunk_FUN_00465730(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0046f5f0(*(uint *)(param_1 + 2));
    *(int *)(param_1 + 2) = 0;
    *(char *)(param_1 + 0xc) = 0;
  }
  return;
}



/* Function: FUN_00465730 @ 0x00465730 */

void __fastcall FUN_00465730(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0046f5f0(*(uint *)(param_1 + 2));
    *(int *)(param_1 + 2) = 0;
    *(char *)(param_1 + 0xc) = 0;
  }
  return;
}



/* Function: FUN_00465750 @ 0x00465750 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_00465750(GameScreen *this,char param_1)

{
  short *psVar1;
  int uVar2;
  int uVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  int local_2c [6];
  int *local_14;
  int *local_10;
  int *local_c;
  short *local_8;
  void *local_4;
  
  if (param_1 == '\0') {
    *(ushort *)this = CONCAT11((char)*(short *)this,(char)((ushort)*(short *)this >> 8));
    local_8 = (short *)&this->font_size;
    *local_8 = CONCAT11((char)*local_8,(char)((ushort)*local_8 >> 8));
    uVar2 = this->font_id;
    local_c = local_2c;
    uVar3 = *(int *)((intptr_t)this + 2);
    local_10 = local_2c;
    this->font_id =
         CONCAT22(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                  CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))) + (intptr_t)this;
    local_2c[0] = CONCAT22(CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8)),
                           CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18)));
    sVar6 = 0;
    *(int *)((intptr_t)this + 2) = local_2c[0] + (intptr_t)this;
    local_4 = this;
    if (0 < *(short *)this) {
      do {
        piVar4 = (int *)(sVar6 * 4 + *(int *)((intptr_t)this + 2));
        iVar5 = *piVar4;
        local_14 = local_2c;
        local_2c[0] = CONCAT22(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                               CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18)));
        sVar6 = sVar6 + 1;
        *piVar4 = local_2c[0] + (intptr_t)this;
      } while (sVar6 < *(short *)this);
    }
  }
  sVar6 = 0;
  psVar1 = (short *)&this->font_size;
  if (0 < *psVar1) {
    do {
      iVar5 = (int)sVar6;
      sVar6 = sVar6 + 1;
      FUN_0042f350((void *)(iVar5 * 8 + this->font_id),param_1);
    } while (sVar6 < *psVar1);
  }
  if (param_1 != '\0') {
    sVar6 = 0;
    if (0 < *(short *)this) {
      do {
        piVar4 = (int *)(sVar6 * 4 + *(int *)((intptr_t)this + 2));
        iVar5 = *piVar4 - (intptr_t)this;
        sVar6 = sVar6 + 1;
        *piVar4 = CONCAT22(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                           CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18)));
      } while (sVar6 < *(short *)this);
    }
    iVar5 = this->font_id - (intptr_t)this;
    this->font_id =
         CONCAT22(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                  CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18)));
    iVar5 = *(int *)((intptr_t)this + 2) - (intptr_t)this;
    *(uint *)((intptr_t)this + 2) =
         CONCAT22(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                  CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18)));
    *(ushort *)this = CONCAT11((char)*(short *)this,(char)((ushort)*(short *)this >> 8));
    *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
  }
  return;
}



/* Function: FUN_00465910 @ 0x00465910 */

void __cdecl FUN_00465910(void *param_1,char param_2)

{
  FUN_00465750(param_1,param_2);
  return;
}



/* Function: FUN_00465920 @ 0x00465920 */

ushort * __cdecl FUN_00465920(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_00465910(puVar1,'\0');
  }
  return puVar1;
}



/* Function: FUN_00465950 @ 0x00465950 */

void __cdecl FUN_00465950(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    thunk_FUN_00465730(param_3);
    FUN_0046c410(param_3);
  }
  return;
}



/* Function: FUN_00465980 @ 0x00465980 */

void FUN_00465980(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489bb0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_004659d0 @ 0x004659d0 */

void FUN_004659d0(void)

{
  return;
}



/* Function: FUN_004659f0 @ 0x004659f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004659f0(void)

{
  _DAT_00489bbe = 0;
  _DAT_00489bbc = 0;
  return;
}



/* Function: FUN_00465a00 @ 0x00465a00 */

void FUN_00465a00(void)

{
  _atexit(FUN_00465a10);
  return;
}



/* Function: FUN_00465a10 @ 0x00465a10 */

void FUN_00465a10(void)

{
  return;
}



/* Function: FUN_00465a30 @ 0x00465a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465a30(void)

{
  _DAT_00489bba = 0;
  _DAT_00489bb8 = 0;
  return;
}



/* Function: FUN_00465a40 @ 0x00465a40 */

void FUN_00465a40(void)

{
  _atexit(FUN_00465a50);
  return;
}



/* Function: FUN_00465a50 @ 0x00465a50 */

void FUN_00465a50(void)

{
  return;
}



/* Function: FUN_00465a60 @ 0x00465a60
 * TODO: param_1 is a custom object with vtable, offsets 0x1e, 0x1a, etc.
 *       Not clearly a known game struct - these are small offsets on a utility object.
 */

void ** __fastcall FUN_00465a60(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;

  local_10 = *__seh_chain;
  local_8 = 0xffffffff;
  __seh_handler = &__label_00465ab9;
  *__seh_chain = &local_10;
  FUN_00417c70(param_1);
  *(short *)((int)param_1 + 0x1e) = 0; /* TODO: unknown struct, offset 0x1e */
  *param_1 = &PTR_FUN_00477bc8;
  *(int *)((int)param_1 + 0x1a) = 0; /* TODO: unknown struct, offset 0x1a */
  param_1[5] = 0;
  param_1[4] = 0;
  *(char *)(param_1 + 6) = 0;
  *__seh_chain = local_10;
  return param_1;
}



/* Function: FUN_00465ad0 @ 0x00465ad0 */

void ** __thiscall FUN_00465ad0(void *this,byte param_1)

{
  FUN_00465af0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00465af0 @ 0x00465af0 */

void __fastcall FUN_00465af0(void **param_1)

{
  int *__seh_chain;
  int local_10;
  void *__seh_handler;
  int local_8;
  
  local_10 = *__seh_chain;
  __seh_handler = &__label_00465b39;
  *param_1 = &PTR_FUN_00477bc8;
  *__seh_chain = &local_10;
  local_8 = 0;
  FUN_00465b50((int)param_1);
  local_8 = 0xffffffff;
  FUN_00465b43();
  *__seh_chain = local_10;
  return;
}



/* Function: FUN_00465b43 @ 0x00465b43 */

void FUN_00465b43(void)

{
  int __saved_ebp;
  
  FUN_00417cc0(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00465b50 @ 0x00465b50 */

/* TODO: param_1 is a custom resource object, not a known game struct.
 * Offsets 0x10, 0x14, 0x18, 0x1a, 0x1e used as int/short/char fields.
 */
void __fastcall FUN_00465b50(int param_1)

{
  *(short *)(param_1 + 0x1e) = 0;
  *(int *)(param_1 + 0x1a) = 0;
  *(int *)(param_1 + 0x14) = 0;
  if ((*(uint *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_0046f5f0(*(uint *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = 0;
  *(char *)(param_1 + 0x18) = 0;
  return;
}



/* Function: FUN_00465ba0 @ 0x00465ba0 */

uint __fastcall FUN_00465ba0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint __reg_eax;
  short *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x1a);
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1e);
    __reg_eax = CONCAT22((short)(__reg_eax >> 0x10),sVar1);
    if (sVar1 != 0) {
      iVar3 = *(int *)(iVar2 + 8 + (short)(sVar1 + -1) * 4);
      if (iVar3 == 0) {
        puVar4 = (short *)0x0;
      }
      else {
        puVar4 = (short *)(iVar3 + iVar2);
      }
      if (puVar4 != (short *)0x0) {
        return CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4);
      }
      return 0;
    }
  }
  return __reg_eax & 0xffff0000;
}



/* Function: FUN_00465be0 @ 0x00465be0 */

uint __fastcall FUN_00465be0(int param_1)

{
  short sVar1;
  int iVar2;
  uint __reg_eax;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1a);
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1e);
    __reg_eax = CONCAT22((short)(__reg_eax >> 0x10),sVar1);
    if (sVar1 != 0) {
      iVar3 = *(int *)(iVar2 + 8 + (short)(sVar1 + -1) * 4);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + iVar2;
      }
      if (iVar3 != 0) {
        return CONCAT22((short)((uint)iVar3 >> 0x10),*(short *)(iVar3 + 2));
      }
      return 0;
    }
  }
  return __reg_eax & 0xffff0000;
}



/* Function: FUN_00465c20 @ 0x00465c20 */

void __thiscall FUN_00465c20(GameWidget *this,int param_1)

{
  this->rect_top = 0;
  this->child_list_1 = param_1;
  return;
}



/* Function: FUN_00465c40 @ 0x00465c40 */

/* TODO: this is a resource/sprite object, not a known game struct.
 * Offsets: 0x10 = data pointer, 0x18 = owns_data flag
 */
void __thiscall FUN_00465c40(void *this,uint param_1)

{
  if ((*(char *)((intptr_t)this + 0x18) != '\0') && (*(uint *)((intptr_t)this + 0x10) != param_1)) {
    FUN_0046f5f0(*(uint *)((intptr_t)this + 0x10));
    *(char *)((intptr_t)this + 0x18) = 0;
    *(uint *)((intptr_t)this + 0x10) = param_1;
    return;
  }
  *(uint *)((intptr_t)this + 0x10) = param_1;
  return;
}



/* Function: FUN_00465c80 @ 0x00465c80 */

/* TODO: this is a resource/sprite object, offset 0x14 = secondary data pointer */
void __thiscall FUN_00465c80(void *this,int param_1)

{
  *(int *)((intptr_t)this + 0x14) = param_1; /* resource obj offset 0x14 */
  if (param_1 != 0) {
    FUN_00465c40(this,*(uint *)(param_1 + 10));
    return;
  }
  FUN_00465c40(this,0);
  return;
}



/* Function: FUN_00465cb0 @ 0x00465cb0 */

void __thiscall FUN_00465cb0(MathProblem *this,int *param_1)

{
  char cVar1;
  int *puVar2;
  ushort *puVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  if (param_1 != (int *)0x0) {
    psVar4 = (short *)*param_1;
  }
  FUN_00465c80(this,(int)psVar4);
  if ((psVar4 != (short *)0x0) && (cVar1 = (char)psVar4[3], cVar1 != '\0')) {
    if (this->field_10 == (ushort *)0x0) {
      if ((psVar4 == (short *)0x0) || (cVar1 == '\0')) {
        puVar2 = (int *)0x0;
      }
      else {
        puVar2 = (int *)((uint)(ushort)psVar4[4] + *psVar4 * 2 + 0xe + (int)psVar4);
      }
      puVar3 = FUN_0045c1c0(puVar2,-1,-1,(ushort *)0x0);
      FUN_00465c40(this,(uint)puVar3);
      *(char *)((intptr_t)this + 0x18) = 1; /* TODO: offset 0x18 on MathProblem, falls in _pad15 region */
    }
    else {
      if ((psVar4 == (short *)0x0) || (cVar1 == '\0')) {
        puVar2 = (int *)0x0;
      }
      else {
        puVar2 = (int *)((uint)(ushort)psVar4[4] + *psVar4 * 2 + 0xe + (int)psVar4);
      }
      puVar3 = FUN_0045c1c0(puVar2,-1,-1,this->field_10);
      FUN_00465c40(this,(uint)puVar3);
    }
  }
  DAT_00483dc8 = this->field_14;
  if (DAT_00483dc8 != 0) {
    *(int *)(DAT_00483dc8 + 10) = this->field_10;
  }
  ((void (*)(void))this->vtable[0x80 / 4])(); /* vtable[32] */
  return;
}



/* Function: FUN_00465de0 @ 0x00465de0 */

void ** __thiscall FUN_00465de0(void *this,short param_1,int *param_2)

{
    /* TODO: 60 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00465ed0 @ 0x00465ed0 */

void __thiscall FUN_00465ed0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 14 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00465fa0 @ 0x00465fa0 */

void __thiscall FUN_00465fa0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 14 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00466000 @ 0x00466000 */

void __thiscall FUN_00466000(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 14 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004661a5 @ 0x004661a5 */

void FUN_004661a5(void)

{
  return;
}



/* Function: FUN_004661b7 @ 0x004661b7 */

void FUN_004661b7(void)

{
  return;
}



/* Function: FUN_00466240 @ 0x00466240 */

void __thiscall FUN_00466240(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004662c0 @ 0x004662c0 */

void __thiscall FUN_004662c0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00466340 @ 0x00466340 */

void __thiscall FUN_00466340(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004663c0 @ 0x004663c0 */

void __thiscall FUN_004663c0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004664c0 @ 0x004664c0 */

void __thiscall FUN_004664c0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 43 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004665b0 @ 0x004665b0 */

void __thiscall FUN_004665b0(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 54 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004666d0 @ 0x004666d0 */

void __thiscall FUN_004666d0(void *this,int param_1,int *param_2,short *param_3,char param_4)

{
    /* TODO: 61 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00466820 @ 0x00466820 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00466820(void)

{
    /* TODO: 207 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00466ca0 @ 0x00466ca0 */

void FUN_00466ca0(void)

{
    /* TODO: 355 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00467290 @ 0x00467290 */

void FUN_00467290(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489bc0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_004672e0 @ 0x004672e0 */

void FUN_004672e0(void)

{
  return;
}



/* Function: FUN_00467300 @ 0x00467300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467300(void)

{
  _DAT_00489bce = 0;
  _DAT_00489bcc = 0;
  return;
}



/* Function: FUN_00467310 @ 0x00467310 */

void FUN_00467310(void)

{
  _atexit(FUN_00467320);
  return;
}



/* Function: FUN_00467320 @ 0x00467320 */

void FUN_00467320(void)

{
  return;
}



/* Function: FUN_00467340 @ 0x00467340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467340(void)

{
  _DAT_00489bca = 0;
  _DAT_00489bc8 = 0;
  return;
}



/* Function: FUN_00467350 @ 0x00467350 */

void FUN_00467350(void)

{
  _atexit(FUN_00467360);
  return;
}



/* Function: FUN_00467360 @ 0x00467360 */

void FUN_00467360(void)

{
  return;
}



/* Function: FUN_00467370 @ 0x00467370 */

void FUN_00467370(void)

{
    /* TODO: 424 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00467be0 @ 0x00467be0 */

void FUN_00467be0(void)

{
    /* TODO: 455 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00468830 @ 0x00468830 */

void FUN_00468830(void)

{
    /* TODO: 203 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00468c40 @ 0x00468c40 */

void FUN_00468c40(void)

{
    /* TODO: 357 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00469210 @ 0x00469210 */

void FUN_00469210(void)

{
    /* TODO: 373 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00469a00 @ 0x00469a00 */

void FUN_00469a00(void)

{
    /* TODO: 456 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0046a630 @ 0x0046a630 */

void FUN_0046a630(byte *param_1,byte param_2,byte param_3,short *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  
  do {
    bVar1 = *param_1;
    pbVar5 = param_1 + 1;
    switch(bVar1) {
    case 1:
    case 0x81:
      pbVar5 = param_1 + 2;
      if (*pbVar5 == param_2) {
        *pbVar5 = (byte)param_3;
      }
    case 0x21:
    case 0xa1:
      pbVar5 = pbVar5 + 1;
      break;
    case 9:
    case 0x89:
      pbVar5 = param_1 + 3;
      FUN_0046a630((byte *)((int)param_4 +
                           (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),param_2,
                   param_3,param_4);
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      bVar2 = *pbVar5;
      uVar4 = (ushort)bVar2;
      pbVar5 = param_1 + 2;
      if (7 < uVar4) {
        bVar2 = bVar2 >> 3;
        uVar3 = (ushort)bVar2;
        uVar4 = uVar4 + (ushort)bVar2 * -8;
        do {
          if (*pbVar5 == param_2) {
            *pbVar5 = (byte)param_3;
          }
          if (pbVar5[1] == param_2) {
            pbVar5[1] = (byte)param_3;
          }
          if (pbVar5[2] == param_2) {
            pbVar5[2] = (byte)param_3;
          }
          if (pbVar5[3] == param_2) {
            pbVar5[3] = (byte)param_3;
          }
          if (pbVar5[4] == param_2) {
            pbVar5[4] = (byte)param_3;
          }
          if (pbVar5[5] == param_2) {
            pbVar5[5] = (byte)param_3;
          }
          if (pbVar5[6] == param_2) {
            pbVar5[6] = (byte)param_3;
          }
          if (pbVar5[7] == param_2) {
            pbVar5[7] = (byte)param_3;
          }
          pbVar5 = pbVar5 + 8;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (uVar4 != 0) {
        switch((int)(short)uVar4) {
        case 7:
          if (pbVar5[6] == param_2) {
            pbVar5[6] = (byte)param_3;
          }
        case 6:
          if (pbVar5[5] == param_2) {
            pbVar5[5] = (byte)param_3;
          }
        case 5:
          if (pbVar5[4] == param_2) {
            pbVar5[4] = (byte)param_3;
          }
        case 4:
          if (pbVar5[3] == param_2) {
            pbVar5[3] = (byte)param_3;
          }
        case 3:
          if (pbVar5[2] == param_2) {
            pbVar5[2] = (byte)param_3;
          }
        case 2:
          if (pbVar5[1] == param_2) {
            pbVar5[1] = (byte)param_3;
          }
        case 1:
          if (*pbVar5 == param_2) {
            *pbVar5 = (byte)param_3;
          }
        default:
          pbVar5 = pbVar5 + (short)uVar4;
        }
      }
    }
    param_1 = pbVar5;
  } while ((bVar1 & 0x80) == 0);
  return;
}



/* Function: FUN_0046a8b0 @ 0x0046a8b0 */

void FUN_0046a8b0(byte *param_1,int param_2,int param_3,short *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  byte *pbVar6;
  ushort uVar7;
  
  cVar3 = (char)param_2 - (char)param_3;
  cVar4 = (char)param_2 * '\x04' + '\x05';
  do {
    bVar1 = *param_1;
    pbVar6 = param_1 + 1;
    switch(bVar1) {
    case 1:
    case 0x81:
      pbVar6 = param_1 + 2;
      if ((byte)(cVar4 - param_1[2]) < 4) {
        *pbVar6 = param_1[2] + cVar3 * -4;
      }
    case 0x21:
    case 0xa1:
      pbVar6 = pbVar6 + 1;
      break;
    case 9:
    case 0x89:
      pbVar6 = param_1 + 3;
      FUN_0046a8b0((byte *)((int)param_4 +
                           (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),param_2,
                   param_3,param_4);
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      bVar2 = *pbVar6;
      uVar7 = (ushort)bVar2;
      pbVar6 = param_1 + 2;
      if (7 < bVar2) {
        uVar5 = (ushort)(bVar2 >> 3);
        uVar7 = (ushort)bVar2 + (ushort)(bVar2 >> 3) * -8;
        do {
          if ((byte)(cVar4 - *pbVar6) < 4) {
            *pbVar6 = *pbVar6 + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[1]) < 4) {
            pbVar6[1] = pbVar6[1] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[2]) < 4) {
            pbVar6[2] = pbVar6[2] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[3]) < 4) {
            pbVar6[3] = pbVar6[3] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[4]) < 4) {
            pbVar6[4] = pbVar6[4] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[5]) < 4) {
            pbVar6[5] = pbVar6[5] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[6]) < 4) {
            pbVar6[6] = pbVar6[6] + cVar3 * -4;
          }
          if ((byte)(cVar4 - pbVar6[7]) < 4) {
            pbVar6[7] = pbVar6[7] + cVar3 * -4;
          }
          pbVar6 = pbVar6 + 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar7 != 0) {
        switch((int)(short)uVar7) {
        case 7:
          if ((byte)(cVar4 - pbVar6[6]) < 4) {
            pbVar6[6] = pbVar6[6] + cVar3 * -4;
          }
        case 6:
          if ((byte)(cVar4 - pbVar6[5]) < 4) {
            pbVar6[5] = pbVar6[5] + cVar3 * -4;
          }
        case 5:
          if ((byte)(cVar4 - pbVar6[4]) < 4) {
            pbVar6[4] = pbVar6[4] + cVar3 * -4;
          }
        case 4:
          if ((byte)(cVar4 - pbVar6[3]) < 4) {
            pbVar6[3] = pbVar6[3] + cVar3 * -4;
          }
        case 3:
          if ((byte)(cVar4 - pbVar6[2]) < 4) {
            pbVar6[2] = pbVar6[2] + cVar3 * -4;
          }
        case 2:
          if ((byte)(cVar4 - pbVar6[1]) < 4) {
            pbVar6[1] = pbVar6[1] + cVar3 * -4;
          }
        case 1:
          if ((byte)(cVar4 - *pbVar6) < 4) {
            *pbVar6 = *pbVar6 + cVar3 * -4;
          }
        default:
          pbVar6 = pbVar6 + (short)uVar7;
        }
      }
    }
    param_1 = pbVar6;
  } while ((bVar1 & 0x80) == 0);
  return;
}



/* Function: FUN_0046abe0 @ 0x0046abe0 */

void __thiscall FUN_0046abe0(MathProblem *this,byte param_1,byte param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  short sVar4;
  
  iVar1 = this->_pad1a;
  if ((iVar1 != 0) &&
     ((this->field_14 == 0 || (*(char *)(this->field_14 + 6) == '\0')))) {
    if (param_3 == 0) {
      iVar2 = *(int *)(iVar1 + 8 + (short)(this->active_flag + -1) * 4);
      param_3 = iVar1 + iVar2;
      if (iVar2 == 0) {
        param_3 = 0;
      }
      if (param_3 == 0) {
        return;
      }
    }
    sVar4 = 0;
    if (0 < *(short *)(param_3 + 2)) {
      do {
        pbVar3 = (byte *)0x0;
        iVar1 = *(int *)(param_3 + 4 + sVar4 * 4);
        if (iVar1 != 0) {
          pbVar3 = (byte *)(this->_pad1a + iVar1);
        }
        if (pbVar3 != (byte *)0x0) {
          FUN_0046a630(pbVar3,param_1,param_2,this->field_14);
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(param_3 + 2));
    }
  }
  return;
}



/* Function: FUN_0046ac70 @ 0x0046ac70 */

void __thiscall FUN_0046ac70(MathProblem *this,byte param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int __saved_ebx;
  short sVar4;
  
  iVar1 = this->_pad1a;
  if ((iVar1 != 0) &&
     ((this->field_14 == 0 || (*(char *)(this->field_14 + 6) == '\0')))) {
    if (param_3 == 0) {
      iVar2 = *(int *)(iVar1 + 8 + (short)(this->active_flag + -1) * 4);
      param_3 = iVar1 + iVar2;
      if (iVar2 == 0) {
        param_3 = 0;
      }
      if (param_3 == 0) {
        return;
      }
    }
    sVar4 = 0;
    if (0 < *(short *)(param_3 + 2)) {
      do {
        pbVar3 = (byte *)0x0;
        iVar1 = *(int *)(param_3 + 4 + sVar4 * 4);
        if (iVar1 != 0) {
          pbVar3 = (byte *)(this->_pad1a + iVar1);
        }
        if (pbVar3 != (byte *)0x0) {
          FUN_0046a8b0(pbVar3,CONCAT31((unsigned int)((uint)__saved_ebx >> 8),param_1),param_2,
                       this->field_14);
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(param_3 + 2));
    }
  }
  return;
}



/* Function: FUN_0046ad00 @ 0x0046ad00 */

void __thiscall FUN_0046ad00(void *this,byte param_1,int param_2)

{
    /* TODO: 22 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0046ad60 @ 0x0046ad60 */

void __thiscall FUN_0046ad60(void *this,byte param_1,int param_2)

{
    /* TODO: 22 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0046adc0 @ 0x0046adc0 */

void __thiscall FUN_0046adc0(MathProblem *this,short param_1,short param_2)

{
  short *psVar1;
  ushort *puVar2;
  int *puVar3;
  
  psVar1 = this->field_14;
  if ((psVar1 == (short *)0x0) || ((char)psVar1[3] == '\0')) {
    puVar3 = (int *)0x0;
  }
  else {
    puVar3 = (int *)((uint)(ushort)psVar1[4] + *psVar1 * 2 + 0xe + (int)psVar1);
  }
  puVar2 = FUN_0045c1c0(puVar3,param_1,param_2,this->field_10);
  FUN_00465c40(this,(uint)puVar2);
  return;
}



/* Function: FUN_0046ae10 @ 0x0046ae10 */

void __cdecl FUN_0046ae10(short *param_1,char param_2)

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
      sVar2 = param_1[sVar3 + 7];
      param_1[sVar3 + 7] = CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8));
      sVar3 = sVar3 + 1;
    } while (sVar3 < sVar1);
  }
  sVar1 = param_1[1];
  *(uint *)(param_1 + 1) =
       CONCAT22(CONCAT11((char)sVar1,(char)((ushort)sVar1 >> 8)),
                CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8)));
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}



/* Function: FUN_0046aea0 @ 0x0046aea0 */

ushort * __cdecl FUN_0046aea0(void *param_1,uint param_2)

{
  int uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)0x0;
  uVar1 = FUN_00460aa0(param_1,(char *)&param_2,0x6b6c6263);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00462350(param_1,param_2);
    if ((char)uVar1 != '\0') {
      puVar2 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
      if (puVar2 != (ushort *)0x0) {
        FUN_0046ae10((short *)puVar2,'\0');
        puVar2[5] = 0;
        puVar2[6] = 0;
      }
    }
  }
  return puVar2;
}



/* Function: FUN_0046af00 @ 0x0046af00 */

void __cdecl FUN_0046af00(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0046af10 @ 0x0046af10 */

void __cdecl FUN_0046af10(void *param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00460aa0(param_1,(char *)&param_2,0x6b6c6263);
    FUN_004615d0(param_1,param_2);
  }
  return;
}



/* Function: FUN_0046af40 @ 0x0046af40 */

void __cdecl FUN_0046af40(int *param_1,char param_2)

{
  short *psVar1;
  short uVar2;
  short *puVar3;
  int iVar4;
  short sVar5;
  
  sVar5 = 0;
  do {
    puVar3 = (short *)((int)param_1 + sVar5 * 2 + 8);
    uVar2 = *puVar3;
    *puVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    sVar5 = sVar5 + 1;
  } while (sVar5 < 8);
  if (param_2 == '\0') {
    uVar2 = *(short *)(param_1 + 6);
    *(ushort *)(param_1 + 6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  sVar5 = 0;
  psVar1 = (short *)(param_1 + 6);
  if (0 < *psVar1) {
    do {
      iVar4 = (int)sVar5;
      sVar5 = sVar5 + 1;
      FUN_0046b500((int)param_1 + iVar4 * 8 + 0x1a);
    } while (sVar5 < *psVar1);
  }
  if ((short *)*param_1 != (short *)0x0) {
    FUN_0046ae10((short *)*param_1,param_2);
  }
  if (param_2 != '\0') {
    *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
  }
  return;
}



/* Function: FUN_0046afe0 @ 0x0046afe0 */

ushort * __cdecl FUN_0046afe0(void *param_1,int param_2,char param_3)

{
    /* TODO: 42 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046b0c0 @ 0x0046b0c0 */

void __cdecl FUN_0046b0c0(void *param_1,int param_2,uint *param_3,char param_4)

{
    /* TODO: 19 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0046b130 @ 0x0046b130 */

void __cdecl FUN_0046b130(int param_1,char param_2)

{
  short *psVar1;
  short uVar2;
  short *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  if (param_2 == '\0') {
    uVar2 = *(short *)(param_1 + 0x24);
    *(short *)(param_1 + 0x24) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  psVar1 = (short *)(param_1 + 0x24);
  sVar4 = *psVar1;
  sVar5 = 0;
  if (0 < sVar4) {
    do {
      sVar6 = sVar5 + 1;
      if (DAT_00483ddc != '\0') {
        puVar3 = (short *)(param_1 + sVar5 * 4 + 0x28);
        uVar2 = *puVar3;
        *puVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      }
      sVar5 = sVar6;
    } while (sVar6 < sVar4);
  }
  if (param_2 != '\0') {
    *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    uVar2 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  uVar2 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xc);
  *(short *)(param_1 + 0xc) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xe);
  *(short *)(param_1 + 0xe) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0x12);
  *(short *)(param_1 + 0x12) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  sVar4 = 0;
  do {
    puVar3 = (short *)(param_1 + sVar4 * 2 + 0x14);
    uVar2 = *puVar3;
    *puVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    sVar4 = sVar4 + 1;
  } while (sVar4 < 8);
  return;
}



/* Function: FUN_0046b290 @ 0x0046b290 */

void __cdecl FUN_0046b290(int param_1,char param_2)

{
  short *psVar1;
  short uVar2;
  short sVar3;
  short *puVar4;
  short sVar5;
  short sVar6;
  
  if (param_2 == '\0') {
    uVar2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  psVar1 = (short *)(param_1 + 0x1c);
  sVar3 = *psVar1;
  sVar5 = 0;
  if (0 < sVar3) {
    do {
      sVar6 = sVar5 + 1;
      if (DAT_00483ddc != '\0') {
        puVar4 = (short *)(param_1 + sVar5 * 4 + 0x20);
        uVar2 = *puVar4;
        *puVar4 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      }
      sVar5 = sVar6;
    } while (sVar6 < sVar3);
  }
  if (param_2 != '\0') {
    *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    uVar2 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  uVar2 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) =
       CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0xe),
                         (char)((ushort)*(short *)(param_1 + 0xe) >> 8)));
  uVar2 = *(short *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) =
       CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x12),
                         (char)((ushort)*(short *)(param_1 + 0x12) >> 8)));
  uVar2 = *(short *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) =
       CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x16),
                         (char)((ushort)*(short *)(param_1 + 0x16) >> 8)));
  uVar2 = *(short *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) =
       CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x1a),
                         (char)((ushort)*(short *)(param_1 + 0x1a) >> 8)));
  return;
}



/* Function: FUN_0046b3f0 @ 0x0046b3f0 */

void __cdecl FUN_0046b3f0(short *param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  if (param_2 == '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  sVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      FUN_0046b550((int)(param_1 + iVar1 * 7 + 1));
    } while (sVar2 < *param_1);
  }
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}



/* Function: FUN_0046b460 @ 0x0046b460 */

ushort * __cdecl FUN_0046b460(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_0046b3f0((short *)puVar1,'\0');
  }
  return puVar1;
}



/* Function: FUN_0046b490 @ 0x0046b490 */

void __cdecl FUN_0046b490(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0046b4a0 @ 0x0046b4a0 */

ushort * __cdecl FUN_0046b4a0(void *param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_00461540(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    puVar1 = FUN_0046b460(param_1,param_2);
    if (puVar1 != (ushort *)0x0) {
      FUN_00461670(param_1,param_2,(int)puVar1);
    }
  }
  return puVar1;
}



/* Function: FUN_0046b4e0 @ 0x0046b4e0 */

void __cdecl FUN_0046b4e0(void *param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_004615d0(param_1,param_2);
  }
  return;
}



/* Function: FUN_0046b500 @ 0x0046b500 */

void __cdecl FUN_0046b500(int param_1)

{
  short uVar1;
  
  if (DAT_00483ddc != '\0') {
    uVar1 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar1 = *(short *)(param_1 + 6);
    *(short *)(param_1 + 6) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  }
  return;
}



/* Function: FUN_0046b550 @ 0x0046b550 */

void __cdecl FUN_0046b550(int param_1)

{
  short uVar1;
  
  if (DAT_00483ddc != '\0') {
    uVar1 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  }
  uVar1 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = *(short *)(param_1 + 0xc);
  *(short *)(param_1 + 0xc) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  return;
}



/* Function: FUN_0046b5e0 @ 0x0046b5e0 */

ushort * __cdecl FUN_0046b5e0(void *param_1,int param_2)

{
    /* TODO: 11 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046b620 @ 0x0046b620 */

void __cdecl FUN_0046b620(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0046b630 @ 0x0046b630 */

ushort * __cdecl FUN_0046b630(void *param_1,uint param_2)

{
    /* TODO: 14 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046b680 @ 0x0046b680 */

void __cdecl FUN_0046b680(void *param_1,uint param_2,int param_3)

{
    /* TODO: 9 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0046b6b0 @ 0x0046b6b0 */

void __cdecl FUN_0046b6b0(int param_1,short param_2,char param_3)

{
  short *psVar1;
  short uVar2;
  int iVar3;
  short sVar4;
  short *puVar5;
  
  if (DAT_00483ddc != '\0') {
    iVar3 = *(int *)(param_1 + 8 + param_2 * 4);
    puVar5 = (short *)(param_1 + iVar3);
    if (iVar3 == 0) {
      puVar5 = (short *)0x0;
    }
    if (puVar5 != (short *)0x0) {
      if (param_3 == '\0') {
        *puVar5 = CONCAT11((char)*puVar5,(char)((ushort)*puVar5 >> 8));
        uVar2 = puVar5[1];
        puVar5[1] = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      }
      sVar4 = 0;
      psVar1 = puVar5 + 1;
      if (0 < *psVar1) {
        do {
          uVar2 = puVar5[sVar4 * 2 + 2];
          *(uint *)(puVar5 + sVar4 * 2 + 2) =
               CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                        CONCAT11((char)puVar5[sVar4 * 2 + 3],
                                 (char)((ushort)puVar5[sVar4 * 2 + 3] >> 8)));
          sVar4 = sVar4 + 1;
        } while (sVar4 < *psVar1);
      }
      if (param_3 != '\0') {
        *puVar5 = CONCAT11((char)*puVar5,(char)((ushort)*puVar5 >> 8));
        *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
      }
    }
  }
  return;
}



/* Function: FUN_0046b770 @ 0x0046b770 */

void __cdecl FUN_0046b770(int *param_1,char param_2)

{
  int *piVar1;
  short uVar2;
  short sVar3;
  short sVar4;
  
  if (DAT_00483ddc != '\0') {
    if (param_2 == '\0') {
      *param_1 = CONCAT22(CONCAT11((char)*(short *)param_1,
                                   (char)((ushort)*(short *)param_1 >> 8)),
                          CONCAT11((char)*(short *)((int)param_1 + 2),
                                   (char)((ushort)*(short *)((int)param_1 + 2) >> 8)));
      uVar2 = *(short *)(param_1 + 1);
      *(ushort *)(param_1 + 1) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      uVar2 = *(short *)((int)param_1 + 6);
      *(short *)((int)param_1 + 6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    }
    sVar4 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      do {
        piVar1 = param_1 + sVar4 + 2;
        *piVar1 = CONCAT22(CONCAT11((char)(short)*piVar1,(char)((ushort)(short)*piVar1 >> 8)),
                           CONCAT11((char)*(short *)((int)piVar1 + 2),
                                    (char)((ushort)*(short *)((int)piVar1 + 2) >> 8)));
        sVar3 = 0;
        if (0 < sVar4) {
          do {
            if (param_1[sVar3 + 2] == *piVar1) goto __label_0046b85a;
            sVar3 = sVar3 + 1;
          } while (sVar3 < sVar4);
        }
        if (param_2 != '\0') {
          *piVar1 = CONCAT22(CONCAT11((char)(short)*piVar1,(char)((ushort)(short)*piVar1 >> 8)),
                             CONCAT11((char)*(short *)((int)piVar1 + 2),
                                      (char)((ushort)*(short *)((int)piVar1 + 2) >> 8)));
        }
        FUN_0046b6b0((int)param_1,sVar4,param_2);
        if (param_2 != '\0') {
          *piVar1 = CONCAT22(CONCAT11((char)(short)*piVar1,(char)((ushort)(short)*piVar1 >> 8)),
                             CONCAT11((char)*(short *)((int)piVar1 + 2),
                                      (char)((ushort)*(short *)((int)piVar1 + 2) >> 8)));
        }
__label_0046b85a:
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(param_1 + 1));
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT22(CONCAT11((char)*(short *)param_1,
                                   (char)((ushort)*(short *)param_1 >> 8)),
                          CONCAT11((char)*(short *)((int)param_1 + 2),
                                   (char)((ushort)*(short *)((int)param_1 + 2) >> 8)));
      uVar2 = *(short *)(param_1 + 1);
      *(ushort *)(param_1 + 1) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      uVar2 = *(short *)((int)param_1 + 6);
      *(short *)((int)param_1 + 6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    }
  }
  return;
}



/* Function: FUN_0046b8b0 @ 0x0046b8b0 */

ushort * __cdecl FUN_0046b8b0(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_0046b290((int)puVar1,'\0');
  }
  return puVar1;
}



/* Function: FUN_0046b8e0 @ 0x0046b8e0 */

void __cdecl FUN_0046b8e0(int param_1,int param_2,uint param_3)

{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0046b8f0 @ 0x0046b8f0 */

ushort * __cdecl FUN_0046b8f0(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_0046b130((int)puVar1,'\0');
  }
  return puVar1;
}



/* Function: FUN_0046b930 @ 0x0046b930 */

void FUN_0046b930(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489bd0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_0046b980 @ 0x0046b980 */

void FUN_0046b980(void)

{
  return;
}



/* Function: FUN_0046b990 @ 0x0046b990 */

void __cdecl FUN_0046b990(int param_1,char param_2)

{
  short *psVar1;
  int iVar2;
  short uVar3;
  short uVar4;
  short *puVar5;
  int *puVar6;
  short sVar7;
  short sVar8;
  
  if (DAT_00483ddc != '\0') {
    uVar3 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    uVar3 = *(short *)(param_1 + 6);
    *(short *)(param_1 + 6) = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
    if (DAT_00483ddc != '\0') {
      uVar3 = *(short *)(param_1 + 10);
      *(short *)(param_1 + 10) = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
    }
  }
  sVar7 = 0;
  do {
    puVar5 = (short *)(param_1 + sVar7 * 2 + 0xc);
    uVar3 = *puVar5;
    *puVar5 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
    sVar7 = sVar7 + 1;
  } while (sVar7 < 6);
  sVar7 = 0;
  do {
    iVar2 = param_1 + sVar7 * 4;
    puVar6 = (int *)(iVar2 + 0x18);
    uVar3 = *(short *)puVar6;
    uVar4 = *(short *)(iVar2 + 0x1a);
    *puVar6 = CONCAT22(CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8)),
                       CONCAT11((char)uVar4,(char)((ushort)uVar4 >> 8)));
    sVar7 = sVar7 + 1;
  } while (sVar7 < 4);
  if (param_2 == '\0') {
    uVar3 = *(short *)(param_1 + 0x28);
    *(short *)(param_1 + 0x28) = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
  }
  sVar8 = 0;
  psVar1 = (short *)(param_1 + 0x28);
  sVar7 = *psVar1;
  if (0 < sVar7) {
    do {
      if (DAT_00483ddc != '\0') {
        puVar5 = (short *)(param_1 + sVar8 * 4 + 0x2c);
        uVar3 = *puVar5;
        *puVar5 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
      }
      sVar8 = sVar8 + 1;
    } while (sVar8 < sVar7);
  }
  if (param_2 != '\0') {
    *psVar1 = CONCAT11((char)*psVar1,(char)((ushort)*psVar1 >> 8));
  }
  return;
}



/* Function: FUN_0046bab0 @ 0x0046bab0 */

ushort * __cdecl FUN_0046bab0(void *param_1,uint param_2)

{
  int uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)0x0;
  uVar1 = FUN_00462350(param_1,param_2);
  if ((char)uVar1 != '\0') {
    puVar2 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
    if (puVar2 != (ushort *)0x0) {
      FUN_0046b990((int)puVar2,'\0');
    }
  }
  return puVar2;
}



/* Function: FUN_0046bb00 @ 0x0046bb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bb00(void)

{
  _DAT_00489bde = 0;
  _DAT_00489bdc = 0;
  return;
}



/* Function: FUN_0046bb10 @ 0x0046bb10 */

void FUN_0046bb10(void)

{
  _atexit(FUN_0046bb20);
  return;
}



/* Function: FUN_0046bb20 @ 0x0046bb20 */

void FUN_0046bb20(void)

{
  return;
}



/* Function: FUN_0046bb40 @ 0x0046bb40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bb40(void)

{
  _DAT_00489bda = 0;
  _DAT_00489bd8 = 0;
  return;
}



/* Function: FUN_0046bb50 @ 0x0046bb50 */

void FUN_0046bb50(void)

{
  _atexit(FUN_0046bb60);
  return;
}



/* Function: FUN_0046bb60 @ 0x0046bb60 */

void FUN_0046bb60(void)

{
  return;
}



/* Function: FUN_0046bb70 @ 0x0046bb70 */

int __cdecl FUN_0046bb70(uint param_1,void *param_2,void *param_3)

{
    /* TODO: 36 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046bc50 @ 0x0046bc50 */

uint __cdecl FUN_0046bc50(void *param_1,char *param_2)

{
    /* TODO: 121 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046bea3 @ 0x0046bea3 */

void FUN_0046bea3(void)

{
  int __saved_ebp;
  
  FUN_00460010((int *)(__saved_ebp + -0x58));
  return;
}



/* Function: FUN_0046bec0 @ 0x0046bec0 */

void FUN_0046bec0(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489be0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_0046bf10 @ 0x0046bf10 */

void FUN_0046bf10(void)

{
  return;
}



/* Function: FUN_0046bf30 @ 0x0046bf30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bf30(void)

{
  _DAT_00489bee = 0;
  _DAT_00489bec = 0;
  return;
}



/* Function: FUN_0046bf40 @ 0x0046bf40 */

void FUN_0046bf40(void)

{
  _atexit(FUN_0046bf50);
  return;
}



/* Function: FUN_0046bf50 @ 0x0046bf50 */

void FUN_0046bf50(void)

{
  return;
}



/* Function: FUN_0046bf70 @ 0x0046bf70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bf70(void)

{
  _DAT_00489bea = 0;
  _DAT_00489be8 = 0;
  return;
}



/* Function: FUN_0046bf80 @ 0x0046bf80 */

void FUN_0046bf80(void)

{
  _atexit(FUN_0046bf90);
  return;
}



/* Function: FUN_0046bf90 @ 0x0046bf90 */

void FUN_0046bf90(void)

{
  return;
}



/* Function: FUN_0046bfb0 @ 0x0046bfb0 */

void FUN_0046bfb0(void)

{
  int uVar1;
  int __param_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00489bf0,uVar1,__param_fffffff4);
  return;
}



/* Function: FUN_0046bff0 @ 0x0046bff0 */

void FUN_0046bff0(void)

{
  _atexit(FUN_0046c000);
  return;
}



/* Function: FUN_0046c000 @ 0x0046c000 */

void FUN_0046c000(void)

{
  return;
}



/* Function: FUN_0046c020 @ 0x0046c020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c020(void)

{
  _DAT_00489bfe = 0;
  _DAT_00489bfc = 0;
  return;
}



/* Function: FUN_0046c030 @ 0x0046c030 */

void FUN_0046c030(void)

{
  _atexit(FUN_0046c040);
  return;
}



/* Function: FUN_0046c040 @ 0x0046c040 */

void FUN_0046c040(void)

{
  return;
}



/* Function: FUN_0046c060 @ 0x0046c060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c060(void)

{
  _DAT_00489bfa = 0;
  _DAT_00489bf8 = 0;
  return;
}



/* Function: FUN_0046c070 @ 0x0046c070 */

void FUN_0046c070(void)

{
  _atexit(FUN_0046c080);
  return;
}



/* Function: FUN_0046c080 @ 0x0046c080 */

void FUN_0046c080(void)

{
  return;
}



/* Function: FUN_0046c090 @ 0x0046c090 */

ushort * __cdecl FUN_0046c090(int param_1)

{
    /* TODO: 33 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046c1e0 @ 0x0046c1e0 */

void __cdecl FUN_0046c1e0(uint param_1)

{
  if (param_1 != 0) {
    FUN_0046f5f0(param_1);
  }
  return;
}



/* Function: FUN_0046c370 @ 0x0046c370 */

ushort * __cdecl FUN_0046c370(uint param_1,uint param_2,LPCVOID param_3)

{
    /* TODO: 38 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046c3f0 @ 0x0046c3f0 */

void __cdecl FUN_0046c3f0(uint param_1)

{
  FUN_0046c370(param_1,0,(LPCVOID)0x0);
  return;
}



/* Function: FUN_0046c410 @ 0x0046c410 */

void __cdecl FUN_0046c410(uint param_1)

{
  if (param_1 != 0) {
    FUN_0046f5f0(param_1);
  }
  return;
}



/* Function: FUN_0046c470 @ 0x0046c470 */

void ** __fastcall FUN_0046c470(int param_1)

{
  int *puVar1;
  uint uVar2;
  
  do {
    puVar1 = *(int **)(param_1 + 0x18);
    if (puVar1 != (int *)0x0) {
      *(int *)(param_1 + 0x18) = *puVar1;
      return puVar1;
    }
    uVar2 = FUN_0046c530(param_1,0);
  } while ((short)uVar2 != 0);
  return (int *)0x0;
}



/* Function: FUN_0046c530 @ 0x0046c530 */

uint __fastcall FUN_0046c530(int param_1,ushort param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *puVar5;
  int *puVar6;
  int *puVar7;
  int *puVar8;
  
  uVar3 = (uint)param_2;
  puVar5 = *(int **)(param_1 + 0x1c);
  if (param_2 == 0) {
    if (puVar5 != (int *)0x0) {
      uVar2 = FUN_00471410(puVar5);
      if (uVar2 < 0xffff) {
        uVar3 = 0x4000;
        if (uVar2 < 0x4000) {
          uVar3 = uVar2 & 0xffff;
        }
        uVar3 = uVar3 + uVar2;
        if (0xfffe < uVar3) {
          uVar3 = 0xffff;
        }
        iVar4 = FUN_00471330(puVar5,uVar3 & 0xffff,(uint)(*(ushort *)(param_1 + 0x22) | 0x1000));
        if (iVar4 != 0) {
          puVar7 = (int *)((int)puVar5 + (uVar2 - 0xc & 0xfffffff8) + 0xc);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - uVar2;
          goto __label_0046c617;
        }
      }
    }
    if ((short)uVar3 != 0) goto __label_0046c5b7;
    uVar3 = 0x1000;
  }
  else {
__label_0046c5b7:
    if ((ushort)uVar3 < 0x1001) {
      uVar3 = 0x1000;
    }
  }
  while( true ) {
    puVar5 = FUN_00471190(uVar3 & 0xffff,(uint)(*(ushort *)(param_1 + 0x22) | 0x1000));
    if (puVar5 != (int *)0x0) break;
    uVar3 = uVar3 >> 1 & 0x7fff;
    if ((ushort)uVar3 < 0xc) {
      uVar3 = (uint)(ushort)((ushort)uVar3 * 2);
      iVar4 = FUN_0046fd70(param_1,2);
      if (iVar4 == 0) {
        return (uint)(*(int *)(param_1 + 0x18) != 0);
      }
    }
  }
  puVar7 = puVar5 + 1;
  *puVar5 = *(int *)(param_1 + 0x1c);
  *(int **)(param_1 + 0x1c) = puVar5;
__label_0046c617:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + ((uVar3 & 0xffff) + 0xfff & 0xfffff000);
  uVar3 = FUN_00471410(puVar5);
  uVar1 = (short)(uVar3 - 0xc >> 3) + 1;
  puVar6 = *(int **)(param_1 + 0x18);
  do {
    puVar8 = puVar7;
    *puVar8 = puVar6;
    puVar6 = puVar8;
    puVar7 = puVar8 + 2;
  } while (puVar8 < puVar5 + (uint)uVar1 * 2 + -1);
  *(int **)(param_1 + 0x18) = puVar8;
  return CONCAT22((ushort)(uVar3 - 0xc >> 0x13),uVar1);
}



/* Function: FUN_0046c660 @ 0x0046c660 */

void __fastcall FUN_0046c660(int param_1,int *param_2)

{
  *param_2 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x18) = param_2;
  return;
}



/* Function: FUN_0046c790 @ 0x0046c790 */

uint __fastcall FUN_0046c790(int *param_1,ushort param_2)

{
    /* TODO: 131 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046ca30 @ 0x0046ca30 */

uint __fastcall FUN_0046ca30(int param_1,ushort param_2,ushort *param_3)

{
    /* TODO: 40 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046cb10 @ 0x0046cb10 */

void __fastcall FUN_0046cb10(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = 0;
  puVar2 = *(ushort **)(param_1 + 0x14);
  do {
    if (uVar1 < (*puVar2 & 0xfffc)) {
      *(ushort **)(param_1 + 0x10) = puVar2;
      uVar1 = *puVar2 & 0xfffc;
    }
    puVar2 = *(ushort **)(puVar2 + 1);
  } while (*(ushort **)(param_1 + 0x14) != puVar2);
  return;
}



/* Function: FUN_0046cb40 @ 0x0046cb40
 * NOTE: SmartHeap internal allocator function. All pointer arithmetic
 * refers to SmartHeap pool descriptor fields, NOT game structs.
 */

ushort * __fastcall FUN_0046cb40(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint _Size;
  ushort *puVar3;
  ushort *_Dst;
  ushort *puVar4;
  
  puVar3 = param_1;
  do {
    puVar3 = (ushort *)((int)puVar3 + (*puVar3 & 0x7ffc));
    if ((*puVar3 & 1) == 0) {
      uVar1 = param_1[-1];
      _Dst = (ushort *)((int)param_1 - (uint)uVar1);
      _Size = (int)puVar3 - (int)param_1 & 0xffff;
      *(int *)(*(int *)(_Dst + 3) + 2) = *(int *)(_Dst + 1);
      *(int *)(*(int *)(_Dst + 1) + 6) = *(int *)(_Dst + 3);
      memmove(_Dst,param_1,_Size);
      *(byte *)_Dst = (byte)*_Dst | 2;
      puVar4 = (ushort *)((int)_Dst + _Size);
      iVar2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
      if (iVar2 != 0) {
        DAT_00484044 = DAT_00484044 + 1;
        if ((*puVar3 & 1) == 0) {
          uVar1 = uVar1 + (*puVar3 & 0xfffc);
          *puVar4 = uVar1 | 2;
          *(int *)(*(int *)(puVar3 + 3) + 2) = *(int *)(puVar3 + 1);
          *(int *)(*(int *)(puVar3 + 1) + 6) = *(int *)(puVar3 + 3);
        }
        else {
          *puVar4 = uVar1 | 2;
        }
        iVar2 = *(int *)(((uint)_Dst & 0xffff0000) + 0x14);
        *(int *)(puVar4 + 3) = iVar2;
        *(int *)(puVar4 + 1) = *(int *)(iVar2 + 2);
        *(ushort **)(*(int *)(iVar2 + 2) + 6) = puVar4;
        *(ushort **)(iVar2 + 2) = puVar4;
        *(ushort *)((uVar1 - 2) + (int)puVar4) = uVar1;
        do {
          **(int **)((int)_Dst + ((*_Dst & 0x7ffc) - 6)) = (int)(_Dst + 1); /* TODO: SmartHeap block linkage */
          _Dst = (ushort *)((int)_Dst + (*_Dst & 0x7ffc));
        } while (_Dst < puVar4);
        DAT_00484044 = DAT_00484044 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
        return puVar4;
      }
      return (ushort *)0x0;
    }
    uVar1 = *puVar3 & 0x7ffc;
  } while ((uVar1 != 0) && ((*(uint *)(*(int *)((uVar1 - 6) + (int)puVar3) + 4) & 0xff0000) == 0)); /* TODO: SmartHeap block ref-count check */
  return puVar3;
}



/* Function: FUN_0046cc80 @ 0x0046cc80
 * NOTE: param_1 is a heap descriptor object (SmartHeap), NOT a game struct.
 * Offsets like 0x20, 0x22, 0x24, 0x28, 0x2a, 0x2c, 0x34, 0x48, 0x60, 0x164
 * are fields of the heap memory pool descriptor, not UIElement/GameBoard/etc.
 */

void __fastcall FUN_0046cc80(LPCVOID param_1,uint param_2,uint param_3)

{
  if (param_3 <= *(ushort *)((int)param_1 + 0x2a)) { /* TODO: SmartHeap pool max_small_block at 0x2a */
    FUN_0046f290(param_1,param_2,(short)param_3);
    return;
  }
  FUN_0046eb60(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0046ccb0 @ 0x0046ccb0 */

uint * FUN_0046ccb0(LPCVOID param_1,uint param_2,int param_3)

{
    /* TODO: 47 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046cdc0 @ 0x0046cdc0 */

uint * FUN_0046cdc0(uint *param_1,int param_2,uint param_3)

{
    /* TODO: 152 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046d110 @ 0x0046d110 */

int FUN_0046d110(uint *param_1)

{
    /* TODO: 53 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046d4d0 @ 0x0046d4d0
 * NOTE: SmartHeap lock/ref-count function. piVar4 is a SmartHeap page descriptor.
 * Offsets 0x0e, 0x15 are page descriptor fields; local_4 is a pool descriptor
 * with fields 0x22, 0x48, 0x60. NOT game structs.
 */

uint FUN_0046d4d0(uint *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  int local_4;
  
  iVar3 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = *param_1;
  piVar4 = (int *)(uVar5 & 0xffff0000);
  if ((*(ushort *)((int)piVar4 + 0xe) & 0xfff8) == 0xcad0) { /* TODO: SmartHeap page magic check */
    if (((byte)*(ushort *)((int)piVar4 + 0xe) & 7) == 3) { /* TODO: SmartHeap page type field */
      bVar6 = piVar4[4] != 0;
    }
    else {
      bVar6 = (*(ushort *)(uVar5 - 2) & 0x8001) == 0x8001;
    }
    if (!bVar6) goto __label_0046d53f;
    bVar6 = true;
  }
  else {
__label_0046d53f:
    piVar4 = (int *)0x0;
    bVar6 = false;
  }
  if (bVar6) {
    local_4 = *piVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
  if (piVar4 == (int *)0x0) {
    FUN_0046fd70(0,0xd);
    return 0;
  }
  if ((*(byte *)(local_4 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(local_4 + 0x48));
    *(int *)(local_4 + 0x60) = *(int *)(local_4 + 0x60) + 1;
  }
  uVar2 = *(ushort *)((int)piVar4 + 0xe) & 7; /* TODO: SmartHeap page type field */
  if ((uVar2 != 0) && ((uVar2 != 3 || (*(char *)((int)piVar4 + 0x15) != '\0')))) { /* TODO: SmartHeap page flags at 0x15 */
    uVar1 = param_1[1];
    if ((uVar1 & 0xff0000) < 0xff0000) {
      param_1[1] = (uVar1 + 0x10000 ^ uVar1) & 0xff0000 ^ uVar1;
      if (((uVar1 & 0xff0000) == 0) && (((byte)*(short *)((int)piVar4 + 0xe) & 7) != 3)) { /* TODO: SmartHeap page type field */
        *(short *)(piVar4[1] + 2) = *(short *)(piVar4[1] + 2) + 1;
      }
      goto __label_0046d5f9;
    }
  }
  uVar5 = 0;
  FUN_0046fd70(local_4,6);
__label_0046d5f9:
  if ((*(byte *)(local_4 + 0x22) & 2) != 0) {
    *(int *)(local_4 + 0x60) = *(int *)(local_4 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_4 + 0x48));
  }
  return uVar5;
}



/* Function: FUN_0046dcf0 @ 0x0046dcf0 */

int FUN_0046dcf0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
  if (iVar2 == 0) {
    return -1;
  }
  DAT_00484044 = DAT_00484044 + 1;
  uVar1 = *param_1;
  uVar3 = uVar1 & 0xffff0000;
  if ((*(ushort *)(uVar3 + 0xe) & 0xfff8) == 0xcad0) {
    if (((byte)*(ushort *)(uVar3 + 0xe) & 7) == 3) {
      bVar4 = *(int *)(uVar3 + 0x10) != 0;
    }
    else {
      bVar4 = (*(ushort *)(uVar1 - 2) & 0x8001) == 0x8001;
    }
    if (bVar4) {
      bVar4 = true;
      goto __label_0046dd66;
    }
  }
  bVar4 = false;
  uVar3 = 0;
__label_0046dd66:
  iVar2 = 0;
  if (bVar4) {
    iVar2 = FUN_0046fcc0(uVar1);
    param_1[1] = param_1[1] & 0xffff0000;
  }
  DAT_00484044 = DAT_00484044 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
  if (uVar3 == 0) {
    FUN_0046fd70(0,0xd);
    return -1;
  }
  return iVar2;
}



/* Function: FUN_0046ddc0 @ 0x0046ddc0 */

void FUN_0046ddc0(uint param_1)

{
  FUN_0046de00(0x10,0,0,param_1);
  return;
}



/* Function: FUN_0046de00 @ 0x0046de00 */

/* WARNING: Removing unreachable block (ram,0x0046de17) */

int * __fastcall FUN_0046de00(ushort param_1,int param_2,int param_3,uint param_4)

{
    /* TODO: 62 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046df90 @ 0x0046df90 */

short FUN_0046df90(int param_1,uint param_2)

{
  uint uVar1;
  short uVar2;
  
  if (*(short *)(param_1 + 0x20) != -0x4153) {
    FUN_0046fd70(0,10);
    return 0;
  }
  uVar1 = FUN_0046e010(param_2);
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) + 0x1cU <= uVar1) {
    uVar2 = *(short *)(param_1 + 0x28);
    *(short *)(param_1 + 0x28) = (short)uVar1;
    *(short *)(param_1 + 0x2a) = (short)(uVar1 >> 2);
  }
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return uVar2;
}



/* Function: FUN_0046e010 @ 0x0046e010 */

uint __fastcall FUN_0046e010(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0x4000) {
    return 0x4000;
  }
  if (0xfffe < param_1) {
    return 0xffff;
  }
  uVar1 = 0x1000;
  if (param_1 < 0x1001) {
    return uVar1;
  }
  do {
    uVar1 = uVar1 * 2;
    if ((short)uVar1 == 0) {
      return 0xffff;
    }
  } while (uVar1 < param_1);
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}



/* Function: FUN_0046e060 @ 0x0046e060 */

int FUN_0046e060(int param_1,ushort param_2)

{
  uint uVar1;
  int uVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_2 + 3 & 0xfffc);
  }
  if (*(short *)(param_1 + 0x20) != -0x4153) {
    FUN_0046fd70(0,10);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  if ((uVar1 < param_2) || ((ushort)(*(short *)(param_1 + 0x28) - 0x1c) < uVar1)) {
    FUN_0046fd70(param_1,3);
  }
  else if (*(int *)(param_1 + 4) == 0) {
    *(uint *)(param_1 + 0x24) = uVar1;
    uVar2 = 1;
    goto __label_0046e0e6;
  }
  uVar2 = 0;
__label_0046e0e6:
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return uVar2;
}



/* Function: FUN_0046e210 @ 0x0046e210
 * NOTE: SmartHeap pool destroy entry point. param_1 is a SmartHeap pool descriptor.
 * Offset 0x20 = pool signature (0xBEAD = -0x4153). NOT a game struct.
 */

int FUN_0046e210(LPCVOID param_1)

{
  int uVar1;
  
  if (*(short *)((int)param_1 + 0x20) != -0x4153) { /* TODO: SmartHeap pool signature check */
    FUN_0046fd70(0,10);
    return 0;
  }
  uVar1 = FUN_0046e240(param_1);
  return uVar1;
}



/* Function: FUN_0046e240 @ 0x0046e240
 * NOTE: SmartHeap pool destroy implementation. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x14, 0x1c, 0x20, 0x22, 0x48, 0x60, 0x164 are pool descriptor fields.
 * NOT a game struct.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0046e240(LPCVOID param_1)

{
  int *piVar1;
  int *puVar2;
  int *puVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar4 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489ca0,(int *)&DAT_0048403c);
  if (iVar4 == 0) {
    return 0;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
    *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + 1; /* TODO: SmartHeap pool lock_count at 0x60 */
  }
  _DAT_00483df0 = param_1;
  iVar4 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (iVar4 == 0) {
    return 0;
  }
  uVar6 = 0;
  FUN_00471900((int)param_1);
  *(short *)((int)param_1 + 0x20) = 0; /* TODO: SmartHeap pool signature at 0x20 */
  do {
    piVar1 = (int *)((int)param_1 + uVar6 * 4);
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      do {
        *(short *)(*(int *)(iVar4 + 4) + 0xe) = 0;
        FUN_00471220(*(LPCVOID *)(iVar4 + 4));
        iVar4 = *(int *)(iVar4 + 8);
      } while (*piVar1 != iVar4);
    }
    uVar5 = (short)uVar6 + 1;
    uVar6 = (uint)uVar5;
  } while (uVar5 < 5);
  puVar3 = *(int **)((int)param_1 + 0x164); /* TODO: SmartHeap pool overflow_chain at 0x164 */
  while (puVar3 != (int *)0x0) {
    puVar2 = (int *)*puVar3;
    FUN_00471220(puVar3);
    puVar3 = puVar2;
  }
  puVar3 = *(int **)((int)param_1 + 0x1c); /* TODO: SmartHeap pool data_start at 0x1c */
  while (puVar3 != (int *)0x0) {
    puVar2 = (int *)*puVar3;
    FUN_00471220(puVar3);
    puVar3 = puVar2;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + -1; /* TODO: SmartHeap pool lock_count at 0x60 */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
  }
  _DAT_00483df0 = (LPCVOID)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  FUN_00471220(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489ca0);
  return 1;
}



/* Function: FUN_0046e3f0 @ 0x0046e3f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046e3f0(void)

{
    /* TODO: 21 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046e4a0 @ 0x0046e4a0 */

int FUN_0046e4a0(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x20) != -0x4153) {
    FUN_0046fd70(0,10);
    return -1;
  }
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  iVar1 = FUN_0046e500(param_1);
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return iVar1;
}



/* Function: FUN_0046e500 @ 0x0046e500 */

int __fastcall FUN_0046e500(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar7 = 0;
  do {
    iVar5 = *(int *)(param_1 + uVar7 * 4);
    sVar6 = (short)uVar7;
    if (((iVar5 != 0) && (sVar6 != 3)) && (sVar6 != 4)) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar5 + 8);
        if ((short)(*(int **)(iVar5 + 4))[3] == 0) {
          iVar2 = FUN_0046eac0(*(int **)(iVar5 + 4),1);
          if (iVar2 == 0) goto __label_0046e57a;
          if (iVar3 == iVar5) {
            iVar3 = 0;
          }
        }
        else if (iVar4 == 0) {
          iVar4 = iVar5;
        }
        iVar5 = iVar3;
      } while (iVar4 != iVar3);
    }
    uVar7 = (uint)(ushort)(sVar6 + 1U);
  } while ((ushort)(sVar6 + 1U) < 5);
  if (*(void (**)(void))(param_1 + 0x38) != (code *)0x0) {
    ((void (*)(void))**(void ***)(param_1 + 0x38))(); /* obj at param_1+0x38->vtable[0] */
  }
__label_0046e57a:
  return iVar1 - *(int *)(param_1 + 0x2c);
}



/* Function: FUN_0046e590 @ 0x0046e590
 * NOTE: SmartHeap pool allocation function. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x20, 0x22, 0x24, 0x28, 0x48, 0x60 are pool descriptor fields. NOT a game struct.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046e590(LPCVOID param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  short local_6;
  
  uVar4 = 0;
  if (*(short *)((int)param_1 + 0x20) != -0x4153) { /* TODO: SmartHeap pool signature at 0x20 */
    FUN_0046fd70(0,10);
    return 0xffffffff;
  }
  _DAT_00483de0 = 1;
  if (param_3 == 1) {
    local_6 = 1;
    if (*(int *)((int)param_1 + 0x24) == 0) { /* TODO: SmartHeap pool alloc_unit at 0x24 */
      FUN_0046fd70(param_1,4);
      return 0xffffffff;
    }
  }
  else if (param_3 == 2) {
    local_6 = 2;
  }
  else {
    if (param_3 != 4) {
      return 0xffffffff;
    }
    local_6 = 0;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
    *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + 1; /* TODO: SmartHeap pool lock_count at 0x60 */
  }
  piVar1 = (int *)((int)param_1 + (uint)local_6 * 4);
  iVar2 = *piVar1;
  if (param_2 != 0) {
    do {
      piVar3 = FUN_0046e980(param_1,local_6,(uint)*(ushort *)((int)param_1 + 0x28),0); /* TODO: SmartHeap pool min_block at 0x28 */
      if (piVar3 == (int *)0x0) break;
      uVar4 = uVar4 + *(ushort *)((int)param_1 + 0x28); /* TODO: SmartHeap pool min_block at 0x28 */
    } while (uVar4 < param_2);
  }
  if (iVar2 != 0) {
    *piVar1 = iVar2;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + -1; /* TODO: SmartHeap pool lock_count at 0x60 */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
  }
  return uVar4;
}



/* Function: FUN_0046e6b0 @ 0x0046e6b0
 * NOTE: SmartHeap pool grow function. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x14, 0x16c, 0x2c, 0x22, 0x164 are pool descriptor fields. NOT a game struct.
 */

bool __fastcall FUN_0046e6b0(LPCVOID param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *puVar4;
  int *puVar5;
  int *puVar6;
  uint local_8;
  int *local_4;
  
  puVar5 = (int *)0x0;
  puVar4 = (int *)0x0;
  local_4 = (int *)0x0;
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x16c) == 0) { /* TODO: SmartHeap pool field at 0x16c */
    uVar2 = 0x1000;
    puVar5 = (int *)((int)param_1 + 0x168);
    *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + -0x1000; /* TODO: SmartHeap pool current_size at 0x2c */
  }
  else {
    local_8 = FUN_00471410(param_1);
    if (local_8 < 0xffff) {
      uVar2 = 0x4000;
      if (local_8 < 0x4000) {
        uVar2 = local_8 & 0xffff;
      }
      uVar2 = uVar2 + local_8;
      if (0xfffe < uVar2) {
        uVar2 = 0xffff;
      }
      iVar3 = FUN_00471330(param_1,uVar2,(uint)(*(ushort *)((int)param_1 + 0x22) | 0x1000)); /* TODO: SmartHeap pool flags at 0x22 */
      if (iVar3 != 0) {
        puVar5 = (int *)((local_8 - 0x178 & 0xfffffff0) + 0x178 + (int)param_1);
        *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) - local_8; /* TODO: SmartHeap pool current_size at 0x2c */
      }
    }
    else {
      uVar2 = 0;
    }
  }
  if (puVar5 == (int *)0x0) {
    puVar4 = *(int **)((int)param_1 + 0x164); /* TODO: SmartHeap pool overflow_chain at 0x164 */
    if (puVar4 != (int *)0x0) {
      local_8 = FUN_00471410(puVar4);
      if (local_8 < 0xffff) {
        uVar2 = 0x4000;
        if (local_8 < 0x4000) {
          uVar2 = local_8 & 0xffff;
        }
        uVar2 = local_8 + uVar2;
        iVar3 = FUN_00471330(puVar4,uVar2,(uint)(*(ushort *)((int)param_1 + 0x22) | 0x1000)); /* TODO: SmartHeap pool flags at 0x22 */
        if (iVar3 != 0) {
          puVar5 = (int *)((local_8 - 0x14 & 0xfffffff0) + 0x14 + (int)puVar4);
          goto __label_0046e844;
        }
      }
    }
    local_8 = 0;
    uVar2 = 0x1000;
    while( true ) {
      puVar4 = FUN_00471190(uVar2,(uint)(*(ushort *)((int)param_1 + 0x22) | 0x1000)); /* TODO: SmartHeap pool flags at 0x22 */
      if (puVar4 != (int *)0x0) break;
      uVar2 = uVar2 >> 1;
      if (uVar2 < 0x14) {
        uVar2 = uVar2 * 2;
        iVar3 = FUN_0046fd70(param_1,2);
        if (iVar3 == 0) {
          return (bool)('\x01' - (*(int *)((int)param_1 + 0x14) == 0)); /* TODO: SmartHeap pool free_list at 0x14 */
        }
      }
    }
    puVar5 = puVar4 + 1;
    *puVar4 = *(int *)((int)param_1 + 0x164); /* TODO: SmartHeap pool overflow_chain at 0x164 */
    *(int **)((int)param_1 + 0x164) = puVar4; /* TODO: SmartHeap pool overflow_chain at 0x164 */
  }
  else {
    uVar2 = uVar2 + 0xfff & 0xfffff000;
    local_4 = (int *)((uVar2 - 0x18) + (int)param_1);
  }
__label_0046e844:
  if (local_4 == (int *)0x0) {
    uVar2 = uVar2 + 0xfff & 0xfffff000;
    *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) - local_8; /* TODO: SmartHeap pool current_size at 0x2c */
    local_4 = (int *)((uVar2 - 0x1c) + (int)puVar4);
  }
  *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + uVar2; /* TODO: SmartHeap pool current_size at 0x2c */
  puVar4 = *(int **)((int)param_1 + 0x14); /* TODO: SmartHeap pool free_list at 0x14 */
  do {
    puVar6 = puVar5;
    puVar6[2] = puVar4;
    uVar1 = *(ushort *)((int)puVar6 + 2) & 0x8fff; /* TODO: SmartHeap block flags */
    *(ushort *)((int)puVar6 + 2) = uVar1; /* TODO: SmartHeap block flags */
    *(ushort *)((int)puVar6 + 2) = uVar1 | 0x5000; /* TODO: SmartHeap block flags */
    puVar4 = puVar6;
    puVar5 = puVar6 + 4;
  } while (puVar6 < local_4);
  *(int **)((int)param_1 + 0x14) = puVar6; /* TODO: SmartHeap pool free_list at 0x14 */
  return true;
}



/* Function: FUN_0046e8b0 @ 0x0046e8b0
 * NOTE: SmartHeap pool free-list pop. param_1 is a SmartHeap pool descriptor.
 * Offset 0x14 = free_list head. NOT a game struct.
 */

int __fastcall FUN_0046e8b0(LPCVOID param_1,ushort param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int __extra_ret;
  ushort uVar5;
  
  if (*(int *)((int)param_1 + 0x14) == 0) { /* TODO: SmartHeap pool free_list at 0x14 */
    bVar4 = FUN_0046e6b0(param_1);
    if (CONCAT31(__extra_ret,bVar4) == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)((int)param_1 + 0x14); /* TODO: SmartHeap pool free_list at 0x14 */
  *(int *)((int)param_1 + 0x14) = *(int *)(iVar2 + 8); /* TODO: SmartHeap pool free_list at 0x14 */
  piVar1 = (int *)((int)param_1 + (uint)param_2 * 4);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *(int *)(iVar2 + 0xc) = iVar2;
    *(int *)(iVar2 + 8) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar3;
    *(int *)(iVar2 + 8) = *(int *)(iVar3 + 8);
    *(int *)(*(int *)(iVar3 + 8) + 0xc) = iVar2;
    *(int *)(iVar3 + 8) = iVar2;
  }
  *piVar1 = iVar2;
  uVar5 = *(ushort *)(iVar2 + 2) & 0x8fff;
  *(ushort *)(iVar2 + 2) = uVar5;
  *(ushort *)(iVar2 + 2) = param_2 << 0xc | uVar5;
  return iVar2;
}



/* Function: FUN_0046e920 @ 0x0046e920 */

void __fastcall FUN_0046e920(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  
  if (param_2 == *(int *)(param_2 + 8)) {
    *(int *)(param_1 + (param_3 & 0xffff) * 4) = 0;
  }
  else {
    *(int *)(*(int *)(param_2 + 0xc) + 8) = *(int *)(param_2 + 8);
    *(int *)(*(int *)(param_2 + 8) + 0xc) = *(int *)(param_2 + 0xc);
    piVar1 = (int *)(param_1 + (param_3 & 0xffff) * 4);
    if (*piVar1 == param_2) {
      *piVar1 = *(int *)(param_2 + 8);
    }
  }
  uVar2 = *(ushort *)(param_2 + 2) & 0x8fff;
  *(ushort *)(param_2 + 2) = uVar2;
  *(ushort *)(param_2 + 2) = uVar2 | 0x5000;
  *(int *)(param_2 + 8) = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = param_2;
  return;
}



/* Function: FUN_0046e980 @ 0x0046e980 */

int * __fastcall FUN_0046e980(LPCVOID param_1,ushort param_2,uint param_3,uint param_4)

{
    /* TODO: 54 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046eac0 @ 0x0046eac0
 * NOTE: SmartHeap block release. param_1 is a SmartHeap page/block descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

int __fastcall FUN_0046eac0(int *param_1,int param_2)

{
  short uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int __saved_esi;
  
  uVar1 = *(short *)((int)param_1 + 0xe); /* TODO: SmartHeap page type tag */
  iVar2 = *param_1;
  iVar3 = param_1[1];
  uVar5 = FUN_00471410(param_1);
  if ((param_2 == 0) || (bVar4 = false, *(uint *)(iVar2 + 0x30) <= *(int *)(iVar2 + 0x2c) - uVar5))
  {
    FUN_0046e920(iVar2,iVar3,CONCAT22((short)((uint)__saved_esi >> 0x10),uVar1) & 0xffff0007);
    bVar4 = true;
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) - uVar5;
  }
  if (bVar4) {
    *(short *)((int)param_1 + 0xe) = 0; /* TODO: SmartHeap page type tag */
    FUN_00471220(param_1);
    return 1;
  }
  return 0;
}



/* Function: FUN_0046eb40 @ 0x0046eb40 */

short __fastcall FUN_0046eb40(int param_1,byte param_2)

{
  *(void **)(param_1 + 8) = &__label_0046ebc0;
  *(int *)(param_1 + 0x10) = 0;
  *(short *)(param_1 + 0xc) = 1;
  *(byte *)(param_1 + 0x15) = param_2 & 2;
  return 0;
}



/* Function: FUN_0046eb60 @ 0x0046eb60
 * NOTE: SmartHeap large-block allocator. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x2c, 0x34 are pool descriptor fields. NOT a game struct.
 */

int * __fastcall FUN_0046eb60(LPCVOID param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    piVar1 = FUN_0046e980(param_1,3,param_3 + 0x1c,param_2);
    if (piVar1 != (int *)0x0) {
      return piVar1 + 7;
    }
    iVar2 = FUN_0046e500((int)param_1);
    if (*(uint *)((int)param_1 + 0x34) < /* TODO: SmartHeap pool max_size at 0x34 */
        (param_3 + 0x101bU & 0xfffff000) + *(int *)((int)param_1 + 0x2c)) break; /* TODO: SmartHeap pool current_size at 0x2c */
    if ((iVar2 == 0) && (iVar2 = FUN_0046fd70(param_1,2), iVar2 == 0)) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* Function: FUN_0046ebd0 @ 0x0046ebd0 */

int __fastcall FUN_0046ebd0(int *param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *param_1;
  uVar2 = FUN_00471410(param_1);
  uVar6 = (param_4 & 5) << 8 | (uint)*(ushort *)(iVar1 + 0x22);
  if (param_2 == (int *)0x0) {
    iVar5 = FUN_00471330(param_1,param_3 + 0x1cU,uVar6 | 0x2000);
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    iVar5 = param_1[1];
    while (piVar3 = FUN_00471280(param_1,param_3 + 0x1cU,uVar6 | 0x2000), piVar3 == (int *)0x0) {
      iVar4 = FUN_0046fd70(iVar1,2);
      if (iVar4 == 0) {
        *param_2 = 0;
        return 0;
      }
    }
    *(int **)(iVar5 + 4) = piVar3;
    *param_2 = (int)(piVar3 + 7);
    param_1 = piVar3;
  }
  uVar6 = FUN_00471410(param_1);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + (uVar6 - uVar2);
  return 1;
}



/* Function: FUN_0046ecb0 @ 0x0046ecb0 */

int __fastcall FUN_0046ecb0(int param_1,int param_2,short param_3)

{
  int *puVar1;
  
  *(int *)(param_2 + 0x14) = param_2 + 0x1c;
  *(int *)(param_2 + 0x10) = 0;
  *(void **)(param_2 + 8) = &__label_0046ef60;
  puVar1 = FUN_0046ece0(param_2,(ushort)*(int *)(param_1 + 0x24),param_3);
  return CONCAT22((short)((uint)puVar1 >> 0x10),1);
}



/* Function: FUN_0046ece0 @ 0x0046ece0 */

void ** __fastcall FUN_0046ece0(int param_1,ushort param_2,short param_3)

{
  int iVar1;
  int *puVar2;
  ushort uVar3;
  int __reg_eax;
  int *puVar4;
  
  puVar2 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x10) = puVar2;
  uVar3 = param_3 + ((short)param_1 - (short)puVar2);
  puVar4 = (int *)CONCAT22((short)((uint)__reg_eax >> 0x10),uVar3 / param_2);
  iVar1 = ((uint)uVar3 - (uint)uVar3 % (uint)param_2) + (int)puVar2;
  *(int *)(param_1 + 0x14) = iVar1;
  while (puVar2 < (int *)(iVar1 - (uint)param_2)) {
    puVar4 = (int *)((uint)param_2 + (int)puVar2);
    *puVar2 = puVar4;
    puVar2 = puVar4;
  }
  *puVar2 = 0;
  return puVar4;
}



/* Function: FUN_0046efa0 @ 0x0046efa0
 * NOTE: SmartHeap pool initialization. param_1 is a SmartHeap pool descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

uint __fastcall FUN_0046efa0(int *param_1,uint param_2)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  short *puVar4;
  ushort uVar5;
  
  puVar1 = (ushort *)((int)param_1 + 0x1a);
  puVar4 = (short *)
           ((((param_2 & 0xffff) - ((int)puVar1 - (int)param_1 & 0xffffU)) - 10 & 0xfffc) +
           (int)puVar1);
  *puVar4 = 1;
  param_1[4] = (int)puVar1;
  piVar2 = param_1 + 6;
  *(short **)(puVar4 + 3) = puVar4;
  *(short **)(puVar4 + 1) = puVar4;
  param_1[5] = (int)puVar4;
  uVar5 = *(ushort *)((int)param_1 + 0xe) & 7; /* TODO: SmartHeap page type field */
  if (uVar5 == 2) {
    *(short *)piVar2 = 0xc;
  }
  else {
    uVar3 = *(int *)(*param_1 + 0x24) + 3;
    if (uVar3 < 0xd) {
      uVar3 = 0xc;
    }
    *(short *)piVar2 = (short)uVar3;
  }
  if (uVar5 != 2) {
    *(short *)piVar2 = 0x40;
  }
  uVar5 = (ushort)((int)puVar4 - (int)puVar1);
  puVar4[-1] = uVar5;
  *puVar1 = uVar5 | 2;
  param_1[8] = (int)puVar4;
  param_1[7] = *(int *)(puVar4 + 1);
  *(ushort **)(*(int *)(puVar4 + 1) + 6) = puVar1;
  *(ushort **)(puVar4 + 1) = puVar1;
  param_1[2] = (int)&__label_0046f660;
  return CONCAT22((short)((uint)((int)puVar4 - (int)puVar1) >> 0x10),*puVar1) & 0xfffffffc;
}



/* Function: FUN_0046f040 @ 0x0046f040 */

int __fastcall FUN_0046f040(int param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = param_2 + param_1;
  *(int *)(param_1 + 0x10) = param_1 + 0x1c;
  *(void (**)(void))(param_1 + 8) = FUN_0046f270;
  return CONCAT22((short)((uint)(param_1 + 0x1c) >> 0x10),1);
}



/* Function: FUN_0046f060 @ 0x0046f060
 * NOTE: SmartHeap pool allocation dispatcher. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x20, 0x22, 0x2a, 0x48, 0x60 are pool descriptor fields. NOT a game struct.
 */

ushort * FUN_0046f060(LPCVOID param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  
  if (*(short *)((int)param_1 + 0x20) == -0x4153) { /* TODO: SmartHeap pool signature at 0x20 */
    if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
      EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
      *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + 1; /* TODO: SmartHeap pool lock_count at 0x60 */
    }
    if (param_2 < 0xff) {
      if (param_2 == 0) {
        puVar1 = (ushort *)0x0;
        FUN_0046fd70(param_1,4);
      }
      else {
        puVar1 = FUN_0046f110(param_1,param_3,(ushort)param_2);
      }
    }
    else if (*(ushort *)((int)param_1 + 0x2a) < param_2) { /* TODO: SmartHeap pool max_small_block at 0x2a */
      puVar1 = (ushort *)FUN_0046eb60(param_1,param_3 & 0xfffffffd,param_2);
    }
    else {
      puVar1 = FUN_0046f290(param_1,param_3 & 0xfffffffd,(ushort)param_2);
    }
    if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
      *(int *)((int)param_1 + 0x60) = *(int *)((int)param_1 + 0x60) + -1; /* TODO: SmartHeap pool lock_count at 0x60 */
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x48)); /* TODO: SmartHeap pool critical_section at 0x48 */
    }
    return puVar1;
  }
  FUN_0046fd70(0,10);
  return (ushort *)0x0;
}



/* Function: FUN_0046f110 @ 0x0046f110
 * NOTE: SmartHeap small-block allocator. param_1 is a SmartHeap pool descriptor.
 * Offset 0x10 = slab allocator head. NOT a game struct.
 */

ushort * __fastcall FUN_0046f110(LPCVOID param_1,uint param_2,ushort param_3)

{
  short *psVar1;
  int *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  
  if (param_3 < 4) {
    param_3 = 4;
  }
  uVar3 = param_3 >> 2;
  uVar8 = (uint)uVar3;
  puVar2 = (int *)((int)param_1 + uVar8 * 4 + 100);
  puVar7 = (ushort *)*puVar2;
  if (puVar7 != (ushort *)0x0) {
    *puVar2 = *(int *)puVar7;
    psVar1 = (short *)(((uint)puVar7 & 0xffff0000) + 0xc);
    *psVar1 = *psVar1 + 1;
    if ((param_2 & 1) != 0) {
      uVar9 = uVar8 * 4 + 3;
      puVar10 = puVar7;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar10[0] = 0;
        puVar10[1] = 0;
        puVar10 = puVar10 + 2;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar10 = 0;
        puVar10 = (ushort *)((int)puVar10 + 1);
      }
    }
    return puVar7;
  }
  uVar4 = uVar3 * 4 + 4;
  psVar1 = *(short **)((int)param_1 + 0x10); /* TODO: SmartHeap pool slab_head at 0x10 */
  uVar9 = param_2;
  if ((psVar1 == (short *)0x0) ||
     (uVar9 = *(uint *)(psVar1 + 2),
     (ushort)((short)*(int *)(uVar9 + 0x14) - (short)*(int *)(uVar9 + 0x10)) < uVar4))
  {
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      puVar2 = *(int **)(uVar9 + 0x10);
      if (*(int **)(uVar9 + 0x14) != puVar2) {
        uVar5 = (int)*(int **)(uVar9 + 0x14) - (int)puVar2;
        if (7 < uVar5) {
          *(char *)((int)puVar2 + -1) = (char)((int)(uVar5 - 4) >> 2);
          *(short *)(uVar9 + 0xc) = *(short *)(uVar9 + 0xc) + 1;
          FUN_0046f270(puVar2);
          *(int *)(uVar9 + 0x10) = *(int *)(uVar9 + 0x14);
        }
        *psVar1 = 0;
      }
    }
    if (((param_2 & 0x10) != 0) ||
       (piVar6 = FUN_0046e980(param_1,4,0x10000,0), piVar6 == (int *)0x0)) {
      puVar7 = FUN_0046f290(param_1,param_2 & 0xfffffffd,param_3);
      return puVar7;
    }
    uVar9 = *(uint *)(*(int *)((int)param_1 + 0x10) + 4); /* TODO: SmartHeap pool slab_head at 0x10 */
  }
  puVar7 = *(ushort **)(uVar9 + 0x10);
  *(char *)((int)puVar7 + -1) = (char)uVar3;
  *(int *)(uVar9 + 0x10) = *(int *)(uVar9 + 0x10) + (uint)uVar4;
  *(short *)(uVar9 + 0xc) = *(short *)(uVar9 + 0xc) + 1;
  if ((param_2 & 1) != 0) {
    uVar9 = uVar8 * 4 + 3;
    puVar10 = puVar7;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 2;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(char *)puVar10 = 0;
      puVar10 = (ushort *)((int)puVar10 + 1);
    }
  }
  return puVar7;
}



/* Function: FUN_0046f270 @ 0x0046f270 */

void __fastcall FUN_0046f270(int *param_1)

{
  int *piVar1;
  int *puVar2;
  
  puVar2 = (int *)
           (*(int *)((uint)param_1 & 0xffff0000) + 100 + *(char *)((int)param_1 + -1) * 4);
  *param_1 = *puVar2;
  *puVar2 = param_1;
  piVar1 = (int *)((uint)param_1 & 0xffff0000) + 3;
  *(short *)piVar1 = (short)*piVar1 + -1;
  return;
}



/* Function: FUN_0046f290 @ 0x0046f290 */

ushort * __fastcall FUN_0046f290(LPCVOID param_1,uint param_2,short param_3)

{
    /* TODO: 58 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046f420 @ 0x0046f420 */

ushort * __fastcall FUN_0046f420(int *param_1,ushort param_2,uint param_3)

{
    /* TODO: 87 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046f5f0 @ 0x0046f5f0 */

int FUN_0046f5f0(uint param_1)

{
    /* TODO: 20 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046f750 @ 0x0046f750
 * NOTE: SmartHeap realloc. param_1 points into a SmartHeap page.
 * Offsets 0x0e, 0x22, 0x48, 0x60 are SmartHeap page/pool descriptor fields.
 * pvVar3 is derived pool descriptor. NOT a game struct.
 */

ushort * FUN_0046f750(ushort *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  short local_2;
  uint uVar12;
  
  if ((*(ushort *)((int)((uint)param_1 & 0xffff0000) + 0xe) & 0xfff8) != 0xcad0) { /* TODO: SmartHeap page magic check */
    FUN_0046fd70(0,0xe);
    return (ushort *)0x0;
  }
  iVar2 = *(int *)((uint)param_1 & 0xffff0000);
  if ((*(byte *)(iVar2 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x48));
    piVar1 = (int *)(*(int *)((uint)param_1 & 0xffff0000) + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  uVar5 = param_3;
  uVar4 = param_2;
  uVar10 = param_3 & 8;
  pvVar3 = *(LPCVOID *)((uint)param_1 & 0xffff0000);
  uVar6 = FUN_0046f870((int *)(-(uint)(uVar10 == 0) & (uint)&param_1),(uint)param_1,param_2,param_3)
  ;
  uVar12 = uVar6 & 0xffff;
  uVar8 = uVar12;
  if ((*(byte *)((int)pvVar3 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    *(int *)((int)pvVar3 + 0x60) = *(int *)((int)pvVar3 + 0x60) + -1; /* TODO: SmartHeap pool lock_count at 0x60 */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)pvVar3 + 0x48));
  }
  local_2 = (short)uVar6;
  if (local_2 == 0) {
    return param_1;
  }
  if (uVar10 == 0) {
    puVar7 = FUN_0046f060(pvVar3,uVar4,uVar5);
    if (puVar7 != (ushort *)0x0) {
      puVar9 = param_1;
      puVar11 = puVar7;
      for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(int *)puVar11 = *(int *)puVar9;
        puVar9 = puVar9 + 2;
        puVar11 = puVar11 + 2;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar11 = (char)*puVar9;
        puVar9 = (ushort *)((int)puVar9 + 1);
        puVar11 = (ushort *)((int)puVar11 + 1);
      }
      FUN_0046f5f0((uint)param_1);
    }
    return puVar7;
  }
  if (uVar4 != 0) {
    FUN_0046fd70(pvVar3,5);
  }
  return (ushort *)0x0;
}



/* Function: FUN_0046f870 @ 0x0046f870
 * NOTE: SmartHeap resize implementation. piVar6 is a SmartHeap page descriptor.
 * Offset 0x0e = page type tag, 0x2a = max_small_block. NOT a game struct.
 */

uint __fastcall FUN_0046f870(int *param_1,uint param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int uVar3;
  ushort uVar5;
  ushort *puVar4;
  int *piVar6;
  uint uVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  int *puVar11;
  
  piVar6 = (int *)(param_2 & 0xffff0000);
  if (param_3 == 0) {
    uVar3 = FUN_0046fd70(*piVar6,4);
    uVar5 = (ushort)((uint)uVar3 >> 0x10);
    if (param_1 == (int *)0x0) {
      return CONCAT22(uVar5,1);
    }
    *param_1 = 0;
    return (uint)uVar5 << 0x10;
  }
  uVar5 = (ushort)param_3;
  switch(*(ushort *)((int)piVar6 + 0xe) & 7) { /* TODO: SmartHeap page type field */
  case 0:
  case 2:
    puVar1 = (ushort *)(param_2 - 2);
    uVar9 = *puVar1 & 0x7ffc;
    uVar2 = uVar9 - 2;
    if ((*puVar1 & 0x8000) != 0) {
      uVar2 = uVar9 - 8;
    }
    uVar7 = (uint)uVar2;
    if ((uVar7 < param_3) && (*(ushort *)(*piVar6 + 0x2a) < param_3)) {
      return CONCAT22((short)((uint)*piVar6 >> 0x10),uVar2);
    }
    puVar4 = (ushort *)FUN_0046faf0(puVar1,uVar5);
    if (puVar4 == (ushort *)0x0) {
      return (uint)uVar2;
    }
    if ((param_4 & 1) != 0) {
      uVar9 = (*puVar1 & 0x7ffc) - 2;
      if (uVar2 < uVar5) {
        puVar11 = (int *)(uVar7 + param_2);
        for (uVar10 = uVar9 - uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar9 - uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar11 = 0;
          puVar11 = (int *)((int)puVar11 + 1);
        }
        return 0;
      }
      puVar4 = puVar1;
      if (uVar5 < uVar9) {
        uVar10 = (uint)uVar9 - (param_3 & 0xffff);
        puVar11 = (int *)((param_3 & 0xffff) + param_2);
        for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(char *)puVar11 = 0;
          puVar11 = (int *)((int)puVar11 + 1);
        }
        return 0;
      }
    }
    break;
  case 1:
    puVar4 = (ushort *)*piVar6;
    puVar1 = *(ushort **)(puVar4 + 0x12);
    if (puVar1 < param_3) {
      return CONCAT22((short)((uint)puVar4 >> 0x10),(short)puVar1);
    }
    if (((param_4 & 1) != 0) && (puVar4 = (ushort *)(param_3 & 0xffff), puVar4 < puVar1)) {
      puVar11 = (int *)((int)puVar4 + param_2);
      for (uVar7 = (uint)((int)puVar1 - (int)puVar4) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = (int)puVar1 - (int)puVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar11 = 0;
        puVar11 = (int *)((int)puVar11 + 1);
      }
      return 0;
    }
    break;
  case 3:
    if ((param_1 != (int *)0x0) && (param_3 <= *(ushort *)(*piVar6 + 0x2a))) {
      uVar7 = FUN_0046fcc0(param_2);
      uVar9 = (ushort)uVar7;
      if (param_3 <= uVar7) {
        uVar9 = uVar5;
      }
      return CONCAT22((short)(uVar7 >> 0x10),uVar9);
    }
    puVar4 = (ushort *)FUN_0046ebd0(piVar6,param_1,param_3,param_4);
    if ((puVar4 == (ushort *)0x0) && (param_1 == (int *)0x0)) {
      return 1;
    }
    break;
  case 4:
    sVar8 = *(char *)(param_2 - 1) * 4;
    uVar9 = sVar8 + 3;
    if ((0xfe < param_3) ||
       (uVar2 = (ushort)(param_3 + 4) ^ sVar8 + 7U,
       puVar4 = (ushort *)CONCAT22((short)(param_3 + 4 >> 0x10),uVar2), (uVar2 & 0xfffc) != 0)) {
      uVar7 = (uint)uVar9;
      if (param_3 <= uVar9) {
        uVar7 = param_3;
      }
      return uVar7;
    }
    if (((param_4 & 1) != 0) && (uVar5 < uVar9)) {
      uVar10 = (uint)uVar9 - (param_3 & 0xffff);
      puVar11 = (int *)((param_3 & 0xffff) + param_2);
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar10 & 3; puVar4 = (ushort *)0x0, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(char *)puVar11 = 0;
        puVar11 = (int *)((int)puVar11 + 1);
      }
    }
    break;
  default:
    if (param_1 == (int *)0x0) {
      return 1;
    }
    *param_1 = 0;
    return 0;
  }
  return (uint)puVar4 & 0xffff0000;
}



/* Function: FUN_0046faf0 @ 0x0046faf0 */

int __fastcall FUN_0046faf0(ushort *param_1,short param_2)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  
  uVar2 = *param_1;
  uVar4 = param_2 + 5U & 0xfffc;
  if (uVar4 < 0xd) {
    uVar4 = 0xc;
  }
  if ((uVar2 & 0x7ffc) < uVar4) {
    puVar5 = (ushort *)((uVar2 & 0x7ffc) + (int)param_1);
    if (((*puVar5 & 1) != 0) || ((*puVar5 & 0xfffc) + (uVar2 & 0x7ffc) < (uint)uVar4)) {
      return 0;
    }
    uVar8 = (uint)param_1 & 0xffff0000;
    if (*(ushort **)(uVar8 + 0x10) == puVar5) {
      *(int *)(uVar8 + 0x10) = *(int *)(puVar5 + 1);
    }
    *(int *)(*(int *)(puVar5 + 3) + 2) = *(int *)(puVar5 + 1);
    *(int *)(*(int *)(puVar5 + 1) + 6) = *(int *)(puVar5 + 3);
    uVar6 = ((uVar2 & 0x7ffc) - uVar4) + (*puVar5 & 0xfffc);
    if ((*param_1 & 0x8000) == 0) {
      uVar2 = *(ushort *)(uVar8 + 0x18);
    }
    else {
      uVar2 = 0xc;
    }
    if (uVar6 < uVar2) {
      *param_1 = (*puVar5 & 0xfffc) + *param_1;
      pbVar1 = (byte *)((*puVar5 & 0xfffc) + (int)puVar5);
      *pbVar1 = *pbVar1 | 2;
      return 1;
    }
  }
  else {
    uVar7 = 0xc;
    uVar6 = (uVar2 & 0x7ffc) - uVar4;
    if ((uVar2 & 0x8000) == 0) {
      uVar7 = *(ushort *)(((uint)param_1 & 0xffff0000) + 0x18);
    }
    if (uVar6 < uVar7) {
      return 1;
    }
    puVar5 = (ushort *)((uVar2 & 0x7ffc) + (int)param_1);
    if ((*puVar5 & 1) == 0) {
      uVar6 = uVar6 + (*puVar5 & 0xfffc);
      if (*(ushort **)(((uint)param_1 & 0xffff0000) + 0x10) == puVar5) {
        *(int *)(((uint)param_1 & 0xffff0000) + 0x10) = *(int *)(puVar5 + 1);
      }
      *(int *)(*(int *)(puVar5 + 3) + 2) = *(int *)(puVar5 + 1);
      *(int *)(*(int *)(puVar5 + 1) + 6) = *(int *)(puVar5 + 3);
    }
    puVar5 = *(ushort **)(((uint)param_1 & 0xffff0000) + 4);
    if (*puVar5 < uVar6) {
      *puVar5 = uVar6;
    }
  }
  puVar5 = (ushort *)((uint)uVar4 + (int)param_1);
  *param_1 = *param_1 & 0x8003 | uVar4;
  *puVar5 = uVar6 | 2;
  iVar3 = *(int *)(((uint)param_1 & 0xffff0000) + 0x14);
  *(int *)(puVar5 + 3) = iVar3;
  *(int *)(puVar5 + 1) = *(int *)(iVar3 + 2);
  *(ushort **)(*(int *)(iVar3 + 2) + 6) = puVar5;
  *(ushort **)(iVar3 + 2) = puVar5;
  puVar5 = (ushort *)((int)puVar5 + (uint)uVar6);
  puVar5[-1] = uVar6;
  *puVar5 = *puVar5 & 0xfffd;
  return 1;
}



/* Function: FUN_0046fcc0 @ 0x0046fcc0
 * NOTE: SmartHeap block size query. piVar3 is a SmartHeap page descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

int FUN_0046fcc0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 & 0xffff0000);
  if ((*(ushort *)((int)piVar3 + 0xe) & 0xfff8) != 0xcad0) { /* TODO: SmartHeap page magic check */
    FUN_0046fd70(0,0xe);
    return -1;
  }
  switch(*(ushort *)((int)piVar3 + 0xe) & 7) { /* TODO: SmartHeap page type field */
  case 0:
  case 2:
    uVar2 = *(ushort *)(param_1 - 2) & 0x7ffc;
    iVar1 = uVar2 - 2;
    if ((*(ushort *)(param_1 - 2) & 0x8000) != 0) {
      return uVar2 - 8;
    }
    break;
  case 1:
    return *(int *)(*piVar3 + 0x24);
  case 3:
    uVar2 = FUN_00471410(piVar3);
    return uVar2 - 0x1c;
  case 4:
    iVar1 = *(char *)(param_1 - 1) * 4 + 3;
    break;
  default:
    return -1;
  }
  return iVar1;
}



/* Function: FUN_0046fd70 @ 0x0046fd70 */

int __fastcall FUN_0046fd70(LPCVOID param_1,int param_2)

{
    /* TODO: 93 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0046ff60 @ 0x0046ff60 */

bool __thiscall FUN_0046ff60(void *this,int param_1)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  iVar2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (iVar2 == 0) {
    return false;
  }
  pDVar3 = FUN_00471930((int)this,1);
  if (pDVar3 == (DWORD *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
    FUN_004719b0(s_Memory_errors_in_too_many_thread_00483f88,0);
    return true;
  }
  DVar1 = pDVar3[1];
  pDVar3[1] = DVar1 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  if (param_1 - DVar1 == -1) {
    FUN_004719b0(s_SmartHeap_error_handler_recursiv_00483fbc,0);
  }
  return param_1 < (int)DVar1;
}



