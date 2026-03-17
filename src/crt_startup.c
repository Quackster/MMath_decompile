/*
 * crt_startup.c - CRT startup and runtime
 * Address range: 0x470000 - 0x47FFFF
 * Functions: 65
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"

/* Function: FUN_00470000 @ 0x00470000 */

void FUN_00470000(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  iVar2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (iVar2 != 0) {
    pDVar3 = FUN_00471930(0x484048,0);
    if ((pDVar3 != (DWORD *)0x0) && (DVar1 = pDVar3[1], pDVar3[1] = DVar1 - 1, DVar1 - 1 == 0)) {
      FUN_00471990(0x484048,pDVar3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  }
  return;
}



/* Function: FUN_00470050 @ 0x00470050 */

/* WARNING: Removing unreachable block (ram,0x00470061) */

undefined4 FUN_00470050(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 == 2) {
    iVar4 = 1;
  }
  else if ((iVar3 < 3) || (0xe < iVar3)) {
    iVar4 = 0;
    iVar3 = 1;
  }
  else {
    iVar4 = 0;
  }
  pcVar1 = FUN_004700b0(iVar3);
  uVar2 = FUN_004719b0(pcVar1,iVar4);
  return uVar2;
}



/* Function: FUN_004700b0 @ 0x004700b0 */

char * __fastcall FUN_004700b0(int param_1)

{
  if (param_1 == 2) {
    return "Out of memory.  Please free some memory, then choose retry.";
  }
  return &DAT_00483dfc + param_1 * 0x19;
}



/* Function: FUN_004700d0 @ 0x004700d0 */

undefined * FUN_004700d0(FARPROC param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined *puVar3;
  
  iVar2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (iVar2 != 0) {
    if ((param_1 == (FARPROC)0x0) ||
       (bVar1 = FUN_00471550(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
      puVar3 = PTR_FUN_00484048;
      PTR_FUN_00484048 = param_1;
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
    return puVar3;
  }
  return (undefined *)0x0;
}



/* Function: FUN_00470140 @ 0x00470140 */

undefined4 FUN_00470140(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x20) != -0x4153) {
    FUN_0046fd70(0,10);
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return uVar1;
}



/* Function: FUN_00470240 @ 0x00470240 */

int FUN_00470240(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((short)param_1[8] != -0x4153) {
    FUN_0046fd70(0,10);
    return -2;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    param_1[0x18] = param_1[0x18] + 1;
  }
  iVar1 = FUN_004702b0(param_1,param_2,1,0);
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) {
    param_1[0x18] = param_1[0x18] + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  }
  return iVar1;
}



/* Function: FUN_004702b0 @ 0x004702b0 */

int __fastcall FUN_004702b0(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  int local_8;
  
  if ((*param_2 == 0) && (param_4 == 0)) {
    uVar2 = 0;
    iVar3 = *param_1;
    param_2[1] = (int)param_1;
  }
  else {
    iVar3 = param_2[8];
    uVar2 = (*(ushort *)(iVar3 + 2) & 0x7000) >> 0xc;
  }
  while( true ) {
    while (iVar3 == 0) {
      uVar2 = uVar2 + 1;
      if (uVar2 == 5) {
        return 0;
      }
      iVar3 = param_1[uVar2];
    }
    puVar1 = *(undefined4 **)(iVar3 + 4);
    switch((uint)uVar2) {
    case 0:
    case 2:
      local_8 = FUN_004705d0(puVar1,param_2);
      param_3 = 1;
      break;
    case 1:
      local_8 = FUN_00470750(puVar1,param_2,param_3);
      break;
    case 3:
      local_8 = FUN_004703f0(puVar1,param_2);
      param_3 = 1;
      break;
    case 4:
      local_8 = FUN_00470490(puVar1,param_2,param_3);
    }
    if (local_8 != 0) break;
    *param_2 = 0;
    iVar3 = *(int *)(iVar3 + 8);
    if (param_1[uVar2] == iVar3) {
      iVar3 = 0;
    }
  }
  if (local_8 == -2) {
    FUN_0046fd70(*puVar1,0xb);
  }
  param_2[8] = iVar3;
  return local_8;
}



/* Function: FUN_004703f0 @ 0x004703f0 */

undefined4 __fastcall FUN_004703f0(LPCVOID param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (*param_2 != 0) {
    return 0;
  }
  *param_2 = (int)param_1 + 0x1c;
  uVar2 = FUN_00471410(param_1);
  param_2[4] = uVar2 - 0x1c;
  piVar1 = *(int **)((int)param_1 + 0x10);
  param_2[5] = (int)piVar1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != *param_2)) {
    return 0xfffffffe;
  }
  if (*(int *)((int)param_1 + 0x10) == 0) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (*(uint *)(*(int *)((int)param_1 + 0x10) + 4) & 0xff0000) >> 0x10;
  }
  param_2[3] = 1;
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    if (*(char *)((int)param_1 + 0x15) != '\x02') {
      return 0xfffffffe;
    }
    param_2[2] = 2;
    return 1;
  }
  param_2[2] = 4;
  return 1;
}



/* Function: FUN_00470490 @ 0x00470490 */

undefined4 __fastcall FUN_00470490(LPCVOID param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 extraout_var;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar3 + 4 + *(char *)(iVar3 + -1) * 4);
    if (((*(int **)((int)param_1 + 0x14) != piVar4) && (piVar4 < (int *)((int)param_1 + 0x1cU))) ||
       (bVar6 = *(int **)((int)param_1 + 0x10) == piVar4, *(int **)((int)param_1 + 0x10) < piVar4))
    {
      return 0xfffffffe;
    }
LAB_0047050b:
    if (bVar6) {
      return 0;
    }
    cVar1 = *(char *)((int)piVar4 + -1);
    if (0x3f < (uint)(int)cVar1) {
      return 0xfffffffe;
    }
    *param_2 = (int)piVar4;
    param_2[4] = cVar1 * 4 + 3;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[2] = 1;
    if (param_3 != 0) {
      iVar3 = FUN_00470580(param_2[1],piVar4);
      param_2[3] = iVar3;
      if (iVar3 == -1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
  uVar5 = (uint)(ushort)(((short)*(undefined4 *)((int)param_1 + 0x14) - (short)param_1) - 1);
  if (uVar5 < 0x10000) {
    bVar6 = FUN_00471450(param_1,uVar5,0x1002);
    if (CONCAT31(extraout_var,bVar6) != 0) {
      uVar2 = FUN_00471410(param_1);
      if (uVar5 <= uVar2 - 1) {
        piVar4 = (int *)((int)param_1 + 0x1c);
        if ((piVar4 <= *(int **)((int)param_1 + 0x10)) &&
           (*(int **)((int)param_1 + 0x10) <= *(int **)((int)param_1 + 0x14))) {
          bVar6 = *(int **)((int)param_1 + 0x10) == piVar4;
          goto LAB_0047050b;
        }
      }
    }
  }
  return 0xfffffffe;
}



/* Function: FUN_00470580 @ 0x00470580 */

undefined4 __fastcall FUN_00470580(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 100 + *(char *)((int)param_2 + -1) * 4);
  piVar2 = piVar1;
  do {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (piVar2 == param_2) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return 1;
    }
  } while (((piVar1 == (int *)0x0) || (piVar1 = (int *)*piVar1, piVar1 == (int *)0x0)) ||
          (piVar1 = (int *)*piVar1, piVar2 != piVar1));
  FUN_0046fd70(param_1,0xc);
  return 0xffffffff;
}



/* Function: FUN_004705d0 @ 0x004705d0 */

undefined4 __fastcall FUN_004705d0(LPCVOID param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + -2);
    if ((uVar1 & 1) == 0) {
      uVar5 = uVar1 & 0xfffc;
    }
    else {
      uVar5 = uVar1 & 0x7ffc;
    }
    puVar4 = (ushort *)(iVar2 + -2 + uVar5);
    if ((puVar4 < (ushort *)((int)param_1 + 0x1aU)) ||
       (bVar6 = *(ushort **)((int)param_1 + 0x14) == puVar4,
       *(ushort **)((int)param_1 + 0x14) < puVar4)) {
      return 0xfffffffe;
    }
LAB_0047065b:
    if (bVar6) {
      return 0;
    }
    *param_2 = (int)(puVar4 + 1);
    param_2[2] = (-(uint)((*(ushort *)((int)param_1 + 0xe) & 7) == 0) & 2) + 2;
    uVar1 = *puVar4;
    param_2[3] = uVar1 & 1;
    if ((uVar1 & 1) != 0) {
      param_2[4] = ((*puVar4 & 0x7ffc) - (((*puVar4 & 0x8000) == 0) - 1 & 6)) + -2;
      if ((*puVar4 & 0x8000) == 0) {
        param_2[5] = 0;
      }
      else {
        param_2[5] = *(int *)((int)puVar4 + ((*puVar4 & 0x7ffc) - 6));
      }
      if ((*puVar4 & 0x8000) != 0) {
        param_2[6] = (*(uint *)(*(int *)((int)puVar4 + ((*puVar4 & 0x7ffc) - 6)) + 4) & 0xff0000) >>
                     0x10;
        return 1;
      }
      param_2[6] = 0;
      return 1;
    }
    param_2[4] = (*puVar4 & 0xfffc) - 2;
    param_2[5] = 0;
    param_2[6] = 0;
    return 1;
  }
  uVar5 = (uint)(ushort)(((short)*(undefined4 *)((int)param_1 + 0x14) - (short)param_1) + 9);
  if (uVar5 < 0x10000) {
    bVar6 = FUN_00471450(param_1,uVar5,0x1002);
    if (CONCAT31(extraout_var,bVar6) != 0) {
      uVar3 = FUN_00471410(param_1);
      if (uVar5 <= uVar3 - 1) {
        puVar4 = (ushort *)((int)param_1 + 0x1a);
        bVar6 = *(ushort **)((int)param_1 + 0x14) == puVar4;
        goto LAB_0047065b;
      }
    }
  }
  return 0xfffffffe;
}



/* Function: FUN_00470750 @ 0x00470750 */

undefined4 __fastcall FUN_00470750(LPCVOID param_1,int *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined4 extraout_var;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_2[1] + 0x24);
  if (*param_2 != 0) {
    puVar5 = (undefined4 *)((uint)uVar1 + *param_2);
    if ((puVar5 != *(undefined4 **)((int)param_1 + 0x14)) &&
       ((puVar5 < (undefined4 *)((int)param_1 + 0x1cU) ||
        (*(undefined4 **)((int)param_1 + 0x14) < puVar5)))) {
      return 0xfffffffe;
    }
LAB_004707d9:
    if (*(undefined4 **)((int)param_1 + 0x14) == puVar5) {
      return 0;
    }
    *param_2 = (int)puVar5;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[2] = 1;
    param_2[4] = (uint)uVar1;
    if (param_3 != 0) {
      iVar4 = FUN_00470840((int)param_1,param_2[1],puVar5);
      param_2[3] = iVar4;
      if (iVar4 == -1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
  uVar6 = (uint)(ushort)(((short)*(undefined4 *)((int)param_1 + 0x14) - (short)param_1) - 1);
  if (uVar6 < 0x10000) {
    bVar2 = FUN_00471450(param_1,uVar6,0x1002);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      uVar3 = FUN_00471410(param_1);
      if ((uVar6 <= uVar3 - 1) &&
         ((uVar6 = *(uint *)((int)param_1 + 0x10), uVar6 == 0 ||
          (((int)param_1 + 0x1cU <= uVar6 && (uVar6 <= *(int *)((int)param_1 + 0x14) - (uint)uVar1))
          )))) {
        puVar5 = (undefined4 *)((int)param_1 + 0x1c);
        goto LAB_004707d9;
      }
    }
  }
  return 0xfffffffe;
}



/* Function: FUN_00470840 @ 0x00470840 */

undefined4 __fastcall FUN_00470840(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 *puVar4;
  
  uVar1 = *(ushort *)(param_2 + 0x24);
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  sVar3 = (short)((*(int *)(param_1 + 0x14) - (int)puVar4 & 0xffffU) / (uint)uVar1);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 1;
    }
    if ((((puVar2 < puVar4) || ((undefined4 *)(*(int *)(param_1 + 0x14) - (uint)uVar1) < puVar2)) ||
        (sVar3 == 0)) || ((short)(((int)puVar2 - (int)puVar4 & 0xffffU) % (uint)uVar1) != 0)) break;
    if (puVar2 == param_3) {
      return 0;
    }
    puVar2 = (undefined4 *)*puVar2;
    sVar3 = sVar3 + -1;
  }
  return 0xffffffff;
}



/* Function: FUN_00470ce0 @ 0x00470ce0 */

bool FUN_00470ce0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_24 [9];
  
  bVar1 = false;
  if ((short)param_1[8] != -0x4153) {
    FUN_0046fd70(0,10);
    return false;
  }
  local_24[0] = 0;
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    param_1[0x18] = param_1[0x18] + 1;
  }
  do {
    iVar2 = FUN_004702b0(param_1,local_24,0,0);
    if (iVar2 == -1) {
      bVar1 = true;
    }
  } while ((iVar2 == 1) || (iVar2 == -1));
  if (iVar2 == 0) {
    iVar3 = FUN_00470e50((int)param_1);
    iVar2 = 0;
    if (iVar3 == 0) {
      iVar2 = -2;
    }
    if (iVar2 == 0) goto LAB_00470d68;
  }
  bVar1 = true;
LAB_00470d68:
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) {
    param_1[0x18] = param_1[0x18] + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  }
  return !bVar1;
}



/* Function: FUN_00470e50 @ 0x00470e50 */

undefined4 __fastcall FUN_00470e50(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
  iVar2 = 1;
  uVar3 = 0;
  do {
    if (uVar3 != 3) {
      piVar1 = (int *)(param_1 + (uint)uVar3 * 4);
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        do {
          iVar2 = FUN_00470ec0(*(int **)(iVar4 + 4),uVar3);
          if (iVar2 == 0) goto LAB_00470e91;
          iVar4 = *(int *)(iVar4 + 8);
        } while (*piVar1 != iVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
LAB_00470e91:
  if ((iVar2 != 0) && (iVar2 = FUN_00470f00(param_1), iVar2 != 0)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00470ec0 @ 0x00470ec0 */

undefined4 __fastcall FUN_00470ec0(int *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
  case 2:
    uVar1 = FUN_00470f40(param_1);
    return uVar1;
  case 1:
    uVar1 = FUN_00470fd0(param_1);
    return uVar1;
  case 3:
    return 1;
  case 4:
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: FUN_00470f00 @ 0x00470f00 */

undefined4 __fastcall FUN_00470f00(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 100);
  uVar4 = 0;
  do {
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      if ((int *)*piVar2 != (int *)0x0) {
        piVar2 = (int *)*piVar2;
      }
      iVar1 = FUN_00470580(param_1,piVar2);
      if (iVar1 == -1) {
        return 0;
      }
    }
    piVar3 = piVar3 + 1;
    uVar4 = uVar4 + 1;
    if (0x3f < uVar4) {
      return 1;
    }
  } while( true );
}



/* Function: FUN_00470f40 @ 0x00470f40 */

undefined4 __fastcall FUN_00470f40(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  bVar3 = false;
  puVar2 = (ushort *)param_1[5];
  puVar4 = puVar2;
  puVar5 = puVar2;
  puVar6 = puVar2;
  do {
    if ((*(ushort **)(*(int *)(puVar5 + 1) + 6) != puVar5) ||
       (*(ushort **)(*(int *)(puVar5 + 3) + 2) != puVar5)) goto LAB_00470f72;
    uVar1 = *puVar5;
    if (puVar5 == puVar2) {
      if ((uVar1 & 0xfffc) != 0) goto LAB_00470f72;
      uVar1 = uVar1 & 1;
    }
    else {
      if (((uVar1 & 1) != 0) || ((uVar1 & 2) == 0)) goto LAB_00470f72;
      uVar1 = uVar1 & 0xfffc;
    }
    if (uVar1 == 0) goto LAB_00470f72;
    if ((puVar6 != puVar2) && (puVar6 = *(ushort **)(puVar6 + 1), puVar6 != puVar2)) {
      puVar6 = *(ushort **)(puVar6 + 1);
      puVar4 = *(ushort **)(puVar4 + 1);
      if (puVar6 == puVar4) goto LAB_00470f72;
    }
    if ((ushort *)param_1[4] == puVar5) {
      bVar3 = true;
    }
    puVar5 = *(ushort **)(puVar5 + 1);
  } while (puVar5 != puVar2);
  if (bVar3) {
    return 1;
  }
LAB_00470f72:
  FUN_0046fd70(*param_1,0xc);
  return 0;
}



/* Function: FUN_00470fd0 @ 0x00470fd0 */

undefined4 __fastcall FUN_00470fd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
     (puVar1 = *(undefined4 **)param_1[4], puVar1 != (undefined4 *)0x0)) {
    iVar2 = FUN_00470840((int)param_1,*param_1,puVar1);
    if (iVar2 == -1) {
      FUN_0046fd70(*param_1,0xc);
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_00471010 @ 0x00471010 */

undefined4 FUN_00471010(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  bVar2 = FUN_00471450(param_2,4,0x202);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_0046fd70(0,0xe);
    return 0;
  }
  piVar4 = (int *)((uint)param_2 & 0xffff0000);
  if ((*(ushort *)((int)piVar4 + 0xe) & 0xfff8) != 0xcad0) {
    FUN_0046fd70(0,0xe);
    return 0;
  }
  bVar2 = FUN_00471450(piVar4,0x1a,0x1002);
  if ((((CONCAT31(extraout_var_00,bVar2) == 0) ||
       ((*(ushort *)((int)piVar4 + 0xe) & 0xfff8) != 0xcad0)) ||
      (4 < ((byte)*(ushort *)((int)piVar4 + 0xe) & 7))) || ((param_1 != 0 && (*piVar4 != param_1))))
  {
    return 0;
  }
  iVar1 = *piVar4;
  if ((*(byte *)(iVar1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x48));
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
  }
  switch(*(ushort *)((int)piVar4 + 0xe) & 7) {
  case 0:
  case 2:
    if ((*(byte *)((int)param_2 + -2) & 1) != 0) goto switchD_004710d7_caseD_3;
    goto LAB_00471103;
  case 1:
    iVar3 = FUN_00470840((int)piVar4,iVar1,param_2);
    break;
  default:
    goto switchD_004710d7_caseD_3;
  case 4:
    iVar3 = FUN_00470580(iVar1,param_2);
  }
  if (iVar3 == 0) {
LAB_00471103:
    uVar5 = 0xffffffff;
  }
switchD_004710d7_caseD_3:
  if ((*(byte *)(iVar1 + 0x22) & 2) != 0) {
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x48));
  }
  return uVar5;
}



/* Function: FUN_00471150 @ 0x00471150 */

LPCVOID __fastcall FUN_00471150(uint param_1)

{
    /* TODO: 14 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00471190 @ 0x00471190 */

undefined4 * __fastcall FUN_00471190(uint param_1,uint param_2)

{
  LPCVOID lpAddress;
  undefined4 *lpAddress_00;
  LPVOID pvVar1;
  uint dwSize;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  DWORD flAllocationType;
  DWORD flProtect;
  
  if (((param_2 & 0x1000) != 0) && (0xffff < param_1)) {
    param_1 = 0xffff;
  }
  flProtect = 1;
  uVar4 = param_1 + 0xfff & 0xfffff000;
  flAllocationType = 0x2000;
  dwSize = uVar4 + 0xffff & 0xffff0000;
  lpAddress = FUN_00471150(dwSize);
  lpAddress_00 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  puVar3 = lpAddress_00;
  if (lpAddress_00 != (undefined4 *)0x0) {
    pvVar1 = VirtualAlloc(lpAddress_00,uVar4,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) {
      puVar3 = (undefined4 *)0x0;
      FUN_00471220(lpAddress_00);
    }
    else if ((param_2 & 0x100) != 0) {
      for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      return lpAddress_00;
    }
  }
  return puVar3;
}



/* Function: FUN_00471220 @ 0x00471220 */

undefined4 __fastcall FUN_00471220(LPCVOID param_1)

{
  uint dwSize;
  BOOL BVar1;
  
  dwSize = FUN_00471410(param_1);
  if (((dwSize < 0x10001) && (DAT_00484030 != (LPCVOID)0x0)) && (param_1 < DAT_00484030)) {
    DAT_00484030 = param_1;
  }
  BVar1 = VirtualFree(param_1,dwSize,0x4000);
  if (BVar1 != 0) {
    BVar1 = VirtualFree(param_1,0,0x8000);
    if (BVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00471280 @ 0x00471280 */

undefined4 * __fastcall FUN_00471280(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = FUN_00471330(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return param_1;
  }
  puVar2 = FUN_00471190(param_2,param_3 & 0xfffffeff);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_00471410(param_1);
    uVar5 = uVar3;
    if (param_2 <= uVar3) {
      uVar5 = param_2;
    }
    puVar6 = param_1;
    puVar7 = puVar2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_00471220(param_1);
    if (((param_3 & 0x100) != 0) && (uVar3 < param_2)) {
      puVar6 = (undefined4 *)(uVar3 + (int)puVar2);
      for (uVar5 = param_2 - uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = param_2 - uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
  }
  return puVar2;
}



/* Function: FUN_00471330 @ 0x00471330 */

undefined4 __fastcall FUN_00471330(LPCVOID param_1,uint param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_00471410(param_1);
  uVar5 = param_2;
  if (((param_3 & 0x1000) != 0) && (0xffff < param_2)) {
    uVar5 = 0xffff;
  }
  uVar5 = uVar5 + 0xfff & 0xfffff000;
  if (uVar5 <= uVar1) {
    if (uVar5 < uVar1) {
      BVar2 = VirtualFree((LPVOID)((int)param_1 + uVar5),uVar1 - uVar5,0x4000);
      if (BVar2 == 0) {
        return 0;
      }
    }
    if (((param_3 & 0x100) != 0) && ((param_2 & 0xfff) != 0)) {
      puVar6 = (undefined4 *)((int)param_1 + param_2);
      for (uVar1 = uVar5 - param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 - param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    return 1;
  }
  if ((uVar1 & 0xffff) == 0) {
    return 0;
  }
  uVar5 = uVar5 - uVar1;
  pvVar3 = VirtualAlloc((undefined4 *)((int)param_1 + uVar1),uVar5,0x1000,4);
  if (pvVar3 != (LPVOID)0x0) {
    if ((param_3 & 0x100) != 0) {
      puVar6 = (undefined4 *)((int)param_1 + uVar1);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    return 1;
  }
  return 0;
}



/* Function: FUN_00471410 @ 0x00471410 */

uint __fastcall FUN_00471410(LPCVOID param_1)

{
    /* TODO: 9 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00471450 @ 0x00471450 */

bool __fastcall FUN_00471450(LPCVOID param_1,uint param_2,uint param_3)

{
    /* TODO: 48 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00471550 @ 0x00471550 */

bool __fastcall FUN_00471550(FARPROC param_1)

{
  BOOL BVar1;
  
  if (param_1 < (FARPROC)0x10000) {
    return false;
  }
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



/* Function: FUN_00471570 @ 0x00471570 */

undefined4 FUN_00471570(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  return 1;
}



/* Function: FUN_00471590 @ 0x00471590 */

void FUN_00471590(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  return;
}



/* Function: FUN_00471650 @ 0x00471650 */

undefined4 __cdecl FUN_00471650(LPCRITICAL_SECTION param_1,int *param_2)

{
  if (*param_2 == 0) {
    InitializeCriticalSection(param_1);
    *param_2 = 1;
  }
  EnterCriticalSection(param_1);
  return 1;
}



/* Function: GetCurrentThreadId @ 0x00471750 */

/* Removed: reimplementation of system function */



/* Function: FUN_004718d0 @ 0x004718d0 */

undefined4 __fastcall FUN_004718d0(LPCVOID param_1)

{
  bool bVar1;
  undefined4 extraout_var;
  
  bVar1 = FUN_00471450(param_1,0x178,0x102);
  if ((CONCAT31(extraout_var,bVar1) != 0) && (*(short *)((int)param_1 + 0x20) == -0x4153)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00471900 @ 0x00471900 */

void __fastcall FUN_00471900(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 4);
  iVar3 = 0;
  if (iVar1 != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 0x40);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 0x40) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 4) = *(undefined4 *)(iVar2 + 0x40);
  }
  return;
}



/* Function: FUN_00471930 @ 0x00471930 */

DWORD * __fastcall FUN_00471930(int param_1,int param_2)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  pDVar2 = (DWORD *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0xd8);
  DVar1 = GetCurrentThreadId();
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*pDVar2 == DVar1) {
      return pDVar2;
    }
    pDVar2 = pDVar2 + 2;
  }
  if ((param_2 != 0) && (*(uint *)(param_1 + 0xd8) < 0x19)) {
    *pDVar2 = DVar1;
    pDVar2[1] = 0;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    return pDVar2;
  }
  return (DWORD *)0x0;
}



/* Function: FUN_00471990 @ 0x00471990 */

void __fastcall FUN_00471990(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd8) + -1;
  *(int *)(param_1 + 0xd8) = iVar2;
  iVar2 = param_1 + iVar2 * 8;
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  *param_2 = *(undefined4 *)(iVar2 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Function: FUN_004719b0 @ 0x004719b0 */

undefined4 __fastcall FUN_004719b0(LPCSTR param_1,int param_2)

{
  int iVar1;
  uint uType;
  
  uType = 2 - (param_2 == 0) | 0x2110;
  MessageBeep(0);
  while( true ) {
    iVar1 = MessageBoxA((HWND)0x0,param_1,"SmartHeap Library",uType);
    switch(iVar1) {
    case 1:
    case 5:
      return 0;
    case 2:
    case 3:
                    /* WARNING: Subroutine does not return */
      abort();
    case 4:
      return 1;
    }
    if ((uType & 0x2000) == 0) break;
    uType = uType & 0xffffdfef | 0x1010;
  }
  return 0;
}



/* Function: WinGCreateBitmap @ 0x00471a30 */

void WinGCreateBitmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinGCreateBitmap();
  return;
}



/* Function: WinGCreateDC @ 0x00471a36 */

void WinGCreateDC(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinGCreateDC();
  return;
}



/* Function: WinGRecommendDIBFormat @ 0x00471a3c */

void WinGRecommendDIBFormat(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinGRecommendDIBFormat();
  return;
}



/* Function: WinGBitBlt @ 0x00471a42 */

/* Removed: reimplementation of system function */



/* Function: WinGSetDIBColorTable @ 0x00471a48 */

/* Removed: reimplementation of system function */



/* Function: PrintDlgA @ 0x00471a4e */

/* Removed: reimplementation of system function */



/* Function: CommDlgExtendedError @ 0x00471a54 */

/* Removed: reimplementation of system function */



/* Function: GetOpenFileNameA @ 0x00471a5a */

/* Removed: reimplementation of system function */



/* Function: GetSaveFileNameA @ 0x00471a60 */

/* Removed: reimplementation of system function */



/* Function: __onexit @ 0x00471a70 */

/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 1998 Release */

void __cdecl __onexit(_onexit_t param_1)

{
    /* TODO: 28 lines - has decompilation artifacts */
    return;
}



/* Function: _atexit @ 0x00471b10 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 1998 Release */

int __cdecl _atexit(ghidra_func_4879 *param_1)

{
  int iVar1;
  
  return 0; /* stubbed */
  return -(uint)(iVar1 == 0);
}



/* Function: __CxxFrameHandler @ 0x00471b24 */

void __CxxFrameHandler(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler();
  return;
}



/* Function: __eh_vector_destructor_iterator @ 0x00471b30 */

/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,ghidra_func_ptr *param_4)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_00477d18;
  puStack_10 = &DAT_00471ee2;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_EDI);
  }
  local_8 = 0xffffffff;
  FUN_00471ba0();
  *unaff_FS_OFFSET = local_14;
  return;
}



/* Function: FUN_00471ba0 @ 0x00471ba0 */

void FUN_00471ba0(void)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: __ArrayUnwind @ 0x00471bc0 */

/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,ghidra_func_ptr *param_4)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_00477d28;
  puStack_10 = &DAT_00471ee2;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_EDI);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



/* Function: __eh_vector_constructor_iterator @ 0x00471c60 */

/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,ghidra_func_ptr *param_4,
               ghidra_func_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_00477d38;
  puStack_10 = &DAT_00471ee2;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  local_20 = 0;
  if (0 < param_3) {
    do {
      (*param_4)(unaff_EDI);
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_00471cd0();
  *unaff_FS_OFFSET = local_14;
  return;
}



/* Function: FUN_00471cd0 @ 0x00471cd0 */

void FUN_00471cd0(void)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: memmove @ 0x00471cec */

/* Removed: reimplementation of system function */



/* Function: ftol @ 0x00471cf2 */

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}



/* Function: _CIacos @ 0x00471cfe */

void _CIacos(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIacos();
  return;
}



/* Function: FUN_00471d10 @ 0x00471d10 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00471d10(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &ghidra_stack_00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* Function: entry @ 0x00471d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
    /* TODO: 74 lines - has decompilation artifacts */
    return;
}



/* Function: abort @ 0x00471ee8 */

void __cdecl abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471ee8. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
  return;
}



/* Function: __dllonexit @ 0x00471eee */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: _initterm @ 0x00471f00 */

void __cdecl _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00471f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



/* Function: __setdefaultprecision @ 0x00471f10 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 1998 Release */

void __setdefaultprecision(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: FUN_00471f40 @ 0x00471f40 */

void FUN_00471f40(void)

{
  return;
}



/* Function: _controlfp @ 0x00471f42 */

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00471f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}



