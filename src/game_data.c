/*
 * game_data.c - Data management
 * Address range: 0x450000 - 0x45BFFF
 * Functions: 472
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_004517c0 @ 0x004517c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004517c0(void)

{
  _DAT_00488ffe = 0;
  _DAT_00488ffc = 0;
  return;
}



/* Function: FUN_004517d0 @ 0x004517d0 */

void FUN_004517d0(void)

{
  _atexit(FUN_004517e0);
  return;
}



/* Function: FUN_004517e0 @ 0x004517e0 */

void FUN_004517e0(void)

{
  return;
}



/* Function: FUN_00451800 @ 0x00451800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451800(void)

{
  _DAT_00488ffa = 0;
  _DAT_00488ff8 = 0;
  return;
}



/* Function: FUN_00451810 @ 0x00451810 */

void FUN_00451810(void)

{
  _atexit(FUN_00451820);
  return;
}



/* Function: FUN_00451820 @ 0x00451820 */

void FUN_00451820(void)

{
  return;
}



/* Function: FUN_00451b80 @ 0x00451b80 */

/* Function: FUN_00451b80 @ 0x00451b80
 * Struct types: TextDisplay (param_1)
 * TODO: offset 0x228 in _pad region of TextDisplay, needs investigation
 */
int __fastcall FUN_00451b80(TextDisplay *param_1)

{
  return *(int *)((int)param_1 + 0x228); /* TODO: unknown offset 0x228 on TextDisplay */
}



/* Function: FUN_00451b90 @ 0x00451b90 */

/* Function: FUN_00451b90 @ 0x00451b90
 * Struct types: TextDisplay (param_1)
 */
int __fastcall FUN_00451b90(TextDisplay *param_1)

{
  return param_1->max_entries;
}



/* Function: FUN_00451ba0 @ 0x00451ba0 */

int __thiscall FUN_00451ba0(MathProblem *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < this->slots[2].value)) {
    return *(int *)(param_1 * 0x12 + 0x238 + (intptr_t)this);
  }
  return 0xffffffff;
}



/* Function: FUN_00451bd0 @ 0x00451bd0 */

char __thiscall FUN_00451bd0(MathProblem *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < this->slots[2].value)) {
    return (&DAT_00480848)[(uint)*(byte *)(param_1 * 0x12 + 0x232 + (intptr_t)this) * 4];
  }
  return 0xff;
}



/* Function: FUN_00451c00 @ 0x00451c00 */

uint __thiscall FUN_00451c00(MathProblem *this,int param_1,uint param_2)

{
  if ((((-1 < (int)param_2) && ((int)param_2 < this->slots[2].value)) && (-1 < param_1)) &&
     (param_1 < this->slots[1].value)) {
    *(int *)(param_2 * 0x12 + 0x23c + (intptr_t)this) = param_1;
    return CONCAT31(param_2 * 0x12 >> 8,1);
  }
  return param_2 & 0xffffff00;
}



/* Function: FUN_00451c40 @ 0x00451c40 */

uint __thiscall FUN_00451c40(MathProblem *this,int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < this->slots[2].value)) {
    *(int *)(param_2 * 0x12 + 0x23c + (intptr_t)this) = 0xffffffff;
    return CONCAT31(param_2 * 2 >> 8,1);
  }
  return param_2 & 0xffffff00;
}



/* Function: FUN_00451c70 @ 0x00451c70 */

int FUN_00451c70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  do {
    do {
      iVar1 = rand();
      iVar1 = iVar1 % 7;
    } while (iVar1 == param_1);
  } while ((iVar1 == param_2) || (iVar1 == param_3));
  return iVar1;
}



/* Function: FUN_00451cb0 @ 0x00451cb0 */

void FUN_00451cb0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
    do {
      uVar1 = rand();
      uVar3 = (int)uVar1 >> 0x1f;
      iVar2 = ((uVar1 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3;
    } while (iVar2 == param_1);
  } while ((iVar2 == param_2) || (iVar2 == param_3));
  return;
}



/* Function: FUN_00451cf0 @ 0x00451cf0 */

/* Function: FUN_00451cf0 @ 0x00451cf0
 * TODO: unknown struct type with stride-0x16 array at offsets 0x1D4, 0x1DE
 */
uint __thiscall FUN_00451cf0(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)((int)this + param_1 * 0x16 + 0x1de); /* TODO: unknown struct, stride-0x16 array */
  iVar2 = rand();
  return *(uint *)(**(int **)((int)this + param_1 * 0x16 + 0x1d4) /* TODO: unknown struct, stride-0x16 array at +0x1D4 */ + (iVar2 % iVar1) * 4) >> 0x10;
}



/* Function: FUN_00451d30 @ 0x00451d30 */

void __thiscall FUN_00451d30(void *this,int param_1)

{
  FUN_0044c7e0(this,(&DAT_00480868)[param_1],0,'\x01');
  return;
}



/* Function: FUN_00451d50 @ 0x00451d50 */

void __thiscall FUN_00451d50(void *this,int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_0044c7e0(this,*(int *)(&DAT_004808b8 + param_1 * 4),0,'\x01');
    return;
  }
  FUN_0044c7e0(this,*(int *)(&DAT_004808a8 + param_1 * 4),0,'\x01');
  return;
}



/* Function: FUN_00451d80 @ 0x00451d80 */

int __thiscall FUN_00451d80(MathProblem *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = this->slots[2].value;
  if (0 < iVar3) {
    piVar2 = (int *)&this->slots[2].flags;
    do {
      if (*piVar2 == param_1) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = (int *)((int)piVar2 + 0x12);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



/* Function: FUN_00451db0 @ 0x00451db0 */

int __thiscall FUN_00451db0(MathProblem *this,int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = this->slots[2].value;
  if (0 < iVar3) {
    piVar2 = (int *)&this->slots[2].flags;
    do {
      if ((*piVar2 == param_1) && (*(byte *)((int)piVar2 + -10) == param_2)) { /* TODO: piVar2-10 = AnswerSlot.symbol relative to flags ptr */
        iVar1 = iVar1 + 1;
      }
      piVar2 = (int *)((int)piVar2 + 0x12);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



/* Function: FUN_00451df0 @ 0x00451df0 */

int __thiscall FUN_00451df0(MathProblem *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = this->slots[2].value;
  if (0 < iVar3) {
    piVar2 = (int *)&this->slots[2].flags;
    do {
      if ((*piVar2 == param_1) && (piVar2[-2] == param_2)) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = (int *)((int)piVar2 + 0x12);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



/* Function: FUN_00451ee0 @ 0x00451ee0 */

/* Function: FUN_00451ee0 @ 0x00451ee0
 * Struct types: TextDisplay (param_1) - based on offset 0x406 = field_406
 */
int * __fastcall FUN_00451ee0(TextDisplay *param_1)

{
  int iVar1;
  int *puVar2;

  *(void ***)param_1 = &PTR_FUN_00476250; /* vtable assignment */
  param_1->field_406 = 0;
  *(short *)((int)param_1 + 4) = 0x100; /* TODO: offset 0x04 on unknown struct, initialization to 256 */
  puVar2 = (int *)((int)param_1 + 6);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



/* Function: FUN_00451f10 @ 0x00451f10 */

int * __thiscall FUN_00451f10(void *this,byte param_1)

{
  FUN_00451f60(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00451f30 @ 0x00451f30 */

int * __thiscall FUN_00451f30(void *this,int *param_1)

{
  *(void ***)this = &PTR_FUN_00476250; /* vtable assignment */
  ((TextDisplay *)this)->field_406 = 0;
  *(short *)((intptr_t)this + 4) = 0x100;
  FUN_00451f70(this,param_1);
  return this;
}



/* Function: FUN_00451f60 @ 0x00451f60 */

void __fastcall FUN_00451f60(int *param_1)

{
  *param_1 = &PTR_FUN_00476250;
  FUN_00452210((TextDisplay *)param_1);
  return;
}



/* Function: FUN_00451f70 @ 0x00451f70 */

void __thiscall FUN_00451f70(GameWidget *this,int *param_1)

{
  int iVar1;
  int *puVar2;
  
  this->field_04 = 0x100;
  puVar2 = (int *)&this->field_06;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00452210((TextDisplay *)this);
  return;
}



/* Function: FUN_00451fa0 @ 0x00451fa0 */

int __thiscall
FUN_00451fa0(void *this,char *param_1,int param_2,short param_3,short param_4,
            short param_5)

{
    /* TODO: 37 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00452050 @ 0x00452050 */

short __thiscall
FUN_00452050(void *this,int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (0xfe < param_3) {
    param_3 = 0xfe;
  }
  if (param_2 <= param_3) {
    do {
      if ((((param_4 != param_2) &&
           (iVar1 = (int)param_2, *(char *)((int)this + iVar1 * 4 + 6) == (char)param_1)) && /* TODO: stride-4 byte array at this+6, color palette lookup */
          (*(char *)((int)this + iVar1 * 4 + 7) == ((unsigned char)((param_1) >> 8)))) &&
         ((*(char *)((int)this + iVar1 * 4 + 8) == ((unsigned char)((param_1) >> 16)) &&
          (*(char *)((int)this + iVar1 * 4 + 9) == ((unsigned char)((param_1) >> 24)))))) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return -1;
}



/* Function: FUN_004520c0 @ 0x004520c0 */

void __thiscall
FUN_004520c0(void *this,int param_1,short param_2,short param_3,short param_4)

{
  FUN_00451fa0(this,&LAB_00451e80,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004520f0 @ 0x004520f0 */

void __thiscall
FUN_004520f0(void *this,int param_1,short param_2,short param_3,short param_4)

{
  FUN_00451fa0(this,&LAB_00451e30,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00452120 @ 0x00452120 */

int __thiscall FUN_00452120(GameWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = this->field_04 * 4;
  iVar1 = *(short *)(param_1 + 4) * 4;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  bVar5 = false;
  iVar1 = 0;
  bVar6 = true;
  pbVar3 = (byte *)&this->field_06;
  pbVar4 = (byte *)(param_1 + 6);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pbVar3 < *pbVar4;
    bVar6 = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  return CONCAT31((unsigned int)((uint)iVar1 >> 8),iVar1 == 0);
}



/* Function: FUN_00452160 @ 0x00452160 */

int __thiscall FUN_00452160(void *this,void *param_1,int param_2,char *param_3)

{
  short sVar1;
  int uVar2;
  short extraout_var;
  char *puVar3;
  short sVar4;
  int iVar5;
  
  uVar2 = FUN_00452120(this,(int)param_1);
  if ((char)uVar2 == '\0') {
    sVar4 = 1;
    puVar3 = *(char **)(param_2 + 4);
    *puVar3 = 0;
    if (1 < *(short *)((intptr_t)this + 4)) { /* TODO: unknown struct, offset 0x04 = count field */
      do {
        iVar5 = (int)sVar4;
        sVar1 = FUN_00452050(param_1,*(int *)((intptr_t)this + iVar5 * 4 + 6),0,0xfe,-1); /* TODO: offset 0x06 = color table entries */
        puVar3 = (char *)CONCAT22(extraout_var,sVar1);
        if (sVar1 == -1) {
          puVar3 = (char *)
                   FUN_00451fa0(param_1,param_3,*(int *)((intptr_t)this + iVar5 * 4 + 6),0,0xfe,-1
                               );
        }
        sVar4 = sVar4 + 1;
        *(char *)(*(int *)(param_2 + 4) + iVar5) = (char)puVar3;
      } while (sVar4 < *(short *)((intptr_t)this + 4));
    }
    return (uint)puVar3 & 0xffffff00;
  }
  sVar4 = 0;
  if (0 < *(short *)((intptr_t)this + 4)) {
    do {
      uVar2 = CONCAT22((short)((uint)uVar2 >> 0x10),sVar4);
      iVar5 = (int)sVar4;
      sVar4 = sVar4 + 1;
      *(char *)(iVar5 + *(int *)(param_2 + 4)) = (char)sVar4;
    } while (sVar4 < *(short *)((intptr_t)this + 4));
  }
  return CONCAT31((unsigned int)((uint)uVar2 >> 8),1);
}



/* Function: FUN_00452210 @ 0x00452210 */

/* Function: FUN_00452210 @ 0x00452210
 * Struct types: TextDisplay (param_1) - offset 0x406 = field_406
 */
void __fastcall FUN_00452210(TextDisplay *param_1)

{
  char *pcVar1;

  pcVar1 = (char *)(intptr_t)param_1->field_406;
  if (pcVar1 != (char *)0x0) {
    thunk_FUN_0042f1c0(pcVar1);
    FUN_0046c410((uint)pcVar1);
  }
  param_1->field_406 = 0;
  return;
}



/* Function: FUN_00452240 @ 0x00452240 */

int __thiscall FUN_00452240(void *this,void *param_1,int param_2)

{
    /* TODO: 11 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00452290 @ 0x00452290 */

void FUN_00452290(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489000,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004522e0 @ 0x004522e0 */

void FUN_004522e0(void)

{
  return;
}



/* Function: FUN_00452300 @ 0x00452300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452300(void)

{
  _DAT_0048900e = 0;
  _DAT_0048900c = 0;
  return;
}



/* Function: FUN_00452310 @ 0x00452310 */

void FUN_00452310(void)

{
  _atexit(FUN_00452320);
  return;
}



/* Function: FUN_00452320 @ 0x00452320 */

void FUN_00452320(void)

{
  return;
}



/* Function: FUN_00452340 @ 0x00452340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452340(void)

{
  _DAT_0048900a = 0;
  _DAT_00489008 = 0;
  return;
}



/* Function: FUN_00452350 @ 0x00452350 */

void FUN_00452350(void)

{
  _atexit(FUN_00452360);
  return;
}



/* Function: FUN_00452360 @ 0x00452360 */

void FUN_00452360(void)

{
  return;
}



/* Function: FUN_00452370 @ 0x00452370 */

char * __fastcall FUN_00452370(char *param_1)

{
    /* TODO: 110 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004524e0 @ 0x004524e0 */

void __fastcall FUN_004524e0(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00452525;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  ((UIWidget *)param_1)->animation_timer = 0;
  FUN_0045252f();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045252f @ 0x0045252f */

void FUN_0045252f(void)

{
  int unaff_EBP;
  
  FUN_0040f520((int *)(*(int *)(unaff_EBP + -0x10) + 0xf6)); /* UIWidget->level_data_ptr */
  return;
}



/* Function: FUN_00452540 @ 0x00452540 */

void __fastcall FUN_00452540(int param_1)

{
  int iVar1;
  short uVar2;
  short uVar3;
  short *puVar4;
  int *puVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  
  uVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  sVar8 = 0;
  do {
    iVar6 = (int)sVar8;
    sVar7 = 0;
    do {
      puVar4 = (short *)(param_1 + (iVar6 + sVar7 * 6) * 2 + 0x48);
      uVar2 = *puVar4;
      *puVar4 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      sVar7 = sVar7 + 1;
    } while (sVar7 < 6);
    puVar4 = (short *)(param_1 + 0xa0 + iVar6 * 2);
    iVar1 = param_1 + iVar6 * 2;
    uVar2 = *puVar4;
    *puVar4 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(iVar1 + 0xac);
    *(short *)(iVar1 + 0xac) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(iVar1 + 0xb8);
    *(short *)(iVar1 + 0xb8) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(iVar1 + 0xc4);
    *(short *)(iVar1 + 0xc4) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    iVar6 = param_1 + iVar6 * 4;
    puVar5 = (int *)(iVar6 + 0xd0);
    uVar2 = *(short *)puVar5;
    uVar3 = *(short *)(iVar6 + 0xd2);
    *puVar5 = CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                       CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8)));
    uVar2 = *(short *)(iVar1 + 0x94);
    *(short *)(iVar1 + 0x94) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    sVar8 = sVar8 + 1;
  } while (sVar8 < 6);
  sVar8 = 0;
  do {
    sVar7 = 0;
    do {
      puVar4 = (short *)(param_1 + ((int)sVar7 + sVar8 * 6) * 2 + 0x48);
      uVar2 = *puVar4;
      *puVar4 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      sVar7 = sVar7 + 1;
    } while (sVar7 < 6);
    sVar8 = sVar8 + 1;
  } while (sVar8 < 6);
  uVar2 = *(short *)(param_1 + 0xe8);
  *(short *)(param_1 + 0xe8) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0x92);
  *(short *)(param_1 + 0x92) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xea);
  *(short *)(param_1 + 0xea) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xec);
  *(short *)(param_1 + 0xec) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xf0);
  *(short *)(param_1 + 0xf0) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  uVar2 = *(short *)(param_1 + 0xee);
  *(short *)(param_1 + 0xee) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  return;
}



/* Function: FUN_00452710 @ 0x00452710 */

void FUN_00452710(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489010,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00452760 @ 0x00452760 */

void FUN_00452760(void)

{
  return;
}



/* Function: FUN_00452780 @ 0x00452780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452780(void)

{
  _DAT_0048901e = 0;
  _DAT_0048901c = 0;
  return;
}



/* Function: FUN_00452790 @ 0x00452790 */

void FUN_00452790(void)

{
  _atexit(FUN_004527a0);
  return;
}



/* Function: FUN_004527a0 @ 0x004527a0 */

void FUN_004527a0(void)

{
  return;
}



/* Function: FUN_004527c0 @ 0x004527c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004527c0(void)

{
  _DAT_0048901a = 0;
  _DAT_00489018 = 0;
  return;
}



/* Function: FUN_004527d0 @ 0x004527d0 */

void FUN_004527d0(void)

{
  _atexit(FUN_004527e0);
  return;
}



/* Function: FUN_004527e0 @ 0x004527e0 */

void FUN_004527e0(void)

{
  return;
}



/* Function: FUN_004527f0 @ 0x004527f0 */

int __cdecl FUN_004527f0(char *param_1)

{
  HANDLE hObject;
  BOOL BVar1;
  
  if (*param_1 == '?') {
    FUN_00455170(param_1,0xff,(char *)0x0);
  }
  hObject = CreateFileA(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x10000000,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0xffffff00;
  }
  BVar1 = CloseHandle(hObject);
  return CONCAT31((unsigned int)((uint)BVar1 >> 8),1);
}



/* Function: FUN_00452840 @ 0x00452840 */

void __cdecl FUN_00452840(LPCSTR param_1)

{
  DeleteFileA(param_1);
  return;
}



/* Function: FUN_00452850 @ 0x00452850 */

HANDLE __cdecl FUN_00452850(char *param_1,int param_2,int param_3)

{
  HANDLE pvVar1;
  
  if (*param_1 == '?') {
    FUN_00455090(param_1,0xff,(char *)0x0);
  }
  pvVar1 = CreateFileA(param_1,(-(uint)(param_3 == 1) & 0xc0000000) + 0xc0000000,1,
                       (LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
    pvVar1 = (HANDLE)0x0;
  }
  return pvVar1;
}



/* Function: FUN_004528b0 @ 0x004528b0 */

void __cdecl FUN_004528b0(HANDLE param_1)

{
  FUN_004178e0(param_1,0);
  return;
}



/* Function: FUN_004528c0 @ 0x004528c0 */

DWORD __cdecl FUN_004528c0(HANDLE param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = FUN_00417890(param_1);
  DVar2 = GetFileSize(param_1,(LPDWORD)0x0);
  FUN_004178e0(param_1,DVar1);
  return DVar2;
}



/* Function: FUN_004528f0 @ 0x004528f0 */

void __cdecl FUN_004528f0(HANDLE param_1,DWORD param_2)

{
  int uVar1;
  
  uVar1 = FUN_004178b0(param_1,param_2);
  if ((char)uVar1 == '\x01') {
    SetEndOfFile(param_1);
  }
  return;
}



/* Function: FUN_00452910 @ 0x00452910 */

int __cdecl FUN_00452910(char *param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00452970 @ 0x00452970 */

int __cdecl FUN_00452970(HANDLE param_1,DWORD param_2,LPCVOID param_3)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = param_2;
  BVar1 = WriteFile(param_1,param_3,param_2,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  return CONCAT31(local_4 - param_2 >> 8,local_4 - param_2 == 0);
}



/* Function: FUN_004529c0 @ 0x004529c0 */

uint __cdecl FUN_004529c0(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  FlushFileBuffers(param_1);
  BVar1 = CloseHandle(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return DVar2 & 0xffffff00;
  }
  return CONCAT31((unsigned int)((uint)BVar1 >> 8),1);
}



/* Function: FUN_004529f0 @ 0x004529f0 */

int __cdecl FUN_004529f0(char *param_1,int param_2)

{
  HANDLE pvVar1;
  int uVar2;
  
  pvVar1 = FUN_00452850(param_1,0,param_2);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  uVar2 = FUN_004529c0(pvVar1);
  return CONCAT31((unsigned int)((uint)uVar2 >> 8),1);
}



/* Function: FUN_00452a30 @ 0x00452a30 */

void FUN_00452a30(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489020,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00452a80 @ 0x00452a80 */

void FUN_00452a80(void)

{
  return;
}



/* Function: FUN_00452aa0 @ 0x00452aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452aa0(void)

{
  _DAT_0048902e = 0;
  _DAT_0048902c = 0;
  return;
}



/* Function: FUN_00452ab0 @ 0x00452ab0 */

void FUN_00452ab0(void)

{
  _atexit(FUN_00452ac0);
  return;
}



/* Function: FUN_00452ac0 @ 0x00452ac0 */

void FUN_00452ac0(void)

{
  return;
}



/* Function: FUN_00452ae0 @ 0x00452ae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452ae0(void)

{
  _DAT_0048902a = 0;
  _DAT_00489028 = 0;
  return;
}



/* Function: FUN_00452af0 @ 0x00452af0 */

void FUN_00452af0(void)

{
  _atexit(FUN_00452b00);
  return;
}



/* Function: FUN_00452b00 @ 0x00452b00 */

void FUN_00452b00(void)

{
  return;
}



/* Function: FUN_00452b20 @ 0x00452b20 */

void FUN_00452b20(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489030,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00452b60 @ 0x00452b60 */

void FUN_00452b60(void)

{
  _atexit(FUN_00452b70);
  return;
}



/* Function: FUN_00452b70 @ 0x00452b70 */

void FUN_00452b70(void)

{
  return;
}



/* Function: FUN_00452b90 @ 0x00452b90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452b90(void)

{
  _DAT_0048903e = 0;
  _DAT_0048903c = 0;
  return;
}



/* Function: FUN_00452ba0 @ 0x00452ba0 */

void FUN_00452ba0(void)

{
  _atexit(FUN_00452bb0);
  return;
}



/* Function: FUN_00452bb0 @ 0x00452bb0 */

void FUN_00452bb0(void)

{
  return;
}



/* Function: FUN_00452bd0 @ 0x00452bd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452bd0(void)

{
  _DAT_0048903a = 0;
  _DAT_00489038 = 0;
  return;
}



/* Function: FUN_00452be0 @ 0x00452be0 */

void FUN_00452be0(void)

{
  _atexit(FUN_00452bf0);
  return;
}



/* Function: FUN_00452bf0 @ 0x00452bf0 */

void FUN_00452bf0(void)

{
  return;
}



/* Function: FUN_00452c10 @ 0x00452c10 */

void FUN_00452c10(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489040,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00452c50 @ 0x00452c50 */

void FUN_00452c50(void)

{
  _atexit(FUN_00452c60);
  return;
}



/* Function: FUN_00452c60 @ 0x00452c60 */

void FUN_00452c60(void)

{
  return;
}



/* Function: FUN_00452c80 @ 0x00452c80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452c80(void)

{
  _DAT_0048904e = 0;
  _DAT_0048904c = 0;
  return;
}



/* Function: FUN_00452c90 @ 0x00452c90 */

void FUN_00452c90(void)

{
  _atexit(FUN_00452ca0);
  return;
}



/* Function: FUN_00452ca0 @ 0x00452ca0 */

void FUN_00452ca0(void)

{
  return;
}



/* Function: FUN_00452cc0 @ 0x00452cc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452cc0(void)

{
  _DAT_0048904a = 0;
  _DAT_00489048 = 0;
  return;
}



/* Function: FUN_00452cd0 @ 0x00452cd0 */

void FUN_00452cd0(void)

{
  _atexit(FUN_00452ce0);
  return;
}



/* Function: FUN_00452ce0 @ 0x00452ce0 */

void FUN_00452ce0(void)

{
  return;
}



/* Function: FUN_00452cf0 @ 0x00452cf0 */

int * __thiscall FUN_00452cf0(void *this,char *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00452d5c;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041b6c0(this);
  local_8 = 0;
  *(void ***)this = &PTR_FUN_00476258;
  FUN_0041da90(this,1);
  *(int *)((intptr_t)this + 0x42) = 0; /* UIElement._pad42 - TODO: identify field */
  if (param_1 != (char *)0x0) {
    FUN_00452e00(this,param_1);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00452d70 @ 0x00452d70 */

int * __thiscall FUN_00452d70(void *this,byte param_1)

{
  FUN_00452d90(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00452d90 @ 0x00452d90 */

void __fastcall FUN_00452d90(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00452de1;
  *param_1 = &PTR_FUN_00476258;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(uint *)((int)param_1 + 0x42) != 0) { /* UIElement._pad42 - TODO: identify field */
    FUN_0046f5f0(*(uint *)((int)param_1 + 0x42));  /* TODO: offset 0x42, UIElement._pad42 area */
  }
  local_8 = 0xffffffff;
  FUN_00452deb();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00452deb @ 0x00452deb */

void FUN_00452deb(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00452e00 @ 0x00452e00 */

void __thiscall FUN_00452e00(void *this,char *param_1)

{
    /* TODO: 52 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00452e80 @ 0x00452e80 */

void __fastcall FUN_00452e80(void *param_1)

{
    /* TODO: 50 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00452f90 @ 0x00452f90 */

void __fastcall FUN_00452f90(int *param_1)

{
  int uVar1;
  int in_stack_ffffffec;
  char cVar2;
  
  if (*(char *)(DAT_004896b0 + 0x27) == '\0') {
    cVar2 = '\x01';
    uVar1 = 0xfffffffe;
    FUN_00401050(&ghidra_stack_ffffffec,-2);
    FUN_00401050(&ghidra_stack_ffffffe8,0);
    FUN_0041d3a0(param_1,uVar1,in_stack_ffffffec,cVar2);
    if ((*(short *)((int)param_1 + 0x22) < 0) && (param_1 != (int *)0x0)) { /* TODO: offset 0x22 = UIElement->rect_bottom if param_1 is UIElement */
      ((void (*)(void))((void **)(*param_1))[1])(); /* param_1->vtable[1] */
    }
  }
  return;
}



/* Function: FUN_004530b0 @ 0x004530b0 */

void FUN_004530b0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489050,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00453100 @ 0x00453100 */

void FUN_00453100(void)

{
  return;
}



/* Function: FUN_00453130 @ 0x00453130 */

void __fastcall FUN_00453130(void *param_1)

{
    /* TODO: 56 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00453280 @ 0x00453280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453280(void)

{
  _DAT_0048905e = 0;
  _DAT_0048905c = 0;
  return;
}



/* Function: FUN_00453290 @ 0x00453290 */

void FUN_00453290(void)

{
  _atexit(FUN_004532a0);
  return;
}



/* Function: FUN_004532a0 @ 0x004532a0 */

void FUN_004532a0(void)

{
  return;
}



/* Function: FUN_00453386 @ 0x00453386 */

void FUN_00453386(void)

{
  return;
}



/* Function: FUN_004533a0 @ 0x004533a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004533a0(void)

{
  _DAT_0048905a = 0;
  _DAT_00489058 = 0;
  return;
}



/* Function: FUN_004533b0 @ 0x004533b0 */

void FUN_004533b0(void)

{
  _atexit(FUN_004533c0);
  return;
}



/* Function: FUN_004533c0 @ 0x004533c0 */

void FUN_004533c0(void)

{
  return;
}



/* Function: FUN_004533e0 @ 0x004533e0 */

short __fastcall FUN_004533e0(short *param_1)

{
  return param_1[2] - *param_1;
}



/* Function: FUN_00453400 @ 0x00453400 */

void FUN_00453400(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489060,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00453450 @ 0x00453450 */

void FUN_00453450(void)

{
  return;
}



/* Function: FUN_00453470 @ 0x00453470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453470(void)

{
  _DAT_0048906e = 0;
  _DAT_0048906c = 0;
  return;
}



/* Function: FUN_00453480 @ 0x00453480 */

void FUN_00453480(void)

{
  _atexit(FUN_00453490);
  return;
}



/* Function: FUN_00453490 @ 0x00453490 */

void FUN_00453490(void)

{
  return;
}



/* Function: FUN_004534b0 @ 0x004534b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004534b0(void)

{
  _DAT_0048906a = 0;
  _DAT_00489068 = 0;
  return;
}



/* Function: FUN_004534c0 @ 0x004534c0 */

void FUN_004534c0(void)

{
  _atexit(FUN_004534d0);
  return;
}



/* Function: FUN_004534d0 @ 0x004534d0 */

void FUN_004534d0(void)

{
  return;
}



/* Function: FUN_004534e0 @ 0x004534e0 */

int * __fastcall FUN_004534e0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00453534;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_004762f8;
  FUN_0041da90(param_1,0);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_004535a9 @ 0x004535a9 */

void FUN_004535a9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004535c0 @ 0x004535c0 */

void __fastcall FUN_004535c0(void *param_1)

{
  FUN_0041dad0(param_1,0,'\0');
  return;
}



/* Function: FUN_004535d0 @ 0x004535d0 */

int * __fastcall FUN_004535d0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045363e;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473740;
  local_8 = 1;
  ((UIWidget *)param_1)->flags = ((UIWidget *)param_1)->flags & 0xffffefff;
  *param_1 = &PTR_FUN_004763a0;
  FUN_004535c0(param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_004536a9 @ 0x004536a9 */

void FUN_004536a9(void)

{
  FUN_00428020();
  return;
}



/* Function: FUN_004536c0 @ 0x004536c0 */

int * __fastcall FUN_004536c0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00453729;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00476448;
  FUN_0041da90(param_1,1);
  ((UIWidget *)param_1)->anim_flag_2 = 1;
  ((UIWidget *)param_1)->anim_flag_1 = 0;
  ((UIWidget *)param_1)->anim_flag_3 = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00453799 @ 0x00453799 */

void FUN_00453799(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004537b0 @ 0x004537b0 */

int * __fastcall FUN_004537b0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045380e;
  *unaff_FS_OFFSET = &local_10;
  FUN_00453b00(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_004764f0;
  FUN_0041da90(param_1,1);
  ((UIWidget *)param_1)->animation_timer = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00453879 @ 0x00453879 */

void FUN_00453879(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004538c7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004538d1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004538d1 @ 0x004538d1 */

void FUN_004538d1(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00453960 @ 0x00453960 */

int * __fastcall FUN_00453960(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004539bf;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454b80(param_1,0);
  local_8 = 0;
  *(short *)((int)param_1 + 0x11c) = 0; /* byte offset 0x11C, TODO: identify struct field */
  *param_1 = &PTR_FUN_00476598;
  FUN_0041da90(param_1,1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00453a39 @ 0x00453a39 */

void FUN_00453a39(void)

{
  FUN_0042d080();
  return;
}



/* Function: FUN_00453b00 @ 0x00453b00 */

int * __fastcall FUN_00453b00(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00453b5e;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  local_8 = 0;
  ((UIWidget *)param_1)->animation_timer = 4;
  *param_1 = &PTR_FUN_00476648;
  FUN_0041da90(param_1,0);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00453bc9 @ 0x00453bc9 */

void FUN_00453bc9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00453e87 @ 0x00453e87 */

void FUN_00453e87(void)

{
  return;
}



/* Function: FUN_00453e8f @ 0x00453e8f */

void FUN_00453e8f(void)

{
  return;
}



/* Function: FUN_00453e97 @ 0x00453e97 */

void FUN_00453e97(void)

{
  return;
}



/* Function: FUN_00453ea9 @ 0x00453ea9 */

void FUN_00453ea9(void)

{
  return;
}



/* Function: FUN_00453ed0 @ 0x00453ed0 */

int * __thiscall FUN_00453ed0(void *this,uint param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x118,*(int *)((int)this - 4U),FUN_00405420); /* TODO: MSVC array cookie at (this - 4) */
    FUN_0046c410((int)this - 4U);
    return this;
  }
  FUN_00405420(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00453f30 @ 0x00453f30 */

int * __fastcall FUN_00453f30(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00453fb5;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004766f0;
  ((GameWidget *)param_1)->field_12e = 0;
  ((GameWidget *)param_1)->pair_x_1 = 0;
  ((GameWidget *)param_1)->pair_y_1 = 0;
  ((GameWidget *)param_1)->object_ptr = (void *)0xffffffff; /* sentinel value */
  ((GameWidget *)param_1)->scrollbar_ref = 1;
  ((GameWidget *)param_1)->pair_x_2 = 0;
  *(unsigned char *)((int)param_1 + 0x12b) = 1; /* TODO: unknown offset 0x12B on GameWidget */
  *(unsigned char *)&((GameWidget *)param_1)->field_118 = 1; /* low byte of field_118 */
  *(unsigned char *)((int)param_1 + 0x12c) = 0; /* TODO: unknown offset 0x12C on GameWidget, in _pad134 area */
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00454029 @ 0x00454029 */

void FUN_00454029(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00454040 @ 0x00454040 */

void __fastcall FUN_00454040(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  if ((char)((GameWidget *)param_1)->field_118 == '\0') {
    FUN_00405cb0(param_1);
    return;
  }
  if ((*(char *)(DAT_004896b0 + 0x28) == '\0') && (*(char *)((int)param_1 + 0x12c) == '\0')) { /* TODO: offset 0x12C on GameWidget */
    DVar1 = GetTickCount();
    iVar2 = ((int)(((longlong)(int)DVar1 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
            ((GameWidget *)param_1)->pair_x_1) / 0x3c;
    if (iVar2 != ((GameWidget *)param_1)->pair_y_1) {
      ((GameWidget *)param_1)->pair_y_1 = iVar2;
      if ((char)((GameWidget *)param_1)->scrollbar_ref == '\0') {
        iVar2 = ((GameWidget *)param_1)->pair_x_2 - iVar2;
      }
      FUN_004058c0(param_1,(short)iVar2 + 1);
      return;
    }
    if (((((GameWidget *)param_1)->pair_x_2 != 0) &&
        (((GameWidget *)param_1)->pair_x_2 <= ((GameWidget *)param_1)->pair_y_1)) &&
       (*(char *)((int)param_1 + 0x12b) == '\0')) { /* TODO: unknown offset 0x12B on GameWidget */
      ((void (*)(void))((void **)(**(int **)(DAT_004897c0 + 0x52)))[0xac / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[43] */
    }
  }
  return;
}



/* Function: FUN_00454100 @ 0x00454100 */

void FUN_00454100(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489070,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00454150 @ 0x00454150 */

void FUN_00454150(void)

{
  return;
}



/* Function: FUN_00454170 @ 0x00454170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454170(void)

{
  _DAT_0048907e = 0;
  _DAT_0048907c = 0;
  return;
}



/* Function: FUN_00454180 @ 0x00454180 */

void FUN_00454180(void)

{
  _atexit(FUN_00454190);
  return;
}



/* Function: FUN_00454190 @ 0x00454190 */

void FUN_00454190(void)

{
  return;
}



/* Function: FUN_004541a0 @ 0x004541a0 */

int * __fastcall FUN_004541a0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004541f5;
  *unaff_FS_OFFSET = &local_10;
  FUN_00434860(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00476798;
  *(int *)((int)param_1 + 0x6a) = 0; /* TODO: unknown offset 0x6A, possibly custom struct */
  FUN_0041da90(param_1,1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00454269 @ 0x00454269 */

void FUN_00454269(void)

{
  FUN_00403500();
  return;
}



/* Function: FUN_00454280 @ 0x00454280 */

void __fastcall FUN_00454280(void *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  iVar2 = (DAT_004890a4 >> 1) * DAT_00489084;
  DVar1 = GetTickCount();
  if ((uint)(*(int *)((int)param_1 + 0x6a) + iVar2) < DVar1) { /* TODO: offset 0x6A, custom struct timestamp */
    *(DWORD *)((int)param_1 + 0x6a) = DVar1; /* TODO: offset 0x6A */
    FUN_0041dad0(param_1,~(byte)(((UIWidget *)param_1)->flags >> 6) & 1,'\0');
  }
  return;
}



/* Function: FUN_004542d0 @ 0x004542d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004542d0(void)

{
  _DAT_0048907a = 0;
  _DAT_00489078 = 0;
  return;
}



/* Function: FUN_004542e0 @ 0x004542e0 */

void FUN_004542e0(void)

{
  _atexit(FUN_004542f0);
  return;
}



/* Function: FUN_004542f0 @ 0x004542f0 */

void FUN_004542f0(void)

{
  return;
}



/* Function: FUN_00454300 @ 0x00454300 */

int * __fastcall FUN_00454300(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045435c;
  *unaff_FS_OFFSET = &local_10;
  FUN_004052b0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00476828;
  ((UIWidget *)param_1)->is_interactive = 0;
  *(unsigned char *)&((GameWidget *)param_1)->field_118 = 0; /* low byte of field_118 */
  FUN_0041dd40(param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_004543c9 @ 0x004543c9 */

void FUN_004543c9(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_004544f6 @ 0x004544f6 */

void FUN_004544f6(void)

{
  return;
}



/* Function: FUN_00454520 @ 0x00454520 */

int * __fastcall FUN_00454520(void *param_1)

{
    /* TODO: 39 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00454634 @ 0x00454634 */

void FUN_00454634(void)

{
  return;
}



/* Function: FUN_00454660 @ 0x00454660 */

void __fastcall FUN_00454660(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004546c8;
  *param_1 = &PTR_FUN_00473898;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_0041d780(param_1 + 0x48,(void *)0x0);
  local_8 = local_8 & 0xffffff00;
  FUN_004546ba();
  local_8 = 0xffffffff;
  FUN_004546d2();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004546ba @ 0x004546ba */

void FUN_004546ba(void)

{
  FUN_00428070();
  return;
}



/* Function: FUN_004546d2 @ 0x004546d2 */

void FUN_004546d2(void)

{
  FUN_00428020();
  return;
}



/* Function: FUN_004546e0 @ 0x004546e0 */

void __fastcall FUN_004546e0(int *param_1)

{
  FUN_0041d780(param_1 + 0x48,(void *)0x0);
  FUN_00405570(param_1);
  return;
}



/* Function: FUN_00454839 @ 0x00454839 */

void FUN_00454839(void)

{
  return;
}



/* Function: FUN_00454971 @ 0x00454971 */

void FUN_00454971(void)

{
  return;
}



/* Function: FUN_00454990 @ 0x00454990 */

int * __fastcall FUN_00454990(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004549e4;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_004768c8;
  FUN_0041da90(param_1,0);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00454a59 @ 0x00454a59 */

void FUN_00454a59(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00454a70 @ 0x00454a70 */

int * __thiscall FUN_00454a70(void *this,int param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00454ac6;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(this);
  *(void ***)this = &PTR_FUN_00476970;
  *(int *)((intptr_t)this + 0x118) = param_1; /* GameWidget->field_118 area (4-byte write spanning field_118 + pair_x_1) */
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00454ae0 @ 0x00454ae0 */

int * __thiscall FUN_00454ae0(void *this,byte param_1)

{
  FUN_00454b00(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00454b00 @ 0x00454b00 */

void __fastcall FUN_00454b00(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00454b3d;
  *param_1 = &PTR_FUN_00476970;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00454b47();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00454b47 @ 0x00454b47 */

void FUN_00454b47(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00454b80 @ 0x00454b80 */

int * __thiscall FUN_00454b80(void *this,int param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00454bd1;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00476a20;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00454c49 @ 0x00454c49 */

void FUN_00454c49(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00454c90 @ 0x00454c90 */

int * __thiscall FUN_00454c90(void *this,int param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00454ce1;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00476ad0;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00454d59 @ 0x00454d59 */

void FUN_00454d59(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00454da0 @ 0x00454da0 */

int * __fastcall FUN_00454da0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00454e0d;
  *unaff_FS_OFFSET = &local_10;
  FUN_004534e0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00476b80;
  FUN_0041da90(param_1,0);
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041dad0(param_1,0,'\0');
  ((UIWidget *)param_1)->type_or_mode = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00454e79 @ 0x00454e79 */

void FUN_00454e79(void)

{
  FUN_00427c00();
  return;
}



/* Function: FUN_00454ea0 @ 0x00454ea0 */

void __thiscall FUN_00454ea0(SoundPlayer *this,short param_1)

{
  if (*(void **)(DAT_004897c0 + 0x52) != (void *)0x0) {
    FUN_0041d780(this,*(void **)(DAT_004897c0 + 0x52));
    FUN_0041dd40(this);
    FUN_0041dad0(this,1,'\0');
    FUN_0041da90(this,1);
    this->sequence_data[51] = 0;
    this->sequence_data[51] = 0;
    this->sequence_data[51] = 1;
    this->sequence_data[51] = 0;
    FUN_00405d30(this,param_1);
  }
  return;
}



/* Function: FUN_00454f00 @ 0x00454f00 */

void __cdecl FUN_00454f00(LPCSTR param_1,LPCSTR param_2,char *param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  UINT UVar3;
  UINT UVar4;
  UINT UVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  byte local_c [12];
  
  *param_3 = 0;
  *param_4 = 0;
  GetPrivateProfileStringA
            (param_2,s_PARTFILE_00483368,(LPCSTR)&DAT_004894b0,(LPSTR)&DAT_004894b0,0xff,param_1);
  GetPrivateProfileStringA
            (param_2,s_USERFILE_0048335c,(LPCSTR)&DAT_004895b0,(LPSTR)&DAT_004895b0,0xff,param_1);
  GetPrivateProfileStringA
            (param_2,s_SWAPFILE_00483350,(LPCSTR)&DAT_004896c0,(LPSTR)&DAT_004896c0,0xff,param_1);
  GetPrivateProfileStringA
            (param_2,s_PATCHFILE_00483344,(LPCSTR)&DAT_004898c8,(LPSTR)&DAT_004898c8,0xff,param_1);
  DAT_004838c4 = GetPrivateProfileIntA(param_2,s_SWAPSIZE_00483338,DAT_004838c4,param_1);
  DAT_004838ac = GetPrivateProfileIntA(param_2,s_STAGE_00483330,1,param_1);
  GetPrivateProfileStringA(param_2,s_SPEED_00483320,&DAT_00483328,(LPSTR)local_c,10,param_1);
  pbVar6 = local_c;
  pbVar7 = &DAT_00483318;
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00454fee:
      iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00454ff3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00454fee;
    pbVar6 = pbVar6 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00454ff3:
  if (iVar2 == 0) {
    *param_3 = 1;
  }
  GetPrivateProfileStringA(param_2,&DAT_0048330c,s_SMALL_00483310,(LPSTR)local_c,10,param_1);
  pbVar6 = local_c;
  pcVar8 = s_LARGE_00483304;
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00455039:
      iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0045503e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00455039;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_0045503e:
  if (iVar2 == 0) {
    *param_4 = 1;
  }
  UVar3 = GetPrivateProfileIntA(param_2,s_TICKSPERSECOND_004832f4,0x3c,param_1);
  UVar4 = GetPrivateProfileIntA(param_2,s_IDLESPERSECOND_004832e4,0x14,param_1);
  UVar5 = GetPrivateProfileIntA(param_2,s_DRAWSPERSECOND_004832d4,0xc,param_1);
  FUN_00456510(UVar3,UVar4,UVar5);
  return;
}



/* Function: FUN_00455090 @ 0x00455090 */

int __cdecl FUN_00455090(char *param_1,short param_2,char *param_3)

{
    /* TODO: 41 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00455170 @ 0x00455170 */

int __cdecl FUN_00455170(char *param_1,short param_2,char *param_3)

{
    /* TODO: 54 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00455280 @ 0x00455280 */

void __cdecl FUN_00455280(LPCSTR param_1,LPCSTR param_2)

{
  if ((DAT_004897c0 != (void *)0x0) && (((UIWidget *)DAT_004897c0)->field_06 != 0)) {
    FUN_0041da90(DAT_004897c0,0);
    MessageBoxA(*(HWND *)(((UIWidget *)DAT_004897c0)->field_06 + 0xe),param_1,param_2,0x1010); /* GameScreen->hwnd */
    SetFocus(*(HWND *)(((UIWidget *)DAT_004897c0)->field_06 + 0xe)); /* GameScreen->hwnd */
    FUN_0041da90(DAT_004897c0,1);
    return;
  }
  MessageBoxA((HWND)0x0,param_1,param_2,0x1010);
  return;
}



/* Function: FUN_00455300 @ 0x00455300 */

void FUN_00455300(void)

{
  HDC hdc;
  DWORD DVar1;
  short sVar2;
  short sVar3;
  
  if (DAT_004832a4 == '\0') {
    hdc = GetDC((HWND)0x0);
    sVar2 = 0;
    do {
      sVar3 = sVar2 + 1;
      DVar1 = GetSysColor((&DAT_00483208)[sVar2]);
      (&DAT_004890b0)[sVar2] = DVar1;
      sVar2 = sVar3;
    } while (sVar3 < 0x13);
    SetSystemPaletteUse(hdc,2);
    SetSysColors(0x13,&DAT_00483208,(COLORREF *)&DAT_00483258);
    ReleaseDC((HWND)0x0,hdc);
    DAT_004832a4 = '\x01';
  }
  return;
}



/* Function: FUN_00455380 @ 0x00455380 */

void FUN_00455380(void)

{
  HDC hdc;
  
  if (DAT_004832a4 != '\0') {
    hdc = GetDC((HWND)0x0);
    SetSystemPaletteUse(hdc,1);
    SetSysColors(0x13,&DAT_00483208,&DAT_004890b0);
    ReleaseDC((HWND)0x0,hdc);
    DAT_004832a4 = '\0';
  }
  return;
}



/* Function: FUN_004553d0 @ 0x004553d0 */

void FUN_004553d0(void)

{
  HDC hdc;
  HPALETTE pHVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  PALETTEENTRY *pPVar5;
  LOGPALETTE local_404 [128];
  
  local_404[0].palVersion = 0x300;
  local_404[0].palNumEntries = 0x100;
  pPVar5 = local_404[0].palPalEntry;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    pPVar5->peRed = '\0';
    pPVar5->peGreen = '\0';
    pPVar5->peBlue = '\0';
    pPVar5->peFlags = '\0';
    pPVar5 = pPVar5 + 1;
  }
  sVar3 = 0;
  do {
    sVar4 = sVar3 + 1;
    local_404[0].palPalEntry[sVar3].peRed = '\0';
    local_404[0].palPalEntry[sVar3].peGreen = '\0';
    local_404[0].palPalEntry[sVar3].peBlue = '\0';
    local_404[0].palPalEntry[sVar3].peFlags = '\x04';
    sVar3 = sVar4;
  } while (sVar4 < 0x100);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreatePalette(local_404);
  if (pHVar1 != (HPALETTE)0x0) {
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    RealizePalette(hdc);
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    DeleteObject(pHVar1);
  }
  ReleaseDC((HWND)0x0,hdc);
  return;
}



/* Function: FUN_00455470 @ 0x00455470 */

void FUN_00455470(void)

{
  if ((((DAT_004897c0 != 0) && (DAT_00489ac8 != 0)) && (*(char *)(DAT_00489ac8 + 0xc) == '\0')) && /* UIElement->parent_widget == NULL */
     (((UIWidget *)(intptr_t)DAT_004897c0)->field_06 != 0)) {
    FUN_00430ab0(((UIWidget *)(intptr_t)DAT_004897c0)->field_06);
    return;
  }
  return;
}



/* Function: FUN_00455820 @ 0x00455820 */

uint FUN_00455820(void)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00455860 @ 0x00455860 */

uint __fastcall FUN_00455860(int param_1)

{
    /* TODO: 40 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00455950 @ 0x00455950 */

void FUN_00455950(void)

{
  return;
}



/* Function: FUN_00455960 @ 0x00455960 */

/* WARNING: Removing unreachable block (ram,0x004559d9) */

int * __fastcall FUN_00455960(int *param_1)

{
    /* TODO: 70 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00455b10 @ 0x00455b10 */

void FUN_00455b10(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489090,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00455b60 @ 0x00455b60 */

void FUN_00455b60(void)

{
  return;
}



/* Function: FUN_00455b70 @ 0x00455b70 */

int * __thiscall FUN_00455b70(void *this,byte param_1)

{
  FUN_00455c20(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00455ba0 @ 0x00455ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455ba0(void)

{
  _DAT_004890ae = 0;
  _DAT_004890ac = 0;
  return;
}



/* Function: FUN_00455bb0 @ 0x00455bb0 */

void FUN_00455bb0(void)

{
  _atexit(FUN_00455bc0);
  return;
}



/* Function: FUN_00455bc0 @ 0x00455bc0 */

void FUN_00455bc0(void)

{
  return;
}



/* Function: FUN_00455bd0 @ 0x00455bd0 */

void FUN_00455bd0(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00455c07;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00455c11();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00455c11 @ 0x00455c11 */

void FUN_00455c11(void)

{
  return;
}



/* Function: FUN_00455c20 @ 0x00455c20 */

void __fastcall FUN_00455c20(int *param_1)

{
    /* TODO: 27 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00455ca3 @ 0x00455ca3 */

void FUN_00455ca3(void)

{
  FUN_00455bd0();
  return;
}



/* Function: FUN_00455cae @ 0x00455cae */

void FUN_00455cae(void)

{
  return;
}



/* Function: FUN_00455cb9 @ 0x00455cb9 */

void FUN_00455cb9(void)

{
  return;
}



/* Function: FUN_00455cce @ 0x00455cce */

void FUN_00455cce(void)

{
  return;
}



/* Function: FUN_00455ce0 @ 0x00455ce0 */

int FUN_00455ce0(void)

{
  HDC hdc;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    uVar1 = GetDeviceCaps(hdc,0x26);
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar3 = GetDeviceCaps(hdc,0xe);
    iVar3 = iVar3 * iVar2;
    ReleaseDC((HWND)0x0,hdc);
    if ((iVar3 == 8) && ((uVar1 & 0x100) == 0)) {
      iVar3 = -1;
    }
  }
  return iVar3;
}



/* Function: FUN_00455d50 @ 0x00455d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455d50(void)

{
  _DAT_004890aa = 0;
  _DAT_004890a8 = 0;
  return;
}



/* Function: FUN_00455d60 @ 0x00455d60 */

void FUN_00455d60(void)

{
  _atexit(FUN_00455d70);
  return;
}



/* Function: FUN_00455d70 @ 0x00455d70 */

void FUN_00455d70(void)

{
  return;
}



/* Function: FUN_00455d80 @ 0x00455d80 */

void FUN_00455d80(short *param_1)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00455dc0 @ 0x00455dc0 */

void __fastcall FUN_00455dc0(int param_1)

{
  if (*(char *)(param_1 + 0x45) == '\0') {
    *(char *)(param_1 + 0x45) = 1;
  }
  return;
}



/* Function: FUN_00455dd0 @ 0x00455dd0 */

void __fastcall FUN_00455dd0(int param_1)

{
  if (*(char *)(param_1 + 0x45) != '\0') {
    *(char *)(param_1 + 0x45) = 0;
  }
  return;
}



/* Function: FUN_00455de0 @ 0x00455de0 */

uint __cdecl FUN_00455de0(HWND param_1,uint param_2,int param_3,int param_4)

{
    /* TODO: 112 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00456060 @ 0x00456060 */

uint FUN_00456060(void)

{
    /* TODO: 48 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045617f @ 0x0045617f */

void FUN_0045617f(void)

{
  return;
}



/* Function: FUN_004561a0 @ 0x004561a0 */

uint __fastcall FUN_004561a0(int param_1)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004561d0 @ 0x004561d0 */

void __fastcall FUN_004561d0(int param_1)

{
  short sVar1;
  int *unaff_FS_OFFSET;
  short local_18[2];
  int local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_004562f8;
  sVar1 = *(short *)(param_1 + 0x30);
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  if (sVar1 != 0x42) {
    if (sVar1 == 1) {
      DAT_004832c0 = (uint)(*(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x20)) < DAT_004832b8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x36);
      FUN_004096f0((void *)(param_1 + 0x10),local_18,(short *)(param_1 + 0x3a));
      local_8 = 0xffffffff;
      FUN_0045627b();
    }
    else if ((sVar1 == 2) &&
            ((uint)(*(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x14)) < DAT_004832bc)) {
      if (DAT_004832c0 == '\0') {
        *(short *)(param_1 + 0x30) = 0x41;
      }
      else {
        *(short *)(param_1 + 0x30) = 0x42;
        DAT_004832c0 = '\0';
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x36);
      FUN_004096f0((void *)(param_1 + 0x18),local_18,(short *)(param_1 + 0x3a));
      local_8 = 0xffffffff;
      FUN_004562e8();
    }
  }
  *(int *)(local_14 + 0xc) = *(int *)(local_14 + 0x36);
  FUN_004096f0((void *)(local_14 + 0x1c),(short *)&local_14,(short *)(local_14 + 0x3a));
  local_8 = 0xffffffff;
  FUN_004562f0();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045627b @ 0x0045627b */

void FUN_0045627b(void)

{
  return;
}



/* Function: FUN_004562e8 @ 0x004562e8 */

void FUN_004562e8(void)

{
  return;
}



/* Function: FUN_004562f0 @ 0x004562f0 */

void FUN_004562f0(void)

{
  return;
}



/* Function: FUN_00456310 @ 0x00456310 */

char FUN_00456310(int param_1,char param_2,char param_3)

{
  bool bVar1;
  SHORT SVar2;
  SHORT SVar3;
  SHORT SVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = false;
  DVar5 = GetTickCount();
  iVar7 = DAT_00489084 * param_1;
  uVar6 = GetTickCount();
  do {
    if (iVar7 + DVar5 <= uVar6) {
      return 0;
    }
    if (param_3 != '\0') {
      FUN_004564c0();
    }
    if (param_2 != '\0') {
      SVar2 = GetAsyncKeyState(2);
      SVar3 = GetAsyncKeyState(4);
      SVar4 = GetAsyncKeyState(1);
      if ((SVar2 < 0 || SVar3 < 0) || SVar4 < 0) {
        if (bVar1) {
          return 1;
        }
      }
      else if (!bVar1) {
        bVar1 = true;
      }
    }
    uVar6 = GetTickCount();
  } while( true );
}



/* Function: FUN_004563b0 @ 0x004563b0 */

void FUN_004563b0(int param_1,char param_2)

{
  FUN_00456310(param_1,'\0',param_2);
  return;
}



/* Function: FUN_004563d0 @ 0x004563d0 */

int FUN_004563d0(int param_1)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00456410 @ 0x00456410 */

void FUN_00456410(int param_1,char *param_2)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00456450 @ 0x00456450 */

void FUN_00456450(void)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004564c0 @ 0x004564c0 */

void FUN_004564c0(void)

{
  if (DAT_004897c0 != 0) {
    if ((*(void **)(DAT_004897c0 + 6) != (void *)0x0) && (*(char *)(DAT_004897c0 + 0x43) == '\0')) { /* UIWidget->field_06, offset 0x43 in _pad42 */
      FUN_00431160(*(void **)(DAT_004897c0 + 6),'\0'); /* UIWidget->field_06 */
    }
  }
  return;
}



/* Function: FUN_004564f0 @ 0x004564f0 */

void __fastcall FUN_004564f0(int param_1)

{
  if ((DAT_004897c0 != 0) && (*(char *)(param_1 + 0x44) != '\0')) {
    FUN_004561a0(param_1);
  }
  return;
}



/* Function: FUN_00456510 @ 0x00456510 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456510(uint param_1,uint param_2,uint param_3)

{
  _DAT_00489088 = param_2;
  _DAT_00489080 = param_3;
  DAT_004890a4 = param_1;
  _DAT_0048909c = param_1 / param_2;
  DAT_00489084 = (int)(1000 / (ulonglong)param_1);
  _DAT_004890a0 = param_1 / param_3;
  _DAT_00489098 = DAT_00489084 * (param_1 / param_2);
  DAT_0048908c = DAT_00489084 * (param_1 / param_3);
  return;
}



/* Function: FUN_00456580 @ 0x00456580 */

bool __fastcall FUN_00456580(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DAT_0048908c < DVar1 - *(int *)(param_1 + 8);
}



/* Function: FUN_004565b0 @ 0x004565b0 */

void FUN_004565b0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489100,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00456600 @ 0x00456600 */

void FUN_00456600(void)

{
  return;
}



/* Function: FUN_00456620 @ 0x00456620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456620(void)

{
  _DAT_0048910e = 0;
  _DAT_0048910c = 0;
  return;
}



/* Function: FUN_00456630 @ 0x00456630 */

void FUN_00456630(void)

{
  _atexit(FUN_00456640);
  return;
}



/* Function: FUN_00456640 @ 0x00456640 */

void FUN_00456640(void)

{
  return;
}



/* Function: FUN_00456660 @ 0x00456660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456660(void)

{
  _DAT_0048910a = 0;
  _DAT_00489108 = 0;
  return;
}



/* Function: FUN_00456670 @ 0x00456670 */

void FUN_00456670(void)

{
  _atexit(FUN_00456680);
  return;
}



/* Function: FUN_00456680 @ 0x00456680 */

void FUN_00456680(void)

{
  return;
}



/* Function: FUN_004566a0 @ 0x004566a0 */

void FUN_004566a0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489110,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004566e0 @ 0x004566e0 */

void FUN_004566e0(void)

{
  _atexit(FUN_004566f0);
  return;
}



/* Function: FUN_004566f0 @ 0x004566f0 */

void FUN_004566f0(void)

{
  return;
}



/* Function: FUN_00456710 @ 0x00456710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456710(void)

{
  _DAT_0048911e = 0;
  _DAT_0048911c = 0;
  return;
}



/* Function: FUN_00456720 @ 0x00456720 */

void FUN_00456720(void)

{
  _atexit(FUN_00456730);
  return;
}



/* Function: FUN_00456730 @ 0x00456730 */

void FUN_00456730(void)

{
  return;
}



/* Function: FUN_00456750 @ 0x00456750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456750(void)

{
  _DAT_0048911a = 0;
  _DAT_00489118 = 0;
  return;
}



/* Function: FUN_00456760 @ 0x00456760 */

void FUN_00456760(void)

{
  _atexit(FUN_00456770);
  return;
}



/* Function: FUN_00456770 @ 0x00456770 */

void FUN_00456770(void)

{
  return;
}



/* Function: FUN_00456790 @ 0x00456790 */

void FUN_00456790(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489120,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004567d0 @ 0x004567d0 */

void FUN_004567d0(void)

{
  _atexit(FUN_004567e0);
  return;
}



/* Function: FUN_004567e0 @ 0x004567e0 */

void FUN_004567e0(void)

{
  return;
}



/* Function: FUN_00456800 @ 0x00456800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456800(void)

{
  _DAT_0048912e = 0;
  _DAT_0048912c = 0;
  return;
}



/* Function: FUN_00456810 @ 0x00456810 */

void FUN_00456810(void)

{
  _atexit(FUN_00456820);
  return;
}



/* Function: FUN_00456820 @ 0x00456820 */

void FUN_00456820(void)

{
  return;
}



/* Function: FUN_00456840 @ 0x00456840 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456840(void)

{
  _DAT_0048912a = 0;
  _DAT_00489128 = 0;
  return;
}



/* Function: FUN_00456850 @ 0x00456850 */

void FUN_00456850(void)

{
  _atexit(FUN_00456860);
  return;
}



/* Function: FUN_00456860 @ 0x00456860 */

void FUN_00456860(void)

{
  return;
}



/* Function: FUN_00456940 @ 0x00456940 */

void FUN_00456940(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489140,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00456980 @ 0x00456980 */

void FUN_00456980(void)

{
  _atexit(FUN_00456990);
  return;
}



/* Function: FUN_00456990 @ 0x00456990 */

void FUN_00456990(void)

{
  return;
}



/* Function: FUN_004569b0 @ 0x004569b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004569b0(void)

{
  _DAT_00489156 = 0;
  _DAT_00489154 = 0;
  return;
}



/* Function: FUN_004569c0 @ 0x004569c0 */

void FUN_004569c0(void)

{
  _atexit(FUN_004569d0);
  return;
}



/* Function: FUN_004569d0 @ 0x004569d0 */

void FUN_004569d0(void)

{
  return;
}



/* Function: FUN_004569f0 @ 0x004569f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004569f0(void)

{
  _DAT_00489152 = 0;
  _DAT_00489150 = 0;
  return;
}



/* Function: FUN_00456a00 @ 0x00456a00 */

void FUN_00456a00(void)

{
  _atexit(FUN_00456a10);
  return;
}



/* Function: FUN_00456a10 @ 0x00456a10 */

void FUN_00456a10(void)

{
  return;
}



/* Function: FUN_00456a30 @ 0x00456a30 */

void FUN_00456a30(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489160,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00456a70 @ 0x00456a70 */

void FUN_00456a70(void)

{
  _atexit(FUN_00456a80);
  return;
}



/* Function: FUN_00456a80 @ 0x00456a80 */

void FUN_00456a80(void)

{
  return;
}



/* Function: FUN_00456aa0 @ 0x00456aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456aa0(void)

{
  _DAT_00489172 = 0;
  _DAT_00489170 = 0;
  return;
}



/* Function: FUN_00456ab0 @ 0x00456ab0 */

void FUN_00456ab0(void)

{
  _atexit(FUN_00456ac0);
  return;
}



/* Function: FUN_00456ac0 @ 0x00456ac0 */

void FUN_00456ac0(void)

{
  return;
}



/* Function: FUN_00456ae0 @ 0x00456ae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456ae0(void)

{
  _DAT_0048916e = 0;
  _DAT_0048916c = 0;
  return;
}



/* Function: FUN_00456af0 @ 0x00456af0 */

void FUN_00456af0(void)

{
  _atexit(FUN_00456b00);
  return;
}



/* Function: FUN_00456b00 @ 0x00456b00 */

void FUN_00456b00(void)

{
  return;
}



/* Function: FUN_00456b80 @ 0x00456b80 */

int * __fastcall FUN_00456b80(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00456bcd;
  *unaff_FS_OFFSET = &local_10;
  FUN_00454a70(param_1,0);
  *param_1 = &PTR_FUN_00476c58;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00456be0 @ 0x00456be0 */

int * __thiscall FUN_00456be0(void *this,byte param_1)

{
  FUN_00456c00(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00456c00 @ 0x00456c00 */

void __fastcall FUN_00456c00(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00456c3d;
  *param_1 = &PTR_FUN_00476c58;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00456c47();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00456c47 @ 0x00456c47 */

void FUN_00456c47(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00456ce0 @ 0x00456ce0 */

/* Function: FUN_00456ce0 @ 0x00456ce0
 * Struct types: TextDisplay (this) - offset 0x11c = field_11c
 */
void __thiscall FUN_00456ce0(TextDisplay *this,short param_1)

{
  this->field_11c = param_1;
  return;
}



/* Function: FUN_00456cf0 @ 0x00456cf0 */

int * __thiscall
FUN_00456cf0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00456d55;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  *(void ***)this = &PTR_FUN_00476d08;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00456d70 @ 0x00456d70 */

int * __thiscall FUN_00456d70(void *this,byte param_1)

{
  FUN_00456d90(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00456d90 @ 0x00456d90 */

void __fastcall FUN_00456d90(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00456dd9;
  *param_1 = &PTR_FUN_00476d08;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00456df0();
  local_8 = 0xffffffff;
  FUN_00456de3();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00456de3 @ 0x00456de3 */

void FUN_00456de3(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00456df0 @ 0x00456df0 */

void FUN_00456df0(void)

{
    /* TODO: 20 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00456e50 @ 0x00456e50 */

void __fastcall FUN_00456e50(int *param_1)

{
  FUN_00456df0();
  FUN_0042bec0(param_1);
  return;
}



/* Function: FUN_00457331 @ 0x00457331 */

void FUN_00457331(void)

{
  return;
}



/* Function: FUN_00457340 @ 0x00457340 */

void FUN_00457340(int param_1,short param_2)

{
    /* TODO: 21 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004573a0 @ 0x004573a0 */

void FUN_004573a0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489178,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004573f0 @ 0x004573f0 */

void FUN_004573f0(void)

{
  return;
}



/* Function: FUN_00457410 @ 0x00457410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457410(void)

{
  _DAT_00489186 = 0;
  _DAT_00489184 = 0;
  return;
}



/* Function: FUN_00457420 @ 0x00457420 */

void FUN_00457420(void)

{
  _atexit(FUN_00457430);
  return;
}



/* Function: FUN_00457430 @ 0x00457430 */

void FUN_00457430(void)

{
  return;
}



/* Function: FUN_00457450 @ 0x00457450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457450(void)

{
  _DAT_00489182 = 0;
  _DAT_00489180 = 0;
  return;
}



/* Function: FUN_00457460 @ 0x00457460 */

void FUN_00457460(void)

{
  _atexit(FUN_00457470);
  return;
}



/* Function: FUN_00457470 @ 0x00457470 */

void FUN_00457470(void)

{
  return;
}



/* Function: FUN_00457490 @ 0x00457490 */

void FUN_00457490(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489188,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004574d0 @ 0x004574d0 */

void FUN_004574d0(void)

{
  _atexit(FUN_004574e0);
  return;
}



/* Function: FUN_004574e0 @ 0x004574e0 */

void FUN_004574e0(void)

{
  return;
}



/* Function: FUN_00457500 @ 0x00457500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457500(void)

{
  _DAT_00489196 = 0;
  _DAT_00489194 = 0;
  return;
}



/* Function: FUN_00457510 @ 0x00457510 */

void FUN_00457510(void)

{
  _atexit(FUN_00457520);
  return;
}



/* Function: FUN_00457520 @ 0x00457520 */

void FUN_00457520(void)

{
  return;
}



/* Function: FUN_00457540 @ 0x00457540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457540(void)

{
  _DAT_00489192 = 0;
  _DAT_00489190 = 0;
  return;
}



/* Function: FUN_00457550 @ 0x00457550 */

void FUN_00457550(void)

{
  _atexit(FUN_00457560);
  return;
}



/* Function: FUN_00457560 @ 0x00457560 */

void FUN_00457560(void)

{
  return;
}



/* Function: FUN_00457570 @ 0x00457570 */

int * __thiscall
FUN_00457570(TextDisplay *this,short param_1,short param_2,short param_3,int param_4,void *param_5,
            short param_6)

{
  short *psVar1;
  int uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00457645;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  *(void ***)this = &PTR_FUN_00476dd0;
  this->field_126 = param_1;
  psVar1 = (short *)&this->field_128;
  if (param_6 == 0) {
    uVar2 = FUN_0040e580();
    *psVar1 = (short)uVar2;
    param_6 = *(short *)(&DAT_004833b6 + (short)uVar2 * 2);
  }
  *psVar1 = param_6;
  if (this->field_126 == 0x1dd) {
    if (*(short *)(DAT_0048345c + 0x92 + *psVar1 * 2) != 6) goto LAB_0045762a;
  }
  else if (*(short *)(DAT_0048345c + 0x92 + *psVar1 * 2) != 1) goto LAB_0045762a;
  FUN_0042c3f0(this);
LAB_0045762a:
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_00457660 @ 0x00457660 */

int * __thiscall FUN_00457660(void *this,byte param_1)

{
  FUN_00457680(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00457680 @ 0x00457680 */

void __fastcall FUN_00457680(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004576bd;
  *param_1 = &PTR_FUN_00476dd0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004576c7();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004576c7 @ 0x004576c7 */

void FUN_004576c7(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_004577a0 @ 0x004577a0 */

void FUN_004577a0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489198,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004577f0 @ 0x004577f0 */

void FUN_004577f0(void)

{
  return;
}



/* Function: FUN_00457820 @ 0x00457820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457820(void)

{
  _DAT_004891a6 = 0;
  _DAT_004891a4 = 0;
  return;
}



/* Function: FUN_00457830 @ 0x00457830 */

void FUN_00457830(void)

{
  _atexit(FUN_00457840);
  return;
}



/* Function: FUN_00457840 @ 0x00457840 */

void FUN_00457840(void)

{
  return;
}



/* Function: FUN_00457860 @ 0x00457860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457860(void)

{
  _DAT_004891a2 = 0;
  _DAT_004891a0 = 0;
  return;
}



/* Function: FUN_00457870 @ 0x00457870 */

void FUN_00457870(void)

{
  _atexit(FUN_00457880);
  return;
}



/* Function: FUN_00457880 @ 0x00457880 */

void FUN_00457880(void)

{
  return;
}



/* Function: FUN_004578a0 @ 0x004578a0 */

void FUN_004578a0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004891a8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004578e0 @ 0x004578e0 */

void FUN_004578e0(void)

{
  _atexit(FUN_004578f0);
  return;
}



/* Function: FUN_004578f0 @ 0x004578f0 */

void FUN_004578f0(void)

{
  return;
}



/* Function: FUN_00457910 @ 0x00457910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457910(void)

{
  _DAT_004891b6 = 0;
  _DAT_004891b4 = 0;
  return;
}



/* Function: FUN_00457920 @ 0x00457920 */

void FUN_00457920(void)

{
  _atexit(FUN_00457930);
  return;
}



/* Function: FUN_00457930 @ 0x00457930 */

void FUN_00457930(void)

{
  return;
}



/* Function: FUN_00457950 @ 0x00457950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457950(void)

{
  _DAT_004891b2 = 0;
  _DAT_004891b0 = 0;
  return;
}



/* Function: FUN_00457960 @ 0x00457960 */

void FUN_00457960(void)

{
  _atexit(FUN_00457970);
  return;
}



/* Function: FUN_00457970 @ 0x00457970 */

void FUN_00457970(void)

{
  return;
}



/* Function: FUN_00457980 @ 0x00457980 */

void __cdecl FUN_00457980(short *param_1,char param_2)

{
  short uVar1;
  
  if (param_1 != (short *)0x0) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    uVar1 = param_1[1];
    param_1[1] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar1 = param_1[2];
    *(uint *)(param_1 + 2) =
         CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                  CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8)));
    uVar1 = param_1[4];
    *(uint *)(param_1 + 4) =
         CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                  CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8)));
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}



/* Function: FUN_00457a10 @ 0x00457a10 */

ushort * __cdecl FUN_00457a10(void *param_1,int param_2)

{
    /* TODO: 47 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00457b10 @ 0x00457b10 */

void __cdecl FUN_00457b10(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = *(void **)(param_3 + 0x10);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 - 4U),thunk_FUN_0042f1c0); /* TODO: MSVC array cookie at (pvVar1 - 4) */
      FUN_0046c410((int)pvVar1 - 4U);
    }
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_00457b60 @ 0x00457b60 */

void FUN_00457b60(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004891b8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00457bb0 @ 0x00457bb0 */

void FUN_00457bb0(void)

{
  return;
}



/* Function: FUN_00457bd0 @ 0x00457bd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457bd0(void)

{
  _DAT_004891c6 = 0;
  _DAT_004891c4 = 0;
  return;
}



/* Function: FUN_00457be0 @ 0x00457be0 */

void FUN_00457be0(void)

{
  _atexit(FUN_00457bf0);
  return;
}



/* Function: FUN_00457bf0 @ 0x00457bf0 */

void FUN_00457bf0(void)

{
  return;
}



/* Function: FUN_00457c10 @ 0x00457c10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457c10(void)

{
  _DAT_004891c2 = 0;
  _DAT_004891c0 = 0;
  return;
}



/* Function: FUN_00457c20 @ 0x00457c20 */

void FUN_00457c20(void)

{
  _atexit(FUN_00457c30);
  return;
}



/* Function: FUN_00457c30 @ 0x00457c30 */

void FUN_00457c30(void)

{
  return;
}



/* Function: FUN_00457c50 @ 0x00457c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457c50(void)

{
  int uVar1;
  int *unaff_FS_OFFSET;
  char local_10[12];
  
  uVar1 = *unaff_FS_OFFSET;
  DAT_00489214 = 0;
  _DAT_00489218 = 0;
  _DAT_0048921c = 0;
  *unaff_FS_OFFSET = local_10;
  _DAT_00489220 = 0xffffffff;
  DAT_00489224 = 0;
  _DAT_00489210 = &PTR_LAB_00472e00;
  _DAT_00489226 = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_00457ce0 @ 0x00457ce0 */

void FUN_00457ce0(void)

{
  _atexit(FUN_00457cf0);
  return;
}



/* Function: FUN_00457cf0 @ 0x00457cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457cf0(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  _DAT_00489210 = &PTR_LAB_00472e00;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00457d2c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00457d36();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00457d36 @ 0x00457d36 */

void FUN_00457d36(void)

{
  FUN_00413810((int *)&DAT_00489210);
  return;
}



/* Function: FUN_00457d50 @ 0x00457d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457d50(void)

{
  int uVar1;
  int *unaff_FS_OFFSET;
  char local_10[12];
  
  uVar1 = *unaff_FS_OFFSET;
  _DAT_004891ec = 0;
  _DAT_004891f0 = 0;
  _DAT_004891f4 = 0;
  *unaff_FS_OFFSET = local_10;
  _DAT_004891f8 = 0xffffffff;
  DAT_004891fc = 0;
  _DAT_004891e8 = &PTR_LAB_00472e00;
  _DAT_004891fe = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_00457de0 @ 0x00457de0 */

void FUN_00457de0(void)

{
  _atexit(FUN_00457df0);
  return;
}



/* Function: FUN_00457df0 @ 0x00457df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457df0(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  _DAT_004891e8 = &PTR_LAB_00472e00;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00457e2c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00457e36();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00457e36 @ 0x00457e36 */

void FUN_00457e36(void)

{
  FUN_00413810((int *)&DAT_004891e8);
  return;
}



/* Function: FUN_00457e50 @ 0x00457e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457e50(void)

{
  int uVar1;
  int *unaff_FS_OFFSET;
  char local_10[12];
  
  uVar1 = *unaff_FS_OFFSET;
  DAT_00489234 = 0;
  _DAT_00489238 = 0;
  _DAT_0048923c = 0;
  *unaff_FS_OFFSET = local_10;
  _DAT_00489240 = 0xffffffff;
  DAT_00489244 = 0;
  _DAT_00489230 = &PTR_LAB_00472e00;
  _DAT_00489246 = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_00457ee0 @ 0x00457ee0 */

void FUN_00457ee0(void)

{
  _atexit(FUN_00457ef0);
  return;
}



/* Function: FUN_00457ef0 @ 0x00457ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457ef0(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  _DAT_00489230 = &PTR_LAB_00472e00;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00457f2c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00457f36();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00457f36 @ 0x00457f36 */

void FUN_00457f36(void)

{
  FUN_00413810((int *)&DAT_00489230);
  return;
}



/* Function: FUN_00457f50 @ 0x00457f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457f50(void)

{
  int uVar1;
  int *unaff_FS_OFFSET;
  char local_10[12];
  
  uVar1 = *unaff_FS_OFFSET;
  DAT_004891cc = 0;
  DAT_004891d0 = 0;
  DAT_004891d4 = 0;
  *unaff_FS_OFFSET = local_10;
  _DAT_004891d8 = 0xffffffff;
  DAT_004891dc = 0;
  _DAT_004891c8 = &PTR_LAB_00472e00;
  _DAT_004891de = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *unaff_FS_OFFSET = uVar1;
  return;
}



/* Function: FUN_00457fe0 @ 0x00457fe0 */

void FUN_00457fe0(void)

{
  _atexit(FUN_00457ff0);
  return;
}



/* Function: FUN_00457ff0 @ 0x00457ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457ff0(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  _DAT_004891c8 = &PTR_LAB_00472e00;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045802c;
  *unaff_FS_OFFSET = &local_10;
  FUN_00458036();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458036 @ 0x00458036 */

void FUN_00458036(void)

{
  FUN_00413810((int *)&DAT_004891c8);
  return;
}



/* Function: FUN_00458040 @ 0x00458040 */

int * __fastcall FUN_00458040(int *param_1)

{
    /* TODO: 49 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00458180 @ 0x00458180 */

int * __thiscall FUN_00458180(void *this,byte param_1)

{
  FUN_00458710(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004581a0 @ 0x004581a0 */

int * __thiscall FUN_004581a0(void *this,short param_1,short param_2)

{
    /* TODO: 49 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004582e0 @ 0x004582e0 */

int * __thiscall FUN_004582e0(void *this,int param_1)

{
    /* TODO: 51 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00458430 @ 0x00458430 */

int * __thiscall FUN_00458430(void *this,int param_1,short param_2,short param_3)

{
    /* TODO: 51 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00458580 @ 0x00458580 */

void __thiscall FUN_00458580(void *this,short param_1,short param_2)

{
    /* TODO: 82 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00458710 @ 0x00458710 */

void __fastcall FUN_00458710(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458795;
  *param_1 = &PTR_FUN_00476eb8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 3;
  FUN_00458830((int)param_1);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  FUN_00458774();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_0045877f();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0045878a();
  local_8 = 0xffffffff;
  FUN_0045879f();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458774 @ 0x00458774 */

void FUN_00458774(void)

{
  int unaff_EBP;
  
  FUN_00459e90((int *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}



/* Function: FUN_0045877f @ 0x0045877f */

void FUN_0045877f(void)

{
  int unaff_EBP;
  
  FUN_00459e60((int *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}



/* Function: FUN_0045878a @ 0x0045878a */

void FUN_0045878a(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(*(int *)(unaff_EBP + -0x10) + 0x42));
  return;
}



/* Function: FUN_0045879f @ 0x0045879f */

void FUN_0045879f(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_004587b0 @ 0x004587b0 */

void __fastcall FUN_004587b0(int *param_1)

{
  FUN_004587d0((int)param_1);
  FUN_0041e260(param_1);
  return;
}



/* Function: FUN_004587d0 @ 0x004587d0 */

void __fastcall FUN_004587d0(int param_1)

{
  int iVar1;
  int *_Dst;
  uint uVar2;
  int *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x86); /* TODO: unknown struct, CVector-like count at offset 0x86 */
  while (iVar1 != 0) {
    _Dst = (int *)**(int **)(param_1 + 0x7c); /* TODO: CVector data ptr at offset 0x7C */
    uVar2 = *(uint *)(param_1 + 0x86);
    puVar3 = (int *)*_Dst;
    if (uVar2 != 0) {
      if (1 < uVar2) {
        memmove(_Dst,_Dst + 1,uVar2 * 4 - 4);
      }
      *(int *)(param_1 + 0x86) = *(int *)(param_1 + 0x86) + -1;
    }
    ((void (*)(void))((void **)*puVar3)[0])(); /* puVar3->vtable[0] */
    iVar1 = *(int *)(param_1 + 0x86);
  }
  return;
}



/* Function: FUN_00458830 @ 0x00458830 */

void __fastcall FUN_00458830(int param_1)

{
  if (*(uint *)(param_1 + 0x5c) != 0) {
    FUN_00465950(0,0,*(uint *)(param_1 + 0x5c));
  }
  FUN_004587d0(param_1);
  return;
}



/* Function: FUN_00458860 @ 0x00458860 */

void __thiscall FUN_00458860(TextDisplay *this,char *param_1)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar7 = 0;
  FUN_0041cb70(this,'\x01');
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      uVar7 = uVar7 + 1;
      cVar1 = param_1[uVar7];
    }
    if (this->text_capacity + -1 < (int)uVar7) {
      iVar6 = 0;
      puVar4 = this->text_buffer_ptr;
      if ((puVar4 != (uint *)0x0) && (pcVar8 = (char *)*puVar4, pcVar8 != (char *)0x0)) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          pcVar8 = pcVar8 + 1;
          iVar6 = iVar6 + 1;
          cVar1 = *pcVar8;
        }
      }
      iVar2 = uVar7 + 1;
      if ((int)(uVar7 + 1) <= iVar6 + 1) {
        iVar2 = iVar6 + 1;
      }
      iVar6 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (puVar4 == (uint *)0x0) {
        pvVar3 = this->text_allocator;
        if (this->text_allocator == (LPCVOID)0x0) {
          pvVar3 = DAT_00483df4;
        }
        puVar4 = FUN_0046ccb0(pvVar3,7,iVar6);
      }
      else {
        puVar4 = FUN_0046cdc0(puVar4,iVar6,7);
      }
      this->text_buffer_ptr = puVar4;
      this->text_capacity = iVar6;
    }
    pcVar8 = (char *)*this->text_buffer_ptr;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(int *)pcVar8 = *(int *)param_1;
      param_1 = param_1 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *param_1;
      param_1 = param_1 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(char *)(*this->text_buffer_ptr + uVar7) = 0;
  }
  ((void (*)(void))this->vtable[0x90 / 4])();
  return;
}



/* Function: FUN_00458920 @ 0x00458920 */

void __thiscall FUN_00458920(TextDisplay *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  LPCVOID pvVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *puVar9;
  int *puVar10;
  
  uVar8 = 0;
  FUN_0041cb70(this,'\x01');
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar6 = (char *)**(int **)(param_1 + 4), pcVar6 != (char *)0x0)) {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar8 = uVar8 + 1;
      cVar1 = *pcVar6;
    }
  }
  if (this->text_capacity + -1 < (int)uVar8) {
    iVar2 = 0;
    puVar5 = this->text_buffer_ptr;
    if ((puVar5 != (uint *)0x0) && (pcVar6 = (char *)*puVar5, pcVar6 != (char *)0x0)) {
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        pcVar6 = pcVar6 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *pcVar6;
      }
    }
    iVar3 = iVar2 + 1;
    if (iVar2 + 1 <= (int)(uVar8 + 1)) {
      iVar3 = uVar8 + 1;
    }
    iVar2 = (((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (puVar5 == (uint *)0x0) {
      pvVar4 = this->text_allocator;
      if (this->text_allocator == (LPCVOID)0x0) {
        pvVar4 = DAT_00483df4;
      }
      puVar5 = FUN_0046ccb0(pvVar4,7,iVar2);
    }
    else {
      puVar5 = FUN_0046cdc0(puVar5,iVar2,7);
    }
    this->text_buffer_ptr = puVar5;
    this->text_capacity = iVar2;
  }
  puVar9 = (int *)**(int **)(param_1 + 4);
  puVar10 = (int *)*this->text_buffer_ptr;
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar10 = *(char *)puVar9;
    puVar9 = (int *)((int)puVar9 + 1);
    puVar10 = (int *)((int)puVar10 + 1);
  }
  *(char *)(*this->text_buffer_ptr + uVar8) = 0;
  ((void (*)(void))this->vtable[0x90 / 4])();
  return;
}



/* Function: FUN_004589f0 @ 0x004589f0 */

int __fastcall FUN_004589f0(int param_1)

{
  return param_1 + 0x42;
}



/* Function: FUN_00458a00 @ 0x00458a00 */

void __thiscall FUN_00458a00(TextDisplay *this,short param_1)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458a85;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_0041cdc0(this,&local_18);
  local_14 = (((intptr_t)this->extent_x + (intptr_t)this->origin_x) * (int)param_1
             + 2) * 0x100;
  FUN_00458c00(this,&local_18,'\0');
  local_8 = 0xffffffff;
  FUN_00458a8f();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458a8f @ 0x00458a8f */

void FUN_00458a8f(void)

{
  return;
}



/* Function: FUN_00458aa0 @ 0x00458aa0 */

void __thiscall FUN_00458aa0(TextDisplay *this,short param_1)

{
  int *unaff_FS_OFFSET;
  int local_18 [3];
  void *puStack_c;
  int local_8;
  
  local_18[2] = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458b25;
  *unaff_FS_OFFSET = local_18 + 2;
  local_18[1] = 0;
  local_18[0] = 0;
  local_8 = 0;
  FUN_0041cdc0(this,local_18);
  local_18[0] = (((intptr_t)this->extent_y + (intptr_t)this->origin_y) *
                 (int)param_1 + 2) * 0x100;
  FUN_00458c00(this,local_18,'\0');
  local_8 = 0xffffffff;
  FUN_00458b2f();
  *unaff_FS_OFFSET = local_18[2];
  return;
}



/* Function: FUN_00458b2f @ 0x00458b2f */

void FUN_00458b2f(void)

{
  return;
}



/* Function: FUN_00458b40 @ 0x00458b40 */

void __thiscall FUN_00458b40(TextDisplay *this,short param_1,short param_2)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458be5;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_0041cdc0(this,&local_18);
  local_14 = (((intptr_t)this->extent_x + (intptr_t)this->origin_x) * (int)param_1
             + 2) * 0x100;
  local_18 = (((intptr_t)this->extent_y + (intptr_t)this->origin_y) * (int)param_2
             + 2) * 0x100;
  FUN_00458c00(this,&local_18,'\0');
  local_8 = 0xffffffff;
  FUN_00458bef();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458bef @ 0x00458bef */

void FUN_00458bef(void)

{
  return;
}



/* Function: FUN_00458c00 @ 0x00458c00 */

void __thiscall FUN_00458c00(void *this,int *param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  int local_18 [3];
  void *puStack_c;
  int local_8;
  
  local_18[2] = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458c89;
  *unaff_FS_OFFSET = local_18 + 2;
  local_18[1] = 0;
  local_18[0] = 0;
  local_8 = 0;
  FUN_0041cb70(this,'\x01');
  FUN_0041d0a0(this,param_1,param_2);
  FUN_0041cb70(this,'\x01');
  FUN_0041cdc0(this,local_18);
  ((void (*)(void))this->vtable[0x90 / 4])();
  local_8 = 0xffffffff;
  FUN_00458c93();
  *unaff_FS_OFFSET = local_18[2];
  return;
}



/* Function: FUN_00458c93 @ 0x00458c93 */

void FUN_00458c93(void)

{
  return;
}



/* Function: FUN_00458ca0 @ 0x00458ca0 */

void __thiscall FUN_00458ca0(void *this,int param_1,int param_2,char param_3)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00458d27;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  local_8 = 0;
  local_18 = param_2;
  FUN_0041cb70(this,'\x01');
  FUN_0041d0a0(this,&local_18,param_3);
  FUN_0041cb70(this,'\x01');
  FUN_0041cdc0(this,&local_18);
  ((void (*)(void))this->vtable[0x90 / 4])();
  local_8 = 0xffffffff;
  FUN_00458d31();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458d31 @ 0x00458d31 */

void FUN_00458d31(void)

{
  return;
}



/* Function: FUN_00458d40 @ 0x00458d40 */

void __fastcall FUN_00458d40(void *param_1)

{
  int *unaff_FS_OFFSET;
  int uVar1;
  int in_stack_ffffffd8;
  char local_20[8];
  char *local_18;
  char *local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00458dba;
  *unaff_FS_OFFSET = &local_10;
  local_18 = &ghidra_stack_ffffffd8;
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_ffffffd8,0);
  local_14 = &ghidra_stack_ffffffd4;
  FUN_00401050(&ghidra_stack_ffffffd4,0);
  FUN_00401060(local_20,uVar1,in_stack_ffffffd8);
  local_8 = 0;
  FUN_0041cb70(param_1,'\x01');
  local_8 = 0xffffffff;
  FUN_00458db2();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00458db2 @ 0x00458db2 */

void FUN_00458db2(void)

{
  return;
}



/* Function: FUN_00458dd0 @ 0x00458dd0 */

/* Function: FUN_00458dd0 @ 0x00458dd0
 * Struct types: TextDisplay (this) - offset 0x9e = field_9e
 */
void __thiscall FUN_00458dd0(TextDisplay *this,int param_1)

{
  this->field_9e = param_1;
  return;
}



/* Function: FUN_00458de0 @ 0x00458de0 */

void __thiscall FUN_00458de0(void *this,char param_1)

{
  void *this_00;
  
  this_00 = (void *)FUN_00458e30((int)this);
  FUN_0043b180(this_00,param_1);
  ((void (*)(void))this->vtable[0x90 / 4])();
  return;
}



/* Function: FUN_00458e10 @ 0x00458e10 */

/* Function: FUN_00458e10 @ 0x00458e10
 * Struct types: TextDisplay (this) - offset 0x8e = field_8e
 */
void __thiscall FUN_00458e10(TextDisplay *this,short param_1)

{
  this->field_8e = param_1;
  FUN_00459010((intptr_t)this);
  return;
}



/* Function: FUN_00458e30 @ 0x00458e30 */

int __fastcall FUN_00458e30(int param_1)

{
  return *(int *)(**(int **)(param_1 + 0x7c) + -4 + *(short *)(param_1 + 0x8e) * 4);
}



/* Function: FUN_00458e50 @ 0x00458e50 */

void __thiscall FUN_00458e50(void *this,int param_1)

{
    /* TODO: 77 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00458fc0 @ 0x00458fc0 */

void __thiscall FUN_00458fc0(void *this,int *param_1)

{
    /* TODO: 10 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00459010 @ 0x00459010 */

void __fastcall FUN_00459010(int param_1)

{
  short sVar1;
  int uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_20;
  int local_1c [2];
  void *local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00459160;
  *unaff_FS_OFFSET = &local_10;
  iVar6 = 0;
  local_14 = (void *)FUN_00458e30(param_1);
  local_20 = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  uVar5 = 0;
  local_8 = 0;
  *(short *)(param_1 + 0x94) = 0x7fff; /* TextDisplay._pad90 area */
  *(short *)(param_1 + 0x96) = 0x7fff; /* TextDisplay._pad90 area */
  ((TextDisplay *)param_1)->origin_x = 0;
  ((TextDisplay *)param_1)->origin_y = 0;
  uVar2 = thunk_FUN_004058a0((int)local_14);
  if (0 < (short)uVar2) {
    do {
      FUN_0043b110(local_14,uVar5);
      FUN_0041cdc0(local_14,local_1c);
      sVar3 = (short)((uint)local_1c[1] >> 8);
      iVar6 = iVar6 + sVar3;
      sVar1 = (short)((uint)local_1c[0] >> 8);
      local_20 = local_20 + sVar1;
      sVar4 = *(short *)(param_1 + 0x94); /* TextDisplay._pad90 area - min extent x */
      if (sVar3 <= *(short *)(param_1 + 0x94)) {
        sVar4 = sVar3;
      }
      *(short *)(param_1 + 0x94) = sVar4;
      sVar4 = *(short *)(param_1 + 0x96); /* TextDisplay._pad90 area - min extent y */
      if (sVar1 <= *(short *)(param_1 + 0x96)) {
        sVar4 = sVar1;
      }
      *(short *)(param_1 + 0x96) = sVar4;
      sVar4 = ((TextDisplay *)param_1)->origin_x;
      if (((TextDisplay *)param_1)->origin_x <= sVar3) {
        sVar4 = sVar3;
      }
      ((TextDisplay *)param_1)->origin_x = sVar4;
      sVar4 = ((TextDisplay *)param_1)->origin_y;
      if (((TextDisplay *)param_1)->origin_y <= sVar1) {
        sVar4 = sVar1;
      }
      uVar5 = uVar5 + 1;
      ((TextDisplay *)param_1)->origin_y = sVar4;
      uVar2 = thunk_FUN_004058a0((int)local_14);
    } while ((int)(uint)uVar5 < (int)(short)uVar2);
  }
  uVar2 = thunk_FUN_004058a0((int)local_14);
  *(short *)(param_1 + 0x90) = (short)(iVar6 / (int)(short)uVar2); /* TextDisplay._pad90 area - avg extent x */
  uVar2 = thunk_FUN_004058a0((int)local_14);
  local_8 = 0xffffffff;
  *(short *)(param_1 + 0x92) = (short)(local_20 / (int)(short)uVar2); /* TextDisplay._pad90 area - avg extent y */
  FUN_0045916a();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045916a @ 0x0045916a */

void FUN_0045916a(void)

{
  return;
}



/* Function: FUN_00459180 @ 0x00459180 */

void __thiscall
FUN_00459180(void *this,int *param_1,char *param_2,int *param_3,int *param_4,int param_5)

{
    /* TODO: 92 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00459510 @ 0x00459510 */

void FUN_00459510(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489208,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00459560 @ 0x00459560 */

void FUN_00459560(void)

{
  return;
}



/* Function: FUN_00459580 @ 0x00459580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459580(void)

{
  _DAT_00489252 = 0;
  _DAT_00489250 = 0;
  return;
}



/* Function: FUN_00459590 @ 0x00459590 */

void FUN_00459590(void)

{
  _atexit(FUN_004595a0);
  return;
}



/* Function: FUN_004595a0 @ 0x004595a0 */

void FUN_004595a0(void)

{
  return;
}



/* Function: FUN_004595b0 @ 0x004595b0 */

int __thiscall FUN_004595b0(void *this,char param_1)

{
    /* TODO: 45 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00459730 @ 0x00459730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459730(void)

{
  _DAT_0048924e = 0;
  _DAT_0048924c = 0;
  return;
}



/* Function: FUN_00459740 @ 0x00459740 */

void FUN_00459740(void)

{
  _atexit(FUN_00459750);
  return;
}



/* Function: FUN_00459750 @ 0x00459750 */

void FUN_00459750(void)

{
  return;
}



/* Function: FUN_00459760 @ 0x00459760 */

int __thiscall FUN_00459760(void *this,int param_1,void *param_2,int param_3)

{
    /* TODO: 260 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00459c00 @ 0x00459c00 */

void __thiscall FUN_00459c00(void *this,int *param_1,char param_2,int param_3,int param_4)

{
    /* TODO: 98 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00459dc4 @ 0x00459dc4 */

void FUN_00459dc4(void)

{
  return;
}



/* Function: FUN_00459dcc @ 0x00459dcc */

void FUN_00459dcc(void)

{
  return;
}



/* Function: FUN_00459dde @ 0x00459dde */

void FUN_00459dde(void)

{
  return;
}



/* Function: FUN_00459e60 @ 0x00459e60 */

void __fastcall FUN_00459e60(int *param_1)

{
  *param_1 = &PTR_LAB_00476eb4;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00459e90 @ 0x00459e90 */

void __fastcall FUN_00459e90(int *param_1)

{
  *param_1 = &PTR_LAB_00476eb0;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00459f50 @ 0x00459f50 */

void FUN_00459f50(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489260,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00459fa0 @ 0x00459fa0 */

void FUN_00459fa0(void)

{
  return;
}



/* Function: FUN_00459fc0 @ 0x00459fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459fc0(void)

{
  _DAT_0048926e = 0;
  _DAT_0048926c = 0;
  return;
}



/* Function: FUN_00459fd0 @ 0x00459fd0 */

void FUN_00459fd0(void)

{
  _atexit(FUN_00459fe0);
  return;
}



/* Function: FUN_00459fe0 @ 0x00459fe0 */

void FUN_00459fe0(void)

{
  return;
}



/* Function: FUN_0045a000 @ 0x0045a000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a000(void)

{
  _DAT_0048926a = 0;
  _DAT_00489268 = 0;
  return;
}



/* Function: FUN_0045a010 @ 0x0045a010 */

void FUN_0045a010(void)

{
  _atexit(FUN_0045a020);
  return;
}



/* Function: FUN_0045a020 @ 0x0045a020 */

void FUN_0045a020(void)

{
  return;
}



/* Function: FUN_0045a040 @ 0x0045a040 */

void FUN_0045a040(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489270,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045a080 @ 0x0045a080 */

void FUN_0045a080(void)

{
  _atexit(FUN_0045a090);
  return;
}



/* Function: FUN_0045a090 @ 0x0045a090 */

void FUN_0045a090(void)

{
  return;
}



/* Function: FUN_0045a0b0 @ 0x0045a0b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a0b0(void)

{
  _DAT_00489282 = 0;
  _DAT_00489280 = 0;
  return;
}



/* Function: FUN_0045a0c0 @ 0x0045a0c0 */

void FUN_0045a0c0(void)

{
  _atexit(FUN_0045a0d0);
  return;
}



/* Function: FUN_0045a0d0 @ 0x0045a0d0 */

void FUN_0045a0d0(void)

{
  return;
}



/* Function: FUN_0045a0f0 @ 0x0045a0f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a0f0(void)

{
  _DAT_0048927e = 0;
  _DAT_0048927c = 0;
  return;
}



/* Function: FUN_0045a100 @ 0x0045a100 */

void FUN_0045a100(void)

{
  _atexit(FUN_0045a110);
  return;
}



/* Function: FUN_0045a110 @ 0x0045a110 */

void FUN_0045a110(void)

{
  return;
}



/* Function: FUN_0045a2f0 @ 0x0045a2f0 */

int * __fastcall FUN_0045a2f0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045a33e;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  *param_1 = &PTR_FUN_00476f60;
  *unaff_FS_OFFSET = local_10;
  DAT_00489278 = 0;
  return param_1;
}



/* Function: FUN_0045a350 @ 0x0045a350 */

int * __thiscall FUN_0045a350(void *this,byte param_1)

{
  FUN_0045a370(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045a370 @ 0x0045a370 */

void __fastcall FUN_0045a370(int *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045a3de @ 0x0045a3de */

void FUN_0045a3de(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0045a575 @ 0x0045a575 */

void FUN_0045a575(void)

{
  return;
}



/* Function: FUN_0045ab33 @ 0x0045ab33 */

void FUN_0045ab33(void)

{
  return;
}



/* Function: FUN_0045ab45 @ 0x0045ab45 */

void FUN_0045ab45(void)

{
  return;
}



/* Function: FUN_0045ab60 @ 0x0045ab60 */

void __fastcall FUN_0045ab60(int param_1)

{
    /* TODO: 24 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045ae99 @ 0x0045ae99 */

void FUN_0045ae99(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0045af09 @ 0x0045af09 */

void FUN_0045af09(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0045af79 @ 0x0045af79 */

void FUN_0045af79(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0045af90 @ 0x0045af90 */

void FUN_0045af90(void *param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_0041dad0(param_1,(byte)param_2,'\0');
  if (((((UIWidget *)param_1)->child_list_2 != (void *)0) &&
      (iVar2 = *(int *)((int)((UIWidget *)param_1)->child_list_2 + 0xe) /* CVector: count at +0x0E */, iVar2 != 0)) &&
     (uVar1 = 1, iVar2 != 0)) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0045af90(*(void **)(**(int **)((int)((UIWidget *)param_1)->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + iVar2),param_2);
    } while (uVar1 <= *(uint *)((int)((UIWidget *)param_1)->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}



/* Function: FUN_0045b290 @ 0x0045b290 */

void FUN_0045b290(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489290,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045b2e0 @ 0x0045b2e0 */

void FUN_0045b2e0(void)

{
  return;
}



/* Function: FUN_0045b300 @ 0x0045b300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b300(void)

{
  _DAT_004893ca = 0;
  _DAT_004893c8 = 0;
  return;
}



/* Function: FUN_0045b310 @ 0x0045b310 */

void FUN_0045b310(void)

{
  _atexit(FUN_0045b320);
  return;
}



/* Function: FUN_0045b320 @ 0x0045b320 */

void FUN_0045b320(void)

{
  return;
}



/* Function: FUN_0045b340 @ 0x0045b340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b340(void)

{
  _DAT_004893c6 = 0;
  _DAT_004893c4 = 0;
  return;
}



/* Function: FUN_0045b350 @ 0x0045b350 */

void FUN_0045b350(void)

{
  _atexit(FUN_0045b360);
  return;
}



/* Function: FUN_0045b360 @ 0x0045b360 */

void FUN_0045b360(void)

{
  return;
}



/* Function: FUN_0045b380 @ 0x0045b380 */

void FUN_0045b380(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004893d0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045b3c0 @ 0x0045b3c0 */

void FUN_0045b3c0(void)

{
  _atexit(FUN_0045b3d0);
  return;
}



/* Function: FUN_0045b3d0 @ 0x0045b3d0 */

void FUN_0045b3d0(void)

{
  return;
}



/* Function: FUN_0045b3f0 @ 0x0045b3f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b3f0(void)

{
  _DAT_004893de = 0;
  _DAT_004893dc = 0;
  return;
}



/* Function: FUN_0045b400 @ 0x0045b400 */

void FUN_0045b400(void)

{
  _atexit(FUN_0045b410);
  return;
}



/* Function: FUN_0045b410 @ 0x0045b410 */

void FUN_0045b410(void)

{
  return;
}



/* Function: FUN_0045b430 @ 0x0045b430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b430(void)

{
  _DAT_004893da = 0;
  _DAT_004893d8 = 0;
  return;
}



/* Function: FUN_0045b440 @ 0x0045b440 */

void FUN_0045b440(void)

{
  _atexit(FUN_0045b450);
  return;
}



/* Function: FUN_0045b450 @ 0x0045b450 */

void FUN_0045b450(void)

{
  return;
}



/* Function: FUN_0045b460 @ 0x0045b460 */

int * __fastcall FUN_0045b460(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045b4b6;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  *(short *)((int)param_1 + 0x198) = 0; /* TODO: offset 0x198, GameWidget._pad160 area */
  *param_1 = &PTR_FUN_00477288;
  *(unsigned char *)((int)param_1 + 0x19a) = 0; /* TODO: offset 0x19A, GameWidget._pad160 area */
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0045b4d0 @ 0x0045b4d0 */

int * __thiscall FUN_0045b4d0(void *this,byte param_1)

{
  FUN_0045b4f0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045b4f0 @ 0x0045b4f0 */

void __fastcall FUN_0045b4f0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0045b52d;
  *param_1 = &PTR_FUN_00477288;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0045b537();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045b537 @ 0x0045b537 */

void FUN_0045b537(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0045b5d0 @ 0x0045b5d0 */

void __fastcall FUN_0045b5d0(int param_1)

{
  short sVar1;
  
  if ((*(char *)(param_1 + 0x19a) == '\0') && /* GameWidget._pad160 area */
     (sVar1 = *(short *)(param_1 + 0x198) + 1, *(short *)(param_1 + 0x198) = sVar1, 0x1a4 < sVar1)) /* GameWidget._pad160 area */
  {
    FUN_0041da90(*(void **)(param_1 + 0x19c),0); /* GameWidget._pad160 area */
    FUN_0041dad0(*(void **)(param_1 + 0x19c),0,'\0'); /* GameWidget._pad160 area */
    FUN_0040e890(DAT_004897c0);
  }
  return;
}



/* Function: FUN_0045b620 @ 0x0045b620 */

void __fastcall FUN_0045b620(int param_1)

{
  if ((0 < *(short *)(param_1 + 0x198)) && (*(char *)(param_1 + 0x19a) == '\0')) { /* GameWidget._pad160 area */
    FUN_0041da90(*(void **)(param_1 + 0x19c),0); /* GameWidget._pad160 area */
    FUN_0041dad0(*(void **)(param_1 + 0x19c),0,'\0'); /* GameWidget._pad160 area */
    FUN_0040e890(DAT_004897c0);
  }
  return;
}



/* Function: FUN_0045b9bb @ 0x0045b9bb */

void FUN_0045b9bb(void)

{
  FUN_00403500();
  return;
}



/* Function: FUN_0045b9d0 @ 0x0045b9d0 */

void FUN_0045b9d0(void)

{
  return;
}



/* Function: FUN_0045b9f0 @ 0x0045b9f0 */

void FUN_0045b9f0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004893e0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045ba40 @ 0x0045ba40 */

void FUN_0045ba40(void)

{
  return;
}



/* Function: FUN_0045ba60 @ 0x0045ba60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ba60(void)

{
  _DAT_004893ee = 0;
  _DAT_004893ec = 0;
  return;
}



/* Function: FUN_0045ba70 @ 0x0045ba70 */

void FUN_0045ba70(void)

{
  _atexit(FUN_0045ba80);
  return;
}



/* Function: FUN_0045ba80 @ 0x0045ba80 */

void FUN_0045ba80(void)

{
  return;
}



/* Function: FUN_0045bb50 @ 0x0045bb50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bb50(void)

{
  _DAT_004893ea = 0;
  _DAT_004893e8 = 0;
  return;
}



/* Function: FUN_0045bb60 @ 0x0045bb60 */

void FUN_0045bb60(void)

{
  _atexit(FUN_0045bb70);
  return;
}



/* Function: FUN_0045bb70 @ 0x0045bb70 */

void FUN_0045bb70(void)

{
  return;
}



/* Function: FUN_0045bb80 @ 0x0045bb80 */

int * __fastcall FUN_0045bb80(int *param_1)

{
  *param_1 = &PTR_FUN_0047736c;
  FUN_0045be30((int)param_1);
  return param_1;
}



/* Function: FUN_0045bba0 @ 0x0045bba0 */

int * __thiscall FUN_0045bba0(void *this,byte param_1)

{
  FUN_0045bc70(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045bbc0 @ 0x0045bbc0 */

int __thiscall FUN_0045bbc0(void *this,short *param_1,void *param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045bc70 @ 0x0045bc70 */

void __fastcall FUN_0045bc70(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_420[256];
  short local_1e [5];
  int *local_14;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045bd9e;
  *param_1 = &PTR_FUN_0047736c;
  *(char *)(param_1 + 3) = 1;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  FUN_0045c0c0();
  if ((*(char *)((int)local_14 + 0xd) != '\0') && (DAT_004896b0 != 0)) { /* TODO: offset 0x0D on local_14, unknown struct */
    FUN_00455dc0(DAT_004896b0);
  }
  if (DAT_004838bc != (HGDIOBJ)0x0) {
    FUN_00451ee0(local_420);
    local_8 = 0;
    FUN_004268d0(local_420,1);
    local_8 = 0xffffffff;
    FUN_0045bd93();
  }
  if (local_14[1] != 0) {
    local_1e[1] = 0;
    local_1e[0] = 0;
    local_8 = 1;
    local_1e[3] = 0x280;
    local_1e[2] = 0x1e0;
    FUN_004304d0((void *)local_14[1],0,0,0);
    FUN_00430620((void *)local_14[1],local_1e);
    local_8 = 0xffffffff;
    FUN_0045bda8();
  }
  FUN_0045c070((int)local_14);
  FUN_00455380();
  if (DAT_004838bc != (HGDIOBJ)0x0) {
    FUN_004268c0(DAT_004838bc);
    DAT_004838bc = (HGDIOBJ)0x0;
  }
  FUN_0045c090();
  FUN_0045c0a0();
  FUN_0045c0b0();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045bd93 @ 0x0045bd93 */

void FUN_0045bd93(void)

{
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x41c));
  return;
}



/* Function: FUN_0045bda8 @ 0x0045bda8 */

void FUN_0045bda8(void)

{
  return;
}



/* Function: FUN_0045bdb0 @ 0x0045bdb0 */

void __fastcall FUN_0045bdb0(int param_1)

{
  do {
    FUN_004561a0(DAT_004896b0);
  } while (*(char *)(param_1 + 0xc) == '\0');
  return;
}



/* Function: FUN_0045bdd0 @ 0x0045bdd0 */

void __fastcall FUN_0045bdd0(int param_1)

{
    /* TODO: 5 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045be00 @ 0x0045be00 */

void __fastcall FUN_0045be00(int param_1)

{
    /* TODO: 10 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045be30 @ 0x0045be30 */

void __fastcall FUN_0045be30(int param_1)

{
  *(char *)(param_1 + 0xc) = 0;
  return;
}



/* Function: FUN_0045be40 @ 0x0045be40 */

void __fastcall FUN_0045be40(int param_1)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045bf2e @ 0x0045bf2e */

void FUN_0045bf2e(void)

{
  return;
}



/* Function: FUN_0045bf40 @ 0x0045bf40 */

void __thiscall FUN_0045bf40(void *this,short *param_1,void *param_2)

{
    /* TODO: 46 lines - has decompilation artifacts */
    return;
}



