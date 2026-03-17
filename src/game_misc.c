/*
 * game_misc.c - Miscellaneous utilities
 * Address range: 0x460000 - 0x46FFFF
 * Functions: 293
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00460010 @ 0x00460010 */

void __fastcall FUN_00460010(void **param_1)
{
  *param_1 = &PTR_FUN_0047771c;
  FUN_00460400(param_1);
}


/* FUN_00460020 @ 0x00460020 */

int __thiscall FUN_00460020(void *this,char param_1)
{
    /* STUB: 11 lines not yet reconstructed */
    return 0;
}


/* FUN_00460050 @ 0x00460050
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


/* FUN_00460080 @ 0x00460080
 * Struct types: MathProblem (this)
 * TODO: offset 0x18 falls in _pad15 region of MathProblem
 */

int __thiscall FUN_00460080(MathProblem *this,uint param_1)
{
  int n1;

  n1 = *(int *)((intptr_t)this + 0x18); /* TODO: unknown offset 0x18 on MathProblem (_pad15 region) */
  if (param_1 != 0) {
    if ((param_1 < 0x1001) && (this->field_10 != 0)) {
      return this->field_10;
    }
    if ((param_1 < 0x8001) && (this->field_14 != 0)) {
      n1 = this->field_14;
    }
  }
  return n1;
}


/* FUN_004600c0 @ 0x004600c0 */

ushort * __thiscall FUN_004600c0(void *this,uint param_1,uint param_2)
{
  LPCVOID pv1;
  ushort *pu2;
  
  if (param_1 == 0) {
    return NULL;
  }
  pv1 = (LPCVOID)FUN_00460080(this,param_1);
  pu2 = FUN_0046f060(pv1,param_1,param_2);
  return pu2;
}


/* FUN_004600f0 @ 0x004600f0 */

uint __thiscall FUN_004600f0(void *this,char *param_1,ushort param_2)
{
  uint u1;
  int n2;
  byte b3;
  ushort *pu4;
  uint u5;
  HANDLE pv6;
  int u7;

  FUN_00460020(this,'\x01');
  n2 = (uint)param_2 * 0xe;
  u1 = n2 + 0x1a;
  pu4 = FUN_004600c0(this,u1,0);
  u5 = FUN_004527f0(param_1);
  if ((char)u5 == '\0') {
    return u5 & 0xffffff00;
  }
  pv6 = FUN_00452850(param_1,0,2);
  if (pv6 == NULL) {
    return 0;
  }
  pu4[0] = 0x4e49;
  pu4[1] = 0x5844;
  pu4[2] = 0x656d;
  pu4[3] = 0x6174;
  *(int *)(pu4 + 4) = n2 + 0xe;
  b3 = 1;
  pu4[6] = 0;
  pu4[7] = param_2;
  pu4[8] = 7;
  pu4[9] = 0x4e49;
  pu4[10] = 0x5844;
  pu4[0xb] = 0x3f3f;
  pu4[0xc] = 0x3f3f;
  if (param_2 != 0) {
    do {
      u5 = (uint)b3;
      b3 = b3 + 1;
      pu4[u5 * 7 + 6] = 0;
      (pu4 + u5 * 7 + 7)[0] = 0;
      (pu4 + u5 * 7 + 7)[1] = 0;
      (pu4 + u5 * 7 + 9)[0] = 0;
      (pu4 + u5 * 7 + 9)[1] = 0;
      (pu4 + u5 * 7 + 0xb)[0] = 0;
      (pu4 + u5 * 7 + 0xb)[1] = 0;
    } while ((uint)b3 <= (uint)param_2);
  }
  FUN_0045feb0((int)pu4,'\x01');
  FUN_004528b0(pv6);
  FUN_00452970(pv6,u1,pu4);
  FUN_0045feb0((int)pu4,'\0');
  FUN_0046f5f0((uint)pu4);
  u7 = FUN_004529c0(pv6);
  return CONCAT31((unsigned int)((uint)u7 >> 8),1);
}


/* FUN_00460220 @ 0x00460220 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

char * __thiscall
FUN_00460220(void *this,char *param_1,int param_2,char param_3,int param_4)
{
    /* STUB: 100 lines not yet reconstructed */
    return 0;
}


/* FUN_00460400 @ 0x00460400 */

uint __fastcall FUN_00460400(void *param_1)
{
    /* STUB: 56 lines not yet reconstructed */
    return 0;
}


/* FUN_00460510 @ 0x00460510 */

byte __thiscall
FUN_00460510(void *this,ushort param_1,ushort param_2,int param_3,int param_4)
{
    /* STUB: 65 lines not yet reconstructed */
    return 0;
}


/* FUN_00460670 @ 0x00460670 */

char __thiscall FUN_00460670(void *this,uint param_1,uint *param_2,uint *param_3)
{
  char c1;
  int n2;
  uint u3;
  ushort *v4;

  if ((byte)param_1 == 0) {
    *param_2 = *(int *)(*(int *)((intptr_t)this + 0xc) + 8) + 0xc; /* TODO: custom internal struct via offset 0xc */
    *param_3 = 0;
    return '\x01';
  }
  n2 = (param_1 & 0xff) * 0xe + *(int *)((intptr_t)this + 0xc); /* TODO: custom internal struct via offset 0xc */
  if (((unsigned short)((param_1) >> 16)) != 0) {
    v4 = FUN_004608a0(this,(byte)param_1);
    c1 = FUN_00460730(param_1,(int)v4,param_2,param_3);
    FUN_004609a0(&v4);
    return c1;
  }
  u3 = *(uint *)(n2 + 0x12) & 0x3fffffff;
  *param_2 = *(uint *)(n2 + 0xe) & 0x7fffffff;
  *param_3 = u3;
  return '\x01' - (u3 == 0);
}


/* FUN_00460730 @ 0x00460730 */

char FUN_00460730(uint param_1,int param_2,uint *param_3,uint *param_4)
{
  int n1;
  uint u2;
  
  if ((((unsigned short)((param_1) >> 16)) != 0) && (((unsigned short)((param_1) >> 16)) <= *(ushort *)(param_2 + 0xe))) {
    n1 = param_2 + (uint)((unsigned short)((param_1) >> 16)) * 0xe;
    *param_3 = *(uint *)(n1 + 0xe) & 0x7fffffff;
    u2 = *(uint *)(n1 + 0x12) & 0x3fffffff;
    *param_4 = u2;
    return '\x01' - (u2 == 0);
  }
  return '\0';
}


/* FUN_00460780 @ 0x00460780 */

ushort * __thiscall FUN_00460780(void *this,uint param_1)
{
  ushort *pu1;
  uint v8;
  uint v4;
  
  FUN_00460670(this,param_1,&v8,&v4);
  pu1 = FUN_004600c0(this,v8,0);
  if (pu1 != NULL) {
    FUN_004610e0(this,param_1,pu1);
  }
  return pu1;
}


/* FUN_004607d0 @ 0x004607d0 */

ushort * __thiscall FUN_004607d0(void *this,int param_1,ushort *param_2,ushort *param_3,int param_4)
{
  HANDLE pv1;
  uint v8;
  uint v4;
  
  if (param_1 == 0) {
    return NULL;
  }
  FUN_00461130(this,param_1,&v8,&v4,param_3);
  if (v8 < 0x1e8481) {
    if (v4 != 0) {
      if (param_2 == NULL) {
        if (v8 != 0) {
          param_2 = FUN_004600c0(this,v8,0);
        }
        if (param_2 == NULL) {
          return NULL;
        }
      }
      if (v8 != 0) {
        pv1 = (HANDLE)FUN_00462160(this,param_1);
        v4 = v4 + param_4;
        v8 = v8 - param_4;
        FUN_004178e0(pv1,v4);
        FUN_004179a0(pv1,v8,param_2);
        return param_2;
      }
    }
    return NULL;
  }
  return NULL;
}


/* FUN_004608a0 @ 0x004608a0 */

ushort * __thiscall FUN_004608a0(void *this,byte param_1)
{
  ushort u1;
  ushort u2;
  uint u3;
  ushort *pu4;
  uint v8;
  
  if (param_1 != 0) {
    u1 = (ushort)param_1;
    if (u1 <= *(ushort *)(*(int *)((intptr_t)this + 0xc) + 0xc)) {
      pu4 = NULL;
      if (param_1 != 0) {
        pu4 = *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + (uint)u1 * 0xe);
      }
      if (pu4 == NULL) {
        v8 = (uint)param_1;
        pu4 = FUN_00460780(this,v8);
        if (pu4 == NULL) {
          return NULL;
        }
        u3 = 0;
        if (pu4 != NULL) {
          FUN_0045feb0((int)pu4,'\0');
          if (pu4[6] != 0) {
            do {
              u2 = (short)u3 + 1;
              (pu4 + u3 * 7 + 0x12)[0] = 0;
              (pu4 + u3 * 7 + 0x12)[1] = 0;
              pu4[u3 * 7 + 0xd] = 0;
              u3 = (uint)u2;
            } while (u2 < pu4[6]);
          }
          if (param_1 != 0) {
            *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + (uint)u1 * 0xe) = pu4;
            *(short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (uint)u1 * 0xe) = 0;
          }
        }
      }
      return pu4;
    }
  }
  return NULL;
}


/* FUN_004609a0 @ 0x004609a0 */

void FUN_004609a0(int *param_1)
{
  *param_1 = 0;
}


/* FUN_004609b0 @ 0x004609b0 */

uint FUN_004609b0(int param_1)
{
  ushort u1;
  ushort u2;
  uint _eax;
  uint u3;
  
  u1 = *(ushort *)(param_1 + 0xe);
  if (u1 <= *(ushort *)(param_1 + 0xc)) {
    return _eax & 0xffff0000;
  }
  u3 = 0;
  if (u1 != 0) {
    do {
      if (*(int *)(param_1 + 0x20 + u3 * 0xe) == 0) {
        return (uint)(ushort)((short)u3 + 1);
      }
      u2 = (short)u3 + 1;
      u3 = (uint)u2;
    } while (u2 < u1);
  }
  return 0;
}


/* FUN_00460a00 @ 0x00460a00 */

byte __thiscall FUN_00460a00(void *this,int param_1,int param_2)
{
  byte b1;
  ushort *v4;
  
  b1 = 1;
  if (*(short *)(*(int *)((intptr_t)this + 0xc) + 0xc) != 0) {
    do {
      v4 = FUN_004608a0(this,b1);
      if ((*(int *)(v4 + 9) == param_1) && (*(int *)(v4 + 0xb) == param_2)) {
        FUN_004609a0(&v4);
        return b1;
      }
      b1 = b1 + 1;
      FUN_004609a0(&v4);
    } while ((ushort)b1 <= *(ushort *)(*(int *)((intptr_t)this + 0xc) + 0xc));
  }
  return 0;
}


/* FUN_00460a80 @ 0x00460a80 */

void __thiscall FUN_00460a80(void *this,int param_1)
{
  FUN_00460a00(this,0x41544144,param_1);
}


/* FUN_00460aa0 @ 0x00460aa0 */

int __thiscall FUN_00460aa0(void *this,char *param_1,int param_2)
{
    /* STUB: 11 lines not yet reconstructed */
    return 0;
}


/* FUN_00460ac0 @ 0x00460ac0 */

void __thiscall
FUN_00460ac0(void *this,int *param_1,LPCVOID param_2,DWORD param_3,byte param_4)
{
    /* STUB: 22 lines not yet reconstructed */
    return;
}


/* FUN_00460b50 @ 0x00460b50 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00460b50(void *this,uint *param_1,LPCVOID param_2,DWORD param_3,uint param_4,int param_5,
            int param_6,ushort *param_7)
{
    /* STUB: 116 lines not yet reconstructed */
    return;
}


/* FUN_00460e60 @ 0x00460e60 */

void __thiscall FUN_00460e60(void *this,uint *param_1,uint param_2,LPCVOID param_3,uint param_4)
{
    /* STUB: 58 lines not yet reconstructed */
    return;
}


/* FUN_00461000 @ 0x00461000 */

void FUN_00461000(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489b18,u1,_arg1);
}


/* FUN_00461050 @ 0x00461050 */

void FUN_00461050(void) { return; }


/* FUN_00461070 @ 0x00461070 */

/* NOTE: overlapping globals */

void FUN_00461070(void)
{
  _DAT_00489b26 = 0;
  _DAT_00489b24 = 0;
}


/* FUN_00461080 @ 0x00461080 */

void FUN_00461080(void)
{
  _atexit(FUN_00461090);
}


/* FUN_00461090 @ 0x00461090 */

void FUN_00461090(void) { return; }


/* FUN_004610a0 @ 0x004610a0 */

short __thiscall FUN_004610a0(void *this,byte param_1)
{
  ushort u1;
  ushort u2;
  ushort *v4;
  
  v4 = FUN_004608a0(this,param_1);
  u1 = v4[7];
  u2 = v4[6];
  FUN_004609a0(&v4);
  return u1 - u2;
}


/* FUN_004610e0 @ 0x004610e0 */

uint __thiscall FUN_004610e0(void *this,uint param_1,LPVOID param_2)
{
  HANDLE pv1;
  uint u2;
  uint v8;
  DWORD v4;
  
  FUN_00460670(this,param_1,&v4,&v8);
  pv1 = (HANDLE)FUN_00462160(this,param_1);
  u2 = FUN_00461270(param_2,v4,v8,pv1);
  return u2 & 0xffffff00;
}


/* FUN_00461130 @ 0x00461130 */

void __thiscall
FUN_00461130(void *this,uint param_1,uint *param_2,uint *param_3,ushort *param_4)
{
  int n1;
  bool b2;
  
  n1 = 0;
  b2 = param_4 == NULL;
  if (b2) {
    param_4 = FUN_004608a0(this,(byte)param_1);
  }
  if (param_4 == NULL) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  switch(param_4[8]) {
  case 0:
    n1 = 0;
    break;
  case 1:
  case 2:
  case 4:
    n1 = 4;
    break;
  case 3:
    n1 = 8;
    break;
  case 7:
    n1 = 0xc;
    break;
  case 8:
    n1 = 0x548;
  }
  FUN_00460730(param_1,(int)param_4,param_2,param_3);
  if ((*param_3 != 0) && (*param_2 != 0)) {
    *param_3 = *param_3 + n1;
    *param_2 = *param_2 - n1;
  }
  if (b2) {
    FUN_004609a0(&param_4);
  }
  return;
}


/* FUN_00461240 @ 0x00461240 */

/* NOTE: overlapping globals */

void FUN_00461240(void)
{
  _DAT_00489b22 = 0;
  _DAT_00489b20 = 0;
}


/* FUN_00461250 @ 0x00461250 */

void FUN_00461250(void)
{
  _atexit(FUN_00461260);
}


/* FUN_00461260 @ 0x00461260 */

void FUN_00461260(void) { return; }


/* FUN_00461270 @ 0x00461270 */

int FUN_00461270(LPVOID param_1,DWORD param_2,uint param_3,HANDLE param_4)
{
    /* STUB: 6 lines not yet reconstructed */
    return 0;
}


/* FUN_004612a0 @ 0x004612a0 */

time_t FUN_004612a0(char *param_1,char *param_2)
{
  char c1;
  uint u2;
  uint u3;
  char *pc4;
  char *pc5;
  time_t tVar6;
  
  if (param_2 == NULL) {
    param_2 = s_Unnamed_Chunk_004839e4;
  }
  u2 = 0xffffffff;
  do {
    pc4 = param_2;
    if (u2 == 0) break;
    u2 = u2 - 1;
    pc4 = param_2 + 1;
    c1 = *param_2;
    param_2 = pc4;
  } while (c1 != '\0');
  u2 = ~u2;
  pc4 = pc4 + -u2;
  pc5 = param_1;
  for (u3 = u2 >> 2; u3 != 0; u3 = u3 - 1) {
    *(int *)pc5 = *(int *)pc4;
    pc4 = pc4 + 4;
    pc5 = pc5 + 4;
  }
  for (u2 = u2 & 3; u2 != 0; u2 = u2 - 1) {
    *pc5 = *pc4;
    pc4 = pc4 + 1;
    pc5 = pc5 + 1;
  }
  u2 = 0xffffffff;
  pc4 = s_chunk_of_unknown_origin_004839cc;
  do {
    pc5 = pc4;
    if (u2 == 0) break;
    u2 = u2 - 1;
    pc5 = pc4 + 1;
    c1 = *pc4;
    pc4 = pc5;
  } while (c1 != '\0');
  u2 = ~u2;
  pc4 = pc5 + -u2;
  pc5 = param_1 + 0x40;
  for (u3 = u2 >> 2; u3 != 0; u3 = u3 - 1) {
    *(int *)pc5 = *(int *)pc4;
    pc4 = pc4 + 4;
    pc5 = pc5 + 4;
  }
  for (u2 = u2 & 3; u2 != 0; u2 = u2 - 1) {
    *pc5 = *pc4;
    pc4 = pc4 + 1;
    pc5 = pc5 + 1;
  }
  time((time_t *)(param_1 + 0x140));
  tVar6 = time((time_t *)(param_1 + 0x144));
  return tVar6;
}


/* FUN_00461320 @ 0x00461320 */

char __thiscall FUN_00461320(void *this,int param_1,LPVOID param_2)
{
  char *pc1;
  char c2;
  short s3;
  char u4;
  ushort *vc;
  uint v8;
  uint v4;
  
  u4 = 0;
  vc = FUN_004608a0(this,(byte)param_1);
  if (vc == NULL) {
    return 0;
  }
  if (vc[8] == 8) {
    c2 = FUN_00460730(param_1,(int)vc,&v4,&v8);
    if (c2 != '\0') {
      FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),v8);
      FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),0x548,param_2);
      s3 = 0;
      do {
        pc1 = (char *)(s3 + 0x148 + (int)param_2);
        if (*pc1 == -1) {
          *pc1 = '\x01';
        }
        s3 = s3 + 1;
      } while (s3 < 0x400);
      u4 = 1;
      *(char *)((int)param_2 + 0x3f) = 0; /* TODO: unknown struct for param_2 */
      *(char *)((int)param_2 + 0x13f) = 0; /* TODO: unknown struct for param_2 */
    }
  }
  FUN_004609a0(&vc);
  return u4;
}


/* FUN_004613e0 @ 0x004613e0 */

void FUN_004613e0(void) { return; }


/* FUN_004613f0 @ 0x004613f0 */

void FUN_004613f0(void) { return; }


/* FUN_00461400 @ 0x00461400 */

void FUN_00461400(void) { return; }


/* FUN_00461410 @ 0x00461410 */

void __fastcall FUN_00461410(int param_1)
{
  FUN_004528c0(*(HANDLE *)(param_1 + 8));
}


/* FUN_00461420 @ 0x00461420 */

int __thiscall FUN_00461420(void *this,uint param_1,char param_2)
{
    /* STUB: 39 lines not yet reconstructed */
    return 0;
}


/* FUN_00461540 @ 0x00461540 */

ushort * __thiscall FUN_00461540(void *this,uint param_1)
{
  uint u1;
  ushort *pu2;
  ushort *v4;
  
  pu2 = NULL;
  if (((unsigned short)((param_1) >> 16)) != 0) {
    if ((byte)param_1 == 0) {
      pu2 = FUN_004608a0(this,(byte)((uint)param_1 >> 0x10));
      return pu2;
    }
    v4 = FUN_004608a0(this,(byte)param_1);
    if (v4 != NULL) {
      if (((unsigned short)((param_1) >> 16)) <= v4[7]) {
        u1 = (uint)((unsigned short)((param_1) >> 16));
        if ((*(int *)(v4 + u1 * 7 + 9) != 0) && (v4[u1 * 7 + 6] != 0)) {
          v4[u1 * 7 + 6] = v4[u1 * 7 + 6] + 1;
          pu2 = *(ushort **)(v4 + u1 * 7 + 0xb);
        }
      }
      FUN_004609a0(&v4);
    }
  }
  return pu2;
}


/* FUN_004615d0 @ 0x004615d0 */

void __thiscall FUN_004615d0(void *this,uint param_1)
{
  short *ps1;
  ushort u2;
  uint u3;
  ushort *v4;
  
  if (((unsigned short)((param_1) >> 16)) != 0) {
    if ((byte)param_1 != 0) {
      v4 = FUN_004608a0(this,(byte)param_1);
      if (v4 != NULL) {
        u3 = (uint)((unsigned short)((param_1) >> 16));
        u2 = v4[u3 * 7 + 6];
        if (u2 != 0) {
          v4[u3 * 7 + 6] = u2 - 1;
          if (v4[u3 * 7 + 6] == 0) {
            if (*(uint *)(v4 + u3 * 7 + 0xb) != 0) {
              FUN_0046f5f0(*(uint *)(v4 + u3 * 7 + 0xb));
            }
            (v4 + u3 * 7 + 0xb)[0] = 0;
            (v4 + u3 * 7 + 0xb)[1] = 0;
            ps1 = (short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (param_1 & 0xff) * 0xe);
            *ps1 = *ps1 + -1;
          }
        }
        FUN_004609a0(&v4);
      }
    }
  }
  return;
}


/* FUN_00461670 @ 0x00461670 */

void __thiscall FUN_00461670(void *this,uint param_1,int param_2)
{
  short *ps1;
  uint u2;
  ushort *v4;
  
  if ((param_2 != 0) && (((unsigned short)((param_1) >> 16)) != 0)) {
    if ((byte)param_1 != 0) {
      v4 = FUN_004608a0(this,(byte)param_1);
      if (v4 != NULL) {
        u2 = (uint)((unsigned short)((param_1) >> 16));
        if ((v4[u2 * 7 + 6] == 0) && (*(int *)(v4 + u2 * 7 + 0xb) == 0)) {
          v4[u2 * 7 + 6] = 1;
          *(int *)(v4 + u2 * 7 + 0xb) = param_2;
          ps1 = (short *)(*(int *)((intptr_t)this + 0xc) + 0xc + (param_1 & 0xff) * 0xe);
          *ps1 = *ps1 + 1;
        }
        FUN_004609a0(&v4);
      }
    }
  }
  return;
}


/* FUN_00461700 @ 0x00461700 */

char __thiscall FUN_00461700(void *this,char *param_1,uint param_2)
{
    /* STUB: 81 lines not yet reconstructed */
    return 0;
}


/* FUN_00461830 @ 0x00461830 */

char __thiscall FUN_00461830(GameWidget *this,uint param_1)
{
  uint u1;
  uint u2;
  uint u3;
  ushort *pu4;
  ushort *pu5;
  uint u6;
  char v9;
  
  if (this->pos_x == 0) {
    return 0;
  }
  v9 = 0;
  pu4 = FUN_004608a0(this,(byte)param_1);
  if (pu4 != NULL) {
    u3 = param_1 >> 0x10;
    u1 = *(uint *)(pu4 + u3 * 7 + 9);
    if ((u1 & 0x80000000) != 0) {
      return 1;
    }
    u2 = this->child_list_2;
    u6 = *(uint *)(pu4 + u3 * 7 + 7) & 0x7fffffff;
    if (u2 + u6 <= this->pos_w) {
      pu5 = FUN_004600c0(this,u6,0);
      if (pu5 != NULL) {
        FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),u1 & 0x3fffffff);
        FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),u6,pu5);
        FUN_004178e0(this->pos_x,u2);
        FUN_00452970(this->pos_x,u6,pu5);
        FUN_0046f5f0((uint)pu5);
        this->child_list_2 = this->child_list_2 + u6;
        v9 = 1;
        *(uint *)(pu4 + u3 * 7 + 9) = u2;
        *(uint *)(pu4 + u3 * 7 + 9) = u2 | 0xc0000000;
      }
    }
  }
  return v9;
}


/* FUN_00461940 @ 0x00461940 */

char __thiscall FUN_00461940(GameWidget *this,uint param_1)
{
  uint u1;
  uint u2;
  uint u3;
  ushort *pu4;
  ushort *pu5;
  uint u6;
  char vd;
  ushort *v4;
  
  if (this->pos_x == 0) {
    return 0;
  }
  vd = 0;
  pu4 = FUN_004608a0(this,(byte)param_1);
  if (pu4 == NULL) {
    return 0;
  }
  u3 = param_1 >> 0x10;
  u1 = *(uint *)(pu4 + u3 * 7 + 9);
  v4 = pu4;
  if ((u1 & 0x80000000) == 0) {
    u2 = this->pos_h;
    u6 = *(uint *)(pu4 + u3 * 7 + 7) & 0x7fffffff;
    if ((this->pos_w < u6 + u2) ||
       (pu5 = FUN_004600c0(this,u6,0), pu5 == NULL)) goto L_00461a2c;
    FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),u1 & 0x3fffffff);
    FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),u6,pu5);
    FUN_004178e0(this->pos_x,u2);
    FUN_00452970(this->pos_x,u6,pu5);
    FUN_0046f5f0((uint)pu5);
    this->child_list_2 = this->child_list_2 + u6;
    this->pos_h = this->pos_h + u6;
    *(uint *)(pu4 + u3 * 7 + 9) = u2;
    *(uint *)(pu4 + u3 * 7 + 9) = u2 | 0x80000000;
  }
  vd = 1;
L_00461a2c:
  FUN_004609a0(&v4);
  return vd;
}


/* FUN_00461a60 @ 0x00461a60 */

char __thiscall FUN_00461a60(GameWidget *this,byte param_1)
{
  int n1;
  uint u2;
  uint u3;
  ushort *pu4;
  uint u5;
  char v9;
  
  if (this->pos_x == 0) {
    return 0;
  }
  v9 = 0;
  u2 = *(uint *)(this->parent_widget + 0x12 + (uint)param_1 * 0xe);
  n1 = this->parent_widget + 0xc + (uint)param_1 * 0xe;
  if ((u2 & 0x80000000) != 0) {
    return 1;
  }
  u3 = this->pos_h;
  u5 = *(uint *)(n1 + 2) & 0x7fffffff;
  if (u5 + u3 <= this->pos_w) {
    pu4 = FUN_004600c0(this,u5,0);
    if (pu4 != NULL) {
      FUN_004178e0(*(HANDLE *)((intptr_t)this + 8),u2 & 0x3fffffff);
      FUN_004179a0(*(HANDLE *)((intptr_t)this + 8),u5,pu4);
      FUN_004178e0(this->pos_x,u3);
      FUN_00452970(this->pos_x,u5,pu4);
      FUN_0046f5f0((uint)pu4);
      this->child_list_2 = this->child_list_2 + u5;
      v9 = 1;
      this->pos_h = this->pos_h + u5;
      *(uint *)(n1 + 6) = u3;
      *(uint *)(n1 + 6) = u3 | 0x80000000;
    }
  }
  return v9;
}


/* FUN_00461b60 @ 0x00461b60
 * TODO: param_1 is a resource/file manager object, not a known struct
 */

void __fastcall FUN_00461b60(void *param_1)
{
  int n1;
  int n2;
  ushort *pu3;
  byte vb;
  ushort va;
  uint v4;

  if (*(int *)((int)param_1 + 0x26) != 0) { /* TODO: resource manager field 0x26 */
    vb = 1;
    if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xc) != 0) { /* TODO: resource manager->0x0c->0x0c */
      do {
        pu3 = NULL;
        n2 = *(int *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)vb * 0xe); /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
        if (n2 != 0) {
          va = 1;
          if (*(short *)(n2 + 0xe) != 0) {
            do {
              n1 = n2 + 0xc + (uint)va * 0xe;
              if ((*(byte *)(n1 + 9) & 0x40) != 0) {
                if (pu3 == NULL) {
                  v4 = (uint)vb;
                  pu3 = FUN_00460780(param_1,v4);
                  FUN_0045feb0((int)pu3,'\0');
                }
                *(uint *)(n1 + 6) = *(uint *)(pu3 + (uint)va * 7 + 9) & 0x3fffffff;
              }
              va = va + 1;
            } while (va <= *(ushort *)(n2 + 0xe));
          }
          if (pu3 != NULL) {
            FUN_0046f5f0((uint)pu3);
          }
        }
        vb = vb + 1;
      } while ((ushort)vb <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xc)); /* TODO: resource manager->0x0c->0x0c */
    }
    *(int *)((int)param_1 + 0x36) = *(int *)((int)param_1 + 0x32); /* TODO: resource manager fields 0x36 = 0x32 */
  }
  return;
}


/* FUN_00461c60 @ 0x00461c60 */

void __fastcall FUN_00461c60(int param_1)
{
  if (*(HANDLE *)(param_1 + 0x26) != NULL) {
    FUN_004529c0(*(HANDLE *)(param_1 + 0x26));
    *(int *)(param_1 + 0x26) = 0;
    FUN_00452840(*(LPCSTR *)(param_1 + 0x2a));
    FUN_0046f5f0(*(uint *)(param_1 + 0x2a));
    *(int *)(param_1 + 0x2a) = 0;
  }
  return;
}


/* FUN_00461ca0 @ 0x00461ca0 */

uint __thiscall FUN_00461ca0(void *this,char *param_1)
{
    /* STUB: 47 lines not yet reconstructed */
    return 0;
}


/* FUN_00461d70 @ 0x00461d70
 * NOTE: param_1 is a resource/file manager object, NOT a known game struct.
 * Offsets 0x0c, 0x20, 0x26, 0x32, 0x36 are fields of that manager object.
 */

int __fastcall FUN_00461d70(void *param_1)
{
  uint u1;
  ushort *pu2;
  ushort *pu3;
  int n4;
  void *pv5;
  byte b6;
  ushort u7;
  byte v11;
  ushort *vc;
  int v8;
  uint v4;
  
  b6 = 1;
  if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x0c->0x0e */
    do {
      vc = FUN_004608a0(param_1,b6);
      if (vc != NULL) {
        pu2 = FUN_004608a0(*(void **)((int)param_1 + 0x20),b6); /* TODO: resource manager field 0x20 */
        if ((pu2 != NULL) && (*(int *)(pu2 + 0xb) != *(int *)(vc + 0xb))) {
          return (uint)pu2 & 0xffffff00;
        }
        FUN_004609a0(&vc);
      }
      b6 = b6 + 1;
    } while ((ushort)b6 <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe)); /* TODO: resource manager->0x0c->0x0e */
  }
  n4 = *(int *)(*(int *)((int)param_1 + 0x20) + 0xc); /* TODO: resource manager->0x20->0x0c */
  if (*(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe) < *(ushort *)(n4 + 0xe)) { /* TODO: resource manager->0x0c->0x0e */
    FUN_004624b0(param_1,*(ushort *)(n4 + 0xc));
  }
  v11 = 1;
  pv5 = param_1;
  if (*(short *)(*(int *)(*(int *)((int)param_1 + 0x20) + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x20->0x0c->0x0e */
    do {
      pu2 = FUN_004608a0(*(void **)((int)param_1 + 0x20),v11); /* TODO: resource manager field 0x20 */
      if (pu2 != NULL) {
        if (*(ushort *)(*(int *)((int)param_1 + 0xc) + 0xc) < (ushort)v11) { /* TODO: resource manager->0x0c->0x0c */
          FUN_00460510(param_1,pu2[7],pu2[8],*(int *)(pu2 + 9),
                       *(int *)(pu2 + 0xb));
        }
        pu3 = FUN_004608a0(param_1,v11);
        if (pu3 != NULL) {
          if (pu3[7] < pu2[7]) {
            FUN_004623a0(param_1,v11,pu2[7]);
          }
          u7 = 1;
          if (pu2[7] != 0) {
            do {
              n4 = (int)(short)u7;
              if ((*(int *)(pu2 + n4 * 7 + 9) != 0) && (*(int *)(pu2 + n4 * 7 + 7) != 0)
                 ) {
                v8 = (uint)u7 << 0x10;
                v8 = CONCAT31((((v8) >> 8) & 0xFFFFFF),v11);
                FUN_00461130(*(void **)((int)param_1 + 0x20),v8,&v4,(uint *)&vc, /* TODO: resource manager field 0x20 */
                             pu2);
                if (*(int *)(pu3 + n4 * 7 + 9) == 0) {
                  if (v4 != 0) {
                    pu3[6] = pu3[6] + 1;
L_00461f1a:
                    *(uint *)(pu3 + n4 * 7 + 9) =
                         *(uint *)(pu2 + n4 * 7 + 9) & 0x3fffffff;
                    u1 = *(uint *)(pu2 + n4 * 7 + 7);
                    *(uint *)(pu3 + n4 * 7 + 7) = u1;
                    *(uint *)(pu3 + n4 * 7 + 7) = u1 | 0x80000000;
                  }
                }
                else {
                  if (v4 != 0) goto L_00461f1a;
                  (pu3 + n4 * 7 + 9)[0] = 0;
                  (pu3 + n4 * 7 + 9)[1] = 0;
                  (pu3 + n4 * 7 + 7)[0] = 0;
                  (pu3 + n4 * 7 + 7)[1] = 0;
                  pu3[6] = pu3[6] - 1;
                }
              }
              u7 = u7 + 1;
            } while ((int)(short)u7 <= (int)(uint)pu2[7]);
          }
        }
      }
      v11 = v11 + 1;
      pv5 = (void *)CONCAT22((short)((uint)param_1 >> 0x10),(ushort)v11);
    } while ((ushort)v11 <= *(ushort *)(*(int *)(*(int *)((int)param_1 + 0x20) + 0xc) + 0xe)); /* TODO: resource manager->0x20->0x0c->0x0e */
  }
  return CONCAT31((unsigned int)((uint)pv5 >> 8),1);
}


/* FUN_00461fa0 @ 0x00461fa0
 * NOTE: param_1 is a resource/file manager object, NOT a known game struct.
 * Offsets 0x0c, 0x0e, 0x16 are fields of that manager object.
 */

void __fastcall FUN_00461fa0(void *param_1)
{
  ushort *pu1;
  ushort *pu2;
  byte b3;
  
  pu1 = FUN_00460780(param_1,0);
  b3 = 1;
  FUN_0045feb0((int)pu1,'\0');
  if (*(short *)(*(int *)((int)param_1 + 0xc) + 0xe) != 0) { /* TODO: resource manager->0x0c->0x0e */
    do {
      pu2 = FUN_004608a0(param_1,b3);
      if (pu2 != NULL) {
        FUN_0046f5f0(*(uint *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)b3 * 0xe)); /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
        *(int *)(*(int *)((int)param_1 + 0xc) + 0x16 + (uint)b3 * 0xe) = 0; /* TODO: resource manager->0x0c->0x16 + stride 0x0e */
      }
      if ((ushort)b3 <= pu1[6]) {
        FUN_004608a0(param_1,b3);
      }
      b3 = b3 + 1;
    } while ((ushort)b3 <= *(ushort *)(*(int *)((int)param_1 + 0xc) + 0xe)); /* TODO: resource manager->0x0c->0x0e */
  }
  FUN_0046f5f0((uint)pu1);
}


/* FUN_00462030 @ 0x00462030 */

void __fastcall FUN_00462030(void *param_1)
{
    /* STUB: 10 lines not yet reconstructed */
    return;
}


/* FUN_00462060 @ 0x00462060 */

char __thiscall FUN_00462060(void *this,int param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return 0;
}


/* FUN_004620d0 @ 0x004620d0 */

char __thiscall FUN_004620d0(void *this,int param_1)
{
    /* STUB: 21 lines not yet reconstructed */
    return 0;
}


/* FUN_00462160 @ 0x00462160 */

int __thiscall FUN_00462160(GameScreen *this,int param_1)
{
  char c1;
  
  if (param_1 == 0) {
    return this->font_id;
  }
  if (this->pen_style != 0) {
    c1 = FUN_004620d0(this,param_1);
    if (c1 != '\0') {
      return this->pen_style;
    }
  }
  if (this->color_b != 0) {
    c1 = FUN_00462060(this,param_1);
    if (c1 != '\0') {
      return *(int *)(this->color_b + 8);
    }
  }
  return this->font_id;
}


/* FUN_004621c0 @ 0x004621c0 */

void __thiscall FUN_004621c0(void *this,byte param_1)
{
  FUN_004621d0(this,param_1,'\0');
}


/* FUN_004621d0 @ 0x004621d0 */

void __thiscall FUN_004621d0(void *this,byte param_1,char param_2)
{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_00462350 @ 0x00462350 */

int __thiscall FUN_00462350(void *this,uint param_1)
{
    /* STUB: 15 lines not yet reconstructed */
    return 0;
}


/* FUN_004623a0 @ 0x004623a0 */

uint __thiscall FUN_004623a0(void *this,byte param_1,ushort param_2)
{
  int n1;
  uint _Size;
  uint u2;
  ushort u3;
  ushort *_Src;
  ushort *_Dst;
  int u4;
  uint u5;
  ushort *pu6;
  
  _Src = FUN_004608a0(this,param_1);
  u3 = _Src[7];
  _Size = (uint)u3 * 0xe + 0x1a;
  n1 = (uint)param_2 * 0xe;
  u2 = n1 + 0x1a;
  if (u2 <= _Size) {
    return (uint)param_2 * 7 & 0xffffff00;
  }
  _Dst = FUN_004600c0(this,u2,0);
  if (_Dst != NULL) {
    pu6 = _Dst + (uint)u3 * 7 + 0xd;
    for (u5 = u2 - _Size >> 2; u5 != 0; u5 = u5 - 1) {
      pu6[0] = 0;
      pu6[1] = 0;
      pu6 = pu6 + 2;
    }
    for (u5 = u2 - _Size & 3; u5 != 0; u5 = u5 - 1) {
      *(char *)pu6 = 0;
      pu6 = (ushort *)((int)pu6 + 1);
    }
    memmove(_Dst,_Src,_Size);
    *(int *)(_Dst + 4) = n1 + 0xe;
    _Dst[7] = param_2;
    n1 = (uint)param_1 * 0xe;
    FUN_00461400();
    u4 = FUN_0046f5f0((uint)_Src);
    *(uint *)(*(int *)((intptr_t)this + 0xc) + 0xe + n1) = u2;
    *(int *)(*(int *)((intptr_t)this + 0xc) + 0x12 + n1) = 0;
    *(ushort **)(*(int *)((intptr_t)this + 0xc) + 0x16 + n1) = _Dst;
    return CONCAT31((unsigned int)((uint)u4 >> 8),1);
  }
  return 0;
}


/* FUN_004624b0 @ 0x004624b0 */

int __thiscall FUN_004624b0(void *this,ushort param_1)
{
    /* STUB: 51 lines not yet reconstructed */
    return 0;
}


/* FUN_004625b0 @ 0x004625b0 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_004625b0(int param_1)
{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_00462720 @ 0x00462720 */

void __cdecl FUN_00462720(short *param_1,char param_2)
{
  int n1;
  short s2;
  
  if (param_1 != NULL) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    s2 = 0;
    if (0 < *param_1) {
      do {
        n1 = (int)s2;
        s2 = s2 + 1;
        FUN_00465750(param_1 + n1 * 7 + 6,param_2);
      } while (s2 < *param_1);
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}


/* FUN_004627a0 @ 0x004627a0 */

void FUN_004627a0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489b28,u1,_arg1);
}


/* FUN_004627f0 @ 0x004627f0 */

void FUN_004627f0(void) { return; }


/* FUN_00462810 @ 0x00462810 */

/* NOTE: overlapping globals */

void FUN_00462810(void)
{
  _DAT_00489b36 = 0;
  _DAT_00489b34 = 0;
}


/* FUN_00462820 @ 0x00462820 */

void FUN_00462820(void)
{
  _atexit(FUN_00462830);
}


/* FUN_00462830 @ 0x00462830 */

void FUN_00462830(void) { return; }


/* FUN_00462850 @ 0x00462850 */

/* NOTE: overlapping globals */

void FUN_00462850(void)
{
  _DAT_00489b32 = 0;
  _DAT_00489b30 = 0;
}


/* FUN_00462860 @ 0x00462860 */

void FUN_00462860(void)
{
  _atexit(FUN_00462870);
}


/* FUN_00462870 @ 0x00462870 */

void FUN_00462870(void) { return; }


/* FUN_00462890 @ 0x00462890 */

void FUN_00462890(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489b38,u1,_arg1);
}


/* FUN_004628d0 @ 0x004628d0 */

void FUN_004628d0(void)
{
  _atexit(FUN_004628e0);
}


/* FUN_004628e0 @ 0x004628e0 */

void FUN_004628e0(void) { return; }


/* FUN_00462900 @ 0x00462900 */

/* NOTE: overlapping globals */

void FUN_00462900(void)
{
  _DAT_00489b46 = 0;
  _DAT_00489b44 = 0;
}


/* FUN_00462910 @ 0x00462910 */

void FUN_00462910(void)
{
  _atexit(FUN_00462920);
}


/* FUN_00462920 @ 0x00462920 */

void FUN_00462920(void) { return; }


/* FUN_00462940 @ 0x00462940 */

/* NOTE: overlapping globals */

void FUN_00462940(void)
{
  _DAT_00489b42 = 0;
  _DAT_00489b40 = 0;
}


/* FUN_00462950 @ 0x00462950 */

void FUN_00462950(void)
{
  _atexit(FUN_00462960);
}


/* FUN_00462960 @ 0x00462960 */

void FUN_00462960(void) { return; }


/* FUN_00462980 @ 0x00462980 */

void FUN_00462980(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489b70,u1,_arg1);
}


/* FUN_004629c0 @ 0x004629c0 */

void FUN_004629c0(void)
{
  _atexit(FUN_004629d0);
}


/* FUN_004629d0 @ 0x004629d0 */

void FUN_004629d0(void) { return; }


/* FUN_004629f0 @ 0x004629f0 */

/* NOTE: overlapping globals */

void FUN_004629f0(void)
{
  _DAT_00489b9a = 0;
  _DAT_00489b98 = 0;
}


/* FUN_00462a00 @ 0x00462a00 */

void FUN_00462a00(void)
{
  _atexit(FUN_00462a10);
}


/* FUN_00462a10 @ 0x00462a10 */

void FUN_00462a10(void) { return; }


/* FUN_00462a30 @ 0x00462a30 */

/* NOTE: overlapping globals */

void FUN_00462a30(void)
{
  _DAT_00489b96 = 0;
  _DAT_00489b94 = 0;
}


/* FUN_00462a40 @ 0x00462a40 */

void FUN_00462a40(void)
{
  _atexit(FUN_00462a50);
}


/* FUN_00462a50 @ 0x00462a50 */

void FUN_00462a50(void) { return; }


/* FUN_00463ec0 @ 0x00463ec0 */

void ** __fastcall FUN_00463ec0(void **param_1)
{
    /* STUB: 46 lines not yet reconstructed */
    return 0;
}


/* FUN_00464000 @ 0x00464000 */

void ** __thiscall FUN_00464000(void *this,byte param_1)
{
  FUN_00464020(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00464020 @ 0x00464020 */

void __fastcall FUN_00464020(void **param_1)
{
    /* STUB: 6 lines not yet reconstructed */
    return;
}


/* FUN_00464040 @ 0x00464040 */

bool FUN_00464040(void)
{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_00464160 @ 0x00464160 */

void ** __fastcall FUN_00464160(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004641ab;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_004779b0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004641c0 @ 0x004641c0 */

void ** __thiscall FUN_004641c0(void *this,byte param_1)
{
  FUN_004641e0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004641e0 @ 0x004641e0 */

void __fastcall FUN_004641e0(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0046421d;
  *param_1 = &PTR_FUN_004779b0;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00464227();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00464227 @ 0x00464227 */

void FUN_00464227(void)
{
  FUN_004012a0();
}


/* FUN_00464230 @ 0x00464230
 * Struct types: GameWidget (this) - accesses field_118(0x118)
 */

void __thiscall FUN_00464230(GameWidget *this,short param_1)
{
  this->field_118 = param_1;
}


/* FUN_00464240 @ 0x00464240 */

void __fastcall FUN_00464240(int param_1)
{
  FUN_00456450();
  if ((int)((GameWidget *)param_1)->field_118 - (int)DAT_00489b68 != -1) {
    FUN_00464e50(DAT_00489b9c);
    DAT_00489b48 = 1;
    DAT_00489b68 = ((GameWidget *)param_1)->field_118 + 1;
  }
  return;
}


/* FUN_00464290 @ 0x00464290 */

void ** __fastcall FUN_00464290(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004642dd;
  *_fs = &_seh_prev;
  FUN_00454a70(param_1,0);
  *param_1 = &PTR_FUN_00477a58;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004642f0 @ 0x004642f0 */

void ** __thiscall FUN_004642f0(void *this,byte param_1)
{
  FUN_00464310(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00464310 @ 0x00464310 */

void __fastcall FUN_00464310(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0046434d;
  *param_1 = &PTR_FUN_00477a58;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00464357();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00464357 @ 0x00464357 */

void FUN_00464357(void)
{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
}


/* FUN_00464b90 @ 0x00464b90 */

void __thiscall FUN_00464b90(SoundPlayer *this,short param_1)
{
  this->sequence_data[50] = param_1;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,param_1);
}


/* FUN_00464bc0 @ 0x00464bc0 */

int * __thiscall
FUN_00464bc0(SoundPlayer *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  short s1;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00464c81;
  *_fs = &_seh_prev;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  _seh_state = 0;
  *(void ***)this = &PTR_FUN_00477b08;
  DAT_00489b5c = 0;
  DAT_00489b48 = 0;
  DAT_00489b84 = 0;
  DAT_00489b9c = this;
  this->sequence_data[50] = DAT_00489b68 + -1;
  s1 = DAT_00489b68 + -1;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,s1);
  FUN_0042bf40();
  FUN_0042bf70(this);
  *_fs = _seh_prev;
  return this;
}


/* FUN_00464ca0 @ 0x00464ca0 */

void ** __thiscall FUN_00464ca0(void *this,byte param_1)
{
  FUN_00464cc0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00464cc0 @ 0x00464cc0 */

void __fastcall FUN_00464cc0(void **param_1)
{
    /* STUB: 59 lines not yet reconstructed */
    return;
}


/* FUN_00464de7 @ 0x00464de7 */

void FUN_00464de7(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_00464e50 @ 0x00464e50 */

void __fastcall FUN_00464e50(int *param_1)
{
  FUN_00465050(0);
  FUN_00464f20();
  FUN_0042c3f0(param_1);
}


/* FUN_00464e70 @ 0x00464e70 */

void FUN_00464e70(int param_1,short param_2,int param_3,char param_4,
                 char param_5)
{
    /* STUB: 23 lines not yet reconstructed */
    return;
}


/* FUN_00464ed0 @ 0x00464ed0 */

void FUN_00464ed0(int param_1,short param_2)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_00464f20 @ 0x00464f20 */

void FUN_00464f20(void)
{
  int n1;
  ushort *pu2;
  int *pn3;
  short s4;
  ushort u5;
  ushort u6;
  
  s4 = 0;
  do {
    s4 = s4 + 1;
    *(short *)(DAT_0048345c + 0x3a + ((int)DAT_00489b68 + s4 * 6) * 2) = 0;
    pn3 = DAT_00489b50;
  } while (s4 < 6);
  for (; pn3 != NULL; pn3 = (int *)pn3[1]) {
    if (DAT_00489b68 == 1) {
      s4 = ((UIWidget *)*pn3)->current_frame + -1;
    }
    else {
      s4 = ((UIWidget *)*pn3)->current_frame + -2;
    }
    u5 = (ushort)(s4 == 0);
    u6 = 0;
    do {
      n1 = (short)u6 * 6;
      if ((&DAT_00483a10)[(short)u6 * 3] == (short)pn3[2]) {
        pu2 = (ushort *)
                 (DAT_0048345c + 0x3a + ((int)DAT_00489b68 + (char)(&DAT_00483a13)[n1] * 6) * 2);
        u5 = u5 << ((&DAT_00483a14)[n1] & 0x1f) | *pu2;
        *pu2 = u5;
        if (((u5 & 1) != 0) && (DAT_00489b68 != 1)) {
          *(short *)(DAT_0048345c + 0x92 + DAT_00489b68 * 2) = (short)(char)(&DAT_00483a13)[n1];
        }
      }
      u6 = u6 + 1;
    } while (u6 < 0x92);
  }
  if (DAT_0048345c != 0) {
    if ((((GameSession *)DAT_0048345c)->display_flags & 1) != 0) {
      ((GameSession *)DAT_0048345c)->level_mode = (char)((GameSession *)DAT_0048345c)->display_flags;
      return;
    }
    ((GameSession *)DAT_0048345c)->level_mode = 0;
  }
  return;
}


/* FUN_00465050 @ 0x00465050 */

void FUN_00465050(byte param_1)
{
  int *pu1;
  
  for (pu1 = DAT_00489b50; pu1 != NULL; pu1 = (int *)pu1[1]) {
    FUN_0041dad0((void *)*pu1,param_1,'\0');
  }
  return;
}


/* FUN_00465080 @ 0x00465080 */

void FUN_00465080(void)
{
  int n1;
  int *pu2;
  ushort u3;
  ushort u4;
  short s5;
  
  for (pu2 = DAT_00489b50; pu2 != NULL; pu2 = (int *)pu2[1]) {
    u3 = 1;
    u4 = 0;
    do {
      n1 = (short)u4 * 6;
      if ((&DAT_00483a10)[(short)u4 * 3] == *(short *)(pu2 + 2)) {
        u3 = u3 << ((&DAT_00483a14)[n1] & 0x1f) &
                *(ushort *)
                 (DAT_0048345c + 0x3a + ((int)DAT_00489b68 + (char)(&DAT_00483a13)[n1] * 6) * 2);
        if (u3 == 0) {
          if ((*(short *)(DAT_0048345c + 0x92 + DAT_00489b68 * 2) ==
               (short)*(char *)((int)pu2 + 10)) && (DAT_00489b68 != 1)) { /* TODO: unknown linked-list node field at offset 0x0a */
            s5 = 1;
          }
          else {
            s5 = 0;
          }
        }
        else if ((*(char *)((int)pu2 + 0xb) == '\0') || (DAT_00489b68 == 1)) { /* TODO: unknown linked-list node field at offset 0x0b */
          s5 = 1;
        }
        else {
          s5 = 2;
        }
        FUN_00464b90((void *)*pu2,s5);
      }
      u4 = u4 + 1;
    } while (u4 < 0x92);
  }
  return;
}


/* FUN_0046561c @ 0x0046561c */

void FUN_0046561c(void) { return; }


/* FUN_00465640 @ 0x00465640 */

void FUN_00465640(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489ba0,u1,_arg1);
}


/* FUN_00465690 @ 0x00465690 */

void FUN_00465690(void) { return; }


/* FUN_004656b0 @ 0x004656b0 */

/* NOTE: overlapping globals */

void FUN_004656b0(void)
{
  _DAT_00489bae = 0;
  _DAT_00489bac = 0;
}


/* FUN_004656c0 @ 0x004656c0 */

void FUN_004656c0(void)
{
  _atexit(FUN_004656d0);
}


/* FUN_004656d0 @ 0x004656d0 */

void FUN_004656d0(void) { return; }


/* FUN_004656f0 @ 0x004656f0 */

/* NOTE: overlapping globals */

void FUN_004656f0(void)
{
  _DAT_00489baa = 0;
  _DAT_00489ba8 = 0;
}


/* FUN_00465700 @ 0x00465700 */

void FUN_00465700(void)
{
  _atexit(FUN_00465710);
}


/* FUN_00465710 @ 0x00465710 */

void FUN_00465710(void) { return; }


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


/* FUN_00465730 @ 0x00465730 */

void __fastcall FUN_00465730(int param_1)
{
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0046f5f0(*(uint *)(param_1 + 2));
    *(int *)(param_1 + 2) = 0;
    *(char *)(param_1 + 0xc) = 0;
  }
  return;
}


/* FUN_00465750 @ 0x00465750 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_00465750(GameScreen *this,char param_1)
{
  short *ps1;
  int u2;
  int u3;
  int *pn4;
  int n5;
  short s6;
  int v2c [6];
  int *v14;
  int *v10;
  int *vc;
  short *v8;
  void *v4;
  
  if (param_1 == '\0') {
    *(ushort *)this = CONCAT11((char)*(short *)this,(char)((ushort)*(short *)this >> 8));
    v8 = (short *)&this->font_size;
    *v8 = CONCAT11((char)*v8,(char)((ushort)*v8 >> 8));
    u2 = this->font_id;
    vc = v2c;
    u3 = *(int *)((intptr_t)this + 2);
    v10 = v2c;
    this->font_id =
         CONCAT22(CONCAT11((char)u2,(char)((uint)u2 >> 8)),
                  CONCAT11((char)((uint)u2 >> 0x10),(char)((uint)u2 >> 0x18))) + (intptr_t)this;
    v2c[0] = CONCAT22(CONCAT11((char)u3,(char)((uint)u3 >> 8)),
                           CONCAT11((char)((uint)u3 >> 0x10),(char)((uint)u3 >> 0x18)));
    s6 = 0;
    *(int *)((intptr_t)this + 2) = v2c[0] + (intptr_t)this;
    v4 = this;
    if (0 < *(short *)this) {
      do {
        pn4 = (int *)(s6 * 4 + *(int *)((intptr_t)this + 2));
        n5 = *pn4;
        v14 = v2c;
        v2c[0] = CONCAT22(CONCAT11((char)n5,(char)((uint)n5 >> 8)),
                               CONCAT11((char)((uint)n5 >> 0x10),(char)((uint)n5 >> 0x18)));
        s6 = s6 + 1;
        *pn4 = v2c[0] + (intptr_t)this;
      } while (s6 < *(short *)this);
    }
  }
  s6 = 0;
  ps1 = (short *)&this->font_size;
  if (0 < *ps1) {
    do {
      n5 = (int)s6;
      s6 = s6 + 1;
      FUN_0042f350((void *)(n5 * 8 + this->font_id),param_1);
    } while (s6 < *ps1);
  }
  if (param_1 != '\0') {
    s6 = 0;
    if (0 < *(short *)this) {
      do {
        pn4 = (int *)(s6 * 4 + *(int *)((intptr_t)this + 2));
        n5 = *pn4 - (intptr_t)this;
        s6 = s6 + 1;
        *pn4 = CONCAT22(CONCAT11((char)n5,(char)((uint)n5 >> 8)),
                           CONCAT11((char)((uint)n5 >> 0x10),(char)((uint)n5 >> 0x18)));
      } while (s6 < *(short *)this);
    }
    n5 = this->font_id - (intptr_t)this;
    this->font_id =
         CONCAT22(CONCAT11((char)n5,(char)((uint)n5 >> 8)),
                  CONCAT11((char)((uint)n5 >> 0x10),(char)((uint)n5 >> 0x18)));
    n5 = *(int *)((intptr_t)this + 2) - (intptr_t)this;
    *(uint *)((intptr_t)this + 2) =
         CONCAT22(CONCAT11((char)n5,(char)((uint)n5 >> 8)),
                  CONCAT11((char)((uint)n5 >> 0x10),(char)((uint)n5 >> 0x18)));
    *(ushort *)this = CONCAT11((char)*(short *)this,(char)((ushort)*(short *)this >> 8));
    *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
  }
  return;
}


/* FUN_00465910 @ 0x00465910 */

void __cdecl FUN_00465910(void *param_1,char param_2)
{
  FUN_00465750(param_1,param_2);
}


/* FUN_00465920 @ 0x00465920 */

ushort * __cdecl FUN_00465920(void *param_1,int param_2)
{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  if (pu1 != NULL) {
    FUN_00465910(pu1,'\0');
  }
  return pu1;
}


/* FUN_00465950 @ 0x00465950 */

void __cdecl FUN_00465950(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    thunk_FUN_00465730(param_3);
    FUN_0046c410(param_3);
  }
  return;
}


/* FUN_00465980 @ 0x00465980 */

void FUN_00465980(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489bb0,u1,_arg1);
}


/* FUN_004659d0 @ 0x004659d0 */

void FUN_004659d0(void) { return; }


/* FUN_004659f0 @ 0x004659f0 */

/* NOTE: overlapping globals */

void FUN_004659f0(void)
{
  _DAT_00489bbe = 0;
  _DAT_00489bbc = 0;
}


/* FUN_00465a00 @ 0x00465a00 */

void FUN_00465a00(void)
{
  _atexit(FUN_00465a10);
}


/* FUN_00465a10 @ 0x00465a10 */

void FUN_00465a10(void) { return; }


/* FUN_00465a30 @ 0x00465a30 */

/* NOTE: overlapping globals */

void FUN_00465a30(void)
{
  _DAT_00489bba = 0;
  _DAT_00489bb8 = 0;
}


/* FUN_00465a40 @ 0x00465a40 */

void FUN_00465a40(void)
{
  _atexit(FUN_00465a50);
}


/* FUN_00465a50 @ 0x00465a50 */

void FUN_00465a50(void) { return; }


/* FUN_00465a60 @ 0x00465a60
 * TODO: param_1 is a custom object with vtable, offsets 0x1e, 0x1a, etc.
 *       Not clearly a known game struct - these are small offsets on a utility object.
 */

void ** __fastcall FUN_00465a60(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00465ab9;
  *_fs = &_seh_prev;
  FUN_00417c70(param_1);
  *(short *)((int)param_1 + 0x1e) = 0; /* TODO: unknown struct, offset 0x1e */
  *param_1 = &PTR_FUN_00477bc8;
  *(int *)((int)param_1 + 0x1a) = 0; /* TODO: unknown struct, offset 0x1a */
  param_1[5] = 0;
  param_1[4] = 0;
  *(char *)(param_1 + 6) = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00465ad0 @ 0x00465ad0 */

void ** __thiscall FUN_00465ad0(void *this,byte param_1)
{
  FUN_00465af0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00465af0 @ 0x00465af0 */

void __fastcall FUN_00465af0(void **param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00465b39;
  *param_1 = &PTR_FUN_00477bc8;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00465b50((int)param_1);
  _seh_state = 0xffffffff;
  FUN_00465b43();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00465b43 @ 0x00465b43 */

void FUN_00465b43(void)
{
  int _ebp;
  
  FUN_00417cc0(*(int **)(_ebp + -0x10));
}


/* FUN_00465b50 @ 0x00465b50 */

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
}


/* FUN_00465ba0 @ 0x00465ba0 */

uint __fastcall FUN_00465ba0(int param_1)
{
  short s1;
  int n2;
  int n3;
  uint _eax;
  short *pu4;
  
  n2 = *(int *)(param_1 + 0x1a);
  if (n2 != 0) {
    s1 = *(short *)(param_1 + 0x1e);
    _eax = CONCAT22((short)(_eax >> 0x10),s1);
    if (s1 != 0) {
      n3 = *(int *)(n2 + 8 + (short)(s1 + -1) * 4);
      if (n3 == 0) {
        pu4 = NULL;
      }
      else {
        pu4 = (short *)(n3 + n2);
      }
      if (pu4 != NULL) {
        return CONCAT22((short)((uint)pu4 >> 0x10),*pu4);
      }
      return 0;
    }
  }
  return _eax & 0xffff0000;
}


/* FUN_00465be0 @ 0x00465be0 */

uint __fastcall FUN_00465be0(int param_1)
{
  short s1;
  int n2;
  uint _eax;
  int n3;
  
  n2 = *(int *)(param_1 + 0x1a);
  if (n2 != 0) {
    s1 = *(short *)(param_1 + 0x1e);
    _eax = CONCAT22((short)(_eax >> 0x10),s1);
    if (s1 != 0) {
      n3 = *(int *)(n2 + 8 + (short)(s1 + -1) * 4);
      if (n3 == 0) {
        n3 = 0;
      }
      else {
        n3 = n3 + n2;
      }
      if (n3 != 0) {
        return CONCAT22((short)((uint)n3 >> 0x10),*(short *)(n3 + 2));
      }
      return 0;
    }
  }
  return _eax & 0xffff0000;
}


/* FUN_00465c20 @ 0x00465c20 */

void __thiscall FUN_00465c20(GameWidget *this,int param_1)
{
  this->rect_top = 0;
  this->child_list_1 = param_1;
}


/* FUN_00465c40 @ 0x00465c40 */

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
}


/* FUN_00465c80 @ 0x00465c80 */

/* TODO: this is a resource/sprite object, offset 0x14 = secondary data pointer */
void __thiscall FUN_00465c80(void *this,int param_1)
{
  *(int *)((intptr_t)this + 0x14) = param_1; /* resource obj offset 0x14 */
  if (param_1 != 0) {
    FUN_00465c40(this,*(uint *)(param_1 + 10));
    return;
  }
  FUN_00465c40(this,0);
}


/* FUN_00465cb0 @ 0x00465cb0 */

void __thiscall FUN_00465cb0(MathProblem *this,int *param_1)
{
  char c1;
  int *pu2;
  ushort *pu3;
  short *ps4;
  
  ps4 = NULL;
  if (param_1 != NULL) {
    ps4 = (short *)*param_1;
  }
  FUN_00465c80(this,(int)ps4);
  if ((ps4 != NULL) && (c1 = (char)ps4[3], c1 != '\0')) {
    if (this->field_10 == NULL) {
      if ((ps4 == NULL) || (c1 == '\0')) {
        pu2 = NULL;
      }
      else {
        pu2 = (int *)((uint)(ushort)ps4[4] + *ps4 * 2 + 0xe + (int)ps4);
      }
      pu3 = FUN_0045c1c0(pu2,-1,-1,NULL);
      FUN_00465c40(this,(uint)pu3);
      *(char *)((intptr_t)this + 0x18) = 1; /* TODO: offset 0x18 on MathProblem, falls in _pad15 region */
    }
    else {
      if ((ps4 == NULL) || (c1 == '\0')) {
        pu2 = NULL;
      }
      else {
        pu2 = (int *)((uint)(ushort)ps4[4] + *ps4 * 2 + 0xe + (int)ps4);
      }
      pu3 = FUN_0045c1c0(pu2,-1,-1,this->field_10);
      FUN_00465c40(this,(uint)pu3);
    }
  }
  DAT_00483dc8 = this->field_14;
  if (DAT_00483dc8 != 0) {
    *(int *)(DAT_00483dc8 + 10) = this->field_10;
  }
  ((void (*)(void))this->vtable[0x80 / 4])(); /* vtable[32] */
  return;
}


/* FUN_00465de0 @ 0x00465de0 */

void ** __thiscall FUN_00465de0(void *this,short param_1,int *param_2)
{
    /* STUB: 60 lines not yet reconstructed */
    return 0;
}


/* FUN_00465ed0 @ 0x00465ed0 */

void __thiscall FUN_00465ed0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 14 lines not yet reconstructed */
    return;
}


/* FUN_00465fa0 @ 0x00465fa0 */

void __thiscall FUN_00465fa0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 14 lines not yet reconstructed */
    return;
}


/* FUN_00466000 @ 0x00466000 */

void __thiscall FUN_00466000(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 14 lines not yet reconstructed */
    return;
}


/* FUN_004661a5 @ 0x004661a5 */

void FUN_004661a5(void) { return; }


/* FUN_004661b7 @ 0x004661b7 */

void FUN_004661b7(void) { return; }


/* FUN_00466240 @ 0x00466240 */

void __thiscall FUN_00466240(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_004662c0 @ 0x004662c0 */

void __thiscall FUN_004662c0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_00466340 @ 0x00466340 */

void __thiscall FUN_00466340(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_004663c0 @ 0x004663c0 */

void __thiscall FUN_004663c0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_004664c0 @ 0x004664c0 */

void __thiscall FUN_004664c0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 43 lines not yet reconstructed */
    return;
}


/* FUN_004665b0 @ 0x004665b0 */

void __thiscall FUN_004665b0(void *this,short *param_1,int *param_2,short *param_3)
{
    /* STUB: 54 lines not yet reconstructed */
    return;
}


/* FUN_004666d0 @ 0x004666d0 */

void __thiscall FUN_004666d0(void *this,int param_1,int *param_2,short *param_3,char param_4)
{
    /* STUB: 61 lines not yet reconstructed */
    return;
}


/* FUN_00466820 @ 0x00466820 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

void FUN_00466820(void)
{
    /* STUB: 207 lines not yet reconstructed */
    return;
}


/* FUN_00466ca0 @ 0x00466ca0 */

void FUN_00466ca0(void)
{
    /* STUB: 355 lines not yet reconstructed */
    return;
}


/* FUN_00467290 @ 0x00467290 */

void FUN_00467290(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489bc0,u1,_arg1);
}


/* FUN_004672e0 @ 0x004672e0 */

void FUN_004672e0(void) { return; }


/* FUN_00467300 @ 0x00467300 */

/* NOTE: overlapping globals */

void FUN_00467300(void)
{
  _DAT_00489bce = 0;
  _DAT_00489bcc = 0;
}


/* FUN_00467310 @ 0x00467310 */

void FUN_00467310(void)
{
  _atexit(FUN_00467320);
}


/* FUN_00467320 @ 0x00467320 */

void FUN_00467320(void) { return; }


/* FUN_00467340 @ 0x00467340 */

/* NOTE: overlapping globals */

void FUN_00467340(void)
{
  _DAT_00489bca = 0;
  _DAT_00489bc8 = 0;
}


/* FUN_00467350 @ 0x00467350 */

void FUN_00467350(void)
{
  _atexit(FUN_00467360);
}


/* FUN_00467360 @ 0x00467360 */

void FUN_00467360(void) { return; }


/* FUN_00467370 @ 0x00467370 */

void FUN_00467370(void)
{
    /* STUB: 424 lines not yet reconstructed */
    return;
}


/* FUN_00467be0 @ 0x00467be0 */

void FUN_00467be0(void)
{
    /* STUB: 455 lines not yet reconstructed */
    return;
}


/* FUN_00468830 @ 0x00468830 */

void FUN_00468830(void)
{
    /* STUB: 203 lines not yet reconstructed */
    return;
}


/* FUN_00468c40 @ 0x00468c40 */

void FUN_00468c40(void)
{
    /* STUB: 357 lines not yet reconstructed */
    return;
}


/* FUN_00469210 @ 0x00469210 */

void FUN_00469210(void)
{
    /* STUB: 373 lines not yet reconstructed */
    return;
}


/* FUN_00469a00 @ 0x00469a00 */

void FUN_00469a00(void)
{
    /* STUB: 456 lines not yet reconstructed */
    return;
}


/* FUN_0046a630 @ 0x0046a630 */

void FUN_0046a630(byte *param_1,byte param_2,byte param_3,short *param_4)
{
  byte b1;
  byte b2;
  ushort u3;
  ushort u4;
  byte *pb5;
  
  do {
    b1 = *param_1;
    pb5 = param_1 + 1;
    switch(b1) {
    case 1:
    case 0x81:
      pb5 = param_1 + 2;
      if (*pb5 == param_2) {
        *pb5 = (byte)param_3;
      }
    case 0x21:
    case 0xa1:
      pb5 = pb5 + 1;
      break;
    case 9:
    case 0x89:
      pb5 = param_1 + 3;
      FUN_0046a630((byte *)((int)param_4 +
                           (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),param_2,
                   param_3,param_4);
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      b2 = *pb5;
      u4 = (ushort)b2;
      pb5 = param_1 + 2;
      if (7 < u4) {
        b2 = b2 >> 3;
        u3 = (ushort)b2;
        u4 = u4 + (ushort)b2 * -8;
        do {
          if (*pb5 == param_2) {
            *pb5 = (byte)param_3;
          }
          if (pb5[1] == param_2) {
            pb5[1] = (byte)param_3;
          }
          if (pb5[2] == param_2) {
            pb5[2] = (byte)param_3;
          }
          if (pb5[3] == param_2) {
            pb5[3] = (byte)param_3;
          }
          if (pb5[4] == param_2) {
            pb5[4] = (byte)param_3;
          }
          if (pb5[5] == param_2) {
            pb5[5] = (byte)param_3;
          }
          if (pb5[6] == param_2) {
            pb5[6] = (byte)param_3;
          }
          if (pb5[7] == param_2) {
            pb5[7] = (byte)param_3;
          }
          pb5 = pb5 + 8;
          u3 = u3 - 1;
        } while (u3 != 0);
      }
      if (u4 != 0) {
        switch((int)(short)u4) {
        case 7:
          if (pb5[6] == param_2) {
            pb5[6] = (byte)param_3;
          }
        case 6:
          if (pb5[5] == param_2) {
            pb5[5] = (byte)param_3;
          }
        case 5:
          if (pb5[4] == param_2) {
            pb5[4] = (byte)param_3;
          }
        case 4:
          if (pb5[3] == param_2) {
            pb5[3] = (byte)param_3;
          }
        case 3:
          if (pb5[2] == param_2) {
            pb5[2] = (byte)param_3;
          }
        case 2:
          if (pb5[1] == param_2) {
            pb5[1] = (byte)param_3;
          }
        case 1:
          if (*pb5 == param_2) {
            *pb5 = (byte)param_3;
          }
        default:
          pb5 = pb5 + (short)u4;
        }
      }
    }
    param_1 = pb5;
  } while ((b1 & 0x80) == 0);
}


/* FUN_0046a8b0 @ 0x0046a8b0 */

void FUN_0046a8b0(byte *param_1,int param_2,int param_3,short *param_4)
{
  byte b1;
  byte b2;
  char c3;
  char c4;
  ushort u5;
  byte *pb6;
  ushort u7;
  
  c3 = (char)param_2 - (char)param_3;
  c4 = (char)param_2 * '\x04' + '\x05';
  do {
    b1 = *param_1;
    pb6 = param_1 + 1;
    switch(b1) {
    case 1:
    case 0x81:
      pb6 = param_1 + 2;
      if ((byte)(c4 - param_1[2]) < 4) {
        *pb6 = param_1[2] + c3 * -4;
      }
    case 0x21:
    case 0xa1:
      pb6 = pb6 + 1;
      break;
    case 9:
    case 0x89:
      pb6 = param_1 + 3;
      FUN_0046a8b0((byte *)((int)param_4 +
                           (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),param_2,
                   param_3,param_4);
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      b2 = *pb6;
      u7 = (ushort)b2;
      pb6 = param_1 + 2;
      if (7 < b2) {
        u5 = (ushort)(b2 >> 3);
        u7 = (ushort)b2 + (ushort)(b2 >> 3) * -8;
        do {
          if ((byte)(c4 - *pb6) < 4) {
            *pb6 = *pb6 + c3 * -4;
          }
          if ((byte)(c4 - pb6[1]) < 4) {
            pb6[1] = pb6[1] + c3 * -4;
          }
          if ((byte)(c4 - pb6[2]) < 4) {
            pb6[2] = pb6[2] + c3 * -4;
          }
          if ((byte)(c4 - pb6[3]) < 4) {
            pb6[3] = pb6[3] + c3 * -4;
          }
          if ((byte)(c4 - pb6[4]) < 4) {
            pb6[4] = pb6[4] + c3 * -4;
          }
          if ((byte)(c4 - pb6[5]) < 4) {
            pb6[5] = pb6[5] + c3 * -4;
          }
          if ((byte)(c4 - pb6[6]) < 4) {
            pb6[6] = pb6[6] + c3 * -4;
          }
          if ((byte)(c4 - pb6[7]) < 4) {
            pb6[7] = pb6[7] + c3 * -4;
          }
          pb6 = pb6 + 8;
          u5 = u5 - 1;
        } while (u5 != 0);
      }
      if (u7 != 0) {
        switch((int)(short)u7) {
        case 7:
          if ((byte)(c4 - pb6[6]) < 4) {
            pb6[6] = pb6[6] + c3 * -4;
          }
        case 6:
          if ((byte)(c4 - pb6[5]) < 4) {
            pb6[5] = pb6[5] + c3 * -4;
          }
        case 5:
          if ((byte)(c4 - pb6[4]) < 4) {
            pb6[4] = pb6[4] + c3 * -4;
          }
        case 4:
          if ((byte)(c4 - pb6[3]) < 4) {
            pb6[3] = pb6[3] + c3 * -4;
          }
        case 3:
          if ((byte)(c4 - pb6[2]) < 4) {
            pb6[2] = pb6[2] + c3 * -4;
          }
        case 2:
          if ((byte)(c4 - pb6[1]) < 4) {
            pb6[1] = pb6[1] + c3 * -4;
          }
        case 1:
          if ((byte)(c4 - *pb6) < 4) {
            *pb6 = *pb6 + c3 * -4;
          }
        default:
          pb6 = pb6 + (short)u7;
        }
      }
    }
    param_1 = pb6;
  } while ((b1 & 0x80) == 0);
}


/* FUN_0046abe0 @ 0x0046abe0 */

void __thiscall FUN_0046abe0(MathProblem *this,byte param_1,byte param_2,int param_3)
{
  int n1;
  int n2;
  byte *pb3;
  short s4;
  
  n1 = this->_pad1a;
  if ((n1 != 0) &&
     ((this->field_14 == 0 || (*(char *)(this->field_14 + 6) == '\0')))) {
    if (param_3 == 0) {
      n2 = *(int *)(n1 + 8 + (short)(this->active_flag + -1) * 4);
      param_3 = n1 + n2;
      if (n2 == 0) {
        param_3 = 0;
      }
      if (param_3 == 0) {
        return;
      }
    }
    s4 = 0;
    if (0 < *(short *)(param_3 + 2)) {
      do {
        pb3 = (byte *)0x0;
        n1 = *(int *)(param_3 + 4 + s4 * 4);
        if (n1 != 0) {
          pb3 = (byte *)(this->_pad1a + n1);
        }
        if (pb3 != NULL) {
          FUN_0046a630(pb3,param_1,param_2,this->field_14);
        }
        s4 = s4 + 1;
      } while (s4 < *(short *)(param_3 + 2));
    }
  }
  return;
}


/* FUN_0046ac70 @ 0x0046ac70 */

void __thiscall FUN_0046ac70(MathProblem *this,byte param_1,int param_2,int param_3)
{
  int n1;
  int n2;
  byte *pb3;
  int _ebx;
  short s4;
  
  n1 = this->_pad1a;
  if ((n1 != 0) &&
     ((this->field_14 == 0 || (*(char *)(this->field_14 + 6) == '\0')))) {
    if (param_3 == 0) {
      n2 = *(int *)(n1 + 8 + (short)(this->active_flag + -1) * 4);
      param_3 = n1 + n2;
      if (n2 == 0) {
        param_3 = 0;
      }
      if (param_3 == 0) {
        return;
      }
    }
    s4 = 0;
    if (0 < *(short *)(param_3 + 2)) {
      do {
        pb3 = (byte *)0x0;
        n1 = *(int *)(param_3 + 4 + s4 * 4);
        if (n1 != 0) {
          pb3 = (byte *)(this->_pad1a + n1);
        }
        if (pb3 != NULL) {
          FUN_0046a8b0(pb3,CONCAT31((unsigned int)((uint)_ebx >> 8),param_1),param_2,
                       this->field_14);
        }
        s4 = s4 + 1;
      } while (s4 < *(short *)(param_3 + 2));
    }
  }
  return;
}


/* FUN_0046ad00 @ 0x0046ad00 */

void __thiscall FUN_0046ad00(void *this,byte param_1,int param_2)
{
    /* STUB: 22 lines not yet reconstructed */
    return;
}


/* FUN_0046ad60 @ 0x0046ad60 */

void __thiscall FUN_0046ad60(void *this,byte param_1,int param_2)
{
    /* STUB: 22 lines not yet reconstructed */
    return;
}


/* FUN_0046adc0 @ 0x0046adc0 */

void __thiscall FUN_0046adc0(MathProblem *this,short param_1,short param_2)
{
  short *ps1;
  ushort *pu2;
  int *pu3;
  
  ps1 = this->field_14;
  if ((ps1 == NULL) || ((char)ps1[3] == '\0')) {
    pu3 = NULL;
  }
  else {
    pu3 = (int *)((uint)(ushort)ps1[4] + *ps1 * 2 + 0xe + (int)ps1);
  }
  pu2 = FUN_0045c1c0(pu3,param_1,param_2,this->field_10);
  FUN_00465c40(this,(uint)pu2);
}


/* FUN_0046ae10 @ 0x0046ae10 */

void __cdecl FUN_0046ae10(short *param_1,char param_2)
{
  short s1;
  short s2;
  short s3;
  
  if (param_2 == '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  s3 = 0;
  s1 = *param_1;
  if (0 < s1) {
    do {
      s2 = param_1[s3 + 7];
      param_1[s3 + 7] = CONCAT11((char)s2,(char)((ushort)s2 >> 8));
      s3 = s3 + 1;
    } while (s3 < s1);
  }
  s1 = param_1[1];
  *(uint *)(param_1 + 1) =
       CONCAT22(CONCAT11((char)s1,(char)((ushort)s1 >> 8)),
                CONCAT11((char)param_1[2],(char)((ushort)param_1[2] >> 8)));
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}


/* FUN_0046aea0 @ 0x0046aea0 */

ushort * __cdecl FUN_0046aea0(void *param_1,uint param_2)
{
  int u1;
  ushort *pu2;
  
  pu2 = NULL;
  u1 = FUN_00460aa0(param_1,(char *)&param_2,0x6b6c6263);
  if ((char)u1 != '\0') {
    u1 = FUN_00462350(param_1,param_2);
    if ((char)u1 != '\0') {
      pu2 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
      if (pu2 != NULL) {
        FUN_0046ae10((short *)pu2,'\0');
        pu2[5] = 0;
        pu2[6] = 0;
      }
    }
  }
  return pu2;
}


/* FUN_0046af00 @ 0x0046af00 */

void __cdecl FUN_0046af00(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0046af10 @ 0x0046af10 */

void __cdecl FUN_0046af10(void *param_1,uint param_2,int param_3)
{
  if (param_3 != 0) {
    FUN_00460aa0(param_1,(char *)&param_2,0x6b6c6263);
    FUN_004615d0(param_1,param_2);
  }
  return;
}


/* FUN_0046af40 @ 0x0046af40 */

void __cdecl FUN_0046af40(int *param_1,char param_2)
{
  short *ps1;
  short u2;
  short *pu3;
  int n4;
  short s5;
  
  s5 = 0;
  do {
    pu3 = (short *)((int)param_1 + s5 * 2 + 8);
    u2 = *pu3;
    *pu3 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    s5 = s5 + 1;
  } while (s5 < 8);
  if (param_2 == '\0') {
    u2 = *(short *)(param_1 + 6);
    *(ushort *)(param_1 + 6) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  s5 = 0;
  ps1 = (short *)(param_1 + 6);
  if (0 < *ps1) {
    do {
      n4 = (int)s5;
      s5 = s5 + 1;
      FUN_0046b500((int)param_1 + n4 * 8 + 0x1a);
    } while (s5 < *ps1);
  }
  if ((short *)*param_1 != NULL) {
    FUN_0046ae10((short *)*param_1,param_2);
  }
  if (param_2 != '\0') {
    *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
  }
  return;
}


/* FUN_0046afe0 @ 0x0046afe0 */

ushort * __cdecl FUN_0046afe0(void *param_1,int param_2,char param_3)
{
    /* STUB: 42 lines not yet reconstructed */
    return 0;
}


/* FUN_0046b0c0 @ 0x0046b0c0 */

void __cdecl FUN_0046b0c0(void *param_1,int param_2,uint *param_3,char param_4)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0046b130 @ 0x0046b130 */

void __cdecl FUN_0046b130(int param_1,char param_2)
{
  short *ps1;
  short u2;
  short *pu3;
  short s4;
  short s5;
  short s6;
  
  if (param_2 == '\0') {
    u2 = *(short *)(param_1 + 0x24);
    *(short *)(param_1 + 0x24) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  ps1 = (short *)(param_1 + 0x24);
  s4 = *ps1;
  s5 = 0;
  if (0 < s4) {
    do {
      s6 = s5 + 1;
      if (DAT_00483ddc != '\0') {
        pu3 = (short *)(param_1 + s5 * 4 + 0x28);
        u2 = *pu3;
        *pu3 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      }
      s5 = s6;
    } while (s6 < s4);
  }
  if (param_2 != '\0') {
    *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    u2 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  u2 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xc);
  *(short *)(param_1 + 0xc) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xe);
  *(short *)(param_1 + 0xe) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0x12);
  *(short *)(param_1 + 0x12) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  s4 = 0;
  do {
    pu3 = (short *)(param_1 + s4 * 2 + 0x14);
    u2 = *pu3;
    *pu3 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    s4 = s4 + 1;
  } while (s4 < 8);
}


/* FUN_0046b290 @ 0x0046b290 */

void __cdecl FUN_0046b290(int param_1,char param_2)
{
  short *ps1;
  short u2;
  short s3;
  short *pu4;
  short s5;
  short s6;
  
  if (param_2 == '\0') {
    u2 = *(short *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x1c) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  ps1 = (short *)(param_1 + 0x1c);
  s3 = *ps1;
  s5 = 0;
  if (0 < s3) {
    do {
      s6 = s5 + 1;
      if (DAT_00483ddc != '\0') {
        pu4 = (short *)(param_1 + s5 * 4 + 0x20);
        u2 = *pu4;
        *pu4 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      }
      s5 = s6;
    } while (s6 < s3);
  }
  if (param_2 != '\0') {
    *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    u2 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  u2 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) =
       CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0xe),
                         (char)((ushort)*(short *)(param_1 + 0xe) >> 8)));
  u2 = *(short *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) =
       CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x12),
                         (char)((ushort)*(short *)(param_1 + 0x12) >> 8)));
  u2 = *(short *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) =
       CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x16),
                         (char)((ushort)*(short *)(param_1 + 0x16) >> 8)));
  u2 = *(short *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) =
       CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                CONCAT11((char)*(short *)(param_1 + 0x1a),
                         (char)((ushort)*(short *)(param_1 + 0x1a) >> 8)));
}


/* FUN_0046b3f0 @ 0x0046b3f0 */

void __cdecl FUN_0046b3f0(short *param_1,char param_2)
{
  int n1;
  short s2;
  
  if (param_2 == '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  s2 = 0;
  if (0 < *param_1) {
    do {
      n1 = (int)s2;
      s2 = s2 + 1;
      FUN_0046b550((int)(param_1 + n1 * 7 + 1));
    } while (s2 < *param_1);
  }
  if (param_2 != '\0') {
    *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  }
  return;
}


/* FUN_0046b460 @ 0x0046b460 */

ushort * __cdecl FUN_0046b460(void *param_1,int param_2)
{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  if (pu1 != NULL) {
    FUN_0046b3f0((short *)pu1,'\0');
  }
  return pu1;
}


/* FUN_0046b490 @ 0x0046b490 */

void __cdecl FUN_0046b490(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0046b4a0 @ 0x0046b4a0 */

ushort * __cdecl FUN_0046b4a0(void *param_1,uint param_2)
{
  ushort *pu1;
  
  pu1 = FUN_00461540(param_1,param_2);
  if (pu1 == NULL) {
    pu1 = FUN_0046b460(param_1,param_2);
    if (pu1 != NULL) {
      FUN_00461670(param_1,param_2,(int)pu1);
    }
  }
  return pu1;
}


/* FUN_0046b4e0 @ 0x0046b4e0 */

void __cdecl FUN_0046b4e0(void *param_1,uint param_2,int param_3)
{
  if (param_3 != 0) {
    FUN_004615d0(param_1,param_2);
  }
  return;
}


/* FUN_0046b500 @ 0x0046b500 */

void __cdecl FUN_0046b500(int param_1)
{
  short u1;
  
  if (DAT_00483ddc != '\0') {
    u1 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
    u1 = *(short *)(param_1 + 6);
    *(short *)(param_1 + 6) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  }
  return;
}


/* FUN_0046b550 @ 0x0046b550 */

void __cdecl FUN_0046b550(int param_1)
{
  short u1;
  
  if (DAT_00483ddc != '\0') {
    u1 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  }
  u1 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = *(short *)(param_1 + 10);
  *(short *)(param_1 + 10) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = *(short *)(param_1 + 0xc);
  *(short *)(param_1 + 0xc) = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
}


/* FUN_0046b5e0 @ 0x0046b5e0 */

ushort * __cdecl FUN_0046b5e0(void *param_1,int param_2)
{
    /* STUB: 11 lines not yet reconstructed */
    return 0;
}


/* FUN_0046b620 @ 0x0046b620 */

void __cdecl FUN_0046b620(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0046b630 @ 0x0046b630 */

ushort * __cdecl FUN_0046b630(void *param_1,uint param_2)
{
    /* STUB: 14 lines not yet reconstructed */
    return 0;
}


/* FUN_0046b680 @ 0x0046b680 */

void __cdecl FUN_0046b680(void *param_1,uint param_2,int param_3)
{
    /* STUB: 9 lines not yet reconstructed */
    return;
}


/* FUN_0046b6b0 @ 0x0046b6b0 */

void __cdecl FUN_0046b6b0(int param_1,short param_2,char param_3)
{
  short *ps1;
  short u2;
  int n3;
  short s4;
  short *pu5;
  
  if (DAT_00483ddc != '\0') {
    n3 = *(int *)(param_1 + 8 + param_2 * 4);
    pu5 = (short *)(param_1 + n3);
    if (n3 == 0) {
      pu5 = NULL;
    }
    if (pu5 != NULL) {
      if (param_3 == '\0') {
        *pu5 = CONCAT11((char)*pu5,(char)((ushort)*pu5 >> 8));
        u2 = pu5[1];
        pu5[1] = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      }
      s4 = 0;
      ps1 = pu5 + 1;
      if (0 < *ps1) {
        do {
          u2 = pu5[s4 * 2 + 2];
          *(uint *)(pu5 + s4 * 2 + 2) =
               CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                        CONCAT11((char)pu5[s4 * 2 + 3],
                                 (char)((ushort)pu5[s4 * 2 + 3] >> 8)));
          s4 = s4 + 1;
        } while (s4 < *ps1);
      }
      if (param_3 != '\0') {
        *pu5 = CONCAT11((char)*pu5,(char)((ushort)*pu5 >> 8));
        *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
      }
    }
  }
  return;
}


/* FUN_0046b770 @ 0x0046b770 */

void __cdecl FUN_0046b770(int *param_1,char param_2)
{
  int *pn1;
  short u2;
  short s3;
  short s4;
  
  if (DAT_00483ddc != '\0') {
    if (param_2 == '\0') {
      *param_1 = CONCAT22(CONCAT11((char)*(short *)param_1,
                                   (char)((ushort)*(short *)param_1 >> 8)),
                          CONCAT11((char)*(short *)((int)param_1 + 2),
                                   (char)((ushort)*(short *)((int)param_1 + 2) >> 8)));
      u2 = *(short *)(param_1 + 1);
      *(ushort *)(param_1 + 1) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      u2 = *(short *)((int)param_1 + 6);
      *(short *)((int)param_1 + 6) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    }
    s4 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      do {
        pn1 = param_1 + s4 + 2;
        *pn1 = CONCAT22(CONCAT11((char)(short)*pn1,(char)((ushort)(short)*pn1 >> 8)),
                           CONCAT11((char)*(short *)((int)pn1 + 2),
                                    (char)((ushort)*(short *)((int)pn1 + 2) >> 8)));
        s3 = 0;
        if (0 < s4) {
          do {
            if (param_1[s3 + 2] == *pn1) goto L_0046b85a;
            s3 = s3 + 1;
          } while (s3 < s4);
        }
        if (param_2 != '\0') {
          *pn1 = CONCAT22(CONCAT11((char)(short)*pn1,(char)((ushort)(short)*pn1 >> 8)),
                             CONCAT11((char)*(short *)((int)pn1 + 2),
                                      (char)((ushort)*(short *)((int)pn1 + 2) >> 8)));
        }
        FUN_0046b6b0((int)param_1,s4,param_2);
        if (param_2 != '\0') {
          *pn1 = CONCAT22(CONCAT11((char)(short)*pn1,(char)((ushort)(short)*pn1 >> 8)),
                             CONCAT11((char)*(short *)((int)pn1 + 2),
                                      (char)((ushort)*(short *)((int)pn1 + 2) >> 8)));
        }
L_0046b85a:
        s4 = s4 + 1;
      } while (s4 < *(short *)(param_1 + 1));
    }
    if (param_2 != '\0') {
      *param_1 = CONCAT22(CONCAT11((char)*(short *)param_1,
                                   (char)((ushort)*(short *)param_1 >> 8)),
                          CONCAT11((char)*(short *)((int)param_1 + 2),
                                   (char)((ushort)*(short *)((int)param_1 + 2) >> 8)));
      u2 = *(short *)(param_1 + 1);
      *(ushort *)(param_1 + 1) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      u2 = *(short *)((int)param_1 + 6);
      *(short *)((int)param_1 + 6) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    }
  }
  return;
}


/* FUN_0046b8b0 @ 0x0046b8b0 */

ushort * __cdecl FUN_0046b8b0(void *param_1,int param_2)
{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  if (pu1 != NULL) {
    FUN_0046b290((int)pu1,'\0');
  }
  return pu1;
}


/* FUN_0046b8e0 @ 0x0046b8e0 */

void __cdecl FUN_0046b8e0(int param_1,int param_2,uint param_3)
{
  if (param_3 != 0) {
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_0046b8f0 @ 0x0046b8f0 */

ushort * __cdecl FUN_0046b8f0(void *param_1,int param_2)
{
  ushort *pu1;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  if (pu1 != NULL) {
    FUN_0046b130((int)pu1,'\0');
  }
  return pu1;
}


/* FUN_0046b930 @ 0x0046b930 */

void FUN_0046b930(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489bd0,u1,_arg1);
}


/* FUN_0046b980 @ 0x0046b980 */

void FUN_0046b980(void) { return; }


/* FUN_0046b990 @ 0x0046b990 */

void __cdecl FUN_0046b990(int param_1,char param_2)
{
  short *ps1;
  int n2;
  short u3;
  short u4;
  short *pu5;
  int *pu6;
  short s7;
  short s8;
  
  if (DAT_00483ddc != '\0') {
    u3 = *(short *)(param_1 + 2);
    *(short *)(param_1 + 2) = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
  }
  if (DAT_00483ddc != '\0') {
    u3 = *(short *)(param_1 + 6);
    *(short *)(param_1 + 6) = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
    if (DAT_00483ddc != '\0') {
      u3 = *(short *)(param_1 + 10);
      *(short *)(param_1 + 10) = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
    }
  }
  s7 = 0;
  do {
    pu5 = (short *)(param_1 + s7 * 2 + 0xc);
    u3 = *pu5;
    *pu5 = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
    s7 = s7 + 1;
  } while (s7 < 6);
  s7 = 0;
  do {
    n2 = param_1 + s7 * 4;
    pu6 = (int *)(n2 + 0x18);
    u3 = *(short *)pu6;
    u4 = *(short *)(n2 + 0x1a);
    *pu6 = CONCAT22(CONCAT11((char)u3,(char)((ushort)u3 >> 8)),
                       CONCAT11((char)u4,(char)((ushort)u4 >> 8)));
    s7 = s7 + 1;
  } while (s7 < 4);
  if (param_2 == '\0') {
    u3 = *(short *)(param_1 + 0x28);
    *(short *)(param_1 + 0x28) = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
  }
  s8 = 0;
  ps1 = (short *)(param_1 + 0x28);
  s7 = *ps1;
  if (0 < s7) {
    do {
      if (DAT_00483ddc != '\0') {
        pu5 = (short *)(param_1 + s8 * 4 + 0x2c);
        u3 = *pu5;
        *pu5 = CONCAT11((char)u3,(char)((ushort)u3 >> 8));
      }
      s8 = s8 + 1;
    } while (s8 < s7);
  }
  if (param_2 != '\0') {
    *ps1 = CONCAT11((char)*ps1,(char)((ushort)*ps1 >> 8));
  }
  return;
}


/* FUN_0046bab0 @ 0x0046bab0 */

ushort * __cdecl FUN_0046bab0(void *param_1,uint param_2)
{
  int u1;
  ushort *pu2;
  
  pu2 = NULL;
  u1 = FUN_00462350(param_1,param_2);
  if ((char)u1 != '\0') {
    pu2 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
    if (pu2 != NULL) {
      FUN_0046b990((int)pu2,'\0');
    }
  }
  return pu2;
}


/* FUN_0046bb00 @ 0x0046bb00 */

/* NOTE: overlapping globals */

void FUN_0046bb00(void)
{
  _DAT_00489bde = 0;
  _DAT_00489bdc = 0;
}


/* FUN_0046bb10 @ 0x0046bb10 */

void FUN_0046bb10(void)
{
  _atexit(FUN_0046bb20);
}


/* FUN_0046bb20 @ 0x0046bb20 */

void FUN_0046bb20(void) { return; }


/* FUN_0046bb40 @ 0x0046bb40 */

/* NOTE: overlapping globals */

void FUN_0046bb40(void)
{
  _DAT_00489bda = 0;
  _DAT_00489bd8 = 0;
}


/* FUN_0046bb50 @ 0x0046bb50 */

void FUN_0046bb50(void)
{
  _atexit(FUN_0046bb60);
}


/* FUN_0046bb60 @ 0x0046bb60 */

void FUN_0046bb60(void) { return; }


/* FUN_0046bb70 @ 0x0046bb70 */

int __cdecl FUN_0046bb70(uint param_1,void *param_2,void *param_3)
{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_0046bc50 @ 0x0046bc50 */

uint __cdecl FUN_0046bc50(void *param_1,char *param_2)
{
    /* STUB: 121 lines not yet reconstructed */
    return 0;
}


/* FUN_0046bea3 @ 0x0046bea3 */

void FUN_0046bea3(void)
{
  int _ebp;
  
  FUN_00460010((int *)(_ebp + -0x58));
}


/* FUN_0046bec0 @ 0x0046bec0 */

void FUN_0046bec0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489be0,u1,_arg1);
}


/* FUN_0046bf10 @ 0x0046bf10 */

void FUN_0046bf10(void) { return; }


/* FUN_0046bf30 @ 0x0046bf30 */

/* NOTE: overlapping globals */

void FUN_0046bf30(void)
{
  _DAT_00489bee = 0;
  _DAT_00489bec = 0;
}


/* FUN_0046bf40 @ 0x0046bf40 */

void FUN_0046bf40(void)
{
  _atexit(FUN_0046bf50);
}


/* FUN_0046bf50 @ 0x0046bf50 */

void FUN_0046bf50(void) { return; }


/* FUN_0046bf70 @ 0x0046bf70 */

/* NOTE: overlapping globals */

void FUN_0046bf70(void)
{
  _DAT_00489bea = 0;
  _DAT_00489be8 = 0;
}


/* FUN_0046bf80 @ 0x0046bf80 */

void FUN_0046bf80(void)
{
  _atexit(FUN_0046bf90);
}


/* FUN_0046bf90 @ 0x0046bf90 */

void FUN_0046bf90(void) { return; }


/* FUN_0046bfb0 @ 0x0046bfb0 */

void FUN_0046bfb0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489bf0,u1,_arg1);
}


/* FUN_0046bff0 @ 0x0046bff0 */

void FUN_0046bff0(void)
{
  _atexit(FUN_0046c000);
}


/* FUN_0046c000 @ 0x0046c000 */

void FUN_0046c000(void) { return; }


/* FUN_0046c020 @ 0x0046c020 */

/* NOTE: overlapping globals */

void FUN_0046c020(void)
{
  _DAT_00489bfe = 0;
  _DAT_00489bfc = 0;
}


/* FUN_0046c030 @ 0x0046c030 */

void FUN_0046c030(void)
{
  _atexit(FUN_0046c040);
}


/* FUN_0046c040 @ 0x0046c040 */

void FUN_0046c040(void) { return; }


/* FUN_0046c060 @ 0x0046c060 */

/* NOTE: overlapping globals */

void FUN_0046c060(void)
{
  _DAT_00489bfa = 0;
  _DAT_00489bf8 = 0;
}


/* FUN_0046c070 @ 0x0046c070 */

void FUN_0046c070(void)
{
  _atexit(FUN_0046c080);
}


/* FUN_0046c080 @ 0x0046c080 */

void FUN_0046c080(void) { return; }


/* FUN_0046c090 @ 0x0046c090 */

ushort * __cdecl FUN_0046c090(int param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return 0;
}


/* FUN_0046c1e0 @ 0x0046c1e0 */

void __cdecl FUN_0046c1e0(uint param_1)
{
  if (param_1 != 0) {
    FUN_0046f5f0(param_1);
  }
  return;
}


/* FUN_0046c370 @ 0x0046c370 */

ushort * __cdecl FUN_0046c370(uint param_1,uint param_2,LPCVOID param_3)
{
    /* STUB: 38 lines not yet reconstructed */
    return 0;
}


/* FUN_0046c3f0 @ 0x0046c3f0 */

void __cdecl FUN_0046c3f0(uint param_1)
{
  FUN_0046c370(param_1,0,NULL);
}


/* FUN_0046c410 @ 0x0046c410 */

void __cdecl FUN_0046c410(uint param_1)
{
  if (param_1 != 0) {
    FUN_0046f5f0(param_1);
  }
  return;
}


/* FUN_0046c470 @ 0x0046c470 */

void ** __fastcall FUN_0046c470(int param_1)
{
  int *pu1;
  uint u2;
  
  do {
    pu1 = *(int **)&((SmartHeapPool *)param_1)->_pad16[2]; /* free_list at 0x18 */
    if (pu1 != NULL) {
      *(int *)&((SmartHeapPool *)param_1)->_pad16[2] = *pu1; /* free_list at 0x18 */
      return pu1;
    }
    u2 = FUN_0046c530(param_1,0);
  } while ((short)u2 != 0);
  return NULL;
}


/* FUN_0046c530 @ 0x0046c530 */

uint __fastcall FUN_0046c530(int param_1,ushort param_2)
{
  ushort u1;
  uint u2;
  uint u3;
  int n4;
  int *pu5;
  int *pu6;
  int *pu7;
  int *pu8;
  
  u3 = (uint)param_2;
  pu5 = (int *)((SmartHeapPool *)param_1)->data_start;
  if (param_2 == 0) {
    if (pu5 != NULL) {
      u2 = FUN_00471410(pu5);
      if (u2 < 0xffff) {
        u3 = 0x4000;
        if (u2 < 0x4000) {
          u3 = u2 & 0xffff;
        }
        u3 = u3 + u2;
        if (0xfffe < u3) {
          u3 = 0xffff;
        }
        n4 = FUN_00471330(pu5,u3 & 0xffff,(uint)(((SmartHeapPool *)param_1)->pool_flags | 0x1000));
        if (n4 != 0) {
          pu7 = (int *)((int)pu5 + (u2 - 0xc & 0xfffffff8) + 0xc);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - u2; /* TODO: _pad2c or current_size at 0x2c */
          goto L_0046c617;
        }
      }
    }
    if ((short)u3 != 0) goto L_0046c5b7;
    u3 = 0x1000;
  }
  else {
L_0046c5b7:
    if ((ushort)u3 < 0x1001) {
      u3 = 0x1000;
    }
  }
  while( true ) {
    pu5 = FUN_00471190(u3 & 0xffff,(uint)(((SmartHeapPool *)param_1)->pool_flags | 0x1000));
    if (pu5 != NULL) break;
    u3 = u3 >> 1 & 0x7fff;
    if ((ushort)u3 < 0xc) {
      u3 = (uint)(ushort)((ushort)u3 * 2);
      n4 = FUN_0046fd70(param_1,2);
      if (n4 == 0) {
        return (uint)(*(int *)&((SmartHeapPool *)param_1)->_pad16[2] != 0); /* free_list at 0x18 */
      }
    }
  }
  pu7 = pu5 + 1;
  *pu5 = (int)((SmartHeapPool *)param_1)->data_start;
  ((SmartHeapPool *)param_1)->data_start = pu5;
L_0046c617:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + ((u3 & 0xffff) + 0xfff & 0xfffff000); /* TODO: _pad2c or current_size at 0x2c */
  u3 = FUN_00471410(pu5);
  u1 = (short)(u3 - 0xc >> 3) + 1;
  pu6 = *(int **)&((SmartHeapPool *)param_1)->_pad16[2]; /* free_list at 0x18 */
  do {
    pu8 = pu7;
    *pu8 = pu6;
    pu6 = pu8;
    pu7 = pu8 + 2;
  } while (pu8 < pu5 + (uint)u1 * 2 + -1);
  *(int **)&((SmartHeapPool *)param_1)->_pad16[2] = pu8; /* free_list at 0x18 */
  return CONCAT22((ushort)(u3 - 0xc >> 0x13),u1);
}


/* FUN_0046c660 @ 0x0046c660 */

void __fastcall FUN_0046c660(int param_1,int *param_2)
{
  *param_2 = *(int *)&((SmartHeapPool *)param_1)->_pad16[2]; /* free_list at 0x18 */
  *(int **)&((SmartHeapPool *)param_1)->_pad16[2] = param_2; /* free_list at 0x18 */
}


/* FUN_0046c790 @ 0x0046c790 */

uint __fastcall FUN_0046c790(int *param_1,ushort param_2)
{
    /* STUB: 131 lines not yet reconstructed */
    return 0;
}


/* FUN_0046ca30 @ 0x0046ca30 */

uint __fastcall FUN_0046ca30(int param_1,ushort param_2,ushort *param_3)
{
    /* STUB: 40 lines not yet reconstructed */
    return 0;
}


/* FUN_0046cb10 @ 0x0046cb10 */

void __fastcall FUN_0046cb10(int param_1)
{
  ushort u1;
  ushort *pu2;
  
  u1 = 0;
  pu2 = (ushort *)((SmartHeapPool *)param_1)->end_ptr;
  do {
    if (u1 < (*pu2 & 0xfffc)) {
      ((SmartHeapPool *)param_1)->slab_head = pu2;
      u1 = *pu2 & 0xfffc;
    }
    pu2 = *(ushort **)(pu2 + 1);
  } while ((ushort *)((SmartHeapPool *)param_1)->end_ptr != pu2);
}


/* FUN_0046cb40 @ 0x0046cb40
 * NOTE: SmartHeap internal allocator function. All pointer arithmetic
 * refers to SmartHeap pool descriptor fields, NOT game structs.
 */

ushort * __fastcall FUN_0046cb40(ushort *param_1)
{
  ushort u1;
  int n2;
  uint _Size;
  ushort *pu3;
  ushort *_Dst;
  ushort *pu4;
  
  pu3 = param_1;
  do {
    pu3 = (ushort *)((int)pu3 + (*pu3 & 0x7ffc));
    if ((*pu3 & 1) == 0) {
      u1 = param_1[-1];
      _Dst = (ushort *)((int)param_1 - (uint)u1);
      _Size = (int)pu3 - (int)param_1 & 0xffff;
      *(int *)(*(int *)(_Dst + 3) + 2) = *(int *)(_Dst + 1);
      *(int *)(*(int *)(_Dst + 1) + 6) = *(int *)(_Dst + 3);
      memmove(_Dst,param_1,_Size);
      *(byte *)_Dst = (byte)*_Dst | 2;
      pu4 = (ushort *)((int)_Dst + _Size);
      n2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
      if (n2 != 0) {
        DAT_00484044 = DAT_00484044 + 1;
        if ((*pu3 & 1) == 0) {
          u1 = u1 + (*pu3 & 0xfffc);
          *pu4 = u1 | 2;
          *(int *)(*(int *)(pu3 + 3) + 2) = *(int *)(pu3 + 1);
          *(int *)(*(int *)(pu3 + 1) + 6) = *(int *)(pu3 + 3);
        }
        else {
          *pu4 = u1 | 2;
        }
        n2 = (int)((SmartHeapPool *)((uint)_Dst & 0xffff0000))->end_ptr;
        *(int *)(pu4 + 3) = n2;
        *(int *)(pu4 + 1) = *(int *)(n2 + 2);
        *(ushort **)(*(int *)(n2 + 2) + 6) = pu4;
        *(ushort **)(n2 + 2) = pu4;
        *(ushort *)((u1 - 2) + (int)pu4) = u1;
        do {
          **(int **)((int)_Dst + ((*_Dst & 0x7ffc) - 6)) = (int)(_Dst + 1); /* TODO: SmartHeap block linkage */
          _Dst = (ushort *)((int)_Dst + (*_Dst & 0x7ffc));
        } while (_Dst < pu4);
        DAT_00484044 = DAT_00484044 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
        return pu4;
      }
      return NULL;
    }
    u1 = *pu3 & 0x7ffc;
  } while ((u1 != 0) && ((*(uint *)(*(int *)((u1 - 6) + (int)pu3) + 4) & 0xff0000) == 0)); /* TODO: SmartHeap block ref-count check */
  return pu3;
}


/* FUN_0046cc80 @ 0x0046cc80
 * NOTE: param_1 is a heap descriptor object (SmartHeap), NOT a game struct.
 * Offsets like 0x20, 0x22, 0x24, 0x28, 0x2a, 0x2c, 0x34, 0x48, 0x60, 0x164
 * are fields of the heap memory pool descriptor, not UIElement/GameBoard/etc.
 */

void __fastcall FUN_0046cc80(LPCVOID param_1,uint param_2,uint param_3)
{
  if (param_3 <= ((SmartHeapPool *)param_1)->max_small_block) {
    FUN_0046f290(param_1,param_2,(short)param_3);
    return;
  }
  FUN_0046eb60(param_1,param_2,param_3);
}


/* FUN_0046ccb0 @ 0x0046ccb0 */

uint * FUN_0046ccb0(LPCVOID param_1,uint param_2,int param_3)
{
    /* STUB: 47 lines not yet reconstructed */
    return 0;
}


/* FUN_0046cdc0 @ 0x0046cdc0 */

uint * FUN_0046cdc0(uint *param_1,int param_2,uint param_3)
{
    /* STUB: 152 lines not yet reconstructed */
    return 0;
}


/* FUN_0046d110 @ 0x0046d110 */

int FUN_0046d110(uint *param_1)
{
    /* STUB: 53 lines not yet reconstructed */
    return 0;
}


/* FUN_0046d4d0 @ 0x0046d4d0
 * NOTE: SmartHeap lock/ref-count function. pn4 is a SmartHeap page descriptor.
 * Offsets 0x0e, 0x15 are page descriptor fields; v4 is a pool descriptor
 * with fields 0x22, 0x48, 0x60. NOT game structs.
 */

uint FUN_0046d4d0(uint *param_1)
{
  uint u1;
  ushort u2;
  int n3;
  int *pn4;
  uint u5;
  bool b6;
  int v4;
  
  n3 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
  if (n3 == 0) {
    return 0;
  }
  u5 = *param_1;
  pn4 = (int *)(u5 & 0xffff0000);
  if ((((SmartHeapPool *)pn4)->page_tag & 0xfff8) == 0xcad0) {
    if (((byte)((SmartHeapPool *)pn4)->page_tag & 7) == 3) {
      b6 = pn4[4] != 0;
    }
    else {
      b6 = (*(ushort *)(u5 - 2) & 0x8001) == 0x8001;
    }
    if (!b6) goto L_0046d53f;
    b6 = true;
  }
  else {
L_0046d53f:
    pn4 = NULL;
    b6 = false;
  }
  if (b6) {
    v4 = *pn4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
  if (pn4 == NULL) {
    FUN_0046fd70(0,0xd);
    return 0;
  }
  if ((((SmartHeapPool *)v4)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)v4)->critical_section);
    ((SmartHeapPool *)v4)->lock_count = ((SmartHeapPool *)v4)->lock_count + 1;
  }
  u2 = ((SmartHeapPool *)pn4)->page_tag & 7;
  if ((u2 != 0) && ((u2 != 3 || (((SmartHeapPool *)pn4)->page_flags != '\0')))) {
    u1 = param_1[1];
    if ((u1 & 0xff0000) < 0xff0000) {
      param_1[1] = (u1 + 0x10000 ^ u1) & 0xff0000 ^ u1;
      if (((u1 & 0xff0000) == 0) && (((byte)((SmartHeapPool *)pn4)->page_tag & 7) != 3)) {
        *(short *)(pn4[1] + 2) = *(short *)(pn4[1] + 2) + 1;
      }
      goto L_0046d5f9;
    }
  }
  u5 = 0;
  FUN_0046fd70(v4,6);
L_0046d5f9:
  if ((((SmartHeapPool *)v4)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)v4)->lock_count = ((SmartHeapPool *)v4)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)v4)->critical_section);
  }
  return u5;
}


/* FUN_0046dcf0 @ 0x0046dcf0 */

int FUN_0046dcf0(uint *param_1)
{
  uint u1;
  int n2;
  uint u3;
  bool b4;
  
  n2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c40,(int *)&DAT_00484038);
  if (n2 == 0) {
    return -1;
  }
  DAT_00484044 = DAT_00484044 + 1;
  u1 = *param_1;
  u3 = u1 & 0xffff0000;
  if ((((SmartHeapPool *)u3)->page_tag & 0xfff8) == 0xcad0) {
    if (((byte)((SmartHeapPool *)u3)->page_tag & 7) == 3) {
      b4 = ((SmartHeapPool *)u3)->slab_head != 0;
    }
    else {
      b4 = (*(ushort *)(u1 - 2) & 0x8001) == 0x8001;
    }
    if (b4) {
      b4 = true;
      goto L_0046dd66;
    }
  }
  b4 = false;
  u3 = 0;
L_0046dd66:
  n2 = 0;
  if (b4) {
    n2 = FUN_0046fcc0(u1);
    param_1[1] = param_1[1] & 0xffff0000;
  }
  DAT_00484044 = DAT_00484044 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c40);
  if (u3 == 0) {
    FUN_0046fd70(0,0xd);
    return -1;
  }
  return n2;
}


/* FUN_0046ddc0 @ 0x0046ddc0 */

void FUN_0046ddc0(uint param_1)
{
  FUN_0046de00(0x10,0,0,param_1);
}


/* FUN_0046de00 @ 0x0046de00 */

/* NOTE: Removing unreachable block (ram,0x0046de17) */

int * __fastcall FUN_0046de00(ushort param_1,int param_2,int param_3,uint param_4)
{
    /* STUB: 62 lines not yet reconstructed */
    return 0;
}


/* FUN_0046df90 @ 0x0046df90 */

short FUN_0046df90(int param_1,uint param_2)
{
  uint u1;
  short u2;
  
  if (((SmartHeapPool *)param_1)->pool_signature != -0x4153) {
    FUN_0046fd70(0,10);
    return 0;
  }
  u1 = FUN_0046e010(param_2);
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
  }
  u2 = 0;
  if (((SmartHeapPool *)param_1)->alloc_unit + 0x1cU <= u1) {
    u2 = ((SmartHeapPool *)param_1)->min_block;
    ((SmartHeapPool *)param_1)->min_block = (short)u1;
    ((SmartHeapPool *)param_1)->max_small_block = (short)(u1 >> 2);
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  return u2;
}


/* FUN_0046e010 @ 0x0046e010 */

uint __fastcall FUN_0046e010(uint param_1)
{
  uint u1;
  
  if (param_1 == 0x4000) {
    return 0x4000;
  }
  if (0xfffe < param_1) {
    return 0xffff;
  }
  u1 = 0x1000;
  if (param_1 < 0x1001) {
    return u1;
  }
  do {
    u1 = u1 * 2;
    if ((short)u1 == 0) {
      return 0xffff;
    }
  } while (u1 < param_1);
  if (0xfffe < u1) {
    u1 = 0xffff;
  }
  return u1;
}


/* FUN_0046e060 @ 0x0046e060 */

int FUN_0046e060(int param_1,ushort param_2)
{
  uint u1;
  int u2;
  
  if (param_2 == 0) {
    u1 = 0;
  }
  else {
    u1 = (uint)(param_2 + 3 & 0xfffc);
  }
  if (((SmartHeapPool *)param_1)->pool_signature != -0x4153) {
    FUN_0046fd70(0,10);
    return 0;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
  }
  if ((u1 < param_2) || ((ushort)(((SmartHeapPool *)param_1)->min_block - 0x1c) < u1)) {
    FUN_0046fd70(param_1,3);
  }
  else if (*(int *)(param_1 + 4) == 0) {
    ((SmartHeapPool *)param_1)->alloc_unit = u1;
    u2 = 1;
    goto L_0046e0e6;
  }
  u2 = 0;
L_0046e0e6:
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  return u2;
}


/* FUN_0046e210 @ 0x0046e210
 * NOTE: SmartHeap pool destroy entry point. param_1 is a SmartHeap pool descriptor.
 * Offset 0x20 = pool signature (0xBEAD = -0x4153). NOT a game struct.
 */

int FUN_0046e210(LPCVOID param_1)
{
  int u1;
  
  if (((SmartHeapPool *)param_1)->pool_signature != -0x4153) {
    FUN_0046fd70(0,10);
    return 0;
  }
  u1 = FUN_0046e240(param_1);
  return u1;
}


/* FUN_0046e240 @ 0x0046e240
 * NOTE: SmartHeap pool destroy implementation. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x14, 0x1c, 0x20, 0x22, 0x48, 0x60, 0x164 are pool descriptor fields.
 * NOT a game struct.
 */

/* NOTE: overlapping globals */

int __fastcall FUN_0046e240(LPCVOID param_1)
{
  int *pn1;
  int *pu2;
  int *pu3;
  int n4;
  ushort u5;
  uint u6;
  
  n4 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489ca0,(int *)&DAT_0048403c);
  if (n4 == 0) {
    return 0;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
  }
  _DAT_00483df0 = param_1;
  n4 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (n4 == 0) {
    return 0;
  }
  u6 = 0;
  FUN_00471900((int)param_1);
  ((SmartHeapPool *)param_1)->pool_signature = 0;
  do {
    pn1 = (int *)((int)param_1 + u6 * 4);
    n4 = *pn1;
    if (n4 != 0) {
      do {
        ((SmartHeapPool *)*(int *)(n4 + 4))->page_tag = 0;
        FUN_00471220(*(LPCVOID *)(n4 + 4));
        n4 = *(int *)(n4 + 8);
      } while (*pn1 != n4);
    }
    u5 = (short)u6 + 1;
    u6 = (uint)u5;
  } while (u5 < 5);
  pu3 = (int *)((SmartHeapPool *)param_1)->overflow_chain;
  while (pu3 != NULL) {
    pu2 = (int *)*pu3;
    FUN_00471220(pu3);
    pu3 = pu2;
  }
  pu3 = (int *)((SmartHeapPool *)param_1)->data_start;
  while (pu3 != NULL) {
    pu2 = (int *)*pu3;
    FUN_00471220(pu3);
    pu3 = pu2;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  _DAT_00483df0 = NULL;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  FUN_00471220(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489ca0);
  return 1;
}


/* FUN_0046e3f0 @ 0x0046e3f0 */

/* NOTE: overlapping globals */

int FUN_0046e3f0(void)
{
    /* STUB: 21 lines not yet reconstructed */
    return 0;
}


/* FUN_0046e4a0 @ 0x0046e4a0 */

int FUN_0046e4a0(int param_1)
{
  int n1;
  
  if (((SmartHeapPool *)param_1)->pool_signature != -0x4153) {
    FUN_0046fd70(0,10);
    return -1;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
  }
  n1 = FUN_0046e500(param_1);
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  return n1;
}


/* FUN_0046e500 @ 0x0046e500 */

int __fastcall FUN_0046e500(int param_1)
{
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;
  short s6;
  uint u7;
  
  n1 = ((SmartHeapPool *)param_1)->current_size;
  u7 = 0;
  do {
    n5 = *(int *)(param_1 + u7 * 4);
    s6 = (short)u7;
    if (((n5 != 0) && (s6 != 3)) && (s6 != 4)) {
      n4 = 0;
      do {
        n3 = *(int *)(n5 + 8);
        if ((short)(*(int **)(n5 + 4))[3] == 0) {
          n2 = FUN_0046eac0(*(int **)(n5 + 4),1);
          if (n2 == 0) goto L_0046e57a;
          if (n3 == n5) {
            n3 = 0;
          }
        }
        else if (n4 == 0) {
          n4 = n5;
        }
        n5 = n3;
      } while (n4 != n3);
    }
    u7 = (uint)(ushort)(s6 + 1U);
  } while ((ushort)(s6 + 1U) < 5);
  if (*(void (**)(void))((SmartHeapPool *)param_1)->_pad38 != NULL) { /* TODO: callback in _pad38 */
    ((void (*)(void))**(void ***)((SmartHeapPool *)param_1)->_pad38)();
  }
L_0046e57a:
  return n1 - ((SmartHeapPool *)param_1)->current_size;
}


/* FUN_0046e590 @ 0x0046e590
 * NOTE: SmartHeap pool allocation function. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x20, 0x22, 0x24, 0x28, 0x48, 0x60 are pool descriptor fields. NOT a game struct.
 */

/* NOTE: overlapping globals */

uint FUN_0046e590(LPCVOID param_1,uint param_2,int param_3)
{
  int *pn1;
  int n2;
  int *pn3;
  uint u4;
  short v6;
  
  u4 = 0;
  if (((SmartHeapPool *)param_1)->pool_signature != -0x4153) {
    FUN_0046fd70(0,10);
    return 0xffffffff;
  }
  _DAT_00483de0 = 1;
  if (param_3 == 1) {
    v6 = 1;
    if (((SmartHeapPool *)param_1)->alloc_unit == 0) {
      FUN_0046fd70(param_1,4);
      return 0xffffffff;
    }
  }
  else if (param_3 == 2) {
    v6 = 2;
  }
  else {
    if (param_3 != 4) {
      return 0xffffffff;
    }
    v6 = 0;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
  }
  pn1 = (int *)((int)param_1 + (uint)v6 * 4);
  n2 = *pn1;
  if (param_2 != 0) {
    do {
      pn3 = FUN_0046e980(param_1,v6,(uint)((SmartHeapPool *)param_1)->min_block,0);
      if (pn3 == NULL) break;
      u4 = u4 + ((SmartHeapPool *)param_1)->min_block;
    } while (u4 < param_2);
  }
  if (n2 != 0) {
    *pn1 = n2;
  }
  if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
  }
  return u4;
}


/* FUN_0046e6b0 @ 0x0046e6b0
 * NOTE: SmartHeap pool grow function. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x14, 0x16c, 0x2c, 0x22, 0x164 are pool descriptor fields. NOT a game struct.
 */

bool __fastcall FUN_0046e6b0(LPCVOID param_1)
{
  ushort u1;
  uint u2;
  int n3;
  int *pu4;
  int *pu5;
  int *pu6;
  uint v8;
  int *v4;
  
  pu5 = NULL;
  pu4 = NULL;
  v4 = NULL;
  v8 = 0;
  if (((SmartHeapPool *)param_1)->pool_field == 0) {
    u2 = 0x1000;
    pu5 = (int *)((int)param_1 + 0x168); /* TODO: SmartHeapPool _pad168 region */
    ((SmartHeapPool *)param_1)->current_size = ((SmartHeapPool *)param_1)->current_size + -0x1000;
  }
  else {
    v8 = FUN_00471410(param_1);
    if (v8 < 0xffff) {
      u2 = 0x4000;
      if (v8 < 0x4000) {
        u2 = v8 & 0xffff;
      }
      u2 = u2 + v8;
      if (0xfffe < u2) {
        u2 = 0xffff;
      }
      n3 = FUN_00471330(param_1,u2,(uint)(((SmartHeapPool *)param_1)->pool_flags | 0x1000));
      if (n3 != 0) {
        pu5 = (int *)((v8 - 0x178 & 0xfffffff0) + 0x178 + (int)param_1);
        ((SmartHeapPool *)param_1)->current_size = ((SmartHeapPool *)param_1)->current_size - v8;
      }
    }
    else {
      u2 = 0;
    }
  }
  if (pu5 == NULL) {
    pu4 = (int *)((SmartHeapPool *)param_1)->overflow_chain;
    if (pu4 != NULL) {
      v8 = FUN_00471410(pu4);
      if (v8 < 0xffff) {
        u2 = 0x4000;
        if (v8 < 0x4000) {
          u2 = v8 & 0xffff;
        }
        u2 = v8 + u2;
        n3 = FUN_00471330(pu4,u2,(uint)(((SmartHeapPool *)param_1)->pool_flags | 0x1000));
        if (n3 != 0) {
          pu5 = (int *)((v8 - 0x14 & 0xfffffff0) + 0x14 + (int)pu4);
          goto L_0046e844;
        }
      }
    }
    v8 = 0;
    u2 = 0x1000;
    while( true ) {
      pu4 = FUN_00471190(u2,(uint)(((SmartHeapPool *)param_1)->pool_flags | 0x1000));
      if (pu4 != NULL) break;
      u2 = u2 >> 1;
      if (u2 < 0x14) {
        u2 = u2 * 2;
        n3 = FUN_0046fd70(param_1,2);
        if (n3 == 0) {
          return (bool)('\x01' - (((SmartHeapPool *)param_1)->end_ptr == 0));
        }
      }
    }
    pu5 = pu4 + 1;
    *pu4 = (int)((SmartHeapPool *)param_1)->overflow_chain;
    ((SmartHeapPool *)param_1)->overflow_chain = pu4;
  }
  else {
    u2 = u2 + 0xfff & 0xfffff000;
    v4 = (int *)((u2 - 0x18) + (int)param_1);
  }
L_0046e844:
  if (v4 == NULL) {
    u2 = u2 + 0xfff & 0xfffff000;
    ((SmartHeapPool *)param_1)->current_size = ((SmartHeapPool *)param_1)->current_size - v8;
    v4 = (int *)((u2 - 0x1c) + (int)pu4);
  }
  ((SmartHeapPool *)param_1)->current_size = ((SmartHeapPool *)param_1)->current_size + u2;
  pu4 = (int *)((SmartHeapPool *)param_1)->end_ptr;
  do {
    pu6 = pu5;
    pu6[2] = pu4;
    u1 = *(ushort *)((int)pu6 + 2) & 0x8fff; /* TODO: SmartHeap block flags */
    *(ushort *)((int)pu6 + 2) = u1; /* TODO: SmartHeap block flags */
    *(ushort *)((int)pu6 + 2) = u1 | 0x5000; /* TODO: SmartHeap block flags */
    pu4 = pu6;
    pu5 = pu6 + 4;
  } while (pu6 < v4);
  ((SmartHeapPool *)param_1)->end_ptr = pu6;
  return true;
}


/* FUN_0046e8b0 @ 0x0046e8b0
 * NOTE: SmartHeap pool free-list pop. param_1 is a SmartHeap pool descriptor.
 * Offset 0x14 = free_list head. NOT a game struct.
 */

int __fastcall FUN_0046e8b0(LPCVOID param_1,ushort param_2)
{
  int *pn1;
  int n2;
  int n3;
  bool b4;
  int _extra;
  ushort u5;
  
  if (((SmartHeapPool *)param_1)->end_ptr == 0) {
    b4 = FUN_0046e6b0(param_1);
    if (CONCAT31(_extra,b4) == 0) {
      return 0;
    }
  }
  n2 = (int)((SmartHeapPool *)param_1)->end_ptr;
  ((SmartHeapPool *)param_1)->end_ptr = (void *)*(int *)(n2 + 8);
  pn1 = (int *)((int)param_1 + (uint)param_2 * 4);
  n3 = *pn1;
  if (n3 == 0) {
    *(int *)(n2 + 0xc) = n2;
    *(int *)(n2 + 8) = n2;
  }
  else {
    *(int *)(n2 + 0xc) = n3;
    *(int *)(n2 + 8) = *(int *)(n3 + 8);
    *(int *)(*(int *)(n3 + 8) + 0xc) = n2;
    *(int *)(n3 + 8) = n2;
  }
  *pn1 = n2;
  u5 = *(ushort *)(n2 + 2) & 0x8fff;
  *(ushort *)(n2 + 2) = u5;
  *(ushort *)(n2 + 2) = param_2 << 0xc | u5;
  return n2;
}


/* FUN_0046e920 @ 0x0046e920 */

void __fastcall FUN_0046e920(int param_1,int param_2,uint param_3)
{
  int *pn1;
  ushort u2;
  
  if (param_2 == *(int *)(param_2 + 8)) {
    *(int *)(param_1 + (param_3 & 0xffff) * 4) = 0;
  }
  else {
    *(int *)(*(int *)(param_2 + 0xc) + 8) = *(int *)(param_2 + 8);
    *(int *)(*(int *)(param_2 + 8) + 0xc) = *(int *)(param_2 + 0xc);
    pn1 = (int *)(param_1 + (param_3 & 0xffff) * 4);
    if (*pn1 == param_2) {
      *pn1 = *(int *)(param_2 + 8);
    }
  }
  u2 = *(ushort *)(param_2 + 2) & 0x8fff;
  *(ushort *)(param_2 + 2) = u2;
  *(ushort *)(param_2 + 2) = u2 | 0x5000;
  *(int *)(param_2 + 8) = (int)((SmartHeapPool *)param_1)->end_ptr;
  ((SmartHeapPool *)param_1)->end_ptr = (void *)param_2;
}


/* FUN_0046e980 @ 0x0046e980 */

int * __fastcall FUN_0046e980(LPCVOID param_1,ushort param_2,uint param_3,uint param_4)
{
    /* STUB: 54 lines not yet reconstructed */
    return 0;
}


/* FUN_0046eac0 @ 0x0046eac0
 * NOTE: SmartHeap block release. param_1 is a SmartHeap page/block descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

int __fastcall FUN_0046eac0(int *param_1,int param_2)
{
  short u1;
  int n2;
  int n3;
  bool b4;
  uint u5;
  int _esi;
  
  u1 = ((SmartHeapPool *)param_1)->page_tag;
  n2 = *param_1;
  n3 = param_1[1];
  u5 = FUN_00471410(param_1);
  if ((param_2 == 0) || (b4 = false, *(uint *)(n2 + 0x30) <= ((SmartHeapPool *)n2)->current_size - u5))
  {
    FUN_0046e920(n2,n3,CONCAT22((short)((uint)_esi >> 0x10),u1) & 0xffff0007);
    b4 = true;
    ((SmartHeapPool *)n2)->current_size = ((SmartHeapPool *)n2)->current_size - u5;
  }
  if (b4) {
    ((SmartHeapPool *)param_1)->page_tag = 0;
    FUN_00471220(param_1);
    return 1;
  }
  return 0;
}


/* FUN_0046eb40 @ 0x0046eb40 */

short __fastcall FUN_0046eb40(int param_1,byte param_2)
{
  *(void **)(param_1 + 8) = &L_0046ebc0;
  ((SmartHeapPool *)param_1)->slab_head = 0;
  *(short *)(param_1 + 0xc) = 1;
  ((SmartHeapPool *)param_1)->page_flags = param_2 & 2;
  return 0;
}


/* FUN_0046eb60 @ 0x0046eb60
 * NOTE: SmartHeap large-block allocator. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x2c, 0x34 are pool descriptor fields. NOT a game struct.
 */

int * __fastcall FUN_0046eb60(LPCVOID param_1,uint param_2,int param_3)
{
  int *pn1;
  int n2;
  
  while( true ) {
    pn1 = FUN_0046e980(param_1,3,param_3 + 0x1c,param_2);
    if (pn1 != NULL) {
      return pn1 + 7;
    }
    n2 = FUN_0046e500((int)param_1);
    if ((uint)((SmartHeapPool *)param_1)->max_size <
        (param_3 + 0x101bU & 0xfffff000) + ((SmartHeapPool *)param_1)->current_size) break;
    if ((n2 == 0) && (n2 = FUN_0046fd70(param_1,2), n2 == 0)) {
      return NULL;
    }
  }
  return NULL;
}


/* FUN_0046ebd0 @ 0x0046ebd0 */

int __fastcall FUN_0046ebd0(int *param_1,int *param_2,int param_3,uint param_4)
{
  int n1;
  uint u2;
  int *pn3;
  int n4;
  int n5;
  uint u6;
  
  n1 = *param_1;
  u2 = FUN_00471410(param_1);
  u6 = (param_4 & 5) << 8 | (uint)(ushort)((SmartHeapPool *)n1)->pool_flags;
  if (param_2 == NULL) {
    n5 = FUN_00471330(param_1,param_3 + 0x1cU,u6 | 0x2000);
    if (n5 == 0) {
      return 0;
    }
  }
  else {
    n5 = param_1[1];
    while (pn3 = FUN_00471280(param_1,param_3 + 0x1cU,u6 | 0x2000), pn3 == NULL) {
      n4 = FUN_0046fd70(n1,2);
      if (n4 == 0) {
        *param_2 = 0;
        return 0;
      }
    }
    *(int **)(n5 + 4) = pn3;
    *param_2 = (int)(pn3 + 7);
    param_1 = pn3;
  }
  u6 = FUN_00471410(param_1);
  ((SmartHeapPool *)n1)->current_size = ((SmartHeapPool *)n1)->current_size + (u6 - u2);
  return 1;
}


/* FUN_0046ecb0 @ 0x0046ecb0 */

int __fastcall FUN_0046ecb0(int param_1,int param_2,short param_3)
{
  int *pu1;
  
  *(int *)(param_2 + 0x14) = param_2 + 0x1c;
  *(int *)(param_2 + 0x10) = 0;
  *(void **)(param_2 + 8) = &L_0046ef60;
  pu1 = FUN_0046ece0(param_2,(ushort)((SmartHeapPool *)param_1)->alloc_unit,param_3);
  return CONCAT22((short)((uint)pu1 >> 0x10),1);
}


/* FUN_0046ece0 @ 0x0046ece0 */

void ** __fastcall FUN_0046ece0(int param_1,ushort param_2,short param_3)
{
  int n1;
  int *pu2;
  ushort u3;
  int _eax;
  int *pu4;
  
  pu2 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x10) = pu2;
  u3 = param_3 + ((short)param_1 - (short)pu2);
  pu4 = (int *)CONCAT22((short)((uint)_eax >> 0x10),u3 / param_2);
  n1 = ((uint)u3 - (uint)u3 % (uint)param_2) + (int)pu2;
  *(int *)(param_1 + 0x14) = n1;
  while (pu2 < (int *)(n1 - (uint)param_2)) {
    pu4 = (int *)((uint)param_2 + (int)pu2);
    *pu2 = pu4;
    pu2 = pu4;
  }
  *pu2 = 0;
  return pu4;
}


/* FUN_0046efa0 @ 0x0046efa0
 * NOTE: SmartHeap pool initialization. param_1 is a SmartHeap pool descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

uint __fastcall FUN_0046efa0(int *param_1,uint param_2)
{
  ushort *pu1;
  int *pn2;
  uint u3;
  short *pu4;
  ushort u5;
  
  pu1 = (ushort *)((int)param_1 + 0x1a);
  pu4 = (short *)
           ((((param_2 & 0xffff) - ((int)pu1 - (int)param_1 & 0xffffU)) - 10 & 0xfffc) +
           (int)pu1);
  *pu4 = 1;
  param_1[4] = (int)pu1;
  pn2 = param_1 + 6;
  *(short **)(pu4 + 3) = pu4;
  *(short **)(pu4 + 1) = pu4;
  param_1[5] = (int)pu4;
  u5 = ((SmartHeapPool *)param_1)->page_tag & 7;
  if (u5 == 2) {
    *(short *)pn2 = 0xc;
  }
  else {
    u3 = ((SmartHeapPool *)*param_1)->alloc_unit + 3;
    if (u3 < 0xd) {
      u3 = 0xc;
    }
    *(short *)pn2 = (short)u3;
  }
  if (u5 != 2) {
    *(short *)pn2 = 0x40;
  }
  u5 = (ushort)((int)pu4 - (int)pu1);
  pu4[-1] = u5;
  *pu1 = u5 | 2;
  param_1[8] = (int)pu4;
  param_1[7] = *(int *)(pu4 + 1);
  *(ushort **)(*(int *)(pu4 + 1) + 6) = pu1;
  *(ushort **)(pu4 + 1) = pu1;
  param_1[2] = (int)&L_0046f660;
  return CONCAT22((short)((uint)((int)pu4 - (int)pu1) >> 0x10),*pu1) & 0xfffffffc;
}


/* FUN_0046f040 @ 0x0046f040 */

int __fastcall FUN_0046f040(int param_1,int param_2)
{
  *(int *)(param_1 + 0x14) = param_2 + param_1;
  *(int *)(param_1 + 0x10) = param_1 + 0x1c;
  *(void (**)(void))(param_1 + 8) = FUN_0046f270;
  return CONCAT22((short)((uint)(param_1 + 0x1c) >> 0x10),1);
}


/* FUN_0046f060 @ 0x0046f060
 * NOTE: SmartHeap pool allocation dispatcher. param_1 is a SmartHeap pool descriptor.
 * Offsets 0x20, 0x22, 0x2a, 0x48, 0x60 are pool descriptor fields. NOT a game struct.
 */

ushort * FUN_0046f060(LPCVOID param_1,uint param_2,uint param_3)
{
  ushort *pu1;
  
  if (((SmartHeapPool *)param_1)->pool_signature == -0x4153) {
    if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
      ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + 1;
    }
    if (param_2 < 0xff) {
      if (param_2 == 0) {
        pu1 = NULL;
        FUN_0046fd70(param_1,4);
      }
      else {
        pu1 = FUN_0046f110(param_1,param_3,(ushort)param_2);
      }
    }
    else if (((SmartHeapPool *)param_1)->max_small_block < param_2) {
      pu1 = (ushort *)FUN_0046eb60(param_1,param_3 & 0xfffffffd,param_2);
    }
    else {
      pu1 = FUN_0046f290(param_1,param_3 & 0xfffffffd,(ushort)param_2);
    }
    if ((((SmartHeapPool *)param_1)->pool_flags & 2) != 0) {
      ((SmartHeapPool *)param_1)->lock_count = ((SmartHeapPool *)param_1)->lock_count + -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)param_1)->critical_section);
    }
    return pu1;
  }
  FUN_0046fd70(0,10);
  return NULL;
}


/* FUN_0046f110 @ 0x0046f110
 * NOTE: SmartHeap small-block allocator. param_1 is a SmartHeap pool descriptor.
 * Offset 0x10 = slab allocator head. NOT a game struct.
 */

ushort * __fastcall FUN_0046f110(LPCVOID param_1,uint param_2,ushort param_3)
{
  short *ps1;
  int *pu2;
  ushort u3;
  ushort u4;
  uint u5;
  int *pn6;
  ushort *pu7;
  uint u8;
  uint u9;
  ushort *pu10;
  
  if (param_3 < 4) {
    param_3 = 4;
  }
  u3 = param_3 >> 2;
  u8 = (uint)u3;
  pu2 = (int *)((int)param_1 + u8 * 4 + 100);
  pu7 = (ushort *)*pu2;
  if (pu7 != NULL) {
    *pu2 = *(int *)pu7;
    ps1 = (short *)(((uint)pu7 & 0xffff0000) + 0xc);
    *ps1 = *ps1 + 1;
    if ((param_2 & 1) != 0) {
      u9 = u8 * 4 + 3;
      pu10 = pu7;
      for (u8 = u9 >> 2; u8 != 0; u8 = u8 - 1) {
        pu10[0] = 0;
        pu10[1] = 0;
        pu10 = pu10 + 2;
      }
      for (u9 = u9 & 3; u9 != 0; u9 = u9 - 1) {
        *(char *)pu10 = 0;
        pu10 = (ushort *)((int)pu10 + 1);
      }
    }
    return pu7;
  }
  u4 = u3 * 4 + 4;
  ps1 = (short *)((SmartHeapPool *)param_1)->slab_head;
  u9 = param_2;
  if ((ps1 == NULL) ||
     (u9 = *(uint *)(ps1 + 2),
     (ushort)((short)*(int *)(u9 + 0x14) - (short)*(int *)(u9 + 0x10)) < u4))
  {
    if ((ps1 != NULL) && (*ps1 != 0)) {
      pu2 = *(int **)(u9 + 0x10);
      if (*(int **)(u9 + 0x14) != pu2) {
        u5 = (int)*(int **)(u9 + 0x14) - (int)pu2;
        if (7 < u5) {
          *(char *)((int)pu2 + -1) = (char)((int)(u5 - 4) >> 2);
          *(short *)(u9 + 0xc) = *(short *)(u9 + 0xc) + 1;
          FUN_0046f270(pu2);
          *(int *)(u9 + 0x10) = *(int *)(u9 + 0x14);
        }
        *ps1 = 0;
      }
    }
    if (((param_2 & 0x10) != 0) ||
       (pn6 = FUN_0046e980(param_1,4,0x10000,0), pn6 == NULL)) {
      pu7 = FUN_0046f290(param_1,param_2 & 0xfffffffd,param_3);
      return pu7;
    }
    u9 = *(uint *)((int)((SmartHeapPool *)param_1)->slab_head + 4);
  }
  pu7 = *(ushort **)(u9 + 0x10);
  *(char *)((int)pu7 + -1) = (char)u3;
  *(int *)(u9 + 0x10) = *(int *)(u9 + 0x10) + (uint)u4;
  *(short *)(u9 + 0xc) = *(short *)(u9 + 0xc) + 1;
  if ((param_2 & 1) != 0) {
    u9 = u8 * 4 + 3;
    pu10 = pu7;
    for (u8 = u9 >> 2; u8 != 0; u8 = u8 - 1) {
      pu10[0] = 0;
      pu10[1] = 0;
      pu10 = pu10 + 2;
    }
    for (u9 = u9 & 3; u9 != 0; u9 = u9 - 1) {
      *(char *)pu10 = 0;
      pu10 = (ushort *)((int)pu10 + 1);
    }
  }
  return pu7;
}


/* FUN_0046f270 @ 0x0046f270 */

void __fastcall FUN_0046f270(int *param_1)
{
  int *pn1;
  int *pu2;
  
  pu2 = (int *)
           (*(int *)((uint)param_1 & 0xffff0000) + 100 + *(char *)((int)param_1 + -1) * 4);
  *param_1 = *pu2;
  *pu2 = param_1;
  pn1 = (int *)((uint)param_1 & 0xffff0000) + 3;
  *(short *)pn1 = (short)*pn1 + -1;
}


/* FUN_0046f290 @ 0x0046f290 */

ushort * __fastcall FUN_0046f290(LPCVOID param_1,uint param_2,short param_3)
{
    /* STUB: 58 lines not yet reconstructed */
    return 0;
}


/* FUN_0046f420 @ 0x0046f420 */

ushort * __fastcall FUN_0046f420(int *param_1,ushort param_2,uint param_3)
{
    /* STUB: 87 lines not yet reconstructed */
    return 0;
}


/* FUN_0046f5f0 @ 0x0046f5f0 */

int FUN_0046f5f0(uint param_1)
{
    /* STUB: 20 lines not yet reconstructed */
    return 0;
}


/* FUN_0046f750 @ 0x0046f750
 * NOTE: SmartHeap realloc. param_1 points into a SmartHeap page.
 * Offsets 0x0e, 0x22, 0x48, 0x60 are SmartHeap page/pool descriptor fields.
 * pv3 is derived pool descriptor. NOT a game struct.
 */

ushort * FUN_0046f750(ushort *param_1,uint param_2,uint param_3)
{
  int *pn1;
  int n2;
  LPCVOID pv3;
  uint u4;
  uint u5;
  uint u6;
  ushort *pu7;
  uint u8;
  ushort *pu9;
  uint u10;
  ushort *pu11;
  short v2;
  uint u12;
  
  if ((((SmartHeapPool *)((uint)param_1 & 0xffff0000))->page_tag & 0xfff8) != 0xcad0) {
    FUN_0046fd70(0,0xe);
    return NULL;
  }
  n2 = *(int *)((uint)param_1 & 0xffff0000);
  if ((((SmartHeapPool *)n2)->pool_flags & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)n2)->critical_section);
    pn1 = &((SmartHeapPool *)(*(int *)((uint)param_1 & 0xffff0000)))->lock_count;
    *pn1 = *pn1 + 1;
  }
  u5 = param_3;
  u4 = param_2;
  u10 = param_3 & 8;
  pv3 = *(LPCVOID *)((uint)param_1 & 0xffff0000);
  u6 = FUN_0046f870((int *)(-(uint)(u10 == 0) & (uint)&param_1),(uint)param_1,param_2,param_3)
  ;
  u12 = u6 & 0xffff;
  u8 = u12;
  if ((((SmartHeapPool *)pv3)->pool_flags & 2) != 0) {
    ((SmartHeapPool *)pv3)->lock_count = ((SmartHeapPool *)pv3)->lock_count + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&((SmartHeapPool *)pv3)->critical_section);
  }
  v2 = (short)u6;
  if (v2 == 0) {
    return param_1;
  }
  if (u10 == 0) {
    pu7 = FUN_0046f060(pv3,u4,u5);
    if (pu7 != NULL) {
      pu9 = param_1;
      pu11 = pu7;
      for (u8 = u8 >> 2; u8 != 0; u8 = u8 - 1) {
        *(int *)pu11 = *(int *)pu9;
        pu9 = pu9 + 2;
        pu11 = pu11 + 2;
      }
      for (u6 = u6 & 3; u6 != 0; u6 = u6 - 1) {
        *(char *)pu11 = (char)*pu9;
        pu9 = (ushort *)((int)pu9 + 1);
        pu11 = (ushort *)((int)pu11 + 1);
      }
      FUN_0046f5f0((uint)param_1);
    }
    return pu7;
  }
  if (u4 != 0) {
    FUN_0046fd70(pv3,5);
  }
  return NULL;
}


/* FUN_0046f870 @ 0x0046f870
 * NOTE: SmartHeap resize implementation. pn6 is a SmartHeap page descriptor.
 * Offset 0x0e = page type tag, 0x2a = max_small_block. NOT a game struct.
 */

uint __fastcall FUN_0046f870(int *param_1,uint param_2,uint param_3,uint param_4)
{
  ushort *pu1;
  ushort u2;
  int u3;
  ushort u5;
  ushort *pu4;
  int *pn6;
  uint u7;
  short s8;
  ushort u9;
  uint u10;
  int *pu11;
  
  pn6 = (int *)(param_2 & 0xffff0000);
  if (param_3 == 0) {
    u3 = FUN_0046fd70(*pn6,4);
    u5 = (ushort)((uint)u3 >> 0x10);
    if (param_1 == NULL) {
      return CONCAT22(u5,1);
    }
    *param_1 = 0;
    return (uint)u5 << 0x10;
  }
  u5 = (ushort)param_3;
  switch(((SmartHeapPool *)pn6)->page_tag & 7) {
  case 0:
  case 2:
    pu1 = (ushort *)(param_2 - 2);
    u9 = *pu1 & 0x7ffc;
    u2 = u9 - 2;
    if ((*pu1 & 0x8000) != 0) {
      u2 = u9 - 8;
    }
    u7 = (uint)u2;
    if ((u7 < param_3) && (((SmartHeapPool *)*pn6)->max_small_block < param_3)) {
      return CONCAT22((short)((uint)*pn6 >> 0x10),u2);
    }
    pu4 = (ushort *)FUN_0046faf0(pu1,u5);
    if (pu4 == NULL) {
      return (uint)u2;
    }
    if ((param_4 & 1) != 0) {
      u9 = (*pu1 & 0x7ffc) - 2;
      if (u2 < u5) {
        pu11 = (int *)(u7 + param_2);
        for (u10 = u9 - u7 >> 2; u10 != 0; u10 = u10 - 1) {
          *pu11 = 0;
          pu11 = pu11 + 1;
        }
        for (u7 = u9 - u7 & 3; u7 != 0; u7 = u7 - 1) {
          *(char *)pu11 = 0;
          pu11 = (int *)((int)pu11 + 1);
        }
        return 0;
      }
      pu4 = pu1;
      if (u5 < u9) {
        u10 = (uint)u9 - (param_3 & 0xffff);
        pu11 = (int *)((param_3 & 0xffff) + param_2);
        for (u7 = u10 >> 2; u7 != 0; u7 = u7 - 1) {
          *pu11 = 0;
          pu11 = pu11 + 1;
        }
        for (u10 = u10 & 3; u10 != 0; u10 = u10 - 1) {
          *(char *)pu11 = 0;
          pu11 = (int *)((int)pu11 + 1);
        }
        return 0;
      }
    }
    break;
  case 1:
    pu4 = (ushort *)*pn6;
    pu1 = *(ushort **)(pu4 + 0x12);
    if (pu1 < param_3) {
      return CONCAT22((short)((uint)pu4 >> 0x10),(short)pu1);
    }
    if (((param_4 & 1) != 0) && (pu4 = (ushort *)(param_3 & 0xffff), pu4 < pu1)) {
      pu11 = (int *)((int)pu4 + param_2);
      for (u7 = (uint)((int)pu1 - (int)pu4) >> 2; u7 != 0; u7 = u7 - 1) {
        *pu11 = 0;
        pu11 = pu11 + 1;
      }
      for (u7 = (int)pu1 - (int)pu4 & 3; u7 != 0; u7 = u7 - 1) {
        *(char *)pu11 = 0;
        pu11 = (int *)((int)pu11 + 1);
      }
      return 0;
    }
    break;
  case 3:
    if ((param_1 != NULL) && (param_3 <= ((SmartHeapPool *)*pn6)->max_small_block)) {
      u7 = FUN_0046fcc0(param_2);
      u9 = (ushort)u7;
      if (param_3 <= u7) {
        u9 = u5;
      }
      return CONCAT22((short)(u7 >> 0x10),u9);
    }
    pu4 = (ushort *)FUN_0046ebd0(pn6,param_1,param_3,param_4);
    if ((pu4 == NULL) && (param_1 == NULL)) {
      return 1;
    }
    break;
  case 4:
    s8 = *(char *)(param_2 - 1) * 4;
    u9 = s8 + 3;
    if ((0xfe < param_3) ||
       (u2 = (ushort)(param_3 + 4) ^ s8 + 7U,
       pu4 = (ushort *)CONCAT22((short)(param_3 + 4 >> 0x10),u2), (u2 & 0xfffc) != 0)) {
      u7 = (uint)u9;
      if (param_3 <= u9) {
        u7 = param_3;
      }
      return u7;
    }
    if (((param_4 & 1) != 0) && (u5 < u9)) {
      u10 = (uint)u9 - (param_3 & 0xffff);
      pu11 = (int *)((param_3 & 0xffff) + param_2);
      for (u7 = u10 >> 2; u7 != 0; u7 = u7 - 1) {
        *pu11 = 0;
        pu11 = pu11 + 1;
      }
      for (u10 = u10 & 3; pu4 = NULL, u10 != 0; u10 = u10 - 1) {
        *(char *)pu11 = 0;
        pu11 = (int *)((int)pu11 + 1);
      }
    }
    break;
  default:
    if (param_1 == NULL) {
      return 1;
    }
    *param_1 = 0;
    return 0;
  }
  return (uint)pu4 & 0xffff0000;
}


/* FUN_0046faf0 @ 0x0046faf0 */

int __fastcall FUN_0046faf0(ushort *param_1,short param_2)
{
  byte *pb1;
  ushort u2;
  int n3;
  ushort u4;
  ushort *pu5;
  ushort u6;
  ushort u7;
  uint u8;
  
  u2 = *param_1;
  u4 = param_2 + 5U & 0xfffc;
  if (u4 < 0xd) {
    u4 = 0xc;
  }
  if ((u2 & 0x7ffc) < u4) {
    pu5 = (ushort *)((u2 & 0x7ffc) + (int)param_1);
    if (((*pu5 & 1) != 0) || ((*pu5 & 0xfffc) + (u2 & 0x7ffc) < (uint)u4)) {
      return 0;
    }
    u8 = (uint)param_1 & 0xffff0000;
    if ((ushort *)((SmartHeapPool *)u8)->slab_head == pu5) {
      ((SmartHeapPool *)u8)->slab_head = (void *)*(int *)(pu5 + 1);
    }
    *(int *)(*(int *)(pu5 + 3) + 2) = *(int *)(pu5 + 1);
    *(int *)(*(int *)(pu5 + 1) + 6) = *(int *)(pu5 + 3);
    u6 = ((u2 & 0x7ffc) - u4) + (*pu5 & 0xfffc);
    if ((*param_1 & 0x8000) == 0) {
      u2 = *(ushort *)&((SmartHeapPool *)u8)->_pad16[2]; /* TODO: page field at 0x18 in _pad16 */
    }
    else {
      u2 = 0xc;
    }
    if (u6 < u2) {
      *param_1 = (*pu5 & 0xfffc) + *param_1;
      pb1 = (byte *)((*pu5 & 0xfffc) + (int)pu5);
      *pb1 = *pb1 | 2;
      return 1;
    }
  }
  else {
    u7 = 0xc;
    u6 = (u2 & 0x7ffc) - u4;
    if ((u2 & 0x8000) == 0) {
      u7 = *(ushort *)&((SmartHeapPool *)((uint)param_1 & 0xffff0000))->_pad16[2]; /* TODO: page field at 0x18 in _pad16 */
    }
    if (u6 < u7) {
      return 1;
    }
    pu5 = (ushort *)((u2 & 0x7ffc) + (int)param_1);
    if ((*pu5 & 1) == 0) {
      u6 = u6 + (*pu5 & 0xfffc);
      if ((ushort *)((SmartHeapPool *)((uint)param_1 & 0xffff0000))->slab_head == pu5) {
        ((SmartHeapPool *)((uint)param_1 & 0xffff0000))->slab_head = (void *)*(int *)(pu5 + 1);
      }
      *(int *)(*(int *)(pu5 + 3) + 2) = *(int *)(pu5 + 1);
      *(int *)(*(int *)(pu5 + 1) + 6) = *(int *)(pu5 + 3);
    }
    pu5 = *(ushort **)(((uint)param_1 & 0xffff0000) + 4);
    if (*pu5 < u6) {
      *pu5 = u6;
    }
  }
  pu5 = (ushort *)((uint)u4 + (int)param_1);
  *param_1 = *param_1 & 0x8003 | u4;
  *pu5 = u6 | 2;
  n3 = (int)((SmartHeapPool *)((uint)param_1 & 0xffff0000))->end_ptr;
  *(int *)(pu5 + 3) = n3;
  *(int *)(pu5 + 1) = *(int *)(n3 + 2);
  *(ushort **)(*(int *)(n3 + 2) + 6) = pu5;
  *(ushort **)(n3 + 2) = pu5;
  pu5 = (ushort *)((int)pu5 + (uint)u6);
  pu5[-1] = u6;
  *pu5 = *pu5 & 0xfffd;
  return 1;
}


/* FUN_0046fcc0 @ 0x0046fcc0
 * NOTE: SmartHeap block size query. pn3 is a SmartHeap page descriptor.
 * Offset 0x0e = page type tag. NOT a game struct.
 */

int FUN_0046fcc0(uint param_1)
{
  int n1;
  uint u2;
  int *pn3;
  
  pn3 = (int *)(param_1 & 0xffff0000);
  if ((((SmartHeapPool *)pn3)->page_tag & 0xfff8) != 0xcad0) {
    FUN_0046fd70(0,0xe);
    return -1;
  }
  switch(((SmartHeapPool *)pn3)->page_tag & 7) {
  case 0:
  case 2:
    u2 = *(ushort *)(param_1 - 2) & 0x7ffc;
    n1 = u2 - 2;
    if ((*(ushort *)(param_1 - 2) & 0x8000) != 0) {
      return u2 - 8;
    }
    break;
  case 1:
    return ((SmartHeapPool *)*pn3)->alloc_unit;
  case 3:
    u2 = FUN_00471410(pn3);
    return u2 - 0x1c;
  case 4:
    n1 = *(char *)(param_1 - 1) * 4 + 3;
    break;
  default:
    return -1;
  }
  return n1;
}


/* FUN_0046fd70 @ 0x0046fd70 */

int __fastcall FUN_0046fd70(LPCVOID param_1,int param_2)
{
    /* STUB: 93 lines not yet reconstructed */
    return 0;
}


/* FUN_0046ff60 @ 0x0046ff60 */

bool __thiscall FUN_0046ff60(void *this,int param_1)
{
  DWORD dw1;
  int n2;
  DWORD *pDVar3;
  
  n2 = FUN_00471650((LPCRITICAL_SECTION)&DAT_00489c80,(int *)&DAT_00484034);
  if (n2 == 0) {
    return false;
  }
  pDVar3 = FUN_00471930((int)this,1);
  if (pDVar3 == NULL) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
    FUN_004719b0(s_Memory_errors_in_too_many_thread_00483f88,0);
    return true;
  }
  dw1 = pDVar3[1];
  pDVar3[1] = dw1 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00489c80);
  if (param_1 - dw1 == -1) {
    FUN_004719b0(s_SmartHeap_error_handler_recursiv_00483fbc,0);
  }
  return param_1 < (int)dw1;
}


