/*
 * game_resources.c - Resource loading
 * Address range: 0x45C000 - 0x45FFFF
 * Functions: 218
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_0045c050 @ 0x0045c050 */

void FUN_0045c050(void)

{
  return;
}



/* Function: FUN_0045c060 @ 0x0045c060 */

void FUN_0045c060(void)

{
  return;
}



/* Function: FUN_0045c070 @ 0x0045c070 */

void __fastcall FUN_0045c070(int param_1)

{
    /* TODO: 8 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045c090 @ 0x0045c090 */

void FUN_0045c090(void)

{
  return;
}



/* Function: FUN_0045c0a0 @ 0x0045c0a0 */

void FUN_0045c0a0(void)

{
  return;
}



/* Function: FUN_0045c0b0 @ 0x0045c0b0 */

void FUN_0045c0b0(void)

{
  return;
}



/* Function: FUN_0045c0c0 @ 0x0045c0c0 */

void FUN_0045c0c0(void)

{
  return;
}



/* Function: FUN_0045c0e0 @ 0x0045c0e0 */

void FUN_0045c0e0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004893f0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045c130 @ 0x0045c130 */

void FUN_0045c130(void)

{
  return;
}



/* Function: FUN_0045c150 @ 0x0045c150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c150(void)

{
  _DAT_004893fe = 0;
  _DAT_004893fc = 0;
  return;
}



/* Function: FUN_0045c160 @ 0x0045c160 */

void FUN_0045c160(void)

{
  _atexit(FUN_0045c170);
  return;
}



/* Function: FUN_0045c170 @ 0x0045c170 */

void FUN_0045c170(void)

{
  return;
}



/* Function: FUN_0045c190 @ 0x0045c190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c190(void)

{
  _DAT_004893fa = 0;
  _DAT_004893f8 = 0;
  return;
}



/* Function: FUN_0045c1a0 @ 0x0045c1a0 */

void FUN_0045c1a0(void)

{
  _atexit(FUN_0045c1b0);
  return;
}



/* Function: FUN_0045c1b0 @ 0x0045c1b0 */

void FUN_0045c1b0(void)

{
  return;
}



/* Function: FUN_0045c1c0 @ 0x0045c1c0 */

ushort * __cdecl FUN_0045c1c0(int *param_1,short param_2,short param_3,ushort *param_4)

{
  LPCVOID pvVar1;
  int iVar2;
  short sVar3;
  short local_12;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  if (param_1 != (int *)0x0) {
    local_10 = *param_1;
    local_c = param_1[1];
    local_8 = param_1[2];
    local_4 = param_1[3];
    if (-1 < param_2) {
      FUN_0045c2a0(' ',(char)param_2,(int)&local_10);
    }
    if (-1 < param_3) {
      FUN_0045c2a0('!',(char)param_3,(int)&local_10);
    }
    if (param_4 == (ushort *)0x0) {
      pvVar1 = DAT_00483df4;
      if (DAT_004833cc != (LPCVOID)0x0) {
        pvVar1 = DAT_004833cc;
      }
      param_4 = FUN_0046f060(pvVar1,0x200,1);
    }
    local_12 = 0;
    do {
      sVar3 = 0;
      do {
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        param_4[iVar2 + local_12 * 0x10] =
             CONCAT11(*(char *)((int)&local_10 + (int)local_12),
                      *(char *)((int)&local_10 + iVar2));
      } while (sVar3 < 0x10);
      local_12 = local_12 + 1;
    } while (local_12 < 0x10);
    return param_4;
  }
  return (ushort *)0x0;
}



/* Function: FUN_0045c2a0 @ 0x0045c2a0 */

void __cdecl FUN_0045c2a0(char param_1,char param_2,int param_3)

{
  char cVar1;
  short sVar2;
  
  if (param_3 != 0) {
    sVar2 = 1;
    do {
      cVar1 = *(char *)(sVar2 + param_3);
      if ((cVar1 != '\0') && ((byte)((param_1 * '\x04' + '\x05') - cVar1) < 4)) {
        *(char *)(sVar2 + param_3) = cVar1 + (param_1 - param_2) * -4;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < 0x10);
  }
  return;
}



/* Function: FUN_0045c300 @ 0x0045c300 */

uint __cdecl
FUN_0045c300(int param_1,int param_2,int param_3,int param_4,void *param_5
            )

{
    /* TODO: 91 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045c470 @ 0x0045c470 */

int __cdecl FUN_0045c470(byte *param_1,int param_2,int param_3,short *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int uVar6;
  short sVar7;
  int in_EDX;
  int extraout_EDX;
  byte *pbVar8;
  ushort uVar9;
  
  cVar2 = (char)param_2 - (char)param_3;
  cVar3 = (char)param_2 * '\x04' + '\x05';
  do {
    bVar1 = *param_1;
    pbVar8 = param_1 + 1;
    uVar5 = bVar1 - 1;
    switch(bVar1) {
    case 1:
    case 0x81:
      bVar4 = param_1[2];
      uVar6 = (int)(uVar5 >> 8);
      uVar5 = CONCAT31(uVar6,bVar4);
      pbVar8 = param_1 + 2;
      if ((byte)(cVar3 - bVar4) < 4) {
        bVar4 = bVar4 + cVar2 * -4;
        uVar5 = CONCAT31(uVar6,bVar4);
        *pbVar8 = bVar4;
      }
    case 0x21:
    case 0xa1:
      pbVar8 = pbVar8 + 1;
      break;
    case 9:
    case 0x89:
      pbVar8 = param_1 + 3;
      uVar5 = FUN_0045c470((byte *)((int)param_4 +
                                   (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),
                           param_2,param_3,param_4);
      in_EDX = extraout_EDX;
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      bVar4 = *pbVar8;
      uVar9 = (ushort)bVar4;
      pbVar8 = param_1 + 2;
      if (7 < bVar4) {
        in_EDX = CONCAT22((short)((uint)in_EDX >> 0x10),(ushort)(bVar4 >> 3));
        uVar5 = in_EDX * 8;
        uVar9 = (ushort)bVar4 - (short)uVar5;
        do {
          if ((byte)(cVar3 - *pbVar8) < 4) {
            *pbVar8 = *pbVar8 + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[1]) < 4) {
            pbVar8[1] = pbVar8[1] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[2]) < 4) {
            pbVar8[2] = pbVar8[2] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[3]) < 4) {
            pbVar8[3] = pbVar8[3] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[4]) < 4) {
            pbVar8[4] = pbVar8[4] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[5]) < 4) {
            pbVar8[5] = pbVar8[5] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[6]) < 4) {
            pbVar8[6] = pbVar8[6] + cVar2 * -4;
          }
          if ((byte)(cVar3 - pbVar8[7]) < 4) {
            pbVar8[7] = pbVar8[7] + cVar2 * -4;
          }
          uVar5 = uVar5 & 0xffffff00;
          pbVar8 = pbVar8 + 8;
          sVar7 = (short)in_EDX + -1;
          in_EDX = CONCAT22((short)((uint)in_EDX >> 0x10),sVar7);
        } while (sVar7 != 0);
      }
      if (uVar9 != 0) {
        in_EDX = (int)(short)uVar9;
        uVar5 = in_EDX - 1;
        switch(uVar5) {
        case 6:
          bVar4 = pbVar8[6];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[6] = bVar4;
          }
        case 5:
          bVar4 = pbVar8[5];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[5] = bVar4;
          }
        case 4:
          bVar4 = pbVar8[4];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[4] = bVar4;
          }
        case 3:
          bVar4 = pbVar8[3];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[3] = bVar4;
          }
        case 2:
          bVar4 = pbVar8[2];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[2] = bVar4;
          }
        case 1:
          bVar4 = pbVar8[1];
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            pbVar8[1] = bVar4;
          }
        case 0:
          bVar4 = *pbVar8;
          uVar6 = (int)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,bVar4);
          if ((byte)(cVar3 - bVar4) < 4) {
            bVar4 = bVar4 + cVar2 * -4;
            uVar5 = CONCAT31(uVar6,bVar4);
            *pbVar8 = bVar4;
          }
        default:
          pbVar8 = pbVar8 + in_EDX;
        }
      }
    }
    param_1 = pbVar8;
  } while ((bVar1 & 0x80) == 0);
  return CONCAT31(uVar5 >> 8,1);
}



/* Function: FUN_0045c7a0 @ 0x0045c7a0 */

int __cdecl
FUN_0045c7a0(int param_1,int param_2,int param_3,int param_4)

{
  int uVar1;
  
  uVar1 = FUN_0045c300(param_1,param_2,param_3,param_4,FUN_0045c470);
  return CONCAT31((unsigned int)((uint)uVar1 >> 8),1);
}



/* Function: FUN_0045c7e0 @ 0x0045c7e0 */

void FUN_0045c7e0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489400,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045c830 @ 0x0045c830 */

void FUN_0045c830(void)

{
  return;
}



/* Function: FUN_0045c850 @ 0x0045c850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c850(void)

{
  _DAT_0048940e = 0;
  _DAT_0048940c = 0;
  return;
}



/* Function: FUN_0045c860 @ 0x0045c860 */

void FUN_0045c860(void)

{
  _atexit(FUN_0045c870);
  return;
}



/* Function: FUN_0045c870 @ 0x0045c870 */

void FUN_0045c870(void)

{
  return;
}



/* Function: FUN_0045c890 @ 0x0045c890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c890(void)

{
  _DAT_0048940a = 0;
  _DAT_00489408 = 0;
  return;
}



/* Function: FUN_0045c8a0 @ 0x0045c8a0 */

void FUN_0045c8a0(void)

{
  _atexit(FUN_0045c8b0);
  return;
}



/* Function: FUN_0045c8b0 @ 0x0045c8b0 */

void FUN_0045c8b0(void)

{
  return;
}



/* Function: FUN_0045c8c0 @ 0x0045c8c0 */

void FUN_0045c8c0(void)

{
  return;
}



/* Function: FUN_0045c8d0 @ 0x0045c8d0 */

void FUN_0045c8d0(void)

{
  return;
}



/* Function: FUN_0045c8f0 @ 0x0045c8f0 */

void FUN_0045c8f0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489410,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045c940 @ 0x0045c940 */

void FUN_0045c940(void)

{
  return;
}



/* Function: FUN_0045c960 @ 0x0045c960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c960(void)

{
  _DAT_0048941e = 0;
  _DAT_0048941c = 0;
  return;
}



/* Function: FUN_0045c970 @ 0x0045c970 */

void FUN_0045c970(void)

{
  _atexit(FUN_0045c980);
  return;
}



/* Function: FUN_0045c980 @ 0x0045c980 */

void FUN_0045c980(void)

{
  return;
}



/* Function: FUN_0045c9a0 @ 0x0045c9a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c9a0(void)

{
  _DAT_0048941a = 0;
  _DAT_00489418 = 0;
  return;
}



/* Function: FUN_0045c9b0 @ 0x0045c9b0 */

void FUN_0045c9b0(void)

{
  _atexit(FUN_0045c9c0);
  return;
}



/* Function: FUN_0045c9c0 @ 0x0045c9c0 */

void FUN_0045c9c0(void)

{
  return;
}



/* Function: FUN_0045c9e0 @ 0x0045c9e0 */

void FUN_0045c9e0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489420,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045ca20 @ 0x0045ca20 */

void FUN_0045ca20(void)

{
  _atexit(FUN_0045ca30);
  return;
}



/* Function: FUN_0045ca30 @ 0x0045ca30 */

void FUN_0045ca30(void)

{
  return;
}



/* Function: FUN_0045ca50 @ 0x0045ca50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ca50(void)

{
  _DAT_0048942e = 0;
  _DAT_0048942c = 0;
  return;
}



/* Function: FUN_0045ca60 @ 0x0045ca60 */

void FUN_0045ca60(void)

{
  _atexit(FUN_0045ca70);
  return;
}



/* Function: FUN_0045ca70 @ 0x0045ca70 */

void FUN_0045ca70(void)

{
  return;
}



/* Function: FUN_0045ca90 @ 0x0045ca90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ca90(void)

{
  _DAT_0048942a = 0;
  _DAT_00489428 = 0;
  return;
}



/* Function: FUN_0045caa0 @ 0x0045caa0 */

void FUN_0045caa0(void)

{
  _atexit(FUN_0045cab0);
  return;
}



/* Function: FUN_0045cab0 @ 0x0045cab0 */

void FUN_0045cab0(void)

{
  return;
}



/* Function: FUN_0045cad0 @ 0x0045cad0 */

void FUN_0045cad0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489430,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045cb10 @ 0x0045cb10 */

void FUN_0045cb10(void)

{
  _atexit(FUN_0045cb20);
  return;
}



/* Function: FUN_0045cb20 @ 0x0045cb20 */

void FUN_0045cb20(void)

{
  return;
}



/* Function: FUN_0045cb40 @ 0x0045cb40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cb40(void)

{
  _DAT_0048943e = 0;
  _DAT_0048943c = 0;
  return;
}



/* Function: FUN_0045cb50 @ 0x0045cb50 */

void FUN_0045cb50(void)

{
  _atexit(FUN_0045cb60);
  return;
}



/* Function: FUN_0045cb60 @ 0x0045cb60 */

void FUN_0045cb60(void)

{
  return;
}



/* Function: FUN_0045cb80 @ 0x0045cb80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cb80(void)

{
  _DAT_0048943a = 0;
  _DAT_00489438 = 0;
  return;
}



/* Function: FUN_0045cb90 @ 0x0045cb90 */

void FUN_0045cb90(void)

{
  _atexit(FUN_0045cba0);
  return;
}



/* Function: FUN_0045cba0 @ 0x0045cba0 */

void FUN_0045cba0(void)

{
  return;
}



/* Function: FUN_0045cbb0 @ 0x0045cbb0 */

void FUN_0045cbb0(void)

{
  DWORD dwMessageId;
  DWORD dwLanguageId;
  LPCSTR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  LPCSTR local_4;
  
  lpBuffer = &local_4;
  Arguments = (va_list *)0x0;
  nSize = 0;
  dwLanguageId = 0x400;
  dwMessageId = GetLastError();
  FormatMessageA(0x1100,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
  MessageBoxA((HWND)0x0,local_4,s_GetLastError_0048386c,0x40);
  LocalFree(local_4);
  return;
}



/* Function: FUN_0045cc00 @ 0x0045cc00 */

int __cdecl FUN_0045cc00(int *param_1,int *param_2)

{
  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0045cc20 @ 0x0045cc20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045cc20(int *param_1)

{
    /* TODO: 33 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045cd00 @ 0x0045cd00 */

void FUN_0045cd00(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489440,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045cd50 @ 0x0045cd50 */

void FUN_0045cd50(void)

{
  return;
}



/* Function: FUN_0045cd70 @ 0x0045cd70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cd70(void)

{
  _DAT_0048944e = 0;
  _DAT_0048944c = 0;
  return;
}



/* Function: FUN_0045cd80 @ 0x0045cd80 */

void FUN_0045cd80(void)

{
  _atexit(FUN_0045cd90);
  return;
}



/* Function: FUN_0045cd90 @ 0x0045cd90 */

void FUN_0045cd90(void)

{
  return;
}



/* Function: FUN_0045cdb0 @ 0x0045cdb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cdb0(void)

{
  _DAT_0048944a = 0;
  _DAT_00489448 = 0;
  return;
}



/* Function: FUN_0045cdc0 @ 0x0045cdc0 */

void FUN_0045cdc0(void)

{
  _atexit(FUN_0045cdd0);
  return;
}



/* Function: FUN_0045cdd0 @ 0x0045cdd0 */

void FUN_0045cdd0(void)

{
  return;
}



/* Function: FUN_0045cdf0 @ 0x0045cdf0 */

void FUN_0045cdf0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489450,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045ce30 @ 0x0045ce30 */

void FUN_0045ce30(void)

{
  _atexit(FUN_0045ce40);
  return;
}



/* Function: FUN_0045ce40 @ 0x0045ce40 */

void FUN_0045ce40(void)

{
  return;
}



/* Function: FUN_0045ce60 @ 0x0045ce60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ce60(void)

{
  _DAT_0048945e = 0;
  _DAT_0048945c = 0;
  return;
}



/* Function: FUN_0045ce70 @ 0x0045ce70 */

void FUN_0045ce70(void)

{
  _atexit(FUN_0045ce80);
  return;
}



/* Function: FUN_0045ce80 @ 0x0045ce80 */

void FUN_0045ce80(void)

{
  return;
}



/* Function: FUN_0045cea0 @ 0x0045cea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cea0(void)

{
  _DAT_0048945a = 0;
  _DAT_00489458 = 0;
  return;
}



/* Function: FUN_0045ceb0 @ 0x0045ceb0 */

void FUN_0045ceb0(void)

{
  _atexit(FUN_0045cec0);
  return;
}



/* Function: FUN_0045cec0 @ 0x0045cec0 */

void FUN_0045cec0(void)

{
  return;
}



/* Function: FUN_0045cf10 @ 0x0045cf10 */

/* Function: FUN_0045cf10 @ 0x0045cf10
 * Struct types: unknown struct >0x2CA bytes (param_1)
 * TODO: offsets 0x2c2 and 0x2c6 don't match any known struct
 */
int * __fastcall FUN_0045cf10(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;

  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045cf95;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042cbd0(param_1);
  local_8 = 0;
  FUN_0040ab70(param_1 + 0x67);
  *(short *)(param_1 + 0xb0) = 1;
  *param_1 = &PTR_FUN_00477380;
  param_1[0x66] = 0;
  *(int *)((int)param_1 + 0x2c2) = 0; /* TODO: unknown offset 0x2c2 on unknown struct */
  *(int *)((int)param_1 + 0x2c6) = 0; /* TODO: unknown offset 0x2c6 on unknown struct */
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



/* Function: FUN_0045cfb0 @ 0x0045cfb0 */

void * __thiscall FUN_0045cfb0(void *this,byte param_1)

{
  FUN_0045cfd0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045cfd0 @ 0x0045cfd0 */

void __fastcall FUN_0045cfd0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0045d028;
  *param_1 = &PTR_FUN_00477380;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0045d01a();
  local_8 = 0xffffffff;
  FUN_0045d032();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045d01a @ 0x0045d01a */

void FUN_0045d01a(void)

{
  int unaff_EBP;
  
  FUN_0040ac40((int *)(*(int *)(unaff_EBP + -0x10) + 0x19c));
  return;
}



/* Function: FUN_0045d032 @ 0x0045d032 */

void FUN_0045d032(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0045d040 @ 0x0045d040 */

void __fastcall FUN_0045d040(int *param_1)

{
  int uVar1;
  int iVar2;
  char cVar3;

  FUN_0041d780(*(void **)(DAT_004897c0 + 0x4a),param_1);
  FUN_0041dd40(*(void **)(DAT_004897c0 + 0x4a));
  *(int *)(*(int *)(DAT_004897c0 + 0x4a) + 0x16) = 3;
  if (*(void **)(DAT_004897c0 + 0x44) != (void *)0x0) {
    iVar2 = 0x45d085;
    FUN_0041d780(*(void **)(DAT_004897c0 + 0x44),*(void **)(DAT_004897c0 + 0x4a));
    cVar3 = '\0';
    uVar1 = 0xffffff9c;
    FUN_00401050(&ghidra_stack_ffffffec,-100);
    FUN_00401050(&ghidra_stack_ffffffe8,-100);
    FUN_0041d3a0(*(void **)(DAT_004897c0 + 0x44),uVar1,iVar2,cVar3);
    FUN_0041dd40(*(void **)(DAT_004897c0 + 0x44));
    FUN_0041c2a0(*(void **)(DAT_004897c0 + 0x44),0);
  }
  ((void (*)(void))((void **)(*param_1))[0xdc / 4])(); /* param_1->vtable[55] */
  FUN_0041dd40((void *)param_1[0x66]);
  return;
}



/* Function: FUN_0045d140 @ 0x0045d140 */

void __fastcall FUN_0045d140(int *param_1)

{
    /* TODO: 42 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045d360 @ 0x0045d360 */

void __cdecl FUN_0045d360(uint param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_00461940(DAT_004838c0,param_1);
    return;
  }
  FUN_00461830(DAT_004838c0,param_1);
  return;
}



/* Function: FUN_0045d380 @ 0x0045d380 */

void __cdecl FUN_0045d380(int param_1,short param_2,char param_3,char param_4)

{
    /* TODO: 25 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045d410 @ 0x0045d410 */

void __cdecl FUN_0045d410(int param_1,char param_2,char param_3)

{
  short sVar1;
  
  if (param_1 != 0) {
    sVar1 = 0;
    do {
      FUN_0045d380(param_1,*(short *)(param_1 + 8 + sVar1 * 2),param_2,param_3);
      if (param_2 != '\0') {
        FUN_004564c0();
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < 8);
  }
  return;
}



/* Function: FUN_0045d460 @ 0x0045d460 */

void __cdecl FUN_0045d460(uint param_1,char param_2)

{
    /* TODO: 25 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045d510 @ 0x0045d510 */

void __cdecl FUN_0045d510(uint param_1,char param_2)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  
  puVar1 = FUN_004608a0(DAT_004838c0,(byte)param_1);
  if (puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 0xb) == 0x74726170) {
      FUN_0045d460(param_1,param_2);
      return;
    }
    if (*(int *)(puVar1 + 0xb) != 0x74736c63) {
      FUN_0045d360(param_1,param_2);
      return;
    }
    puVar1 = FUN_0040f040(DAT_004838c0,param_1);
    if (puVar1 != (ushort *)0x0) {
      sVar3 = 1;
      if (0 < (short)*puVar1) {
        do {
          iVar2 = (int)sVar3;
          sVar3 = sVar3 + 1;
          FUN_0045d510(*(uint *)(puVar1 + iVar2 * 2 + -1),param_2);
        } while (sVar3 <= (short)*puVar1);
      }
      FUN_0040f070(DAT_004838c0,param_1,(uint)puVar1);
    }
  }
  return;
}



/* Function: FUN_0045d5d0 @ 0x0045d5d0 */

void FUN_0045d5d0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489460,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045d620 @ 0x0045d620 */

void FUN_0045d620(void)

{
  return;
}



/* Function: FUN_0045d640 @ 0x0045d640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d640(void)

{
  _DAT_0048946e = 0;
  _DAT_0048946c = 0;
  return;
}



/* Function: FUN_0045d650 @ 0x0045d650 */

void FUN_0045d650(void)

{
  _atexit(FUN_0045d660);
  return;
}



/* Function: FUN_0045d660 @ 0x0045d660 */

void FUN_0045d660(void)

{
  return;
}



/* Function: FUN_0045d680 @ 0x0045d680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d680(void)

{
  _DAT_0048946a = 0;
  _DAT_00489468 = 0;
  return;
}



/* Function: FUN_0045d690 @ 0x0045d690 */

void FUN_0045d690(void)

{
  _atexit(FUN_0045d6a0);
  return;
}



/* Function: FUN_0045d6a0 @ 0x0045d6a0 */

void FUN_0045d6a0(void)

{
  return;
}



/* Function: FUN_0045d6b0 @ 0x0045d6b0 */

void __cdecl FUN_0045d6b0(short *param_1)

{
  int *puVar1;
  int iVar2;
  short sVar3;

  sVar3 = 0;
  if (param_1 != (short *)0x0) {
    *param_1 = 0;
    param_1[1] = 0xff;
    *(int *)(param_1 + 7) = 0;
    param_1[2] = 0xff;
    *(int *)(param_1 + 9) = 0;
    param_1[6] = 0;
    *(int *)(param_1 + 0xb) = 0;
    param_1[0x11] = 0;
    *(int *)(param_1 + 0xd) = 0;
    *(int *)(param_1 + 0xf) = 0;
    param_1[5] = 1;
    do {
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 1;
      puVar1 = (int *)(param_1 + iVar2 * 7 + 0x12);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(short *)(puVar1 + 3) = 0;
    } while (sVar3 < 6);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}



/* Function: FUN_0045d720 @ 0x0045d720 */

/* WARNING: Removing unreachable block (ram,0x0045d746) */

short __cdecl FUN_0045d720(int param_1,ushort param_2)

{
  if (param_1 != 0) {
    if (*(ushort *)(param_1 + 0xc) != param_2) {
      *(short *)(param_1 + 0xc) = 4;
      if ((param_2 & 0xff) < 5) {
        *(ushort *)(param_1 + 0xc) = param_2 & 0xff;
      }
      if ((0 < (short)*(ushort *)(param_1 + 0xc)) && ((param_2 & 0x4000) != 0)) {
        *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x4000;
      }
    }
    return *(short *)(param_1 + 0xc);
  }
  return 0xffff;
}



/* Function: FUN_0045d780 @ 0x0045d780 */

short __cdecl FUN_0045d780(short *param_1,short param_2)

{
  if (param_1 == (short *)0x0) {
    return -1;
  }
  if (*param_1 != param_2) {
    if (param_2 < 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = 0xff;
      if (param_2 < 0x100) {
        *param_1 = param_2;
      }
    }
    FUN_0045d7d0(param_1);
  }
  return *param_1;
}



/* Function: FUN_0045d7d0 @ 0x0045d7d0 */

void __cdecl FUN_0045d7d0(short *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  if (DAT_0047fc80 != 0) {
    param_1[3] = (ushort)((uint)(param_1[1] * iVar1) >> 8) & 0xff;
    param_1[4] = (ushort)((uint)(param_1[2] * iVar1) >> 8) & 0xff;
    return;
  }
  param_1[4] = (ushort)((uint)(param_1[1] * iVar1) >> 8) & 0xff;
  param_1[3] = (ushort)((uint)(param_1[2] * iVar1) >> 8) & 0xff;
  return;
}



/* Function: FUN_0045d830 @ 0x0045d830 */

int __cdecl FUN_0045d830(short *param_1,short param_2,short param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == (short *)0x0) {
    return 0xffffffff;
  }
  if (param_1[1] == param_2) {
    bVar1 = true;
  }
  else if (param_2 < 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0xff;
    if (param_2 < 0x100) {
      param_1[1] = param_2;
    }
  }
  if (param_1[2] == param_3) {
    if (bVar1) goto LAB_0045d8bd;
  }
  else if (param_3 < 0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = 0xff;
    if (param_3 < 0x100) {
      param_1[2] = param_3;
    }
  }
  FUN_0045d7d0(param_1);
LAB_0045d8bd:
  return *(int *)(param_1 + 1);
}



/* Function: FUN_0045d8e0 @ 0x0045d8e0 */

uint __cdecl FUN_0045d8e0(int param_1)

{
  int iVar1;
  int in_EAX;
  short uVar3;
  int iVar2;
  
  uVar3 = (short)((uint)in_EAX >> 0x10);
  if (param_1 == 0) {
    return CONCAT22(uVar3,0xffff);
  }
  iVar1 = *(int *)(param_1 + 0x1e);
  if (iVar1 == 0) {
    return CONCAT22(uVar3,0xfffe);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    return CONCAT22(uVar3,0xfffd);
  }
  iVar2 = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0x1a)) / 0x73e;
  if (*(int *)(iVar1 + 0x14) <= iVar2) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)*(byte *)(*(int *)(iVar1 + 0x10) + iVar2));
}



/* Function: FUN_0045d930 @ 0x0045d930 */

bool __cdecl FUN_0045d930(int param_1)

{
  if (param_1 == 0) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0;
}



/* Function: FUN_0045d950 @ 0x0045d950 */

uint __cdecl FUN_0045d950(int param_1)

{
  if (param_1 == 0) {
    return 0xffff;
  }
  return ((*(ushort *)(param_1 + 0xc) & 0x2000) == 0) - 1 & 0xfffffffb;
}



/* Function: FUN_0045d990 @ 0x0045d990 */

void FUN_0045d990(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489470,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045d9e0 @ 0x0045d9e0 */

void FUN_0045d9e0(void)

{
  return;
}



/* Function: FUN_0045da00 @ 0x0045da00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045da00(void)

{
  _DAT_0048947e = 0;
  _DAT_0048947c = 0;
  return;
}



/* Function: FUN_0045da10 @ 0x0045da10 */

void FUN_0045da10(void)

{
  _atexit(FUN_0045da20);
  return;
}



/* Function: FUN_0045da20 @ 0x0045da20 */

void FUN_0045da20(void)

{
  return;
}



/* Function: FUN_0045da40 @ 0x0045da40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045da40(void)

{
  _DAT_0048947a = 0;
  _DAT_00489478 = 0;
  return;
}



/* Function: FUN_0045da50 @ 0x0045da50 */

void FUN_0045da50(void)

{
  _atexit(FUN_0045da60);
  return;
}



/* Function: FUN_0045da60 @ 0x0045da60 */

void FUN_0045da60(void)

{
  return;
}



/* Function: FUN_0045da70 @ 0x0045da70 */

void __thiscall FUN_0045da70(void *this,int param_1)

{
    /* TODO: 13 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045dad0 @ 0x0045dad0 */

void __fastcall FUN_0045dad0(int param_1)

{
  FUN_0045daf0(param_1);
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = 0;
  return;
}



/* Function: FUN_0045daf0 @ 0x0045daf0 */

int __fastcall FUN_0045daf0(int param_1)

{
    /* TODO: 9 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045db40 @ 0x0045db40 */

void FUN_0045db40(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489480,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045db90 @ 0x0045db90 */

void FUN_0045db90(void)

{
  return;
}



/* Function: FUN_0045dbb0 @ 0x0045dbb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dbb0(void)

{
  _DAT_0048948e = 0;
  _DAT_0048948c = 0;
  return;
}



/* Function: FUN_0045dbc0 @ 0x0045dbc0 */

void FUN_0045dbc0(void)

{
  _atexit(FUN_0045dbd0);
  return;
}



/* Function: FUN_0045dbd0 @ 0x0045dbd0 */

void FUN_0045dbd0(void)

{
  return;
}



/* Function: FUN_0045dbf0 @ 0x0045dbf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dbf0(void)

{
  _DAT_0048948a = 0;
  _DAT_00489488 = 0;
  return;
}



/* Function: FUN_0045dc00 @ 0x0045dc00 */

void FUN_0045dc00(void)

{
  _atexit(FUN_0045dc10);
  return;
}



/* Function: FUN_0045dc10 @ 0x0045dc10 */

void FUN_0045dc10(void)

{
  return;
}



/* Function: FUN_0045dc30 @ 0x0045dc30 */

void FUN_0045dc30(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489490,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045dc70 @ 0x0045dc70 */

void FUN_0045dc70(void)

{
  _atexit(FUN_0045dc80);
  return;
}



/* Function: FUN_0045dc80 @ 0x0045dc80 */

void FUN_0045dc80(void)

{
  return;
}



/* Function: FUN_0045dca0 @ 0x0045dca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dca0(void)

{
  _DAT_0048949e = 0;
  _DAT_0048949c = 0;
  return;
}



/* Function: FUN_0045dcb0 @ 0x0045dcb0 */

void FUN_0045dcb0(void)

{
  _atexit(FUN_0045dcc0);
  return;
}



/* Function: FUN_0045dcc0 @ 0x0045dcc0 */

void FUN_0045dcc0(void)

{
  return;
}



/* Function: FUN_0045dce0 @ 0x0045dce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dce0(void)

{
  _DAT_0048949a = 0;
  _DAT_00489498 = 0;
  return;
}



/* Function: FUN_0045dcf0 @ 0x0045dcf0 */

void FUN_0045dcf0(void)

{
  _atexit(FUN_0045dd00);
  return;
}



/* Function: FUN_0045dd00 @ 0x0045dd00 */

void FUN_0045dd00(void)

{
  return;
}



/* Function: FUN_0045dd10 @ 0x0045dd10 */

int * __fastcall FUN_0045dd10(int *param_1)

{
  *param_1 = &PTR_FUN_00477490;
  return param_1;
}



/* Function: FUN_0045dd20 @ 0x0045dd20 */

void * __thiscall FUN_0045dd20(void *this,byte param_1)

{
  FUN_0045dd40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045dd40 @ 0x0045dd40 */

void __fastcall FUN_0045dd40(int *param_1)

{
  *param_1 = &PTR_FUN_00477490;
  return;
}



/* Function: FUN_0045dd50 @ 0x0045dd50 */

void FUN_0045dd50(void)

{
    /* TODO: 197 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045e2c4 @ 0x0045e2c4 */

void FUN_0045e2c4(void)

{
  return;
}



/* Function: FUN_0045e2cc @ 0x0045e2cc */

void FUN_0045e2cc(void)

{
  return;
}



/* Function: FUN_0045e2dc @ 0x0045e2dc */

void FUN_0045e2dc(void)

{
  return;
}



/* Function: FUN_0045e2e4 @ 0x0045e2e4 */

void FUN_0045e2e4(void)

{
  return;
}



/* Function: FUN_0045e2ec @ 0x0045e2ec */

void FUN_0045e2ec(void)

{
  return;
}



/* Function: FUN_0045e2f4 @ 0x0045e2f4 */

void FUN_0045e2f4(void)

{
  return;
}



/* Function: FUN_0045e311 @ 0x0045e311 */

void FUN_0045e311(void)

{
  return;
}



/* Function: FUN_0045e319 @ 0x0045e319 */

void FUN_0045e319(void)

{
  return;
}



/* Function: FUN_0045e321 @ 0x0045e321 */

void FUN_0045e321(void)

{
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x480));
  return;
}



/* Function: FUN_0045e336 @ 0x0045e336 */

void FUN_0045e336(void)

{
  int unaff_EBP;
  
  FUN_0044e840((int *)(unaff_EBP + -0x58));
  return;
}



/* Function: FUN_0045e350 @ 0x0045e350 */

void FUN_0045e350(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004894a0,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045e3a0 @ 0x0045e3a0 */

void FUN_0045e3a0(void)

{
  return;
}



/* Function: FUN_0045e3c0 @ 0x0045e3c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e3c0(void)

{
  _DAT_004894ae = 0;
  _DAT_004894ac = 0;
  return;
}



/* Function: FUN_0045e3d0 @ 0x0045e3d0 */

void FUN_0045e3d0(void)

{
  _atexit(FUN_0045e3e0);
  return;
}



/* Function: FUN_0045e3e0 @ 0x0045e3e0 */

void FUN_0045e3e0(void)

{
  return;
}



/* Function: FUN_0045e400 @ 0x0045e400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e400(void)

{
  _DAT_004894aa = 0;
  _DAT_004894a8 = 0;
  return;
}



/* Function: FUN_0045e410 @ 0x0045e410 */

void FUN_0045e410(void)

{
  _atexit(FUN_0045e420);
  return;
}



/* Function: FUN_0045e420 @ 0x0045e420 */

void FUN_0045e420(void)

{
  return;
}



/* Function: FUN_0045e430 @ 0x0045e430 */

void * __thiscall
FUN_0045e430(SoundPlayer *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0045e4d1;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  *(void ***)this = &PTR_FUN_004774c0;
  this->sequence_data[55] = 0;
  this->sequence_data[56] = 1;
  FUN_0040e270(DAT_004897c0,0xe);
  iVar1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 1;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 4) = DVar2;
  *(DWORD *)(iVar1 + 0xc) = DVar2;
  *(char *)(DAT_004896b0 + 0x29) = 1;
  *unaff_FS_OFFSET = local_10;
  return this;
}



/* Function: FUN_0045e4f0 @ 0x0045e4f0 */

void * __thiscall FUN_0045e4f0(void *this,byte param_1)

{
  FUN_0045e510(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045e510 @ 0x0045e510 */

void __fastcall FUN_0045e510(GameWidget *param_1)

{
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;

  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0045e59e;
  param_1->vtable = &PTR_FUN_004774c0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1->object_ptr != (void *)0x0) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  iVar1 = DAT_004896b0;
  if (*(char *)&param_1->scrollbar_ref != '\0') {
    *(char *)(DAT_004896b0 + 0x28) = 0;
    DVar2 = GetTickCount();
    *(DWORD *)(iVar1 + 4) = DVar2;
    *(DWORD *)(iVar1 + 0xc) = DVar2;
  }
  local_8 = 0xffffffff;
  *(char *)(DAT_004896b0 + 0x29) = 0;
  FUN_0045e5a8();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045e5a8 @ 0x0045e5a8 */

void FUN_0045e5a8(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0045e5b0 @ 0x0045e5b0 */

void __fastcall FUN_0045e5b0(GameWidget *param_1)

{
  if (param_1->object_ptr != (void *)0x0) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  FUN_0042bec0(param_1);
  return;
}



/* Function: FUN_0045e7cc @ 0x0045e7cc */

void FUN_0045e7cc(void)

{
  return;
}



/* Function: FUN_0045e91f @ 0x0045e91f */

void FUN_0045e91f(void)

{
  return;
}



/* Function: FUN_0045e970 @ 0x0045e970 */

void __fastcall FUN_0045e970(GameWidget *param_1)

{
  int iVar1;
  DWORD DVar2;

  iVar1 = *(int *)(DAT_004897c0 + 0x52);
  *(char *)(iVar1 + 0x174) = 1;
  FUN_0041dad0(*(void **)(iVar1 + 0x160),1,'\0');
  iVar1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x27) = 0;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 4) = DVar2;
  *(DWORD *)(iVar1 + 0xc) = DVar2;
  if (param_1->object_ptr != (void *)0x0) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  FUN_0042c3f0(param_1);
  return;
}



/* Function: FUN_0045ecd0 @ 0x0045ecd0 */

void FUN_0045ecd0(void)

{
    /* TODO: 35 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0045eda0 @ 0x0045eda0 */

void FUN_0045eda0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004896b8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045edf0 @ 0x0045edf0 */

void FUN_0045edf0(void)

{
  return;
}



/* Function: FUN_0045ee10 @ 0x0045ee10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ee10(void)

{
  _DAT_00489ad2 = 0;
  _DAT_00489ad0 = 0;
  return;
}



/* Function: FUN_0045ee20 @ 0x0045ee20 */

void FUN_0045ee20(void)

{
  _atexit(FUN_0045ee30);
  return;
}



/* Function: FUN_0045ee30 @ 0x0045ee30 */

void FUN_0045ee30(void)

{
  return;
}



/* Function: FUN_0045ee50 @ 0x0045ee50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ee50(void)

{
  _DAT_00489ace = 0;
  _DAT_00489acc = 0;
  return;
}



/* Function: FUN_0045ee60 @ 0x0045ee60 */

void FUN_0045ee60(void)

{
  _atexit(FUN_0045ee70);
  return;
}



/* Function: FUN_0045ee70 @ 0x0045ee70 */

void FUN_0045ee70(void)

{
  return;
}



/* Function: FUN_0045ee90 @ 0x0045ee90 */

void FUN_0045ee90(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489ad8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045eed0 @ 0x0045eed0 */

void FUN_0045eed0(void)

{
  _atexit(FUN_0045eee0);
  return;
}



/* Function: FUN_0045eee0 @ 0x0045eee0 */

void FUN_0045eee0(void)

{
  return;
}



/* Function: FUN_0045ef00 @ 0x0045ef00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ef00(void)

{
  _DAT_00489ae6 = 0;
  _DAT_00489ae4 = 0;
  return;
}



/* Function: FUN_0045ef10 @ 0x0045ef10 */

void FUN_0045ef10(void)

{
  _atexit(FUN_0045ef20);
  return;
}



/* Function: FUN_0045ef20 @ 0x0045ef20 */

void FUN_0045ef20(void)

{
  return;
}



/* Function: FUN_0045ef40 @ 0x0045ef40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ef40(void)

{
  _DAT_00489ae2 = 0;
  _DAT_00489ae0 = 0;
  return;
}



/* Function: FUN_0045ef50 @ 0x0045ef50 */

void FUN_0045ef50(void)

{
  _atexit(FUN_0045ef60);
  return;
}



/* Function: FUN_0045ef60 @ 0x0045ef60 */

void FUN_0045ef60(void)

{
  return;
}



/* Function: FUN_0045ef70 @ 0x0045ef70 */

short * __cdecl FUN_0045ef70(int *param_1)

{
    /* TODO: 10 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045efd0 @ 0x0045efd0 */

char __cdecl FUN_0045efd0(int *param_1,char param_2)

{
    /* TODO: 58 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045f100 @ 0x0045f100 */

char __cdecl FUN_0045f100(int param_1,char param_2)

{
  char uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)FUN_0043a6b0(DAT_004838c0,param_1);
  if (piVar2 != (int *)0x0) {
    uVar1 = FUN_0045efd0(piVar2,param_2);
    FUN_0043a700(DAT_004838c0,param_1,piVar2);
  }
  return uVar1;
}



/* Function: FUN_0045f160 @ 0x0045f160 */

void FUN_0045f160(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489ae8,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045f1b0 @ 0x0045f1b0 */

void FUN_0045f1b0(void)

{
  return;
}



/* Function: FUN_0045f1d0 @ 0x0045f1d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f1d0(void)

{
  _DAT_00489af6 = 0;
  _DAT_00489af4 = 0;
  return;
}



/* Function: FUN_0045f1e0 @ 0x0045f1e0 */

void FUN_0045f1e0(void)

{
  _atexit(FUN_0045f1f0);
  return;
}



/* Function: FUN_0045f1f0 @ 0x0045f1f0 */

void FUN_0045f1f0(void)

{
  return;
}



/* Function: FUN_0045f210 @ 0x0045f210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f210(void)

{
  _DAT_00489af2 = 0;
  _DAT_00489af0 = 0;
  return;
}



/* Function: FUN_0045f220 @ 0x0045f220 */

void FUN_0045f220(void)

{
  _atexit(FUN_0045f230);
  return;
}



/* Function: FUN_0045f230 @ 0x0045f230 */

void FUN_0045f230(void)

{
  return;
}



/* Function: FUN_0045f250 @ 0x0045f250 */

void FUN_0045f250(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00489b00,uVar1,in_stack_fffffff4);
  return;
}



/* Function: FUN_0045f290 @ 0x0045f290 */

void FUN_0045f290(void)

{
  _atexit(FUN_0045f2a0);
  return;
}



/* Function: FUN_0045f2a0 @ 0x0045f2a0 */

void FUN_0045f2a0(void)

{
  return;
}



/* Function: FUN_0045f2c0 @ 0x0045f2c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f2c0(void)

{
  _DAT_00489b12 = 0;
  _DAT_00489b10 = 0;
  return;
}



/* Function: FUN_0045f2d0 @ 0x0045f2d0 */

void FUN_0045f2d0(void)

{
  _atexit(FUN_0045f2e0);
  return;
}



/* Function: FUN_0045f2e0 @ 0x0045f2e0 */

void FUN_0045f2e0(void)

{
  return;
}



/* Function: FUN_0045f300 @ 0x0045f300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f300(void)

{
  _DAT_00489b0e = 0;
  _DAT_00489b0c = 0;
  return;
}



/* Function: FUN_0045f310 @ 0x0045f310 */

void FUN_0045f310(void)

{
  _atexit(FUN_0045f320);
  return;
}



/* Function: FUN_0045f320 @ 0x0045f320 */

void FUN_0045f320(void)

{
  return;
}



/* Function: FUN_0045f6fa @ 0x0045f6fa */

void FUN_0045f6fa(void)

{
  return;
}



/* Function: FUN_0045f702 @ 0x0045f702 */

void FUN_0045f702(void)

{
  return;
}



/* Function: FUN_0045f70a @ 0x0045f70a */

void FUN_0045f70a(void)

{
  return;
}



/* Function: FUN_0045f712 @ 0x0045f712 */

void FUN_0045f712(void)

{
  return;
}



/* Function: FUN_0045f71a @ 0x0045f71a */

void FUN_0045f71a(void)

{
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x878));
  return;
}



/* Function: FUN_0045f725 @ 0x0045f725 */

void FUN_0045f725(void)

{
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x46c));
  return;
}



/* Function: FUN_0045f73a @ 0x0045f73a */

void FUN_0045f73a(void)

{
  int unaff_EBP;
  
  FUN_0044e840((int *)(unaff_EBP + -0x60));
  return;
}



/* Function: FUN_0045f750 @ 0x0045f750 */

void * __thiscall
FUN_0045f750(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
    /* TODO: 138 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0045fb91 @ 0x0045fb91 */

void FUN_0045fb91(void)

{
  return;
}



/* Function: FUN_0045fb99 @ 0x0045fb99 */

void FUN_0045fb99(void)

{
  return;
}



/* Function: FUN_0045fbc0 @ 0x0045fbc0 */

void * __thiscall FUN_0045fbc0(void *this,byte param_1)

{
  FUN_0045fbe0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0045fbe0 @ 0x0045fbe0 */

/* Function: FUN_0045fbe0 @ 0x0045fbe0
 * Struct types: GameWidget-like (param_1) - treats fields at 0x126 and 0x13A as arrays of 5 pointers
 * TODO: This may be a subclass of GameWidget with different layout at 0x126-0x155
 */
void __fastcall FUN_0045fbe0(GameWidget *param_1)

{
  int *puVar1;
  int iVar2;
  DWORD DVar3;
  short sVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;

  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0045fca7;
  *unaff_FS_OFFSET = &local_10;
  param_1->vtable = &PTR_FUN_004775b0;
  sVar4 = 0;
  local_8 = 0;
  do {
    /* array access at 0x126 + sVar4*4: object_ptr, scrollbar_ref, field_12e area, field_130 area, cleanup_fn_ptr */
    puVar1 = *(int **)((int)param_1 + sVar4 * 4 + 0x126);
    if (puVar1 != (int *)0x0) {
      ((void (*)(void))((void **)*puVar1)[0])();
    }
    /* array access at 0x13A + sVar4*4: slot_ptr_0, _pad13e area, name_data_ptr, _pad146 area, group_data_a */
    puVar1 = *(int **)((int)param_1 + sVar4 * 4 + 0x13a);
    if (puVar1 != (int *)0x0) {
      ((void (*)(void))((void **)*puVar1)[0])();
    }
    sVar4 = sVar4 + 1;
  } while (sVar4 < 5);
  /* 0x152 falls in _pad14e+4 area */
  if (*(int **)((int)param_1 + 0x152) != (int *)0x0) {
    ((void (*)(void))**(void ***)((int)param_1 + 0x152))(); /* obj at param_1+0x152->vtable[0] */
    *(int *)((int)param_1 + 0x152) = 0; /* TODO: unknown offset 0x152 on GameWidget (_pad14e area) */
  }
  /* 0x14e = _pad14e */
  if (*(int **)((int)param_1 + 0x14e) != (int *)0x0) {
    ((void (*)(void))**(void ***)((int)param_1 + 0x14e))(); /* obj at param_1+0x14e->vtable[0] */
  }
  iVar2 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 0;
  DVar3 = GetTickCount();
  *(DWORD *)(iVar2 + 4) = DVar3;
  *(DWORD *)(iVar2 + 0xc) = DVar3;
  local_8 = 0xffffffff;
  *(char *)(DAT_004896b0 + 0x2c) = 0;
  FUN_0045fcb1();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0045fcb1 @ 0x0045fcb1 */

void FUN_0045fcb1(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0045fe2d @ 0x0045fe2d */

void FUN_0045fe2d(void)

{
  return;
}



/* Function: FUN_0045fe99 @ 0x0045fe99 */

void FUN_0045fe99(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_0045feb0 @ 0x0045feb0 */

void __cdecl FUN_0045feb0(int param_1,char param_2)

{
  int iVar1;
  short uVar2;
  ushort uVar3;
  short uVar4;
  int *puVar5;
  short sVar6;

  uVar2 = *(short *)(param_1 + 8);
  *(uint *)(param_1 + 8) =
       CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 10),
                         (char)((ushort)*(short *)(param_1 + 10) >> 8)));
  if (param_2 == '\0') {
    uVar2 = *(short *)(param_1 + 0xc);
    *(short *)(param_1 + 0xc) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(param_1 + 0xe);
    *(short *)(param_1 + 0xe) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x10) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  sVar6 = 0;
  uVar3 = *(ushort *)(param_1 + 0xe);
  if (uVar3 != 0) {
    do {
      puVar5 = (int *)(param_1 + 0x1c + sVar6 * 0xe);
      iVar1 = param_1 + sVar6 * 0xe;
      *puVar5 = CONCAT22(CONCAT11((char)*(short *)puVar5,
                                  (char)((ushort)*(short *)puVar5 >> 8)),
                         CONCAT11((char)*(short *)((int)puVar5 + 2),
                                  (char)((ushort)*(short *)((int)puVar5 + 2) >> 8)));
      puVar5 = (int *)(iVar1 + 0x20);
      uVar2 = *(short *)puVar5;
      uVar4 = *(short *)(iVar1 + 0x22);
      *puVar5 = CONCAT22(CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8)),
                         CONCAT11((char)uVar4,(char)((ushort)uVar4 >> 8)));
      sVar6 = sVar6 + 1;
    } while ((int)sVar6 < (int)(uint)uVar3);
  }
  if (param_2 != '\0') {
    uVar2 = *(short *)(param_1 + 0xc);
    *(short *)(param_1 + 0xc) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(param_1 + 0xe);
    *(short *)(param_1 + 0xe) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
    uVar2 = *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x10) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  }
  return;
}



/* Function: FUN_0045ffc0 @ 0x0045ffc0 */

/* Function: FUN_0045ffc0 @ 0x0045ffc0
 * Struct types: unknown struct ~0x3E bytes (param_1)
 * TODO: byte offsets 0x26, 0x2a, 0x3a suggest UIElement-like but int-array indexing doesn't match
 */
int * __fastcall FUN_0045ffc0(int *param_1)

{
  *param_1 = &PTR_FUN_0047771c;
  param_1[2] = 0;
  param_1[3] = 0;
  *(char *)(param_1 + 9) = 0;
  *(int *)((int)param_1 + 0x2a) = 0; /* TODO: unknown offset 0x2a */
  *(int *)((int)param_1 + 0x26) = 0; /* TODO: unknown offset 0x26 */
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *(int *)((int)param_1 + 0x3a) = 0; /* TODO: unknown offset 0x3a */
  return param_1;
}



/* Function: FUN_0045fff0 @ 0x0045fff0 */

void * __thiscall FUN_0045fff0(void *this,byte param_1)

{
  FUN_00460010(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



