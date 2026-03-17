/*
 * game_render.c - Rendering and display
 * Address range: 0x420000 - 0x42FFFF
 * Functions: 465
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_00422e70 @ 0x00422e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422e70(void)

{
  _DAT_004861d2 = 0;
  _DAT_004861d0 = 0;
  return;
}



/* Function: FUN_00422e80 @ 0x00422e80 */

void FUN_00422e80(void)

{
  _atexit(FUN_00422e90);
  return;
}



/* Function: FUN_00422e90 @ 0x00422e90 */

void FUN_00422e90(void)

{
  return;
}



/* Function: FUN_00422eb0 @ 0x00422eb0 */

undefined4 FUN_00422eb0(void)

{
  return 4;
}



/* Function: FUN_00422ec0 @ 0x00422ec0 */

undefined4 __thiscall FUN_00422ec0(void *this,int param_1)

{
  return CONCAT31((unsigned int)((uint)(param_1 * 0x12) >> 8),
                  (&DAT_00480848)[(uint)*(byte *)(param_1 * 0x12 + 0x1d4 + (intptr_t)this) * 4]);
}



/* Function: FUN_00422ee0 @ 0x00422ee0 */

int __thiscall FUN_00422ee0(void *this,int param_1)

{
  return param_1 * 0x12 + 0x1d0 + (intptr_t)this;
}



/* Function: FUN_00422f00 @ 0x00422f00 */

bool __thiscall FUN_00422f00(GameBoard *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (this->board_mode == 1) {
    iVar2 = this->event_type;
    if (iVar2 < 0x202) {
      if ((iVar2 != 0x201) && (iVar2 != 0x101)) {
        return bVar1;
      }
      return this->match_note == param_2;
    }
    if (iVar2 < 0x403) {
      if (iVar2 < 0x401) {
        if (iVar2 < 0x301) {
          return false;
        }
        if (0x302 < iVar2) {
          return bVar1;
        }
      }
      goto switchD_00422f66_caseD_501;
    }
    if (iVar2 < 0x603) {
      if (iVar2 < 0x601) {
        switch(iVar2) {
        case 0x501:
        case 0x502:
          break;
        case 0x503:
        case 0x504:
          goto switchD_00422f66_caseD_503;
        default:
          goto switchD_00422f66_default;
        }
      }
switchD_00422f66_caseD_501:
      if ((this->match_note == param_2) && (this->match_player == param_1)) {
        return true;
      }
      return false;
    }
    if (iVar2 < 0x603) {
      return false;
    }
    if (0x604 < iVar2) {
      return bVar1;
    }
switchD_00422f66_caseD_503:
    iVar2 = param_2 - this->transpose_offset;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x2d0;
    }
    if ((this->match_note == iVar2) && (this->match_player == param_1)) {
      return true;
    }
  }
switchD_00422f66_default:
  return false;
}



/* Function: FUN_00423000 @ 0x00423000 */

bool __thiscall FUN_00423000(void *this,int param_1)

{
    /* TODO: 175 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00423520 @ 0x00423520 */

byte __thiscall FUN_00423520(void *this,int param_1)

{
    /* TODO: 122 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00423890 @ 0x00423890 */

void __fastcall FUN_00423890(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = 1;
  piVar3 = (int *)(param_1 + 0x1ec);
  do {
    if (*(int *)(iVar1 * 0x12 + 0x1da + param_1) < *piVar3) {
      iVar1 = iVar2;
    }
    piVar3 = (int *)((int)piVar3 + 0x12);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



/* Function: FUN_004238d0 @ 0x004238d0 */

void __fastcall FUN_004238d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = 1;
  piVar3 = (int *)(param_1 + 0x1ec);
  do {
    if (*piVar3 < *(int *)(iVar1 * 0x12 + 0x1da + param_1)) {
      iVar1 = iVar2;
    }
    piVar3 = (int *)((int)piVar3 + 0x12);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



/* Function: FUN_00423910 @ 0x00423910 */

void __fastcall FUN_00423910(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = 1;
  piVar3 = (int *)(param_1 + 0x1e8);
  do {
    if (*(int *)(iVar1 * 0x12 + 0x1d6 + param_1) < *piVar3) {
      iVar1 = iVar2;
    }
    piVar3 = (int *)((int)piVar3 + 0x12);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



/* Function: FUN_00423950 @ 0x00423950 */

void __fastcall FUN_00423950(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1e8);
  iVar3 = 1;
  do {
    if (*piVar2 < *(int *)(iVar1 * 0x12 + 0x1d6 + param_1)) {
      iVar1 = iVar3;
    }
    piVar2 = (int *)((int)piVar2 + 0x12);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



/* Function: FUN_00423990 @ 0x00423990 */

int __thiscall FUN_00423990(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 1;
  if (*(uint *)(param_1 + 0xe) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + *(int *)(*(int *)(**(int **)(param_1 + 4) + -4 + iVar1) * 0x12 + 0x1d6 +
                              (intptr_t)this);
    } while (uVar3 <= *(uint *)(param_1 + 0xe));
  }
  return iVar2;
}



/* Function: FUN_004239d0 @ 0x004239d0 */

int __thiscall FUN_004239d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 1;
  if (*(uint *)(param_1 + 0xe) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + *(int *)(*(int *)(**(int **)(param_1 + 4) + -4 + iVar1) * 0x12 + 0x1da +
                              (intptr_t)this);
    } while (uVar3 <= *(uint *)(param_1 + 0xe));
  }
  return iVar2;
}



/* Function: FUN_00423a10 @ 0x00423a10 */

void __thiscall FUN_00423a10(void *this,int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = true;
  uVar1 = *(uint *)(param_1 + 0xe);
  if (uVar1 != 0) {
    if (param_2 == 0xffffffff) {
      param_2 = (uint)*(byte *)(*(int *)**(undefined4 **)(param_1 + 4) * 0x12 + 0x1d4 + (intptr_t)this);
    }
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if ((!bVar2) ||
           (bVar2 = true,
           *(byte *)(*(int *)(**(int **)(param_1 + 4) + -4 + uVar3 * 4) * 0x12 + 0x1d4 + (intptr_t)this)
           != param_2)) {
          bVar2 = false;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar1);
    }
  }
  return;
}



/* Function: FUN_00423a80 @ 0x00423a80 */

void __thiscall FUN_00423a80(void *this,int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = true;
  uVar1 = *(uint *)(param_1 + 0xe);
  if (uVar1 != 0) {
    if (param_2 == -1) {
      param_2 = *(int *)(*(int *)**(undefined4 **)(param_1 + 4) * 0x12 + 0x1d0 + (intptr_t)this);
    }
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if ((!bVar2) ||
           (bVar2 = true,
           *(int *)(*(int *)(**(int **)(param_1 + 4) + -4 + uVar3 * 4) * 0x12 + 0x1d0 + (intptr_t)this)
           != param_2)) {
          bVar2 = false;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar1);
    }
  }
  return;
}



/* Function: FUN_00423ae0 @ 0x00423ae0 */

void FUN_00423ae0(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = true;
  uVar1 = *(uint *)(param_1 + 0xe);
  if (uVar1 != 0) {
    if (param_2 == -1) {
      param_2 = *(int *)**(undefined4 **)(param_1 + 4);
    }
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if ((!bVar2) ||
           (bVar2 = true, *(int *)(**(int **)(param_1 + 4) + -4 + uVar3 * 4) != param_2)) {
          bVar2 = false;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar1);
    }
  }
  return;
}



/* Function: FUN_00423b30 @ 0x00423b30 */

uint __thiscall FUN_00423b30(void *this,int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 1;
  while( true ) {
    if (*(uint *)(param_1 + 0xe) < uVar1) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = *(int *)(**(int **)(param_1 + 4) + -4 + uVar1 * 4) * 0x12;
    if (*(int *)(in_EAX + 0x1d0 + (intptr_t)this) == param_2) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31(in_EAX >> 8,1);
}



/* Function: FUN_00423b80 @ 0x00423b80 */

undefined4 __thiscall FUN_00423b80(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  for (iVar4 = 0; (iVar4 == param_2 || (iVar4 == param_3)); iVar4 = iVar4 + 1) {
  }
  for (; (iVar5 == param_2 || ((iVar5 == param_3 || (iVar5 == iVar4)))); iVar5 = iVar5 + 1) {
  }
  uVar2 = FUN_00423b30(this,param_1,param_2);
  cVar1 = '\x01' - ((char)uVar2 == '\0');
  uVar2 = CONCAT31(uVar2 >> 8,cVar1);
  if (cVar1 == '\0') {
LAB_00423bdc:
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar3 = FUN_00423b30(this,param_1,param_3);
    uVar2 = CONCAT31(uVar3 >> 8,1);
    if ((char)uVar3 == '\0') goto LAB_00423bdc;
  }
  if ((char)uVar2 != '\0') {
    uVar3 = FUN_00423b30(this,param_1,iVar4);
    uVar2 = CONCAT31(uVar3 >> 8,1);
    if ((char)uVar3 == '\0') goto LAB_00423bf5;
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00423bf5:
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00423b30(this,param_1,iVar5);
    if ((char)uVar2 == '\0') {
      return CONCAT31(uVar2 >> 8,1);
    }
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_00423c30 @ 0x00423c30 */

void FUN_00423c30(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004861d8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00423c80 @ 0x00423c80 */

void FUN_00423c80(void)

{
  return;
}



/* Function: FUN_00423ca0 @ 0x00423ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423ca0(void)

{
  _DAT_004861e6 = 0;
  _DAT_004861e4 = 0;
  return;
}



/* Function: FUN_00423cb0 @ 0x00423cb0 */

void FUN_00423cb0(void)

{
  _atexit(FUN_00423cc0);
  return;
}



/* Function: FUN_00423cc0 @ 0x00423cc0 */

void FUN_00423cc0(void)

{
  return;
}



/* Function: FUN_00423ce0 @ 0x00423ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423ce0(void)

{
  _DAT_004861e2 = 0;
  _DAT_004861e0 = 0;
  return;
}



/* Function: FUN_00423cf0 @ 0x00423cf0 */

void FUN_00423cf0(void)

{
  _atexit(FUN_00423d00);
  return;
}



/* Function: FUN_00423d00 @ 0x00423d00 */

void FUN_00423d00(void)

{
  return;
}



/* Function: FUN_00423d80 @ 0x00423d80 */

undefined4 * __fastcall FUN_00423d80(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00423e07;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  local_8 = 0;
  FUN_0040ab70((undefined4 *)((int)param_1 + 0x1a6));
  *(undefined2 *)(param_1 + 0x68) = 1;
  *param_1 = &PTR_FUN_00473288;
  param_1[0x67] = 0;
  *(undefined4 *)((int)param_1 + 0x1a2) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00423e20 @ 0x00423e20 */

undefined4 * __thiscall FUN_00423e20(void *this,byte param_1)

{
  FUN_00423e40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00423e40 @ 0x00423e40 */

void __fastcall FUN_00423e40(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00423e98;
  *param_1 = &PTR_FUN_00473288;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00423e8a();
  local_8 = 0xffffffff;
  FUN_00423ea2();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00423e8a @ 0x00423e8a */

void FUN_00423e8a(void)

{
  int unaff_EBP;
  
  FUN_0040ac40((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1a6));
  return;
}



/* Function: FUN_00423ea2 @ 0x00423ea2 */

void FUN_00423ea2(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00423eb0 @ 0x00423eb0 */

void __fastcall FUN_00423eb0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  
  FUN_0041d780(*(void **)(DAT_004897c0 + 0x4a),param_1);
  FUN_0041dd40(*(void **)(DAT_004897c0 + 0x4a));
  *(undefined4 *)(*(int *)(DAT_004897c0 + 0x4a) + 0x16) = 3;
  (**(void (**)(void))(*param_1 + 0xdc))();
  if (*(void **)(DAT_004897c0 + 0x44) != (void *)0x0) {
    iVar2 = 0x423f05;
    FUN_0041d780(*(void **)(DAT_004897c0 + 0x44),*(void **)(DAT_004897c0 + 0x4a));
    cVar3 = '\0';
    uVar1 = 0xffffff9c;
    FUN_00401050(&ghidra_stack_ffffffe8,-100);
    FUN_00401050(&ghidra_stack_ffffffe4,-100);
    FUN_0041d3a0(*(void **)(DAT_004897c0 + 0x44),uVar1,iVar2,cVar3);
    FUN_0041dd40(*(void **)(DAT_004897c0 + 0x44));
    FUN_0041c2a0(*(void **)(DAT_004897c0 + 0x44),0);
  }
  FUN_0041dd40((void *)param_1[0x66]);
  FUN_00404870(param_1,0x2e000c);
  return;
}



/* Function: FUN_00423f80 @ 0x00423f80 */

void __fastcall FUN_00423f80(void *param_1)

{
  int local_8;
  int local_4;
  
  FUN_004048d0(param_1);
  switch(*(undefined2 *)(*(int *)((int)param_1 + 0x6a) + 0xc)) {
  case 1:
    local_8 = 0x762000d;
    local_4 = 0x4d0011;
    *(undefined1 *)(DAT_0048345c + 0xf2) = 1;
    break;
  case 2:
    local_8 = 0x79e000d;
    local_4 = 0x220011;
    *(undefined1 *)(DAT_0048345c + 0xf3) = 1;
    break;
  case 3:
    local_8 = 0x763000d;
    local_4 = 0x230011;
    *(undefined1 *)(DAT_0048345c + 0xf4) = 1;
    break;
  case 4:
    local_8 = 0x764000d;
    local_4 = 0x250011;
    *(undefined1 *)(DAT_0048345c + 0xf5) = 1;
  }
  switch(*(undefined2 *)(DAT_0048345c + 0x9c)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(short *)(DAT_0048345c + 0x92) = *(short *)(DAT_0048345c + 0x92) + 0xfa;
  }
  FUN_0045f100(local_8,'\x01');
  FUN_0040b1e0((void *)((int)param_1 + 0x1a6),local_4);
  *(undefined2 *)((int)param_1 + 0x1a0) = 2;
  return;
}



/* Function: FUN_004240b0 @ 0x004240b0 */

void __fastcall FUN_004240b0(int *param_1)

{
    /* TODO: 59 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004243e9 @ 0x004243e9 */

void FUN_004243e9(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00424400 @ 0x00424400 */

undefined4 * __fastcall FUN_00424400(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00424476;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417c70(param_1);
  *param_1 = &PTR_LAB_00473418;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 0x114) = 0;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0x452) = 0;
  param_1[0x111] = 0;
  param_1[6] = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00424490 @ 0x00424490 */

undefined4 * __thiscall FUN_00424490(void *this,byte param_1)

{
  FUN_004244b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004244b0 @ 0x004244b0 */

void __fastcall FUN_004244b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004244f9;
  *param_1 = &PTR_LAB_00473418;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_004246b0((int)param_1);
  local_8 = 0xffffffff;
  FUN_00424503();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00424503 @ 0x00424503 */

void FUN_00424503(void)

{
  int unaff_EBP;
  
  FUN_00417cc0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_004246b0 @ 0x004246b0 */

void __fastcall FUN_004246b0(int param_1)

{
  HGDIOBJ ho;
  
  ho = SelectObject(*(HDC *)(param_1 + 0x14),*(HGDIOBJ *)(param_1 + 0x10));
  DeleteObject(ho);
  DeleteDC(*(HDC *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined2 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x452) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  return;
}



/* Function: FUN_004247a0 @ 0x004247a0 */

undefined4 __fastcall FUN_004247a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Function: FUN_004247b0 @ 0x004247b0 */

void __thiscall FUN_004247b0(void *this,HDC param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  SelectPalette(param_1,DAT_004838bc,0);
  RealizePalette(param_1);
  sVar1 = *param_2;
  sVar2 = param_2[1];
  WinGBitBlt(param_1,(int)sVar2,(int)sVar1,(int)(short)(param_2[3] - sVar2),
             (int)(short)(param_2[2] - sVar1),*(undefined4 *)((intptr_t)this + 0x14),(int)sVar2,
             (int)sVar1);
  GdiFlush();
  return;
}



/* Function: FUN_00424820 @ 0x00424820 */

void __fastcall FUN_00424820(int param_1)

{
    /* TODO: 22 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004248b0 @ 0x004248b0 */

void FUN_004248b0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004861e8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00424900 @ 0x00424900 */

void FUN_00424900(void)

{
  return;
}



/* Function: FUN_00424920 @ 0x00424920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424920(void)

{
  _DAT_004861f6 = 0;
  _DAT_004861f4 = 0;
  return;
}



/* Function: FUN_00424930 @ 0x00424930 */

void FUN_00424930(void)

{
  _atexit(FUN_00424940);
  return;
}



/* Function: FUN_00424940 @ 0x00424940 */

void FUN_00424940(void)

{
  return;
}



/* Function: FUN_00424960 @ 0x00424960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424960(void)

{
  _DAT_004861f2 = 0;
  _DAT_004861f0 = 0;
  return;
}



/* Function: FUN_00424970 @ 0x00424970 */

void FUN_00424970(void)

{
  _atexit(FUN_00424980);
  return;
}



/* Function: FUN_00424980 @ 0x00424980 */

void FUN_00424980(void)

{
  return;
}



/* Function: FUN_004249a0 @ 0x004249a0 */

void FUN_004249a0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004861f8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_004249e0 @ 0x004249e0 */

void FUN_004249e0(void)

{
  _atexit(FUN_004249f0);
  return;
}



/* Function: FUN_004249f0 @ 0x004249f0 */

void FUN_004249f0(void)

{
  return;
}



/* Function: FUN_00424a10 @ 0x00424a10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424a10(void)

{
  _DAT_00486206 = 0;
  _DAT_00486204 = 0;
  return;
}



/* Function: FUN_00424a20 @ 0x00424a20 */

void FUN_00424a20(void)

{
  _atexit(FUN_00424a30);
  return;
}



/* Function: FUN_00424a30 @ 0x00424a30 */

void FUN_00424a30(void)

{
  return;
}



/* Function: FUN_00424a50 @ 0x00424a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424a50(void)

{
  _DAT_00486202 = 0;
  _DAT_00486200 = 0;
  return;
}



/* Function: FUN_00424a60 @ 0x00424a60 */

void FUN_00424a60(void)

{
  _atexit(FUN_00424a70);
  return;
}



/* Function: FUN_00424a70 @ 0x00424a70 */

void FUN_00424a70(void)

{
  return;
}



/* Function: FUN_00424a90 @ 0x00424a90 */

void FUN_00424a90(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486208,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00424ad0 @ 0x00424ad0 */

void FUN_00424ad0(void)

{
  _atexit(FUN_00424ae0);
  return;
}



/* Function: FUN_00424ae0 @ 0x00424ae0 */

void FUN_00424ae0(void)

{
  return;
}



/* Function: FUN_00424ba0 @ 0x00424ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424ba0(void)

{
  _DAT_00486216 = 0;
  _DAT_00486214 = 0;
  return;
}



/* Function: FUN_00424bb0 @ 0x00424bb0 */

void FUN_00424bb0(void)

{
  _atexit(FUN_00424bc0);
  return;
}



/* Function: FUN_00424bc0 @ 0x00424bc0 */

void FUN_00424bc0(void)

{
  return;
}



/* Function: FUN_00424d80 @ 0x00424d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424d80(void)

{
  _DAT_00486212 = 0;
  _DAT_00486210 = 0;
  return;
}



/* Function: FUN_00424d90 @ 0x00424d90 */

void FUN_00424d90(void)

{
  _atexit(FUN_00424da0);
  return;
}



/* Function: FUN_00424da0 @ 0x00424da0 */

void FUN_00424da0(void)

{
  return;
}



/* Function: FUN_00424e40 @ 0x00424e40 */

undefined4 * __fastcall FUN_00424e40(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00424e96;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044bc50(param_1);
  *(undefined2 *)(param_1 + 0x95) = 0;
  *param_1 = &PTR_LAB_004735e0;
  param_1[0x92] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00424eb0 @ 0x00424eb0 */

void __fastcall FUN_00424eb0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00424f22;
  *param_1 = &PTR_LAB_004735e0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  uVar1 = param_1[0x92];
  if (uVar1 != 0) {
    for (uVar2 = *(uint *)(uVar1 + 4); uVar2 != 0; uVar2 = *(uint *)(uVar2 + 4)) {
      FUN_0046c410(uVar1);
      uVar1 = uVar2;
    }
    FUN_0046c410(uVar1);
  }
  local_8 = 0xffffffff;
  FUN_00424f2c();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00424f2c @ 0x00424f2c */

void FUN_00424f2c(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_00424f40 @ 0x00424f40 */

undefined4 __thiscall FUN_00424f40(void *this,short param_1,short param_2)

{
    /* TODO: 36 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00425200 @ 0x00425200 */

int __fastcall FUN_00425200(void *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  int *piVar8;
  char cVar9;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  sVar7 = *(short *)((int)param_1 + 0x254);
  *(undefined4 *)((int)param_1 + 0x1c8) = 0;
  if (0 < sVar7) {
    *(undefined2 *)((int)param_1 + 0x254) = 0xffff;
    *(int *)((int)param_1 + 0x2a) = (int)sVar7;
  }
  if (*(short *)((int)param_1 + 0x254) == 0) {
    *(short *)((int)param_1 + 0x254) = (short)*(undefined4 *)((int)param_1 + 0x2a);
  }
  switch(*(undefined4 *)((int)param_1 + 0x2a)) {
  case 0x11:
  case 0x21:
  case 0x31:
  case 0x42:
  case 0x52:
  case 0x62:
    local_18 = (uint)(*(short *)((int)param_1 + 0x254) == -1);
    FUN_00424f40(param_1,(short)*(undefined4 *)((int)param_1 + local_18 * 0xe + 0x1de),
                 (short)*(undefined4 *)((int)param_1 + local_18 * 0xe + 0x1e2));
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_00480888 +
                          (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                 '\x01');
    FUN_0044bf50((int *)&DAT_004734c4,'\x01');
    *(undefined4 *)((int)param_1 + 0x24c) = *(undefined4 *)((int)param_1 + local_18 * 0xe + 0x1de);
    *(undefined4 *)((int)param_1 + 0x250) = *(undefined4 *)((int)param_1 + local_18 * 0xe + 0x1e2);
    break;
  case 0x12:
  case 0x13:
  case 0x3c:
  case 0x4d:
    sVar7 = 1000;
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),&local_14,
                   &local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    if (*(int *)((int)param_1 + 0x2a) == 0x4d) {
      bVar1 = 1;
      piVar8 = (int *)&DAT_00473508;
    }
    else {
      bVar1 = (byte)*(int *)((int)param_1 + 0x2a) & 1;
      piVar8 = (int *)&DAT_004734cc;
    }
    FUN_0044bf50(piVar8,bVar1);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x32:
  case 0x33:
  case 0x38:
  case 0x39:
  case 0x3d:
  case 0x43:
  case 0x44:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    sVar7 = 1000;
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),&local_14,
                   &local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
    FUN_0044c990(param_1,local_c,0,'\x01');
    iVar2 = *(int *)((int)param_1 + 0x2a);
    if (iVar2 == 0x43) {
      bVar1 = 1;
      piVar8 = (int *)&DAT_004734e0;
    }
    else if (iVar2 == 0x44) {
      bVar1 = 0;
      piVar8 = (int *)&DAT_004734e4;
    }
    else if (iVar2 == 0x49) {
      bVar1 = 1;
      piVar8 = (int *)&DAT_004734f8;
    }
    else if (iVar2 == 0x4a) {
      bVar1 = 0;
      piVar8 = (int *)&DAT_004734fc;
    }
    else if (iVar2 == 0x4b) {
      bVar1 = 1;
      piVar8 = (int *)&DAT_00473500;
    }
    else if (iVar2 == 0x4c) {
      bVar1 = 0;
      piVar8 = (int *)&DAT_00473504;
    }
    else {
      bVar1 = (byte)iVar2 & 1;
      piVar8 = (int *)&DAT_004734d0;
    }
    FUN_0044bf50(piVar8,bVar1);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x22:
  case 0x23:
  case 0x3e:
  case 0x4e:
    sVar7 = 1000;
    iVar2 = rand();
    local_18 = iVar2 % *(int *)((int)param_1 + 0x1d4);
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + local_18 * 0xe + 0x1de),
                   *(int *)((int)param_1 + local_18 * 0xe + 0x1e2),&local_14,&local_10,
                   (int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    if (*(int *)((int)param_1 + 0x2a) != 0x4e) {
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_00480888 +
                            (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                 '\x01');
    if (*(int *)((int)param_1 + 0x2a) == 0x4e) {
      bVar1 = 0;
      piVar8 = (int *)&DAT_0047350c;
    }
    else {
      bVar1 = (byte)*(int *)((int)param_1 + 0x2a) & 1;
      piVar8 = (int *)&DAT_004734d4;
    }
    FUN_0044bf50(piVar8,bVar1);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    sVar7 = 1000;
    iVar2 = rand();
    local_18 = iVar2 % *(int *)((int)param_1 + 0x1d4);
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + local_18 * 0xe + 0x1de),
                   *(int *)((int)param_1 + local_18 * 0xe + 0x1e2),&local_14,&local_10,
                   (int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_00480888 +
                          (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                 '\x01');
    bVar1 = (byte)*(undefined4 *)((int)param_1 + 0x2a) & 1;
    piVar8 = (int *)&DAT_004734d8;
    goto LAB_004260b1;
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x3b:
  case 0x45:
  case 0x46:
    sVar7 = 1000;
    iVar2 = rand();
    local_18 = iVar2 % *(int *)((int)param_1 + 0x1d4);
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + local_18 * 0xe + 0x1de),
                   *(int *)((int)param_1 + local_18 * 0xe + 0x1e2),&local_14,&local_10,
                   (int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    if (*(int *)((int)param_1 + 0x2a) == 0x45) {
      FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
      FUN_0044c990(param_1,local_c,0,'\x01');
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                   '\x01');
      bVar1 = (byte)*(undefined4 *)((int)param_1 + 0x2a) & 1;
      piVar8 = (int *)&DAT_004734e8;
    }
    else if (*(int *)((int)param_1 + 0x2a) == 0x46) {
      FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
      FUN_0044c990(param_1,local_c,0,'\x01');
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                   '\x01');
      bVar1 = (byte)*(undefined4 *)((int)param_1 + 0x2a) & 1;
      piVar8 = (int *)&DAT_004734ec;
    }
    else {
      FUN_0044c990(param_1,local_c,0,'\x01');
      FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_00480888 +
                            (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                   '\x01');
      bVar1 = (byte)*(undefined4 *)((int)param_1 + 0x2a) & 1;
      piVar8 = (int *)&DAT_004734d8;
    }
    FUN_0044bf50(piVar8,bVar1);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x36:
  case 0x37:
  case 0x47:
  case 0x48:
    sVar7 = 1000;
    FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),
                 (int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
    FUN_0044c990(param_1,local_c,0,'\x01');
    if (*(int *)((int)param_1 + 0x2a) < 0x40) {
      uVar3 = *(undefined4 *)(&DAT_0047f85c + local_18 * 4);
    }
    else {
      uVar3 = *(undefined4 *)(&DAT_0047f884 + local_18 * 4);
    }
    FUN_0044c7e0(param_1,uVar3,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_4 * -4),0,'\x01');
    if (*(int *)((int)param_1 + 0x2a) == 0x47) {
      cVar9 = '\x01';
      piVar8 = (int *)&DAT_004734f0;
    }
    else if (*(int *)((int)param_1 + 0x2a) == 0x48) {
      cVar9 = '\0';
      piVar8 = (int *)&DAT_004734f4;
    }
    else {
      cVar9 = '\0';
      piVar8 = (int *)&DAT_004734dc;
    }
    FUN_0044bf50(piVar8,cVar9);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x41:
  case 0x51:
  case 0x61:
    sVar7 = 1000;
    FUN_00426350(param_1,5,5,(int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_14 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_10 * -4),0,'\x01');
    bVar1 = 0;
    piVar8 = (int *)&DAT_004734c8;
    goto LAB_004260b1;
  case 0x4f:
    sVar7 = 1000;
    FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),
                 (int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_4 * -4),0,'\x01');
    bVar1 = 0;
    piVar8 = (int *)&DAT_00473510;
    goto LAB_004260b1;
  case 0x53:
  case 0x54:
  case 99:
  case 100:
    sVar7 = 1000;
    iVar2 = rand();
    local_18 = iVar2 % *(int *)((int)param_1 + 0x1d4);
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + local_18 * 0xe + 0x1de),
                   *(int *)((int)param_1 + local_18 * 0xe + 0x1e2),&local_14,&local_10,
                   (int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
    FUN_0044c990(param_1,local_c * 10,0,'\x01');
    if ((*(int *)((int)param_1 + 0x2a) == 99) || (*(int *)((int)param_1 + 0x2a) == 100)) {
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_00480888 +
                            (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                 '\x01');
    if ((*(int *)((int)param_1 + 0x2a) == 0x53) || (*(int *)((int)param_1 + 0x2a) == 0x54)) {
      piVar8 = (int *)&DAT_00473514;
    }
    else {
      piVar8 = (int *)&DAT_00473528;
    }
    FUN_0044bf50(piVar8,'\0');
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x55:
  case 0x56:
  case 0x65:
  case 0x66:
    sVar7 = 1000;
    FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),
                 (int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f800 + local_8 * 4),0,'\x01');
    FUN_0044c990(param_1,local_c * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_4 * -4),0,'\x01');
    bVar1 = 0;
    piVar8 = (int *)&DAT_0047352c;
    goto LAB_004260b1;
  case 0x57:
  case 0x67:
    sVar7 = 0;
    FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),
                 (int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      do {
        sVar7 = sVar7 + 1;
        FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      } while ((local_c & 1) != 0);
      uVar3 = FUN_00424f40(param_1,(short)((int)(local_14 + local_18) / 2),
                           (short)((local_10 + local_4) / 2));
    } while (((short)uVar3 == 0) && (sVar7 < 1000));
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_4 * -4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_14 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_10 * -4),0,'\x01');
    FUN_0044bf50((int *)&DAT_00473518,'\0');
    *(int *)((int)param_1 + 0x24c) = (int)(local_14 + local_18) / 2;
    *(int *)((int)param_1 + 0x250) = (local_10 + local_4) / 2;
    break;
  case 0x58:
  case 0x68:
    sVar7 = 1000;
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),&local_14,
                   &local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    bVar1 = 0;
    piVar8 = (int *)&DAT_0047351c;
    goto LAB_004260b1;
  case 0x59:
  case 0x69:
    sVar7 = 1000;
    iVar2 = rand();
    local_18 = iVar2 % *(int *)((int)param_1 + 0x1d4);
    do {
      FUN_00426350(param_1,*(int *)((int)param_1 + local_18 * 0xe + 0x1de),
                   *(int *)((int)param_1 + local_18 * 0xe + 0x1e2),&local_14,&local_10,
                   (int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    if (*(int *)((int)param_1 + 0x2a) == 0x69) {
      FUN_0044c7e0(param_1,*(undefined4 *)
                            (&DAT_00480888 +
                            (uint)*(byte *)((int)param_1 + local_18 * 0xe + 0x1d8) * 4),0,'\x01');
    }
    FUN_0044c7e0(param_1,*(undefined4 *)
                          (&DAT_0047f830 + *(int *)((int)param_1 + local_18 * 0xe + 0x1da) * 4),0,
                 '\x01');
    if (*(int *)((int)param_1 + 0x2a) == 0x69) {
      piVar8 = (int *)&DAT_00473530;
    }
    else {
      piVar8 = (int *)&DAT_00473520;
    }
    FUN_0044bf50(piVar8,'\0');
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
    break;
  case 0x5a:
  case 0x6a:
    sVar7 = 1000;
    FUN_00426350(param_1,*(int *)((int)param_1 + 0x24c),*(int *)((int)param_1 + 0x250),
                 (int *)&local_18,&local_4,(int *)&local_c,&local_8);
    do {
      FUN_00426350(param_1,local_18,local_4,&local_14,&local_10,(int *)&local_c,&local_8);
      uVar3 = FUN_00424f40(param_1,(short)local_14,(short)local_10);
      if ((short)uVar3 != 0) break;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    FUN_0044c990(param_1,local_c * 10,0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f7f0 + local_8 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f884 + local_18 * 4),0,'\x01');
    FUN_0044c7e0(param_1,*(undefined4 *)(&DAT_0047f8c8 + local_4 * -4),0,'\x01');
    bVar1 = 0;
    piVar8 = (int *)&DAT_00473524;
LAB_004260b1:
    FUN_0044bf50(piVar8,bVar1);
    *(int *)((int)param_1 + 0x24c) = local_14;
    *(int *)((int)param_1 + 0x250) = local_10;
  }
  sVar7 = 1000;
  do {
    iVar6 = *(int *)((int)param_1 + 0x26) * 4;
    iVar2 = *(int *)(&DAT_0047f8ec + iVar6);
    iVar4 = rand();
    iVar2 = (*(uint *)((int)param_1 + 0x2a) & 0xf0) +
            iVar4 % (*(int *)(&DAT_0047f8d4 + iVar6) - iVar2) + 1 + iVar2;
    uVar5 = FUN_0044d950(param_1,iVar2,6,*(int *)((int)param_1 + 0x26));
    if ((char)uVar5 == '\0') break;
    sVar7 = sVar7 + -1;
  } while (sVar7 != 0);
  *(int *)((int)param_1 + 0x2a) = iVar2;
  *(int *)((int)param_1 + 0x2e) = *(int *)((int)param_1 + 0x2e) + -1;
  return (int)param_1 + 4;
}



/* Function: FUN_00426230 @ 0x00426230 */

undefined4 __fastcall FUN_00426230(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}



/* Function: FUN_00426240 @ 0x00426240 */

undefined4 __thiscall FUN_00426240(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((intptr_t)this + 0x1d4))) {
    return *(undefined4 *)(&DAT_0047f810 + *(int *)((intptr_t)this + param_1 * 0xe + 0x1da) * 4);
  }
  return 0xffffffff;
}



/* Function: FUN_00426280 @ 0x00426280 */

undefined1 __thiscall FUN_00426280(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((intptr_t)this + 0x1d4))) {
    return (&DAT_00480848)[(uint)*(byte *)((intptr_t)this + param_1 * 0xe + 0x1d8) * 4];
  }
  return 0xff;
}



/* Function: FUN_004262c0 @ 0x004262c0 */

undefined4 __thiscall FUN_004262c0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((intptr_t)this + 0x1d4))) {
    return *(undefined4 *)((intptr_t)this + param_1 * 0xe + 0x1de);
  }
  return 0xffffffff;
}



/* Function: FUN_004262f0 @ 0x004262f0 */

undefined4 __thiscall FUN_004262f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((intptr_t)this + 0x1d4))) {
    return *(undefined4 *)((intptr_t)this + param_1 * 0xe + 0x1e2);
  }
  return 0xffffffff;
}



/* Function: FUN_00426320 @ 0x00426320 */

void __thiscall FUN_00426320(GameBoard *this,int param_1,int param_2)

{
  if ((this->target_x == param_1) && (this->target_y == param_2)) {
    this->is_match = 1;
    return;
  }
  this->is_match = 0;
  return;
}



/* Function: FUN_00426350 @ 0x00426350 */

undefined4 __thiscall
FUN_00426350(GameBoard *this,int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  short local_a;
  
  bVar2 = false;
  local_a = 0;
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (9 < param_1) {
    param_1 = 9;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (6 < param_2) {
    param_2 = 6;
  }
  do {
    local_a = local_a + 1;
    iVar3 = rand();
    *param_5 = iVar3 % 7 + 2;
    uVar4 = rand();
    uVar6 = (int)uVar4 >> 0x1f;
    *param_6 = ((uVar4 ^ uVar6) - uVar6 & 3 ^ uVar6) - uVar6;
    *param_3 = param_1;
    *param_4 = param_2;
    switch(*param_6) {
    case 0:
      *param_4 = param_2 - *param_5;
      break;
    case 1:
      *param_4 = *param_5 + param_2;
      break;
    case 2:
      *param_3 = *param_3 + *param_5;
      break;
    case 3:
      *param_3 = *param_3 - *param_5;
    }
    if (local_a < 1000) {
      if ((((this->board_mode == 3) && (0 < *param_3)) && (*param_3 < 10)) &&
         ((iVar3 = *param_4, 0 < iVar3 && (iVar3 < 7)))) {
        sVar5 = 0;
        iVar1 = this->board_layer * 6;
        do {
          if (*(short *)(&DAT_0047f8f6 + ((int)sVar5 + (iVar3 + iVar1) * 9) * 2) ==
              this->board_note) {
            bVar2 = true;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < 9);
        sVar5 = 0;
        do {
          if (*(short *)(&DAT_0047f906 + ((sVar5 + iVar1) * 9 + *param_3) * 2) ==
              this->board_note) {
            bVar2 = true;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < 6);
        if (!bVar2) {
          *param_3 = 0;
        }
      }
      if (((this->board_mode == 2) && (iVar3 = *param_3, 0 < iVar3)) &&
         ((iVar3 < 10 &&
          (((iVar1 = *param_4, 0 < iVar1 && (iVar1 < 7)) &&
           (*(short *)(&DAT_0047f8f4 + ((iVar1 + this->board_layer * 6) * 9 + iVar3) * 2
                      ) != this->board_note)))))) {
        *param_3 = 0;
      }
    }
  } while (((*param_3 < 1) || (9 < *param_3)) || ((*param_4 < 1 || (6 < *param_4))));
  return 0;
}



/* Function: FUN_00426550 @ 0x00426550 */

undefined4 __thiscall FUN_00426550(GameBoard *this,int param_1,char param_2,char param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int local_14;
  undefined1 local_8;
  short local_4;
  
  iVar3 = rand();
  uVar4 = rand();
  uVar8 = (int)uVar4 >> 0x1f;
  iVar5 = ((uVar4 ^ uVar8) - uVar8 & 7 ^ uVar8) - uVar8;
  sVar1 = *(short *)(&DAT_0047f850 + iVar5 * 2);
  while (sVar1 != 2) {
    uVar4 = rand();
    uVar8 = (int)uVar4 >> 0x1f;
    iVar5 = ((uVar4 ^ uVar8) - uVar8 & 7 ^ uVar8) - uVar8;
    sVar1 = *(short *)(&DAT_0047f850 + iVar5 * 2);
  }
  local_14 = 0;
  if (0 < param_1) {
    piVar10 = (int *)&this->players[0].total;
    do {
      iVar6 = iVar5;
      if (param_2 != '\0') {
        uVar4 = iVar5 + local_14 >> 0x1f;
        iVar6 = ((iVar5 + local_14 ^ uVar4) - uVar4 & 7 ^ uVar4) - uVar4;
      }
      *piVar10 = iVar6;
      if (param_3 == '\0') {
        local_8 = (undefined1)(iVar3 % 7);
        *(undefined1 *)((int)piVar10 + -2) = local_8;
      }
      else {
        *(char *)((int)piVar10 + -2) = (char)((iVar3 % 7 + local_14) % 7);
      }
      local_4 = 1000;
      iVar6 = local_14 + -1;
      do {
        bVar2 = false;
        iVar7 = rand();
        piVar10[1] = iVar7 % 9 + 1;
        iVar7 = rand();
        piVar10[2] = iVar7 % 6 + 1;
        if (-1 < iVar6) {
          piVar9 = (int *)((intptr_t)this + iVar6 * 0xe + 0x1de);
          iVar7 = iVar6;
          do {
            if ((*piVar9 == piVar10[1]) && (piVar9[1] == piVar10[2])) {
              bVar2 = true;
            }
            piVar9 = (int *)((int)piVar9 + -0xe);
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
        sVar1 = *(short *)(&DAT_0047f850 + *piVar10 * 2);
        if (sVar1 != 0) {
          if ((sVar1 == 1) &&
             (*(short *)(&DAT_0047f8f4 +
                        ((this->board_layer * 6 + piVar10[2]) * 9 + piVar10[1]) * 2) !=
              1)) {
            bVar2 = true;
          }
          if ((sVar1 == 2) &&
             (*(short *)(&DAT_0047f8f4 +
                        ((this->board_layer * 6 + piVar10[2]) * 9 + piVar10[1]) * 2) ==
              1)) {
            bVar2 = true;
          }
        }
        if ((local_14 == 0) &&
           (*(short *)(&DAT_0047f8f4 +
                      ((this->board_layer * 6 + piVar10[2]) * 9 + piVar10[1]) * 2) !=
            this->field_270)) {
          bVar2 = true;
        }
      } while ((bVar2) && (local_4 = local_4 + -1, local_4 != 0));
      piVar10 = (int *)((int)piVar10 + 0xe);
      local_14 = local_14 + 1;
    } while (local_14 < param_1);
  }
  return 0;
}



/* Function: FUN_00426740 @ 0x00426740 */

undefined4 __cdecl FUN_00426740(int param_1)

{
    /* TODO: 25 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004267a0 @ 0x004267a0 */

void __cdecl FUN_004267a0(int param_1)

{
  BYTE *pBVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  PALETTEENTRY *pPVar5;
  LOGPALETTE local_404 [128];
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  local_404[0].palVersion = 0x300;
  local_404[0].palNumEntries = 0x100;
  pPVar5 = local_404[0].palPalEntry;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pPVar5->peRed = '\0';
    pPVar5->peGreen = '\0';
    pPVar5->peBlue = '\0';
    pPVar5->peFlags = '\0';
    pPVar5 = pPVar5 + 1;
  }
  uVar4 = 0;
  do {
    uVar2 = (short)uVar4 + 1;
    pBVar1 = (BYTE *)(uVar4 * 4 + param_1);
    local_404[0].palPalEntry[uVar4].peRed = *(BYTE *)(uVar4 * 4 + 2 + param_1);
    local_404[0].palPalEntry[uVar4].peGreen = pBVar1[1];
    local_404[0].palPalEntry[uVar4].peBlue = *pBVar1;
    local_404[0].palPalEntry[uVar4].peFlags = '\x01';
    uVar4 = (uint)uVar2;
  } while (uVar2 < 0x100);
  local_404[0].palPalEntry[0].peRed = '\0';
  local_404[0].palPalEntry[0].peGreen = '\0';
  local_404[0].palPalEntry[0].peBlue = '\0';
  local_404[0].palPalEntry[0].peFlags = '\0';
  local_4 = 0xff;
  local_3 = 0xff;
  local_2 = 0xff;
  local_1 = 0;
  CreatePalette(local_404);
  return;
}



/* Function: FUN_00426850 @ 0x00426850 */

void FUN_00426850(void)

{
  return;
}



/* Function: FUN_00426860 @ 0x00426860 */

void __cdecl FUN_00426860(int param_1)

{
  HWND hWnd;
  HDC hdc;
  
  hWnd = *(HWND *)(*(int *)(DAT_00489ac8 + 4) + 0xe);
  hdc = GetDC(hWnd);
  if (DAT_004838bc != (HGDIOBJ)0x0) {
    FUN_004268c0(DAT_004838bc);
  }
  DAT_004838bc = (HPALETTE)FUN_00426740(param_1);
  SelectPalette(hdc,DAT_004838bc,0);
  RealizePalette(hdc);
  ReleaseDC(hWnd,hdc);
  return;
}



/* Function: FUN_004268c0 @ 0x004268c0 */

void __cdecl FUN_004268c0(HGDIOBJ param_1)

{
  DeleteObject(param_1);
  return;
}



/* Function: FUN_004268d0 @ 0x004268d0 */

void __cdecl FUN_004268d0(undefined4 *param_1,short param_2)

{
    /* TODO: 52 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00426a0b @ 0x00426a0b */

void FUN_00426a0b(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x820));
  return;
}



/* Function: FUN_00426a20 @ 0x00426a20 */

void __cdecl FUN_00426a20(undefined4 *param_1,short param_2)

{
    /* TODO: 47 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00426b61 @ 0x00426b61 */

void FUN_00426b61(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x820));
  return;
}



/* Function: FUN_00426b70 @ 0x00426b70 */

void __cdecl FUN_00426b70(int param_1,short param_2)

{
    /* TODO: 50 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00426cda @ 0x00426cda */

void FUN_00426cda(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x828));
  return;
}



/* Function: FUN_00426cf0 @ 0x00426cf0 */

void __cdecl FUN_00426cf0(int param_1,short param_2)

{
    /* TODO: 53 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00426e57 @ 0x00426e57 */

void FUN_00426e57(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x828));
  return;
}



/* Function: FUN_00426e80 @ 0x00426e80 */

void FUN_00426e80(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486218,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00426ed0 @ 0x00426ed0 */

void FUN_00426ed0(void)

{
  return;
}



/* Function: FUN_00426ef0 @ 0x00426ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426ef0(void)

{
  _DAT_00486226 = 0;
  _DAT_00486224 = 0;
  return;
}



/* Function: FUN_00426f00 @ 0x00426f00 */

void FUN_00426f00(void)

{
  _atexit(FUN_00426f10);
  return;
}



/* Function: FUN_00426f10 @ 0x00426f10 */

void FUN_00426f10(void)

{
  return;
}



/* Function: FUN_00426f30 @ 0x00426f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426f30(void)

{
  _DAT_00486222 = 0;
  _DAT_00486220 = 0;
  return;
}



/* Function: FUN_00426f40 @ 0x00426f40 */

void FUN_00426f40(void)

{
  _atexit(FUN_00426f50);
  return;
}



/* Function: FUN_00426f50 @ 0x00426f50 */

void FUN_00426f50(void)

{
  return;
}



/* Function: FUN_00426f70 @ 0x00426f70 */

void FUN_00426f70(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486228,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00426fb0 @ 0x00426fb0 */

void FUN_00426fb0(void)

{
  _atexit(FUN_00426fc0);
  return;
}



/* Function: FUN_00426fc0 @ 0x00426fc0 */

void FUN_00426fc0(void)

{
  return;
}



/* Function: FUN_00426fe0 @ 0x00426fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426fe0(void)

{
  _DAT_00486236 = 0;
  _DAT_00486234 = 0;
  return;
}



/* Function: FUN_00426ff0 @ 0x00426ff0 */

void FUN_00426ff0(void)

{
  _atexit(FUN_00427000);
  return;
}



/* Function: FUN_00427000 @ 0x00427000 */

void FUN_00427000(void)

{
  return;
}



/* Function: FUN_00427020 @ 0x00427020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427020(void)

{
  _DAT_00486232 = 0;
  _DAT_00486230 = 0;
  return;
}



/* Function: FUN_00427030 @ 0x00427030 */

void FUN_00427030(void)

{
  _atexit(FUN_00427040);
  return;
}



/* Function: FUN_00427040 @ 0x00427040 */

void FUN_00427040(void)

{
  return;
}



/* Function: FUN_00427050 @ 0x00427050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00427050(uint param_1,LPCVOID param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  short sVar4;
  undefined4 *puVar5;
  
  if (param_2 == (LPCVOID)0x0) {
    param_2 = DAT_004833cc;
    if (DAT_004833cc == (LPCVOID)0x0) {
      param_2 = DAT_00483df4;
    }
    if ((param_2 == (LPCVOID)0x0) && (param_2 = DAT_004833cc, DAT_004833cc == (LPCVOID)0x0)) {
      param_2 = DAT_00483df4;
    }
  }
  if (DAT_0047fbfc == '\0') {
    FUN_004271c0();
  }
  sVar4 = 0;
  while (((iVar1 = sVar4 * 0xe, (&DAT_0048624c)[iVar1] != '\0' ||
          (*(int *)((int)&DAT_00486240 + iVar1) == 0)) ||
         (*(uint *)((int)&DAT_00486244 + iVar1) < param_1))) {
    sVar4 = sVar4 + 1;
    if (0xff < sVar4) {
      sVar4 = 0;
      while (((iVar1 = sVar4 * 0xe, (&DAT_0048624c)[sVar4 * 0xe] != '\0' ||
              (*(int *)((int)&DAT_00486240 + iVar1) != 0)) ||
             (*(int *)((int)&DAT_00486244 + iVar1) != 0))) {
        sVar4 = sVar4 + 1;
        if (0xff < sVar4) {
          return 0;
        }
      }
      iVar1 = sVar4 * 0xe;
      (&DAT_0048624c)[iVar1] = 1;
      *(uint *)((int)&DAT_00486248 + iVar1) = param_1;
      *(uint *)((int)&DAT_00486244 + iVar1) = param_1;
      puVar2 = FUN_0046f060(param_2,param_1,0);
      _DAT_0047fc00 = _DAT_0047fc00 + 1;
      *(ushort **)((int)&DAT_00486240 + iVar1) = puVar2;
      _DAT_0047fc04 = _DAT_0047fc04 + 1;
      DAT_0047fc08 = DAT_0047fc08 + *(int *)((int)&DAT_00486244 + iVar1);
      DAT_0047fc0c = DAT_0047fc0c + *(int *)((int)&DAT_00486248 + iVar1);
      puVar5 = *(undefined4 **)((int)&DAT_00486240 + iVar1);
      for (uVar3 = param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return *(undefined4 *)((int)&DAT_00486240 + iVar1);
    }
  }
  _DAT_0047fc04 = _DAT_0047fc04 + 1;
  DAT_0047fc0c = DAT_0047fc0c + param_1;
  uVar3 = param_1 >> 2;
  iVar1 = sVar4 * 0xe;
  (&DAT_0048624c)[iVar1] = 1;
  *(uint *)((int)&DAT_00486248 + iVar1) = param_1;
  puVar5 = *(undefined4 **)((int)&DAT_00486240 + iVar1);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return *(undefined4 *)((int)&DAT_00486240 + iVar1);
}



/* Function: FUN_004271c0 @ 0x004271c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004271c0(void)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 0;
  do {
    iVar1 = (int)sVar2;
    sVar2 = sVar2 + 1;
    iVar1 = iVar1 * 0xe;
    (&DAT_0048624c)[iVar1] = 0;
    *(undefined4 *)((int)&DAT_00486240 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00486248 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00486244 + iVar1) = 0;
  } while (sVar2 < 0x100);
  _DAT_0047fc00 = 0;
  DAT_0047fc0c = 0;
  _DAT_0047fc04 = 0;
  DAT_0047fc08 = 0;
  DAT_0047fbfc = 1;
  return;
}



/* Function: FUN_00427220 @ 0x00427220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00427220(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint in_EAX;
  uint uVar4;
  
  uVar4 = in_EAX & 0xffff0000;
  while( true ) {
    sVar3 = (short)uVar4;
    if (0xff < sVar3) {
      return uVar4 & 0xffffff00;
    }
    if (*(int *)((int)&DAT_00486240 + sVar3 * 0xe) == *param_1) break;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),sVar3 + 1);
  }
  _DAT_0047fc04 = _DAT_0047fc04 + -1;
  iVar2 = sVar3 * 0xe;
  iVar1 = *(int *)((int)&DAT_00486248 + iVar2);
  *(undefined4 *)((int)&DAT_00486248 + iVar2) = 0;
  (&DAT_0048624c)[iVar2] = 0;
  DAT_0047fc0c = DAT_0047fc0c - iVar1;
  *param_1 = 0;
  return CONCAT31((unsigned int)((uint)iVar2 >> 8),1);
}



/* Function: FUN_00427290 @ 0x00427290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427290(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  sVar5 = 0;
  iVar3 = DAT_0047fc08;
  iVar4 = DAT_0047fc0c;
  do {
    iVar1 = sVar5 * 0xe;
    uVar2 = *(uint *)((int)&DAT_00486240 + sVar5 * 0xe);
    if (uVar2 != 0) {
      _DAT_0047fc00 = _DAT_0047fc00 + -1;
      if ((&DAT_0048624c)[iVar1] != '\0') {
        _DAT_0047fc04 = _DAT_0047fc04 + -1;
      }
      DAT_0047fc08 = iVar3 - *(int *)((int)&DAT_00486244 + iVar1);
      DAT_0047fc0c = iVar4 - *(int *)((int)&DAT_00486248 + iVar1);
      FUN_0046f5f0(uVar2);
      iVar4 = DAT_0047fc0c;
      iVar3 = DAT_0047fc08;
      *(undefined4 *)((int)&DAT_00486240 + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00486244 + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00486248 + iVar1) = 0;
      (&DAT_0048624c)[iVar1] = 0;
    }
    sVar5 = sVar5 + 1;
  } while (sVar5 < 0x100);
  return;
}



/* Function: FUN_00427340 @ 0x00427340 */

void __cdecl FUN_00427340(short param_1,uint param_2)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004273d0 @ 0x004273d0 */

void FUN_004273d0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00486238,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00427420 @ 0x00427420 */

void FUN_00427420(void)

{
  return;
}



/* Function: FUN_00427440 @ 0x00427440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427440(void)

{
  _DAT_00487046 = 0;
  _DAT_00487044 = 0;
  return;
}



/* Function: FUN_00427450 @ 0x00427450 */

void FUN_00427450(void)

{
  _atexit(FUN_00427460);
  return;
}



/* Function: FUN_00427460 @ 0x00427460 */

void FUN_00427460(void)

{
  return;
}



/* Function: FUN_00427480 @ 0x00427480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427480(void)

{
  _DAT_00487042 = 0;
  _DAT_00487040 = 0;
  return;
}



/* Function: FUN_00427490 @ 0x00427490 */

void FUN_00427490(void)

{
  _atexit(FUN_004274a0);
  return;
}



/* Function: FUN_004274a0 @ 0x004274a0 */

void FUN_004274a0(void)

{
  return;
}



/* Function: FUN_004274c0 @ 0x004274c0 */

void FUN_004274c0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487048,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00427500 @ 0x00427500 */

void FUN_00427500(void)

{
  _atexit(FUN_00427510);
  return;
}



/* Function: FUN_00427510 @ 0x00427510 */

void FUN_00427510(void)

{
  return;
}



/* Function: FUN_00427530 @ 0x00427530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427530(void)

{
  _DAT_00487056 = 0;
  _DAT_00487054 = 0;
  return;
}



/* Function: FUN_00427540 @ 0x00427540 */

void FUN_00427540(void)

{
  _atexit(FUN_00427550);
  return;
}



/* Function: FUN_00427550 @ 0x00427550 */

void FUN_00427550(void)

{
  return;
}



/* Function: FUN_00427570 @ 0x00427570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427570(void)

{
  _DAT_00487052 = 0;
  _DAT_00487050 = 0;
  return;
}



/* Function: FUN_00427580 @ 0x00427580 */

void FUN_00427580(void)

{
  _atexit(FUN_00427590);
  return;
}



/* Function: FUN_00427590 @ 0x00427590 */

void FUN_00427590(void)

{
  return;
}



/* Function: FUN_00427820 @ 0x00427820 */

undefined1 * __thiscall
FUN_00427820(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)this = param_1;
  *(undefined1 *)((intptr_t)this + 1) = param_2;
  *(undefined1 *)((intptr_t)this + 2) = param_3;
  return this;
}



/* Function: FUN_00427850 @ 0x00427850 */

void FUN_00427850(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487058,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00427890 @ 0x00427890 */

void FUN_00427890(void)

{
  _atexit(FUN_004278a0);
  return;
}



/* Function: FUN_004278a0 @ 0x004278a0 */

void FUN_004278a0(void)

{
  return;
}



/* Function: FUN_004278c0 @ 0x004278c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004278c0(void)

{
  _DAT_004870d6 = 0;
  _DAT_004870d4 = 0;
  return;
}



/* Function: FUN_004278d0 @ 0x004278d0 */

void FUN_004278d0(void)

{
  _atexit(FUN_004278e0);
  return;
}



/* Function: FUN_004278e0 @ 0x004278e0 */

void FUN_004278e0(void)

{
  return;
}



/* Function: FUN_00427900 @ 0x00427900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427900(void)

{
  _DAT_004870d2 = 0;
  _DAT_004870d0 = 0;
  return;
}



/* Function: FUN_00427910 @ 0x00427910 */

void FUN_00427910(void)

{
  _atexit(FUN_00427920);
  return;
}



/* Function: FUN_00427920 @ 0x00427920 */

void FUN_00427920(void)

{
  return;
}



/* Function: FUN_00427940 @ 0x00427940 */

void FUN_00427940(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004870e8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_00427980 @ 0x00427980 */

void FUN_00427980(void)

{
  _atexit(FUN_00427990);
  return;
}



/* Function: FUN_00427990 @ 0x00427990 */

void FUN_00427990(void)

{
  return;
}



/* Function: FUN_004279b0 @ 0x004279b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004279b0(void)

{
  _DAT_004870f6 = 0;
  _DAT_004870f4 = 0;
  return;
}



/* Function: FUN_004279c0 @ 0x004279c0 */

void FUN_004279c0(void)

{
  _atexit(FUN_004279d0);
  return;
}



/* Function: FUN_004279d0 @ 0x004279d0 */

void FUN_004279d0(void)

{
  return;
}



/* Function: FUN_004279f0 @ 0x004279f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004279f0(void)

{
  _DAT_004870f2 = 0;
  _DAT_004870f0 = 0;
  return;
}



/* Function: FUN_00427a00 @ 0x00427a00 */

void FUN_00427a00(void)

{
  _atexit(FUN_00427a10);
  return;
}



/* Function: FUN_00427a10 @ 0x00427a10 */

void FUN_00427a10(void)

{
  return;
}



/* Function: FUN_00427a50 @ 0x00427a50 */

void FUN_00427a50(void)

{
  DAT_004870da = 0xf0;
  DAT_004870d8 = 0x15e;
  return;
}



/* Function: FUN_00427a70 @ 0x00427a70 */

void FUN_00427a70(void)

{
  _atexit(FUN_00427a80);
  return;
}



/* Function: FUN_00427a80 @ 0x00427a80 */

void FUN_00427a80(void)

{
  return;
}



/* Function: FUN_00427b10 @ 0x00427b10 */

undefined4 * __fastcall FUN_00427b10(undefined4 *param_1)

{
  ushort *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427bc4;
  *unaff_FS_OFFSET = &local_10;
  FUN_004534e0(param_1);
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 0x10a) = 1;
  *param_1 = &PTR_FUN_00473698;
  FUN_0041da90(param_1,0);
  puVar1 = FUN_0040f380(DAT_004838c0,0x94000c,(ushort *)0x0);
  param_1[0x48] = puVar1;
  puVar1 = FUN_0040f380(DAT_004838c0,0x93000c,(ushort *)0x0);
  param_1[0x46] = puVar1;
  puVar1 = FUN_0040f380(DAT_004838c0,0x92000c,(ushort *)0x0);
  param_1[0x47] = puVar1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00427be0 @ 0x00427be0 */

undefined4 * __thiscall FUN_00427be0(void *this,byte param_1)

{
  FUN_00427c50(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00427c00 @ 0x00427c00 */

void FUN_00427c00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00427c37;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00427c41();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00427c41 @ 0x00427c41 */

void FUN_00427c41(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00427c50 @ 0x00427c50 */

void __fastcall FUN_00427c50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00427ccf;
  *param_1 = &PTR_FUN_00473698;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 0x10a) = 1;
  FUN_0041da90(param_1,0);
  FUN_0046f5f0(param_1[0x46]);
  FUN_0046f5f0(param_1[0x47]);
  FUN_0046f5f0(param_1[0x48]);
  local_8 = 0xffffffff;
  FUN_00427cd9();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00427cd9 @ 0x00427cd9 */

void FUN_00427cd9(void)

{
  FUN_00427c00();
  return;
}



/* Function: FUN_00427f19 @ 0x00427f19 */

void FUN_00427f19(void)

{
  return;
}



/* Function: FUN_00427f30 @ 0x00427f30 */

undefined4 * __fastcall FUN_00427f30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427fcc;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473740;
  local_8 = 1;
  FUN_00454300(param_1 + 0x48);
  *param_1 = &PTR_FUN_00473898;
  *(undefined4 *)((int)param_1 + 0x23a) = 0;
  *param_1 = &PTR_LAB_004737e8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00427fe0 @ 0x00427fe0 */

undefined4 * __thiscall FUN_00427fe0(void *this,byte param_1)

{
  FUN_004281b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00428000 @ 0x00428000 */

undefined4 * __thiscall FUN_00428000(void *this,byte param_1)

{
  FUN_00454660(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00428020 @ 0x00428020 */

void FUN_00428020(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00428057;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00428061();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00428061 @ 0x00428061 */

void FUN_00428061(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00428070 @ 0x00428070 */

void FUN_00428070(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004280a7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004280b1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004280b1 @ 0x004280b1 */

void FUN_004280b1(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00428119 @ 0x00428119 */

void FUN_00428119(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004281b0 @ 0x004281b0 */

void __fastcall FUN_004281b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042820f;
  *param_1 = &PTR_LAB_004737e8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(undefined4 **)((int)param_1 + 0x23a) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x23a))();
    *(undefined4 *)((int)param_1 + 0x23a) = 0;
  }
  local_8 = 0xffffffff;
  FUN_00428219();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00428219 @ 0x00428219 */

void FUN_00428219(void)

{
  int unaff_EBP;
  
  FUN_00454660(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042840d @ 0x0042840d */

void FUN_0042840d(void)

{
  return;
}



/* Function: FUN_00428415 @ 0x00428415 */

void FUN_00428415(void)

{
  return;
}



/* Function: FUN_00428427 @ 0x00428427 */

void FUN_00428427(void)

{
  return;
}



/* Function: FUN_0042853e @ 0x0042853e */

void FUN_0042853e(void)

{
  return;
}



/* Function: FUN_00428550 @ 0x00428550 */

void __thiscall FUN_00428550(void *this,short param_1)

{
  char local_28 [40];
  
  _itoa((int)param_1,local_28,10);
  FUN_00458860(*(void **)((intptr_t)this + 0x23a),local_28);
  return;
}



/* Function: FUN_00428590 @ 0x00428590 */

undefined4 * __fastcall FUN_00428590(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004285df;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473948;
  param_1[0x46] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00428600 @ 0x00428600 */

undefined4 * __thiscall FUN_00428600(void *this,byte param_1)

{
  FUN_00428620(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00428620 @ 0x00428620 */

void __fastcall FUN_00428620(undefined4 *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00428689 @ 0x00428689 */

void FUN_00428689(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_004286a0 @ 0x004286a0 */

void __fastcall FUN_004286a0(void *param_1)

{
    /* TODO: 44 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004287dc @ 0x004287dc */

void FUN_004287dc(void)

{
  return;
}



/* Function: FUN_004287f0 @ 0x004287f0 */

void __fastcall FUN_004287f0(int *param_1)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00428820 @ 0x00428820 */

undefined4 * __fastcall FUN_00428820(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00428902;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  local_8 = 0;
  FUN_004112e0((undefined4 *)((int)param_1 + 0x1c2));
  *param_1 = &PTR_FUN_004739f0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  sVar1 = 0;
  do {
    iVar2 = (int)sVar1;
    sVar1 = sVar1 + 1;
    *(undefined4 *)((int)param_1 + iVar2 * 4 + 0x19a) = 0;
  } while (sVar1 < 5);
  *(undefined2 *)((int)param_1 + 0x1b6) = 0;
  *(undefined4 *)((int)param_1 + 0x1ae) = 0;
  *(undefined4 *)((int)param_1 + 0x1b2) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((int)param_1 + 0x199) = 0;
  *(undefined4 *)((int)param_1 + 0x39e) = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)((int)param_1 + 0x3a2) = 0;
  *(undefined4 *)((int)param_1 + 0x3a6) = 0;
  *(undefined1 *)((int)param_1 + 0x1b9) = 0;
  *(undefined1 *)((int)param_1 + 0x1ba) = 0;
  *(undefined4 *)((int)param_1 + 0x1be) = 0;
  param_1[0x5c] = &DAT_0047fc38;
  DAT_0047ef40 = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_00428920 @ 0x00428920 */

undefined4 * __thiscall FUN_00428920(void *this,byte param_1)

{
  FUN_00428990(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00428940 @ 0x00428940 */

void FUN_00428940(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00428977;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00428981();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00428981 @ 0x00428981 */

void FUN_00428981(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_00428990 @ 0x00428990 */

void __fastcall FUN_00428990(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004289e8;
  *param_1 = &PTR_FUN_004739f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_004289da();
  local_8 = 0xffffffff;
  FUN_004289f2();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_004289da @ 0x004289da */

void FUN_004289da(void)

{
  FUN_00428940();
  return;
}



/* Function: FUN_004289f2 @ 0x004289f2 */

void FUN_004289f2(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00428a00 @ 0x00428a00 */

void __fastcall FUN_00428a00(int param_1)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00428ad0 @ 0x00428ad0 */

undefined4 FUN_00428ad0(void)

{
    /* TODO: 46 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00428c00 @ 0x00428c00 */

short FUN_00428c00(void)

{
    /* TODO: 52 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00428d80 @ 0x00428d80 */

undefined4 __fastcall FUN_00428d80(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(short *)(DAT_0048345c + 0x96) + -1;
  uVar2 = (undefined2)((uint)iVar1 >> 0x10);
  switch(iVar1) {
  case 0:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0xc);
  case 1:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0xc);
  case 2:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0x31);
  case 3:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0x31);
  case 4:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0x111);
  case 5:
    return CONCAT22(uVar2,*(short *)(param_1 + 0x1b6) + 0x111);
  default:
    return CONCAT22(uVar2,0xffff);
  }
}



/* Function: FUN_00428e00 @ 0x00428e00 */

void FUN_00428e00(void)

{
  return;
}



/* Function: FUN_00428e10 @ 0x00428e10 */

void __fastcall FUN_00428e10(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)*(void **)((int)param_1 + 0x154) + 0x12);
  FUN_0041da90(*(void **)((int)param_1 + 0x154),1);
  FUN_0041dd40(*(void **)((int)param_1 + 0x154));
  FUN_0042da60(param_1,0x5c4000d,(ushort *)0x0,-1,-1);
  FUN_0041da90(*(void **)((int)param_1 + 0x154),(byte)(uVar1 >> 4) & 1);
  return;
}



/* Function: FUN_00428e60 @ 0x00428e60 */

void __fastcall FUN_00428e60(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)(DAT_0048345c + 0xf0) = 0;
  puVar2 = *(undefined4 **)(DAT_004897c0 + 0x44);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(DAT_004897c0 + 0x44) = 0;
    (**(void (**)(void))*puVar2)();
  }
  sVar1 = 0;
  puVar2 = (undefined4 *)0x0;
  do {
    if (*(short *)(*(int *)(param_1 + 0x19a + sVar1 * 4) + 0x118) == 1) {
      puVar2 = FUN_00454520((void *)(*(int *)(param_1 + 0x19a + sVar1 * 4) + 0x120));
      break;
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 5);
  if (DAT_00489288 == 0) {
    FUN_00407340(0x400011,'\x01','\0',4,'\0');
  }
  FUN_0041dd40(puVar2);
  FUN_0041c2a0(puVar2,2);
  FUN_0041ba40(puVar2,1,1,0);
  *(undefined1 *)((int)puVar2 + 0x109) = 1;
  FUN_0041b5f0(puVar2,1);
  *(undefined4 **)(DAT_004897c0 + 0x44) = puVar2;
  return;
}



/* Function: FUN_00428f30 @ 0x00428f30 */

void __cdecl FUN_00428f30(void *param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_004094d0(param_1,param_2,'\x01');
    if ((*(int *)((int)param_1 + 0x36) != 0) &&
       (uVar1 = 1, *(int *)(*(int *)((int)param_1 + 0x36) + 0xe) != 0)) {
      iVar2 = 4;
      do {
        iVar2 = iVar2 + 4;
        uVar1 = uVar1 + 1;
        FUN_00428f30(*(void **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + -8 + iVar2),param_2)
        ;
      } while (uVar1 <= *(uint *)(*(int *)((int)param_1 + 0x36) + 0xe));
    }
  }
  return;
}



/* Function: FUN_00428f90 @ 0x00428f90 */

void __cdecl FUN_00428f90(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_00409580(param_1,'\x01');
    if ((*(int *)((int)param_1 + 0x36) != 0) &&
       (uVar2 = 1, *(int *)(*(int *)((int)param_1 + 0x36) + 0xe) != 0)) {
      iVar1 = 4;
      do {
        iVar1 = iVar1 + 4;
        uVar2 = uVar2 + 1;
        FUN_00428f90(*(void **)(**(int **)(*(int *)((int)param_1 + 0x36) + 4) + -8 + iVar1));
      } while (uVar2 <= *(uint *)(*(int *)((int)param_1 + 0x36) + 0xe));
    }
  }
  return;
}



/* Function: FUN_004292b0 @ 0x004292b0 */

void __fastcall FUN_004292b0(void *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x176) = DVar1;
  FUN_0042dba0(param_1,(int)param_1 + 500);
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x176) = DVar1;
  return;
}



/* Function: FUN_004292e0 @ 0x004292e0 */

/* WARNING: Removing unreachable block (ram,0x00429306) */

void __fastcall FUN_004292e0(int *param_1)

{
    /* TODO: 39 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_004299b0 @ 0x004299b0 */

void __fastcall FUN_004299b0(int param_1)

{
  DWORD DVar1;
  
  FUN_0042db40(param_1);
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 0x176) = DVar1;
  return;
}



/* Function: FUN_004299d0 @ 0x004299d0 */

void __fastcall FUN_004299d0(void *param_1)

{
    /* TODO: 35 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00429b20 @ 0x00429b20 */

void __fastcall FUN_00429b20(int *param_1)

{
  if (*(undefined4 **)((int)param_1 + 0x1b2) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0x1b2))();
    *(undefined4 *)((int)param_1 + 0x1b2) = 0;
  }
  FUN_00409330();
  (**(void (**)(void))(*param_1 + 0x90))();
  if (param_1[0x34] != 0) {
    FUN_0046f5f0(param_1[0x34]);
    param_1[0x34] = 0;
  }
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x182));
  *(undefined4 *)((int)param_1 + 0x182) = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x39e));
  *(undefined4 *)((int)param_1 + 0x39e) = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x3a2));
  *(undefined4 *)((int)param_1 + 0x3a2) = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x3a6));
  *(undefined4 *)((int)param_1 + 0x3a6) = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x186));
  *(undefined4 *)((int)param_1 + 0x186) = 0;
  FUN_0040f070(DAT_004838c0,0,*(uint *)((int)param_1 + 0x18a));
  *(undefined4 *)((int)param_1 + 0x18a) = 0;
  FUN_00428e00();
  return;
}



/* Function: FUN_00429f29 @ 0x00429f29 */

void FUN_00429f29(void)

{
  FUN_00429f40();
  return;
}



/* Function: FUN_00429f40 @ 0x00429f40 */

void FUN_00429f40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00429f77;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00429f81();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00429f81 @ 0x00429f81 */

void FUN_00429f81(void)

{
  FUN_00428020();
  return;
}



/* Function: FUN_0042a354 @ 0x0042a354 */

void FUN_0042a354(void)

{
  return;
}



/* Function: FUN_0042a35c @ 0x0042a35c */

void FUN_0042a35c(void)

{
  return;
}



/* Function: FUN_0042a4fb @ 0x0042a4fb */

void FUN_0042a4fb(void)

{
  return;
}



/* Function: FUN_0042a503 @ 0x0042a503 */

void FUN_0042a503(void)

{
  return;
}



/* Function: FUN_0042a50b @ 0x0042a50b */

void FUN_0042a50b(void)

{
  return;
}



/* Function: FUN_0042a513 @ 0x0042a513 */

void FUN_0042a513(void)

{
  return;
}



/* Function: FUN_0042a525 @ 0x0042a525 */

void FUN_0042a525(void)

{
  return;
}



/* Function: FUN_0042a6bc @ 0x0042a6bc */

void FUN_0042a6bc(void)

{
  int unaff_EBP;
  
  FUN_004097c0((undefined4 *)(unaff_EBP + -0x24));
  return;
}



/* Function: FUN_0042a6d0 @ 0x0042a6d0 */

undefined1 * __fastcall FUN_0042a6d0(undefined1 *param_1)

{
  FUN_0042a6e0(param_1);
  return param_1;
}



/* Function: FUN_0042a6e0 @ 0x0042a6e0 */

void __fastcall FUN_0042a6e0(undefined1 *param_1)

{
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xc) = 2;
  return;
}



/* Function: FUN_0042a710 @ 0x0042a710 */

char __cdecl FUN_0042a710(short param_1,char param_2,char param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (*param_4 != '\0') {
    cVar1 = param_2;
  }
  if (param_1 == 1) {
    if ((cVar1 == '\0') && (param_3 == '\0')) {
      *param_4 = '\x01';
      return '\0';
    }
    *param_4 = '\x01';
    return '\x01';
  }
  if (param_1 != 2) {
    *param_4 = '\x01';
    return cVar1;
  }
  if ((cVar1 != '\0') && (param_3 != '\0')) {
    *param_4 = '\x01';
    return '\x01';
  }
  *param_4 = '\x01';
  return '\0';
}



/* Function: FUN_0042a770 @ 0x0042a770 */

void __cdecl FUN_0042a770(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char local_1;
  
  cVar2 = '\0';
  local_1 = '\0';
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (iVar1 = *(int *)(param_1 + 0xf6), iVar1 != 0)
     ) {
    if (*param_2 == '\0') {
      if (*(int *)(param_2 + 2) != 0) {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),'\0',param_1 == *(int *)(param_2 + 2),
                             &local_1);
      }
      if (*(ushort *)(param_2 + 6) != 0) {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),cVar2,
                             (int)*(short *)(param_1 + 0x10c) == (uint)*(ushort *)(param_2 + 6),
                             &local_1);
      }
      if (param_2[8] != '\0') {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),cVar2,*(char *)(iVar1 + 4) == param_2[8],
                             &local_1);
      }
      if (param_2[9] != '\0') {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),cVar2,*(char *)(iVar1 + 7) == param_2[9],
                             &local_1);
      }
      if (param_2[10] != '\0') {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),cVar2,*(char *)(iVar1 + 5) == param_2[10],
                             &local_1);
      }
      if (param_2[0xb] != '\0') {
        cVar2 = FUN_0042a710(*(short *)(param_2 + 0xc),cVar2,*(char *)(iVar1 + 6) == param_2[0xb],
                             &local_1);
      }
    }
    else {
      cVar2 = '\x01';
    }
  }
  if (cVar2 != '\0') {
    *(int *)(param_2 + 0xe) = *(int *)(param_2 + 0xe) + 1;
  }
  return;
}



/* Function: FUN_0042a8b0 @ 0x0042a8b0 */

void __cdecl FUN_0042a8b0(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x36) != 0) &&
       (uVar1 = 1, *(int *)(*(int *)(param_1 + 0x36) + 0xe) != 0)) {
      iVar2 = 4;
      do {
        iVar2 = iVar2 + 4;
        uVar1 = uVar1 + 1;
        FUN_0042a8b0(*(int *)(**(int **)(*(int *)(param_1 + 0x36) + 4) + -8 + iVar2),param_2);
      } while (uVar1 <= *(uint *)(*(int *)(param_1 + 0x36) + 0xe));
    }
    FUN_0042a770(param_1,param_2);
  }
  return;
}



/* Function: FUN_0042a910 @ 0x0042a910 */

undefined4 __cdecl FUN_0042a910(int param_1)

{
  char local_14 [14];
  undefined4 local_6;
  
  FUN_0042a6d0(local_14);
  if (param_1 != 0) {
    local_14[0] = '\x01';
    FUN_0042a8b0(param_1,local_14);
  }
  return local_6;
}



/* Function: FUN_0042a950 @ 0x0042a950 */

void FUN_0042a950(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004870f8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042a9a0 @ 0x0042a9a0 */

void FUN_0042a9a0(void)

{
  return;
}



/* Function: FUN_0042a9c0 @ 0x0042a9c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a9c0(void)

{
  _DAT_00487106 = 0;
  _DAT_00487104 = 0;
  return;
}



/* Function: FUN_0042a9d0 @ 0x0042a9d0 */

void FUN_0042a9d0(void)

{
  _atexit(FUN_0042a9e0);
  return;
}



/* Function: FUN_0042a9e0 @ 0x0042a9e0 */

void FUN_0042a9e0(void)

{
  return;
}



/* Function: FUN_0042aa00 @ 0x0042aa00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042aa00(void)

{
  _DAT_00487102 = 0;
  _DAT_00487100 = 0;
  return;
}



/* Function: FUN_0042aa10 @ 0x0042aa10 */

void FUN_0042aa10(void)

{
  _atexit(FUN_0042aa20);
  return;
}



/* Function: FUN_0042aa20 @ 0x0042aa20 */

void FUN_0042aa20(void)

{
  return;
}



/* Function: FUN_0042aa30 @ 0x0042aa30 */

undefined4 * __fastcall FUN_0042aa30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042aaa7;
  *unaff_FS_OFFSET = &local_10;
  FUN_00458040(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00473b80;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  FUN_0042ac60(param_1,0x14);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0042aac0 @ 0x0042aac0 */

undefined4 * __thiscall FUN_0042aac0(void *this,byte param_1)

{
  FUN_0042aae0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0042aae0 @ 0x0042aae0 */

void __fastcall FUN_0042aae0(undefined4 *param_1)

{
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042ab49 @ 0x0042ab49 */

void FUN_0042ab49(void)

{
  int unaff_EBP;
  
  FUN_00458710(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042ab60 @ 0x0042ab60 */

int __fastcall FUN_0042ab60(int param_1)

{
  return param_1 + 0x42;
}



/* Function: FUN_0042ab70 @ 0x0042ab70 */

void __thiscall FUN_0042ab70(TextDisplay *this,int param_1)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar8 = 0;
  if ((*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) &&
     (pcVar5 = (char *)**(undefined4 **)(param_1 + 4), pcVar5 != (char *)0x0)) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar8 = uVar8 + 1;
      cVar1 = *pcVar5;
    }
  }
  if (this->text_capacity + -1 < (int)uVar8) {
    iVar7 = 0;
    puVar4 = this->text_buffer_ptr;
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
      pvVar3 = this->text_allocator;
      if (this->text_allocator == (LPCVOID)0x0) {
        pvVar3 = DAT_00483df4;
      }
      puVar4 = FUN_0046ccb0(pvVar3,7,iVar7);
    }
    else {
      puVar4 = FUN_0046cdc0(puVar4,iVar7,7);
    }
    this->text_buffer_ptr = puVar4;
    this->text_capacity = iVar7;
  }
  puVar9 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  puVar10 = (undefined4 *)*this->text_buffer_ptr;
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 0;
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(undefined1 *)(*this->text_buffer_ptr + uVar8) = 0;
  if ((this->text_buffer_ptr != (undefined4 *)0x0) &&
     (pcVar5 = (char *)*this->text_buffer_ptr, pcVar5 != (char *)0x0)) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar5;
    }
  }
  this->text_length = iVar7;
  (**(void (**)(void))(*(int *)this + 0x90))();
  return;
}



/* Function: FUN_0042ac60 @ 0x0042ac60 */

void __thiscall FUN_0042ac60(void *this,undefined4 param_1)

{
  *(undefined4 *)((intptr_t)this + 0xb0) = param_1;
  FUN_00458b40(this,(short)param_1 + 1,1);
  return;
}



/* Function: FUN_0042ac80 @ 0x0042ac80 */

void __fastcall FUN_0042ac80(int *param_1)

{
    /* TODO: 33 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042ad70 @ 0x0042ad70 */

int __fastcall FUN_0042ad70(void *param_1)

{
    /* TODO: 53 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042aef4 @ 0x0042aef4 */

void FUN_0042aef4(void)

{
  return;
}



/* Function: FUN_0042af00 @ 0x0042af00 */

void __thiscall FUN_0042af00(void *this,char param_1)

{
    /* TODO: 125 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042b170 @ 0x0042b170 */

void __fastcall FUN_0042b170(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    DVar1 = GetTickCount();
    if (700 < DVar1 % 1000) {
      FUN_0041dad0(*(void **)(param_1 + 0xb4),0,'\0');
      return;
    }
    FUN_0041dad0(*(void **)(param_1 + 0xb4),1,'\0');
  }
  return;
}



/* Function: FUN_0042b1c0 @ 0x0042b1c0 */

void __fastcall FUN_0042b1c0(int *param_1)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042b200 @ 0x0042b200 */

void FUN_0042b200(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487108,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042b250 @ 0x0042b250 */

void FUN_0042b250(void)

{
  return;
}



/* Function: FUN_0042b270 @ 0x0042b270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b270(void)

{
  _DAT_00487116 = 0;
  _DAT_00487114 = 0;
  return;
}



/* Function: FUN_0042b280 @ 0x0042b280 */

void FUN_0042b280(void)

{
  _atexit(FUN_0042b290);
  return;
}



/* Function: FUN_0042b290 @ 0x0042b290 */

void FUN_0042b290(void)

{
  return;
}



/* Function: FUN_0042b2b0 @ 0x0042b2b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b2b0(void)

{
  _DAT_00487112 = 0;
  _DAT_00487110 = 0;
  return;
}



/* Function: FUN_0042b2c0 @ 0x0042b2c0 */

void FUN_0042b2c0(void)

{
  _atexit(FUN_0042b2d0);
  return;
}



/* Function: FUN_0042b2d0 @ 0x0042b2d0 */

void FUN_0042b2d0(void)

{
  return;
}



/* Function: FUN_0042b2e0 @ 0x0042b2e0 */

void __thiscall FUN_0042b2e0(CString *this,int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LPCVOID pvVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar9 = 0;
  puVar6 = this->pp_buffer;
  if ((puVar6 != (uint *)0x0) && (pcVar8 = (char *)*puVar6, pcVar8 != (char *)0x0)) {
    cVar2 = *pcVar8;
    while (cVar2 != '\0') {
      pcVar8 = pcVar8 + 1;
      iVar9 = iVar9 + 1;
      cVar2 = *pcVar8;
    }
  }
  if (param_1 <= iVar9) {
    if (this->capacity + -1 < (int)(param_2 + iVar9)) {
      iVar3 = 0;
      if ((puVar6 != (uint *)0x0) && (pcVar8 = (char *)*puVar6, pcVar8 != (char *)0x0)) {
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          pcVar8 = pcVar8 + 1;
          iVar3 = iVar3 + 1;
          cVar2 = *pcVar8;
        }
      }
      iVar1 = param_2 + 1 + iVar9;
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 <= iVar1) {
        iVar4 = iVar1;
      }
      iVar3 = (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (puVar6 == (uint *)0x0) {
        pvVar5 = this->allocator;
        if (this->allocator == (LPCVOID)0x0) {
          pvVar5 = DAT_00483df4;
        }
        puVar6 = FUN_0046ccb0(pvVar5,7,iVar3);
      }
      else {
        puVar6 = FUN_0046cdc0(puVar6,iVar3,7);
      }
      this->pp_buffer = puVar6;
      this->capacity = iVar3;
    }
    if (param_1 < iVar9) {
      memmove((void *)(param_2 + *this->pp_buffer + param_1),
              (void *)(param_1 + *this->pp_buffer),(iVar9 - param_1) + 1);
    }
    puVar10 = (undefined4 *)(*this->pp_buffer + param_1);
    for (uVar7 = param_2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)(*this->pp_buffer + iVar9 + param_2) = 0;
  }
  return;
}



/* Function: FUN_0042b3e0 @ 0x0042b3e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042b3e0(void)

{
    /* TODO: 69 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042b5f0 @ 0x0042b5f0 */

uint FUN_0042b5f0(void)

{
    /* TODO: 43 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042b700 @ 0x0042b700 */

undefined2 FUN_0042b700(void)

{
  return DAT_00487122;
}



/* Function: FUN_0042b710 @ 0x0042b710 */

short __cdecl FUN_0042b710(short param_1)

{
  if (DAT_00487122 != param_1) {
    if (param_1 < 0) {
      DAT_00487122 = 0;
      return 0;
    }
    if (0x1ff < param_1) {
      DAT_00487122 = 0x1ff;
      return 0x1ff;
    }
    DAT_00487122 = param_1;
  }
  return DAT_00487122;
}



/* Function: FUN_0042b760 @ 0x0042b760 */

void __cdecl FUN_0042b760(LPWAVEHDR param_1)

{
  byte *pbVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  short local_10;
  char *local_c;
  int local_8;
  int local_4;
  
  waveOutUnprepareHeader(DAT_00487372,param_1,0x20);
  local_10 = 0x1000;
  param_1->dwFlags = 0;
  sVar6 = DAT_00487126;
  local_c = param_1->lpData;
  do {
    local_4 = 0;
    local_8 = 0;
    sVar12 = 0;
    if (0 < sVar6) {
      do {
        iVar8 = (int)sVar12;
        iVar11 = iVar8 * 0x78;
        if ((&DAT_00487132)[iVar8 * 0x3c] == 0) {
          sVar9 = (short)*(char *)(&DAT_0048713a)[iVar8 * 0x1e];
          local_4 = local_4 + (short)((&DAT_00487130)[iVar8 * 0x3c] * sVar9);
          sVar7 = (&DAT_0048712e)[iVar8 * 0x3c];
          (&DAT_0048713a)[iVar8 * 0x1e] = (char *)(&DAT_0048713a)[iVar8 * 0x1e] + 1;
          local_8 = local_8 + (short)(sVar7 * sVar9);
          iVar4 = (&DAT_00487142)[iVar8 * 0x1e];
          (&DAT_00487142)[iVar8 * 0x1e] = iVar4 + -1;
          if (iVar4 + -1 == 0) {
            uVar3 = (&DAT_00487134)[iVar8 * 0x3c];
            if ((char)(uVar3 >> 8) == '\0') {
LAB_0042b912:
              (&DAT_00487132)[iVar8 * 0x3c] = 1;
            }
            else if ((uVar3 & 0x2000) == 0) {
              if ((uVar3 & 0x4000) == 0) goto LAB_0042b912;
              (&DAT_0048713a)[iVar8 * 0x1e] = (&DAT_00487136)[iVar8 * 0x1e];
              (&DAT_00487142)[iVar8 * 0x1e] = (&DAT_0048713e)[iVar8 * 0x1e];
              (&DAT_00487132)[iVar8 * 0x3c] = 0;
            }
            else {
              if ((uVar3 & 0x1000) != 0) {
                sVar7 = 0;
                do {
                  if ((&DAT_00487312)[sVar7] == 0) {
                    (&DAT_00487312)[sVar7] = (&DAT_00487136)[iVar8 * 0x1e];
                    pbVar1 = (byte *)((int)&DAT_00487134 + iVar11 + 1);
                    *pbVar1 = *pbVar1 & 0xef;
                    break;
                  }
                  sVar7 = sVar7 + 1;
                } while (sVar7 < 0x18);
                DAT_00487310 = 1;
              }
              puVar14 = &DAT_0048714c + iVar8 * 0x1e;
              (&DAT_00487136)[iVar8 * 0x1e] = *puVar14;
              (&DAT_0048713a)[iVar8 * 0x1e] = *puVar14;
              (&DAT_0048713e)[iVar8 * 0x1e] = (&DAT_00487150)[iVar8 * 0x1e];
              (&DAT_00487142)[iVar8 * 0x1e] = (&DAT_00487150)[iVar8 * 0x1e];
              (&DAT_00487146)[iVar8 * 0x1e] = (&DAT_00487154)[iVar8 * 0x1e];
              if (((&DAT_00487159)[iVar11] & 0x10) != 0) {
                pbVar1 = (byte *)((int)&DAT_00487134 + iVar11 + 1);
                *pbVar1 = *pbVar1 | 0x10;
              }
              sVar7 = (&DAT_0048714a)[iVar8 * 0x3c] + -1;
              (&DAT_0048714a)[iVar8 * 0x3c] = sVar7;
              if (sVar7 == 0) {
                pbVar1 = (byte *)((int)&DAT_00487134 + iVar11 + 1);
                *pbVar1 = *pbVar1 & 0xdf;
              }
              else {
                puVar13 = &DAT_0048715a + iVar8 * 0x1e;
                for (uVar10 = (uint)(sVar7 * 0xe) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar14 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar14 = puVar14 + 1;
                }
                for (uVar10 = sVar7 * 0xe & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
                  puVar13 = (undefined4 *)((int)puVar13 + 1);
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                }
              }
              *(undefined4 *)
               ((int)&DAT_0048714c + (short)(&DAT_0048714a)[iVar8 * 0x3c] * 0xe + iVar11) = 0;
              *(undefined4 *)
               ((int)&DAT_00487150 + (short)(&DAT_0048714a)[iVar8 * 0x3c] * 0xe + iVar11) = 0;
              *(undefined4 *)
               ((int)&DAT_00487154 + (short)(&DAT_0048714a)[iVar8 * 0x3c] * 0xe + iVar11) = 0;
              *(undefined2 *)(&DAT_00487158 + (short)(&DAT_0048714a)[iVar8 * 0x3c] * 0xe + iVar11) =
                   0;
              (&DAT_00487132)[iVar8 * 0x3c] = 0;
            }
          }
        }
        sVar12 = sVar12 + 1;
      } while (sVar12 < sVar6);
    }
    iVar11 = (int)DAT_00487122;
    bVar5 = DAT_00487124 & 0x1f;
    pcVar2 = local_c + 1;
    *local_c = (char)(iVar11 * local_4 >> (DAT_00487124 & 0x1f)) + -0x80;
    local_c = local_c + 2;
    *pcVar2 = (char)(iVar11 * local_8 >> bVar5) + -0x80;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      param_1->dwBufferLength = 0x2000;
      waveOutPrepareHeader(DAT_00487372,param_1,0x20);
      waveOutWrite(DAT_00487372,param_1,0x20);
      return;
    }
  } while( true );
}



/* Function: FUN_0042b9b0 @ 0x0042b9b0 */

void FUN_0042b9b0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487118,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042ba00 @ 0x0042ba00 */

void FUN_0042ba00(void)

{
  return;
}



/* Function: FUN_0042ba20 @ 0x0042ba20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ba20(void)

{
  _DAT_0048739a = 0;
  _DAT_00487398 = 0;
  return;
}



/* Function: FUN_0042ba30 @ 0x0042ba30 */

void FUN_0042ba30(void)

{
  _atexit(FUN_0042ba40);
  return;
}



/* Function: FUN_0042ba40 @ 0x0042ba40 */

void FUN_0042ba40(void)

{
  return;
}



/* Function: FUN_0042ba60 @ 0x0042ba60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ba60(void)

{
  _DAT_00487396 = 0;
  _DAT_00487394 = 0;
  return;
}



/* Function: FUN_0042ba70 @ 0x0042ba70 */

void FUN_0042ba70(void)

{
  _atexit(FUN_0042ba80);
  return;
}



/* Function: FUN_0042ba80 @ 0x0042ba80 */

void FUN_0042ba80(void)

{
  return;
}



/* Function: FUN_0042baa0 @ 0x0042baa0 */

void FUN_0042baa0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873a0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042bae0 @ 0x0042bae0 */

void FUN_0042bae0(void)

{
  _atexit(FUN_0042baf0);
  return;
}



/* Function: FUN_0042baf0 @ 0x0042baf0 */

void FUN_0042baf0(void)

{
  return;
}



/* Function: FUN_0042bb10 @ 0x0042bb10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bb10(void)

{
  _DAT_004873ae = 0;
  _DAT_004873ac = 0;
  return;
}



/* Function: FUN_0042bb20 @ 0x0042bb20 */

void FUN_0042bb20(void)

{
  _atexit(FUN_0042bb30);
  return;
}



/* Function: FUN_0042bb30 @ 0x0042bb30 */

void FUN_0042bb30(void)

{
  return;
}



/* Function: FUN_0042bb50 @ 0x0042bb50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bb50(void)

{
  _DAT_004873aa = 0;
  _DAT_004873a8 = 0;
  return;
}



/* Function: FUN_0042bb60 @ 0x0042bb60 */

void FUN_0042bb60(void)

{
  _atexit(FUN_0042bb70);
  return;
}



/* Function: FUN_0042bb70 @ 0x0042bb70 */

void FUN_0042bb70(void)

{
  return;
}



/* Function: FUN_0042bb90 @ 0x0042bb90 */

void FUN_0042bb90(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873b0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042bbd0 @ 0x0042bbd0 */

void FUN_0042bbd0(void)

{
  _atexit(FUN_0042bbe0);
  return;
}



/* Function: FUN_0042bbe0 @ 0x0042bbe0 */

void FUN_0042bbe0(void)

{
  return;
}



/* Function: FUN_0042bc00 @ 0x0042bc00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bc00(void)

{
  _DAT_004873be = 0;
  _DAT_004873bc = 0;
  return;
}



/* Function: FUN_0042bc10 @ 0x0042bc10 */

void FUN_0042bc10(void)

{
  _atexit(FUN_0042bc20);
  return;
}



/* Function: FUN_0042bc20 @ 0x0042bc20 */

void FUN_0042bc20(void)

{
  return;
}



/* Function: FUN_0042bc40 @ 0x0042bc40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bc40(void)

{
  _DAT_004873ba = 0;
  _DAT_004873b8 = 0;
  return;
}



/* Function: FUN_0042bc50 @ 0x0042bc50 */

void FUN_0042bc50(void)

{
  _atexit(FUN_0042bc60);
  return;
}



/* Function: FUN_0042bc60 @ 0x0042bc60 */

void FUN_0042bc60(void)

{
  return;
}



/* Function: FUN_0042bc70 @ 0x0042bc70 */

int * __thiscall
FUN_0042bc70(DialogWidget *this,short param_1,short param_2,short param_3,undefined4 param_4,void *param_5)

{
  short sVar1;
  void *pvVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  int iVar5;
  char cVar6;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042bdd9;
  *unaff_FS_OFFSET = &local_10;
  FUN_004052b0(this);
  *(undefined ***)this = &PTR_FUN_00473c28;
  local_8 = 0;
  pvVar2 = *(void **)((int)DAT_004897c0 + 0x52);
  this->dialog_result = 0;
  this->child_list = 0;
  iVar5 = 0x42bccf;
  FUN_00406720(this,param_1);
  if ((param_2 == -1) || (iVar3 = CONCAT22(extraout_var,param_3), param_3 == -1)) {
    cVar6 = '\0';
    iVar3 = FUN_0042c590((intptr_t)this);
    sVar1 = *(short *)(iVar3 + 4);
    iVar3 = FUN_0042c590((intptr_t)this);
    iVar3 = (int)sVar1 + (int)*(short *)(iVar3 + 8);
    FUN_00401050(&ghidra_stack_ffffffd0,iVar3);
    iVar4 = FUN_0042c590((intptr_t)this);
    sVar1 = *(short *)(iVar4 + 6);
    iVar4 = FUN_0042c590((intptr_t)this);
    FUN_00401050(&ghidra_stack_ffffffcc,(int)sVar1 + (int)*(short *)(iVar4 + 10));
  }
  else {
    cVar6 = '\0';
    FUN_00401ba0(&ghidra_stack_ffffffd0,param_3);
    FUN_00401ba0(&ghidra_stack_ffffffcc,param_2);
  }
  FUN_0041d3a0(this,iVar3,iVar5,cVar6);
  this->prev_dialog = *(undefined4 *)(*(int *)((int)pvVar2 + 6) + 0x12);
  if (param_5 == (void *)0x0) {
    param_5 = DAT_004897c0;
  }
  FUN_0041d780(this,param_5);
  this->dialog_result = param_4;
  if (pvVar2 != (void *)0x0) {
    if (*(void **)((int)pvVar2 + 6) != (void *)0x0) {
      FUN_00430ac0(*(void **)((int)pvVar2 + 6),this);
    }
    if ((*(uint *)((int)pvVar2 + 0x12) & 0x2000) == 0) {
      *(uint *)((int)pvVar2 + 0x12) = *(uint *)((int)pvVar2 + 0x12) | 0x2000;
      FUN_0041cad0(pvVar2);
    }
  }
  this->is_registered = 1;
  this->is_closing = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_0042bdf0 @ 0x0042bdf0 */

int * __thiscall FUN_0042bdf0(void *this,byte param_1)

{
  FUN_0042be10(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0042be10 @ 0x0042be10 */

void __fastcall FUN_0042be10(int *param_1)

{
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042bea8;
  *param_1 = (int)&PTR_FUN_00473c28;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  this = *(void **)(DAT_004897c0 + 0x52);
  if (this != (void *)0x0) {
    if (((char)param_1[0x48] != '\0') && ((*(uint *)((int)this + 0x12) & 0x2000) != 0)) {
      *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) & 0xffffdfff;
      FUN_0041cad0(this);
    }
    if (*(char *)((int)param_1 + 0x121) == '\0') {
      FUN_0042bf10((int)param_1);
      FUN_00404db0(this,(int *)0x0);
    }
  }
  FUN_0042c3f0(param_1);
  local_8 = 0xffffffff;
  FUN_0042beb2();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0042beb2 @ 0x0042beb2 */

void FUN_0042beb2(void)

{
  int unaff_EBP;
  
  FUN_00405420(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042bec0 @ 0x0042bec0 */

void __fastcall FUN_0042bec0(int *param_1)

{
  void *this;
  
  this = *(void **)(DAT_004897c0 + 0x52);
  if (this == (void *)0x0) {
    FUN_00430ac0(*(void **)(DAT_004897c0 + 6),(int *)0x0);
  }
  else {
    FUN_0042bf10((int)param_1);
    FUN_00404db0(this,(int *)0x0);
    FUN_00404de0((int)this);
  }
  FUN_0042c390((int)param_1);
  *(undefined1 *)((int)param_1 + 0x121) = 1;
  FUN_00405570(param_1);
  return;
}



/* Function: FUN_0042bf10 @ 0x0042bf10 */

void __fastcall FUN_0042bf10(int param_1)

{
  void *this;
  
  this = *(void **)(*(int *)(DAT_004897c0 + 0x52) + 6);
  if ((this != (void *)0x0) && (*(char *)(param_1 + 0x120) != '\0')) {
    FUN_00430ac0(this,*(int **)(param_1 + 0x118));
  }
  return;
}



/* Function: FUN_0042bf40 @ 0x0042bf40 */

void FUN_0042bf40(void)

{
  return;
}



/* Function: FUN_0042bf70 @ 0x0042bf70 */

void __fastcall FUN_0042bf70(int *param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042bfe0 @ 0x0042bfe0 */

undefined4 * __thiscall FUN_0042bfe0(void *this,short param_1)

{
    /* TODO: 38 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042c0e0 @ 0x0042c0e0 */

void __fastcall FUN_0042c0e0(int *param_1)

{
    /* TODO: 128 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042c390 @ 0x0042c390 */

void __fastcall FUN_0042c390(int param_1)

{
    /* TODO: 20 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042c3f0 @ 0x0042c3f0 */

void __fastcall FUN_0042c3f0(int *param_1)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042c4b0 @ 0x0042c4b0 */

void FUN_0042c4b0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873c8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042c500 @ 0x0042c500 */

void FUN_0042c500(void)

{
  return;
}



/* Function: FUN_0042c520 @ 0x0042c520 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c520(void)

{
  _DAT_004873d6 = 0;
  _DAT_004873d4 = 0;
  return;
}



/* Function: FUN_0042c530 @ 0x0042c530 */

void FUN_0042c530(void)

{
  _atexit(FUN_0042c540);
  return;
}



/* Function: FUN_0042c540 @ 0x0042c540 */

void FUN_0042c540(void)

{
  return;
}



/* Function: FUN_0042c560 @ 0x0042c560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c560(void)

{
  _DAT_004873d2 = 0;
  _DAT_004873d0 = 0;
  return;
}



/* Function: FUN_0042c570 @ 0x0042c570 */

void FUN_0042c570(void)

{
  _atexit(FUN_0042c580);
  return;
}



/* Function: FUN_0042c580 @ 0x0042c580 */

void FUN_0042c580(void)

{
  return;
}



/* Function: FUN_0042c590 @ 0x0042c590 */

int __fastcall FUN_0042c590(int param_1)

{
  return *(int *)(param_1 + 0xf2) + -0xc + *(short *)(param_1 + 0x110) * 0xe;
}



/* Function: FUN_0042c5b0 @ 0x0042c5b0 */

ushort * __cdecl FUN_0042c5b0(short *param_1,int *param_2,ushort *param_3)

{
    /* TODO: 65 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042c700 @ 0x0042c700 */

void FUN_0042c700(void)

{
  return;
}



/* Function: FUN_0042c708 @ 0x0042c708 */

void FUN_0042c708(void)

{
  return;
}



/* Function: FUN_0042c710 @ 0x0042c710 */

void FUN_0042c710(void)

{
  return;
}



/* Function: FUN_0042c718 @ 0x0042c718 */

void FUN_0042c718(void)

{
  return;
}



/* Function: FUN_0042c72a @ 0x0042c72a */

void FUN_0042c72a(void)

{
  return;
}



/* Function: FUN_0042c740 @ 0x0042c740 */

void __cdecl FUN_0042c740(short *param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  if (param_1 != (short *)0x0) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    sVar2 = param_1[5];
    *(uint *)(param_1 + 5) =
         CONCAT22(CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8)),
                  CONCAT11((char)param_1[6],(char)((ushort)param_1[6] >> 8)));
    sVar2 = param_1[3];
    *(uint *)(param_1 + 3) =
         CONCAT22(CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8)),
                  CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8)));
    sVar2 = param_1[9];
    *(uint *)(param_1 + 9) =
         CONCAT22(CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8)),
                  CONCAT11((char)param_1[10],(char)((ushort)param_1[10] >> 8)));
    sVar2 = param_1[7];
    *(uint *)(param_1 + 7) =
         CONCAT22(CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8)),
                  CONCAT11((char)param_1[8],(char)((ushort)param_1[8] >> 8)));
    sVar2 = param_1[0xb];
    *(uint *)(param_1 + 0xb) =
         CONCAT22(CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8)),
                  CONCAT11((char)param_1[0xc],(char)((ushort)param_1[0xc] >> 8)));
    sVar2 = 0;
    if (0 < *param_1) {
      do {
        iVar1 = (int)sVar2;
        sVar2 = sVar2 + 1;
        FUN_0044e600((undefined4 *)(param_1 + iVar1 * 0xd + 0x19));
      } while (sVar2 < *param_1);
    }
    if (*(char *)((int)param_1 + 3) != '\0') {
      FUN_00457980(*(undefined2 **)(param_1 + 0xf),param_2);
    }
    if ((char)param_1[2] != '\0') {
      FUN_00462720(*(short **)(param_1 + 0x13),param_2);
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}



/* Function: FUN_0042c860 @ 0x0042c860 */

ushort * __cdecl FUN_0042c860(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  if (puVar1 != (ushort *)0x0) {
    FUN_0042c740((short *)puVar1,'\0');
    if (*(char *)((int)puVar1 + 3) != '\0') {
      *(undefined1 *)((int)puVar1 + 3) = 0;
    }
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    if ((char)puVar1[2] != '\0') {
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      return puVar1;
    }
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
  }
  return puVar1;
}



/* Function: FUN_0042c8d0 @ 0x0042c8d0 */

void __cdecl FUN_0042c8d0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if (param_3 != 0) {
    if (*(char *)(param_3 + 3) != '\0') {
      FUN_0046f5f0(*(uint *)(param_3 + 0x1e));
    }
    if (*(char *)(param_3 + 4) != '\0') {
      FUN_0046f5f0(*(uint *)(param_3 + 0x26));
    }
    FUN_0046f5f0(param_3);
  }
  return;
}



/* Function: FUN_0042c910 @ 0x0042c910 */

void FUN_0042c910(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873d8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042c960 @ 0x0042c960 */

void FUN_0042c960(void)

{
  return;
}



/* Function: FUN_0042c980 @ 0x0042c980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c980(void)

{
  _DAT_004873e6 = 0;
  _DAT_004873e4 = 0;
  return;
}



/* Function: FUN_0042c990 @ 0x0042c990 */

void FUN_0042c990(void)

{
  _atexit(FUN_0042c9a0);
  return;
}



/* Function: FUN_0042c9a0 @ 0x0042c9a0 */

void FUN_0042c9a0(void)

{
  return;
}



/* Function: FUN_0042c9c0 @ 0x0042c9c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c9c0(void)

{
  _DAT_004873e2 = 0;
  _DAT_004873e0 = 0;
  return;
}



/* Function: FUN_0042c9d0 @ 0x0042c9d0 */

void FUN_0042c9d0(void)

{
  _atexit(FUN_0042c9e0);
  return;
}



/* Function: FUN_0042c9e0 @ 0x0042c9e0 */

void FUN_0042c9e0(void)

{
  return;
}



/* Function: FUN_0042ca00 @ 0x0042ca00 */

void FUN_0042ca00(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873e8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042ca40 @ 0x0042ca40 */

void FUN_0042ca40(void)

{
  _atexit(FUN_0042ca50);
  return;
}



/* Function: FUN_0042ca50 @ 0x0042ca50 */

void FUN_0042ca50(void)

{
  return;
}



/* Function: FUN_0042ca70 @ 0x0042ca70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ca70(void)

{
  _DAT_004873f6 = 0;
  _DAT_004873f4 = 0;
  return;
}



/* Function: FUN_0042ca80 @ 0x0042ca80 */

void FUN_0042ca80(void)

{
  _atexit(FUN_0042ca90);
  return;
}



/* Function: FUN_0042ca90 @ 0x0042ca90 */

void FUN_0042ca90(void)

{
  return;
}



/* Function: FUN_0042cab0 @ 0x0042cab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cab0(void)

{
  _DAT_004873f2 = 0;
  _DAT_004873f0 = 0;
  return;
}



/* Function: FUN_0042cac0 @ 0x0042cac0 */

void FUN_0042cac0(void)

{
  _atexit(FUN_0042cad0);
  return;
}



/* Function: FUN_0042cad0 @ 0x0042cad0 */

void FUN_0042cad0(void)

{
  return;
}



/* Function: FUN_0042caf0 @ 0x0042caf0 */

void FUN_0042caf0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004873f8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042cb30 @ 0x0042cb30 */

void FUN_0042cb30(void)

{
  _atexit(FUN_0042cb40);
  return;
}



/* Function: FUN_0042cb40 @ 0x0042cb40 */

void FUN_0042cb40(void)

{
  return;
}



/* Function: FUN_0042cb60 @ 0x0042cb60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cb60(void)

{
  _DAT_00487406 = 0;
  _DAT_00487404 = 0;
  return;
}



/* Function: FUN_0042cb70 @ 0x0042cb70 */

void FUN_0042cb70(void)

{
  _atexit(FUN_0042cb80);
  return;
}



/* Function: FUN_0042cb80 @ 0x0042cb80 */

void FUN_0042cb80(void)

{
  return;
}



/* Function: FUN_0042cba0 @ 0x0042cba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cba0(void)

{
  _DAT_00487402 = 0;
  _DAT_00487400 = 0;
  return;
}



/* Function: FUN_0042cbb0 @ 0x0042cbb0 */

void FUN_0042cbb0(void)

{
  _atexit(FUN_0042cbc0);
  return;
}



/* Function: FUN_0042cbc0 @ 0x0042cbc0 */

void FUN_0042cbc0(void)

{
  return;
}



/* Function: FUN_0042cbd0 @ 0x0042cbd0 */

undefined4 * __fastcall FUN_0042cbd0(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042cccf;
  *unaff_FS_OFFSET = &local_10;
  FUN_00403370(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00473d00;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  *(undefined1 *)((int)param_1 + 0x196) = 0;
  puVar3 = param_1 + 0x36;
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)param_1 + 0x17a) = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  DVar1 = GetTickCount();
  *(undefined2 *)((int)param_1 + 0x17a) = 0;
  *(DWORD *)((int)param_1 + 0x176) = DVar1;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)((int)param_1 + 0x17e) = 0;
  *(undefined4 *)((int)param_1 + 0x182) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 0x186) = 0;
  *(undefined4 *)((int)param_1 + 0x18a) = 0;
  *(undefined4 *)((int)param_1 + 0x18e) = 0;
  *(undefined4 *)((int)param_1 + 0x192) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0042ccf0 @ 0x0042ccf0 */

undefined4 * __thiscall FUN_0042ccf0(void *this,byte param_1)

{
  FUN_0042cd10(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0042cd10 @ 0x0042cd10 */

void __fastcall FUN_0042cd10(undefined4 *param_1)

{
    /* TODO: 32 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042ce11 @ 0x0042ce11 */

void FUN_0042ce11(void)

{
  int unaff_EBP;
  
  FUN_00403580(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042ce20 @ 0x0042ce20 */

undefined4 * __thiscall FUN_0042ce20(void *this,int param_1)

{
    /* TODO: 69 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042d069 @ 0x0042d069 */

void FUN_0042d069(void)

{
  FUN_0042d080();
  return;
}



/* Function: FUN_0042d080 @ 0x0042d080 */

void FUN_0042d080(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042d0b7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0042d0c1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0042d0c1 @ 0x0042d0c1 */

void FUN_0042d0c1(void)

{
  int unaff_EBP;
  
  FUN_00454b00(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042d129 @ 0x0042d129 */

void FUN_0042d129(void)

{
  FUN_0042d080();
  return;
}



/* Function: FUN_0042d199 @ 0x0042d199 */

void FUN_0042d199(void)

{
  FUN_0042d080();
  return;
}



/* Function: FUN_0042d1c0 @ 0x0042d1c0 */

void __thiscall FUN_0042d1c0(void *this,int param_1)

{
    /* TODO: 66 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042d3c0 @ 0x0042d3c0 */

void __fastcall FUN_0042d3c0(void *param_1)

{
  DWORD DVar1;
  
  if (*(undefined4 **)((int)param_1 + 0xd4) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)((int)param_1 + 0xd4))();
  }
  FUN_0041cad0(param_1);
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x176) = DVar1;
  return;
}



/* Function: FUN_0042d3f0 @ 0x0042d3f0 */

void __thiscall FUN_0042d3f0(void *this,int param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042d590 @ 0x0042d590 */

void __fastcall FUN_0042d590(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x158) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x158))();
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x16) = 0;
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x16) = 0;
  }
  return;
}



/* Function: FUN_0042d5d0 @ 0x0042d5d0 */

void __fastcall FUN_0042d5d0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x158) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x158))();
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}



/* Function: FUN_0042d73a @ 0x0042d73a */

void FUN_0042d73a(void)

{
  return;
}



/* Function: FUN_0042d7b9 @ 0x0042d7b9 */

void FUN_0042d7b9(void)

{
  FUN_0042d080();
  return;
}



/* Function: FUN_0042d7d0 @ 0x0042d7d0 */

void __fastcall FUN_0042d7d0(int param_1)

{
  void *this;
  
  if ((*(int *)(param_1 + 0x154) != 0) && (*(char *)(param_1 + 0x196) == '\0')) {
    FUN_0040e270(DAT_004897c0,0xb);
    FUN_0041dad0(*(void **)(param_1 + 0x154),1,'\0');
    FUN_0041da90(*(void **)(param_1 + 0x154),1);
    FUN_0041dd40(*(void **)(param_1 + 0x154));
    *(undefined2 *)(*(int *)(param_1 + 0x154) + 0x112) = 1;
    this = *(void **)(param_1 + 0x154);
    *(undefined1 *)((int)this + 0x114) = 0;
    *(undefined1 *)((int)this + 0x116) = 1;
    *(undefined1 *)((int)this + 0x115) = 0;
    *(undefined1 *)((int)this + 0x117) = 0;
    FUN_00405e10(this,0,'\0');
    *(undefined1 *)(param_1 + 0x196) = 1;
  }
  return;
}



/* Function: FUN_0042d860 @ 0x0042d860 */

void __fastcall FUN_0042d860(int param_1)

{
  void *this;
  
  if ((*(int *)(param_1 + 0x154) != 0) && (*(char *)(param_1 + 0x196) != '\0')) {
    FUN_0040e270(DAT_004897c0,0xc);
    FUN_0041da90(*(void **)(param_1 + 0x154),1);
    *(undefined2 *)(*(int *)(param_1 + 0x154) + 0x112) = 0;
    this = *(void **)(param_1 + 0x154);
    *(undefined1 *)((int)this + 0x114) = 0;
    *(undefined1 *)((int)this + 0x116) = 1;
    *(undefined1 *)((int)this + 0x115) = 0;
    *(undefined1 *)((int)this + 0x117) = 0;
    FUN_00405e10(this,2,'\0');
    FUN_0041dad0(*(void **)(param_1 + 0x154),0,'\0');
    FUN_0041da90(*(void **)(param_1 + 0x154),0);
    *(undefined1 *)(param_1 + 0x196) = 0;
  }
  return;
}



/* Function: FUN_0042d8f0 @ 0x0042d8f0 */

void FUN_0042d8f0(int *param_1,int param_2,ushort *param_3,short param_4,short param_5)

{
  ushort uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (param_4 == -1) {
      uVar1 = *param_3;
      iVar2 = rand();
      param_4 = (short)((int)(iVar2 * (uint)uVar1) / 0x7fff);
    }
    else if (param_5 != -1) {
      iVar2 = rand();
      param_4 = param_4 + (short)((int)(iVar2 * (uint)(ushort)(param_5 - param_4)) / 0x7fff);
    }
    param_2 = *(int *)(param_3 + param_4 * 2 + 1);
  }
  *param_1 = param_2;
  return;
}



/* Function: FUN_0042d970 @ 0x0042d970 */

void __fastcall FUN_0042d970(int param_1)

{
  bool bVar1;
  undefined4 extraout_var;
  int *piVar2;
  
  bVar1 = FUN_0045d930(*(int *)(param_1 + 0x18e));
  if ((short)CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00434490(*(int *)(param_1 + 0x18e));
    *(undefined4 *)(param_1 + 0x18e) = 0;
  }
  piVar2 = (int *)(param_1 + 0x192);
  if (*piVar2 != 0) {
    FUN_00433270(piVar2);
    *piVar2 = 0;
  }
  return;
}



/* Function: FUN_0042d9c0 @ 0x0042d9c0 */

void __fastcall FUN_0042d9c0(int param_1)

{
  FUN_0042d970(param_1);
  FUN_00404a80(param_1);
  FUN_0042b5f0();
  return;
}



/* Function: FUN_0042d9e0 @ 0x0042d9e0 */

void FUN_0042d9e0(void)

{
  FUN_0042b3e0();
  return;
}



/* Function: FUN_0042d9f0 @ 0x0042d9f0 */

void __thiscall FUN_0042d9f0(void *this,int param_1,ushort *param_2,short param_3,short param_4)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042da60 @ 0x0042da60 */

undefined1 __thiscall
FUN_0042da60(void *this,int param_1,ushort *param_2,short param_3,short param_4)

{
    /* TODO: 17 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042dae0 @ 0x0042dae0 */

undefined1 __thiscall
FUN_0042dae0(void *this,int param_1,ushort *param_2,short param_3,short param_4)

{
    /* TODO: 12 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042db40 @ 0x0042db40 */

void __fastcall FUN_0042db40(int param_1)

{
  if (*(int *)(param_1 + 0x18e) != 0) {
    FUN_00434490(*(int *)(param_1 + 0x18e));
  }
  return;
}



/* Function: FUN_0042db60 @ 0x0042db60 */

void FUN_0042db60(int param_1,ushort *param_2,short param_3,short param_4)

{
    /* TODO: 7 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042dba0 @ 0x0042dba0 */

void __thiscall FUN_0042dba0(void *this,int param_1)

{
    /* TODO: 138 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042df10 @ 0x0042df10 */

void __thiscall
FUN_0042df10(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
    /* TODO: 34 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042e002 @ 0x0042e002 */

void FUN_0042e002(void)

{
  return;
}



/* Function: FUN_0042e014 @ 0x0042e014 */

void FUN_0042e014(void)

{
  return;
}



/* Function: FUN_0042e020 @ 0x0042e020 */

undefined4 __fastcall FUN_0042e020(void *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_ffffffc0;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042e125;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  if (*(int *)((int)param_1 + 0x16c) == 0) {
    local_2c = &ghidra_stack_ffffffc0;
    uVar2 = 0x32;
    FUN_00401050(&ghidra_stack_ffffffc0,0x32);
    local_28 = &ghidra_stack_ffffffbc;
    FUN_00401050(&ghidra_stack_ffffffbc,0x140);
    FUN_00401060(local_34,uVar2,in_stack_ffffffc0);
    local_8 = 0;
    local_24 = &ghidra_stack_ffffffc0;
    iVar3 = 0x28;
    FUN_00401050(&ghidra_stack_ffffffc0,0x28);
    local_20 = &ghidra_stack_ffffffbc;
    FUN_00401050(&ghidra_stack_ffffffbc,0x28);
    FUN_00401060(local_3c,iVar3,in_stack_ffffffc0);
    local_18 = &ghidra_stack_ffffffbc;
    puVar1 = local_3c;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    uVar2 = 0x42e0bb;
    FUN_004090c0(&ghidra_stack_ffffffbc,puVar1);
    local_1c = &ghidra_stack_ffffffb4;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
    FUN_004090c0(&ghidra_stack_ffffffb4,local_34);
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0042df10(local_14,uVar2,puVar1,iVar3,in_stack_ffffffc0);
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    FUN_0042e11d();
    local_8 = 0xffffffff;
    FUN_0042e12f();
  }
  *unaff_FS_OFFSET = local_10;
  return *(undefined4 *)((int)local_14 + 0x16c);
}



/* Function: FUN_0042e11d @ 0x0042e11d */

void FUN_0042e11d(void)

{
  return;
}



/* Function: FUN_0042e12f @ 0x0042e12f */

void FUN_0042e12f(void)

{
  return;
}



/* Function: FUN_0042e140 @ 0x0042e140 */

void __fastcall FUN_0042e140(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x16c) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x16c))();
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  FUN_00403aa0();
  return;
}



/* Function: FUN_0042e170 @ 0x0042e170 */

bool __thiscall FUN_0042e170(void *this,int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = *(int *)((intptr_t)this + 0x176);
  DVar2 = GetTickCount();
  return (uint)(iVar1 + param_1) < DVar2;
}



/* Function: FUN_0042e190 @ 0x0042e190 */

uint __fastcall FUN_0042e190(void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  uint in_EAX;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_var;
  DWORD DVar8;
  undefined4 extraout_var_00;
  
  if ((DAT_0048345c != 0) && (*(char *)((int)param_1 + 0x174) != '\0')) {
    uVar6 = FUN_0040e580();
    iVar7 = *(short *)(DAT_0048345c + 0x92 + (short)uVar6 * 2) * 10 + *(int *)((int)param_1 + 0x170)
    ;
    sVar1 = *(short *)(iVar7 + -6);
    sVar2 = *(short *)(iVar7 + -10);
    sVar3 = *(short *)(iVar7 + -4);
    sVar4 = *(short *)(iVar7 + -8);
    bVar5 = FUN_0045d930(*(int *)((int)param_1 + 0x18e));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if ((short)in_EAX != 0) {
      DVar8 = GetTickCount();
      *(DWORD *)((int)param_1 + 0x176) = DVar8;
      return DVar8 & 0xffffff00;
    }
    if ((sVar2 != -1) &&
       (in_EAX = (int)*(short *)((int)param_1 + 0x17a) - (int)*(short *)((int)param_1 + 0x17e),
       (int)sVar2 <= (int)in_EAX)) {
      if (*(ushort **)((int)param_1 + 0x18a) != (ushort *)0x0) {
        FUN_0042d9f0(param_1,0,*(ushort **)((int)param_1 + 0x18a),-1,-1);
      }
      DVar8 = GetTickCount();
      *(undefined2 *)((int)param_1 + 0x17e) = *(undefined2 *)((int)param_1 + 0x17a);
      *(DWORD *)((int)param_1 + 0x176) = DVar8;
      return CONCAT31(DVar8 >> 8,1);
    }
    if ((sVar3 != -1) &&
       (in_EAX = (int)*(short *)((int)param_1 + 0x17c) - (int)*(short *)((int)param_1 + 0x180),
       (int)sVar3 <= (int)in_EAX)) {
      if (*(ushort **)((int)param_1 + 0x186) != (ushort *)0x0) {
        FUN_0042d9f0(param_1,0,*(ushort **)((int)param_1 + 0x186),-1,-1);
      }
      DVar8 = GetTickCount();
      *(undefined2 *)((int)param_1 + 0x180) = *(undefined2 *)((int)param_1 + 0x17c);
      *(DWORD *)((int)param_1 + 0x176) = DVar8;
      return CONCAT31(DVar8 >> 8,1);
    }
    if ((sVar4 != -1) &&
       (in_EAX = (int)*(short *)((int)param_1 + 0x17a) - (int)*(short *)((int)param_1 + 0x17e),
       (int)sVar4 <= (int)in_EAX)) {
      if (*(ushort **)((int)param_1 + 0x182) != (ushort *)0x0) {
        FUN_0042d9f0(param_1,0,*(ushort **)((int)param_1 + 0x182),-1,-1);
      }
      DVar8 = GetTickCount();
      *(undefined2 *)((int)param_1 + 0x17e) = *(undefined2 *)((int)param_1 + 0x17a);
      *(DWORD *)((int)param_1 + 0x176) = DVar8;
      return CONCAT31(DVar8 >> 8,1);
    }
    if (sVar1 != -1) {
      bVar5 = FUN_0042e170(param_1,sVar1 * 1000);
      in_EAX = CONCAT31(extraout_var_00,bVar5);
      if (bVar5) {
        if (*(ushort **)((int)param_1 + 0x182) != (ushort *)0x0) {
          FUN_0042d9f0(param_1,0,*(ushort **)((int)param_1 + 0x182),-1,-1);
        }
        DVar8 = GetTickCount();
        *(DWORD *)((int)param_1 + 0x176) = DVar8;
        return CONCAT31(DVar8 >> 8,1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0042e3a0 @ 0x0042e3a0 */

void __fastcall FUN_0042e3a0(int param_1)

{
  FUN_0042db40(param_1);
  if (*(undefined4 **)(param_1 + 0x158) != (undefined4 *)0x0) {
    (**(void (**)(void))**(undefined4 **)(param_1 + 0x158))();
  }
  if (*(int **)(param_1 + 0x150) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x150) + 0x8c))();
  }
  if (*(int **)(param_1 + 0x154) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x154) + 0x8c))();
  }
  if (*(int **)(param_1 + 0x15c) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x15c) + 0x8c))();
  }
  if (*(int **)(param_1 + 0x160) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x160) + 0x8c))();
  }
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x164) + 0x8c))();
  }
  if (*(int **)(param_1 + 0x168) != (int *)0x0) {
    (**(void (**)(void))(**(int **)(param_1 + 0x168) + 0x8c))();
  }
  FUN_0041e0e0(param_1);
  return;
}



/* Function: FUN_0042e440 @ 0x0042e440 */

void FUN_0042e440(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487410,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042e490 @ 0x0042e490 */

void FUN_0042e490(void)

{
  return;
}



/* Function: FUN_0042e4b0 @ 0x0042e4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e4b0(void)

{
  _DAT_00487422 = 0;
  _DAT_00487420 = 0;
  return;
}



/* Function: FUN_0042e4c0 @ 0x0042e4c0 */

void FUN_0042e4c0(void)

{
  _atexit(FUN_0042e4d0);
  return;
}



/* Function: FUN_0042e4d0 @ 0x0042e4d0 */

void FUN_0042e4d0(void)

{
  return;
}



/* Function: FUN_0042e4f0 @ 0x0042e4f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e4f0(void)

{
  _DAT_0048741e = 0;
  _DAT_0048741c = 0;
  return;
}



/* Function: FUN_0042e500 @ 0x0042e500 */

void FUN_0042e500(void)

{
  _atexit(FUN_0042e510);
  return;
}



/* Function: FUN_0042e510 @ 0x0042e510 */

void FUN_0042e510(void)

{
  return;
}



/* Function: FUN_0042e560 @ 0x0042e560 */

undefined4 * __fastcall FUN_0042e560(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042e5c2;
  *unaff_FS_OFFSET = &local_10;
  FUN_004534e0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_004740c8;
  FUN_0041da90(param_1,1);
  *(undefined1 *)((int)param_1 + 0x10a) = 1;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0042e639 @ 0x0042e639 */

void FUN_0042e639(void)

{
  FUN_00427c00();
  return;
}



/* Function: FUN_0042e660 @ 0x0042e660 */

void __fastcall FUN_0042e660(void *param_1)

{
    /* TODO: 68 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042e850 @ 0x0042e850 */

undefined4 * __fastcall FUN_0042e850(undefined4 *param_1)

{
    /* TODO: 30 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042e920 @ 0x0042e920 */

undefined4 * __thiscall FUN_0042e920(void *this,byte param_1)

{
  FUN_0042e940(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0042e940 @ 0x0042e940 */

void __fastcall FUN_0042e940(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0042e9a7;
  *param_1 = &PTR_FUN_00474178;
  *unaff_FS_OFFSET = &local_10;
  DAT_00487408 = 1;
  local_8 = 0;
  FUN_0042e999();
  local_8 = 0xffffffff;
  FUN_0042e9b1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0042e999 @ 0x0042e999 */

void FUN_0042e999(void)

{
  int unaff_EBP;
  
  FUN_0042f0a0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1a2));
  return;
}



/* Function: FUN_0042e9b1 @ 0x0042e9b1 */

void FUN_0042e9b1(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0042ea90 @ 0x0042ea90 */

void __fastcall FUN_0042ea90(void *param_1)

{
  DWORD DVar1;
  
  FUN_004048d0(param_1);
  DVar1 = GetTickCount();
  *(undefined2 *)((int)param_1 + 0x19c) = 2;
  *(DWORD *)((int)param_1 + 0x1b8) = DVar1;
  return;
}



/* Function: FUN_0042eab0 @ 0x0042eab0 */

void __fastcall FUN_0042eab0(int param_1)

{
  short sVar1;
  DWORD DVar2;
  
  FUN_00404b00(param_1);
  if (*(char *)(DAT_004896b0 + 0x27) == '\0') {
    sVar1 = *(short *)(param_1 + 0x19c);
    if (sVar1 == 2) {
      DVar2 = GetTickCount();
      if (*(int *)(param_1 + 0x1b8) + 5000U < DVar2) {
        *(undefined2 *)(param_1 + 0x19c) = 3;
        FUN_00407df0(*(void **)(param_1 + 0x19e),7,0x758000d);
        DVar2 = GetTickCount();
        *(DWORD *)(param_1 + 0x1b8) = DVar2;
        return;
      }
    }
    else if (sVar1 == 3) {
      DVar2 = GetTickCount();
      if (*(int *)(param_1 + 0x1b8) + 15000U < DVar2) {
        *(undefined2 *)(param_1 + 0x19c) = 4;
        return;
      }
    }
    else {
      if (sVar1 != 4) {
        return;
      }
      *(undefined2 *)(param_1 + 0x19c) = 5;
      FUN_0042e660(*(void **)(param_1 + 0x19e));
    }
  }
  return;
}



/* Function: FUN_0042eca0 @ 0x0042eca0 */

void FUN_0042eca0(void)

{
    /* TODO: 153 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042f059 @ 0x0042f059 */

void FUN_0042f059(void)

{
  return;
}



/* Function: FUN_0042f061 @ 0x0042f061 */

void FUN_0042f061(void)

{
  return;
}



/* Function: FUN_0042f071 @ 0x0042f071 */

void FUN_0042f071(void)

{
  return;
}



/* Function: FUN_0042f079 @ 0x0042f079 */

void FUN_0042f079(void)

{
  return;
}



/* Function: FUN_0042f081 @ 0x0042f081 */

void FUN_0042f081(void)

{
  return;
}



/* Function: FUN_0042f093 @ 0x0042f093 */

void FUN_0042f093(void)

{
  return;
}



/* Function: FUN_0042f0a0 @ 0x0042f0a0 */

void __fastcall FUN_0042f0a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00474170;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_0042f120 @ 0x0042f120 */

void * __thiscall FUN_0042f120(void *this,short param_1)

{
  FUN_0042f180(this,param_1);
  return this;
}



/* Function: FUN_0042f140 @ 0x0042f140 */

void * __thiscall
FUN_0042f140(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  FUN_0042f180(this,param_4);
  FUN_0042f1e0(this,param_1,param_2);
  return this;
}



/* Function: thunk_FUN_0042f1c0 @ 0x0042f170 */

void __fastcall thunk_FUN_0042f1c0(char *param_1)

{
  if ((*param_1 != '\0') && (*(uint *)(param_1 + 4) != 0)) {
    FUN_0046f5f0(*(uint *)(param_1 + 4));
    *param_1 = '\0';
  }
  return;
}



/* Function: FUN_0042f180 @ 0x0042f180 */

void __thiscall FUN_0042f180(void *this,short param_1)

{
  ushort *puVar1;
  LPCVOID pvVar2;
  
  *(short *)((intptr_t)this + 2) = param_1;
  *(undefined4 *)((intptr_t)this + 4) = 0;
  pvVar2 = DAT_00483df4;
  if (DAT_004833cc != (LPCVOID)0x0) {
    pvVar2 = DAT_004833cc;
  }
  puVar1 = FUN_0046f060(pvVar2,(int)param_1,5);
  *(ushort **)((intptr_t)this + 4) = puVar1;
  *(undefined1 *)this = 1;
  return;
}



/* Function: FUN_0042f1c0 @ 0x0042f1c0 */

void __fastcall FUN_0042f1c0(char *param_1)

{
  if ((*param_1 != '\0') && (*(uint *)(param_1 + 4) != 0)) {
    FUN_0046f5f0(*(uint *)(param_1 + 4));
    *param_1 = '\0';
  }
  return;
}



/* Function: FUN_0042f1e0 @ 0x0042f1e0 */

void __thiscall FUN_0042f1e0(void *this,undefined4 *param_1,undefined4 param_2)

{
    /* TODO: 55 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042f336 @ 0x0042f336 */

void FUN_0042f336(void)

{
  int unaff_EBP;
  
  FUN_00451f60((undefined4 *)(unaff_EBP + -0x42c));
  return;
}



/* Function: FUN_0042f350 @ 0x0042f350 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_0042f350(void *this,char param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((intptr_t)this + 4);
  if (iVar2 != 0) {
    if (param_1 == '\0') {
      uVar1 = *(undefined2 *)((intptr_t)this + 2);
      *(undefined2 *)((intptr_t)this + 2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
      *(int *)((intptr_t)this + 4) =
           CONCAT22(CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8)),
                    CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18))) + (intptr_t)this;
    }
    else {
      uVar1 = *(undefined2 *)((intptr_t)this + 2);
      *(undefined2 *)((intptr_t)this + 2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
      iVar2 = *(int *)((intptr_t)this + 4) - (intptr_t)this;
      *(uint *)((intptr_t)this + 4) =
           CONCAT22(CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8)),
                    CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18)));
    }
  }
  return;
}



/* Function: FUN_0042f3f0 @ 0x0042f3f0 */

void __thiscall FUN_0042f3f0(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined2 *)((intptr_t)this + 2) = param_2;
  *(undefined1 *)this = 0;
  *(undefined4 *)((intptr_t)this + 4) = param_1;
  return;
}



/* Function: FUN_0042f420 @ 0x0042f420 */

void FUN_0042f420(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487428,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042f470 @ 0x0042f470 */

void FUN_0042f470(void)

{
  return;
}



/* Function: FUN_0042f490 @ 0x0042f490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f490(void)

{
  _DAT_00487436 = 0;
  _DAT_00487434 = 0;
  return;
}



/* Function: FUN_0042f4a0 @ 0x0042f4a0 */

void FUN_0042f4a0(void)

{
  _atexit(FUN_0042f4b0);
  return;
}



/* Function: FUN_0042f4b0 @ 0x0042f4b0 */

void FUN_0042f4b0(void)

{
  return;
}



/* Function: FUN_0042f4d0 @ 0x0042f4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f4d0(void)

{
  _DAT_00487432 = 0;
  _DAT_00487430 = 0;
  return;
}



/* Function: FUN_0042f4e0 @ 0x0042f4e0 */

void FUN_0042f4e0(void)

{
  _atexit(FUN_0042f4f0);
  return;
}



/* Function: FUN_0042f4f0 @ 0x0042f4f0 */

void FUN_0042f4f0(void)

{
  return;
}



/* Function: FUN_0042f510 @ 0x0042f510 */

void FUN_0042f510(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487438,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042f550 @ 0x0042f550 */

void FUN_0042f550(void)

{
  _atexit(FUN_0042f560);
  return;
}



/* Function: FUN_0042f560 @ 0x0042f560 */

void FUN_0042f560(void)

{
  return;
}



/* Function: FUN_0042f580 @ 0x0042f580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f580(void)

{
  _DAT_00487446 = 0;
  _DAT_00487444 = 0;
  return;
}



/* Function: FUN_0042f590 @ 0x0042f590 */

void FUN_0042f590(void)

{
  _atexit(FUN_0042f5a0);
  return;
}



/* Function: FUN_0042f5a0 @ 0x0042f5a0 */

void FUN_0042f5a0(void)

{
  return;
}



/* Function: FUN_0042f5c0 @ 0x0042f5c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f5c0(void)

{
  _DAT_00487442 = 0;
  _DAT_00487440 = 0;
  return;
}



/* Function: FUN_0042f5d0 @ 0x0042f5d0 */

void FUN_0042f5d0(void)

{
  _atexit(FUN_0042f5e0);
  return;
}



/* Function: FUN_0042f5e0 @ 0x0042f5e0 */

void FUN_0042f5e0(void)

{
  return;
}



/* Function: FUN_0042f600 @ 0x0042f600 */

void FUN_0042f600(void)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487448,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0042f640 @ 0x0042f640 */

void FUN_0042f640(void)

{
  _atexit(FUN_0042f650);
  return;
}



/* Function: FUN_0042f650 @ 0x0042f650 */

void FUN_0042f650(void)

{
  return;
}



/* Function: FUN_0042f670 @ 0x0042f670 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f670(void)

{
  _DAT_00487456 = 0;
  _DAT_00487454 = 0;
  return;
}



/* Function: FUN_0042f680 @ 0x0042f680 */

void FUN_0042f680(void)

{
  _atexit(FUN_0042f690);
  return;
}



/* Function: FUN_0042f690 @ 0x0042f690 */

void FUN_0042f690(void)

{
  return;
}



/* Function: FUN_0042f6b0 @ 0x0042f6b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f6b0(void)

{
  _DAT_00487452 = 0;
  _DAT_00487450 = 0;
  return;
}



/* Function: FUN_0042f6c0 @ 0x0042f6c0 */

void FUN_0042f6c0(void)

{
  _atexit(FUN_0042f6d0);
  return;
}



/* Function: FUN_0042f6d0 @ 0x0042f6d0 */

void FUN_0042f6d0(void)

{
  return;
}



/* Function: FUN_0042f6f0 @ 0x0042f6f0 */

void FUN_0042f6f0(void)

{
    /* TODO: 4 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042f710 @ 0x0042f710 */

void FUN_0042f710(void)

{
  _atexit(FUN_0042f720);
  return;
}



/* Function: FUN_0042f720 @ 0x0042f720 */

void FUN_0042f720(void)

{
    /* TODO: 3 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042f740 @ 0x0042f740 */

void __fastcall FUN_0042f740(void *param_1)

{
    /* TODO: 26 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042f7c1 @ 0x0042f7c1 */

void FUN_0042f7c1(void)

{
  return;
}



/* Function: FUN_0042f7d0 @ 0x0042f7d0 */

void __fastcall FUN_0042f7d0(void *param_1)

{
  FUN_0042f7f0((int)param_1);
  FUN_0042f740(param_1);
  return;
}



/* Function: FUN_0042f7f0 @ 0x0042f7f0 */

void __fastcall FUN_0042f7f0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042f7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(void (**)(void))(*(int *)(param_1 + 0x2a) + 0x58))();
  return;
}



/* Function: FUN_0042f800 @ 0x0042f800
 * Struct types: GameScreen (this)
 * Blits draw_context to screen DC at the given rect.
 */

void __thiscall FUN_0042f800(GameScreen *this,short *param_1)

{
  FUN_004247b0(&this->draw_context,this->hdc_screen,param_1);
  return;
}



/* Function: FUN_0042f820 @ 0x0042f820
 * Struct types: GameScreen (this)
 * Sets active DC to the back buffer DC.
 */

void __fastcall FUN_0042f820(GameScreen *this)

{
  this->hdc_active = this->hdc_buffer;
  return;
}



/* Function: FUN_0042f830 @ 0x0042f830
 * Struct types: GameScreen (this)
 * Sets active DC to the screen DC.
 */

void __fastcall FUN_0042f830(GameScreen *this)

{
  this->hdc_active = this->hdc_screen;
  return;
}



/* Function: FUN_0042f840 @ 0x0042f840 */

undefined4 * __fastcall FUN_0042f840(undefined4 *param_1)

{
    /* TODO: 62 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0042f990 @ 0x0042f990 */

undefined4 * __thiscall FUN_0042f990(void *this,byte param_1)

{
  FUN_0042f9b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0042f9b0 @ 0x0042f9b0 */

void __fastcall FUN_0042f9b0(undefined4 *param_1)

{
    /* TODO: 24 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042fa22 @ 0x0042fa22 */

void FUN_0042fa22(void)

{
  return;
}



/* Function: FUN_0042fa30 @ 0x0042fa30 */

void FUN_0042fa30(void)

{
  int unaff_EBP;
  
  FUN_004244b0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2a));
  return;
}



/* Function: FUN_0042fa45 @ 0x0042fa45 */

void FUN_0042fa45(void)

{
  return;
}



/* Function: FUN_0042fa50 @ 0x0042fa50 */

void __thiscall FUN_0042fa50(void *this,short *param_1,int param_2)

{
    /* TODO: 71 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0042fc70 @ 0x0042fc70
 * Struct types: GameScreen (this)
 * Destroys the GameScreen — releases screen DC, destroys window.
 */

void __fastcall FUN_0042fc70(GameScreen *this)

{
  FUN_0042f7f0(this);
  if (this->hdc_screen != NULL) {
    ReleaseDC(this->hwnd,this->hdc_screen);
    this->hdc_screen = NULL;
  }
  if (this->hwnd != NULL) {
    DestroyWindow(this->hwnd);
    this->hwnd = NULL;
  }
  return;
}



/* Function: FUN_0042fcb0 @ 0x0042fcb0
 * Struct types: GameScreen (this)
 * Updates draw_context visibility, then refreshes screen.
 */

void __thiscall FUN_0042fcb0(GameScreen *this,undefined1 param_1)

{
  FUN_0041b150(&this->draw_context,param_1);
  FUN_00430690(this);
  return;
}



/* Function: FUN_0042fcd0 @ 0x0042fcd0 */

void FUN_0042fcd0(void)

{
  return;
}



/* Function: FUN_0042fce0 @ 0x0042fce0 */

void __cdecl FUN_0042fce0(short *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = param_1[1];
  if ((sVar1 < param_1[3]) && (*param_1 < param_1[2])) {
    iVar2 = (int)param_2;
    if (((short)(&DAT_00487462)[iVar2 * 4] < (short)(&DAT_00487466)[iVar2 * 4]) &&
       ((short)(&DAT_00487460)[iVar2 * 4] < (short)(&DAT_00487464)[iVar2 * 4])) {
      if (sVar1 < (short)(&DAT_00487462)[iVar2 * 4]) {
        (&DAT_00487462)[iVar2 * 4] = sVar1;
      }
      if ((short)(&DAT_00487466)[iVar2 * 4] < param_1[3]) {
        (&DAT_00487466)[iVar2 * 4] = param_1[3];
      }
      if (*param_1 < (short)(&DAT_00487460)[iVar2 * 4]) {
        (&DAT_00487460)[iVar2 * 4] = *param_1;
      }
      if ((short)(&DAT_00487464)[iVar2 * 4] < param_1[2]) {
        (&DAT_00487464)[iVar2 * 4] = param_1[2];
      }
    }
    else {
      (&DAT_00487462)[iVar2 * 4] = sVar1;
      (&DAT_00487460)[iVar2 * 4] = *param_1;
      (&DAT_00487466)[iVar2 * 4] = param_1[3];
      (&DAT_00487464)[iVar2 * 4] = param_1[2];
    }
  }
  FUN_0042fcd0();
  return;
}



/* Function: FUN_0042fdb0 @ 0x0042fdb0 */

void __cdecl FUN_0042fdb0(short *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if ((((DAT_004800c0 == 0) ||
       (iVar1 = DAT_004800c0 * 8, *(short *)(&DAT_0048745a + iVar1) != param_1[1])) ||
      (*(short *)(&DAT_0048745e + iVar1) != param_1[3])) ||
     ((*(short *)(&DAT_00487458 + iVar1) != *param_1 ||
      (*(short *)(&DAT_0048745c + iVar1) != param_1[2])))) {
    sVar2 = 0;
    if (0 < DAT_004800c0) {
      sVar3 = param_1[1];
      do {
        iVar1 = (int)sVar2;
        if ((((short)(&DAT_00487462)[iVar1 * 4] <= sVar3) &&
            (param_1[3] <= (short)(&DAT_00487466)[iVar1 * 4])) &&
           (((short)(&DAT_00487460)[iVar1 * 4] <= *param_1 &&
            (param_1[2] <= (short)(&DAT_00487464)[iVar1 * 4])))) {
          DAT_004800c4 = 0;
          return;
        }
        if ((((sVar3 <= (short)(&DAT_00487462)[iVar1 * 4]) &&
             ((short)(&DAT_00487466)[iVar1 * 4] <= param_1[3])) &&
            (*param_1 <= (short)(&DAT_00487460)[iVar1 * 4])) &&
           ((short)(&DAT_00487464)[iVar1 * 4] <= param_1[2])) {
          iVar1 = (int)sVar2;
          (&DAT_00487462)[iVar1 * 4] = sVar3;
          (&DAT_00487466)[iVar1 * 4] = param_1[3];
          (&DAT_00487460)[iVar1 * 4] = *param_1;
          (&DAT_00487464)[iVar1 * 4] = param_1[2];
          FUN_0042fcd0();
          DAT_004800c4 = 0;
          return;
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < DAT_004800c0);
    }
    sVar2 = 0;
    if (0 < DAT_004800c0) {
      do {
        iVar1 = (int)sVar2;
        sVar3 = (&DAT_00487460)[iVar1 * 4];
        if ((short)(&DAT_00487460)[iVar1 * 4] <= *param_1) {
          sVar3 = *param_1;
        }
        sVar4 = (&DAT_00487464)[iVar1 * 4];
        if (param_1[2] <= (short)(&DAT_00487464)[iVar1 * 4]) {
          sVar4 = param_1[2];
        }
        if (sVar3 <= sVar4) {
          sVar3 = (&DAT_00487462)[iVar1 * 4];
          if ((short)(&DAT_00487462)[iVar1 * 4] <= param_1[1]) {
            sVar3 = param_1[1];
          }
          sVar4 = (&DAT_00487466)[iVar1 * 4];
          if (param_1[3] <= (short)(&DAT_00487466)[iVar1 * 4]) {
            sVar4 = param_1[3];
          }
          if (sVar3 <= sVar4) {
            FUN_0042fce0(param_1,sVar2);
            DAT_004800c4 = 0;
            return;
          }
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < DAT_004800c0);
    }
    if (DAT_004800c0 < 0x31) {
      iVar1 = (int)DAT_004800c0;
      (&DAT_00487462)[iVar1 * 4] = param_1[1];
      (&DAT_00487466)[iVar1 * 4] = param_1[3];
      (&DAT_00487460)[iVar1 * 4] = *param_1;
      (&DAT_00487464)[iVar1 * 4] = param_1[2];
      DAT_004800c0 = DAT_004800c0 + 1;
      DAT_004800c4 = 1;
      return;
    }
    DAT_004800c4 = 0;
  }
  return;
}



/* Function: FUN_0042ffd0 @ 0x0042ffd0 */

void __cdecl FUN_0042ffd0(undefined4 param_1,short *param_2)

{
  if ((((param_2[1] == 0) && (param_2[3] == 0x280)) && (*param_2 == 0)) && (param_2[2] == 0x1e0)) {
    param_2[1] = 0;
  }
  if ((param_2[1] < param_2[3]) && (*param_2 < param_2[2])) {
    DAT_004800c4 = 1;
    FUN_0042fdb0(param_2);
  }
  return;
}



