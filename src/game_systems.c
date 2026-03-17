/*
 * game_systems.c - Game subsystems
 * Address range: 0x410000 - 0x41FFFF
 * Functions: 309
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_00410050 @ 0x00410050 */

void FUN_00410050(void)

{
  return;
}



/* Function: FUN_00410062 @ 0x00410062 */

void FUN_00410062(void)

{
  return;
}



/* Function: FUN_00410070 @ 0x00410070 */

int * __thiscall
FUN_00410070(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
    /* TODO: 59 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041022b @ 0x0041022b */

void FUN_0041022b(void)

{
  return;
}



/* Function: FUN_00410250 @ 0x00410250 */

int * __thiscall FUN_00410250(void *this,byte param_1)

{
  FUN_00410270(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00410270 @ 0x00410270 */

void __fastcall FUN_00410270(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004102c1;
  *param_1 = (int)&PTR_LAB_00472c58;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00410300((int)param_1);
  FUN_0042c3f0(param_1);
  local_8 = 0xffffffff;
  FUN_004102cb();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004102cb @ 0x004102cb */

void FUN_004102cb(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00410300 @ 0x00410300 */

/* Function cleaned: param_1 accesses offsets 0x126 (object_ptr) and 0x132+ on GameWidget */
void __fastcall FUN_00410300(GameWidget *this)

{
  int *piVar1;
  int *puVar2;
  short sVar3;

  if ((int *)this->object_ptr != (int *)0x0) {
    ((void (*)(void))*(void **)this->object_ptr)(); /* call through object_ptr->vtable[0] */
    this->object_ptr = 0;
  }
  sVar3 = 0;
  do {
    piVar1 = (int *)((int)this + 0x132 + sVar3 * 4); /* TODO: offset 0x132+ is in _pad134 region, array of 10 pointers */
    puVar2 = (int *)*piVar1;
    if (puVar2 != (int *)0x0) {
      ((void (*)(void))((void **)*puVar2)[0])(); /* puVar2->vtable[0] */
    }
    sVar3 = sVar3 + 1;
    *piVar1 = 0;
  } while (sVar3 < 10);
  return;
}



/* Function: FUN_00410350 @ 0x00410350 */

void __fastcall FUN_00410350(int *param_1)

{
    /* TODO: 9 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004103a0 @ 0x004103a0 */

void __fastcall FUN_004103a0(void *param_1)

{
    /* TODO: 82 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00410592 @ 0x00410592 */

void FUN_00410592(void)

{
  return;
}



/* Function: FUN_004105a4 @ 0x004105a4 */

void FUN_004105a4(void)

{
  return;
}



/* Function: FUN_004105b0 @ 0x004105b0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e (page_offset), 0x15c (visible_slot_count), 0x132+ */
void __fastcall FUN_004105b0(GameWidget *this)

{
  char cVar1;
  void *pvVar2;
  ushort uVar3;
  uint uVar4;
  void *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int *unaff_FS_OFFSET;
  int uVar11;
  int uVar12;
  int uVar13;
  int in_stack_ffffffb8;
  int local_30 [6];
  char *local_18;
  char *local_14;
  int local_10;
  char *puStack_c;
  uint local_8;

  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00410803;
  *unaff_FS_OFFSET = &local_10;
  local_30[5] = 0;
  local_30[4] = 0;
  local_8 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  uVar13 = 0;
  FUN_00401050(&ghidra_stack_ffffffb8,0);
  uVar12 = 0;
  FUN_00401050(&ghidra_stack_ffffffb4,0);
  local_18 = &ghidra_stack_ffffffb0;
  uVar11 = 0;
  FUN_00401050(&ghidra_stack_ffffffb0,0);
  local_14 = &ghidra_stack_ffffffac;
  FUN_00401050(&ghidra_stack_ffffffac,0);
  FUN_0040bfd0(local_30,uVar11,uVar12,uVar13,in_stack_ffffffb8);
  local_8 = CONCAT31((((local_8) >> 8) & 0xFFFFFF),1);
  FUN_0041ce10(this,local_30 + 4,0);
  FUN_0044a3c0(DAT_00483458,this->page_offset);
  uVar3 = FUN_0044a260(DAT_00483458);
  if (9 < (short)uVar3) {
    uVar3 = 10;
  }
  sVar10 = 0;
  this->visible_slot_count = uVar3;
  do {
    iVar9 = (int)sVar10;
    pvVar2 = *(void **)((int)this + iVar9 * 4 + 0x132); /* TODO: offset 0x132+ array of slot pointers */
    if (pvVar2 != (void *)0x0) {
      FUN_00458860(pvVar2,(char *)&DAT_0047ef44);
      FUN_0041cb70(*(void **)((int)this + iVar9 * 4 + 0x132),'\x01'); /* TODO: offset 0x132+ array of slot pointers */
      uVar4 = FUN_0044ab30(DAT_00483458);
      if (((char)uVar4 != '\0') && (sVar10 < this->visible_slot_count)) {
        FUN_0041cd60(*(void **)((int)this + iVar9 * 4 + 0x132),local_30); /* TODO: offset 0x132+ array of slot pointers */
        local_14 = (char *)(local_30[5] + 0xc800);
        FUN_0041d020(*(void **)((int)this + iVar9 * 4 + 0x132),local_14, /* TODO: offset 0x132+ array of slot pointers */
                     (local_30[2] - local_30[0] & 0xffffff00U) * iVar9 + local_30[4] + 0xd200,0);
        puVar5 = FUN_0044a780(DAT_00483458);
        FUN_00458920(*(void **)((int)this + iVar9 * 4 + 0x132),(int)puVar5); /* TODO: offset 0x132+ array of slot pointers */
        iVar6 = FUN_004589f0(*(int *)((int)this + iVar9 * 4 + 0x132)); /* TODO: offset 0x132+ array of slot pointers */
        iVar8 = 0;
        if ((*(int **)(iVar6 + 4) != (int *)0x0) &&
           (pcVar7 = (char *)**(int **)(iVar6 + 4), pcVar7 != (char *)0x0)) {
          cVar1 = *pcVar7;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            iVar8 = iVar8 + 1;
            cVar1 = *pcVar7;
          }
        }
        if (iVar8 == 0) {
          FUN_00458860(*(void **)((int)this + iVar9 * 4 + 0x132),s_____No_Name_Hero_____0047ef48) /* TODO: offset 0x132+ array of slot pointers */
          ;
        }
      }
      FUN_0044a2c0(DAT_00483458);
    }
    sVar10 = sVar10 + 1;
  } while (sVar10 < 10);
  iVar9 = *(int *)((int)DAT_004897c0 + 0x52); /* TODO: DAT_004897c0 struct unknown */
  pvVar2 = *(void **)(iVar9 + 0x84);
  if (pvVar2 != (void *)0x0) {
    FUN_0041cb70(pvVar2,'\x01');
  }
  pvVar2 = *(void **)(iVar9 + 0x88);
  if (pvVar2 != (void *)0x0) {
    FUN_0041cb70(pvVar2,'\x01');
  }
  FUN_0041cb70(*(void **)((int)DAT_004897c0 + 0x52),'\x01'); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cb70(DAT_004897c0,'\x01');
  FUN_0041cad0(*(void **)((int)DAT_004897c0 + 0x52)); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cad0(DAT_004897c0);
  local_8 = local_8 & 0xffffff00;
  FUN_004107fb();
  local_8 = 0xffffffff;
  FUN_0041080d();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004107fb @ 0x004107fb */

void FUN_004107fb(void)

{
  return;
}



/* Function: FUN_0041080d @ 0x0041080d */

void FUN_0041080d(void)

{
  return;
}



/* Function: FUN_00410820 @ 0x00410820 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15c, 0x15a, 0x132+ */
void __fastcall FUN_00410820(GameWidget *this)

{
  int *puVar1;
  short sVar2;

  sVar2 = 0;
  if (0 < this->visible_slot_count) {
    do {
      puVar1 = (int *)((int)this + 0x132 + sVar2 * 4); /* TODO: offset 0x132+ array of slot pointers */
      FUN_00458de0((void *)*puVar1,DAT_0047ef3c);
      if (this->selected_slot == sVar2) {
        FUN_00458de0((void *)*puVar1,DAT_0047ef38);
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < this->visible_slot_count);
  }
  return;
}



/* Function: FUN_00410a90 @ 0x00410a90 */

void FUN_00410a90(void)

{
  return;
}



/* Function: FUN_00410a98 @ 0x00410a98 */

void FUN_00410a98(void)

{
  return;
}



/* Function: FUN_00410aa0 @ 0x00410aa0 */

void FUN_00410aa0(void)

{
  return;
}



/* Function: FUN_00410aa8 @ 0x00410aa8 */

void FUN_00410aa8(void)

{
  return;
}



/* Function: FUN_00410aba @ 0x00410aba */

void FUN_00410aba(void)

{
  return;
}



/* Function: FUN_00410af0 @ 0x00410af0 */

void __fastcall FUN_00410af0(void *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00410b90 @ 0x00410b90 */

/* Function cleaned: param_1 accesses GameWidget offset 0x15e (page_offset) */
float10 __fastcall FUN_00410b90(GameWidget *this)

{
  ushort uVar1;
  ushort uVar2;
  int local_4;

  uVar1 = FUN_0044a260(DAT_00483458);
  local_4 = 0.0;
  uVar2 = uVar1;
  if (9 < (short)uVar1) {
    uVar2 = 10;
  }
  if ((ushort)(uVar1 - uVar2) != 0) {
    local_4 = (float)((this->page_offset * 4 + -4) * 0x19) /
              (float)(int)(short)(uVar1 - uVar2);
  }
  return (float10)local_4;
}



/* Function: FUN_00410bf0 @ 0x00410bf0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e, 0x15a, 0x15c, 0x12a */
void __fastcall FUN_00410bf0(GameWidget *this)

{
  int iVar1;
  ushort uVar2;
  short uVar3;
  short sVar4;

  uVar2 = FUN_0044a260(DAT_00483458);
  if ((int)(short)uVar2 < this->page_offset + 10) {
    sVar4 = this->selected_slot;
    if ((sVar4 < 0) || (this->visible_slot_count + -1 <= (int)sVar4)) goto LAB_00410c97;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->page_offset);
    FUN_0044a2c0(DAT_00483458);
    uVar3 = FUN_0044a770(DAT_00483458);
    this->page_offset = uVar3;
    sVar4 = this->selected_slot;
    if (sVar4 == -1) goto LAB_00410c97;
    if (0 < sVar4) {
      this->selected_slot = sVar4 + -1;
    }
    sVar4 = this->selected_slot;
    if (this->page_offset + -1 <= (int)sVar4) goto LAB_00410c97;
  }
  this->selected_slot = sVar4 + 1;
LAB_00410c97:
  FUN_004105b0(this);
  FUN_00410820(this);
  iVar1 = this->scrollbar_ref;
  if (iVar1 != 0) {
    FUN_00410b90(this);
    FUN_0040fee0(iVar1);
  }
  return;
}



/* Function: FUN_00410cd0 @ 0x00410cd0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e, 0x15a, 0x15c, 0x12a */
void __fastcall FUN_00410cd0(GameWidget *this)

{
  int iVar1;
  short uVar2;
  short sVar3;

  if (this->page_offset < 2) {
    sVar3 = this->selected_slot;
    if (sVar3 < 1) goto LAB_00410d5b;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->page_offset);
    FUN_0044a330(DAT_00483458);
    uVar2 = FUN_0044a770(DAT_00483458);
    this->page_offset = uVar2;
    sVar3 = this->selected_slot;
    if (sVar3 == -1) goto LAB_00410d5b;
    if ((-1 < sVar3) && ((int)sVar3 < this->visible_slot_count + -1)) {
      this->selected_slot = sVar3 + 1;
    }
    sVar3 = this->selected_slot;
    if (sVar3 < this->visible_slot_count) goto LAB_00410d5b;
  }
  this->selected_slot = sVar3 + -1;
LAB_00410d5b:
  FUN_004105b0(this);
  FUN_00410820(this);
  iVar1 = this->scrollbar_ref;
  if (iVar1 != 0) {
    FUN_00410b90(this);
    FUN_0040fee0(iVar1);
  }
  return;
}



/* Function: FUN_00410f70 @ 0x00410f70 */

int __fastcall FUN_00410f70(int *param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00410fc0 @ 0x00410fc0 */

short FUN_00410fc0(void)

{
    /* TODO: 82 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004112e0 @ 0x004112e0 */

int * __fastcall FUN_004112e0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041132b;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00472df0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00411360 @ 0x00411360 */

void FUN_00411360(void)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004113af;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_004113a4();
  local_8 = 0xffffffff;
  FUN_004113b9();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004113a4 @ 0x004113a4 */

void FUN_004113a4(void)

{
  int unaff_EBP;
  
  FUN_00413840((int *)(*(int *)(unaff_EBP + -0x10) + 0x32));
  return;
}



/* Function: FUN_004113b9 @ 0x004113b9 */

void FUN_004113b9(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* Function: FUN_004113d0 @ 0x004113d0 */

void __fastcall FUN_004113d0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041140d;
  *param_1 = &PTR_LAB_00472e00;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00411417();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00411417 @ 0x00411417 */

void FUN_00411417(void)

{
  int unaff_EBP;
  
  FUN_00413810(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0041147f @ 0x0041147f */

void FUN_0041147f(void)

{
  int unaff_EBP;
  
  FUN_00413810(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00411490 @ 0x00411490 */

void __thiscall FUN_00411490(void *this,int param_1)

{
    /* TODO: 25 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00411520 @ 0x00411520 */

void FUN_00411520(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00484298,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00411570 @ 0x00411570 */

void FUN_00411570(void)

{
  return;
}



/* Function: FUN_00411580 @ 0x00411580 */

int __fastcall FUN_00411580(void *param_1)

{
    /* TODO: 721 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004130d0 @ 0x004130d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004130d0(void)

{
  _DAT_004842a6 = 0;
  _DAT_004842a4 = 0;
  return;
}



/* Function: FUN_004130e0 @ 0x004130e0 */

void FUN_004130e0(void)

{
  _atexit(FUN_004130f0);
  return;
}



/* Function: FUN_004130f0 @ 0x004130f0 */

void FUN_004130f0(void)

{
  return;
}



/* Function: FUN_00413110 @ 0x00413110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413110(void)

{
  _DAT_004842a2 = 0;
  _DAT_004842a0 = 0;
  return;
}



/* Function: FUN_00413120 @ 0x00413120 */

void FUN_00413120(void)

{
  _atexit(FUN_00413130);
  return;
}



/* Function: FUN_00413130 @ 0x00413130 */

void FUN_00413130(void)

{
  return;
}



/* Function: FUN_00413140 @ 0x00413140 */

void __thiscall
FUN_00413140(MathProblem *this,int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar6;
  uint uVar4;
  uint uVar5;
  
  bVar6 = false;
  uVar1 = param_5 + param_1 + param_4 + param_3 + param_2;
  iVar2 = FUN_004137b0(this->difficulty,param_1,param_2,param_3,param_4,param_5);
  if (0x57 < this->problem_type - 0x111U) goto switchD_00413199_caseD_120;
  uVar3 = (int)param_2 >> 0x1f;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar5 = (int)param_3 >> 0x1f;
  switch(this->problem_type) {
  case 0x111:
    if ((0 < (int)(((param_2 ^ uVar3) - uVar3 & 1 ^ uVar3) - uVar3)) && (param_2 != 0)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x112:
    if ((0 < (int)(((param_3 ^ uVar5) - uVar5 & 1 ^ uVar5) - uVar5)) && (param_3 != 0)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x113:
    if ((0 < (int)(((uVar1 ^ uVar4) - uVar4 & 1 ^ uVar4) - uVar4)) && (uVar1 != 0)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x114:
    param_3 = param_2;
    if (((int)(((param_2 ^ uVar3) - uVar3 & 1 ^ uVar3) - uVar3) < 1) ||
       (bVar6 = false, param_2 == 0)) {
      bVar6 = true;
    }
    goto joined_r0x0041325f;
  case 0x115:
    if (((int)(((param_3 ^ uVar5) - uVar5 & 1 ^ uVar5) - uVar5) < 1) ||
       (bVar6 = false, param_3 == 0)) {
      bVar6 = true;
    }
joined_r0x0041325f:
    if (param_3 != 0) goto switchD_00413199_caseD_120;
    break;
  case 0x116:
    if (((int)(((uVar1 ^ uVar4) - uVar4 & 1 ^ uVar4) - uVar4) < 1) || (uVar1 == 0)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x117:
  case 0x11a:
  case 0x11d:
    bVar6 = (float)(int)param_2 == this->threshold;
    goto switchD_00413199_caseD_120;
  case 0x118:
  case 0x11b:
  case 0x11e:
    bVar6 = (float)(int)param_3 == this->threshold;
    goto switchD_00413199_caseD_120;
  case 0x119:
  case 0x11c:
  case 0x11f:
    bVar6 = (float)(int)uVar1 == this->threshold;
  default:
    goto switchD_00413199_caseD_120;
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
    if (((float)(int)uVar1 < this->threshold) &&
       (this->threshold_high < (float)(int)uVar1)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x130:
  case 0x131:
  case 0x132:
    if (((float)(int)uVar1 == this->threshold) &&
       ((float)iVar2 <= this->threshold_high)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x133:
  case 0x134:
    if (((float)(int)uVar1 == this->threshold) &&
       (this->threshold_high <= (float)iVar2)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x135:
  case 0x136:
  case 0x145:
    if (((0 < (int)(((uVar1 ^ uVar4) - uVar4 & 1 ^ uVar4) - uVar4)) &&
        (this->threshold < (float)iVar2)) &&
       ((float)iVar2 < this->threshold_high)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x137:
  case 0x138:
  case 0x146:
    if ((((int)(((uVar1 ^ uVar4) - uVar4 & 1 ^ uVar4) - uVar4) < 1) &&
        (this->threshold < (float)iVar2)) &&
       ((float)iVar2 < this->threshold_high)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x140:
  case 0x141:
  case 0x142:
    if ((this->threshold <= (float)iVar2) &&
       ((float)iVar2 < this->threshold_high)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x143:
  case 0x144:
    bVar6 = (float)iVar2 <= this->threshold;
    goto switchD_00413199_caseD_120;
  case 0x151:
  case 0x155:
  case 0x157:
  case 0x161:
  case 0x165:
  case 0x167:
    if (((float)(int)uVar1 <= this->threshold) ||
       (bVar6 = true, this->threshold_high <= (float)(int)uVar1)) {
      bVar6 = false;
    }
    if ((bVar6) && (this->threshold_extra < (float)iVar2)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x152:
  case 0x156:
  case 0x158:
  case 0x162:
  case 0x166:
  case 0x168:
    if (((float)(int)uVar1 <= this->threshold) ||
       (bVar6 = true, this->threshold_high <= (float)(int)uVar1)) {
      bVar6 = false;
    }
    if ((bVar6) && ((float)iVar2 < this->threshold_extra)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x153:
  case 0x163:
    if ((((float)(int)uVar1 < this->threshold) &&
        (this->threshold_high < (float)iVar2)) &&
       ((float)iVar2 < this->threshold_extra)) {
      bVar6 = true;
      goto switchD_00413199_caseD_120;
    }
    break;
  case 0x154:
  case 0x164:
    if (((this->threshold < (float)(int)uVar1) &&
        (this->threshold_high < (float)iVar2)) &&
       (bVar6 = true, (float)iVar2 < this->threshold_extra))
    goto switchD_00413199_caseD_120;
  }
  bVar6 = false;
switchD_00413199_caseD_120:
  this->is_correct = (uint)bVar6;
  return;
}



/* Function: FUN_004136e0 @ 0x004136e0 */

int FUN_004136e0(int param_1)

{
  return *(int *)(&DAT_0047ef64 + param_1 * 0x2c);
}



/* Function: FUN_00413700 @ 0x00413700 */

int FUN_00413700(int param_1)

{
  return *(int *)(&DAT_0047ef68 + param_1 * 0x2c);
}



/* Function: FUN_00413720 @ 0x00413720 */

int FUN_00413720(int param_1)

{
  return *(int *)(&DAT_0047ef6c + param_1 * 0x2c);
}



/* Function: FUN_00413740 @ 0x00413740 */

int FUN_00413740(int param_1)

{
  return *(int *)(&DAT_0047ef70 + param_1 * 0x2c);
}



/* Function: FUN_00413760 @ 0x00413760 */

int FUN_00413760(int param_1)

{
  return *(int *)(&DAT_0047ef88 + param_1 * 0x2c);
}



/* Function: FUN_00413780 @ 0x00413780 */

void FUN_00413780(int param_1)

{
  FUN_00413740(param_1);
  return;
}



/* Function: FUN_00413790 @ 0x00413790 */

int FUN_00413790(int param_1)

{
  return *(int *)(&DAT_0047ef74 + param_1 * 0x2c);
}



/* Function: FUN_004137b0 @ 0x004137b0 */

int FUN_004137b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00413810 @ 0x00413810 */

/* Function cleaned: param_1 is CString, offset 0x16 = extra_data */
void __fastcall FUN_00413810(CString *param_1)

{
  *(int **)&param_1->vtable = &PTR_LAB_00472e04;
  if ((uint *)param_1->pp_buffer != (uint *)0x0) {
    FUN_0046d110((uint *)param_1->pp_buffer);
  }
  param_1->tag = 0xffffffff;
  param_1->pp_buffer = 0;
  param_1->capacity = 0;
  param_1->allocator = 0;
  param_1->extra_data = 0;
  param_1->owns_buffer = 0;
  return;
}



/* Function: FUN_00413840 @ 0x00413840 */

void __fastcall FUN_00413840(int *param_1)

{
  *param_1 = &PTR_LAB_00472e08;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00413900 @ 0x00413900 */

/* Function cleaned: param_1 is a large struct (>0x1E8 bytes), likely MathProblem-related
 * TODO: offsets 0x1D2-0x1E6 are beyond DialogWidget, unknown struct type */
int * __fastcall FUN_00413900(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;

  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004139b9;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044bc50(param_1);
  *(int *)((int)param_1 + 0x1d6) = 0;            /* TODO: unknown offset 0x1D6 */
  *(int *)((int)param_1 + 0x1da) = 0;             /* TODO: unknown offset 0x1DA */
  *(int *)((int)param_1 + 0x1de) = 0;             /* TODO: unknown offset 0x1DE */
  param_1[0x7a] = 0;                              /* offset 0x1E8 */
  *(int *)((int)param_1 + 0x1e2) = 0xffffffff;    /* TODO: unknown offset 0x1E2 */
  *(unsigned char *)((int)param_1 + 0x1e6) = 0;   /* TODO: unknown offset 0x1E6 */
  *(void ***)((int)param_1 + 0x1d2) = &PTR_LAB_00472e04; /* TODO: unknown offset 0x1D2 */
  *(void ***)((int)param_1 + 0x1d2) = &PTR_LAB_00472e00; /* TODO: unknown offset 0x1D2 */
  param_1[0x7a] = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *param_1 = &PTR_LAB_00472e40;
  *(int *)((int)param_1 + 0x2e) = 0;              /* TODO: unknown offset 0x2E on this struct */
  *(unsigned char *)(param_1 + 0x74) = 0;          /* offset 0x1D0 */
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00413c66 @ 0x00413c66 */

void FUN_00413c66(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00413d4e @ 0x00413d4e */

void FUN_00413d4e(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00413e03 @ 0x00413e03 */

void FUN_00413e03(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00413e99 @ 0x00413e99 */

void FUN_00413e99(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00413f4e @ 0x00413f4e */

void FUN_00413f4e(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00413fe4 @ 0x00413fe4 */

void FUN_00413fe4(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00414099 @ 0x00414099 */

void FUN_00414099(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_0041414e @ 0x0041414e */

void FUN_0041414e(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_004141e4 @ 0x004141e4 */

void FUN_004141e4(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_004142a3 @ 0x004142a3 */

void FUN_004142a3(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00414370 @ 0x00414370 */

void FUN_00414370(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004842a8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004143c0 @ 0x004143c0 */

void FUN_004143c0(void)

{
  return;
}



/* Function: FUN_004143e0 @ 0x004143e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004143e0(void)

{
  _DAT_004842b6 = 0;
  _DAT_004842b4 = 0;
  return;
}



/* Function: FUN_004143f0 @ 0x004143f0 */

void FUN_004143f0(void)

{
  _atexit(FUN_00414400);
  return;
}



/* Function: FUN_00414400 @ 0x00414400 */

void FUN_00414400(void)

{
  return;
}



/* Function: FUN_00414410 @ 0x00414410 */

/* Function cleaned: param_1 is MathProblem */
void __fastcall FUN_00414410(MathProblem *param_1)

{
  FUN_00414420(param_1,0);
  return;
}



/* Function: FUN_00414420 @ 0x00414420 */

/* Function cleaned: returns address of this->slots[param_1] */
int __thiscall FUN_00414420(MathProblem *this,int param_1)

{
  return (int)&this->slots[param_1];
}



/* Function: FUN_00414440 @ 0x00414440 */

int __thiscall FUN_00414440(MathProblem *this,uint param_1,char param_2)

{
  char uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  
  if (((param_2 == '\0') && (this->threshold != '\0')) &&
     (this->active_flag != 0)) {
    return (int)&this->slots[param_1].value;
  }
  if (param_1 == 0) {
    switch(this->problem_type) {
    case 0x211:
      iVar4 = rand();
      iVar4 = iVar4 % 3 + 1;
      this->slots[0].value = iVar4;
      this->slots[1].value = iVar4;
      iVar4 = rand();
      uVar1 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[0].symbol = uVar1;
      this->slots[1].symbol = uVar1;
      break;
    case 0x212:
      iVar4 = rand();
      iVar4 = iVar4 % 5 + 10;
      this->slots[0].value = iVar4;
      this->slots[1].value = iVar4;
      iVar4 = rand();
      uVar1 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[0].symbol = uVar1;
      this->slots[1].symbol = uVar1;
      break;
    case 0x213:
      iVar4 = rand();
      this->slots[0].value = iVar4 % 5 + 10;
      iVar4 = rand();
      uVar1 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[0].symbol = uVar1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = uVar1;
      break;
    case 0x214:
      this->slots[0].flags = 5;
      FUN_00417010(this,1,0xc,1);
      break;
    case 0x221:
      iVar4 = rand();
      this->slots[0].value = iVar4 % 3 + 1;
      iVar4 = rand();
      uVar1 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[0].symbol = uVar1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = uVar1;
      break;
    case 0x222:
      iVar4 = rand();
      this->slots[0].value = iVar4 % 5 + 10;
      iVar4 = rand();
      uVar1 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[0].symbol = uVar1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = uVar1;
      break;
    case 0x223:
      this->slots[0].flags = 5;
      FUN_00417010(this,1,0x14,1);
      break;
    case 0x224:
      this->slots[0].flags = 0;
      iVar4 = rand();
      this->slots[0].result = iVar4 % 0x14 + 1;
      do {
        iVar4 = rand();
        iVar4 = iVar4 % 0x12 + 2;
        this->operand_a = iVar4;
      } while (this->slots[0].result == iVar4);
      break;
    case 0x231:
      FUN_004170a0(this,100,1000,100);
      break;
    case 0x232:
      FUN_004170a0(this,10,100,10);
      break;
    case 0x233:
      FUN_00417010(this,100,900,1);
      break;
    case 0x234:
      FUN_00417140(this,1,0x14,1);
      break;
    case 0x235:
      FUN_00417010(this,0x32,0x8c,1);
      break;
    case 0x236:
      this->slots[0].flags = 0;
      iVar4 = rand();
      this->slots[0].result = iVar4 % 0x14 + 1;
      do {
        iVar4 = rand();
        iVar4 = iVar4 % 0x14 + 1;
        this->operand_a = iVar4;
      } while (this->slots[0].result == iVar4);
      break;
    case 0x241:
      FUN_004170a0(this,1000,10000,1000);
      break;
    case 0x242:
      this->slots[0].flags = 0;
      iVar4 = rand();
      this->slots[0].result = ((iVar4 % 0x28) * 5 + 5) * 2;
      do {
        iVar4 = rand();
        iVar4 = ((iVar4 % 0x28) * 5 + 5) * 2;
        this->operand_a = iVar4;
      } while (this->slots[0].result == iVar4);
      break;
    case 0x243:
      this->slots[0].flags = 5;
      iVar4 = rand();
      this->slots[0].result = ((iVar4 % 10) * 5 + 5) * 2;
      iVar4 = rand();
      this->operation = 3;
      this->operand_a = ((iVar4 % 10) * 5 + 5) * 2;
      this->slots[1].result = this->slots[0].result * this->operand_a;
      this->slots[0].denom = this->slots[1].denom;
      this->operand_a_denom = this->slots[1].denom;
      break;
    case 0x244:
      FUN_00417140(this,1,100,1);
      break;
    case 0x245:
      FUN_00417010(this,100,900,1);
      break;
    case 0x246:
      FUN_00417010(this,0x32,0x122,1);
      this->slots[0].flags = this->slots[0].flags | 0x30;
      this->slots[1].flags = 0x30;
      this->operation = this->operation | 0x30;
      this->slots[0].denom = 10;
      this->slots[1].denom = 10;
      this->operand_a_denom = 10;
      break;
    case 0x251:
      piVar11 = (int *)&this->slots[0].denom;
      piVar10 = (int *)&this->slots[0].result;
      FUN_00417240(piVar10,piVar11);
      this->slots[1].result = *piVar10;
      this->slots[1].denom = *piVar11;
      *piVar10 = *piVar10 * 2;
      this->slots[0].flags = 0x20;
      this->slots[1].flags = 0x20;
      *piVar11 = *piVar11 * 2;
      break;
    case 0x252:
      piVar11 = (int *)&this->slots[0].denom;
      piVar10 = (int *)&this->slots[0].result;
      FUN_00417240(piVar10,piVar11);
      iVar4 = rand();
      this->slots[0].flags = 0x10;
      this->slots[1].flags = 0x30;
      *piVar10 = *piVar10 + (iVar4 % 5 + 1) * *piVar11;
      this->slots[1].denom = *piVar11;
      this->slots[1].result = *piVar10;
      break;
    case 0x253:
      this->slots[0].flags = 0;
      iVar4 = rand();
      this->slots[0].result = ((iVar4 % 0x28) * 4 + 4) * 0x19;
      do {
        iVar4 = rand();
        iVar4 = ((iVar4 % 0x28) * 4 + 4) * 0x19;
        this->operand_a = iVar4;
      } while (this->slots[0].result == iVar4);
      break;
    case 0x254:
      this->slots[0].flags = 5;
      iVar4 = rand();
      this->slots[0].result = ((iVar4 % 10) * 4 + 4) * 0x19;
      iVar4 = rand();
      this->operation = 3;
      iVar4 = ((iVar4 % 10) * 4 + 4) * 0x19;
      this->operand_a = iVar4;
      this->slots[1].result = this->slots[0].result * iVar4;
      this->slots[0].denom = this->slots[1].denom;
      this->operand_a_denom = this->slots[1].denom;
      break;
    case 0x255:
      FUN_00417010(this,500,10000,1);
      this->slots[0].flags = this->slots[0].flags | 0x50;
      this->slots[1].flags = this->slots[1].flags | 0x50;
      this->operation = this->operation | 0x50;
      this->slots[0].denom = 100;
      this->slots[1].denom = 100;
      this->operand_a_denom = 100;
      break;
    case 0x256:
      uVar3 = rand();
      this->slots[0].flags = 5;
      if ((uVar3 & 1) == 0) {
        iVar4 = rand();
        this->slots[1].denom = 10;
        this->slots[1].result = iVar4 % 0x32 + 0x32;
        iVar4 = rand();
        this->operand_a_denom = 10;
        this->operation = 4;
        this->slots[0].denom = 100;
        this->slots[0].flags = this->slots[0].flags | 0x30;
        this->operation = 0x34;
        iVar4 = iVar4 % 0x32 + 0x32;
        this->operand_a = iVar4;
        this->slots[1].flags = this->slots[1].flags | 0x30;
        this->slots[0].result = iVar4 * this->slots[1].result;
      }
      else {
        iVar4 = rand();
        this->slots[0].denom = 10;
        this->slots[0].result = iVar4 % 0x32 + 0x32;
        iVar4 = rand();
        this->operand_a_denom = 10;
        this->operation = 3;
        iVar4 = iVar4 % 0x32 + 0x32;
        this->slots[0].flags = this->slots[0].flags | 0x30;
        this->operand_a = iVar4;
        this->slots[1].result = this->slots[0].result * iVar4;
        this->slots[1].denom = 100;
        this->slots[1].flags = this->slots[1].flags | 0x30;
        this->operation = 0x33;
      }
      break;
    case 0x261:
      iVar4 = rand();
      this->factor = iVar4 % 5 + 2;
      FUN_00417240((int *)&this->slots[1].result,(int *)&this->slots[1].denom);
      this->slots[1].flags = 0x20;
      this->slots[0].flags = 0x20;
      this->slots[0].result = this->slots[1].result * this->factor;
      this->slots[0].denom = this->slots[1].denom * this->factor;
      break;
    case 0x262:
      piVar11 = (int *)&this->slots[0].denom;
      piVar10 = (int *)&this->slots[0].result;
      FUN_00417240(piVar10,piVar11);
      iVar4 = rand();
      this->slots[0].flags = 0x20;
      this->slots[1].flags = 0x10;
      *piVar10 = *piVar10 + (iVar4 % 5 + 1) * *piVar11;
      this->slots[1].denom = *piVar11;
      this->slots[1].result = *piVar10;
      break;
    case 0x263:
      piVar11 = (int *)&this->slots[0].denom;
      piVar10 = (int *)&this->slots[0].result;
      FUN_00417240(piVar10,piVar11);
      iVar4 = rand();
      this->slots[0].flags = 0x10;
      this->slots[1].flags = 0x30;
      *piVar10 = *piVar10 + (iVar4 % 5 + 1) * *piVar11;
      this->slots[1].denom = *piVar11;
      this->slots[1].result = *piVar10;
      break;
    case 0x264:
      FUN_00417240((int *)&this->slots[0].result,(int *)&this->slots[0].denom);
      this->slots[1].result = this->slots[0].result;
      this->slots[0].flags = 0x20;
      this->slots[1].flags = 0x40;
      this->slots[1].denom = this->slots[0].denom;
      break;
    case 0x265:
      this->slots[0].flags = 5;
      iVar4 = rand();
      this->slots[0].denom = 100;
      this->slots[0].flags = this->slots[0].flags | 0x40;
      this->slots[0].result = (iVar4 % 5) * 5 + 5;
      iVar4 = rand();
      this->operation = 3;
      this->operand_a = ((iVar4 % 5) * 4 + 4) * 5;
      this->slots[1].result =
           (this->slots[0].result * this->operand_a) / 100;
    }
    goto switchD_0041449d_caseD_215;
  }
  uVar3 = this->correct_slot;
  if (param_1 == uVar3) {
    if (this->threshold == '\0') {
      switch(this->problem_type) {
      case 0x224:
      case 0x236:
      case 0x242:
      case 0x253:
        iVar4 = this->slots[0].result;
        iVar7 = this->operand_a;
        if (iVar7 < iVar4) {
          piVar11 = (int *)&this->slots[param_1].result;
          *piVar11 = iVar4 - iVar7;
          this->slots[param_1].flags = 1;
        }
        else {
          piVar11 = (int *)&this->slots[param_1].result;
          *piVar11 = iVar7 - iVar4;
          this->slots[param_1].flags = 2;
        }
        uVar3 = 1;
        piVar10 = (int *)&this->slots[1].result;
        this->slots[param_1].denom = this->slots[0].denom;
        do {
          if ((param_1 != uVar3) && (*piVar11 == *piVar10)) {
            FUN_00414440(this,uVar3,'\0');
          }
          piVar10 = (int *)((int)piVar10 + 0x12);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 6);
      }
      goto switchD_0041449d_caseD_215;
    }
    if (param_1 == uVar3) goto switchD_0041449d_caseD_215;
  }
  switch(this->problem_type) {
  case 0x211:
    do {
      iVar4 = rand();
      iVar4 = iVar4 % 3 + 1;
      this->slots[param_1].value = iVar4;
    } while (iVar4 == this->slots[0].value);
    this->slots[param_1].symbol = this->slots[0].symbol;
    break;
  case 0x212:
    do {
      iVar4 = rand();
      iVar4 = iVar4 % 5 + 10;
      this->slots[param_1].value = iVar4;
    } while (iVar4 == this->slots[0].value);
    this->slots[param_1].symbol = this->slots[0].symbol;
    break;
  case 0x213:
    do {
      iVar4 = rand();
      iVar4 = iVar4 % 5 + 10;
      this->slots[param_1].value = iVar4;
    } while (iVar4 == this->slots[0].value);
    pcVar9 = (char *)&this->slots[param_1].symbol;
    iVar4 = rand();
    cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
    *pcVar9 = cVar2;
    if (cVar2 == this->slots[0].symbol) {
      do {
        iVar4 = rand();
        cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
        *pcVar9 = cVar2;
      } while (cVar2 == this->slots[0].symbol);
    }
    break;
  case 0x214:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -1;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 0xc + 1;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x221:
    if ((param_1 == 2) || (param_1 == 3)) {
      this->slots[param_1].value =
           this->slots[uVar3].value;
      if ((param_1 & 1) == 0) {
        pcVar9 = (char *)&this->slots[param_1].symbol;
        iVar4 = rand();
        cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
        *pcVar9 = cVar2;
        if (cVar2 == this->slots[0].symbol) {
          do {
            iVar4 = rand();
            cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
            *pcVar9 = cVar2;
          } while (cVar2 == this->slots[0].symbol);
        }
      }
      else {
        pcVar9 = (char *)&this->slots[param_1].symbol;
        iVar4 = rand();
        cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
        *pcVar9 = cVar2;
        if (cVar2 == this->slots[0].symbol) {
          do {
            iVar4 = rand();
            cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
            *pcVar9 = cVar2;
          } while (cVar2 == this->slots[0].symbol);
        }
      }
    }
    else {
      do {
        uVar3 = rand();
        uVar8 = (int)uVar3 >> 0x1f;
        iVar4 = (((uVar3 ^ uVar8) - uVar8 & 7 ^ uVar8) - uVar8) + 1;
        this->slots[param_1].value = iVar4;
      } while (iVar4 == this->slots[0].value);
      iVar4 = rand();
      cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      this->slots[param_1].symbol = cVar2;
      if (cVar2 == this->slots[0].symbol) {
        do {
          iVar4 = rand();
          cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
          this->slots[param_1].symbol = cVar2;
        } while (cVar2 == this->slots[0].symbol);
      }
    }
    break;
  case 0x222:
    if ((param_1 == 2) || (param_1 == 3)) {
      this->slots[param_1].value =
           this->slots[uVar3].value;
      if ((param_1 & 1) == 0) {
        pcVar9 = (char *)&this->slots[param_1].symbol;
        iVar4 = rand();
        cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
        *pcVar9 = cVar2;
        if (cVar2 == this->slots[0].symbol) {
          do {
            iVar4 = rand();
            cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
            *pcVar9 = cVar2;
          } while (cVar2 == this->slots[0].symbol);
        }
      }
      else {
        pcVar9 = (char *)&this->slots[param_1].symbol;
        iVar4 = rand();
        cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
        *pcVar9 = cVar2;
        if (cVar2 == this->slots[0].symbol) {
          do {
            iVar4 = rand();
            cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
            *pcVar9 = cVar2;
          } while (cVar2 == this->slots[0].symbol);
        }
      }
    }
    else {
      do {
        iVar4 = rand();
        iVar4 = iVar4 % 5 + 10;
        this->slots[param_1].value = iVar4;
      } while (iVar4 == this->slots[0].value);
      pcVar9 = (char *)&this->slots[param_1].symbol;
      iVar4 = rand();
      cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
      *pcVar9 = cVar2;
      if (cVar2 == this->slots[0].symbol) {
        do {
          iVar4 = rand();
          cVar2 = (&DAT_0047f0b0)[(iVar4 % 7) * 4];
          *pcVar9 = cVar2;
        } while (cVar2 == this->slots[0].symbol);
      }
    }
    break;
  case 0x223:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -1;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 0x12 + 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x224:
  case 0x236:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -1;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if ((param_1 == 4) && (this->slots[uVar3].flags == 2)) {
      this->slots[4].result = this->slots[uVar3].result;
      this->slots[4].flags = 1;
    }
    else {
      piVar11 = (int *)&this->slots[param_1].result;
      do {
        uVar3 = rand();
        if ((uVar3 & 1) == 0) {
          iVar7 = rand();
          *piVar11 = iVar7 % 0x12 + 2;
          iVar7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*piVar11 <= iVar7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          iVar7 = rand();
          *piVar11 = iVar7 % 0x12 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *piVar11);
    }
    break;
  case 0x231:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -100;
    }
    else {
      do {
        iVar4 = rand();
        iVar4 = ((iVar4 % 9) * 4 + 4) * 0x19;
        this->slots[param_1].result = iVar4;
      } while (this->slots[this->correct_slot].result == iVar4);
    }
    break;
  case 0x232:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -10;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = ((iVar4 % 9) * 5 + 5) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x233:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -10;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 999 + 1;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x234:
    piVar11 = (int *)&this->slots[param_1].result;
    do {
      uVar3 = rand();
      if ((uVar3 & 1) == 0) {
        iVar4 = rand();
        *piVar11 = this->slots[this->correct_slot].result + iVar4 % 5 + 1;
      }
      else {
        iVar4 = this->slots[this->correct_slot].result;
        iVar7 = rand();
        *piVar11 = (iVar4 - iVar7 % 5) + -1;
      }
    } while (*piVar11 < 0);
    break;
  case 0x235:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -10;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 0x62 + 0x33;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x241:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1000;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -1000;
    }
    else {
      do {
        iVar4 = rand();
        iVar4 = ((iVar4 % 9) * 5 + 5) * 200;
        this->slots[param_1].result = iVar4;
      } while (this->slots[this->correct_slot].result == iVar4);
    }
    break;
  case 0x242:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 10;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -10;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 4) {
      this->slots[4].result = this->slots[uVar3].result;
      if (this->slots[this->correct_slot].flags == 1) {
        this->slots[4].flags = 2;
      }
      else {
        this->slots[4].flags = 1;
      }
    }
    else {
      piVar11 = (int *)&this->slots[param_1].result;
      do {
        uVar3 = rand();
        if ((uVar3 & 1) == 0) {
          iVar7 = rand();
          *piVar11 = (iVar7 % 0x12) * 10 + 2;
          iVar7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*piVar11 <= iVar7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          iVar7 = rand();
          *piVar11 = (iVar7 % 0x12) * 10 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *piVar11);
    }
    break;
  case 0x243:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -100;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = ((iVar4 % 0x14) * 5 + 5) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x244:
    piVar11 = (int *)&this->slots[param_1].result;
    do {
      uVar3 = rand();
      if ((uVar3 & 1) == 0) {
        iVar4 = rand();
        *piVar11 = this->slots[this->correct_slot].result + iVar4 % 10 + 1
        ;
      }
      else {
        iVar4 = this->slots[this->correct_slot].result;
        iVar7 = rand();
        *piVar11 = (iVar4 - iVar7 % 10) + -1;
      }
    } while (*piVar11 < 0);
    break;
  case 0x245:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 0x32;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -0x32;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 900 + 100;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x246:
    piVar11 = (int *)&this->slots[param_1].result;
    do {
      uVar3 = rand();
      if ((uVar3 & 1) == 0) {
        iVar4 = rand();
        *piVar11 = this->slots[this->correct_slot].result + iVar4 % 10 + 1
        ;
      }
      else {
        iVar4 = this->slots[this->correct_slot].result;
        iVar7 = rand();
        *piVar11 = (iVar4 - iVar7 % 10) + -1;
      }
    } while (*piVar11 < 0);
    this->slots[param_1].flags = 0x30;
    this->slots[param_1].denom =
         this->slots[this->correct_slot].denom;
    break;
  case 0x251:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1;
      this->slots[2].denom =
           this->slots[this->correct_slot].denom + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + 2;
      this->slots[3].denom =
           this->slots[this->correct_slot].denom + 2;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 10 + 1;
        iVar4 = rand();
        this->slots[param_1].denom = iVar4 % 10 + 1;
      } while ((float10)(this->slots[param_1].result / this->slots[param_1].denom) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x20;
    break;
  case 0x252:
    if (param_1 == 2) {
      iVar4 = this->slots[uVar3].result;
      iVar7 = this->slots[uVar3].denom;
      iVar6 = rand();
      this->slots[2].result = (iVar4 * 100) / iVar7 + (iVar6 % 0x5a + 10) / 10;
      this->slots[2].denom = 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result =
           (this->slots[uVar3].result * 100) /
           this->slots[uVar3].denom + 10;
      this->slots[3].denom = 100;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 900 + 100;
        this->slots[param_1].denom = 100;
      } while ((float10)(this->slots[param_1].result / 100) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x30;
    break;
  case 0x253:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 100;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -100;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if ((param_1 == 4) && (this->slots[uVar3].flags == 2)) {
      this->slots[4].result = this->slots[uVar3].result;
      this->slots[4].flags = 1;
    }
    else {
      piVar11 = (int *)&this->slots[param_1].result;
      do {
        uVar3 = rand();
        if ((uVar3 & 1) == 0) {
          iVar7 = rand();
          *piVar11 = (iVar7 % 0x12) * 100 + 2;
          iVar7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*piVar11 <= iVar7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          iVar7 = rand();
          *piVar11 = (iVar7 % 0x12) * 100 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *piVar11);
    }
    break;
  case 0x254:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[uVar3].result + -100;
    }
    else if (param_1 == 4) {
      do {
        iVar4 = rand();
        this->slots[4].result = ((iVar4 % 900) * 5 + 500) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[4].result);
    }
    else {
      do {
        iVar4 = rand();
        iVar4 = ((iVar4 % 0x5a) * 4 + 0x28) * 0x19;
        this->slots[param_1].result = iVar4;
      } while (this->slots[this->correct_slot].result == iVar4);
    }
    break;
  case 0x255:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[uVar3].result + 1000;
    }
    else {
      if (param_1 == 3) {
        if (1000 < this->slots[3].result) {
          this->slots[3].result = this->slots[uVar3].result + -1000;
          goto LAB_00415df9;
        }
      }
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 10000 + 500;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
LAB_00415df9:
    this->slots[param_1].flags = 0x50;
    this->slots[param_1].denom = 100;
    break;
  case 0x256:
    do {
      iVar4 = rand();
      iVar7 = rand();
      iVar4 = (iVar4 % 0x32 + 0x32) * (iVar7 % 0x55 + 5);
      this->slots[param_1].result = iVar4;
      uVar3 = this->slots[this->correct_slot].result - iVar4;
      uVar8 = (int)uVar3 >> 0x1f;
    } while ((int)((uVar3 ^ uVar8) - uVar8) < 200);
    this->slots[param_1].flags = 0x30;
    this->slots[param_1].denom = 100;
    break;
  case 0x261:
    if ((param_1 == 2) &&
       (iVar4 = this->slots[uVar3].result + 1,
       iVar4 % (this->slots[uVar3].denom + 1) != 0)) {
      this->slots[2].result = iVar4;
      this->slots[2].denom =
           this->slots[this->correct_slot].denom + 1;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 100 + 1;
        iVar4 = rand();
        this->slots[param_1].denom = iVar4 % 100 + 1;
      } while ((float10)(this->slots[0].result / this->slots[0].denom) ==
               (float10)(this->slots[param_1].result / this->slots[param_1].denom));
    }
    this->slots[param_1].flags = 0x20;
    break;
  case 0x262:
    if (param_1 == 2) {
      if (this->slots[uVar3].result != 0) {
        this->slots[2].denom = this->slots[uVar3].denom;
        iVar4 = this->slots[this->correct_slot].result;
        if (iVar4 % this->slots[this->correct_slot].denom == 1) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + -1;
        }
        this->slots[2].result = iVar4;
      }
      piVar11 = (int *)&this->slots[2].denom;
      if (this->slots[2].result % *piVar11 == 0) {
        if (*piVar11 == 2) {
          *piVar11 = this->slots[this->correct_slot].denom + 2;
        }
        this->slots[2].result = *piVar11 + 1;
      }
    }
    else {
      piVar11 = (int *)&this->slots[param_1].denom;
      piVar10 = (int *)&this->slots[param_1].result;
      do {
        FUN_00417240(piVar10,piVar11);
        iVar4 = rand();
        *piVar10 = *piVar10 + (iVar4 % 7 + 1) * *piVar11;
      } while (this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom ==
               *piVar10 / *piVar11);
      if (*piVar10 % *piVar11 == 0) {
        iVar4 = this->slots[this->correct_slot].denom;
        *piVar11 = iVar4 + 1;
        *piVar10 = iVar4 + 2;
      }
    }
    this->slots[param_1].flags = 0x10;
    break;
  case 0x263:
    if (param_1 == 2) {
      iVar4 = this->slots[uVar3].result;
      iVar7 = this->slots[uVar3].denom;
      iVar6 = rand();
      this->slots[2].result = (iVar4 * 100) / iVar7 + (iVar6 % 0x5a + 10) / 10;
      this->slots[2].denom = 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result =
           (this->slots[uVar3].result * 100) /
           this->slots[uVar3].denom + 10;
      this->slots[3].denom = 100;
    }
    else {
      do {
        iVar4 = rand();
        this->slots[param_1].result = iVar4 % 900 + 100;
        this->slots[param_1].denom = 100;
      } while ((float10)(this->slots[param_1].result / 100) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x30;
    break;
  case 0x264:
    piVar11 = (int *)&this->slots[param_1].denom;
    piVar10 = (int *)&this->slots[param_1].result;
    do {
      FUN_00417240(piVar10,piVar11);
    } while ((float10)*piVar10 / (float10)*piVar11 ==
             (float10)this->slots[this->correct_slot].result /
             (float10)this->slots[this->correct_slot].denom);
    this->slots[param_1].flags = 0x40;
    break;
  case 0x265:
    do {
      iVar4 = rand();
      this->slots[param_1].result = iVar4 % 100 + 1;
      this->slots[param_1].denom = 1;
    } while (this->slots[this->correct_slot].result ==
             this->slots[param_1].result);
  }
switchD_0041449d_caseD_215:
  return (int)&this->slots[param_1].value;
}



/* Function: FUN_004166e0 @ 0x004166e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004166e0(void)

{
  _DAT_004842b2 = 0;
  _DAT_004842b0 = 0;
  return;
}



/* Function: FUN_004166f0 @ 0x004166f0 */

void FUN_004166f0(void)

{
  _atexit(FUN_00416700);
  return;
}



/* Function: FUN_00416700 @ 0x00416700 */

void FUN_00416700(void)

{
  return;
}



/* Function: FUN_00416710 @ 0x00416710 */

void * FUN_00416710(int param_1,int param_2,uint param_3,int param_4)

{
    /* TODO: 3 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041680d @ 0x0041680d */

void FUN_0041680d(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416861 @ 0x00416861 */

void FUN_00416861(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_004168b8 @ 0x004168b8 */

void FUN_004168b8(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_0041690f @ 0x0041690f */

void FUN_0041690f(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416970 @ 0x00416970 */

void FUN_00416970(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: caseD_0 @ 0x00416978 */

int switchD_00416806_caseD_0(void)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00416a4a @ 0x00416a4a */

void FUN_00416a4a(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416c79 @ 0x00416c79 */

void FUN_00416c79(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416c81 @ 0x00416c81 */

void FUN_00416c81(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416d2b @ 0x00416d2b */

void FUN_00416d2b(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416d33 @ 0x00416d33 */

void FUN_00416d33(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416dab @ 0x00416dab */

void FUN_00416dab(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416dc7 @ 0x00416dc7 */

int FUN_00416dc7(void)

{
    /* TODO: 29 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00416e22 @ 0x00416e22 */

void FUN_00416e22(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416e2a @ 0x00416e2a */

void FUN_00416e2a(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416e32 @ 0x00416e32 */

void FUN_00416e32(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416e3a @ 0x00416e3a */

void FUN_00416e3a(void)

{
  int unaff_EBP;
  
  FUN_00413810((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416e4a @ 0x00416e4a */

void FUN_00416e4a(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x6c));
  return;
}



/* Function: FUN_00416e64 @ 0x00416e64 */

void FUN_00416e64(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00416ef0 @ 0x00416ef0 */

/* Function cleaned: param_1 is MathProblem; 0x1FE=operand_a, 0x202=operand_a_denom, 0x206=operation */
void __fastcall FUN_00416ef0(MathProblem *this)

{
  FUN_00416710(this->operand_a,this->operand_a_denom,this->operation,1);
  return;
}



/* Function: FUN_00416f10 @ 0x00416f10 */

/* Function cleaned: this is MathProblem; accesses slots[param_1].result/denom/flags */
void __thiscall FUN_00416f10(MathProblem *this,int param_1)

{
  FUN_00416710(this->slots[param_1].result,this->slots[param_1].denom,
               this->slots[param_1].flags,0);
  return;
}



/* Function: FUN_00416f40 @ 0x00416f40 */

char __thiscall FUN_00416f40(MathProblem *this,uint param_1)

{
  int *puVar1;
  int iVar2;
  
  puVar1 = (int *)&this->is_correct;
  if (this->correct_slot == param_1) {
    *puVar1 = 1;
  }
  else {
    *puVar1 = 0;
  }
  if (this->threshold != '\0') goto LAB_00416ff3;
  switch(this->slots[param_1].flags) {
  case 1:
    this->operand_a = this->operand_a + this->slots[param_1].result;
    break;
  case 2:
    this->operand_a = this->operand_a - this->slots[param_1].result;
    break;
  case 3:
    iVar2 = this->slots[param_1].result * this->operand_a;
    goto LAB_00416fc6;
  case 4:
    iVar2 = this->operand_a / this->slots[param_1].result;
LAB_00416fc6:
    this->operand_a = iVar2;
  }
  if (this->operand_a < 0) {
    this->operand_a = 0;
  }
  this->correct_slot = param_1;
  if (this->active_flag != 0) {
    FUN_00414440(this,param_1,'\x01');
  }
LAB_00416ff3:
  return *(char *)puVar1;
}



/* Function: FUN_00417010 @ 0x00417010 */

int __thiscall FUN_00417010(MathProblem *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this->slots[0].flags = 5;
  uVar1 = rand();
  uVar3 = (int)uVar1 >> 0x1f;
  if (((uVar1 ^ uVar3) - uVar3 & 1 ^ uVar3) == uVar3) {
    iVar2 = FUN_0044d460(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a,-1,-1,-1,-1);
    this->operation = 2;
    this->slots[1].result = iVar2;
  }
  else {
    iVar2 = FUN_0044d400(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a);
    this->operation = 1;
    this->slots[1].result = iVar2;
  }
  this->slots[0].denom = this->slots[1].denom;
  this->operand_a_denom = this->slots[1].denom;
  return 0;
}



/* Function: FUN_004170a0 @ 0x004170a0 */

int __thiscall FUN_004170a0(void *this,int param_1,int param_2,int param_3)

{
    /* TODO: 18 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00417140 @ 0x00417140 */

int __thiscall FUN_00417140(MathProblem *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this->slots[0].flags = 5;
  uVar1 = rand();
  uVar3 = (int)uVar1 >> 0x1f;
  if (((uVar1 ^ uVar3) - uVar3 & 1 ^ uVar3) == uVar3) {
    floor(SQRT((double)(param_2 / param_3)));
    ceil(SQRT((double)(param_1 / param_3)));
    iVar2 = FUN_0044d700(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a,-1,-1,-1,-1);
    this->operation = 4;
    this->slots[1].result = iVar2;
  }
  else {
    iVar2 = FUN_0044d610(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a);
    this->operation = 3;
    this->slots[1].result = iVar2;
  }
  this->slots[0].denom = this->slots[1].denom;
  this->operand_a_denom = this->slots[1].denom;
  return 0;
}



/* Function: FUN_00417240 @ 0x00417240 */

int * __cdecl FUN_00417240(int *param_1,int *param_2)

{
  int iVar1;
  int *puVar2;
  
  iVar1 = rand();
  puVar2 = (int *)(iVar1 / 0xb);
  switch(iVar1 % 0xb) {
  case 0:
  case 7:
  case 8:
    *param_2 = 2;
    *param_1 = 1;
    return param_2;
  case 1:
  case 9:
    *param_2 = 4;
    *param_1 = 1;
    return param_2;
  case 2:
  case 10:
    *param_2 = 4;
    *param_1 = 3;
    return param_2;
  case 3:
    *param_2 = 5;
    *param_1 = 1;
    return param_2;
  case 4:
    *param_2 = 5;
    *param_1 = 2;
    return param_2;
  case 5:
    *param_2 = 5;
    *param_1 = 3;
    return param_2;
  case 6:
    *param_2 = 5;
    *param_1 = 4;
    puVar2 = param_2;
  }
  return puVar2;
}



/* Function: FUN_00417320 @ 0x00417320 */

int * __thiscall FUN_00417320(CString *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *puVar7;
  int *puVar8;
  
  uVar6 = 0;
  *(void ***)this = &PTR_LAB_00472e04;
  this->pp_buffer = 0;
  this->capacity = 0;
  this->allocator = 0;
  this->extra_data = 0;
  this->owns_buffer = 0;
  this->tag = 0xffffffff;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar4 = (char *)**(int **)(param_1 + 4), pcVar4 != (char *)0x0)) {
    cVar1 = *pcVar4;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar6 = uVar6 + 1;
      cVar1 = *pcVar4;
    }
  }
  if ((0 < (int)param_2) && ((int)param_2 <= (int)uVar6)) {
    uVar6 = param_2;
  }
  if (-1 < (int)uVar6) {
    iVar2 = uVar6 + 1;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    puVar3 = FUN_0046ccb0(DAT_00483df4,7,iVar2);
    this->pp_buffer = puVar3;
    this->capacity = iVar2;
  }
  puVar7 = (int *)**(int **)(param_1 + 4);
  puVar8 = (int *)*this->pp_buffer;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar8 = *(char *)puVar7;
    puVar7 = (int *)((int)puVar7 + 1);
    puVar8 = (int *)((int)puVar8 + 1);
  }
  *(char *)(*this->pp_buffer + uVar6) = 0;
  return this;
}



/* Function: FUN_004173e0 @ 0x004173e0 */

void __thiscall FUN_004173e0(CString *this,char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  LPCVOID pvVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      uVar8 = uVar8 + 1;
      cVar1 = param_1[uVar8];
    }
    if ((0 < (int)param_2) && ((int)param_2 <= (int)uVar8)) {
      uVar8 = param_2;
    }
    if (this->capacity + -1 < (int)uVar8) {
      iVar2 = 0;
      puVar5 = this->pp_buffer;
      if ((puVar5 != (uint *)0x0) && (pcVar7 = (char *)*puVar5, pcVar7 != (char *)0x0)) {
        cVar1 = *pcVar7;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          iVar2 = iVar2 + 1;
          cVar1 = *pcVar7;
        }
      }
      iVar3 = iVar2 + 1;
      if (iVar2 + 1 <= (int)(uVar8 + 1)) {
        iVar3 = uVar8 + 1;
      }
      iVar2 = (((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (puVar5 == (uint *)0x0) {
        pvVar4 = this->allocator;
        if (this->allocator == (LPCVOID)0x0) {
          pvVar4 = DAT_00483df4;
        }
        puVar5 = FUN_0046ccb0(pvVar4,7,iVar2);
      }
      else {
        puVar5 = FUN_0046cdc0(puVar5,iVar2,7);
      }
      this->pp_buffer = puVar5;
      this->capacity = iVar2;
    }
    pcVar7 = (char *)*this->pp_buffer;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(int *)pcVar7 = *(int *)param_1;
      param_1 = param_1 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *param_1;
      param_1 = param_1 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(char *)(*this->pp_buffer + uVar8) = 0;
  }
  return;
}



/* Function: FUN_004174a0 @ 0x004174a0 */

void __thiscall FUN_004174a0(CString *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *puVar9;
  int *puVar10;
  
  uVar8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar5 = (char *)**(int **)(param_1 + 4), pcVar5 != (char *)0x0)) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar8 = uVar8 + 1;
      cVar1 = *pcVar5;
    }
  }
  if ((0 < (int)param_2) && ((int)param_2 <= (int)uVar8)) {
    uVar8 = param_2;
  }
  if (this->capacity + -1 < (int)uVar8) {
    iVar7 = 0;
    puVar4 = this->pp_buffer;
    if ((puVar4 != (uint *)0x0) && (pcVar5 = (char *)*puVar4, pcVar5 != (char *)0x0)) {
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        iVar7 = iVar7 + 1;
        cVar1 = *pcVar5;
      }
    }
    iVar2 = uVar8 + 1;
    if ((int)(uVar8 + 1) <= iVar7 + 1) {
      iVar2 = iVar7 + 1;
    }
    iVar7 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (puVar4 == (uint *)0x0) {
      pvVar3 = this->allocator;
      if (this->allocator == (LPCVOID)0x0) {
        pvVar3 = DAT_00483df4;
      }
      puVar4 = FUN_0046ccb0(pvVar3,7,iVar7);
    }
    else {
      puVar4 = FUN_0046cdc0(puVar4,iVar7,7);
    }
    this->pp_buffer = puVar4;
    this->capacity = iVar7;
  }
  puVar9 = (int *)**(int **)(param_1 + 4);
  puVar10 = (int *)*this->pp_buffer;
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar10 = *(char *)puVar9;
    puVar9 = (int *)((int)puVar9 + 1);
    puVar10 = (int *)((int)puVar10 + 1);
  }
  *(char *)(*this->pp_buffer + uVar8) = 0;
  return;
}



/* Function: FUN_00417570 @ 0x00417570 */

int __fastcall FUN_00417570(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar3 = (char *)**(int **)(param_1 + 4), pcVar3 != (char *)0x0)) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
  }
  return iVar2;
}



/* Function: FUN_00417590 @ 0x00417590 */

void __thiscall FUN_00417590(CString *this,int param_1)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  
  iVar8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar5 = (char *)**(int **)(param_1 + 4), pcVar5 != (char *)0x0)) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar8 = iVar8 + 1;
      cVar1 = *pcVar5;
    }
  }
  iVar7 = 0;
  puVar4 = this->pp_buffer;
  if ((puVar4 != (uint *)0x0) && (pcVar5 = (char *)*puVar4, pcVar5 != (char *)0x0)) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar5;
    }
  }
  if (iVar8 != 0) {
    if (this->capacity + -1 < iVar7 + iVar8) {
      iVar2 = 0;
      if ((puVar4 != (uint *)0x0) && (pcVar5 = (char *)*puVar4, pcVar5 != (char *)0x0)) {
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          iVar2 = iVar2 + 1;
          cVar1 = *pcVar5;
        }
      }
      iVar10 = iVar7 + iVar8 + 1;
      iVar7 = iVar2 + 1;
      if (iVar2 + 1 <= iVar10) {
        iVar7 = iVar10;
      }
      iVar7 = (((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (puVar4 == (uint *)0x0) {
        pvVar3 = this->allocator;
        if (this->allocator == (LPCVOID)0x0) {
          pvVar3 = DAT_00483df4;
        }
        puVar4 = FUN_0046ccb0(pvVar3,7,iVar7);
      }
      else {
        puVar4 = FUN_0046cdc0(puVar4,iVar7,7);
      }
      this->pp_buffer = puVar4;
      this->capacity = iVar7;
    }
    pcVar5 = (char *)0x0;
    if (this->pp_buffer != (int *)0x0) {
      pcVar5 = (char *)*this->pp_buffer;
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
    }
    pcVar9 = (char *)**(int **)(param_1 + 4);
    for (uVar6 = iVar8 + 1U >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(int *)pcVar5 = *(int *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar6 = iVar8 + 1U & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  return;
}



/* Function: FUN_00417680 @ 0x00417680 */

/* Function cleaned: param_1 is CString; resets all fields */
void __fastcall FUN_00417680(CString *this)

{
  this->tag = 0xffffffff;
  this->pp_buffer = 0;
  this->capacity = 0;
  this->allocator = 0;
  this->extra_data = 0;
  this->owns_buffer = 0;
  return;
}



/* Function: FUN_004176a0 @ 0x004176a0 */

void __thiscall FUN_004176a0(CString *this,int param_1)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  
  if (this->capacity + -1 < param_1) {
    iVar5 = 0;
    puVar4 = this->pp_buffer;
    if ((puVar4 != (uint *)0x0) && (pcVar6 = (char *)*puVar4, pcVar6 != (char *)0x0)) {
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar5 + 1;
        cVar1 = *pcVar6;
      }
    }
    iVar2 = param_1 + 1;
    if (param_1 + 1 <= iVar5 + 1) {
      iVar2 = iVar5 + 1;
    }
    iVar5 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (puVar4 == (uint *)0x0) {
      pvVar3 = this->allocator;
      if (this->allocator == (LPCVOID)0x0) {
        pvVar3 = DAT_00483df4;
      }
      puVar4 = FUN_0046ccb0(pvVar3,7,iVar5);
    }
    else {
      puVar4 = FUN_0046cdc0(puVar4,iVar5,7);
    }
    this->pp_buffer = puVar4;
    this->capacity = iVar5;
  }
  return;
}



/* Function: FUN_00417720 @ 0x00417720 */

void __thiscall FUN_00417720(void *this,int *param_1,uint param_2)

{
    /* TODO: 51 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004177f0 @ 0x004177f0 */

int __thiscall FUN_004177f0(void *this,int param_1,char param_2)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00417890 @ 0x00417890 */

DWORD __cdecl FUN_00417890(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}



/* Function: FUN_004178b0 @ 0x004178b0 */

int __cdecl FUN_004178b0(HANDLE param_1,DWORD param_2)

{
    /* TODO: 10 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004178e0 @ 0x004178e0 */

int __cdecl FUN_004178e0(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int uVar4;
  int iVar5;
  
  if (DAT_0047f1f4 == '\0') {
    uVar4 = FUN_004178b0(param_1,param_2);
    return uVar4;
  }
  DVar1 = FUN_00417890(param_1);
  iVar5 = (-(uint)(DVar1 < param_2) & 0xa00000) - 0x500000;
  iVar2 = (int)(param_2 - DVar1) / iVar5;
  if (iVar2 < 1) {
    iVar2 = (int)(DVar1 - param_2) / iVar5;
  }
  while( true ) {
    if (iVar2 == 0) {
      uVar4 = FUN_004178b0(param_1,param_2);
      return uVar4;
    }
    iVar2 = iVar2 + -1;
    uVar3 = FUN_004178b0(param_1,DVar1);
    if ((char)uVar3 == '\0') break;
    DVar1 = DVar1 + iVar5;
    if (DAT_0047f1fc == '\0') {
      FUN_00403230();
    }
    else {
      FUN_004564c0();
    }
  }
  return uVar3 & 0xffffff00;
}



/* Function: FUN_004179a0 @ 0x004179a0 */

bool __cdecl FUN_004179a0(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
  BOOL BVar1;
  uint uVar2;
  bool local_5;
  DWORD local_4;
  
  if (DAT_0047f1f0 == '\0') {
    local_4 = param_2;
    BVar1 = ReadFile(param_1,param_3,param_2,&local_4,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      return false;
    }
    return local_4 == param_2;
  }
  uVar2 = param_2 >> 0x10;
  local_5 = true;
  while( true ) {
    if (uVar2 == 0) {
      FUN_00403230();
      if (DAT_0047f1f8 != '\0') {
        FUN_004564c0();
      }
      if (param_2 != 0) {
        local_4 = param_2;
        BVar1 = ReadFile(param_1,param_3,param_2,&local_4,(LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          return false;
        }
        local_5 = param_2 == local_4;
      }
      return local_5;
    }
    uVar2 = uVar2 - 1;
    FUN_00403230();
    if (DAT_0047f1f8 != '\0') {
      FUN_004564c0();
    }
    local_4 = 0x10000;
    BVar1 = ReadFile(param_1,param_3,0x10000,&local_4,(LPOVERLAPPED)0x0);
    if (BVar1 == 0 || local_4 != 0x10000) break;
    param_2 = param_2 - 0x10000;
    param_3 = (LPVOID)((int)param_3 + 0x10000);
  }
  return false;
}



/* Function: FUN_00417af0 @ 0x00417af0 */

void FUN_00417af0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004842b8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00417b40 @ 0x00417b40 */

void FUN_00417b40(void)

{
  return;
}



/* Function: FUN_00417b60 @ 0x00417b60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417b60(void)

{
  _DAT_004842c6 = 0;
  _DAT_004842c4 = 0;
  return;
}



/* Function: FUN_00417b70 @ 0x00417b70 */

void FUN_00417b70(void)

{
  _atexit(FUN_00417b80);
  return;
}



/* Function: FUN_00417b80 @ 0x00417b80 */

void FUN_00417b80(void)

{
  return;
}



/* Function: FUN_00417ba0 @ 0x00417ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417ba0(void)

{
  _DAT_004842c2 = 0;
  _DAT_004842c0 = 0;
  return;
}



/* Function: FUN_00417bb0 @ 0x00417bb0 */

void FUN_00417bb0(void)

{
  _atexit(FUN_00417bc0);
  return;
}



/* Function: FUN_00417bc0 @ 0x00417bc0 */

void FUN_00417bc0(void)

{
  return;
}



/* Function: FUN_00417be0 @ 0x00417be0 */

void FUN_00417be0(void)

{
  DAT_0048615e = 0;
  DAT_0048615c = 0;
  return;
}



/* Function: FUN_00417bf0 @ 0x00417bf0 */

void FUN_00417bf0(void)

{
  _atexit(FUN_00417c00);
  return;
}



/* Function: FUN_00417c00 @ 0x00417c00 */

void FUN_00417c00(void)

{
  if ((DAT_0048614c & 1) == 0) {
    DAT_0048614c = DAT_0048614c | 1;
  }
  return;
}



/* Function: FUN_00417c30 @ 0x00417c30 */

void FUN_00417c30(void)

{
  FUN_00451ee0((int *)&DAT_00485328);
  return;
}



/* Function: FUN_00417c40 @ 0x00417c40 */

void FUN_00417c40(void)

{
  _atexit(FUN_00417c50);
  return;
}



/* Function: FUN_00417c50 @ 0x00417c50 */

void FUN_00417c50(void)

{
  if ((DAT_0048614c & 2) == 0) {
    DAT_0048614c = DAT_0048614c | 2;
    FUN_00451f60((int *)&DAT_00485328);
    return;
  }
  return;
}



/* Function: FUN_00417c70 @ 0x00417c70 */

int * __fastcall FUN_00417c70(int *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_LAB_00472e78;
  if (DAT_004833cc != 0) {
    param_1[3] = DAT_004833cc;
    return param_1;
  }
  param_1[3] = DAT_00483df4;
  return param_1;
}



/* Function: FUN_00417ca0 @ 0x00417ca0 */

int * __thiscall FUN_00417ca0(void *this,byte param_1)

{
  FUN_00417cc0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00417cc0 @ 0x00417cc0 */

void __fastcall FUN_00417cc0(int *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00472e78;
  piVar1 = param_1 + 1;
  if (*piVar1 != 0) {
    FUN_00427220(piVar1);
    *piVar1 = 0;
  }
  return;
}



/* Function: FUN_00417d80 @ 0x00417d80 */

void FUN_00417d80(void)

{
    /* TODO: 104 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00417ec0 @ 0x00417ec0 */

void FUN_00417ec0(void)

{
  int iVar1;
  byte *pbVar2;
  char *puVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (DAT_0047f208 == 0) {
    FUN_00417d80();
    return;
  }
  iVar1 = *(int *)(DAT_0047f208 + 4);
  pbVar2 = DAT_00484f54;
  puVar3 = DAT_00485c40;
  uVar4 = DAT_00486154;
  if (7 < (short)DAT_00486154) {
    uVar5 = DAT_00486154 >> 3;
    uVar4 = DAT_00486154 + uVar5 * -8;
    do {
      if (*pbVar2 != 0) {
        *puVar3 = *(char *)((uint)*pbVar2 + iVar1);
      }
      if (pbVar2[1] != 0) {
        puVar3[1] = *(char *)((uint)pbVar2[1] + iVar1);
      }
      if (pbVar2[2] != 0) {
        puVar3[2] = *(char *)((uint)pbVar2[2] + iVar1);
      }
      if (pbVar2[3] != 0) {
        puVar3[3] = *(char *)((uint)pbVar2[3] + iVar1);
      }
      if (pbVar2[4] != 0) {
        puVar3[4] = *(char *)((uint)pbVar2[4] + iVar1);
      }
      if (pbVar2[5] != 0) {
        puVar3[5] = *(char *)((uint)pbVar2[5] + iVar1);
      }
      if (pbVar2[6] != 0) {
        puVar3[6] = *(char *)((uint)pbVar2[6] + iVar1);
      }
      if (pbVar2[7] != 0) {
        puVar3[7] = *(char *)((uint)pbVar2[7] + iVar1);
      }
      pbVar2 = pbVar2 + 8;
      puVar3 = puVar3 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar4 != 0) {
    switch(uVar4) {
    case 7:
      if (pbVar2[6] != 0) {
        puVar3[6] = *(char *)((uint)pbVar2[6] + iVar1);
      }
    case 6:
      if (pbVar2[5] != 0) {
        puVar3[5] = *(char *)((uint)pbVar2[5] + iVar1);
      }
    case 5:
      if (pbVar2[4] != 0) {
        puVar3[4] = *(char *)((uint)pbVar2[4] + iVar1);
      }
    case 4:
      if (pbVar2[3] != 0) {
        puVar3[3] = *(char *)((uint)pbVar2[3] + iVar1);
      }
    case 3:
      if (pbVar2[2] != 0) {
        puVar3[2] = *(char *)((uint)pbVar2[2] + iVar1);
      }
    case 2:
      if (pbVar2[1] != 0) {
        puVar3[1] = *(char *)((uint)pbVar2[1] + iVar1);
      }
    case 1:
      if (*pbVar2 != 0) {
        *puVar3 = *(char *)((uint)*pbVar2 + iVar1);
      }
    }
  }
  return;
}



/* Function: FUN_00418290 @ 0x00418290 */

void FUN_00418290(void)

{
    /* TODO: 112 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00418520 @ 0x00418520 */

void FUN_00418520(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int local_4;
  
  iVar7 = DAT_00485c40;
  iVar6 = DAT_00485738;
  iVar5 = DAT_00484f54;
  iVar9 = (int)DAT_00486154;
  if (7 < iVar9) {
    psVar8 = (short *)(DAT_00485738 + -2 + iVar9 * 2);
    do {
      cVar1 = *(char *)(*psVar8 + iVar5);
      cVar2 = *(char *)(psVar8[-1] + iVar5);
      local_4 = (local_4 & ~0xFFFF) | ((unsigned short)(CONCAT11(cVar2,cVar1)));
      cVar3 = *(char *)(psVar8[-2] + iVar5);
      local_4 = (local_4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(cVar3,(short)local_4)) & 0xFFFFFF);
      cVar4 = *(char *)(psVar8[-3] + iVar5);
      local_4 = CONCAT13(cVar4,(int)local_4);
      if (local_4 != 0) {
        if (cVar1 != '\0') {
          *(char *)(iVar9 + -1 + iVar7) = cVar1;
        }
        if (cVar2 != '\0') {
          *(char *)(iVar9 + -2 + iVar7) = cVar2;
        }
        if (cVar3 != '\0') {
          *(char *)(iVar9 + -3 + iVar7) = cVar3;
        }
        if (cVar4 != '\0') {
          *(char *)(iVar9 + -4 + iVar7) = cVar4;
        }
      }
      cVar1 = *(char *)(psVar8[-4] + iVar5);
      cVar2 = *(char *)(psVar8[-5] + iVar5);
      local_4 = (local_4 & ~0xFFFF) | ((unsigned short)(CONCAT11(cVar2,cVar1)));
      cVar3 = *(char *)(psVar8[-6] + iVar5);
      local_4 = (local_4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(cVar3,(short)local_4)) & 0xFFFFFF);
      cVar4 = *(char *)(psVar8[-7] + iVar5);
      local_4 = CONCAT13(cVar4,(int)local_4);
      if (local_4 != 0) {
        if (cVar1 != '\0') {
          *(char *)(iVar9 + -5 + iVar7) = cVar1;
        }
        if (cVar2 != '\0') {
          *(char *)(iVar9 + -6 + iVar7) = cVar2;
        }
        if (cVar3 != '\0') {
          *(char *)(iVar9 + -7 + iVar7) = cVar3;
        }
        if (cVar4 != '\0') {
          *(char *)(iVar9 + -8 + iVar7) = cVar4;
        }
      }
      psVar8 = psVar8 + -8;
      iVar9 = iVar9 + -8;
    } while (7 < iVar9);
  }
  if (iVar9 != 0) {
    switch(iVar9) {
    case 7:
      cVar1 = *(char *)(*(short *)(iVar6 + -0xe + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -7 + iVar7) = cVar1;
      }
    case 6:
      cVar1 = *(char *)(*(short *)(iVar6 + -0xc + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -6 + iVar7) = cVar1;
      }
    case 5:
      cVar1 = *(char *)(*(short *)(iVar6 + -10 + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -5 + iVar7) = cVar1;
      }
    case 4:
      cVar1 = *(char *)(*(short *)(iVar6 + -8 + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -4 + iVar7) = cVar1;
      }
    case 3:
      cVar1 = *(char *)(*(short *)(iVar6 + -6 + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -3 + iVar7) = cVar1;
      }
    case 2:
      cVar1 = *(char *)(*(short *)(iVar6 + -4 + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -2 + iVar7) = cVar1;
      }
    case 1:
      cVar1 = *(char *)(*(short *)(iVar6 + -2 + iVar9 * 2) + iVar5);
      if (cVar1 != '\0') {
        *(char *)(iVar9 + -1 + iVar7) = cVar1;
      }
    }
  }
  return;
}



/* Function: FUN_004187a0 @ 0x004187a0 */

void FUN_004187a0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_00485c40;
  iVar4 = DAT_00485738;
  iVar3 = DAT_00484f54;
  iVar2 = DAT_00484f48;
  sVar1 = DAT_00486154;
  while (sVar1 = sVar1 + -1, -1 < sVar1) {
    iVar6 = (int)sVar1;
    if (*(char *)(*(short *)(iVar4 + iVar6 * 2) + iVar2) != '\0') {
      *(char *)(iVar5 + iVar6) = *(char *)(iVar3 + iVar6);
    }
  }
  return;
}



/* Function: FUN_00418820 @ 0x00418820 */

void FUN_00418820(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = DAT_00485c40;
  iVar2 = DAT_00484f54;
  sVar4 = DAT_00486154;
  while (sVar4 != 0) {
    sVar4 = sVar4 + -1;
    cVar1 = *(char *)(iVar2 + sVar4);
    if (cVar1 != '\0') {
      *(char *)(((int)DAT_00486154 - (int)sVar4) + -1 + iVar3) = cVar1;
    }
  }
  return;
}



/* Function: FUN_00418970 @ 0x00418970 */

void FUN_00418970(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00485318,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004189c0 @ 0x004189c0 */

void FUN_004189c0(void)

{
  return;
}



/* Function: FUN_004189d0 @ 0x004189d0 */

void FUN_004189d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar3 = DAT_00485c40;
  iVar2 = DAT_00484f54;
  iVar1 = DAT_00484f48;
  sVar5 = DAT_00486154;
  while (sVar5 != 0) {
    sVar5 = sVar5 + -1;
    iVar4 = (int)sVar5;
    if (*(char *)(iVar4 + iVar1) != '\0') {
      *(char *)((DAT_00486154 - iVar4) + -1 + iVar3) = *(char *)(iVar2 + iVar4);
    }
  }
  return;
}



/* Function: FUN_00418b70 @ 0x00418b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418b70(void)

{
  _DAT_00486152 = 0;
  _DAT_00486150 = 0;
  return;
}



/* Function: FUN_00418b80 @ 0x00418b80 */

void FUN_00418b80(void)

{
  _atexit(FUN_00418b90);
  return;
}



/* Function: FUN_00418b90 @ 0x00418b90 */

void FUN_00418b90(void)

{
  return;
}



/* Function: FUN_00418bb0 @ 0x00418bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418bb0(void)

{
  _DAT_0048614a = 0;
  _DAT_00486148 = 0;
  return;
}



/* Function: FUN_00418bc0 @ 0x00418bc0 */

void FUN_00418bc0(void)

{
  _atexit(FUN_00418bd0);
  return;
}



/* Function: FUN_00418bd0 @ 0x00418bd0 */

void FUN_00418bd0(void)

{
  return;
}



/* Function: FUN_00418e40 @ 0x00418e40 */

void FUN_00418e40(short *param_1,short param_2,short param_3,short param_4,short param_5)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short local_e;
  short local_4;
  
  *param_1 = 0;
  iVar8 = (int)param_3 - (int)param_2;
  uVar1 = (ushort)(iVar8 >> 0x1f);
  sVar2 = ((ushort)iVar8 ^ uVar1) - uVar1;
  iVar7 = (int)param_5 - (int)param_4;
  uVar1 = (ushort)(iVar7 >> 0x1f);
  sVar3 = ((ushort)iVar7 ^ uVar1) - uVar1;
  if ((sVar2 != 0) && (sVar3 != 0)) {
    sVar4 = 1;
    if (iVar8 < 1) {
      sVar4 = -1;
    }
    sVar5 = 1;
    if (iVar7 < 1) {
      sVar5 = -1;
    }
    local_e = 0;
    sVar6 = -sVar2;
    if (-1 < sVar2) {
      local_4 = sVar2 + 1;
      do {
        sVar6 = sVar3 * 2 + sVar6;
        if (-1 < param_2) {
          iVar7 = (int)local_e;
          local_e = local_e + 1;
          param_1[iVar7] = param_4;
        }
        for (; -1 < sVar6; sVar6 = sVar6 + sVar2 * -2) {
          param_4 = param_4 + sVar5;
        }
        param_2 = param_2 + sVar4;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  return;
}



/* Function: FUN_00419020 @ 0x00419020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00419020(void *this,short *param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* TODO: 31 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00419180 @ 0x00419180 */

void __thiscall
FUN_00419180(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00419400 @ 0x00419400 */

void __thiscall
FUN_00419400(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004194d0 @ 0x004194d0 */

void __thiscall
FUN_004194d0(void *this,int *param_1,short *param_2,int param_3,int param_4,
            int param_5)

{
    /* TODO: 26 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00419559 @ 0x00419559 */

void FUN_00419559(void)

{
  return;
}



/* Function: FUN_00419570 @ 0x00419570 */

void __thiscall
FUN_00419570(void *this,short *param_1,int *param_2,short *param_3,int param_4,
            int param_5,int param_6)

{
  int *unaff_FS_OFFSET;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004195fd;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_18 = *param_3;
  local_16 = param_3[1];
  local_12 = (param_1[3] - param_1[1]) + local_16;
  local_14 = (param_1[2] - *param_1) + local_18;
  FUN_00419610(this,(int *)param_1,param_2,(int *)&local_18,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  FUN_00419607();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00419607 @ 0x00419607 */

void FUN_00419607(void)

{
  return;
}



/* Function: FUN_00419610 @ 0x00419610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00419610(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)

{
    /* TODO: 164 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004199c8 @ 0x004199c8 */

void FUN_004199c8(void)

{
  return;
}



/* Function: default @ 0x00419a5b */

void switchD_004199f4_default(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  
  *(char *)(unaff_EBP + -4) = 1;
  FUN_00419a8b();
  *(char *)(unaff_EBP + -4) = 0;
  FUN_00419a93();
  *(int *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00419aa5();
  *unaff_FS_OFFSET = *(int *)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00419a8b @ 0x00419a8b */

void FUN_00419a8b(void)

{
  return;
}



/* Function: FUN_00419a93 @ 0x00419a93 */

void FUN_00419a93(void)

{
  return;
}



/* Function: FUN_00419aa5 @ 0x00419aa5 */

void FUN_00419aa5(void)

{
  return;
}



/* Function: FUN_00419ae0 @ 0x00419ae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00419ae0(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)

{
    /* TODO: 164 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00419ea1 @ 0x00419ea1 */

void FUN_00419ea1(void)

{
  return;
}



/* Function: default @ 0x00419f34 */

void switchD_00419ecd_default(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  
  *(char *)(unaff_EBP + -4) = 1;
  FUN_00419f64();
  *(char *)(unaff_EBP + -4) = 0;
  FUN_00419f6c();
  *(int *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00419f7e();
  *unaff_FS_OFFSET = *(int *)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00419f64 @ 0x00419f64 */

void FUN_00419f64(void)

{
  return;
}



/* Function: FUN_00419f6c @ 0x00419f6c */

void FUN_00419f6c(void)

{
  return;
}



/* Function: FUN_00419f7e @ 0x00419f7e */

void FUN_00419f7e(void)

{
  return;
}



/* Function: FUN_00419fc0 @ 0x00419fc0 */

int FUN_00419fc0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_0047f20c;
  DAT_0047f20c = param_1;
  return uVar1;
}



/* Function: FUN_00419fe0 @ 0x00419fe0 */

int __thiscall FUN_00419fe0(void *this,short param_1,short param_2)

{
    /* TODO: 12 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a020 @ 0x0041a020 */

void __thiscall FUN_0041a020(void *this,short *param_1)

{
  FUN_00419fe0(this,param_1[1],*param_1);
  return;
}



/* Function: FUN_0041a040 @ 0x0041a040 */

void __thiscall FUN_0041a040(void *this,short *param_1,int *param_2,short *param_3)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041a0b0 @ 0x0041a0b0 */

void __thiscall FUN_0041a0b0(void *this,int param_1,int *param_2,short *param_3)

{
    /* TODO: 27 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041a150 @ 0x0041a150 */

char __thiscall
FUN_0041a150(void *this,short *param_1,char param_2,int *param_3,short *param_4,char param_5)

{
    /* TODO: 228 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a55c @ 0x0041a55c */

void FUN_0041a55c(void)

{
  return;
}



/* Function: FUN_0041a580 @ 0x0041a580 */

char FUN_0041a580(void)

{
    /* TODO: 29 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a630 @ 0x0041a630 */

char FUN_0041a630(void)

{
    /* TODO: 32 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a700 @ 0x0041a700 */

char FUN_0041a700(void)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a940 @ 0x0041a940 */

int * __thiscall FUN_0041a940(void *this,short param_1,int *param_2)

{
    /* TODO: 24 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041a9a0 @ 0x0041a9a0 */

uint __thiscall FUN_0041a9a0(void *this,short *param_1,short *param_2,char param_3)

{
    /* TODO: 62 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041ab40 @ 0x0041ab40 */

int FUN_0041ab40(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_0047f208;
  DAT_0047f208 = param_1;
  return uVar1;
}



/* Function: FUN_0041ab60 @ 0x0041ab60 */

void __thiscall FUN_0041ab60(void *this,int param_1)

{
    /* TODO: 23 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041abd0 @ 0x0041abd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041abd0(void *this,void *param_1,char param_2)

{
  int uVar1;
  int *puVar2;
  int *puVar3;
  int *unaff_FS_OFFSET;
  char local_18 [8];
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041ac81;
  *unaff_FS_OFFSET = &local_10;
  if (param_2 != '\0') {
    FUN_0042f120(local_18,*(short *)((int)param_1 + 4)); /* TODO: param_1 struct unknown, offset +0x04 */
    local_8 = 0;
    FUN_00452160(&DAT_00485328,param_1,(int)local_18,&LAB_00451e80);
    FUN_0041ab60(this,local_18);
    local_8 = 0xffffffff;
    FUN_0041ac8b();
  }
  _DAT_0048532c = *(short *)((int)param_1 + 4);   /* TODO: param_1 struct unknown, offset +0x04 */
  puVar3 = (int *)((int)param_1 + 6);            /* TODO: param_1 struct unknown, offset +0x06 */
  puVar2 = &DAT_0048532e;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_0048572e);
  _DAT_0048572e = *(int *)((int)param_1 + 0x406);       /* TODO: param_1 struct unknown, offset +0x406, could be TextDisplay.field_406 */
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041ac8b @ 0x0041ac8b */

void FUN_0041ac8b(void)

{
  int unaff_EBP;
  
  thunk_FUN_0042f1c0((char *)(unaff_EBP + -0x14));
  return;
}



/* Function: FUN_0041ace0 @ 0x0041ace0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0041ace0(void *param_1,int param_2)

{
    /* TODO: 60 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041ae60 @ 0x0041ae60 */

int __thiscall FUN_0041ae60(void *this,short *param_1,char param_2)

{
    /* TODO: 70 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041af60 @ 0x0041af60 */

uint __thiscall FUN_0041af60(void *this,short *param_1)

{
    /* TODO: 58 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041b056 @ 0x0041b056 */

void FUN_0041b056(void)

{
  return;
}



/* Function: FUN_0041b068 @ 0x0041b068 */

void FUN_0041b068(void)

{
  int unaff_EBP;
  
  FUN_0043b810((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: FUN_0041b0a0 @ 0x0041b0a0 */

void __thiscall FUN_0041b0a0(void *this,short *param_1,char param_2)

{
  FUN_0041ae60(this,param_1,param_2);
  FUN_0041af60(this,param_1);
  return;
}



/* Function: FUN_0041b0c0 @ 0x0041b0c0 */

void __thiscall FUN_0041b0c0(void *this,short *param_1,char param_2)

{
    /* TODO: 32 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b150 @ 0x0041b150 */

void __thiscall FUN_0041b150(void *this,char param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b1d0 @ 0x0041b1d0 */

void __thiscall FUN_0041b1d0(void *this,char param_1,char param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b240 @ 0x0041b240 */

void __thiscall FUN_0041b240(void *this,char param_1,char param_2)

{
    /* TODO: 29 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b2f0 @ 0x0041b2f0 */

void __thiscall FUN_0041b2f0(void *this,int *param_1,byte param_2,byte param_3)

{
    /* TODO: 84 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b4b0 @ 0x0041b4b0 */

void __thiscall FUN_0041b4b0(void *this,char param_1,char param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b520 @ 0x0041b520 */

void __thiscall FUN_0041b520(void *this,byte param_1,byte param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b5be @ 0x0041b5be */

void FUN_0041b5be(void)

{
  int unaff_EBP;
  
  FUN_0043b810((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: FUN_0041b5f0 @ 0x0041b5f0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __cdecl FUN_0041b5f0(UIWidget *param_1,byte param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;

  if (param_1 != (UIWidget *)0x0) {
    FUN_0041dad0(param_1,param_2,'\0');
    if (((param_1->child_list_2 != 0) &&
        (iVar2 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, iVar2 != 0)) &&
       (uVar3 = 1, iVar2 != 0)) {
      iVar2 = 4;
      do {
        pvVar1 = *(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -4 + iVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_0041b5f0(pvVar1,param_2);
        }
        iVar2 = iVar2 + 4;
        uVar3 = uVar3 + 1;
      } while (uVar3 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
    }
  }
  return;
}



/* Function: FUN_0041b660 @ 0x0041b660 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __cdecl FUN_0041b660(UIWidget *param_1,void *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;

  if (param_1 != (UIWidget *)0x0) {
    FUN_0041d780(param_1,param_2);
    if (((param_1->child_list_2 != 0) &&
        (iVar3 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, iVar3 != 0)) &&
       (uVar2 = 1, iVar3 != 0)) {
      iVar3 = 4;
      do {
        pvVar1 = *(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -4 + iVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_0041b660(pvVar1,param_2);
        }
        iVar3 = iVar3 + 4;
        uVar2 = uVar2 + 1;
      } while (uVar2 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
    }
  }
  return;
}



/* Function: FUN_0041b6c0 @ 0x0041b6c0 */

int * __fastcall FUN_0041b6c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iVar3;
  int iVar4;
  int uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int uVar9;
  char cVar10;
  int in_stack_ffffffbc;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041b850;
  *unaff_FS_OFFSET = &local_10;
  /* param_1 is UIElement being initialized */
  UIElement *elem = (UIElement *)param_1;
  elem->rect_left = 0;     /* param_1 + 8 = offset 0x20 */
  local_8 = 0;
  elem->rect_top = 0;
  elem->rect_right = 0;    /* param_1 + 9 = offset 0x24 */
  elem->pos_y = 0;
  elem->rect_bottom = 0;
  elem->pos_x = 0;
  elem->pos_w = 0;
  elem->pos_h = 0;
  uVar9 = 0;
  FUN_00401050(&ghidra_stack_ffffffbc,0);
  iVar7 = 0;
  FUN_00401050(&ghidra_stack_ffffffb8,0);
  uVar5 = 0;
  FUN_00401050(&ghidra_stack_ffffffb4,0);
  FUN_00401050(&ghidra_stack_ffffffb0,0);
  FUN_0040bfd0((int *)&elem->pos_x,uVar5,iVar7,uVar9,in_stack_ffffffbc);
  local_8 = CONCAT31((((local_8) >> 8) & 0xFFFFFF),1);
  uVar1 = elem->flags;
  *param_1 = &PTR_FUN_00472f28;
  elem->flags = uVar1 & 0xfffffffe;
  elem->flags = uVar1 & 0xfffffffc;
  elem->flags = uVar1 & 0xffffffec;
  elem->flags = uVar1 & 0xffffffcc;
  elem->flags = uVar1 & 0xffffffc4;
  elem->flags = uVar1 & 0xffffffc0;
  elem->flags = uVar1 & 0xffffffc0 | 0x40;
  elem->flags = uVar1 & 0xfffffdc0 | 0x40;
  elem->flags = uVar1 & 0xfffffdc0 | 0x840;
  elem->flags = uVar1 & 0xfffff9c0 | 0x840;
  uVar2 = uVar1 & 0xffffe9c0;
  elem->flags = uVar2 | 0x840;
  elem->flags = uVar2 | 0x8840;
  elem->field_06 = 0;
  elem->parent_ptr = 0;
  elem->flags = uVar2 | 0xc840;
  elem->child_list_2 = 0;
  param_1[3] = 0;
  elem->flags = uVar1 & 0xffffc9c0 | 0xc840;
  elem->child_list_1 = 0;
  cVar10 = '\0';
  elem->field_04 = 0;      /* param_1 + 1 = offset 0x04 */
  cVar8 = '\0';
  elem->field_3e = 0;
  elem->type_or_mode = 1;
  elem->is_visible = 1;
  iVar6 = 300;
  FUN_00401050(&ghidra_stack_ffffffb4,300);
  iVar4 = 400;
  FUN_00401050(&ghidra_stack_ffffffb0,400);
  iVar3 = 100;
  FUN_00401050(&ghidra_stack_ffffffac,100);
  FUN_00401050(&ghidra_stack_ffffffa8,100);
  FUN_0041cca0(param_1,iVar3,iVar4,iVar6,iVar7,cVar8,cVar10);
  elem->field_10 = 1;      /* param_1 + 4 = offset 0x10 */
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0041b870 @ 0x0041b870 */

int * __thiscall FUN_0041b870(void *this,byte param_1)

{
  FUN_0041b890(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0041b890 @ 0x0041b890 */

void __fastcall FUN_0041b890(int *param_1)

{
    /* TODO: 45 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041b995 @ 0x0041b995 */

void FUN_0041b995(void)

{
  return;
}



/* Function: FUN_0041b9aa @ 0x0041b9aa */

void FUN_0041b9aa(void)

{
  return;
}



/* Function: FUN_0041b9c0 @ 0x0041b9c0 */

/* Function cleaned: this accesses UIWidget offset 0x1a (child_list_1) */
uint __thiscall FUN_0041b9c0(UIWidget *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  uVar1 = (uint)this->child_list_1;
  uVar2 = uVar1;
  if (uVar1 != 0) {
    uVar4 = 1;
    if (*(uint *)(uVar1 + 0xe) != 0) {
      piVar3 = (int *)**(int **)(uVar1 + 4);
      do {
        if (*piVar3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
        uVar2 = param_1;
      } while (uVar4 <= *(uint *)(uVar1 + 0xe));
    }
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0041ba00 @ 0x0041ba00 */

/* Function cleaned: this accesses UIWidget offset 0x36 (child_list_2) */
uint __thiscall FUN_0041ba00(UIWidget *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  uVar1 = (uint)this->child_list_2;
  uVar2 = uVar1;
  if (uVar1 != 0) {
    uVar4 = 1;
    if (*(uint *)(uVar1 + 0xe) != 0) {
      piVar3 = (int *)**(int **)(uVar1 + 4);
      do {
        if (*piVar3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
        uVar2 = param_1;
      } while (uVar4 <= *(uint *)(uVar1 + 0xe));
    }
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0041ba40 @ 0x0041ba40 */

void __thiscall FUN_0041ba40(GameWidget *this,char param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  this->field_10 = param_1;
  if ((((char)param_3 != '\0') && (this->child_list_1 != 0)) &&
     (uVar2 = 1, *(int *)(this->child_list_1 + 0xe) != 0)) {
    iVar3 = 4;
    do {
      pvVar1 = *(void **)(**(int **)(this->child_list_1 + 4) + -4 + iVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_0041ba40(pvVar1,param_1,param_2,param_3);
      }
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(this->child_list_1 + 0xe));
  }
  if ((((char)param_2 != '\0') && (this->child_list_2 != 0)) &&
     (uVar2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    iVar3 = 4;
    do {
      pvVar1 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_0041ba40(pvVar1,param_1,param_2,param_3);
      }
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0041baf0 @ 0x0041baf0 */

void __thiscall FUN_0041baf0(DialogWidget *this,byte param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0041da90(this,param_1);
  if ((this->child_list_2 != 0) &&
     (uVar2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_0041baf0(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + iVar1),param_1);
    } while (uVar2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  if ((this->child_list_1 != 0) &&
     (uVar2 = 1, *(int *)(this->child_list_1 + 0xe) != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_0041baf0(*(void **)(**(int **)(this->child_list_1 + 4) + -8 + iVar1),param_1);
    } while (uVar2 <= *(uint *)(this->child_list_1 + 0xe));
  }
  return;
}



/* Function: FUN_0041bb70 @ 0x0041bb70 */

int __thiscall FUN_0041bb70(void *this,void *param_1,char param_2)

{
    /* TODO: 104 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041bd00 @ 0x0041bd00 */

/* Function cleaned: this accesses UIWidget offset 0x36 (child_list_2), param_1+0x3a = parent_ptr */
void __thiscall FUN_0041bd00(UIWidget *this,int param_1)

{
  uint *puVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;

  uVar5 = 0;
  iVar2 = (int)this->child_list_2;
  puVar1 = (uint *)(iVar2 + 0xe);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    piVar4 = (int *)**(int **)(iVar2 + 4);
    do {
      if (*piVar4 == param_1) {
        uVar5 = uVar5 + 1;
        goto LAB_0041bd28;
      }
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  uVar5 = 0;
LAB_0041bd28:
  if (uVar5 != 0) {
    if (uVar5 <= uVar3) {
      if (uVar5 < uVar3) {
        _Src = (void *)(**(int **)(iVar2 + 4) + uVar5 * 4);
        memmove((void *)((int)_Src + -4),_Src,(uVar3 - uVar5) * 4);
      }
      *puVar1 = *puVar1 - 1;
    }
    ((UIElement *)param_1)->parent_ptr = 0;
  }
  return;
}



/* Function: FUN_0041bd70 @ 0x0041bd70 */

void __thiscall FUN_0041bd70(void *this,int param_1)

{
    /* TODO: 69 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041bea0 @ 0x0041bea0 */

void __thiscall FUN_0041bea0(GameWidget *this,short *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041c01d;
  *unaff_FS_OFFSET = &local_10;
  local_18 = this->rect_top;
  local_14 = this->rect_bottom;
  if ((this->child_list_2 != 0) && (*(int *)(this->child_list_2 + 0xe) != 0)) {
    local_1e = 0;
    uVar1 = 1;
    local_20 = 0;
    iVar2 = 4;
    local_1a = 0;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
    local_1c = 0;
LAB_0041bf04:
    do {
      if (*(uint *)(this->child_list_2 + 0xe) < uVar1) goto LAB_0041bfcc;
      FUN_0041bea0(*(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar2),&local_20);
      if ((local_1e < local_1a) && (local_20 < local_1c)) {
        if ((((unsigned short)((local_18) >> 16)) < ((unsigned short)((local_14) >> 16))) && ((short)local_18 < (short)local_14)) {
          if (local_1e < ((unsigned short)((local_18) >> 16))) {
            local_18 = CONCAT22(local_1e,(short)local_18);
          }
          if (((unsigned short)((local_14) >> 16)) < local_1a) {
            local_14 = CONCAT22(local_1a,(short)local_14);
          }
          if (local_20 < (short)local_18) {
            local_18 = CONCAT22(((unsigned short)((local_18) >> 16)),local_20);
          }
          if ((short)local_14 < local_1c) {
            iVar2 = iVar2 + 4;
            local_14 = CONCAT22(((unsigned short)((local_14) >> 16)),local_1c);
            uVar1 = uVar1 + 1;
            goto LAB_0041bf04;
          }
        }
        else {
          local_18 = CONCAT22(local_1e,local_20);
          local_14 = CONCAT22(local_1a,local_1c);
        }
      }
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
    } while( true );
  }
LAB_0041bfd5:
  local_8 = 0xffffffff;
  param_1[1] = ((unsigned short)((local_18) >> 16));
  param_1[3] = ((unsigned short)((local_14) >> 16));
  *param_1 = (short)local_18;
  param_1[2] = (short)local_14;
  FUN_0041c027();
  *unaff_FS_OFFSET = local_10;
  return;
LAB_0041bfcc:
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0041c015();
  goto LAB_0041bfd5;
}



/* Function: FUN_0041c015 @ 0x0041c015 */

void FUN_0041c015(void)

{
  return;
}



/* Function: FUN_0041c027 @ 0x0041c027 */

void FUN_0041c027(void)

{
  return;
}



/* Function: FUN_0041c030 @ 0x0041c030 */

void __thiscall FUN_0041c030(void *this,void *param_1)

{
  int *unaff_FS_OFFSET;
  int uVar1;
  int uVar2;
  int uVar3;
  short *psVar4;
  short local_18;
  short sStack_16;
  short local_14;
  short sStack_12;
  short local_10;
  short uStack_e;
  char *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0041c0d4;
  local_10 = (short)*unaff_FS_OFFSET;
  uStack_e = (short)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  sStack_16 = 0;
  local_18 = 0;
  sStack_12 = 0;
  local_14 = 0;
  psVar4 = &local_18;
  FUN_0041bea0(this,psVar4);
  uVar3 = CONCAT22(sStack_12,local_14);
  FUN_00401ba0(&ghidra_stack_ffffffd4,local_14);
  uVar2 = CONCAT22(local_10,sStack_12);
  FUN_00401ba0(&ghidra_stack_ffffffd0,sStack_12);
  uVar1 = CONCAT22(sStack_16,local_18);
  FUN_00401ba0(&ghidra_stack_ffffffcc,local_18);
  FUN_00401ba0(&ghidra_stack_ffffffc8,sStack_16);
  FUN_0040bfd0(param_1,uVar1,uVar2,uVar3,psVar4);
  local_8 = 0xffffffff;
  FUN_0041c0de();
  *unaff_FS_OFFSET = CONCAT22(uStack_e,local_10);
  return;
}



/* Function: FUN_0041c0de @ 0x0041c0de */

void FUN_0041c0de(void)

{
  return;
}



/* Function: FUN_0041c0f0 @ 0x0041c0f0 */

/* Function cleaned: walks UIElement parent_ptr chain to root */
int __fastcall FUN_0041c0f0(UIElement *this)

{
  int iVar1;

  iVar1 = (int)this->parent_ptr;
  while (iVar1 != 0) {
    this = (UIElement *)this->parent_ptr;
    iVar1 = (int)this->parent_ptr;
  }
  return (int)this;
}



/* Function: FUN_0041c110 @ 0x0041c110 */

char __thiscall FUN_0041c110(void *this,void *param_1)

{
    /* TODO: 66 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041c1dd @ 0x0041c1dd */

void FUN_0041c1dd(void)

{
  int unaff_EBP;
  
  FUN_004097c0((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: FUN_0041c1e5 @ 0x0041c1e5 */

char FUN_0041c1e5(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = *(int *)(unaff_EBP + -0xc);
  return 1;
}



/* Function: FUN_0041c200 @ 0x0041c200 */

void __thiscall FUN_0041c200(GameWidget *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  if ((this->child_list_2 != 0) &&
     (uVar2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    iVar1 = 4;
    do {
      this_00 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + iVar1);
      if ((char)param_3 != '\0') {
        FUN_0041cb70(this_00,'\x01');
      }
      ((GameWidget *)this_00)->pos_y = ((GameWidget *)this_00)->pos_y + param_1;
      ((GameWidget *)this_00)->pos_h = ((GameWidget *)this_00)->pos_h + param_1;
      ((GameWidget *)this_00)->pos_x = ((GameWidget *)this_00)->pos_x + param_2;
      ((GameWidget *)this_00)->pos_w = ((GameWidget *)this_00)->pos_w + param_2;
      FUN_0041d490((intptr_t)this_00);
      if (((GameWidget *)this_00)->child_list_2 != 0) {
        FUN_0041c200((GameWidget *)this_00,param_1,param_2,param_3);
      }
      if ((char)param_3 != '\0') {
        FUN_0041cb70(this_00,'\x01');
      }
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0041c2a0 @ 0x0041c2a0 */

void __thiscall FUN_0041c2a0(GameWidget *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  this->type_or_mode = param_1;
  if (((this->child_list_2 != 0) &&
      (iVar2 = *(int *)(this->child_list_2 + 0xe), iVar2 != 0)) && (uVar1 = 1, iVar2 != 0))
  {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0041c2a0(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + iVar2),param_1);
    } while (uVar1 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0041c2f0 @ 0x0041c2f0 */

int * __thiscall FUN_0041c2f0(void *this,short *param_1)

{
    /* TODO: 31 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041c420 @ 0x0041c420 */

/* Function cleaned: param_1 is UIElement; offset 0xc = parent_widget, vtable call */
void __fastcall FUN_0041c420(UIElement *this)

{
  if (this->parent_widget != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ((void (*)(void))((void **)(*(int *)this->parent_widget))[0x28 / 4])(); /* parent_widget->vtable[10] */
    return;
  }
  return;
}



/* Function: FUN_0041c4a0 @ 0x0041c4a0 */

void __fastcall FUN_0041c4a0(int *param_1)

{
    /* TODO: 80 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041c61e @ 0x0041c61e */

void FUN_0041c61e(void)

{
  return;
}



/* Function: FUN_0041c626 @ 0x0041c626 */

void FUN_0041c626(void)

{
  return;
}



/* Function: FUN_0041c62e @ 0x0041c62e */

void FUN_0041c62e(void)

{
  return;
}



/* Function: FUN_0041c640 @ 0x0041c640 */

void FUN_0041c640(void)

{
  return;
}



/* Function: FUN_0041c6b0 @ 0x0041c6b0 */

void __thiscall FUN_0041c6b0(void *this,char param_1)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041c720 @ 0x0041c720 */

/* Function cleaned: param_1 is UIElement; accesses flags(0x12), parent_widget(0x0C), field_3e(0x3E), field_06(0x06) */
void __fastcall FUN_0041c720(UIElement *this)

{
  SHORT SVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if ((((*(byte *)&this->flags & 1) != 0) && (iVar4 = (int)this->parent_widget, iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x3e) != 0)) {
    uVar3 = 0;
    uVar5 = *(uint *)(*(int *)(iVar4 + 0x3e) + 0xe);
    if (uVar5 != 0) {
      piVar2 = (int *)**(int **)(*(int *)(iVar4 + 0x3e) + 4);
      do {
        if (*piVar2 == (int)this) {
          iVar4 = uVar3 + 1;
          goto LAB_0041c759;
        }
        piVar2 = piVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    iVar4 = 0;
LAB_0041c759:
    if (iVar4 != 0) {
      SVar1 = GetAsyncKeyState(0x10);
      if (SVar1 < 0) {
        uVar5 = iVar4 - 1;
      }
      else {
        uVar5 = iVar4 + 1;
      }
      iVar4 = ((UIElement *)this->parent_widget)->field_3e;
      uVar3 = *(uint *)(iVar4 + 0xe);
      if (uVar3 < uVar5) {
        uVar5 = 1;
      }
      else if (uVar5 == 0) {
        uVar5 = uVar3;
      }
      FUN_00430ac0((void *)this->field_06,*(int **)(**(int **)(iVar4 + 4) + -4 + uVar5 * 4));
    }
  }
  return;
}



/* Function: FUN_0041c7b0 @ 0x0041c7b0 */

void __thiscall FUN_0041c7b0(void *this,int param_1)

{
    /* TODO: 82 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041c8e0 @ 0x0041c8e0 */

void __thiscall FUN_0041c8e0(void *this,int param_1)

{
    /* TODO: 45 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041ca50 @ 0x0041ca50 */

void FUN_0041ca50(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486168,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0041caa0 @ 0x0041caa0 */

void FUN_0041caa0(void)

{
  return;
}



/* Function: FUN_0041cad0 @ 0x0041cad0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x1a (child_list_1) */
void __fastcall FUN_0041cad0(UIWidget *param_1)

{
  int iVar1;
  uint uVar2;

  FUN_0041cb70(param_1,'\x01');
  if (((int)param_1->child_list_1 != 0) &&
     (uVar2 = 1, *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_0041cb20(*(void **)(**(int **)((int)param_1->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -8 + iVar1));
    } while (uVar2 <= *(uint *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}



/* Function: FUN_0041cb20 @ 0x0041cb20 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __fastcall FUN_0041cb20(UIWidget *param_1)

{
  int iVar1;
  uint uVar2;

  FUN_0041cb70(param_1,'\x01');
  if (((int)param_1->child_list_2 != 0) &&
     (uVar2 = 1, *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 + 1;
      FUN_0041cb20(*(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + iVar1));
    } while (uVar2 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}



/* Function: FUN_0041cb70 @ 0x0041cb70 */

void __thiscall FUN_0041cb70(DialogWidget *this,char param_1)

{
  int *unaff_FS_OFFSET;
  short local_18 [4];
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041cbec;
  *unaff_FS_OFFSET = &local_10;
  this->flags = this->flags | 4;
  if ((param_1 != '\0') && (this->field_06 != 0)) {
    local_18[1] = 0;
    local_8 = 0;
    local_18[0] = 0;
    local_18[3] = 0;
    local_18[2] = 0;
    FUN_0041dec0(this,local_18);
    FUN_0042ffd0(this->field_06,local_18);
    local_8 = 0xffffffff;
    FUN_0041cbf6();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041cbf6 @ 0x0041cbf6 */

void FUN_0041cbf6(void)

{
  return;
}



/* Function: FUN_0041cc10 @ 0x0041cc10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cc10(void)

{
  _DAT_0048617a = 0;
  _DAT_00486178 = 0;
  return;
}



/* Function: FUN_0041cc20 @ 0x0041cc20 */

void FUN_0041cc20(void)

{
  _atexit(FUN_0041cc30);
  return;
}



/* Function: FUN_0041cc30 @ 0x0041cc30 */

void FUN_0041cc30(void)

{
  return;
}



/* Function: FUN_0041cc40 @ 0x0041cc40 */

void __thiscall FUN_0041cc40(GameWidget *this,int *param_1,char param_2)

{
  FUN_0041cb70(this,'\x01');
  this->pos_y = param_1[1];
  this->pos_h = param_1[3];
  this->pos_x = *param_1;
  this->pos_w = param_1[2];
  FUN_0041d490((intptr_t)this);
  FUN_0041d6a0((intptr_t)this);
  FUN_0041cb70(this,'\x01');
  if (param_2 != '\0') {
    ((void (*)(void))this->vtable[0x60 / 4])();
    return;
  }
  ((void (*)(void))this->vtable[0x5c / 4])();
  return;
}



/* Function: FUN_0041cca0 @ 0x0041cca0 */

void __thiscall
FUN_0041cca0(GameWidget *this,int param_1,int param_2,int param_3,int param_4,char param_5,char param_6)

{
  FUN_0041cb70(this,'\x01');
  if (param_5 == '\0') {
    this->pos_x = param_2;
    this->pos_y = param_1;
    this->pos_h = param_3;
    this->pos_w = param_4;
  }
  else {
    this->pos_x = this->pos_x + param_2;
    this->pos_y = this->pos_y + param_1;
    this->pos_h = this->pos_h + param_3;
    this->pos_w = this->pos_w + param_4;
  }
  FUN_0041d490((intptr_t)this);
  FUN_0041d6a0((intptr_t)this);
  FUN_0041cb70(this,'\x01');
  if (param_6 != '\0') {
    ((void (*)(void))this->vtable[0x60 / 4])();
    return;
  }
  ((void (*)(void))this->vtable[0x5c / 4])();
  return;
}



/* Function: FUN_0041cd30 @ 0x0041cd30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cd30(void)

{
  _DAT_00486176 = 0;
  _DAT_00486174 = 0;
  return;
}



/* Function: FUN_0041cd40 @ 0x0041cd40 */

void FUN_0041cd40(void)

{
  _atexit(FUN_0041cd50);
  return;
}



/* Function: FUN_0041cd50 @ 0x0041cd50 */

void FUN_0041cd50(void)

{
  return;
}



/* Function: FUN_0041cd60 @ 0x0041cd60 */

void __thiscall FUN_0041cd60(GameWidget *this,int *param_1)

{
  param_1[1] = this->pos_y;
  param_1[3] = this->pos_h;
  *param_1 = this->pos_x;
  param_1[2] = this->pos_w;
  return;
}



/* Function: FUN_0041cd80 @ 0x0041cd80 */

void __thiscall FUN_0041cd80(GameWidget *this,short *param_1)

{
  int uVar1;
  int uVar2;
  int uVar3;
  
  uVar1 = this->pos_w;
  uVar2 = this->pos_h;
  uVar3 = this->pos_x;
  param_1[1] = (short)((uint)this->pos_y >> 8);
  *param_1 = (short)((uint)uVar3 >> 8);
  param_1[3] = (short)((uint)uVar2 >> 8);
  param_1[2] = (short)((uint)uVar1 >> 8);
  return;
}



/* Function: FUN_0041cdc0 @ 0x0041cdc0 */

void __thiscall FUN_0041cdc0(GameWidget *this,int *param_1)

{
  param_1[1] = this->pos_h - this->pos_y;
  *param_1 = this->pos_w - this->pos_x;
  return;
}



/* Function: FUN_0041cde0 @ 0x0041cde0 */

void __thiscall FUN_0041cde0(GameWidget *this,int *param_1)

{
  param_1[1] = (this->pos_y + this->pos_h) / 2;
  *param_1 = (this->pos_x + this->pos_w) / 2;
  return;
}



/* Function: FUN_0041ce10 @ 0x0041ce10 */

void __thiscall FUN_0041ce10(GameWidget *this,int *param_1,int param_2)

{
  switch(param_2) {
  case 0:
  case 3:
  case 6:
    param_1[1] = (intptr_t)this->rect_left << 8;
    break;
  case 1:
  case 4:
  case 7:
    param_1[1] = ((intptr_t)this->rect_right + (intptr_t)this->rect_left) / 2 << 8;
    break;
  case 2:
  case 5:
  case 8:
    param_1[1] = (intptr_t)this->rect_right << 8;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    *param_1 = (intptr_t)this->rect_top << 8;
    return;
  case 3:
  case 4:
  case 5:
    *param_1 = ((intptr_t)this->rect_bottom + (intptr_t)this->rect_top) / 2 << 8;
    return;
  case 6:
  case 7:
  case 8:
    *param_1 = (intptr_t)this->rect_bottom << 8;
  }
  return;
}



/* Function: FUN_0041cef0 @ 0x0041cef0 */

void __thiscall FUN_0041cef0(void *this,int *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041cfc7;
  *unaff_FS_OFFSET = &local_10;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_1c = 0;
  local_20 = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_0041cdc0(this,&local_20);
  switch(param_2) {
  case 0:
  case 3:
  case 6:
    local_14 = local_14 + local_1c / 2;
    break;
  case 1:
  case 4:
  case 7:
    break;
  case 2:
  case 5:
  case 8:
    local_14 = local_14 - local_1c / 2;
    break;
  default:
    goto switchD_0041cf3e_default;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    local_18 = local_18 + local_20 / 2;
    break;
  case 6:
  case 7:
  case 8:
    local_18 = local_18 - local_20 / 2;
  }
switchD_0041cf3e_default:
  FUN_0041d2d0(this,&local_18,'\0');
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0041cfbf();
  local_8 = 0xffffffff;
  FUN_0041cfd1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041cfbf @ 0x0041cfbf */

void FUN_0041cfbf(void)

{
  return;
}



/* Function: FUN_0041cfd1 @ 0x0041cfd1 */

void FUN_0041cfd1(void)

{
  return;
}



/* Function: FUN_0041d020 @ 0x0041d020 */

void __thiscall FUN_0041d020(void *this,int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041d076;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_14 = param_1;
  local_18 = param_2;
  FUN_0041cef0(this,&local_18,param_3);
  local_8 = 0xffffffff;
  FUN_0041d080();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d080 @ 0x0041d080 */

void FUN_0041d080(void)

{
  return;
}



/* Function: FUN_0041d0a0 @ 0x0041d0a0 */

void __thiscall FUN_0041d0a0(void *this,int *param_1,char param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041d1b1;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_28 = 0;
  local_2c = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  local_1c = this;
  FUN_0041cdc0(this,&local_2c);
  if (param_2 == '\0') {
    FUN_00403030(&local_18,&local_24,param_1);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0041d1a1();
  }
  else {
    FUN_0041cdc0(local_1c,&local_18);
    local_14 = local_14 + param_1[1];
    local_18 = local_18 + *param_1;
  }
  if ((local_28 != local_14) || (local_2c != local_18)) {
    FUN_0041cde0(local_1c,&local_2c);
    local_20 = local_28 - local_14 / 2;
    iVar1 = local_2c - local_18 / 2;
    FUN_0041cca0(local_1c,local_20,iVar1,local_20 + local_14,local_18 + iVar1,'\0','\0');
  }
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0041d1a9();
  local_8 = 0xffffffff;
  FUN_0041d1bb();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d1a1 @ 0x0041d1a1 */

void FUN_0041d1a1(void)

{
  return;
}



/* Function: FUN_0041d1a9 @ 0x0041d1a9 */

void FUN_0041d1a9(void)

{
  return;
}



/* Function: FUN_0041d1bb @ 0x0041d1bb */

void FUN_0041d1bb(void)

{
  return;
}



/* Function: FUN_0041d1d0 @ 0x0041d1d0 */

void __thiscall FUN_0041d1d0(void *this,int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041d2ba;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_8 = 1;
  FUN_0041cdc0(this,&local_20);
  if (param_3 != '\0') {
    FUN_0041cdc0(this,&local_18);
    param_1 = param_1 + local_14;
    param_2 = param_2 + local_18;
  }
  if ((local_1c != param_1) || (local_20 != param_2)) {
    FUN_0041cde0(this,&local_18);
    iVar1 = local_14 - param_1 / 2;
    iVar2 = local_18 - param_2 / 2;
    FUN_0041cca0(this,iVar1,iVar2,iVar1 + param_1,param_2 + iVar2,'\0','\0');
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0041d2b2();
  local_8 = 0xffffffff;
  FUN_0041d2c4();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d2b2 @ 0x0041d2b2 */

void FUN_0041d2b2(void)

{
  return;
}



/* Function: FUN_0041d2c4 @ 0x0041d2c4 */

void FUN_0041d2c4(void)

{
  return;
}



/* Function: FUN_0041d2d0 @ 0x0041d2d0 */

void __thiscall FUN_0041d2d0(void *this,int *param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041d38d;
  *unaff_FS_OFFSET = &local_10;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_8 = 0;
  local_1c = this;
  if (param_2 == '\0') {
    local_20 = 0;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
    local_24 = 0;
    FUN_0041cde0(this,&local_24);
    local_14 = local_14 - local_20;
    local_18 = local_18 - local_24;
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    FUN_0041d385();
  }
  FUN_0041cca0(local_1c,local_14,local_18,local_14,local_18,'\x01','\x01');
  if ((((UIWidget *)local_1c)->child_list_2 != 0) && (*(int *)((int)((UIWidget *)local_1c)->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)
     ) {
    FUN_0041c200(local_1c,local_14,local_18,1);
  }
  local_8 = 0xffffffff;
  FUN_0041d397();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d385 @ 0x0041d385 */

void FUN_0041d385(void)

{
  return;
}



/* Function: FUN_0041d397 @ 0x0041d397 */

void FUN_0041d397(void)

{
  return;
}



/* Function: FUN_0041d3a0 @ 0x0041d3a0 */

void __thiscall FUN_0041d3a0(void *this,int param_1,int param_2,char param_3)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041d3f6;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  local_18 = param_2;
  local_8 = 0;
  FUN_0041d2d0(this,&local_18,param_3);
  local_8 = 0xffffffff;
  FUN_0041d400();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d400 @ 0x0041d400 */

void FUN_0041d400(void)

{
  return;
}



/* Function: FUN_0041d410 @ 0x0041d410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __fastcall FUN_0041d410(int param_1)

{
    /* TODO: 15 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041d490 @ 0x0041d490 */

/* Function cleaned: param_1 is UIElement; updates rect from pos fields */
void __fastcall FUN_0041d490(UIElement *this)

{
  short *psVar1;

  psVar1 = (short *)FUN_0041d410((int)this);
  if (*(char *)&this->pos_y == -0x80) {
    psVar1[1] = psVar1[1] + 1;
  }
  if (*(char *)&this->pos_x == -0x80) {
    *psVar1 = *psVar1 + 1;
  }
  this->rect_left = (short)((uint)this->pos_y >> 8) + psVar1[1];
  this->rect_top = (short)((uint)this->pos_x >> 8) + *psVar1;
  this->rect_right = (short)((uint)this->pos_h >> 8) + psVar1[1];
  this->rect_bottom = (short)((uint)this->pos_w >> 8) + *psVar1;
  return;
}



/* Function: FUN_0041d4f0 @ 0x0041d4f0 */

/* Function cleaned: param_1 is UIElement; updates pos from rect fields */
void __fastcall FUN_0041d4f0(UIElement *this)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;

  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041d57b;
  *unaff_FS_OFFSET = &local_10;
  psVar3 = (short *)FUN_0041d410((int)this);
  sVar1 = psVar3[1];
  sVar2 = *psVar3;
  this->pos_y = ((int)this->rect_left - (int)sVar1) * 0x100;
  this->pos_x = ((int)this->rect_top - (int)sVar2) * 0x100;
  local_8 = 0xffffffff;
  this->pos_h = ((int)this->rect_right - (int)sVar1) * 0x100;
  this->pos_w = ((int)this->rect_bottom - (int)sVar2) * 0x100;
  FUN_0041d585();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041d585 @ 0x0041d585 */

void FUN_0041d585(void)

{
  return;
}



/* Function: FUN_0041d590 @ 0x0041d590 */

short * __thiscall FUN_0041d590(void *this,short *param_1)

{
    /* TODO: 51 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041d65f @ 0x0041d65f */

void FUN_0041d65f(void)

{
  return;
}



/* Function: FUN_0041d667 @ 0x0041d667 */

void FUN_0041d667(void)

{
  return;
}



/* Function: FUN_0041d67e @ 0x0041d67e */

void FUN_0041d67e(void)

{
  return;
}



/* Function: FUN_0041d690 @ 0x0041d690 */

void FUN_0041d690(void)

{
  return;
}



/* Function: FUN_0041d6a0 @ 0x0041d6a0 */

/* Function cleaned: param_1 is UIWidget; accesses offset 0x1a (child_list_1) */
void __fastcall FUN_0041d6a0(UIWidget *this)

{
  void *child;
  int iVar1;
  uint uVar2;

  if (((int)this->child_list_1 != 0) &&
      (iVar1 = *(int *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */, iVar1 != 0) && (uVar2 = 1, iVar1 != 0)) {
    iVar1 = 4;
    do {
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      child = *(void **)(**(int **)((int)this->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -8 + iVar1);
      FUN_0041cb70(child,'\x01');
      FUN_0041d490((UIElement *)child);
      FUN_0041d6a0((UIWidget *)child);
      FUN_0041cb70(child,'\x01');
    } while (uVar2 <= *(uint *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}



/* Function: FUN_0041d710 @ 0x0041d710 */

/* Function cleaned: param_1 accesses UIWidget offset 0x1a (child_list_1) */
void __fastcall FUN_0041d710(UIWidget *param_1)

{
  int iVar1;
  int *_Dst;
  uint uVar2;
  int *puVar3;

  if ((int)param_1->child_list_1 != 0) {
    iVar1 = *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */;
    while (iVar1 != 0) {
      iVar1 = (int)param_1->child_list_1;
      _Dst = (int *)**(int **)(iVar1 + 4);
      uVar2 = *(uint *)(iVar1 + 0xe);
      puVar3 = (int *)*_Dst;
      if (uVar2 != 0) {
        if (1 < uVar2) {
          memmove(_Dst,_Dst + 1,uVar2 * 4 - 4);
        }
        *(int *)(iVar1 + 0xe) = *(int *)(iVar1 + 0xe) + -1;
      }
      ((void (*)(void))((void **)*puVar3)[0])(); /* puVar3->vtable[0] */
      iVar1 = *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */;
    }
  }
  FUN_0041cb70(param_1,'\x01');
  return;
}



/* Function: FUN_0041d780 @ 0x0041d780 */

void __thiscall FUN_0041d780(void *this,void *param_1)

{
    /* TODO: 144 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041da00 @ 0x0041da00 */

void __thiscall FUN_0041da00(DialogWidget *this,void *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = this->field_06;
  if (param_1 != this_00) {
    if (this_00 != (void *)0x0) {
      if ((this->flags >> 4 & 1) != 0) {
        FUN_00431100(this_00,(intptr_t)this);
      }
      if (*(void **)((int)this->field_06 + 0x12) == this) { /* TODO: field_06 treated as UIElement*, +0x12 = flags field */
        FUN_00430ac0(this->field_06,(int *)0x0);
      }
    }
    this->field_06 = param_1;
    if ((param_1 != (void *)0x0) && ((this->flags >> 4 & 1) != 0)) {
      FUN_00431000(param_1,(intptr_t)this);
    }
    if (((this->child_list_1 != 0) &&
        (iVar1 = *(int *)(this->child_list_1 + 0xe), iVar1 != 0)) && (uVar2 = 1, iVar1 != 0)
       ) {
      do {
        uVar3 = (uint)(ushort)((short)uVar2 + 1);
        FUN_0041da00(*(void **)(**(int **)(this->child_list_1 + 4) + -4 + uVar2 * 4),param_1
                    );
        uVar2 = uVar3;
      } while (uVar3 <= *(uint *)(this->child_list_1 + 0xe));
    }
  }
  return;
}



/* Function: FUN_0041da90 @ 0x0041da90 */

void __thiscall FUN_0041da90(DialogWidget *this,byte param_1)

{
  void *this_00;
  
  this->flags =
       ((uint)param_1 << 4 ^ this->flags) & 0x10 ^ this->flags;
  this_00 = this->field_06;
  if (this_00 != (void *)0x0) {
    if (param_1 != 0) {
      FUN_00431000(this_00,(intptr_t)this);
      return;
    }
    FUN_00431100(this_00,(intptr_t)this);
  }
  return;
}



/* Function: FUN_0041dad0 @ 0x0041dad0 */

void __thiscall FUN_0041dad0(DialogWidget *this,byte param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  this->flags =
       ((uint)param_1 << 6 ^ this->flags) & 0x40 ^ this->flags;
  FUN_0041cb70(this,'\x01');
  FUN_0041db50(this,'\x01');
  if ((((param_2 != '\0') && (this->child_list_1 != 0)) &&
      (iVar1 = *(int *)(this->child_list_1 + 0xe), iVar1 != 0)) && (uVar2 = 1, iVar1 != 0))
  {
    do {
      uVar3 = (uint)(ushort)((short)uVar2 + 1);
      FUN_0041dad0(*(void **)(**(int **)(this->child_list_1 + 4) + -4 + uVar2 * 4),param_1,
                   '\x01');
      uVar2 = uVar3;
    } while (uVar3 <= *(uint *)(this->child_list_1 + 0xe));
  }
  return;
}



/* Function: FUN_0041db50 @ 0x0041db50 */

/* Function cleaned: this accesses UIWidget offset 0x1a (child_list_1) */
void __thiscall FUN_0041db50(UIWidget *this,char param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;

  if (((int)this->child_list_1 != 0) &&
      (iVar1 = *(int *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */, iVar1 != 0) && (uVar2 = 1, iVar1 != 0))
  {
    do {
      uVar3 = (uint)(ushort)((short)uVar2 + 1);
      this_00 = *(void **)(**(int **)((int)this->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -4 + uVar2 * 4);
      FUN_0041cb70(this_00,param_1);
      FUN_0041db50(this_00,param_1);
      uVar2 = uVar3;
    } while (uVar3 <= *(uint *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}



/* Function: FUN_0041dbb0 @ 0x0041dbb0 */

void __fastcall FUN_0041dbb0(void *param_1)

{
    /* TODO: 96 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041dd40 @ 0x0041dd40 */

void __fastcall FUN_0041dd40(void *param_1)

{
    /* TODO: 90 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041dec0 @ 0x0041dec0 */

void __thiscall FUN_0041dec0(GameWidget *this,short *param_1)

{
  int *unaff_FS_OFFSET;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0041dfff;
  *unaff_FS_OFFSET = &local_10;
  param_1[1] = this->rect_left;
  param_1[3] = this->rect_right;
  *param_1 = this->rect_top;
  param_1[2] = this->rect_bottom;
  if (this->parent_widget != 0) {
    local_16 = 0;
    local_8 = 0;
    local_18 = 0;
    local_12 = 0;
    local_14 = 0;
    FUN_0041dec0(this->parent_widget,&local_18);
    if (param_1[1] < param_1[3]) {
      if (*param_1 < param_1[2]) {
        if ((local_16 < local_12) && (local_18 < local_14)) {
          if (param_1[1] < local_16) {
            param_1[1] = local_16;
          }
          if (local_12 < param_1[3]) {
            param_1[3] = local_12;
          }
          if (*param_1 < local_18) {
            *param_1 = local_18;
          }
          if (local_14 < param_1[2]) {
            param_1[2] = local_14;
          }
          if ((param_1[3] <= param_1[1]) || (param_1[2] <= *param_1)) {
            param_1[1] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            *param_1 = 0;
          }
        }
        else {
          param_1[1] = local_16;
          *param_1 = local_18;
          param_1[3] = local_12;
          param_1[2] = local_14;
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_0041e009();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0041e009 @ 0x0041e009 */

void FUN_0041e009(void)

{
  return;
}



/* Function: FUN_0041e020 @ 0x0041e020 */

/* Function cleaned: param_1 is UIElement; accesses parent_widget(0x0C), parent's child_list_1(0x1A) */
short __fastcall FUN_0041e020(UIElement *this)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;

  sVar3 = 1;
  if (this->parent_widget != 0) {
    uVar4 = 0;
    iVar1 = (int)((UIElement *)this->parent_widget)->child_list_1;
    uVar2 = *(uint *)(iVar1 + 0xe);
    if (uVar2 != 0) {
      piVar5 = (int *)**(int **)(iVar1 + 4);
      do {
        if (*piVar5 == (int)this) {
          return (short)uVar4 + 1;
        }
        piVar5 = piVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    sVar3 = 0;
  }
  return sVar3;
}



/* Function: FUN_0041e0a0 @ 0x0041e0a0 */

/* Function cleaned: this is UIElement; offset 0x26 = pos_x */
void __thiscall FUN_0041e0a0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_x;
  return;
}



/* Function: FUN_0041e0b0 @ 0x0041e0b0 */

/* Function cleaned: this is UIElement; offset 0x2a = pos_y */
void __thiscall FUN_0041e0b0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_y;
  return;
}



/* Function: FUN_0041e0c0 @ 0x0041e0c0 */

/* Function cleaned: this is UIElement; offset 0x2e = pos_w */
void __thiscall FUN_0041e0c0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_w;
  return;
}



/* Function: FUN_0041e0d0 @ 0x0041e0d0 */

/* Function cleaned: this is UIElement; offset 0x32 = pos_h */
void __thiscall FUN_0041e0d0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_h;
  return;
}



/* Function: FUN_0041e0e0 @ 0x0041e0e0 */

void __fastcall FUN_0041e0e0(int param_1)

{
    /* TODO: 71 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041e240 @ 0x0041e240 */

/* Function cleaned: param_1 is UIElement; offset 0x04 = field_04 */
void __fastcall FUN_0041e240(UIElement *this)

{
  this->field_04 = 1;
  return;
}



/* Function: FUN_0041e250 @ 0x0041e250 */

/* Function cleaned: param_1 is UIElement; offset 0x04 = field_04 */
void __fastcall FUN_0041e250(UIElement *this)

{
  this->field_04 = 0;
  return;
}



/* Function: FUN_0041e260 @ 0x0041e260 */

void __fastcall FUN_0041e260(int *param_1)

{
    /* TODO: 71 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0041e3b0 @ 0x0041e3b0 */

int __thiscall FUN_0041e3b0(void *this,int param_1,char param_2)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0041e4b0 @ 0x0041e4b0 */

void FUN_0041e4b0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486180,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0041e500 @ 0x0041e500 */

void FUN_0041e500(void)

{
  return;
}



/* Function: FUN_0041e560 @ 0x0041e560 */

int * __fastcall FUN_0041e560(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041e5ab;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00473240;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0041e5c0 @ 0x0041e5c0 */

void __thiscall FUN_0041e5c0(MathProblem *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (5 < param_1) {
    param_1 = 5;
  }
  this->difficulty = param_1;
  uVar1 = rand();
  uVar5 = (int)uVar1 >> 0x1f;
  this->game_mode = 4;
  piVar7 = &DAT_00486188;
  piVar4 = (int *)&this->threshold;
  piVar8 = &DAT_0047f260 + param_1 * 0x12;
  do {
    if (DAT_0047f210 == 0) {
      *piVar4 = *piVar7;
      piVar4[1] = piVar7[1];
      piVar4[2] = piVar7[2];
      piVar4[3] = piVar7[3];
      *(short *)(piVar4 + 4) = (short)piVar7[4];
    }
    else {
      *piVar4 = *piVar8;
      piVar4[1] = piVar8[1];
      piVar4[2] = piVar8[2];
      piVar4[3] = piVar8[3];
      *(short *)(piVar4 + 4) = (short)piVar8[4];
      uVar2 = *piVar4 + (((uVar1 ^ uVar5) - uVar5 & 3 ^ uVar5) - uVar5);
      uVar6 = (int)uVar2 >> 0x1f;
      iVar3 = ((uVar2 ^ uVar6) - uVar6 & 3 ^ uVar6) - uVar6;
      *piVar4 = iVar3;
      *piVar7 = iVar3;
      piVar7[1] = piVar4[1];
      piVar7[2] = piVar4[2];
      piVar7[3] = piVar4[3];
      *(short *)(piVar7 + 4) = (short)piVar4[4];
    }
    piVar7 = (int *)((int)piVar7 + 0x12);
    piVar8 = (int *)((int)piVar8 + 0x12);
    piVar4 = (int *)((int)piVar4 + 0x12);
  } while (piVar7 < &DAT_004861d0);
  uVar1 = rand();
  uVar5 = (int)uVar1 >> 0x1f;
  /* TODO: 0x1DE base + stride 0x12 access into _pad1dc region of MathProblem */
  this->slots[2].denom =
       *(int *)((((uVar1 ^ uVar5) - uVar5 & 3 ^ uVar5) - uVar5) * 0x12 + 0x1de + (intptr_t)this);
  this->field_1cc =
       (int)*(short *)(DAT_0048345c + 0x42 + (short)((short)param_1 + 1) * 0xc);
  this->problem_type = (param_1 + 1) * 0x100;
  ((void (*)(void))this->vtable[1])(); /* vtable[1] */
  return;
}



/* Function: FUN_0041e710 @ 0x0041e710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e710(void)

{
  _DAT_004861d6 = 0;
  _DAT_004861d4 = 0;
  return;
}



/* Function: FUN_0041e720 @ 0x0041e720 */

void FUN_0041e720(void)

{
  _atexit(FUN_0041e730);
  return;
}



/* Function: FUN_0041e730 @ 0x0041e730 */

void FUN_0041e730(void)

{
  return;
}



/* Function: FUN_0041e740 @ 0x0041e740 */

int __fastcall FUN_0041e740(void *param_1)

{
    /* TODO: 1965 lines - has decompilation artifacts */
    return 0;
}



