/*
 * crt_startup.c - CRT startup and runtime
 * Address range: 0x470000 - 0x47FFFF
 * Functions: 65
 *
 * Reconstructed source for MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"

/* FUN_00470000 @ 0x00470000 */

void FUN_00470000(void)

{
  DWORD DVar1;
  int n2;
  DWORD *pDVar3;
  
  n2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (n2 != 0) {
    pDVar3 = FUN_00471930(0x484048,0);
    if ((pDVar3 != (DWORD *)0x0) && (DVar1 = pDVar3[1], pDVar3[1] = DVar1 - 1, DVar1 - 1 == 0)) {
      FUN_00471990(0x484048,pDVar3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  }
  return;
}


/* FUN_00470050 @ 0x00470050 */

/* NOTE: Removing unreachable block (ram,0x00470061) */

int FUN_00470050(int *param_1)

{
  char *pc1;
  int u2;
  int n3;
  int n4;
  
  n3 = *param_1;
  if (n3 == 2) {
    n4 = 1;
  }
  else if ((n3 < 3) || (0xe < n3)) {
    n4 = 0;
    n3 = 1;
  }
  else {
    n4 = 0;
  }
  pc1 = FUN_004700b0(n3);
  u2 = FUN_004719b0(pc1,n4);
  return u2;
}


/* FUN_004700b0 @ 0x004700b0 */

char * __fastcall FUN_004700b0(int param_1)

{
  if (param_1 == 2) {
    return "Out of memory.  Please free some memory, then choose retry.";
  }
  return &DAT_00483dfc + param_1 * 0x19;
}


/* FUN_004700d0 @ 0x004700d0 */

FARPROC FUN_004700d0(FARPROC param_1)

{
  bool b1;
  int n2;
  int __extra_ret;
  FARPROC pu3;
  
  n2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (n2 != 0) {
    if ((param_1 == (FARPROC)0x0) ||
       (b1 = FUN_00471550(param_1), CONCAT31(__extra_ret,b1) != 0)) {
      pu3 = (FARPROC)PTR_FUN_00484048;
      PTR_FUN_00484048 = param_1;
    }
    else {
      pu3 = (FARPROC)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
    return pu3;
  }
  return (FARPROC)0x0;
}


/* FUN_00470140 @ 0x00470140 */

unsigned int FUN_00470140(int param_1)

{
  unsigned int u1;

  if (*(short *)(param_1 + 0x20) != -0x4153) {
    FUN_0046fd70(0,10);
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  u1 = *(unsigned int *)(param_1 + 0x2c);
  if ((*(byte *)(param_1 + 0x22) & 2) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return u1;
}


/* FUN_00470240 @ 0x00470240
 * NOTE: SmartHeap pool walk/iterate entry point. param_1 is a SmartHeap pool descriptor.
 * Offset 0x22 = pool flags (bit 1 = threadsafe), 0x48 = critical_section, 0x60 = lock_count.
 * NOT a game struct.
 */

int FUN_00470240(int *param_1,int *param_2)

{
  int n1;
  
  if ((short)param_1[8] != -0x4153) {
    FUN_0046fd70(0,10);
    return -2;
  }
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    param_1[0x18] = param_1[0x18] + 1;
  }
  n1 = FUN_004702b0(param_1,param_2,1,0);
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    param_1[0x18] = param_1[0x18] + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  }
  return n1;
}


/* FUN_004702b0 @ 0x004702b0 */

int __fastcall FUN_004702b0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *pu1;
  ushort u2;
  int n3;
  int loc_8;
  
  if ((*param_2 == 0) && (param_4 == 0)) {
    u2 = 0;
    n3 = *param_1;
    param_2[1] = (int)param_1;
  }
  else {
    n3 = param_2[8];
    u2 = (*(ushort *)(n3 + 2) & 0x7000) >> 0xc;
  }
  while( true ) {
    while (n3 == 0) {
      u2 = u2 + 1;
      if (u2 == 5) {
        return 0;
      }
      n3 = param_1[u2];
    }
    pu1 = *(int **)(n3 + 4);
    switch((uint)u2) {
    case 0:
    case 2:
      loc_8 = FUN_004705d0(pu1,param_2);
      param_3 = 1;
      break;
    case 1:
      loc_8 = FUN_00470750(pu1,param_2,param_3);
      break;
    case 3:
      loc_8 = FUN_004703f0(pu1,param_2);
      param_3 = 1;
      break;
    case 4:
      loc_8 = FUN_00470490(pu1,param_2,param_3);
    }
    if (loc_8 != 0) break;
    *param_2 = 0;
    n3 = *(int *)(n3 + 8);
    if (param_1[u2] == n3) {
      n3 = 0;
    }
  }
  if (loc_8 == -2) {
    FUN_0046fd70(*pu1,0xb);
  }
  param_2[8] = n3;
  return loc_8;
}


/* FUN_004703f0 @ 0x004703f0
 * NOTE: SmartHeap large-block walk. param_1 is a SmartHeap page descriptor.
 * Offsets 0x10, 0x14, 0x15 are page descriptor fields. NOT a game struct.
 */

int __fastcall FUN_004703f0(LPCVOID param_1,int *param_2)

{
  int *pn1;
  uint u2;
  
  if (*param_2 != 0) {
    return 0;
  }
  *param_2 = (int)param_1 + 0x1c;
  u2 = FUN_00471410(param_1);
  param_2[4] = u2 - 0x1c;
  pn1 = *(int **)((int)param_1 + 0x10); /* TODO: SmartHeap page free_ptr at 0x10 */
  param_2[5] = (int)pn1;
  if ((pn1 != (int *)0x0) && (*pn1 != *param_2)) {
    return 0xfffffffe;
  }
  if (*(int *)((int)param_1 + 0x10) == 0) { /* TODO: SmartHeap page free_ptr at 0x10 */
    param_2[6] = 0;
  }
  else {
    param_2[6] = (*(uint *)(*(int *)((int)param_1 + 0x10) + 4) & 0xff0000) >> 0x10; /* TODO: SmartHeap page->free_ptr->ref_count */
  }
  param_2[3] = 1;
  if (*(char *)((int)param_1 + 0x15) != '\0') { /* TODO: SmartHeap page flags at 0x15 */
    if (*(char *)((int)param_1 + 0x15) != '\x02') { /* TODO: SmartHeap page flags at 0x15 */
      return 0xfffffffe;
    }
    param_2[2] = 2;
    return 1;
  }
  param_2[2] = 4;
  return 1;
}


/* FUN_00470490 @ 0x00470490
 * NOTE: SmartHeap slab walk. param_1 is a SmartHeap page descriptor.
 * Offsets 0x10, 0x14, 0x1c are page descriptor fields. NOT a game struct.
 */

int __fastcall FUN_00470490(LPCVOID param_1,int *param_2,int param_3)

{
  char c1;
  int __extra_ret;
  uint u2;
  int n3;
  int *pn4;
  uint u5;
  bool b6;
  
  n3 = *param_2;
  if (n3 != 0) {
    pn4 = (int *)(n3 + 4 + *(char *)(n3 + -1) * 4);
    if (((*(int **)((int)param_1 + 0x14) != pn4) && (pn4 < (int *)((int)param_1 + 0x1cU))) || /* TODO: SmartHeap page end_ptr at 0x14, data_start at 0x1c */
       (b6 = *(int **)((int)param_1 + 0x10) == pn4, *(int **)((int)param_1 + 0x10) < pn4)) /* TODO: SmartHeap page free_ptr at 0x10 */
    {
      return 0xfffffffe;
    }
__label_0047050b:
    if (b6) {
      return 0;
    }
    c1 = *(char *)((int)pn4 + -1);
    if (0x3f < (uint)(int)c1) {
      return 0xfffffffe;
    }
    *param_2 = (int)pn4;
    param_2[4] = c1 * 4 + 3;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[2] = 1;
    if (param_3 != 0) {
      n3 = FUN_00470580(param_2[1],pn4);
      param_2[3] = n3;
      if (n3 == -1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
  u5 = (uint)(ushort)(((short)*(int *)((int)param_1 + 0x14) - (short)param_1) - 1); /* TODO: SmartHeap page end_ptr at 0x14 */
  if (u5 < 0x10000) {
    b6 = FUN_00471450(param_1,u5,0x1002);
    if (CONCAT31(__extra_ret,b6) != 0) {
      u2 = FUN_00471410(param_1);
      if (u5 <= u2 - 1) {
        pn4 = (int *)((int)param_1 + 0x1c); /* TODO: SmartHeap page data_start at 0x1c */
        if ((pn4 <= *(int **)((int)param_1 + 0x10)) && /* TODO: SmartHeap page free_ptr at 0x10 */
           (*(int **)((int)param_1 + 0x10) <= *(int **)((int)param_1 + 0x14))) { /* TODO: SmartHeap page end_ptr at 0x14 */
          b6 = *(int **)((int)param_1 + 0x10) == pn4; /* TODO: SmartHeap page free_ptr at 0x10 */
          goto __label_0047050b;
        }
      }
    }
  }
  return 0xfffffffe;
}


/* FUN_00470580 @ 0x00470580 */

int __fastcall FUN_00470580(int param_1,int *param_2)

{
  int *pn1;
  int *pn2;
  
  pn1 = *(int **)(param_1 + 100 + *(char *)((int)param_2 + -1) * 4);
  pn2 = pn1;
  do {
    if (pn2 == (int *)0x0) {
      return 1;
    }
    if (pn2 == param_2) {
      return 0;
    }
    pn2 = (int *)*pn2;
    if (pn2 == (int *)0x0) {
      return 1;
    }
  } while (((pn1 == (int *)0x0) || (pn1 = (int *)*pn1, pn1 == (int *)0x0)) ||
          (pn1 = (int *)*pn1, pn2 != pn1));
  FUN_0046fd70(param_1,0xc);
  return 0xffffffff;
}


/* FUN_004705d0 @ 0x004705d0
 * NOTE: SmartHeap free-list block walk. param_1 is a SmartHeap page descriptor.
 * Offsets 0x0e, 0x14 are page descriptor fields. NOT a game struct.
 */

int __fastcall FUN_004705d0(LPCVOID param_1,int *param_2)

{
  ushort u1;
  int n2;
  int __extra_ret;
  uint u3;
  ushort *pu4;
  uint u5;
  bool b6;
  
  n2 = *param_2;
  if (n2 != 0) {
    u1 = *(ushort *)(n2 + -2);
    if ((u1 & 1) == 0) {
      u5 = u1 & 0xfffc;
    }
    else {
      u5 = u1 & 0x7ffc;
    }
    pu4 = (ushort *)(n2 + -2 + u5);
    if ((pu4 < (ushort *)((int)param_1 + 0x1aU)) ||
       (b6 = *(ushort **)((int)param_1 + 0x14) == pu4, /* TODO: SmartHeap page end_ptr at 0x14 */
       *(ushort **)((int)param_1 + 0x14) < pu4)) { /* TODO: SmartHeap page end_ptr at 0x14 */
      return 0xfffffffe;
    }
__label_0047065b:
    if (b6) {
      return 0;
    }
    *param_2 = (int)(pu4 + 1);
    param_2[2] = (-(uint)((*(ushort *)((int)param_1 + 0xe) & 7) == 0) & 2) + 2; /* TODO: SmartHeap page type field */
    u1 = *pu4;
    param_2[3] = u1 & 1;
    if ((u1 & 1) != 0) {
      param_2[4] = ((*pu4 & 0x7ffc) - (((*pu4 & 0x8000) == 0) - 1 & 6)) + -2;
      if ((*pu4 & 0x8000) == 0) {
        param_2[5] = 0;
      }
      else {
        param_2[5] = *(int *)((int)pu4 + ((*pu4 & 0x7ffc) - 6)); /* TODO: SmartHeap block owner pointer */
      }
      if ((*pu4 & 0x8000) != 0) {
        param_2[6] = (*(uint *)(*(int *)((int)pu4 + ((*pu4 & 0x7ffc) - 6)) + 4) & 0xff0000) >> /* TODO: SmartHeap block ref_count */
                     0x10;
        return 1;
      }
      param_2[6] = 0;
      return 1;
    }
    param_2[4] = (*pu4 & 0xfffc) - 2;
    param_2[5] = 0;
    param_2[6] = 0;
    return 1;
  }
  u5 = (uint)(ushort)(((short)*(int *)((int)param_1 + 0x14) - (short)param_1) + 9); /* TODO: SmartHeap page end_ptr at 0x14 */
  if (u5 < 0x10000) {
    b6 = FUN_00471450(param_1,u5,0x1002);
    if (CONCAT31(__extra_ret,b6) != 0) {
      u3 = FUN_00471410(param_1);
      if (u5 <= u3 - 1) {
        pu4 = (ushort *)((int)param_1 + 0x1a);
        b6 = *(ushort **)((int)param_1 + 0x14) == pu4; /* TODO: SmartHeap page end_ptr at 0x14 */
        goto __label_0047065b;
      }
    }
  }
  return 0xfffffffe;
}


/* FUN_00470750 @ 0x00470750
 * NOTE: SmartHeap fixed-block walk. param_1 is a SmartHeap page descriptor.
 * Offsets 0x10, 0x14, 0x1c are page descriptor fields. NOT a game struct.
 */

int __fastcall FUN_00470750(LPCVOID param_1,int *param_2,int param_3)

{
  ushort u1;
  bool b2;
  int __extra_ret;
  uint u3;
  int n4;
  int *pu5;
  uint u6;
  
  u1 = *(ushort *)(param_2[1] + 0x24);
  if (*param_2 != 0) {
    pu5 = (int *)((uint)u1 + *param_2);
    if ((pu5 != *(int **)((int)param_1 + 0x14)) && /* TODO: SmartHeap page end_ptr at 0x14 */
       ((pu5 < (int *)((int)param_1 + 0x1cU) || /* TODO: SmartHeap page data_start at 0x1c */
        (*(int **)((int)param_1 + 0x14) < pu5)))) { /* TODO: SmartHeap page end_ptr at 0x14 */
      return 0xfffffffe;
    }
__label_004707d9:
    if (*(int **)((int)param_1 + 0x14) == pu5) { /* TODO: SmartHeap page end_ptr at 0x14 */
      return 0;
    }
    *param_2 = (int)pu5;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[2] = 1;
    param_2[4] = (uint)u1;
    if (param_3 != 0) {
      n4 = FUN_00470840((int)param_1,param_2[1],pu5);
      param_2[3] = n4;
      if (n4 == -1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
  u6 = (uint)(ushort)(((short)*(int *)((int)param_1 + 0x14) - (short)param_1) - 1); /* TODO: SmartHeap page end_ptr at 0x14 */
  if (u6 < 0x10000) {
    b2 = FUN_00471450(param_1,u6,0x1002);
    if (CONCAT31(__extra_ret,b2) != 0) {
      u3 = FUN_00471410(param_1);
      if ((u6 <= u3 - 1) &&
         ((u6 = *(uint *)((int)param_1 + 0x10), u6 == 0 || /* TODO: SmartHeap page free_ptr at 0x10 */
          (((int)param_1 + 0x1cU <= u6 && (u6 <= *(int *)((int)param_1 + 0x14) - (uint)u1)) /* TODO: SmartHeap page data_start at 0x1c, end_ptr at 0x14 */
          )))) {
        pu5 = (int *)((int)param_1 + 0x1c);
        goto __label_004707d9;
      }
    }
  }
  return 0xfffffffe;
}


/* FUN_00470840 @ 0x00470840 */

int __fastcall FUN_00470840(int param_1,int param_2,int *param_3)

{
  ushort u1;
  int *pu2;
  short s3;
  int *pu4;
  
  u1 = *(ushort *)(param_2 + 0x24);
  pu2 = *(int **)(param_1 + 0x10);
  pu4 = (int *)(param_1 + 0x1c);
  s3 = (short)((*(int *)(param_1 + 0x14) - (int)pu4 & 0xffffU) / (uint)u1);
  while( true ) {
    if (pu2 == (int *)0x0) {
      return 1;
    }
    if ((((pu2 < pu4) || ((int *)(*(int *)(param_1 + 0x14) - (uint)u1) < pu2)) ||
        (s3 == 0)) || ((short)(((int)pu2 - (int)pu4 & 0xffffU) % (uint)u1) != 0)) break;
    if (pu2 == param_3) {
      return 0;
    }
    pu2 = (int *)*pu2;
    s3 = s3 + -1;
  }
  return 0xffffffff;
}


/* FUN_00470ce0 @ 0x00470ce0
 * NOTE: SmartHeap pool validation. param_1 is a SmartHeap pool descriptor.
 * Offset 0x22 = pool flags (bit 1 = threadsafe). NOT a game struct.
 */

bool FUN_00470ce0(int *param_1)

{
  bool b1;
  int n2;
  int n3;
  int loc_24 [9];
  
  b1 = false;
  if ((short)param_1[8] != -0x4153) {
    FUN_0046fd70(0,10);
    return false;
  }
  loc_24[0] = 0;
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    param_1[0x18] = param_1[0x18] + 1;
  }
  do {
    n2 = FUN_004702b0(param_1,loc_24,0,0);
    if (n2 == -1) {
      b1 = true;
    }
  } while ((n2 == 1) || (n2 == -1));
  if (n2 == 0) {
    n3 = FUN_00470e50((int)param_1);
    n2 = 0;
    if (n3 == 0) {
      n2 = -2;
    }
    if (n2 == 0) goto __label_00470d68;
  }
  b1 = true;
__label_00470d68:
  if ((*(byte *)((int)param_1 + 0x22) & 2) != 0) { /* TODO: SmartHeap pool threadsafe flag at 0x22 */
    param_1[0x18] = param_1[0x18] + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  }
  return !b1;
}


/* FUN_00470e50 @ 0x00470e50 */

int __fastcall FUN_00470e50(int param_1)

{
  int *pn1;
  int n2;
  ushort u3;
  int n4;
  
  n2 = 1;
  u3 = 0;
  do {
    if (u3 != 3) {
      pn1 = (int *)(param_1 + (uint)u3 * 4);
      n4 = *pn1;
      if (n4 != 0) {
        do {
          n2 = FUN_00470ec0(*(int **)(n4 + 4),u3);
          if (n2 == 0) goto __label_00470e91;
          n4 = *(int *)(n4 + 8);
        } while (*pn1 != n4);
        if (n2 == 0) {
          return 0;
        }
      }
    }
    u3 = u3 + 1;
  } while (u3 < 5);
__label_00470e91:
  if ((n2 != 0) && (n2 = FUN_00470f00(param_1), n2 != 0)) {
    return 1;
  }
  return 0;
}


/* FUN_00470ec0 @ 0x00470ec0 */

int __fastcall FUN_00470ec0(int *param_1,unsigned short param_2)

{
  int u1;
  
  u1 = 0;
  switch(param_2) {
  case 0:
  case 2:
    u1 = FUN_00470f40(param_1);
    return u1;
  case 1:
    u1 = FUN_00470fd0(param_1);
    return u1;
  case 3:
    return 1;
  case 4:
    u1 = 1;
  }
  return u1;
}


/* FUN_00470f00 @ 0x00470f00 */

int __fastcall FUN_00470f00(int param_1)

{
  int n1;
  int *pn2;
  int *pn3;
  uint u4;
  
  pn3 = (int *)(param_1 + 100);
  u4 = 0;
  do {
    pn2 = (int *)*pn3;
    if (pn2 != (int *)0x0) {
      if ((int *)*pn2 != (int *)0x0) {
        pn2 = (int *)*pn2;
      }
      n1 = FUN_00470580(param_1,pn2);
      if (n1 == -1) {
        return 0;
      }
    }
    pn3 = pn3 + 1;
    u4 = u4 + 1;
    if (0x3f < u4) {
      return 1;
    }
  } while( true );
}


/* FUN_00470f40 @ 0x00470f40 */

int __fastcall FUN_00470f40(int *param_1)

{
  ushort u1;
  ushort *pu2;
  bool b3;
  ushort *pu4;
  ushort *pu5;
  ushort *pu6;
  
  b3 = false;
  pu2 = (ushort *)param_1[5];
  pu4 = pu2;
  pu5 = pu2;
  pu6 = pu2;
  do {
    if ((*(ushort **)(*(int *)(pu5 + 1) + 6) != pu5) ||
       (*(ushort **)(*(int *)(pu5 + 3) + 2) != pu5)) goto __label_00470f72;
    u1 = *pu5;
    if (pu5 == pu2) {
      if ((u1 & 0xfffc) != 0) goto __label_00470f72;
      u1 = u1 & 1;
    }
    else {
      if (((u1 & 1) != 0) || ((u1 & 2) == 0)) goto __label_00470f72;
      u1 = u1 & 0xfffc;
    }
    if (u1 == 0) goto __label_00470f72;
    if ((pu6 != pu2) && (pu6 = *(ushort **)(pu6 + 1), pu6 != pu2)) {
      pu6 = *(ushort **)(pu6 + 1);
      pu4 = *(ushort **)(pu4 + 1);
      if (pu6 == pu4) goto __label_00470f72;
    }
    if ((ushort *)param_1[4] == pu5) {
      b3 = true;
    }
    pu5 = *(ushort **)(pu5 + 1);
  } while (pu5 != pu2);
  if (b3) {
    return 1;
  }
__label_00470f72:
  FUN_0046fd70(*param_1,0xc);
  return 0;
}


/* FUN_00470fd0 @ 0x00470fd0 */

int __fastcall FUN_00470fd0(int *param_1)

{
  int *pu1;
  int n2;
  
  if (((int *)param_1[4] != (int *)0x0) &&
     (pu1 = *(int **)param_1[4], pu1 != (int *)0x0)) {
    n2 = FUN_00470840((int)param_1,*param_1,pu1);
    if (n2 == -1) {
      FUN_0046fd70(*param_1,0xc);
      return 0;
    }
  }
  return 1;
}


/* FUN_00471010 @ 0x00471010
 * NOTE: SmartHeap block ownership check. pn4 is a SmartHeap page descriptor.
 * Offset 0x0e = page magic/type tag, 0x22 = pool flags, 0x48 = critical_section,
 * 0x60 = lock_count. NOT a game struct.
 */

int FUN_00471010(int param_1,int *param_2)

{
  int n1;
  bool b2;
  int __extra_ret;
  int extraout_var_00;
  int n3;
  int *pn4;
  int u5;
  
  u5 = 1;
  b2 = FUN_00471450(param_2,4,0x202);
  if (CONCAT31(__extra_ret,b2) == 0) {
    FUN_0046fd70(0,0xe);
    return 0;
  }
  pn4 = (int *)((uint)param_2 & 0xffff0000);
  if ((*(ushort *)((int)pn4 + 0xe) & 0xfff8) != 0xcad0) { /* TODO: SmartHeap page magic check */
    FUN_0046fd70(0,0xe);
    return 0;
  }
  b2 = FUN_00471450(pn4,0x1a,0x1002);
  if ((((CONCAT31(extraout_var_00,b2) == 0) ||
       ((*(ushort *)((int)pn4 + 0xe) & 0xfff8) != 0xcad0)) || /* TODO: SmartHeap page magic check */
      (4 < ((byte)*(ushort *)((int)pn4 + 0xe) & 7))) || ((param_1 != 0 && (*pn4 != param_1)))) /* TODO: SmartHeap page type field */
  {
    return 0;
  }
  n1 = *pn4;
  if ((*(byte *)(n1 + 0x22) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(n1 + 0x48));
    *(int *)(n1 + 0x60) = *(int *)(n1 + 0x60) + 1;
  }
  switch(*(ushort *)((int)pn4 + 0xe) & 7) { /* TODO: SmartHeap page type field */
  case 0:
  case 2:
    if ((*(byte *)((int)param_2 + -2) & 1) != 0) goto sw_3;
    goto __label_00471103;
  case 1:
    n3 = FUN_00470840((int)pn4,n1,param_2);
    break;
  default:
    goto sw_3;
  case 4:
    n3 = FUN_00470580(n1,param_2);
  }
  if (n3 == 0) {
__label_00471103:
    u5 = 0xffffffff;
  }
sw_3:
  if ((*(byte *)(n1 + 0x22) & 2) != 0) {
    *(int *)(n1 + 0x60) = *(int *)(n1 + 0x60) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(n1 + 0x48));
  }
  return u5;
}


/* FUN_00471150 @ 0x00471150 */

LPCVOID __fastcall FUN_00471150(uint param_1)

{
    /* STUB: 14 lines not yet reconstructed */
    return 0;
}


/* FUN_00471190 @ 0x00471190 */

void * __fastcall FUN_00471190(uint param_1,uint param_2)

{
  LPCVOID lpAddress;
  void *lpAddress_00;
  LPVOID pv1;
  uint dwSize;
  int n2;
  void *pu3;
  uint u4;
  DWORD flAllocationType;
  DWORD flProtect;
  
  if (((param_2 & 0x1000) != 0) && (0xffff < param_1)) {
    param_1 = 0xffff;
  }
  flProtect = 1;
  u4 = param_1 + 0xfff & 0xfffff000;
  flAllocationType = 0x2000;
  dwSize = u4 + 0xffff & 0xffff0000;
  lpAddress = FUN_00471150(dwSize);
  lpAddress_00 = (void *)VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  pu3 = lpAddress_00;
  if (lpAddress_00 != (void *)0x0) {
    pv1 = VirtualAlloc(lpAddress_00,u4,0x1000,4);
    if (pv1 == (LPVOID)0x0) {
      pu3 = (void *)0x0;
      FUN_00471220(lpAddress_00);
    }
    else if ((param_2 & 0x100) != 0) {
      for (u4 = u4 >> 2; u4 != 0; u4 = u4 - 1) {
        *(int *)pu3 = 0;
        pu3 = (void *)((int)pu3 + 4);
      }
      for (n2 = 0; n2 != 0; n2 = n2 + -1) {
        *(char *)pu3 = 0;
        pu3 = (void *)((int)pu3 + 1);
      }
      return lpAddress_00;
    }
  }
  return pu3;
}


/* FUN_00471220 @ 0x00471220 */

int __fastcall FUN_00471220(LPCVOID param_1)

{
  uint dwSize;
  BOOL flag1;
  
  dwSize = FUN_00471410(param_1);
  if (((dwSize < 0x10001) && (DAT_00484030 != (LPCVOID)0x0)) && (param_1 < DAT_00484030)) {
    DAT_00484030 = param_1;
  }
  flag1 = VirtualFree(param_1,dwSize,0x4000);
  if (flag1 != 0) {
    flag1 = VirtualFree(param_1,0,0x8000);
    if (flag1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* FUN_00471280 @ 0x00471280 */

void * __fastcall FUN_00471280(void *param_1,uint param_2,uint param_3)

{
  int n1;
  void *pu2;
  uint u3;
  uint u4;
  uint u5;
  int *pu6;
  int *pu7;
  
  n1 = FUN_00471330(param_1,param_2,param_3);
  if (n1 != 0) {
    return param_1;
  }
  pu2 = FUN_00471190(param_2,param_3 & 0xfffffeff);
  if (pu2 != (void *)0x0) {
    u3 = FUN_00471410(param_1);
    u5 = u3;
    if (param_2 <= u3) {
      u5 = param_2;
    }
    pu6 = (int *)param_1;
    pu7 = (int *)pu2;
    for (u4 = u5 >> 2; u4 != 0; u4 = u4 - 1) {
      *pu7 = *pu6;
      pu6 = pu6 + 1;
      pu7 = pu7 + 1;
    }
    for (u5 = u5 & 3; u5 != 0; u5 = u5 - 1) {
      *(char *)pu7 = *(char *)pu6;
      pu6 = (int *)((int)pu6 + 1);
      pu7 = (int *)((int)pu7 + 1);
    }
    FUN_00471220(param_1);
    if (((param_3 & 0x100) != 0) && (u3 < param_2)) {
      pu6 = (int *)(u3 + (int)pu2);
      for (u5 = param_2 - u3 >> 2; u5 != 0; u5 = u5 - 1) {
        *pu6 = 0;
        pu6 = pu6 + 1;
      }
      for (u5 = param_2 - u3 & 3; u5 != 0; u5 = u5 - 1) {
        *(char *)pu6 = 0;
        pu6 = (int *)((int)pu6 + 1);
      }
    }
  }
  return pu2;
}


/* FUN_00471330 @ 0x00471330 */

int __fastcall FUN_00471330(LPCVOID param_1,uint param_2,uint param_3)

{
  uint u1;
  BOOL flag2;
  LPVOID pv3;
  uint u4;
  uint u5;
  int *pu6;
  
  u1 = FUN_00471410(param_1);
  u5 = param_2;
  if (((param_3 & 0x1000) != 0) && (0xffff < param_2)) {
    u5 = 0xffff;
  }
  u5 = u5 + 0xfff & 0xfffff000;
  if (u5 <= u1) {
    if (u5 < u1) {
      flag2 = VirtualFree((LPVOID)((int)param_1 + u5),u1 - u5,0x4000);
      if (flag2 == 0) {
        return 0;
      }
    }
    if (((param_3 & 0x100) != 0) && ((param_2 & 0xfff) != 0)) {
      pu6 = (int *)((int)param_1 + param_2);
      for (u1 = u5 - param_2 >> 2; u1 != 0; u1 = u1 - 1) {
        *pu6 = 0;
        pu6 = pu6 + 1;
      }
      for (u5 = u5 - param_2 & 3; u5 != 0; u5 = u5 - 1) {
        *(char *)pu6 = 0;
        pu6 = (int *)((int)pu6 + 1);
      }
    }
    return 1;
  }
  if ((u1 & 0xffff) == 0) {
    return 0;
  }
  u5 = u5 - u1;
  pv3 = VirtualAlloc((LPVOID)((int)param_1 + u1),u5,0x1000,4);
  if (pv3 != (LPVOID)0x0) {
    if ((param_3 & 0x100) != 0) {
      pu6 = (int *)((int)param_1 + u1);
      for (u4 = u5 >> 2; u4 != 0; u4 = u4 - 1) {
        *pu6 = 0;
        pu6 = pu6 + 1;
      }
      for (u5 = u5 & 3; u5 != 0; u5 = u5 - 1) {
        *(char *)pu6 = 0;
        pu6 = (int *)((int)pu6 + 1);
      }
    }
    return 1;
  }
  return 0;
}


/* FUN_00471410 @ 0x00471410 */

uint __fastcall FUN_00471410(LPCVOID param_1)

{
    /* STUB: 9 lines not yet reconstructed */
    return 0;
}


/* FUN_00471450 @ 0x00471450 */

bool __fastcall FUN_00471450(LPCVOID param_1,uint param_2,uint param_3)

{
    /* STUB: 48 lines not yet reconstructed */
    return 0;
}


/* FUN_00471550 @ 0x00471550 */

bool __fastcall FUN_00471550(FARPROC param_1)

{
  BOOL flag1;
  
  if (param_1 < (FARPROC)0x10000) {
    return false;
  }
  flag1 = IsBadCodePtr(param_1);
  return flag1 == 0;
}


/* FUN_00471570 @ 0x00471570 */

int FUN_00471570(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  return 1;
}


/* FUN_00471590 @ 0x00471590 */

void FUN_00471590(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00489c28);
  return;
}


/* FUN_00471650 @ 0x00471650 */

int __cdecl FUN_00471650(LPCRITICAL_SECTION param_1,int *param_2)

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


/* FUN_004718d0 @ 0x004718d0 */

int __fastcall FUN_004718d0(LPCVOID param_1)

{
  bool b1;
  int __extra_ret;
  
  b1 = FUN_00471450(param_1,0x178,0x102);
  if ((CONCAT31(__extra_ret,b1) != 0) && (*(short *)((int)param_1 + 0x20) == -0x4153)) { /* TODO: SmartHeap pool signature at 0x20 */
    return 1;
  }
  return 0;
}


/* FUN_00471900 @ 0x00471900 */

void __fastcall FUN_00471900(int param_1)

{
  int n1;
  int n2;
  int n3;
  
  n1 = *(int *)(*(int *)(param_1 + 0x44) + 4);
  n3 = 0;
  if (n1 != 0) {
    while (n2 = n1, n2 != param_1) {
      n1 = *(int *)(n2 + 0x40);
      n3 = n2;
      if (*(int *)(n2 + 0x40) == 0) {
        return;
      }
    }
    if (n3 != 0) {
      *(int *)(n3 + 0x40) = *(int *)(n2 + 0x40);
      return;
    }
    *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(n2 + 0x40);
  }
  return;
}


/* FUN_00471930 @ 0x00471930 */

DWORD * __fastcall FUN_00471930(int param_1,int param_2)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int n3;
  
  pDVar2 = (DWORD *)(param_1 + 0x10);
  n3 = *(int *)(param_1 + 0xd8);
  DVar1 = GetCurrentThreadId();
  while (n3 != 0) {
    n3 = n3 + -1;
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


/* FUN_00471990 @ 0x00471990 */

void __fastcall FUN_00471990(int param_1,DWORD *param_2)

{
  DWORD u1;
  int n2;

  n2 = *(int *)(param_1 + 0xd8) + -1;
  *(int *)(param_1 + 0xd8) = n2;
  n2 = param_1 + n2 * 8;
  u1 = *(DWORD *)(n2 + 0x14);
  *param_2 = *(DWORD *)(n2 + 0x10);
  param_2[1] = u1;
  return;
}


/* FUN_004719b0 @ 0x004719b0 */

int __fastcall FUN_004719b0(LPCSTR param_1,int param_2)

{
  int n1;
  uint uType;
  
  uType = 2 - (param_2 == 0) | 0x2110;
  MessageBeep(0);
  while( true ) {
    n1 = MessageBoxA((HWND)0x0,param_1,"SmartHeap Library",uType);
    switch(n1) {
    case 1:
    case 5:
      return 0;
    case 2:
    case 3:
                    /* NOTE: Subroutine does not return */
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
                    /* NOTE: Could not recover jumptable at 0x00471a30. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  WinGCreateBitmap();
  return;
}


/* Function: WinGCreateDC @ 0x00471a36 */

void WinGCreateDC(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471a36. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  WinGCreateDC();
  return;
}


/* Function: WinGRecommendDIBFormat @ 0x00471a3c */

void WinGRecommendDIBFormat(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471a3c. Too many branches */
                    /* NOTE: Treating indirect jump as call */
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
    /* STUB: 28 lines not yet reconstructed */
    return;
}


/* Function: _atexit @ 0x00471b10 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 1998 Release */

int __cdecl _atexit(void_callback *param_1)

{
  int n1;
  
  return 0; /* stubbed */
  return -(uint)(n1 == 0);
}


/* Function: __CxxFrameHandler @ 0x00471b24 */

void __CxxFrameHandler(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471b24. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  __CxxFrameHandler();
  return;
}


/* Function: __eh_vector_destructor_iterator @ 0x00471b30 */

/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,callback_ptr *param_4)

{
  void *__saved_edi;
  int *__seh_chain;
  int loc_14;
  void *puStack_10;
  void *__seh_handler;
  int loc_8;

  loc_14 = *__seh_chain;
  __seh_handler = &DAT_00477d18;
  puStack_10 = &DAT_00471ee2;
  *__seh_chain = (int)&loc_14;
  loc_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(__saved_edi);
  }
  loc_8 = 0xffffffff;
  FUN_00471ba0();
  *__seh_chain = loc_14;
  return;
}


/* FUN_00471ba0 @ 0x00471ba0 */

void FUN_00471ba0(void)

{
    /* STUB: 8 lines not yet reconstructed */
    return;
}


/* Function: __ArrayUnwind @ 0x00471bc0 */

/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,callback_ptr *param_4)

{
  void *__saved_edi;
  int *__seh_chain;
  int loc_14;
  void *puStack_10;
  void *__seh_handler;
  int loc_8;

  loc_14 = *__seh_chain;
  __seh_handler = &DAT_00477d28;
  puStack_10 = &DAT_00471ee2;
  *__seh_chain = (int)&loc_14;
  loc_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(__saved_edi);
  }
  *__seh_chain = loc_14;
  return;
}


/* Function: __eh_vector_constructor_iterator @ 0x00471c60 */

/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,callback_ptr *param_4,
               callback_ptr *param_5)

{
  void *__saved_edi;
  int *__seh_chain;
  int loc_20;
  int loc_14;
  void *puStack_10;
  void *__seh_handler;
  int loc_8;

  loc_14 = *__seh_chain;
  __seh_handler = &DAT_00477d38;
  puStack_10 = &DAT_00471ee2;
  *__seh_chain = (int)&loc_14;
  loc_8 = 0;
  loc_20 = 0;
  if (0 < param_3) {
    do {
      (*param_4)(__saved_edi);
      loc_20 = loc_20 + 1;
    } while (loc_20 < param_3);
  }
  loc_8 = 0xffffffff;
  FUN_00471cd0();
  *__seh_chain = loc_14;
  return;
}


/* FUN_00471cd0 @ 0x00471cd0 */

void FUN_00471cd0(void)

{
    /* STUB: 8 lines not yet reconstructed */
    return;
}


/* Function: memmove @ 0x00471cec */

/* Removed: reimplementation of system function */


/* Function: ftol @ 0x00471cf2 */

void __cdecl ftol(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471cf2. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  ftol();
  return;
}


/* Function: _CIacos @ 0x00471cfe */

void _CIacos(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471cfe. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  _CIacos();
  return;
}


/* FUN_00471d10 @ 0x00471d10 */

/* NOTE: Unable to track spacebase fully for stack */

void FUN_00471d10(void)

{
  uint __reg_eax;
  char *pu1;
  unsigned int __return_addr;

  pu1 = &__stk_0;
  for (; 0xfff < __reg_eax; __reg_eax = __reg_eax - 0x1000) {
    pu1 = pu1 + -0x1000;
  }
  *(unsigned int *)(pu1 + (-4 - __reg_eax)) = __return_addr;
  return;
}


/* Function: entry @ 0x00471d40 */

/* NOTE: overlapping globals */

void entry(void)

{
    /* STUB: 74 lines not yet reconstructed */
    return;
}


/* Function: abort @ 0x00471ee8 */

void __cdecl abort(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471ee8. Too many branches */
                    /* NOTE: Subroutine does not return */
                    /* NOTE: Treating indirect jump as call */
  abort();
  return;
}


/* Function: __dllonexit @ 0x00471eee */

void __dllonexit(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471eee. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  __dllonexit();
  return;
}


/* Function: _initterm @ 0x00471f00 */

void __cdecl _initterm(void)

{
                    /* NOTE: Could not recover jumptable at 0x00471f00. Too many branches */
                    /* NOTE: Treating indirect jump as call */
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


/* FUN_00471f40 @ 0x00471f40 */

void FUN_00471f40(void)

{
  return;
}


/* Function: _controlfp @ 0x00471f42 */

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint u1;
  
                    /* NOTE: Could not recover jumptable at 0x00471f42. Too many branches */
                    /* NOTE: Treating indirect jump as call */
  u1 = _controlfp(_NewValue,_Mask);
  return u1;
}


