/*
 * game_input.c - Input handling
 * Address range: 0x43B000 - 0x43FFFF
 * Functions: 181
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_0043b020 @ 0x0043b020 */

int * __thiscall FUN_0043b020(void *this,byte param_1)

{
  FUN_0043b040(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043b040 @ 0x0043b040 */

void __fastcall FUN_0043b040(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043b07d;
  *param_1 = &PTR_FUN_00474ab0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0043b087();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043b087 @ 0x0043b087 */

void FUN_0043b087(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0043b090 @ 0x0043b090 */

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
  short *puVar1;

  puVar1 = this->tile_data_ptr;
  if (puVar1 == NULL) {
    return 0;
  }
  return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
}



/* Function: FUN_0043b0d0 @ 0x0043b0d0 */

void __thiscall FUN_0043b0d0(void *this,short param_1)

{
  FUN_00406720(this,param_1);
  return;
}



/* Function: FUN_0043b0e0 @ 0x0043b0e0 */

void __thiscall FUN_0043b0e0(SoundPlayer *this,short param_1)

{
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,param_1);
  return;
}



/* Function: FUN_0043b110 @ 0x0043b110 */

void __thiscall FUN_0043b110(void *this,short param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043b180 @ 0x0043b180 */

void __thiscall FUN_0043b180(void *this,char param_1)

{
  FUN_00406ca0(this,param_1,'\0');
  return;
}



/* Function: FUN_0043b190 @ 0x0043b190 */

void __thiscall FUN_0043b190(GameWidget *this,short param_1)

{
  this->field_118 = param_1;
  return;
}



/* Function: FUN_0043b1a0 @ 0x0043b1a0 */

void __thiscall FUN_0043b1a0(SoundPlayer *this,int *param_1,int *param_2)

{
  int *unaff_FS_OFFSET;
  int iVar1;
  int local_34 [3];
  char *local_28;
  int local_24;
  int local_20;
  short local_1c;
  short local_1a;
  int local_18;
  void *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043b35d;
  *unaff_FS_OFFSET = &local_10;
  local_20 = 0;
  local_24 = 0;
  local_34[1] = 0;
  local_34[0] = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  local_18 = this->sequence_data[42] + -0xc + this->sequence_data[50] * 0xe;
  local_14 = this;
  FUN_0041cde0(this,local_34);
  if (param_2 == (int *)0x0) {
    iVar1 = 6;
    FUN_0041ce10(local_14,&local_24,6);
  }
  else {
    FUN_00403030(&local_24,local_34 + 2,param_2);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    iVar1 = 0x43b218;
    FUN_0043b21a();
  }
  FUN_00401ba0(&ghidra_stack_ffffffc0,*(short *)(local_18 + 10));
  FUN_00402d00(&local_20,iVar1);
  local_28 = &ghidra_stack_ffffffc0;
  FUN_00401ba0(&ghidra_stack_ffffffc0,*(short *)(local_18 + 8));
  FUN_00402d00(&local_24,iVar1);
  FUN_0041cef0(local_14,&local_24,6);
  if (((GameWidget *)local_14)->field_118 != 0) {
    local_1a = 0;
    local_28 = (char *)0x0;
    local_1c = 0;
    local_34[2] = 0;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(4));
    local_18 = 0;
    FUN_0041cdc0(local_14,local_34 + 2);
    local_1a = (short)((uint)(local_20 - (int)local_28) >> 8);
    local_1c = (short)((uint)local_24 >> 8);
    local_18 = CONCAT22((short)((uint)local_20 >> 8),(short)((uint)(local_34[2] + local_24) >> 8));
    FUN_0041b0c0(param_1,&local_1c,(char)((GameWidget *)local_14)->field_118);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(3));
    FUN_0043b345();
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0043b34d();
  }
  FUN_004091a0(local_14,param_1);
  FUN_0041d2d0(local_14,local_34,'\0');
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0043b355();
  local_8 = 0xffffffff;
  FUN_0043b367();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043b21a @ 0x0043b21a */

void FUN_0043b21a(void)

{
  return;
}



/* Function: FUN_0043b345 @ 0x0043b345 */

void FUN_0043b345(void)

{
  return;
}



/* Function: FUN_0043b34d @ 0x0043b34d */

void FUN_0043b34d(void)

{
  return;
}



/* Function: FUN_0043b355 @ 0x0043b355 */

void FUN_0043b355(void)

{
  return;
}



/* Function: FUN_0043b367 @ 0x0043b367 */

void FUN_0043b367(void)

{
  return;
}



/* Function: FUN_0043b380 @ 0x0043b380 */

void FUN_0043b380(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488da0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043b3d0 @ 0x0043b3d0 */

void FUN_0043b3d0(void)

{
  return;
}



/* Function: FUN_0043b3f0 @ 0x0043b3f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b3f0(void)

{
  _DAT_00488dae = 0;
  _DAT_00488dac = 0;
  return;
}



/* Function: FUN_0043b400 @ 0x0043b400 */

void FUN_0043b400(void)

{
  _atexit(FUN_0043b410);
  return;
}



/* Function: FUN_0043b410 @ 0x0043b410 */

void FUN_0043b410(void)

{
  return;
}



/* Function: FUN_0043b430 @ 0x0043b430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b430(void)

{
  _DAT_00488daa = 0;
  _DAT_00488da8 = 0;
  return;
}



/* Function: FUN_0043b440 @ 0x0043b440 */

void FUN_0043b440(void)

{
  _atexit(FUN_0043b450);
  return;
}



/* Function: FUN_0043b450 @ 0x0043b450 */

void FUN_0043b450(void)

{
  return;
}



/* Function: FUN_0043b460 @ 0x0043b460 */

int FUN_0043b460(int param_1,int param_2)

{
    /* TODO: 191 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0043b680 @ 0x0043b680 */

void FUN_0043b680(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488db0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043b6d0 @ 0x0043b6d0 */

void FUN_0043b6d0(void)

{
  return;
}



/* Function: FUN_0043b6f0 @ 0x0043b6f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b6f0(void)

{
  _DAT_00488dbe = 0;
  _DAT_00488dbc = 0;
  return;
}



/* Function: FUN_0043b700 @ 0x0043b700 */

void FUN_0043b700(void)

{
  _atexit(FUN_0043b710);
  return;
}



/* Function: FUN_0043b710 @ 0x0043b710 */

void FUN_0043b710(void)

{
  return;
}



/* Function: FUN_0043b730 @ 0x0043b730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b730(void)

{
  _DAT_00488dba = 0;
  _DAT_00488db8 = 0;
  return;
}



/* Function: FUN_0043b740 @ 0x0043b740 */

void FUN_0043b740(void)

{
  _atexit(FUN_0043b750);
  return;
}



/* Function: FUN_0043b750 @ 0x0043b750 */

void FUN_0043b750(void)

{
  return;
}



/* Function: FUN_0043b760 @ 0x0043b760 */

int * __fastcall FUN_0043b760(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  UIWidget *widget = (UIWidget *)param_1;

  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043b7cb;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417c70(param_1);
  *(short *)&widget->flags = 0;
  *param_1 = &PTR_LAB_00474b50;
  *(short *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(short *)&widget->flags = 0;
  *(short *)(param_1 + 4) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0043b7f0 @ 0x0043b7f0 */

int * __thiscall FUN_0043b7f0(void *this,byte param_1)

{
  FUN_0043b810(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043b810 @ 0x0043b810 */

void __fastcall FUN_0043b810(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043b86d;
  *param_1 = &PTR_LAB_00474b50;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_0043b910((int)param_1);
  local_8 = local_8 & 0xffffff00;
  FUN_0043b862();
  local_8 = 0xffffffff;
  FUN_0043b877();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043b862 @ 0x0043b862 */

void FUN_0043b862(void)

{
  return;
}



/* Function: FUN_0043b877 @ 0x0043b877 */

void FUN_0043b877(void)

{
  int unaff_EBP;
  
  FUN_00417cc0(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0043b880 @ 0x0043b880 */

char __thiscall FUN_0043b880(void *this,short param_1,short param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0043b910 @ 0x0043b910 */

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



/* Function: FUN_0043b940 @ 0x0043b940 */

short __fastcall FUN_0043b940(int param_1)

{
  return *(short *)(param_1 + 0x12);
}



/* Function: FUN_0043b970 @ 0x0043b970 */

short __fastcall FUN_0043b970(int param_1)

{
  return *(short *)(param_1 + 0x10);
}



/* Function: FUN_0043b9c0 @ 0x0043b9c0 */

void FUN_0043b9c0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488dc0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043ba10 @ 0x0043ba10 */

void FUN_0043ba10(void)

{
  return;
}



/* Function: FUN_0043ba30 @ 0x0043ba30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ba30(void)

{
  _DAT_00488dce = 0;
  _DAT_00488dcc = 0;
  return;
}



/* Function: FUN_0043ba40 @ 0x0043ba40 */

void FUN_0043ba40(void)

{
  _atexit(FUN_0043ba50);
  return;
}



/* Function: FUN_0043ba50 @ 0x0043ba50 */

void FUN_0043ba50(void)

{
  return;
}



/* Function: FUN_0043ba70 @ 0x0043ba70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ba70(void)

{
  _DAT_00488dca = 0;
  _DAT_00488dc8 = 0;
  return;
}



/* Function: FUN_0043ba80 @ 0x0043ba80 */

void FUN_0043ba80(void)

{
  _atexit(FUN_0043ba90);
  return;
}



/* Function: FUN_0043ba90 @ 0x0043ba90 */

void FUN_0043ba90(void)

{
  return;
}



/* Function: FUN_0043bab0 @ 0x0043bab0 */

void FUN_0043bab0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488dd0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043baf0 @ 0x0043baf0 */

void FUN_0043baf0(void)

{
  _atexit(FUN_0043bb00);
  return;
}



/* Function: FUN_0043bb00 @ 0x0043bb00 */

void FUN_0043bb00(void)

{
  return;
}



/* Function: FUN_0043bb20 @ 0x0043bb20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bb20(void)

{
  _DAT_00488dde = 0;
  _DAT_00488ddc = 0;
  return;
}



/* Function: FUN_0043bb30 @ 0x0043bb30 */

void FUN_0043bb30(void)

{
  _atexit(FUN_0043bb40);
  return;
}



/* Function: FUN_0043bb40 @ 0x0043bb40 */

void FUN_0043bb40(void)

{
  return;
}



/* Function: FUN_0043bb60 @ 0x0043bb60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bb60(void)

{
  _DAT_00488dda = 0;
  _DAT_00488dd8 = 0;
  return;
}



/* Function: FUN_0043bb70 @ 0x0043bb70 */

void FUN_0043bb70(void)

{
  _atexit(FUN_0043bb80);
  return;
}



/* Function: FUN_0043bb80 @ 0x0043bb80 */

void FUN_0043bb80(void)

{
  return;
}



/* Function: FUN_0043bba0 @ 0x0043bba0 */

void FUN_0043bba0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488de0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043bbe0 @ 0x0043bbe0 */

void FUN_0043bbe0(void)

{
  _atexit(FUN_0043bbf0);
  return;
}



/* Function: FUN_0043bbf0 @ 0x0043bbf0 */

void FUN_0043bbf0(void)

{
  return;
}



/* Function: FUN_0043bc10 @ 0x0043bc10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bc10(void)

{
  _DAT_00488dee = 0;
  _DAT_00488dec = 0;
  return;
}



/* Function: FUN_0043bc20 @ 0x0043bc20 */

void FUN_0043bc20(void)

{
  _atexit(FUN_0043bc30);
  return;
}



/* Function: FUN_0043bc30 @ 0x0043bc30 */

void FUN_0043bc30(void)

{
  return;
}



/* Function: FUN_0043bc50 @ 0x0043bc50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bc50(void)

{
  _DAT_00488dea = 0;
  _DAT_00488de8 = 0;
  return;
}



/* Function: FUN_0043bc60 @ 0x0043bc60 */

void FUN_0043bc60(void)

{
  _atexit(FUN_0043bc70);
  return;
}



/* Function: FUN_0043bc70 @ 0x0043bc70 */

void FUN_0043bc70(void)

{
  return;
}



/* Function: FUN_0043bc90 @ 0x0043bc90 */

void FUN_0043bc90(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488df0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043bcd0 @ 0x0043bcd0 */

void FUN_0043bcd0(void)

{
  _atexit(FUN_0043bce0);
  return;
}



/* Function: FUN_0043bce0 @ 0x0043bce0 */

void FUN_0043bce0(void)

{
  return;
}



/* Function: FUN_0043bd00 @ 0x0043bd00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bd00(void)

{
  _DAT_00488dfe = 0;
  _DAT_00488dfc = 0;
  return;
}



/* Function: FUN_0043bd10 @ 0x0043bd10 */

void FUN_0043bd10(void)

{
  _atexit(FUN_0043bd20);
  return;
}



/* Function: FUN_0043bd20 @ 0x0043bd20 */

void FUN_0043bd20(void)

{
  return;
}



/* Function: FUN_0043bd40 @ 0x0043bd40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bd40(void)

{
  _DAT_00488dfa = 0;
  _DAT_00488df8 = 0;
  return;
}



/* Function: FUN_0043bd50 @ 0x0043bd50 */

void FUN_0043bd50(void)

{
  _atexit(FUN_0043bd60);
  return;
}



/* Function: FUN_0043bd60 @ 0x0043bd60 */

void FUN_0043bd60(void)

{
  return;
}



/* Function: FUN_0043bd80 @ 0x0043bd80 */

void FUN_0043bd80(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488e10,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043bdc0 @ 0x0043bdc0 */

void FUN_0043bdc0(void)

{
  _atexit(FUN_0043bdd0);
  return;
}



/* Function: FUN_0043bdd0 @ 0x0043bdd0 */

void FUN_0043bdd0(void)

{
  return;
}



/* Function: FUN_0043bdf0 @ 0x0043bdf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bdf0(void)

{
  _DAT_00488e32 = 0;
  _DAT_00488e30 = 0;
  return;
}



/* Function: FUN_0043be00 @ 0x0043be00 */

void FUN_0043be00(void)

{
  _atexit(FUN_0043be10);
  return;
}



/* Function: FUN_0043be10 @ 0x0043be10 */

void FUN_0043be10(void)

{
  return;
}



/* Function: FUN_0043be30 @ 0x0043be30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043be30(void)

{
  _DAT_00488e2e = 0;
  _DAT_00488e2c = 0;
  return;
}



/* Function: FUN_0043be40 @ 0x0043be40 */

void FUN_0043be40(void)

{
  _atexit(FUN_0043be50);
  return;
}



/* Function: FUN_0043be50 @ 0x0043be50 */

void FUN_0043be50(void)

{
  return;
}



/* Function: FUN_0043c360 @ 0x0043c360 */

int * __fastcall FUN_0043c360(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043c3f6;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  *(int *)((int)param_1 + 0x1da) = 0; /* TODO: unknown offset 0x1DA on extended widget */
  *(int *)((int)param_1 + 0x1de) = 0; /* TODO: unknown offset 0x1DE on extended widget */
  *(int *)((int)param_1 + 0x1e2) = 0; /* TODO: unknown offset 0x1E2 on extended widget */
  *(int *)((int)param_1 + 0x1e6) = 0; /* TODO: unknown offset 0x1E6 on extended widget */
  *param_1 = &PTR_FUN_00474d00;
  DAT_00480558 = 1;
  DAT_00488e0c = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0043c410 @ 0x0043c410 */

int * __thiscall FUN_0043c410(void *this,byte param_1)

{
  FUN_0043c430(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043c430 @ 0x0043c430 */

void __fastcall FUN_0043c430(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043c4a6;
  *param_1 = &PTR_FUN_00474d00;
  *unaff_FS_OFFSET = &local_10;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_0043c48a();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0043c498();
  local_8 = 0xffffffff;
  FUN_0043c4b0();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043c48a @ 0x0043c48a */

void FUN_0043c48a(void)

{
  return;
}



/* Function: FUN_0043c498 @ 0x0043c498 */

void FUN_0043c498(void)

{
  return;
}



/* Function: FUN_0043c4b0 @ 0x0043c4b0 */

void FUN_0043c4b0(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0043c4c0 @ 0x0043c4c0 */

void FUN_0043c4c0(int param_1,short param_2)

{
    /* TODO: 21 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043c510 @ 0x0043c510 */

void FUN_0043c510(int param_1,short param_2)

{
    /* TODO: 21 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043c560 @ 0x0043c560 */

void FUN_0043c560(UIWidget *param_1)

{
  uint uVar1;
  int iVar2;

  FUN_0041ba40(param_1,0,1,0);
  param_1->field_109 = 0;
  if (((param_1->child_list_2 != NULL) &&
      (iVar2 = *(int *)((int)param_1->child_list_2 + 0xe), iVar2 != 0)) &&
     (uVar1 = 1, iVar2 != 0)) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0043c560(*(UIWidget **)(**(int **)((int)param_1->child_list_2 + 4) + -8 + iVar2));
    } while (uVar1 <= *(uint *)((int)param_1->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0043c5d0 @ 0x0043c5d0 */

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



/* Function: FUN_0043c660 @ 0x0043c660 */

/* WARNING: Removing unreachable block (ram,0x0043c6fe) */

void __fastcall FUN_0043c660(int param_1)

{
  ushort uVar1;
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
  uVar1 = (short)DAT_00488e04 >> 0xf;
  if (((DAT_00488e04 ^ uVar1) - uVar1 & 1 ^ uVar1) == uVar1) {
    *(short *)(param_1 + 0x1ca) = 1;
    FUN_0042db60(DAT_00488e34,*(ushort **)(param_1 + 0x1a4),-1,-1);
    DVar2 = GetTickCount();
    *(short *)(param_1 + 0x1ca) = 0;
    *(DWORD *)(param_1 + 0x176) = DVar2;
  }
  return;
}



/* Function: FUN_0043c760 @ 0x0043c760 */

void __fastcall FUN_0043c760(int param_1)

{
  int *piVar1;
  int *puVar2;
  int uVar3;
  
  for (piVar1 = DAT_00480550; puVar2 = DAT_0048055c, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]
      ) {
    FUN_00451c40(*(void **)(param_1 + 0x1bc),0,(int)(short)piVar1[2]);
  }
  for (; piVar1 = DAT_00480550, puVar2 != (int *)0x0; puVar2 = (int *)puVar2[1]) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      uVar3 = FUN_0041ba00((void *)*puVar2,*piVar1);
      if ((char)uVar3 == '\x01') {
        FUN_00451c00(*(void **)(param_1 + 0x1bc),(int)*(short *)(puVar2 + 2),(int)(short)piVar1[2]);
      }
    }
  }
  return;
}



/* Function: FUN_0043c7f0 @ 0x0043c7f0 */

void FUN_0043c7f0(void)

{
  UIWidget *pvVar1;
  int *piVar2;

  *(short *)(*(int *)(DAT_004897c0 + 0x44) + 0x112) = 1; /* pending_frame */
  pvVar1 = *(UIWidget **)(DAT_004897c0 + 0x44);
  pvVar1->anim_flag_0 = 0;
  pvVar1->anim_flag_2 = 0;
  pvVar1->anim_flag_1 = 0;
  pvVar1->anim_flag_3 = 0;
  FUN_00405d30(pvVar1,1);
  for (piVar2 = DAT_00480550; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    *(short *)(*piVar2 + 0x112) = 1; /* pending_frame */
    pvVar1 = (UIWidget *)*piVar2;
    pvVar1->anim_flag_0 = 0;
    pvVar1->anim_flag_2 = 0;
    pvVar1->anim_flag_1 = 0;
    pvVar1->anim_flag_3 = 0;
    FUN_00405d30(pvVar1,1);
    FUN_0043c560(pvVar1);
  }
  return;
}



/* Function: FUN_0043c890 @ 0x0043c890 */

void __fastcall FUN_0043c890(int param_1)

{
  short sVar1;
  UIWidget *pvVar2;
  int *piVar3;
  int *piVar4;

  *(short *)(*(int *)(DAT_004897c0 + 0x44) + 0x112) = 0; /* pending_frame */
  pvVar2 = *(UIWidget **)(DAT_004897c0 + 0x44);
  pvVar2->anim_flag_0 = 0;
  pvVar2->anim_flag_2 = 0;
  pvVar2->anim_flag_1 = 0;
  pvVar2->anim_flag_3 = 0;
  FUN_00405d30(pvVar2,0);
  for (piVar3 = DAT_00480550; piVar4 = DAT_0048055c, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]
      ) {
    *(short *)(*piVar3 + 0x112) = 0; /* pending_frame */
    pvVar2 = (UIWidget *)*piVar3;
    pvVar2->anim_flag_0 = 0;
    pvVar2->anim_flag_2 = 0;
    pvVar2->anim_flag_1 = 0;
    pvVar2->anim_flag_3 = 0;
    FUN_00405d30(pvVar2,0);
  }
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    *(short *)(*piVar4 + 0x112) = *(short *)(*(int *)(param_1 + 0x1bc) + 0x22c); /* pending_frame */
    pvVar2 = (UIWidget *)*piVar4;
    sVar1 = *(short *)(*(int *)(param_1 + 0x1bc) + 0x22c);
    pvVar2->anim_flag_0 = 0;
    pvVar2->anim_flag_2 = 0;
    pvVar2->anim_flag_1 = 0;
    pvVar2->anim_flag_3 = 0;
    FUN_00405d30(pvVar2,sVar1);
  }
  return;
}



/* Function: FUN_0043c970 @ 0x0043c970 */

void FUN_0043c970(void *param_1)

{
  int iVar1;
  int **ppiVar2;
  int *unaff_FS_OFFSET;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043cb76;
  *unaff_FS_OFFSET = &local_10;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_0041ce10(param_1,&local_28,4);
  FUN_0041ce10(local_1c,&local_30,4);
  /* TODO: offsets 0x1DA-0x1E6 on local_1c are beyond known struct bounds */
  if ((((*(int *)((int)local_1c + 0x1e6) == 0) && (*(int *)((int)local_1c + 0x1e2) == 0)) &&
      (*(int *)((int)local_1c + 0x1de) == 0)) &&
     (local_14 = (int *)((int)local_1c + 0x1da), *local_14 == 0)) {
    FUN_00403030((int *)((int)local_1c + 0x1e2),&local_38,&local_28);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0043ca42();
    FUN_00403030(local_14,&local_18,&local_30);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0043ca3a();
  }
  iVar1 = *(int *)((int)local_1c + 0x1e6);
  if (iVar1 < local_24) {
    local_14 = (int *)(local_24 - iVar1);
    local_34 = local_14;
    if ((int)local_14 < 1) {
      local_14 = (int *)-(int)local_14;
      ppiVar2 = &local_14;
    }
    else {
      ppiVar2 = &local_34;
    }
    local_2c = *(int *)((int)local_1c + 0x1de) + (int)*ppiVar2;
  }
  else {
    local_14 = (int *)(local_24 - iVar1);
    local_34 = local_14;
    ppiVar2 = &local_34;
    if ((int)local_14 < 1) {
      local_14 = (int *)-(int)local_14;
      ppiVar2 = &local_14;
    }
    local_2c = *(int *)((int)local_1c + 0x1de) - (int)*ppiVar2;
  }
  local_34 = (int *)((int)local_1c + 0x1e2);
  iVar1 = *(int *)((int)local_1c + 0x1e2);
  if (iVar1 < local_28) {
    local_14 = (int *)(local_28 - iVar1);
    local_3c = local_14;
    ppiVar2 = &local_3c;
    if ((int)local_14 < 1) {
      local_14 = (int *)-(int)local_14;
      ppiVar2 = &local_14;
    }
    local_14 = *ppiVar2;
    local_30 = *(int *)((int)local_1c + 0x1da) + (int)local_14;
  }
  else {
    local_14 = (int *)(local_28 - iVar1);
    local_3c = local_14;
    ppiVar2 = &local_3c;
    if ((int)local_14 < 1) {
      local_14 = (int *)-(int)local_14;
      ppiVar2 = &local_14;
    }
    local_14 = *ppiVar2;
    local_30 = *(int *)((int)local_1c + 0x1da) - (int)local_14;
  }
  FUN_00403030((void *)((int)local_1c + 0x1da),&local_20,&local_30);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_0043cb66();
  FUN_00403030(local_34,&local_20,&local_28);
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_0043cb5e();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_0043cb6e();
  local_8 = 0xffffffff;
  FUN_0043cb80();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043ca3a @ 0x0043ca3a */

void FUN_0043ca3a(void)

{
  return;
}



/* Function: FUN_0043ca42 @ 0x0043ca42 */

void FUN_0043ca42(void)

{
  return;
}



/* Function: FUN_0043cb5e @ 0x0043cb5e */

void FUN_0043cb5e(void)

{
  return;
}



/* Function: FUN_0043cb66 @ 0x0043cb66 */

void FUN_0043cb66(void)

{
  return;
}



/* Function: FUN_0043cb6e @ 0x0043cb6e */

void FUN_0043cb6e(void)

{
  return;
}



/* Function: FUN_0043cb80 @ 0x0043cb80 */

void FUN_0043cb80(void)

{
  return;
}



/* Function: FUN_0043cb90 @ 0x0043cb90 */

void FUN_0043cb90(void *param_1,UIWidget *param_2)

{
  uint uVar1;
  int iVar2;

  if (param_2 != param_1) {
    FUN_0043c970(param_1);
  }
  if (((param_2->child_list_2 != NULL) &&
      (iVar2 = *(int *)((int)param_2->child_list_2 + 0xe), iVar2 != 0)) &&
     (uVar1 = 1, iVar2 != 0)) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0043cb90(param_1,*(UIWidget **)(**(int **)((int)param_2->child_list_2 + 4) + -8 + iVar2));
    } while (uVar1 <= *(uint *)((int)param_2->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0043cc00 @ 0x0043cc00 */

void FUN_0043cc00(void)

{
    /* TODO: 249 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043d1e4 @ 0x0043d1e4 */

void FUN_0043d1e4(void)

{
  return;
}



/* Function: FUN_0043d1ec @ 0x0043d1ec */

void FUN_0043d1ec(void)

{
  return;
}



/* Function: FUN_0043d1f4 @ 0x0043d1f4 */

void FUN_0043d1f4(void)

{
  return;
}



/* Function: FUN_0043d20e @ 0x0043d20e */

void FUN_0043d20e(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -100));
  return;
}



/* Function: FUN_0043d220 @ 0x0043d220 */

int __fastcall FUN_0043d220(int *param_1)

{
  return *param_1 >> 8;
}



/* Function: FUN_0043d230 @ 0x0043d230 */

int __fastcall FUN_0043d230(int *param_1)

{
  return *param_1 >> 8;
}



/* Function: FUN_0043d240 @ 0x0043d240 */

void __cdecl FUN_0043d240(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 - param_3;
  return;
}



/* Function: FUN_0043d250 @ 0x0043d250 */

void __fastcall FUN_0043d250(int param_1)

{
  UIWidget *pvVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;

  for (piVar3 = DAT_00480550; piVar5 = DAT_0048055c, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]
      ) {
    bVar4 = false;
    if (*(short *)(param_1 + 0x1cc) == 0) {
      for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
        if (((((*(uint *)(*piVar5 + 0x12) >> 6 & 1) != 0) &&
             (iVar2 = *(int *)(*piVar5 + 0x36), iVar2 != 0)) &&
            (iVar7 = *(int *)(iVar2 + 0xe), iVar7 != 0)) && (iVar7 != 0)) {
          piVar6 = (int *)**(int **)(iVar2 + 4);
          do {
            if (*piVar6 == *piVar3) {
              bVar4 = true;
            }
            piVar6 = piVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      if (bVar4) {
        *(short *)(*piVar3 + 0x112) = 4; /* pending_frame */
        pvVar1 = (UIWidget *)*piVar3;
        pvVar1->anim_flag_0 = 0;
        pvVar1->anim_flag_2 = 0;
        pvVar1->anim_flag_1 = 0;
        pvVar1->anim_flag_3 = 0;
        FUN_00405d30(pvVar1,4);
      }
      else {
        *(short *)(*piVar3 + 0x112) = 0; /* pending_frame */
      }
    }
    else {
      *(short *)(*piVar3 + 0x112) = 1; /* pending_frame */
      pvVar1 = (UIWidget *)*piVar3;
      pvVar1->anim_flag_0 = 0;
      pvVar1->anim_flag_2 = 0;
      pvVar1->anim_flag_1 = 0;
      pvVar1->anim_flag_3 = 0;
      FUN_00405d30(pvVar1,1);
    }
  }
  for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    pvVar1 = (UIWidget *)*piVar5;
    if ((pvVar1->flags >> 6 & 1) != 0) {
      FUN_0043cb90(pvVar1,pvVar1);
    }
  }
  return;
}



/* Function: FUN_0043d9ca @ 0x0043d9ca */

void FUN_0043d9ca(void)

{
  return;
}



/* Function: FUN_0043d9d2 @ 0x0043d9d2 */

void FUN_0043d9d2(void)

{
  return;
}



/* Function: FUN_0043d9e4 @ 0x0043d9e4 */

void FUN_0043d9e4(void)

{
  return;
}



/* Function: FUN_0043dc28 @ 0x0043dc28 */

void FUN_0043dc28(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x14) + 0x1d0),0x16,4,FUN_0040f520)
  ;
  return;
}



/* Function: FUN_0043dc4a @ 0x0043dc4a */

void FUN_0043dc4a(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_0043dc60 @ 0x0043dc60 */

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



/* Function: FUN_0043e4d8 @ 0x0043e4d8 */

void FUN_0043e4d8(void)

{
  return;
}



/* Function: FUN_0043e4e0 @ 0x0043e4e0 */

void FUN_0043e4e0(void)

{
  return;
}



/* Function: FUN_0043e4f2 @ 0x0043e4f2 */

void FUN_0043e4f2(void)

{
  return;
}



/* Function: FUN_0043e500 @ 0x0043e500 */

void __fastcall FUN_0043e500(void *param_1)

{
  /* TODO: offsets 0x1BC-0x1CC suggest extended widget beyond DialogWidget */
  if (*(short *)((int)param_1 + 0x1cc) == 0) {
    *(short *)((int)param_1 + 0x1ca) = 1;
    FUN_0042dba0(param_1,*(int *)((int)param_1 + 0x1bc) + 0x32);
    *(short *)((int)param_1 + 0x1ca) = 0;
  }
  return;
}



/* Function: FUN_0043e530 @ 0x0043e530 */

void FUN_0043e530(void)

{
  if (DAT_004805fc != 0) {
    FUN_00434490(DAT_004805fc);
    DAT_004805fc = 0;
    FUN_0043a700(DAT_004838c0,DAT_00488e18,DAT_00488e00);
  }
  return;
}



/* Function: FUN_0043e580 @ 0x0043e580 */

void FUN_0043e580(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488e50,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0043e5d0 @ 0x0043e5d0 */

void FUN_0043e5d0(void)

{
  return;
}



/* Function: FUN_0043e5f0 @ 0x0043e5f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e5f0(void)

{
  _DAT_00488e6e = 0;
  _DAT_00488e6c = 0;
  return;
}



/* Function: FUN_0043e600 @ 0x0043e600 */

void FUN_0043e600(void)

{
  _atexit(FUN_0043e610);
  return;
}



/* Function: FUN_0043e610 @ 0x0043e610 */

void FUN_0043e610(void)

{
  return;
}



/* Function: FUN_0043e630 @ 0x0043e630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e630(void)

{
  _DAT_00488e6a = 0;
  _DAT_00488e68 = 0;
  return;
}



/* Function: FUN_0043e640 @ 0x0043e640 */

void FUN_0043e640(void)

{
  _atexit(FUN_0043e650);
  return;
}



/* Function: FUN_0043e650 @ 0x0043e650 */

void FUN_0043e650(void)

{
  return;
}



/* Function: FUN_0043e900 @ 0x0043e900 */

int * __fastcall FUN_0043e900(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043e94b;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00474ef0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0043e960 @ 0x0043e960 */

int * __thiscall FUN_0043e960(void *this,byte param_1)

{
  FUN_0043e980(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043e980 @ 0x0043e980 */

void __fastcall FUN_0043e980(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043e9bd;
  *param_1 = &PTR_FUN_00474ef0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0043e9c7();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043e9c7 @ 0x0043e9c7 */

void FUN_0043e9c7(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0043e9d0 @ 0x0043e9d0 */

void __fastcall FUN_0043e9d0(void *param_1)

{
    /* TODO: 156 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043ed53 @ 0x0043ed53 */

void FUN_0043ed53(void)

{
  return;
}



/* Function: FUN_0043ed5b @ 0x0043ed5b */

void FUN_0043ed5b(void)

{
  return;
}



/* Function: FUN_0043ed63 @ 0x0043ed63 */

void FUN_0043ed63(void)

{
  return;
}



/* Function: FUN_0043ed6b @ 0x0043ed6b */

void FUN_0043ed6b(void)

{
  return;
}



/* Function: FUN_0043ed7d @ 0x0043ed7d */

void FUN_0043ed7d(void)

{
  return;
}



/* Function: FUN_0043ed90 @ 0x0043ed90 */

int * __fastcall FUN_0043ed90(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043edee;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00474f98;
  *unaff_FS_OFFSET = local_10;
  DAT_00488e64 = param_1;
  *(short *)&((GameWidget *)param_1)->pair_x_1 = 1; /* offset 0x11A - writes low 2 bytes of pair_x_1 */
  param_1[0x47] = 0;
  return param_1;
}



/* Function: FUN_0043ee00 @ 0x0043ee00 */

int * __thiscall FUN_0043ee00(void *this,byte param_1)

{
  FUN_0043ee20(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043ee20 @ 0x0043ee20 */

void __fastcall FUN_0043ee20(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043ee72;
  *param_1 = &PTR_FUN_00474f98;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[0x47] != 0) {
    FUN_0043ef30((int)param_1);
  }
  local_8 = 0xffffffff;
  FUN_0043ee7c();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043ee7c @ 0x0043ee7c */

void FUN_0043ee7c(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0043ee90 @ 0x0043ee90 */

int __thiscall
FUN_0043ee90(void *this,int param_1,short param_2,short param_3)

{
    /* TODO: 26 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0043ef10 @ 0x0043ef10 */

void __fastcall FUN_0043ef10(DialogWidget *param_1)

{
  int *puVar1;

  for (puVar1 = (int *)param_1->child_list; puVar1 != (int *)0x0;
      puVar1 = *(int **)((int)puVar1 + 10)) {  /* linked list next pointer at node+10 */
    FUN_0041dd40((void *)*puVar1);
  }
  return;
}



/* Function: FUN_0043ef30 @ 0x0043ef30 */

void __fastcall FUN_0043ef30(int param_1)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043ef90 @ 0x0043ef90 */

void FUN_0043ef90(void)

{
    /* TODO: 105 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043f219 @ 0x0043f219 */

void FUN_0043f219(void)

{
  return;
}



/* Function: FUN_0043f221 @ 0x0043f221 */

void FUN_0043f221(void)

{
  return;
}



/* Function: FUN_0043f229 @ 0x0043f229 */

void FUN_0043f229(void)

{
  return;
}



/* Function: FUN_0043f231 @ 0x0043f231 */

void FUN_0043f231(void)

{
  return;
}



/* Function: FUN_0043f243 @ 0x0043f243 */

void FUN_0043f243(void)

{
  return;
}



/* Function: FUN_0043f536 @ 0x0043f536 */

void FUN_0043f536(void)

{
  return;
}



/* Function: FUN_0043f53e @ 0x0043f53e */

void FUN_0043f53e(void)

{
  return;
}



/* Function: FUN_0043f546 @ 0x0043f546 */

void FUN_0043f546(void)

{
  return;
}



/* Function: FUN_0043f54e @ 0x0043f54e */

void FUN_0043f54e(void)

{
  return;
}



/* Function: FUN_0043f556 @ 0x0043f556 */

void FUN_0043f556(void)

{
  return;
}



/* Function: FUN_0043f55e @ 0x0043f55e */

void FUN_0043f55e(void)

{
  return;
}



/* Function: FUN_0043f566 @ 0x0043f566 */

void FUN_0043f566(void)

{
  return;
}



/* Function: FUN_0043f56e @ 0x0043f56e */

void FUN_0043f56e(void)

{
  return;
}



/* Function: FUN_0043f590 @ 0x0043f590 */

int * __fastcall FUN_0043f590(int *param_1)

{
    /* TODO: 50 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0043f740 @ 0x0043f740 */

int * __thiscall FUN_0043f740(void *this,byte param_1)

{
  FUN_0043f760(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043f760 @ 0x0043f760 */

void __fastcall FUN_0043f760(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043f79d;
  *param_1 = &PTR_FUN_00475040;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0043f7a7();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043f7a7 @ 0x0043f7a7 */

void FUN_0043f7a7(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0043f7b0 @ 0x0043f7b0 */

void FUN_0043f7b0(void *param_1)

{
    /* TODO: 71 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043f8a3 @ 0x0043f8a3 */

void FUN_0043f8a3(void)

{
  return;
}



/* Function: FUN_0043f8b5 @ 0x0043f8b5 */

void FUN_0043f8b5(void)

{
  return;
}



/* Function: FUN_0043f8c0 @ 0x0043f8c0 */

void FUN_0043f8c0(UIWidget *param_1)

{
  uint uVar1;
  int iVar2;

  param_1->field_109 = 0;
  if (((param_1->child_list_2 != NULL) &&
      (iVar2 = *(int *)((int)param_1->child_list_2 + 0xe), iVar2 != 0)) && (uVar1 = 1, iVar2 != 0)) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 + 1;
      FUN_0043f8c0(*(UIWidget **)(**(int **)((int)param_1->child_list_2 + 4) + -8 + iVar2));
    } while (uVar1 <= *(uint *)((int)param_1->child_list_2 + 0xe));
  }
  return;
}



/* Function: FUN_0043f920 @ 0x0043f920 */

void __thiscall FUN_0043f920(void *this,int param_1,int param_2)

{
    /* TODO: 128 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043fcd1 @ 0x0043fcd1 */

void FUN_0043fcd1(void)

{
  return;
}



/* Function: FUN_0043fcf0 @ 0x0043fcf0 */

void FUN_0043fcf0(void)

{
  return;
}



/* Function: FUN_0043fd00 @ 0x0043fd00 */

void __thiscall FUN_0043fd00(void *this,int param_1,int param_2)

{
    /* TODO: 69 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043ff59 @ 0x0043ff59 */

void FUN_0043ff59(void)

{
  return;
}



/* Function: FUN_0043ff70 @ 0x0043ff70 */

void __fastcall FUN_0043ff70(void *param_1)

{
    /* TODO: 170 lines - has decompilation artifacts */
    return;
}



