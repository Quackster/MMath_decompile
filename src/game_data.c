/*
 * game_data.c - Data management
 * Address range: 0x450000 - 0x45BFFF
 * Functions: 472
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_004517c0 @ 0x004517c0 */

/* NOTE: overlapping globals */

void FUN_004517c0(void)
{
  _DAT_00488ffe = 0;
  _DAT_00488ffc = 0;
}


/* FUN_004517d0 @ 0x004517d0 */

void FUN_004517d0(void)
{
  _atexit(FUN_004517e0);
}


/* FUN_004517e0 @ 0x004517e0 */

void FUN_004517e0(void) { return; }


/* FUN_00451800 @ 0x00451800 */

/* NOTE: overlapping globals */

void FUN_00451800(void)
{
  _DAT_00488ffa = 0;
  _DAT_00488ff8 = 0;
}


/* FUN_00451810 @ 0x00451810 */

void FUN_00451810(void)
{
  _atexit(FUN_00451820);
}


/* FUN_00451820 @ 0x00451820 */

void FUN_00451820(void) { return; }


/* FUN_00451b80 @ 0x00451b80 */

/* FUN_00451b80 @ 0x00451b80
 * Struct types: TextDisplay (param_1)
 * TODO: offset 0x228 in _pad region of TextDisplay, needs investigation
 */
int __fastcall FUN_00451b80(TextDisplay *param_1)
{
  return *(int *)((int)param_1 + 0x228); /* TODO: unknown offset 0x228 on TextDisplay */
}


/* FUN_00451b90 @ 0x00451b90 */

/* FUN_00451b90 @ 0x00451b90
 * Struct types: TextDisplay (param_1)
 */
int __fastcall FUN_00451b90(TextDisplay *param_1)
{
  return param_1->max_entries;
}


/* FUN_00451ba0 @ 0x00451ba0 */

int __thiscall FUN_00451ba0(MathProblem *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < this->slots[2].value)) {
    return *(int *)(param_1 * 0x12 + 0x238 + (intptr_t)this);
  }
  return 0xffffffff;
}


/* FUN_00451bd0 @ 0x00451bd0 */

char __thiscall FUN_00451bd0(MathProblem *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < this->slots[2].value)) {
    return (&DAT_00480848)[(uint)*(byte *)(param_1 * 0x12 + 0x232 + (intptr_t)this) * 4];
  }
  return 0xff;
}


/* FUN_00451c00 @ 0x00451c00 */

uint __thiscall FUN_00451c00(MathProblem *this,int param_1,uint param_2)
{
  if ((((-1 < (int)param_2) && ((int)param_2 < this->slots[2].value)) && (-1 < param_1)) &&
     (param_1 < this->slots[1].value)) {
    *(int *)(param_2 * 0x12 + 0x23c + (intptr_t)this) = param_1;
    return CONCAT31(param_2 * 0x12 >> 8,1);
  }
  return param_2 & 0xffffff00;
}


/* FUN_00451c40 @ 0x00451c40 */

uint __thiscall FUN_00451c40(MathProblem *this,int param_1,uint param_2)
{
  if ((-1 < (int)param_2) && ((int)param_2 < this->slots[2].value)) {
    *(int *)(param_2 * 0x12 + 0x23c + (intptr_t)this) = 0xffffffff;
    return CONCAT31(param_2 * 2 >> 8,1);
  }
  return param_2 & 0xffffff00;
}


/* FUN_00451c70 @ 0x00451c70 */

int FUN_00451c70(int param_1,int param_2,int param_3)
{
  int n1;
  
  do {
    do {
      n1 = rand();
      n1 = n1 % 7;
    } while (n1 == param_1);
  } while ((n1 == param_2) || (n1 == param_3));
  return n1;
}


/* FUN_00451cb0 @ 0x00451cb0 */

void FUN_00451cb0(int param_1,int param_2,int param_3)
{
  uint u1;
  int n2;
  uint u3;
  
  do {
    do {
      u1 = rand();
      u3 = (int)u1 >> 0x1f;
      n2 = ((u1 ^ u3) - u3 & 3 ^ u3) - u3;
    } while (n2 == param_1);
  } while ((n2 == param_2) || (n2 == param_3));
}


/* FUN_00451cf0 @ 0x00451cf0 */

/* FUN_00451cf0 @ 0x00451cf0
 * TODO: unknown struct type with stride-0x16 array at offsets 0x1D4, 0x1DE
 */
uint __thiscall FUN_00451cf0(void *this,int param_1)
{
  int n1;
  int n2;

  n1 = *(int *)((int)this + param_1 * 0x16 + 0x1de); /* TODO: unknown struct, stride-0x16 array */
  n2 = rand();
  return *(uint *)(**(int **)((int)this + param_1 * 0x16 + 0x1d4) /* TODO: unknown struct, stride-0x16 array at +0x1D4 */ + (n2 % n1) * 4) >> 0x10;
}


/* FUN_00451d30 @ 0x00451d30 */

void __thiscall FUN_00451d30(void *this,int param_1)
{
  FUN_0044c7e0(this,(&DAT_00480868)[param_1],0,'\x01');
}


/* FUN_00451d50 @ 0x00451d50 */

void __thiscall FUN_00451d50(void *this,int param_1,char param_2)
{
  if (param_2 != '\0') {
    FUN_0044c7e0(this,*(int *)(&DAT_004808b8 + param_1 * 4),0,'\x01');
    return;
  }
  FUN_0044c7e0(this,*(int *)(&DAT_004808a8 + param_1 * 4),0,'\x01');
}


/* FUN_00451d80 @ 0x00451d80 */

int __thiscall FUN_00451d80(MathProblem *this,int param_1)
{
  int n1;
  int *pn2;
  int n3;
  
  n1 = 0;
  n3 = this->slots[2].value;
  if (0 < n3) {
    pn2 = (int *)&this->slots[2].flags;
    do {
      if (*pn2 == param_1) {
        n1 = n1 + 1;
      }
      pn2 = (int *)((int)pn2 + 0x12);
      n3 = n3 + -1;
    } while (n3 != 0);
  }
  return n1;
}


/* FUN_00451db0 @ 0x00451db0 */

int __thiscall FUN_00451db0(MathProblem *this,int param_1,uint param_2)
{
  int n1;
  int *pn2;
  int n3;
  
  n1 = 0;
  n3 = this->slots[2].value;
  if (0 < n3) {
    pn2 = (int *)&this->slots[2].flags;
    do {
      if ((*pn2 == param_1) && (*(byte *)((int)pn2 + -10) == param_2)) { /* TODO: pn2-10 = AnswerSlot.symbol relative to flags ptr */
        n1 = n1 + 1;
      }
      pn2 = (int *)((int)pn2 + 0x12);
      n3 = n3 + -1;
    } while (n3 != 0);
  }
  return n1;
}


/* FUN_00451df0 @ 0x00451df0 */

int __thiscall FUN_00451df0(MathProblem *this,int param_1,int param_2)
{
  int n1;
  int *pn2;
  int n3;
  
  n1 = 0;
  n3 = this->slots[2].value;
  if (0 < n3) {
    pn2 = (int *)&this->slots[2].flags;
    do {
      if ((*pn2 == param_1) && (pn2[-2] == param_2)) {
        n1 = n1 + 1;
      }
      pn2 = (int *)((int)pn2 + 0x12);
      n3 = n3 + -1;
    } while (n3 != 0);
  }
  return n1;
}


/* FUN_00451ee0 @ 0x00451ee0 */

/* FUN_00451ee0 @ 0x00451ee0
 * Struct types: TextDisplay (param_1) - based on offset 0x406 = field_406
 */
int * __fastcall FUN_00451ee0(TextDisplay *param_1)
{
  int n1;
  int *pu2;

  *(void ***)param_1 = &PTR_FUN_00476250; /* vtable assignment */
  param_1->field_406 = 0;
  *(short *)((int)param_1 + 4) = 0x100; /* TODO: offset 0x04 on unknown struct, initialization to 256 */
  pu2 = (int *)((int)param_1 + 6);
  for (n1 = 0x100; n1 != 0; n1 = n1 + -1) {
    *pu2 = 0;
    pu2 = pu2 + 1;
  }
  return param_1;
}


/* FUN_00451f10 @ 0x00451f10 */

int * __thiscall FUN_00451f10(void *this,byte param_1)
{
  FUN_00451f60(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00451f30 @ 0x00451f30 */

int * __thiscall FUN_00451f30(void *this,int *param_1)
{
  *(void ***)this = &PTR_FUN_00476250; /* vtable assignment */
  ((TextDisplay *)this)->field_406 = 0;
  *(short *)((intptr_t)this + 4) = 0x100;
  FUN_00451f70(this,param_1);
  return this;
}


/* FUN_00451f60 @ 0x00451f60 */

void __fastcall FUN_00451f60(int *param_1)
{
  *param_1 = &PTR_FUN_00476250;
  FUN_00452210((TextDisplay *)param_1);
}


/* FUN_00451f70 @ 0x00451f70 */

void __thiscall FUN_00451f70(GameWidget *this,int *param_1)
{
  int n1;
  int *pu2;
  
  this->field_04 = 0x100;
  pu2 = (int *)&this->field_06;
  for (n1 = 0x100; n1 != 0; n1 = n1 + -1) {
    *pu2 = *param_1;
    param_1 = param_1 + 1;
    pu2 = pu2 + 1;
  }
  FUN_00452210((TextDisplay *)this);
}


/* FUN_00451fa0 @ 0x00451fa0 */

int __thiscall
FUN_00451fa0(void *this,char *param_1,int param_2,short param_3,short param_4,
            short param_5)
{
    /* STUB: 37 lines not yet reconstructed */
    return 0;
}


/* FUN_00452050 @ 0x00452050 */

short __thiscall
FUN_00452050(void *this,int param_1,short param_2,short param_3,short param_4)
{
  int n1;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (0xfe < param_3) {
    param_3 = 0xfe;
  }
  if (param_2 <= param_3) {
    do {
      if ((((param_4 != param_2) &&
           (n1 = (int)param_2, *(char *)((int)this + n1 * 4 + 6) == (char)param_1)) && /* TODO: stride-4 byte array at this+6, color palette lookup */
          (*(char *)((int)this + n1 * 4 + 7) == ((unsigned char)((param_1) >> 8)))) &&
         ((*(char *)((int)this + n1 * 4 + 8) == ((unsigned char)((param_1) >> 16)) &&
          (*(char *)((int)this + n1 * 4 + 9) == ((unsigned char)((param_1) >> 24)))))) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return -1;
}


/* FUN_004520c0 @ 0x004520c0 */

void __thiscall
FUN_004520c0(void *this,int param_1,short param_2,short param_3,short param_4)
{
  FUN_00451fa0(this,&L_00451e80,param_1,param_2,param_3,param_4);
}


/* FUN_004520f0 @ 0x004520f0 */

void __thiscall
FUN_004520f0(void *this,int param_1,short param_2,short param_3,short param_4)
{
  FUN_00451fa0(this,&L_00451e30,param_1,param_2,param_3,param_4);
}


/* FUN_00452120 @ 0x00452120 */

int __thiscall FUN_00452120(GameWidget *this,int param_1)
{
  int n1;
  int n2;
  byte *pb3;
  byte *pb4;
  bool b5;
  bool b6;
  
  n2 = this->field_04 * 4;
  n1 = *(short *)(param_1 + 4) * 4;
  if (n1 <= n2) {
    n2 = n1;
  }
  b5 = false;
  n1 = 0;
  b6 = true;
  pb3 = (byte *)&this->field_06;
  pb4 = (byte *)(param_1 + 6);
  do {
    if (n2 == 0) break;
    n2 = n2 + -1;
    b5 = *pb3 < *pb4;
    b6 = *pb3 == *pb4;
    pb3 = pb3 + 1;
    pb4 = pb4 + 1;
  } while (b6);
  if (!b6) {
    n1 = (1 - (uint)b5) - (uint)(b5 != 0);
  }
  return CONCAT31((unsigned int)((uint)n1 >> 8),n1 == 0);
}


/* FUN_00452160 @ 0x00452160 */

int __thiscall FUN_00452160(void *this,void *param_1,int param_2,char *param_3)
{
  short s1;
  int u2;
  short _extra;
  char *pu3;
  short s4;
  int n5;
  
  u2 = FUN_00452120(this,(int)param_1);
  if ((char)u2 == '\0') {
    s4 = 1;
    pu3 = *(char **)(param_2 + 4);
    *pu3 = 0;
    if (1 < *(short *)((intptr_t)this + 4)) { /* TODO: unknown struct, offset 0x04 = count field */
      do {
        n5 = (int)s4;
        s1 = FUN_00452050(param_1,*(int *)((intptr_t)this + n5 * 4 + 6),0,0xfe,-1); /* TODO: offset 0x06 = color table entries */
        pu3 = (char *)CONCAT22(_extra,s1);
        if (s1 == -1) {
          pu3 = (char *)
                   FUN_00451fa0(param_1,param_3,*(int *)((intptr_t)this + n5 * 4 + 6),0,0xfe,-1
                               );
        }
        s4 = s4 + 1;
        *(char *)(*(int *)(param_2 + 4) + n5) = (char)pu3;
      } while (s4 < *(short *)((intptr_t)this + 4));
    }
    return (uint)pu3 & 0xffffff00;
  }
  s4 = 0;
  if (0 < *(short *)((intptr_t)this + 4)) {
    do {
      u2 = CONCAT22((short)((uint)u2 >> 0x10),s4);
      n5 = (int)s4;
      s4 = s4 + 1;
      *(char *)(n5 + *(int *)(param_2 + 4)) = (char)s4;
    } while (s4 < *(short *)((intptr_t)this + 4));
  }
  return CONCAT31((unsigned int)((uint)u2 >> 8),1);
}


/* FUN_00452210 @ 0x00452210 */

/* FUN_00452210 @ 0x00452210
 * Struct types: TextDisplay (param_1) - offset 0x406 = field_406
 */
void __fastcall FUN_00452210(TextDisplay *param_1)
{
  char *pc1;

  pc1 = (char *)(intptr_t)param_1->field_406;
  if (pc1 != NULL) {
    thunk_FUN_0042f1c0(pc1);
    FUN_0046c410((uint)pc1);
  }
  param_1->field_406 = 0;
}


/* FUN_00452240 @ 0x00452240 */

int __thiscall FUN_00452240(void *this,void *param_1,int param_2)
{
    /* STUB: 11 lines not yet reconstructed */
    return 0;
}


/* FUN_00452290 @ 0x00452290 */

void FUN_00452290(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489000,u1,_arg3);
}


/* FUN_004522e0 @ 0x004522e0 */

void FUN_004522e0(void) { return; }


/* FUN_00452300 @ 0x00452300 */

/* NOTE: overlapping globals */

void FUN_00452300(void)
{
  _DAT_0048900e = 0;
  _DAT_0048900c = 0;
}


/* FUN_00452310 @ 0x00452310 */

void FUN_00452310(void)
{
  _atexit(FUN_00452320);
}


/* FUN_00452320 @ 0x00452320 */

void FUN_00452320(void) { return; }


/* FUN_00452340 @ 0x00452340 */

/* NOTE: overlapping globals */

void FUN_00452340(void)
{
  _DAT_0048900a = 0;
  _DAT_00489008 = 0;
}


/* FUN_00452350 @ 0x00452350 */

void FUN_00452350(void)
{
  _atexit(FUN_00452360);
}


/* FUN_00452360 @ 0x00452360 */

void FUN_00452360(void) { return; }


/* FUN_00452370 @ 0x00452370 */

char * __fastcall FUN_00452370(char *param_1)
{
    /* STUB: 110 lines not yet reconstructed */
    return 0;
}


/* FUN_004524e0 @ 0x004524e0 */

void __fastcall FUN_004524e0(int param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00452525;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  ((UIWidget *)param_1)->animation_timer = 0;
  FUN_0045252f();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045252f @ 0x0045252f */

void FUN_0045252f(void)
{
  int _ebp;
  
  FUN_0040f520((int *)(*(int *)(_ebp + -0x10) + 0xf6)); /* UIWidget->level_data_ptr */
  return;
}


/* FUN_00452540 @ 0x00452540 */

void __fastcall FUN_00452540(int param_1)
{
  int n1;
  short u2;
  short u3;
  short *pu4;
  int *pu5;
  int n6;
  short s7;
  short s8;
  
  u2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  s8 = 0;
  do {
    n6 = (int)s8;
    s7 = 0;
    do {
      pu4 = (short *)(param_1 + (n6 + s7 * 6) * 2 + 0x48);
      u2 = *pu4;
      *pu4 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      s7 = s7 + 1;
    } while (s7 < 6);
    pu4 = (short *)(param_1 + 0xa0 + n6 * 2);
    n1 = param_1 + n6 * 2;
    u2 = *pu4;
    *pu4 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(n1 + 0xac);
    *(short *)(n1 + 0xac) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(n1 + 0xb8);
    *(short *)(n1 + 0xb8) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(n1 + 0xc4);
    *(short *)(n1 + 0xc4) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    n6 = param_1 + n6 * 4;
    pu5 = (int *)(n6 + 0xd0);
    u2 = *(short *)pu5;
    u3 = *(short *)(n6 + 0xd2);
    *pu5 = CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                       CONCAT11((char)u3,(char)((ushort)u3 >> 8)));
    u2 = *(short *)(n1 + 0x94);
    *(short *)(n1 + 0x94) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    s8 = s8 + 1;
  } while (s8 < 6);
  s8 = 0;
  do {
    s7 = 0;
    do {
      pu4 = (short *)(param_1 + ((int)s7 + s8 * 6) * 2 + 0x48);
      u2 = *pu4;
      *pu4 = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
      s7 = s7 + 1;
    } while (s7 < 6);
    s8 = s8 + 1;
  } while (s8 < 6);
  u2 = *(short *)(param_1 + 0xe8);
  *(short *)(param_1 + 0xe8) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0x92);
  *(short *)(param_1 + 0x92) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xea);
  *(short *)(param_1 + 0xea) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xec);
  *(short *)(param_1 + 0xec) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xf0);
  *(short *)(param_1 + 0xf0) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  u2 = *(short *)(param_1 + 0xee);
  *(short *)(param_1 + 0xee) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
}


/* FUN_00452710 @ 0x00452710 */

void FUN_00452710(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489010,u1,_arg3);
}


/* FUN_00452760 @ 0x00452760 */

void FUN_00452760(void) { return; }


/* FUN_00452780 @ 0x00452780 */

/* NOTE: overlapping globals */

void FUN_00452780(void)
{
  _DAT_0048901e = 0;
  _DAT_0048901c = 0;
}


/* FUN_00452790 @ 0x00452790 */

void FUN_00452790(void)
{
  _atexit(FUN_004527a0);
}


/* FUN_004527a0 @ 0x004527a0 */

void FUN_004527a0(void) { return; }


/* FUN_004527c0 @ 0x004527c0 */

/* NOTE: overlapping globals */

void FUN_004527c0(void)
{
  _DAT_0048901a = 0;
  _DAT_00489018 = 0;
}


/* FUN_004527d0 @ 0x004527d0 */

void FUN_004527d0(void)
{
  _atexit(FUN_004527e0);
}


/* FUN_004527e0 @ 0x004527e0 */

void FUN_004527e0(void) { return; }


/* FUN_004527f0 @ 0x004527f0 */

int __cdecl FUN_004527f0(char *param_1)
{
  HANDLE hObject;
  BOOL flag1;
  
  if (*param_1 == '?') {
    FUN_00455170(param_1,0xff,NULL);
  }
  hObject = CreateFileA(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x10000000,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0xffffff00;
  }
  flag1 = CloseHandle(hObject);
  return CONCAT31((unsigned int)((uint)flag1 >> 8),1);
}


/* FUN_00452840 @ 0x00452840 */

void __cdecl FUN_00452840(LPCSTR param_1)
{
  DeleteFileA(param_1);
}


/* FUN_00452850 @ 0x00452850 */

HANDLE __cdecl FUN_00452850(char *param_1,int param_2,int param_3)
{
  HANDLE pv1;
  
  if (*param_1 == '?') {
    FUN_00455090(param_1,0xff,NULL);
  }
  pv1 = CreateFileA(param_1,(-(uint)(param_3 == 1) & 0xc0000000) + 0xc0000000,1,
                       (LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,(HANDLE)0x0);
  if (pv1 == (HANDLE)0xffffffff) {
    GetLastError();
    pv1 = (HANDLE)0x0;
  }
  return pv1;
}


/* FUN_004528b0 @ 0x004528b0 */

void __cdecl FUN_004528b0(HANDLE param_1)
{
  FUN_004178e0(param_1,0);
}


/* FUN_004528c0 @ 0x004528c0 */

DWORD __cdecl FUN_004528c0(HANDLE param_1)
{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = FUN_00417890(param_1);
  DVar2 = GetFileSize(param_1,(LPDWORD)0x0);
  FUN_004178e0(param_1,DVar1);
  return DVar2;
}


/* FUN_004528f0 @ 0x004528f0 */

void __cdecl FUN_004528f0(HANDLE param_1,DWORD param_2)
{
  int u1;
  
  u1 = FUN_004178b0(param_1,param_2);
  if ((char)u1 == '\x01') {
    SetEndOfFile(param_1);
  }
  return;
}


/* FUN_00452910 @ 0x00452910 */

int __cdecl FUN_00452910(char *param_1)
{
    /* STUB: 17 lines not yet reconstructed */
    return 0;
}


/* FUN_00452970 @ 0x00452970 */

int __cdecl FUN_00452970(HANDLE param_1,DWORD param_2,LPCVOID param_3)
{
  BOOL flag1;
  DWORD v4;
  
  v4 = param_2;
  flag1 = WriteFile(param_1,param_3,param_2,&v4,(LPOVERLAPPED)0x0);
  if (flag1 == 0) {
    return 0;
  }
  return CONCAT31(v4 - param_2 >> 8,v4 - param_2 == 0);
}


/* FUN_004529c0 @ 0x004529c0 */

uint __cdecl FUN_004529c0(HANDLE param_1)
{
  BOOL flag1;
  DWORD DVar2;
  
  FlushFileBuffers(param_1);
  flag1 = CloseHandle(param_1);
  if (flag1 == 0) {
    DVar2 = GetLastError();
    return DVar2 & 0xffffff00;
  }
  return CONCAT31((unsigned int)((uint)flag1 >> 8),1);
}


/* FUN_004529f0 @ 0x004529f0 */

int __cdecl FUN_004529f0(char *param_1,int param_2)
{
  HANDLE pv1;
  int u2;
  
  pv1 = FUN_00452850(param_1,0,param_2);
  if (pv1 == (HANDLE)0x0) {
    return 0;
  }
  u2 = FUN_004529c0(pv1);
  return CONCAT31((unsigned int)((uint)u2 >> 8),1);
}


/* FUN_00452a30 @ 0x00452a30 */

void FUN_00452a30(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489020,u1,_arg3);
}


/* FUN_00452a80 @ 0x00452a80 */

void FUN_00452a80(void) { return; }


/* FUN_00452aa0 @ 0x00452aa0 */

/* NOTE: overlapping globals */

void FUN_00452aa0(void)
{
  _DAT_0048902e = 0;
  _DAT_0048902c = 0;
}


/* FUN_00452ab0 @ 0x00452ab0 */

void FUN_00452ab0(void)
{
  _atexit(FUN_00452ac0);
}


/* FUN_00452ac0 @ 0x00452ac0 */

void FUN_00452ac0(void) { return; }


/* FUN_00452ae0 @ 0x00452ae0 */

/* NOTE: overlapping globals */

void FUN_00452ae0(void)
{
  _DAT_0048902a = 0;
  _DAT_00489028 = 0;
}


/* FUN_00452af0 @ 0x00452af0 */

void FUN_00452af0(void)
{
  _atexit(FUN_00452b00);
}


/* FUN_00452b00 @ 0x00452b00 */

void FUN_00452b00(void) { return; }


/* FUN_00452b20 @ 0x00452b20 */

void FUN_00452b20(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489030,u1,_arg3);
}


/* FUN_00452b60 @ 0x00452b60 */

void FUN_00452b60(void)
{
  _atexit(FUN_00452b70);
}


/* FUN_00452b70 @ 0x00452b70 */

void FUN_00452b70(void) { return; }


/* FUN_00452b90 @ 0x00452b90 */

/* NOTE: overlapping globals */

void FUN_00452b90(void)
{
  _DAT_0048903e = 0;
  _DAT_0048903c = 0;
}


/* FUN_00452ba0 @ 0x00452ba0 */

void FUN_00452ba0(void)
{
  _atexit(FUN_00452bb0);
}


/* FUN_00452bb0 @ 0x00452bb0 */

void FUN_00452bb0(void) { return; }


/* FUN_00452bd0 @ 0x00452bd0 */

/* NOTE: overlapping globals */

void FUN_00452bd0(void)
{
  _DAT_0048903a = 0;
  _DAT_00489038 = 0;
}


/* FUN_00452be0 @ 0x00452be0 */

void FUN_00452be0(void)
{
  _atexit(FUN_00452bf0);
}


/* FUN_00452bf0 @ 0x00452bf0 */

void FUN_00452bf0(void) { return; }


/* FUN_00452c10 @ 0x00452c10 */

void FUN_00452c10(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489040,u1,_arg3);
}


/* FUN_00452c50 @ 0x00452c50 */

void FUN_00452c50(void)
{
  _atexit(FUN_00452c60);
}


/* FUN_00452c60 @ 0x00452c60 */

void FUN_00452c60(void) { return; }


/* FUN_00452c80 @ 0x00452c80 */

/* NOTE: overlapping globals */

void FUN_00452c80(void)
{
  _DAT_0048904e = 0;
  _DAT_0048904c = 0;
}


/* FUN_00452c90 @ 0x00452c90 */

void FUN_00452c90(void)
{
  _atexit(FUN_00452ca0);
}


/* FUN_00452ca0 @ 0x00452ca0 */

void FUN_00452ca0(void) { return; }


/* FUN_00452cc0 @ 0x00452cc0 */

/* NOTE: overlapping globals */

void FUN_00452cc0(void)
{
  _DAT_0048904a = 0;
  _DAT_00489048 = 0;
}


/* FUN_00452cd0 @ 0x00452cd0 */

void FUN_00452cd0(void)
{
  _atexit(FUN_00452ce0);
}


/* FUN_00452ce0 @ 0x00452ce0 */

void FUN_00452ce0(void) { return; }


/* FUN_00452cf0 @ 0x00452cf0 */

int * __thiscall FUN_00452cf0(void *this,char *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00452d5c;
  *_fs = &_seh_prev;
  FUN_0041b6c0(this);
  _seh_state = 0;
  *(void ***)this = &PTR_FUN_00476258;
  FUN_0041da90(this,1);
  *(int *)((intptr_t)this + 0x42) = 0; /* UIElement._pad42 - TODO: identify field */
  if (param_1 != NULL) {
    FUN_00452e00(this,param_1);
  }
  *_fs = _seh_prev;
  return this;
}


/* FUN_00452d70 @ 0x00452d70 */

int * __thiscall FUN_00452d70(void *this,byte param_1)
{
  FUN_00452d90(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00452d90 @ 0x00452d90 */

void __fastcall FUN_00452d90(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00452de1;
  *param_1 = &PTR_FUN_00476258;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (*(uint *)((int)param_1 + 0x42) != 0) { /* UIElement._pad42 - TODO: identify field */
    FUN_0046f5f0(*(uint *)((int)param_1 + 0x42));  /* TODO: offset 0x42, UIElement._pad42 area */
  }
  _seh_state = 0xffffffff;
  FUN_00452deb();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00452deb @ 0x00452deb */

void FUN_00452deb(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_00452e00 @ 0x00452e00 */

void __thiscall FUN_00452e00(void *this,char *param_1)
{
    /* STUB: 52 lines not yet reconstructed */
    return;
}


/* FUN_00452e80 @ 0x00452e80 */

void __fastcall FUN_00452e80(void *param_1)
{
    /* STUB: 50 lines not yet reconstructed */
    return;
}


/* FUN_00452f90 @ 0x00452f90 */

void __fastcall FUN_00452f90(int *param_1)
{
  int u1;
  int _arg2;
  char c2;
  
  if (*(char *)(DAT_004896b0 + 0x27) == '\0') {
    c2 = '\x01';
    u1 = 0xfffffffe;
    FUN_00401050(&_tmp_42,-2);
    FUN_00401050(&_tmp_41,0);
    FUN_0041d3a0(param_1,u1,_arg2,c2);
    if ((*(short *)((int)param_1 + 0x22) < 0) && (param_1 != NULL)) { /* TODO: offset 0x22 = UIElement->rect_bottom if param_1 is UIElement */
      ((void (*)(void))((void **)(*param_1))[1])(); /* param_1->vtable[1] */
    }
  }
  return;
}


/* FUN_004530b0 @ 0x004530b0 */

void FUN_004530b0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489050,u1,_arg3);
}


/* FUN_00453100 @ 0x00453100 */

void FUN_00453100(void) { return; }


/* FUN_00453130 @ 0x00453130 */

void __fastcall FUN_00453130(void *param_1)
{
    /* STUB: 56 lines not yet reconstructed */
    return;
}


/* FUN_00453280 @ 0x00453280 */

/* NOTE: overlapping globals */

void FUN_00453280(void)
{
  _DAT_0048905e = 0;
  _DAT_0048905c = 0;
}


/* FUN_00453290 @ 0x00453290 */

void FUN_00453290(void)
{
  _atexit(FUN_004532a0);
}


/* FUN_004532a0 @ 0x004532a0 */

void FUN_004532a0(void) { return; }


/* FUN_00453386 @ 0x00453386 */

void FUN_00453386(void) { return; }


/* FUN_004533a0 @ 0x004533a0 */

/* NOTE: overlapping globals */

void FUN_004533a0(void)
{
  _DAT_0048905a = 0;
  _DAT_00489058 = 0;
}


/* FUN_004533b0 @ 0x004533b0 */

void FUN_004533b0(void)
{
  _atexit(FUN_004533c0);
}


/* FUN_004533c0 @ 0x004533c0 */

void FUN_004533c0(void) { return; }


/* FUN_004533e0 @ 0x004533e0 */

short __fastcall FUN_004533e0(short *param_1)
{
  return param_1[2] - *param_1;
}


/* FUN_00453400 @ 0x00453400 */

void FUN_00453400(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489060,u1,_arg3);
}


/* FUN_00453450 @ 0x00453450 */

void FUN_00453450(void) { return; }


/* FUN_00453470 @ 0x00453470 */

/* NOTE: overlapping globals */

void FUN_00453470(void)
{
  _DAT_0048906e = 0;
  _DAT_0048906c = 0;
}


/* FUN_00453480 @ 0x00453480 */

void FUN_00453480(void)
{
  _atexit(FUN_00453490);
}


/* FUN_00453490 @ 0x00453490 */

void FUN_00453490(void) { return; }


/* FUN_004534b0 @ 0x004534b0 */

/* NOTE: overlapping globals */

void FUN_004534b0(void)
{
  _DAT_0048906a = 0;
  _DAT_00489068 = 0;
}


/* FUN_004534c0 @ 0x004534c0 */

void FUN_004534c0(void)
{
  _atexit(FUN_004534d0);
}


/* FUN_004534d0 @ 0x004534d0 */

void FUN_004534d0(void) { return; }


/* FUN_004534e0 @ 0x004534e0 */

int * __fastcall FUN_004534e0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00453534;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_004762f8;
  FUN_0041da90(param_1,0);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004535a9 @ 0x004535a9 */

void FUN_004535a9(void)
{
  FUN_004012a0();
}


/* FUN_004535c0 @ 0x004535c0 */

void __fastcall FUN_004535c0(void *param_1)
{
  FUN_0041dad0(param_1,0,'\0');
}


/* FUN_004535d0 @ 0x004535d0 */

int * __fastcall FUN_004535d0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045363e;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  *param_1 = &PTR_FUN_00473740;
  _seh_state = 1;
  ((UIWidget *)param_1)->flags = ((UIWidget *)param_1)->flags & 0xffffefff;
  *param_1 = &PTR_FUN_004763a0;
  FUN_004535c0(param_1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004536a9 @ 0x004536a9 */

void FUN_004536a9(void)
{
  FUN_00428020();
}


/* FUN_004536c0 @ 0x004536c0 */

int * __fastcall FUN_004536c0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00453729;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00476448;
  FUN_0041da90(param_1,1);
  ((UIWidget *)param_1)->anim_flag_2 = 1;
  ((UIWidget *)param_1)->anim_flag_1 = 0;
  ((UIWidget *)param_1)->anim_flag_3 = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00453799 @ 0x00453799 */

void FUN_00453799(void)
{
  FUN_004012a0();
}


/* FUN_004537b0 @ 0x004537b0 */

int * __fastcall FUN_004537b0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045380e;
  *_fs = &_seh_prev;
  FUN_00453b00(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_004764f0;
  FUN_0041da90(param_1,1);
  ((UIWidget *)param_1)->animation_timer = 1;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00453879 @ 0x00453879 */

void FUN_00453879(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004538c7;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004538d1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004538d1 @ 0x004538d1 */

void FUN_004538d1(void)
{
  FUN_004012a0();
}


/* FUN_00453960 @ 0x00453960 */

int * __fastcall FUN_00453960(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004539bf;
  *_fs = &_seh_prev;
  FUN_00454b80(param_1,0);
  _seh_state = 0;
  *(short *)((int)param_1 + 0x11c) = 0; /* byte offset 0x11C, TODO: identify struct field */
  *param_1 = &PTR_FUN_00476598;
  FUN_0041da90(param_1,1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00453a39 @ 0x00453a39 */

void FUN_00453a39(void)
{
  FUN_0042d080();
}


/* FUN_00453b00 @ 0x00453b00 */

int * __fastcall FUN_00453b00(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00453b5e;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  _seh_state = 0;
  ((UIWidget *)param_1)->animation_timer = 4;
  *param_1 = &PTR_FUN_00476648;
  FUN_0041da90(param_1,0);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00453bc9 @ 0x00453bc9 */

void FUN_00453bc9(void)
{
  FUN_004012a0();
}


/* FUN_00453e87 @ 0x00453e87 */

void FUN_00453e87(void) { return; }


/* FUN_00453e8f @ 0x00453e8f */

void FUN_00453e8f(void) { return; }


/* FUN_00453e97 @ 0x00453e97 */

void FUN_00453e97(void) { return; }


/* FUN_00453ea9 @ 0x00453ea9 */

void FUN_00453ea9(void) { return; }


/* FUN_00453ed0 @ 0x00453ed0 */

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


/* FUN_00453f30 @ 0x00453f30 */

int * __fastcall FUN_00453f30(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00453fb5;
  *_fs = &_seh_prev;
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
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00454029 @ 0x00454029 */

void FUN_00454029(void)
{
  FUN_004012a0();
}


/* FUN_00454040 @ 0x00454040 */

void __fastcall FUN_00454040(int *param_1)
{
  DWORD DVar1;
  int n2;
  
  if ((char)((GameWidget *)param_1)->field_118 == '\0') {
    FUN_00405cb0(param_1);
    return;
  }
  if ((*(char *)(DAT_004896b0 + 0x28) == '\0') && (*(char *)((int)param_1 + 0x12c) == '\0')) { /* TODO: offset 0x12C on GameWidget */
    DVar1 = GetTickCount();
    n2 = ((int)(((longlong)(int)DVar1 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
            ((GameWidget *)param_1)->pair_x_1) / 0x3c;
    if (n2 != ((GameWidget *)param_1)->pair_y_1) {
      ((GameWidget *)param_1)->pair_y_1 = n2;
      if ((char)((GameWidget *)param_1)->scrollbar_ref == '\0') {
        n2 = ((GameWidget *)param_1)->pair_x_2 - n2;
      }
      FUN_004058c0(param_1,(short)n2 + 1);
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


/* FUN_00454100 @ 0x00454100 */

void FUN_00454100(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489070,u1,_arg3);
}


/* FUN_00454150 @ 0x00454150 */

void FUN_00454150(void) { return; }


/* FUN_00454170 @ 0x00454170 */

/* NOTE: overlapping globals */

void FUN_00454170(void)
{
  _DAT_0048907e = 0;
  _DAT_0048907c = 0;
}


/* FUN_00454180 @ 0x00454180 */

void FUN_00454180(void)
{
  _atexit(FUN_00454190);
}


/* FUN_00454190 @ 0x00454190 */

void FUN_00454190(void) { return; }


/* FUN_004541a0 @ 0x004541a0 */

int * __fastcall FUN_004541a0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004541f5;
  *_fs = &_seh_prev;
  FUN_00434860(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00476798;
  *(int *)((int)param_1 + 0x6a) = 0; /* TODO: unknown offset 0x6A, possibly custom struct */
  FUN_0041da90(param_1,1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00454269 @ 0x00454269 */

void FUN_00454269(void)
{
  FUN_00403500();
}


/* FUN_00454280 @ 0x00454280 */

void __fastcall FUN_00454280(void *param_1)
{
  DWORD DVar1;
  int n2;
  
  n2 = (DAT_004890a4 >> 1) * DAT_00489084;
  DVar1 = GetTickCount();
  if ((uint)(*(int *)((int)param_1 + 0x6a) + n2) < DVar1) { /* TODO: offset 0x6A, custom struct timestamp */
    *(DWORD *)((int)param_1 + 0x6a) = DVar1; /* TODO: offset 0x6A */
    FUN_0041dad0(param_1,~(byte)(((UIWidget *)param_1)->flags >> 6) & 1,'\0');
  }
  return;
}


/* FUN_004542d0 @ 0x004542d0 */

/* NOTE: overlapping globals */

void FUN_004542d0(void)
{
  _DAT_0048907a = 0;
  _DAT_00489078 = 0;
}


/* FUN_004542e0 @ 0x004542e0 */

void FUN_004542e0(void)
{
  _atexit(FUN_004542f0);
}


/* FUN_004542f0 @ 0x004542f0 */

void FUN_004542f0(void) { return; }


/* FUN_00454300 @ 0x00454300 */

int * __fastcall FUN_00454300(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045435c;
  *_fs = &_seh_prev;
  FUN_004052b0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00476828;
  ((UIWidget *)param_1)->is_interactive = 0;
  *(unsigned char *)&((GameWidget *)param_1)->field_118 = 0; /* low byte of field_118 */
  FUN_0041dd40(param_1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_004543c9 @ 0x004543c9 */

void FUN_004543c9(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_004544f6 @ 0x004544f6 */

void FUN_004544f6(void) { return; }


/* FUN_00454520 @ 0x00454520 */

int * __fastcall FUN_00454520(void *param_1)
{
    /* STUB: 39 lines not yet reconstructed */
    return 0;
}


/* FUN_00454634 @ 0x00454634 */

void FUN_00454634(void) { return; }


/* FUN_00454660 @ 0x00454660 */

void __fastcall FUN_00454660(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  uint _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_004546c8;
  *param_1 = &PTR_FUN_00473898;
  *_fs = &_seh_prev;
  _seh_state = 1;
  FUN_0041d780(param_1 + 0x48,NULL);
  _seh_state = _seh_state & 0xffffff00;
  FUN_004546ba();
  _seh_state = 0xffffffff;
  FUN_004546d2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004546ba @ 0x004546ba */

void FUN_004546ba(void)
{
  FUN_00428070();
}


/* FUN_004546d2 @ 0x004546d2 */

void FUN_004546d2(void)
{
  FUN_00428020();
}


/* FUN_004546e0 @ 0x004546e0 */

void __fastcall FUN_004546e0(int *param_1)
{
  FUN_0041d780(param_1 + 0x48,NULL);
  FUN_00405570(param_1);
}


/* FUN_00454839 @ 0x00454839 */

void FUN_00454839(void) { return; }


/* FUN_00454971 @ 0x00454971 */

void FUN_00454971(void) { return; }


/* FUN_00454990 @ 0x00454990 */

int * __fastcall FUN_00454990(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004549e4;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_004768c8;
  FUN_0041da90(param_1,0);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00454a59 @ 0x00454a59 */

void FUN_00454a59(void)
{
  FUN_004012a0();
}


/* FUN_00454a70 @ 0x00454a70 */

int * __thiscall FUN_00454a70(void *this,int param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00454ac6;
  *_fs = &_seh_prev;
  FUN_0044e3f0(this);
  *(void ***)this = &PTR_FUN_00476970;
  *(int *)((intptr_t)this + 0x118) = param_1; /* GameWidget->field_118 area (4-byte write spanning field_118 + pair_x_1) */
  *_fs = _seh_prev;
  return this;
}


/* FUN_00454ae0 @ 0x00454ae0 */

int * __thiscall FUN_00454ae0(void *this,byte param_1)
{
  FUN_00454b00(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00454b00 @ 0x00454b00 */

void __fastcall FUN_00454b00(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00454b3d;
  *param_1 = &PTR_FUN_00476970;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00454b47();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00454b47 @ 0x00454b47 */

void FUN_00454b47(void)
{
  FUN_004012a0();
}


/* FUN_00454b80 @ 0x00454b80 */

int * __thiscall FUN_00454b80(void *this,int param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00454bd1;
  *_fs = &_seh_prev;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00476a20;
  *_fs = _seh_prev;
  return this;
}


/* FUN_00454c49 @ 0x00454c49 */

void FUN_00454c49(void)
{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
}


/* FUN_00454c90 @ 0x00454c90 */

int * __thiscall FUN_00454c90(void *this,int param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00454ce1;
  *_fs = &_seh_prev;
  FUN_00454a70(this,param_1);
  *(void ***)this = &PTR_FUN_00476ad0;
  *_fs = _seh_prev;
  return this;
}


/* FUN_00454d59 @ 0x00454d59 */

void FUN_00454d59(void)
{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
}


/* FUN_00454da0 @ 0x00454da0 */

int * __fastcall FUN_00454da0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00454e0d;
  *_fs = &_seh_prev;
  FUN_004534e0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00476b80;
  FUN_0041da90(param_1,0);
  ((UIWidget *)param_1)->is_interactive = 1;
  FUN_0041dad0(param_1,0,'\0');
  ((UIWidget *)param_1)->type_or_mode = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00454e79 @ 0x00454e79 */

void FUN_00454e79(void)
{
  FUN_00427c00();
}


/* FUN_00454ea0 @ 0x00454ea0 */

void __thiscall FUN_00454ea0(SoundPlayer *this,short param_1)
{
  if (*(void **)(DAT_004897c0 + 0x52) != NULL) {
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


/* FUN_00454f00 @ 0x00454f00 */

void __cdecl FUN_00454f00(LPCSTR param_1,LPCSTR param_2,char *param_3,char *param_4)
{
  byte b1;
  int n2;
  UINT UVar3;
  UINT UVar4;
  UINT UVar5;
  byte *pb6;
  byte *pb7;
  char *pc8;
  bool b9;
  byte vc [12];
  
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
  GetPrivateProfileStringA(param_2,s_SPEED_00483320,&DAT_00483328,(LPSTR)vc,10,param_1);
  pb6 = vc;
  pb7 = &DAT_00483318;
  do {
    b1 = *pb6;
    b9 = b1 < *pb7;
    if (b1 != *pb7) {
L_00454fee:
      n2 = (1 - (uint)b9) - (uint)(b9 != 0);
      goto L_00454ff3;
    }
    if (b1 == 0) break;
    b1 = pb6[1];
    b9 = b1 < pb7[1];
    if (b1 != pb7[1]) goto L_00454fee;
    pb6 = pb6 + 2;
    pb7 = pb7 + 2;
  } while (b1 != 0);
  n2 = 0;
L_00454ff3:
  if (n2 == 0) {
    *param_3 = 1;
  }
  GetPrivateProfileStringA(param_2,&DAT_0048330c,s_SMALL_00483310,(LPSTR)vc,10,param_1);
  pb6 = vc;
  pc8 = s_LARGE_00483304;
  do {
    b1 = *pb6;
    b9 = b1 < (byte)*pc8;
    if (b1 != *pc8) {
L_00455039:
      n2 = (1 - (uint)b9) - (uint)(b9 != 0);
      goto L_0045503e;
    }
    if (b1 == 0) break;
    b1 = pb6[1];
    b9 = b1 < (byte)pc8[1];
    if (b1 != pc8[1]) goto L_00455039;
    pb6 = pb6 + 2;
    pc8 = pc8 + 2;
  } while (b1 != 0);
  n2 = 0;
L_0045503e:
  if (n2 == 0) {
    *param_4 = 1;
  }
  UVar3 = GetPrivateProfileIntA(param_2,s_TICKSPERSECOND_004832f4,0x3c,param_1);
  UVar4 = GetPrivateProfileIntA(param_2,s_IDLESPERSECOND_004832e4,0x14,param_1);
  UVar5 = GetPrivateProfileIntA(param_2,s_DRAWSPERSECOND_004832d4,0xc,param_1);
  FUN_00456510(UVar3,UVar4,UVar5);
}


/* FUN_00455090 @ 0x00455090 */

int __cdecl FUN_00455090(char *param_1,short param_2,char *param_3)
{
    /* STUB: 41 lines not yet reconstructed */
    return 0;
}


/* FUN_00455170 @ 0x00455170 */

int __cdecl FUN_00455170(char *param_1,short param_2,char *param_3)
{
    /* STUB: 54 lines not yet reconstructed */
    return 0;
}


/* FUN_00455280 @ 0x00455280 */

void __cdecl FUN_00455280(LPCSTR param_1,LPCSTR param_2)
{
  if ((DAT_004897c0 != NULL) && (((UIWidget *)DAT_004897c0)->field_06 != 0)) {
    FUN_0041da90(DAT_004897c0,0);
    MessageBoxA(*(HWND *)(((UIWidget *)DAT_004897c0)->field_06 + 0xe),param_1,param_2,0x1010); /* GameScreen->hwnd */
    SetFocus(*(HWND *)(((UIWidget *)DAT_004897c0)->field_06 + 0xe)); /* GameScreen->hwnd */
    FUN_0041da90(DAT_004897c0,1);
    return;
  }
  MessageBoxA((HWND)0x0,param_1,param_2,0x1010);
}


/* FUN_00455300 @ 0x00455300 */

void FUN_00455300(void)
{
  HDC hdc;
  DWORD DVar1;
  short s2;
  short s3;
  
  if (DAT_004832a4 == '\0') {
    hdc = GetDC((HWND)0x0);
    s2 = 0;
    do {
      s3 = s2 + 1;
      DVar1 = GetSysColor((&DAT_00483208)[s2]);
      (&DAT_004890b0)[s2] = DVar1;
      s2 = s3;
    } while (s3 < 0x13);
    SetSystemPaletteUse(hdc,2);
    SetSysColors(0x13,&DAT_00483208,(COLORREF *)&DAT_00483258);
    ReleaseDC((HWND)0x0,hdc);
    DAT_004832a4 = '\x01';
  }
  return;
}


/* FUN_00455380 @ 0x00455380 */

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


/* FUN_004553d0 @ 0x004553d0 */

void FUN_004553d0(void)
{
  HDC hdc;
  HPALETTE pHVar1;
  int n2;
  short s3;
  short s4;
  PALETTEENTRY *pPVar5;
  LOGPALETTE v404 [128];
  
  v404[0].palVersion = 0x300;
  v404[0].palNumEntries = 0x100;
  pPVar5 = v404[0].palPalEntry;
  for (n2 = 0x100; n2 != 0; n2 = n2 + -1) {
    pPVar5->peRed = '\0';
    pPVar5->peGreen = '\0';
    pPVar5->peBlue = '\0';
    pPVar5->peFlags = '\0';
    pPVar5 = pPVar5 + 1;
  }
  s3 = 0;
  do {
    s4 = s3 + 1;
    v404[0].palPalEntry[s3].peRed = '\0';
    v404[0].palPalEntry[s3].peGreen = '\0';
    v404[0].palPalEntry[s3].peBlue = '\0';
    v404[0].palPalEntry[s3].peFlags = '\x04';
    s3 = s4;
  } while (s4 < 0x100);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreatePalette(v404);
  if (pHVar1 != (HPALETTE)0x0) {
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    RealizePalette(hdc);
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    DeleteObject(pHVar1);
  }
  ReleaseDC((HWND)0x0,hdc);
}


/* FUN_00455470 @ 0x00455470 */

void FUN_00455470(void)
{
  if ((((DAT_004897c0 != 0) && (DAT_00489ac8 != 0)) && (*(char *)(DAT_00489ac8 + 0xc) == '\0')) && /* UIElement->parent_widget == NULL */
     (((UIWidget *)(intptr_t)DAT_004897c0)->field_06 != 0)) {
    FUN_00430ab0(((UIWidget *)(intptr_t)DAT_004897c0)->field_06);
    return;
  }
  return;
}


/* FUN_00455820 @ 0x00455820 */

uint FUN_00455820(void)
{
    /* STUB: 14 lines not yet reconstructed */
    return 0;
}


/* FUN_00455860 @ 0x00455860 */

uint __fastcall FUN_00455860(int param_1)
{
    /* STUB: 40 lines not yet reconstructed */
    return 0;
}


/* FUN_00455950 @ 0x00455950 */

void FUN_00455950(void) { return; }


/* FUN_00455960 @ 0x00455960 */

/* NOTE: Removing unreachable block (ram,0x004559d9) */

int * __fastcall FUN_00455960(int *param_1)
{
    /* STUB: 70 lines not yet reconstructed */
    return 0;
}


/* FUN_00455b10 @ 0x00455b10 */

void FUN_00455b10(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489090,u1,_arg3);
}


/* FUN_00455b60 @ 0x00455b60 */

void FUN_00455b60(void) { return; }


/* FUN_00455b70 @ 0x00455b70 */

int * __thiscall FUN_00455b70(void *this,byte param_1)
{
  FUN_00455c20(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00455ba0 @ 0x00455ba0 */

/* NOTE: overlapping globals */

void FUN_00455ba0(void)
{
  _DAT_004890ae = 0;
  _DAT_004890ac = 0;
}


/* FUN_00455bb0 @ 0x00455bb0 */

void FUN_00455bb0(void)
{
  _atexit(FUN_00455bc0);
}


/* FUN_00455bc0 @ 0x00455bc0 */

void FUN_00455bc0(void) { return; }


/* FUN_00455bd0 @ 0x00455bd0 */

void FUN_00455bd0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00455c07;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00455c11();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00455c11 @ 0x00455c11 */

void FUN_00455c11(void) { return; }


/* FUN_00455c20 @ 0x00455c20 */

void __fastcall FUN_00455c20(int *param_1)
{
    /* STUB: 27 lines not yet reconstructed */
    return;
}


/* FUN_00455ca3 @ 0x00455ca3 */

void FUN_00455ca3(void)
{
  FUN_00455bd0();
}


/* FUN_00455cae @ 0x00455cae */

void FUN_00455cae(void) { return; }


/* FUN_00455cb9 @ 0x00455cb9 */

void FUN_00455cb9(void) { return; }


/* FUN_00455cce @ 0x00455cce */

void FUN_00455cce(void) { return; }


/* FUN_00455ce0 @ 0x00455ce0 */

int FUN_00455ce0(void)
{
  HDC hdc;
  uint u1;
  int n2;
  int n3;
  
  n3 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    u1 = GetDeviceCaps(hdc,0x26);
    n2 = GetDeviceCaps(hdc,0xc);
    n3 = GetDeviceCaps(hdc,0xe);
    n3 = n3 * n2;
    ReleaseDC((HWND)0x0,hdc);
    if ((n3 == 8) && ((u1 & 0x100) == 0)) {
      n3 = -1;
    }
  }
  return n3;
}


/* FUN_00455d50 @ 0x00455d50 */

/* NOTE: overlapping globals */

void FUN_00455d50(void)
{
  _DAT_004890aa = 0;
  _DAT_004890a8 = 0;
}


/* FUN_00455d60 @ 0x00455d60 */

void FUN_00455d60(void)
{
  _atexit(FUN_00455d70);
}


/* FUN_00455d70 @ 0x00455d70 */

void FUN_00455d70(void) { return; }


/* FUN_00455d80 @ 0x00455d80 */

void FUN_00455d80(short *param_1)
{
    /* STUB: 13 lines not yet reconstructed */
    return;
}


/* FUN_00455dc0 @ 0x00455dc0 */

void __fastcall FUN_00455dc0(int param_1)
{
  if (*(char *)(param_1 + 0x45) == '\0') {
    *(char *)(param_1 + 0x45) = 1;
  }
  return;
}


/* FUN_00455dd0 @ 0x00455dd0 */

void __fastcall FUN_00455dd0(int param_1)
{
  if (*(char *)(param_1 + 0x45) != '\0') {
    *(char *)(param_1 + 0x45) = 0;
  }
  return;
}


/* FUN_00455de0 @ 0x00455de0 */

uint __cdecl FUN_00455de0(HWND param_1,uint param_2,int param_3,int param_4)
{
    /* STUB: 112 lines not yet reconstructed */
    return 0;
}


/* FUN_00456060 @ 0x00456060 */

uint FUN_00456060(void)
{
    /* STUB: 48 lines not yet reconstructed */
    return 0;
}


/* FUN_0045617f @ 0x0045617f */

void FUN_0045617f(void) { return; }


/* FUN_004561a0 @ 0x004561a0 */

uint __fastcall FUN_004561a0(int param_1)
{
    /* STUB: 8 lines not yet reconstructed */
    return 0;
}


/* FUN_004561d0 @ 0x004561d0 */

void __fastcall FUN_004561d0(int param_1)
{
  short s1;
  int *_fs;
  short v18[2];
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &DAT_004562f8;
  s1 = *(short *)(param_1 + 0x30);
  *_fs = &_seh_prev;
  v14 = param_1;
  if (s1 != 0x42) {
    if (s1 == 1) {
      DAT_004832c0 = (uint)(*(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x20)) < DAT_004832b8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x36);
      FUN_004096f0((void *)(param_1 + 0x10),v18,(short *)(param_1 + 0x3a));
      _seh_state = 0xffffffff;
      FUN_0045627b();
    }
    else if ((s1 == 2) &&
            ((uint)(*(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x14)) < DAT_004832bc)) {
      if (DAT_004832c0 == '\0') {
        *(short *)(param_1 + 0x30) = 0x41;
      }
      else {
        *(short *)(param_1 + 0x30) = 0x42;
        DAT_004832c0 = '\0';
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x36);
      FUN_004096f0((void *)(param_1 + 0x18),v18,(short *)(param_1 + 0x3a));
      _seh_state = 0xffffffff;
      FUN_004562e8();
    }
  }
  *(int *)(v14 + 0xc) = *(int *)(v14 + 0x36);
  FUN_004096f0((void *)(v14 + 0x1c),(short *)&v14,(short *)(v14 + 0x3a));
  _seh_state = 0xffffffff;
  FUN_004562f0();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045627b @ 0x0045627b */

void FUN_0045627b(void) { return; }


/* FUN_004562e8 @ 0x004562e8 */

void FUN_004562e8(void) { return; }


/* FUN_004562f0 @ 0x004562f0 */

void FUN_004562f0(void) { return; }


/* FUN_00456310 @ 0x00456310 */

char FUN_00456310(int param_1,char param_2,char param_3)
{
  bool b1;
  SHORT SVar2;
  SHORT SVar3;
  SHORT SVar4;
  DWORD DVar5;
  uint u6;
  int n7;
  
  b1 = false;
  DVar5 = GetTickCount();
  n7 = DAT_00489084 * param_1;
  u6 = GetTickCount();
  do {
    if (n7 + DVar5 <= u6) {
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
        if (b1) {
          return 1;
        }
      }
      else if (!b1) {
        b1 = true;
      }
    }
    u6 = GetTickCount();
  } while( true );
}


/* FUN_004563b0 @ 0x004563b0 */

void FUN_004563b0(int param_1,char param_2)
{
  FUN_00456310(param_1,'\0',param_2);
}


/* FUN_004563d0 @ 0x004563d0 */

int FUN_004563d0(int param_1)
{
    /* STUB: 13 lines not yet reconstructed */
    return 0;
}


/* FUN_00456410 @ 0x00456410 */

void FUN_00456410(int param_1,char *param_2)
{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_00456450 @ 0x00456450 */

void FUN_00456450(void)
{
    /* STUB: 13 lines not yet reconstructed */
    return;
}


/* FUN_004564c0 @ 0x004564c0 */

void FUN_004564c0(void)
{
  if (DAT_004897c0 != 0) {
    if ((*(void **)(DAT_004897c0 + 6) != NULL) && (*(char *)(DAT_004897c0 + 0x43) == '\0')) { /* UIWidget->field_06, offset 0x43 in _pad42 */
      FUN_00431160(*(void **)(DAT_004897c0 + 6),'\0'); /* UIWidget->field_06 */
    }
  }
  return;
}


/* FUN_004564f0 @ 0x004564f0 */

void __fastcall FUN_004564f0(int param_1)
{
  if ((DAT_004897c0 != 0) && (*(char *)(param_1 + 0x44) != '\0')) {
    FUN_004561a0(param_1);
  }
  return;
}


/* FUN_00456510 @ 0x00456510 */

/* NOTE: overlapping globals */

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
}


/* FUN_00456580 @ 0x00456580 */

bool __fastcall FUN_00456580(int param_1)
{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DAT_0048908c < DVar1 - *(int *)(param_1 + 8);
}


/* FUN_004565b0 @ 0x004565b0 */

void FUN_004565b0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489100,u1,_arg3);
}


/* FUN_00456600 @ 0x00456600 */

void FUN_00456600(void) { return; }


/* FUN_00456620 @ 0x00456620 */

/* NOTE: overlapping globals */

void FUN_00456620(void)
{
  _DAT_0048910e = 0;
  _DAT_0048910c = 0;
}


/* FUN_00456630 @ 0x00456630 */

void FUN_00456630(void)
{
  _atexit(FUN_00456640);
}


/* FUN_00456640 @ 0x00456640 */

void FUN_00456640(void) { return; }


/* FUN_00456660 @ 0x00456660 */

/* NOTE: overlapping globals */

void FUN_00456660(void)
{
  _DAT_0048910a = 0;
  _DAT_00489108 = 0;
}


/* FUN_00456670 @ 0x00456670 */

void FUN_00456670(void)
{
  _atexit(FUN_00456680);
}


/* FUN_00456680 @ 0x00456680 */

void FUN_00456680(void) { return; }


/* FUN_004566a0 @ 0x004566a0 */

void FUN_004566a0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489110,u1,_arg3);
}


/* FUN_004566e0 @ 0x004566e0 */

void FUN_004566e0(void)
{
  _atexit(FUN_004566f0);
}


/* FUN_004566f0 @ 0x004566f0 */

void FUN_004566f0(void) { return; }


/* FUN_00456710 @ 0x00456710 */

/* NOTE: overlapping globals */

void FUN_00456710(void)
{
  _DAT_0048911e = 0;
  _DAT_0048911c = 0;
}


/* FUN_00456720 @ 0x00456720 */

void FUN_00456720(void)
{
  _atexit(FUN_00456730);
}


/* FUN_00456730 @ 0x00456730 */

void FUN_00456730(void) { return; }


/* FUN_00456750 @ 0x00456750 */

/* NOTE: overlapping globals */

void FUN_00456750(void)
{
  _DAT_0048911a = 0;
  _DAT_00489118 = 0;
}


/* FUN_00456760 @ 0x00456760 */

void FUN_00456760(void)
{
  _atexit(FUN_00456770);
}


/* FUN_00456770 @ 0x00456770 */

void FUN_00456770(void) { return; }


/* FUN_00456790 @ 0x00456790 */

void FUN_00456790(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489120,u1,_arg3);
}


/* FUN_004567d0 @ 0x004567d0 */

void FUN_004567d0(void)
{
  _atexit(FUN_004567e0);
}


/* FUN_004567e0 @ 0x004567e0 */

void FUN_004567e0(void) { return; }


/* FUN_00456800 @ 0x00456800 */

/* NOTE: overlapping globals */

void FUN_00456800(void)
{
  _DAT_0048912e = 0;
  _DAT_0048912c = 0;
}


/* FUN_00456810 @ 0x00456810 */

void FUN_00456810(void)
{
  _atexit(FUN_00456820);
}


/* FUN_00456820 @ 0x00456820 */

void FUN_00456820(void) { return; }


/* FUN_00456840 @ 0x00456840 */

/* NOTE: overlapping globals */

void FUN_00456840(void)
{
  _DAT_0048912a = 0;
  _DAT_00489128 = 0;
}


/* FUN_00456850 @ 0x00456850 */

void FUN_00456850(void)
{
  _atexit(FUN_00456860);
}


/* FUN_00456860 @ 0x00456860 */

void FUN_00456860(void) { return; }


/* FUN_00456940 @ 0x00456940 */

void FUN_00456940(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489140,u1,_arg3);
}


/* FUN_00456980 @ 0x00456980 */

void FUN_00456980(void)
{
  _atexit(FUN_00456990);
}


/* FUN_00456990 @ 0x00456990 */

void FUN_00456990(void) { return; }


/* FUN_004569b0 @ 0x004569b0 */

/* NOTE: overlapping globals */

void FUN_004569b0(void)
{
  _DAT_00489156 = 0;
  _DAT_00489154 = 0;
}


/* FUN_004569c0 @ 0x004569c0 */

void FUN_004569c0(void)
{
  _atexit(FUN_004569d0);
}


/* FUN_004569d0 @ 0x004569d0 */

void FUN_004569d0(void) { return; }


/* FUN_004569f0 @ 0x004569f0 */

/* NOTE: overlapping globals */

void FUN_004569f0(void)
{
  _DAT_00489152 = 0;
  _DAT_00489150 = 0;
}


/* FUN_00456a00 @ 0x00456a00 */

void FUN_00456a00(void)
{
  _atexit(FUN_00456a10);
}


/* FUN_00456a10 @ 0x00456a10 */

void FUN_00456a10(void) { return; }


/* FUN_00456a30 @ 0x00456a30 */

void FUN_00456a30(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489160,u1,_arg3);
}


/* FUN_00456a70 @ 0x00456a70 */

void FUN_00456a70(void)
{
  _atexit(FUN_00456a80);
}


/* FUN_00456a80 @ 0x00456a80 */

void FUN_00456a80(void) { return; }


/* FUN_00456aa0 @ 0x00456aa0 */

/* NOTE: overlapping globals */

void FUN_00456aa0(void)
{
  _DAT_00489172 = 0;
  _DAT_00489170 = 0;
}


/* FUN_00456ab0 @ 0x00456ab0 */

void FUN_00456ab0(void)
{
  _atexit(FUN_00456ac0);
}


/* FUN_00456ac0 @ 0x00456ac0 */

void FUN_00456ac0(void) { return; }


/* FUN_00456ae0 @ 0x00456ae0 */

/* NOTE: overlapping globals */

void FUN_00456ae0(void)
{
  _DAT_0048916e = 0;
  _DAT_0048916c = 0;
}


/* FUN_00456af0 @ 0x00456af0 */

void FUN_00456af0(void)
{
  _atexit(FUN_00456b00);
}


/* FUN_00456b00 @ 0x00456b00 */

void FUN_00456b00(void) { return; }


/* FUN_00456b80 @ 0x00456b80 */

int * __fastcall FUN_00456b80(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00456bcd;
  *_fs = &_seh_prev;
  FUN_00454a70(param_1,0);
  *param_1 = &PTR_FUN_00476c58;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00456be0 @ 0x00456be0 */

int * __thiscall FUN_00456be0(void *this,byte param_1)
{
  FUN_00456c00(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00456c00 @ 0x00456c00 */

void __fastcall FUN_00456c00(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00456c3d;
  *param_1 = &PTR_FUN_00476c58;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00456c47();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00456c47 @ 0x00456c47 */

void FUN_00456c47(void)
{
  int _ebp;
  
  FUN_00454b00(*(int **)(_ebp + -0x10));
}


/* FUN_00456ce0 @ 0x00456ce0 */

/* FUN_00456ce0 @ 0x00456ce0
 * Struct types: TextDisplay (this) - offset 0x11c = field_11c
 */
void __thiscall FUN_00456ce0(TextDisplay *this,short param_1)
{
  this->field_11c = param_1;
}


/* FUN_00456cf0 @ 0x00456cf0 */

int * __thiscall
FUN_00456cf0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00456d55;
  *_fs = &_seh_prev;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  *(void ***)this = &PTR_FUN_00476d08;
  *_fs = _seh_prev;
  return this;
}


/* FUN_00456d70 @ 0x00456d70 */

int * __thiscall FUN_00456d70(void *this,byte param_1)
{
  FUN_00456d90(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00456d90 @ 0x00456d90 */

void __fastcall FUN_00456d90(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00456dd9;
  *param_1 = &PTR_FUN_00476d08;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00456df0();
  _seh_state = 0xffffffff;
  FUN_00456de3();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00456de3 @ 0x00456de3 */

void FUN_00456de3(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_00456df0 @ 0x00456df0 */

void FUN_00456df0(void)
{
    /* STUB: 20 lines not yet reconstructed */
    return;
}


/* FUN_00456e50 @ 0x00456e50 */

void __fastcall FUN_00456e50(int *param_1)
{
  FUN_00456df0();
  FUN_0042bec0(param_1);
}


/* FUN_00457331 @ 0x00457331 */

void FUN_00457331(void) { return; }


/* FUN_00457340 @ 0x00457340 */

void FUN_00457340(int param_1,short param_2)
{
    /* STUB: 21 lines not yet reconstructed */
    return;
}


/* FUN_004573a0 @ 0x004573a0 */

void FUN_004573a0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489178,u1,_arg3);
}


/* FUN_004573f0 @ 0x004573f0 */

void FUN_004573f0(void) { return; }


/* FUN_00457410 @ 0x00457410 */

/* NOTE: overlapping globals */

void FUN_00457410(void)
{
  _DAT_00489186 = 0;
  _DAT_00489184 = 0;
}


/* FUN_00457420 @ 0x00457420 */

void FUN_00457420(void)
{
  _atexit(FUN_00457430);
}


/* FUN_00457430 @ 0x00457430 */

void FUN_00457430(void) { return; }


/* FUN_00457450 @ 0x00457450 */

/* NOTE: overlapping globals */

void FUN_00457450(void)
{
  _DAT_00489182 = 0;
  _DAT_00489180 = 0;
}


/* FUN_00457460 @ 0x00457460 */

void FUN_00457460(void)
{
  _atexit(FUN_00457470);
}


/* FUN_00457470 @ 0x00457470 */

void FUN_00457470(void) { return; }


/* FUN_00457490 @ 0x00457490 */

void FUN_00457490(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489188,u1,_arg3);
}


/* FUN_004574d0 @ 0x004574d0 */

void FUN_004574d0(void)
{
  _atexit(FUN_004574e0);
}


/* FUN_004574e0 @ 0x004574e0 */

void FUN_004574e0(void) { return; }


/* FUN_00457500 @ 0x00457500 */

/* NOTE: overlapping globals */

void FUN_00457500(void)
{
  _DAT_00489196 = 0;
  _DAT_00489194 = 0;
}


/* FUN_00457510 @ 0x00457510 */

void FUN_00457510(void)
{
  _atexit(FUN_00457520);
}


/* FUN_00457520 @ 0x00457520 */

void FUN_00457520(void) { return; }


/* FUN_00457540 @ 0x00457540 */

/* NOTE: overlapping globals */

void FUN_00457540(void)
{
  _DAT_00489192 = 0;
  _DAT_00489190 = 0;
}


/* FUN_00457550 @ 0x00457550 */

void FUN_00457550(void)
{
  _atexit(FUN_00457560);
}


/* FUN_00457560 @ 0x00457560 */

void FUN_00457560(void) { return; }


/* FUN_00457570 @ 0x00457570 */

int * __thiscall
FUN_00457570(TextDisplay *this,short param_1,short param_2,short param_3,int param_4,void *param_5,
            short param_6)
{
  short *ps1;
  int u2;
  int *_fs;
  int v10;
  void *_handler;
  int v8;
  
  /* SEH prolog */
  v10 = *_fs;
  v8 = 0xffffffff;
  _handler = &L_00457645;
  *_fs = &v10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  v8 = 0;
  *(void ***)this = &PTR_FUN_00476dd0;
  this->field_126 = param_1;
  ps1 = (short *)&this->field_128;
  if (param_6 == 0) {
    u2 = FUN_0040e580();
    *ps1 = (short)u2;
    param_6 = *(short *)(&DAT_004833b6 + (short)u2 * 2);
  }
  *ps1 = param_6;
  if (this->field_126 == 0x1dd) {
    if (*(short *)(DAT_0048345c + 0x92 + *ps1 * 2) != 6) goto L_0045762a;
  }
  else if (*(short *)(DAT_0048345c + 0x92 + *ps1 * 2) != 1) goto L_0045762a;
  FUN_0042c3f0(this);
L_0045762a:
  *_fs = v10;
  return this;
}


/* FUN_00457660 @ 0x00457660 */

int * __thiscall FUN_00457660(void *this,byte param_1)
{
  FUN_00457680(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00457680 @ 0x00457680 */

void __fastcall FUN_00457680(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_004576bd;
  *param_1 = &PTR_FUN_00476dd0;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004576c7();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004576c7 @ 0x004576c7 */

void FUN_004576c7(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_004577a0 @ 0x004577a0 */

void FUN_004577a0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489198,u1,_arg3);
}


/* FUN_004577f0 @ 0x004577f0 */

void FUN_004577f0(void) { return; }


/* FUN_00457820 @ 0x00457820 */

/* NOTE: overlapping globals */

void FUN_00457820(void)
{
  _DAT_004891a6 = 0;
  _DAT_004891a4 = 0;
}


/* FUN_00457830 @ 0x00457830 */

void FUN_00457830(void)
{
  _atexit(FUN_00457840);
}


/* FUN_00457840 @ 0x00457840 */

void FUN_00457840(void) { return; }


/* FUN_00457860 @ 0x00457860 */

/* NOTE: overlapping globals */

void FUN_00457860(void)
{
  _DAT_004891a2 = 0;
  _DAT_004891a0 = 0;
}


/* FUN_00457870 @ 0x00457870 */

void FUN_00457870(void)
{
  _atexit(FUN_00457880);
}


/* FUN_00457880 @ 0x00457880 */

void FUN_00457880(void) { return; }


/* FUN_004578a0 @ 0x004578a0 */

void FUN_004578a0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004891a8,u1,_arg3);
}


/* FUN_004578e0 @ 0x004578e0 */

void FUN_004578e0(void)
{
  _atexit(FUN_004578f0);
}


/* FUN_004578f0 @ 0x004578f0 */

void FUN_004578f0(void) { return; }


/* FUN_00457910 @ 0x00457910 */

/* NOTE: overlapping globals */

void FUN_00457910(void)
{
  _DAT_004891b6 = 0;
  _DAT_004891b4 = 0;
}


/* FUN_00457920 @ 0x00457920 */

void FUN_00457920(void)
{
  _atexit(FUN_00457930);
}


/* FUN_00457930 @ 0x00457930 */

void FUN_00457930(void) { return; }


/* FUN_00457950 @ 0x00457950 */

/* NOTE: overlapping globals */

void FUN_00457950(void)
{
  _DAT_004891b2 = 0;
  _DAT_004891b0 = 0;
}


/* FUN_00457960 @ 0x00457960 */

void FUN_00457960(void)
{
  _atexit(FUN_00457970);
}


/* FUN_00457970 @ 0x00457970 */

void FUN_00457970(void) { return; }


/* FUN_00457980 @ 0x00457980 */

void __cdecl FUN_00457980(short *param_1,char param_2)
{
  short u1;
  
  if (param_1 != NULL) {
    if (param_2 == '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
    u1 = param_1[1];
    param_1[1] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
    u1 = param_1[2];
    *(uint *)(param_1 + 2) =
         CONCAT22(CONCAT11((char)u1,(char)((ushort)u1 >> 8)),
                  CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8)));
    u1 = param_1[4];
    *(uint *)(param_1 + 4) =
         CONCAT22(CONCAT11((char)u1,(char)((ushort)u1 >> 8)),
                  CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8)));
    if (param_2 != '\0') {
      *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    }
  }
  return;
}


/* FUN_00457a10 @ 0x00457a10 */

ushort * __cdecl FUN_00457a10(void *param_1,int param_2)
{
    /* STUB: 47 lines not yet reconstructed */
    return 0;
}


/* FUN_00457b10 @ 0x00457b10 */

void __cdecl FUN_00457b10(int param_1,int param_2,uint param_3)
{
  void *pv1;
  
  if (param_3 != 0) {
    pv1 = *(void **)(param_3 + 0x10);
    if (pv1 != NULL) {
      _eh_vector_destructor_iterator_(pv1,8,*(int *)((int)pv1 - 4U),thunk_FUN_0042f1c0); /* TODO: MSVC array cookie at (pv1 - 4) */
      FUN_0046c410((int)pv1 - 4U);
    }
    FUN_0046f5f0(param_3);
  }
  return;
}


/* FUN_00457b60 @ 0x00457b60 */

void FUN_00457b60(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004891b8,u1,_arg3);
}


/* FUN_00457bb0 @ 0x00457bb0 */

void FUN_00457bb0(void) { return; }


/* FUN_00457bd0 @ 0x00457bd0 */

/* NOTE: overlapping globals */

void FUN_00457bd0(void)
{
  _DAT_004891c6 = 0;
  _DAT_004891c4 = 0;
}


/* FUN_00457be0 @ 0x00457be0 */

void FUN_00457be0(void)
{
  _atexit(FUN_00457bf0);
}


/* FUN_00457bf0 @ 0x00457bf0 */

void FUN_00457bf0(void) { return; }


/* FUN_00457c10 @ 0x00457c10 */

/* NOTE: overlapping globals */

void FUN_00457c10(void)
{
  _DAT_004891c2 = 0;
  _DAT_004891c0 = 0;
}


/* FUN_00457c20 @ 0x00457c20 */

void FUN_00457c20(void)
{
  _atexit(FUN_00457c30);
}


/* FUN_00457c30 @ 0x00457c30 */

void FUN_00457c30(void) { return; }


/* FUN_00457c50 @ 0x00457c50 */

/* NOTE: overlapping globals */

void FUN_00457c50(void)
{
  int u1;
  int *_fs;
  char v10[12];
  
  u1 = *_fs;
  DAT_00489214 = 0;
  _DAT_00489218 = 0;
  _DAT_0048921c = 0;
  *_fs = v10;
  _DAT_00489220 = 0xffffffff;
  DAT_00489224 = 0;
  _DAT_00489210 = &PTR_LAB_00472e00;
  _DAT_00489226 = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *_fs = u1;
}


/* FUN_00457ce0 @ 0x00457ce0 */

void FUN_00457ce0(void)
{
  _atexit(FUN_00457cf0);
}


/* FUN_00457cf0 @ 0x00457cf0 */

/* NOTE: overlapping globals */

void FUN_00457cf0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _DAT_00489210 = &PTR_LAB_00472e00;
  _seh_state = 0xffffffff;
  _handler = &L_00457d2c;
  *_fs = &_seh_prev;
  FUN_00457d36();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00457d36 @ 0x00457d36 */

void FUN_00457d36(void)
{
  FUN_00413810((int *)&DAT_00489210);
}


/* FUN_00457d50 @ 0x00457d50 */

/* NOTE: overlapping globals */

void FUN_00457d50(void)
{
  int u1;
  int *_fs;
  char v10[12];
  
  u1 = *_fs;
  _DAT_004891ec = 0;
  _DAT_004891f0 = 0;
  _DAT_004891f4 = 0;
  *_fs = v10;
  _DAT_004891f8 = 0xffffffff;
  DAT_004891fc = 0;
  _DAT_004891e8 = &PTR_LAB_00472e00;
  _DAT_004891fe = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *_fs = u1;
}


/* FUN_00457de0 @ 0x00457de0 */

void FUN_00457de0(void)
{
  _atexit(FUN_00457df0);
}


/* FUN_00457df0 @ 0x00457df0 */

/* NOTE: overlapping globals */

void FUN_00457df0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _DAT_004891e8 = &PTR_LAB_00472e00;
  _seh_state = 0xffffffff;
  _handler = &L_00457e2c;
  *_fs = &_seh_prev;
  FUN_00457e36();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00457e36 @ 0x00457e36 */

void FUN_00457e36(void)
{
  FUN_00413810((int *)&DAT_004891e8);
}


/* FUN_00457e50 @ 0x00457e50 */

/* NOTE: overlapping globals */

void FUN_00457e50(void)
{
  int u1;
  int *_fs;
  char v10[12];
  
  u1 = *_fs;
  DAT_00489234 = 0;
  _DAT_00489238 = 0;
  _DAT_0048923c = 0;
  *_fs = v10;
  _DAT_00489240 = 0xffffffff;
  DAT_00489244 = 0;
  _DAT_00489230 = &PTR_LAB_00472e00;
  _DAT_00489246 = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *_fs = u1;
}


/* FUN_00457ee0 @ 0x00457ee0 */

void FUN_00457ee0(void)
{
  _atexit(FUN_00457ef0);
}


/* FUN_00457ef0 @ 0x00457ef0 */

/* NOTE: overlapping globals */

void FUN_00457ef0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _DAT_00489230 = &PTR_LAB_00472e00;
  _seh_state = 0xffffffff;
  _handler = &L_00457f2c;
  *_fs = &_seh_prev;
  FUN_00457f36();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00457f36 @ 0x00457f36 */

void FUN_00457f36(void)
{
  FUN_00413810((int *)&DAT_00489230);
}


/* FUN_00457f50 @ 0x00457f50 */

/* NOTE: overlapping globals */

void FUN_00457f50(void)
{
  int u1;
  int *_fs;
  char v10[12];
  
  u1 = *_fs;
  DAT_004891cc = 0;
  DAT_004891d0 = 0;
  DAT_004891d4 = 0;
  *_fs = v10;
  _DAT_004891d8 = 0xffffffff;
  DAT_004891dc = 0;
  _DAT_004891c8 = &PTR_LAB_00472e00;
  _DAT_004891de = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *_fs = u1;
}


/* FUN_00457fe0 @ 0x00457fe0 */

void FUN_00457fe0(void)
{
  _atexit(FUN_00457ff0);
}


/* FUN_00457ff0 @ 0x00457ff0 */

/* NOTE: overlapping globals */

void FUN_00457ff0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _DAT_004891c8 = &PTR_LAB_00472e00;
  _seh_state = 0xffffffff;
  _handler = &L_0045802c;
  *_fs = &_seh_prev;
  FUN_00458036();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458036 @ 0x00458036 */

void FUN_00458036(void)
{
  FUN_00413810((int *)&DAT_004891c8);
}


/* FUN_00458040 @ 0x00458040 */

int * __fastcall FUN_00458040(int *param_1)
{
    /* STUB: 49 lines not yet reconstructed */
    return 0;
}


/* FUN_00458180 @ 0x00458180 */

int * __thiscall FUN_00458180(void *this,byte param_1)
{
  FUN_00458710(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004581a0 @ 0x004581a0 */

int * __thiscall FUN_004581a0(void *this,short param_1,short param_2)
{
    /* STUB: 49 lines not yet reconstructed */
    return 0;
}


/* FUN_004582e0 @ 0x004582e0 */

int * __thiscall FUN_004582e0(void *this,int param_1)
{
    /* STUB: 51 lines not yet reconstructed */
    return 0;
}


/* FUN_00458430 @ 0x00458430 */

int * __thiscall FUN_00458430(void *this,int param_1,short param_2,short param_3)
{
    /* STUB: 51 lines not yet reconstructed */
    return 0;
}


/* FUN_00458580 @ 0x00458580 */

void __thiscall FUN_00458580(void *this,short param_1,short param_2)
{
    /* STUB: 82 lines not yet reconstructed */
    return;
}


/* FUN_00458710 @ 0x00458710 */

void __fastcall FUN_00458710(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00458795;
  *param_1 = &PTR_FUN_00476eb8;
  *_fs = &_seh_prev;
  _seh_state = 3;
  FUN_00458830((int)param_1);
  _seh_state = (_seh_state & ~0xFF) | 2;
  FUN_00458774();
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_0045877f();
  _seh_state &= ~0xFF;
  FUN_0045878a();
  _seh_state = 0xffffffff;
  FUN_0045879f();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458774 @ 0x00458774 */

void FUN_00458774(void)
{
  int _ebp;
  
  FUN_00459e90((int *)(*(int *)(_ebp + -0x10) + 0x78));
}


/* FUN_0045877f @ 0x0045877f */

void FUN_0045877f(void)
{
  int _ebp;
  
  FUN_00459e60((int *)(*(int *)(_ebp + -0x10) + 0x60));
}


/* FUN_0045878a @ 0x0045878a */

void FUN_0045878a(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(*(int *)(_ebp + -0x10) + 0x42));
}


/* FUN_0045879f @ 0x0045879f */

void FUN_0045879f(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_004587b0 @ 0x004587b0 */

void __fastcall FUN_004587b0(int *param_1)
{
  FUN_004587d0((int)param_1);
  FUN_0041e260(param_1);
}


/* FUN_004587d0 @ 0x004587d0 */

void __fastcall FUN_004587d0(int param_1)
{
  int n1;
  int *_Dst;
  uint u2;
  int *pu3;
  
  n1 = *(int *)(param_1 + 0x86); /* TODO: unknown struct, CVector-like count at offset 0x86 */
  while (n1 != 0) {
    _Dst = (int *)**(int **)(param_1 + 0x7c); /* TODO: CVector data ptr at offset 0x7C */
    u2 = *(uint *)(param_1 + 0x86);
    pu3 = (int *)*_Dst;
    if (u2 != 0) {
      if (1 < u2) {
        memmove(_Dst,_Dst + 1,u2 * 4 - 4);
      }
      *(int *)(param_1 + 0x86) = *(int *)(param_1 + 0x86) + -1;
    }
    ((void (*)(void))((void **)*pu3)[0])(); /* pu3->vtable[0] */
    n1 = *(int *)(param_1 + 0x86);
  }
  return;
}


/* FUN_00458830 @ 0x00458830 */

void __fastcall FUN_00458830(int param_1)
{
  if (*(uint *)(param_1 + 0x5c) != 0) {
    FUN_00465950(0,0,*(uint *)(param_1 + 0x5c));
  }
  FUN_004587d0(param_1);
}


/* FUN_00458860 @ 0x00458860 */

void __thiscall FUN_00458860(TextDisplay *this,char *param_1)
{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  uint u5;
  int n6;
  uint u7;
  char *pc8;
  
  u7 = 0;
  FUN_0041cb70(this,'\x01');
  if (param_1 != NULL) {
    c1 = *param_1;
    while (c1 != '\0') {
      u7 = u7 + 1;
      c1 = param_1[u7];
    }
    if (this->text_capacity + -1 < (int)u7) {
      n6 = 0;
      pu4 = this->text_buffer_ptr;
      if ((pu4 != NULL) && (pc8 = (char *)*pu4, pc8 != NULL)) {
        c1 = *pc8;
        while (c1 != '\0') {
          pc8 = pc8 + 1;
          n6 = n6 + 1;
          c1 = *pc8;
        }
      }
      n2 = u7 + 1;
      if ((int)(u7 + 1) <= n6 + 1) {
        n2 = n6 + 1;
      }
      n6 = (((int)(n2 + (n2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (pu4 == NULL) {
        pv3 = this->text_allocator;
        if (this->text_allocator == NULL) {
          pv3 = DAT_00483df4;
        }
        pu4 = FUN_0046ccb0(pv3,7,n6);
      }
      else {
        pu4 = FUN_0046cdc0(pu4,n6,7);
      }
      this->text_buffer_ptr = pu4;
      this->text_capacity = n6;
    }
    pc8 = (char *)*this->text_buffer_ptr;
    for (u5 = u7 >> 2; u5 != 0; u5 = u5 - 1) {
      *(int *)pc8 = *(int *)param_1;
      param_1 = param_1 + 4;
      pc8 = pc8 + 4;
    }
    for (u5 = u7 & 3; u5 != 0; u5 = u5 - 1) {
      *pc8 = *param_1;
      param_1 = param_1 + 1;
      pc8 = pc8 + 1;
    }
    *(char *)(*this->text_buffer_ptr + u7) = 0;
  }
  ((void (*)(void))this->vtable[0x90 / 4])();
}


/* FUN_00458920 @ 0x00458920 */

void __thiscall FUN_00458920(TextDisplay *this,int param_1)
{
  char c1;
  int n2;
  int n3;
  LPCVOID pv4;
  uint *pu5;
  char *pc6;
  uint u7;
  uint u8;
  int *pu9;
  int *pu10;
  
  u8 = 0;
  FUN_0041cb70(this,'\x01');
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc6 = (char *)**(int **)(param_1 + 4), pc6 != NULL)) {
    c1 = *pc6;
    while (c1 != '\0') {
      pc6 = pc6 + 1;
      u8 = u8 + 1;
      c1 = *pc6;
    }
  }
  if (this->text_capacity + -1 < (int)u8) {
    n2 = 0;
    pu5 = this->text_buffer_ptr;
    if ((pu5 != NULL) && (pc6 = (char *)*pu5, pc6 != NULL)) {
      c1 = *pc6;
      while (c1 != '\0') {
        pc6 = pc6 + 1;
        n2 = n2 + 1;
        c1 = *pc6;
      }
    }
    n3 = n2 + 1;
    if (n2 + 1 <= (int)(u8 + 1)) {
      n3 = u8 + 1;
    }
    n2 = (((int)(n3 + (n3 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (pu5 == NULL) {
      pv4 = this->text_allocator;
      if (this->text_allocator == NULL) {
        pv4 = DAT_00483df4;
      }
      pu5 = FUN_0046ccb0(pv4,7,n2);
    }
    else {
      pu5 = FUN_0046cdc0(pu5,n2,7);
    }
    this->text_buffer_ptr = pu5;
    this->text_capacity = n2;
  }
  pu9 = (int *)**(int **)(param_1 + 4);
  pu10 = (int *)*this->text_buffer_ptr;
  for (u7 = u8 >> 2; u7 != 0; u7 = u7 - 1) {
    *pu10 = *pu9;
    pu9 = pu9 + 1;
    pu10 = pu10 + 1;
  }
  for (u7 = u8 & 3; u7 != 0; u7 = u7 - 1) {
    *(char *)pu10 = *(char *)pu9;
    pu9 = (int *)((int)pu9 + 1);
    pu10 = (int *)((int)pu10 + 1);
  }
  *(char *)(*this->text_buffer_ptr + u8) = 0;
  ((void (*)(void))this->vtable[0x90 / 4])();
}


/* FUN_004589f0 @ 0x004589f0 */

int __fastcall FUN_004589f0(int param_1)
{
  return param_1 + 0x42;
}


/* FUN_00458a00 @ 0x00458a00 */

void __thiscall FUN_00458a00(TextDisplay *this,short param_1)
{
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00458a85;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  _seh_state = 0;
  FUN_0041cdc0(this,&v18);
  v14 = (((intptr_t)this->extent_x + (intptr_t)this->origin_x) * (int)param_1
             + 2) * 0x100;
  FUN_00458c00(this,&v18,'\0');
  _seh_state = 0xffffffff;
  FUN_00458a8f();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458a8f @ 0x00458a8f */

void FUN_00458a8f(void) { return; }


/* FUN_00458aa0 @ 0x00458aa0 */

void __thiscall FUN_00458aa0(TextDisplay *this,short param_1)
{
  int *_fs;
  int v18 [3];
  void *_handler;
  int v8;
  
  v18[2] = *_fs;
  _handler = &L_00458b25;
  *_fs = v18 + 2;
  v18[1] = 0;
  v18[0] = 0;
  v8 = 0;
  FUN_0041cdc0(this,v18);
  v18[0] = (((intptr_t)this->extent_y + (intptr_t)this->origin_y) *
                 (int)param_1 + 2) * 0x100;
  FUN_00458c00(this,v18,'\0');
  v8 = 0xffffffff;
  FUN_00458b2f();
  *_fs = v18[2];
}


/* FUN_00458b2f @ 0x00458b2f */

void FUN_00458b2f(void) { return; }


/* FUN_00458b40 @ 0x00458b40 */

void __thiscall FUN_00458b40(TextDisplay *this,short param_1,short param_2)
{
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00458be5;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  _seh_state = 0;
  FUN_0041cdc0(this,&v18);
  v14 = (((intptr_t)this->extent_x + (intptr_t)this->origin_x) * (int)param_1
             + 2) * 0x100;
  v18 = (((intptr_t)this->extent_y + (intptr_t)this->origin_y) * (int)param_2
             + 2) * 0x100;
  FUN_00458c00(this,&v18,'\0');
  _seh_state = 0xffffffff;
  FUN_00458bef();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458bef @ 0x00458bef */

void FUN_00458bef(void) { return; }


/* FUN_00458c00 @ 0x00458c00 */

void __thiscall FUN_00458c00(void *this,int *param_1,char param_2)
{
  int *_fs;
  int v18 [3];
  void *_handler;
  int v8;
  
  v18[2] = *_fs;
  _handler = &L_00458c89;
  *_fs = v18 + 2;
  v18[1] = 0;
  v18[0] = 0;
  v8 = 0;
  FUN_0041cb70(this,'\x01');
  FUN_0041d0a0(this,param_1,param_2);
  FUN_0041cb70(this,'\x01');
  FUN_0041cdc0(this,v18);
  ((void (*)(void))this->vtable[0x90 / 4])();
  v8 = 0xffffffff;
  FUN_00458c93();
  *_fs = v18[2];
}


/* FUN_00458c93 @ 0x00458c93 */

void FUN_00458c93(void) { return; }


/* FUN_00458ca0 @ 0x00458ca0 */

void __thiscall FUN_00458ca0(void *this,int param_1,int param_2,char param_3)
{
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00458d27;
  *_fs = &_seh_prev;
  v14 = param_1;
  _seh_state = 0;
  v18 = param_2;
  FUN_0041cb70(this,'\x01');
  FUN_0041d0a0(this,&v18,param_3);
  FUN_0041cb70(this,'\x01');
  FUN_0041cdc0(this,&v18);
  ((void (*)(void))this->vtable[0x90 / 4])();
  _seh_state = 0xffffffff;
  FUN_00458d31();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458d31 @ 0x00458d31 */

void FUN_00458d31(void) { return; }


/* FUN_00458d40 @ 0x00458d40 */

void __fastcall FUN_00458d40(void *param_1)
{
  int *_fs;
  int u1;
  int _arg1;
  char v20[8];
  char *v18;
  char *v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00458dba;
  *_fs = &_seh_prev;
  v18 = &_tmp_37;
  u1 = 0;
  FUN_00401050(&_tmp_37,0);
  v14 = &_tmp_36;
  FUN_00401050(&_tmp_36,0);
  FUN_00401060(v20,u1,_arg1);
  _seh_state = 0;
  FUN_0041cb70(param_1,'\x01');
  _seh_state = 0xffffffff;
  FUN_00458db2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00458db2 @ 0x00458db2 */

void FUN_00458db2(void) { return; }


/* FUN_00458dd0 @ 0x00458dd0 */

/* FUN_00458dd0 @ 0x00458dd0
 * Struct types: TextDisplay (this) - offset 0x9e = field_9e
 */
void __thiscall FUN_00458dd0(TextDisplay *this,int param_1)
{
  this->field_9e = param_1;
}


/* FUN_00458de0 @ 0x00458de0 */

void __thiscall FUN_00458de0(void *this,char param_1)
{
  void *self;
  
  self = (void *)FUN_00458e30((int)this);
  FUN_0043b180(self,param_1);
  ((void (*)(void))this->vtable[0x90 / 4])();
}


/* FUN_00458e10 @ 0x00458e10 */

/* FUN_00458e10 @ 0x00458e10
 * Struct types: TextDisplay (this) - offset 0x8e = field_8e
 */
void __thiscall FUN_00458e10(TextDisplay *this,short param_1)
{
  this->field_8e = param_1;
  FUN_00459010((intptr_t)this);
}


/* FUN_00458e30 @ 0x00458e30 */

int __fastcall FUN_00458e30(int param_1)
{
  return *(int *)(**(int **)(param_1 + 0x7c) + -4 + *(short *)(param_1 + 0x8e) * 4);
}


/* FUN_00458e50 @ 0x00458e50 */

void __thiscall FUN_00458e50(void *this,int param_1)
{
    /* STUB: 77 lines not yet reconstructed */
    return;
}


/* FUN_00458fc0 @ 0x00458fc0 */

void __thiscall FUN_00458fc0(void *this,int *param_1)
{
    /* STUB: 10 lines not yet reconstructed */
    return;
}


/* FUN_00459010 @ 0x00459010 */

void __fastcall FUN_00459010(int param_1)
{
  short s1;
  int u2;
  short s3;
  short s4;
  ushort u5;
  int n6;
  int *_fs;
  int v20;
  int v1c [2];
  void *v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00459160;
  *_fs = &_seh_prev;
  n6 = 0;
  v14 = (void *)FUN_00458e30(param_1);
  v20 = 0;
  v1c[1] = 0;
  v1c[0] = 0;
  u5 = 0;
  _seh_state = 0;
  *(short *)(param_1 + 0x94) = 0x7fff; /* TextDisplay._pad90 area */
  *(short *)(param_1 + 0x96) = 0x7fff; /* TextDisplay._pad90 area */
  ((TextDisplay *)param_1)->origin_x = 0;
  ((TextDisplay *)param_1)->origin_y = 0;
  u2 = thunk_FUN_004058a0((int)v14);
  if (0 < (short)u2) {
    do {
      FUN_0043b110(v14,u5);
      FUN_0041cdc0(v14,v1c);
      s3 = (short)((uint)v1c[1] >> 8);
      n6 = n6 + s3;
      s1 = (short)((uint)v1c[0] >> 8);
      v20 = v20 + s1;
      s4 = *(short *)(param_1 + 0x94); /* TextDisplay._pad90 area - min extent x */
      if (s3 <= *(short *)(param_1 + 0x94)) {
        s4 = s3;
      }
      *(short *)(param_1 + 0x94) = s4;
      s4 = *(short *)(param_1 + 0x96); /* TextDisplay._pad90 area - min extent y */
      if (s1 <= *(short *)(param_1 + 0x96)) {
        s4 = s1;
      }
      *(short *)(param_1 + 0x96) = s4;
      s4 = ((TextDisplay *)param_1)->origin_x;
      if (((TextDisplay *)param_1)->origin_x <= s3) {
        s4 = s3;
      }
      ((TextDisplay *)param_1)->origin_x = s4;
      s4 = ((TextDisplay *)param_1)->origin_y;
      if (((TextDisplay *)param_1)->origin_y <= s1) {
        s4 = s1;
      }
      u5 = u5 + 1;
      ((TextDisplay *)param_1)->origin_y = s4;
      u2 = thunk_FUN_004058a0((int)v14);
    } while ((int)(uint)u5 < (int)(short)u2);
  }
  u2 = thunk_FUN_004058a0((int)v14);
  *(short *)(param_1 + 0x90) = (short)(n6 / (int)(short)u2); /* TextDisplay._pad90 area - avg extent x */
  u2 = thunk_FUN_004058a0((int)v14);
  _seh_state = 0xffffffff;
  *(short *)(param_1 + 0x92) = (short)(v20 / (int)(short)u2); /* TextDisplay._pad90 area - avg extent y */
  FUN_0045916a();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045916a @ 0x0045916a */

void FUN_0045916a(void) { return; }


/* FUN_00459180 @ 0x00459180 */

void __thiscall
FUN_00459180(void *this,int *param_1,char *param_2,int *param_3,int *param_4,int param_5)
{
    /* STUB: 92 lines not yet reconstructed */
    return;
}


/* FUN_00459510 @ 0x00459510 */

void FUN_00459510(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489208,u1,_arg3);
}


/* FUN_00459560 @ 0x00459560 */

void FUN_00459560(void) { return; }


/* FUN_00459580 @ 0x00459580 */

/* NOTE: overlapping globals */

void FUN_00459580(void)
{
  _DAT_00489252 = 0;
  _DAT_00489250 = 0;
}


/* FUN_00459590 @ 0x00459590 */

void FUN_00459590(void)
{
  _atexit(FUN_004595a0);
}


/* FUN_004595a0 @ 0x004595a0 */

void FUN_004595a0(void) { return; }


/* FUN_004595b0 @ 0x004595b0 */

int __thiscall FUN_004595b0(void *this,char param_1)
{
    /* STUB: 45 lines not yet reconstructed */
    return 0;
}


/* FUN_00459730 @ 0x00459730 */

/* NOTE: overlapping globals */

void FUN_00459730(void)
{
  _DAT_0048924e = 0;
  _DAT_0048924c = 0;
}


/* FUN_00459740 @ 0x00459740 */

void FUN_00459740(void)
{
  _atexit(FUN_00459750);
}


/* FUN_00459750 @ 0x00459750 */

void FUN_00459750(void) { return; }


/* FUN_00459760 @ 0x00459760 */

int __thiscall FUN_00459760(void *this,int param_1,void *param_2,int param_3)
{
    /* STUB: 260 lines not yet reconstructed */
    return 0;
}


/* FUN_00459c00 @ 0x00459c00 */

void __thiscall FUN_00459c00(void *this,int *param_1,char param_2,int param_3,int param_4)
{
    /* STUB: 98 lines not yet reconstructed */
    return;
}


/* FUN_00459dc4 @ 0x00459dc4 */

void FUN_00459dc4(void) { return; }


/* FUN_00459dcc @ 0x00459dcc */

void FUN_00459dcc(void) { return; }


/* FUN_00459dde @ 0x00459dde */

void FUN_00459dde(void) { return; }


/* FUN_00459e60 @ 0x00459e60 */

void __fastcall FUN_00459e60(int *param_1)
{
  *param_1 = &PTR_LAB_00476eb4;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_00459e90 @ 0x00459e90 */

void __fastcall FUN_00459e90(int *param_1)
{
  *param_1 = &PTR_LAB_00476eb0;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_00459f50 @ 0x00459f50 */

void FUN_00459f50(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489260,u1,_arg3);
}


/* FUN_00459fa0 @ 0x00459fa0 */

void FUN_00459fa0(void) { return; }


/* FUN_00459fc0 @ 0x00459fc0 */

/* NOTE: overlapping globals */

void FUN_00459fc0(void)
{
  _DAT_0048926e = 0;
  _DAT_0048926c = 0;
}


/* FUN_00459fd0 @ 0x00459fd0 */

void FUN_00459fd0(void)
{
  _atexit(FUN_00459fe0);
}


/* FUN_00459fe0 @ 0x00459fe0 */

void FUN_00459fe0(void) { return; }


/* FUN_0045a000 @ 0x0045a000 */

/* NOTE: overlapping globals */

void FUN_0045a000(void)
{
  _DAT_0048926a = 0;
  _DAT_00489268 = 0;
}


/* FUN_0045a010 @ 0x0045a010 */

void FUN_0045a010(void)
{
  _atexit(FUN_0045a020);
}


/* FUN_0045a020 @ 0x0045a020 */

void FUN_0045a020(void) { return; }


/* FUN_0045a040 @ 0x0045a040 */

void FUN_0045a040(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489270,u1,_arg3);
}


/* FUN_0045a080 @ 0x0045a080 */

void FUN_0045a080(void)
{
  _atexit(FUN_0045a090);
}


/* FUN_0045a090 @ 0x0045a090 */

void FUN_0045a090(void) { return; }


/* FUN_0045a0b0 @ 0x0045a0b0 */

/* NOTE: overlapping globals */

void FUN_0045a0b0(void)
{
  _DAT_00489282 = 0;
  _DAT_00489280 = 0;
}


/* FUN_0045a0c0 @ 0x0045a0c0 */

void FUN_0045a0c0(void)
{
  _atexit(FUN_0045a0d0);
}


/* FUN_0045a0d0 @ 0x0045a0d0 */

void FUN_0045a0d0(void) { return; }


/* FUN_0045a0f0 @ 0x0045a0f0 */

/* NOTE: overlapping globals */

void FUN_0045a0f0(void)
{
  _DAT_0048927e = 0;
  _DAT_0048927c = 0;
}


/* FUN_0045a100 @ 0x0045a100 */

void FUN_0045a100(void)
{
  _atexit(FUN_0045a110);
}


/* FUN_0045a110 @ 0x0045a110 */

void FUN_0045a110(void) { return; }


/* FUN_0045a2f0 @ 0x0045a2f0 */

int * __fastcall FUN_0045a2f0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045a33e;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  *param_1 = &PTR_FUN_00476f60;
  *_fs = _seh_prev;
  DAT_00489278 = 0;
  return param_1;
}


/* FUN_0045a350 @ 0x0045a350 */

int * __thiscall FUN_0045a350(void *this,byte param_1)
{
  FUN_0045a370(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045a370 @ 0x0045a370 */

void __fastcall FUN_0045a370(int *param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0045a3de @ 0x0045a3de */

void FUN_0045a3de(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_0045a575 @ 0x0045a575 */

void FUN_0045a575(void) { return; }


/* FUN_0045ab33 @ 0x0045ab33 */

void FUN_0045ab33(void) { return; }


/* FUN_0045ab45 @ 0x0045ab45 */

void FUN_0045ab45(void) { return; }


/* FUN_0045ab60 @ 0x0045ab60 */

void __fastcall FUN_0045ab60(int param_1)
{
    /* STUB: 24 lines not yet reconstructed */
    return;
}


/* FUN_0045ae99 @ 0x0045ae99 */

void FUN_0045ae99(void)
{
  FUN_004012a0();
}


/* FUN_0045af09 @ 0x0045af09 */

void FUN_0045af09(void)
{
  FUN_004012a0();
}


/* FUN_0045af79 @ 0x0045af79 */

void FUN_0045af79(void)
{
  FUN_004012a0();
}


/* FUN_0045af90 @ 0x0045af90 */

void FUN_0045af90(void *param_1,short param_2)
{
  uint u1;
  int n2;
  
  FUN_0041dad0(param_1,(byte)param_2,'\0');
  if (((((UIWidget *)param_1)->child_list_2 != (void *)0) &&
      (n2 = *(int *)((int)((UIWidget *)param_1)->child_list_2 + 0xe) /* CVector: count at +0x0E */, n2 != 0)) &&
     (u1 = 1, n2 != 0)) {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0045af90(*(void **)(**(int **)((int)((UIWidget *)param_1)->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n2),param_2);
    } while (u1 <= *(uint *)((int)((UIWidget *)param_1)->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0045b290 @ 0x0045b290 */

void FUN_0045b290(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489290,u1,_arg3);
}


/* FUN_0045b2e0 @ 0x0045b2e0 */

void FUN_0045b2e0(void) { return; }


/* FUN_0045b300 @ 0x0045b300 */

/* NOTE: overlapping globals */

void FUN_0045b300(void)
{
  _DAT_004893ca = 0;
  _DAT_004893c8 = 0;
}


/* FUN_0045b310 @ 0x0045b310 */

void FUN_0045b310(void)
{
  _atexit(FUN_0045b320);
}


/* FUN_0045b320 @ 0x0045b320 */

void FUN_0045b320(void) { return; }


/* FUN_0045b340 @ 0x0045b340 */

/* NOTE: overlapping globals */

void FUN_0045b340(void)
{
  _DAT_004893c6 = 0;
  _DAT_004893c4 = 0;
}


/* FUN_0045b350 @ 0x0045b350 */

void FUN_0045b350(void)
{
  _atexit(FUN_0045b360);
}


/* FUN_0045b360 @ 0x0045b360 */

void FUN_0045b360(void) { return; }


/* FUN_0045b380 @ 0x0045b380 */

void FUN_0045b380(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004893d0,u1,_arg3);
}


/* FUN_0045b3c0 @ 0x0045b3c0 */

void FUN_0045b3c0(void)
{
  _atexit(FUN_0045b3d0);
}


/* FUN_0045b3d0 @ 0x0045b3d0 */

void FUN_0045b3d0(void) { return; }


/* FUN_0045b3f0 @ 0x0045b3f0 */

/* NOTE: overlapping globals */

void FUN_0045b3f0(void)
{
  _DAT_004893de = 0;
  _DAT_004893dc = 0;
}


/* FUN_0045b400 @ 0x0045b400 */

void FUN_0045b400(void)
{
  _atexit(FUN_0045b410);
}


/* FUN_0045b410 @ 0x0045b410 */

void FUN_0045b410(void) { return; }


/* FUN_0045b430 @ 0x0045b430 */

/* NOTE: overlapping globals */

void FUN_0045b430(void)
{
  _DAT_004893da = 0;
  _DAT_004893d8 = 0;
}


/* FUN_0045b440 @ 0x0045b440 */

void FUN_0045b440(void)
{
  _atexit(FUN_0045b450);
}


/* FUN_0045b450 @ 0x0045b450 */

void FUN_0045b450(void) { return; }


/* FUN_0045b460 @ 0x0045b460 */

int * __fastcall FUN_0045b460(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045b4b6;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  *(short *)((int)param_1 + 0x198) = 0; /* TODO: offset 0x198, GameWidget._pad160 area */
  *param_1 = &PTR_FUN_00477288;
  *(unsigned char *)((int)param_1 + 0x19a) = 0; /* TODO: offset 0x19A, GameWidget._pad160 area */
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0045b4d0 @ 0x0045b4d0 */

int * __thiscall FUN_0045b4d0(void *this,byte param_1)
{
  FUN_0045b4f0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045b4f0 @ 0x0045b4f0 */

void __fastcall FUN_0045b4f0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0045b52d;
  *param_1 = &PTR_FUN_00477288;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_0045b537();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045b537 @ 0x0045b537 */

void FUN_0045b537(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_0045b5d0 @ 0x0045b5d0 */

void __fastcall FUN_0045b5d0(int param_1)
{
  short s1;
  
  if ((*(char *)(param_1 + 0x19a) == '\0') && /* GameWidget._pad160 area */
     (s1 = *(short *)(param_1 + 0x198) + 1, *(short *)(param_1 + 0x198) = s1, 0x1a4 < s1)) /* GameWidget._pad160 area */
  {
    FUN_0041da90(*(void **)(param_1 + 0x19c),0); /* GameWidget._pad160 area */
    FUN_0041dad0(*(void **)(param_1 + 0x19c),0,'\0'); /* GameWidget._pad160 area */
    FUN_0040e890(DAT_004897c0);
  }
  return;
}


/* FUN_0045b620 @ 0x0045b620 */

void __fastcall FUN_0045b620(int param_1)
{
  if ((0 < *(short *)(param_1 + 0x198)) && (*(char *)(param_1 + 0x19a) == '\0')) { /* GameWidget._pad160 area */
    FUN_0041da90(*(void **)(param_1 + 0x19c),0); /* GameWidget._pad160 area */
    FUN_0041dad0(*(void **)(param_1 + 0x19c),0,'\0'); /* GameWidget._pad160 area */
    FUN_0040e890(DAT_004897c0);
  }
  return;
}


/* FUN_0045b9bb @ 0x0045b9bb */

void FUN_0045b9bb(void)
{
  FUN_00403500();
}


/* FUN_0045b9d0 @ 0x0045b9d0 */

void FUN_0045b9d0(void) { return; }


/* FUN_0045b9f0 @ 0x0045b9f0 */

void FUN_0045b9f0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004893e0,u1,_arg3);
}


/* FUN_0045ba40 @ 0x0045ba40 */

void FUN_0045ba40(void) { return; }


/* FUN_0045ba60 @ 0x0045ba60 */

/* NOTE: overlapping globals */

void FUN_0045ba60(void)
{
  _DAT_004893ee = 0;
  _DAT_004893ec = 0;
}


/* FUN_0045ba70 @ 0x0045ba70 */

void FUN_0045ba70(void)
{
  _atexit(FUN_0045ba80);
}


/* FUN_0045ba80 @ 0x0045ba80 */

void FUN_0045ba80(void) { return; }


/* FUN_0045bb50 @ 0x0045bb50 */

/* NOTE: overlapping globals */

void FUN_0045bb50(void)
{
  _DAT_004893ea = 0;
  _DAT_004893e8 = 0;
}


/* FUN_0045bb60 @ 0x0045bb60 */

void FUN_0045bb60(void)
{
  _atexit(FUN_0045bb70);
}


/* FUN_0045bb70 @ 0x0045bb70 */

void FUN_0045bb70(void) { return; }


/* FUN_0045bb80 @ 0x0045bb80 */

int * __fastcall FUN_0045bb80(int *param_1)
{
  *param_1 = &PTR_FUN_0047736c;
  FUN_0045be30((int)param_1);
  return param_1;
}


/* FUN_0045bba0 @ 0x0045bba0 */

int * __thiscall FUN_0045bba0(void *this,byte param_1)
{
  FUN_0045bc70(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045bbc0 @ 0x0045bbc0 */

int __thiscall FUN_0045bbc0(void *this,short *param_1,void *param_2)
{
    /* STUB: 28 lines not yet reconstructed */
    return 0;
}


/* FUN_0045bc70 @ 0x0045bc70 */

void __fastcall FUN_0045bc70(int *param_1)
{
  int *_fs;
  int v420[256];
  short v1e [5];
  int *v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045bd9e;
  *param_1 = &PTR_FUN_0047736c;
  *(char *)(param_1 + 3) = 1;
  *_fs = &_seh_prev;
  v14 = param_1;
  FUN_0045c0c0();
  if ((*(char *)((int)v14 + 0xd) != '\0') && (DAT_004896b0 != 0)) { /* TODO: offset 0x0D on v14, unknown struct */
    FUN_00455dc0(DAT_004896b0);
  }
  if (DAT_004838bc != (HGDIOBJ)0x0) {
    FUN_00451ee0(v420);
    _seh_state = 0;
    FUN_004268d0(v420,1);
    _seh_state = 0xffffffff;
    FUN_0045bd93();
  }
  if (v14[1] != 0) {
    v1e[1] = 0;
    v1e[0] = 0;
    _seh_state = 1;
    v1e[3] = 0x280;
    v1e[2] = 0x1e0;
    FUN_004304d0((void *)v14[1],0,0,0);
    FUN_00430620((void *)v14[1],v1e);
    _seh_state = 0xffffffff;
    FUN_0045bda8();
  }
  FUN_0045c070((int)v14);
  FUN_00455380();
  if (DAT_004838bc != (HGDIOBJ)0x0) {
    FUN_004268c0(DAT_004838bc);
    DAT_004838bc = (HGDIOBJ)0x0;
  }
  FUN_0045c090();
  FUN_0045c0a0();
  FUN_0045c0b0();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045bd93 @ 0x0045bd93 */

void FUN_0045bd93(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x41c));
}


/* FUN_0045bda8 @ 0x0045bda8 */

void FUN_0045bda8(void) { return; }


/* FUN_0045bdb0 @ 0x0045bdb0 */

void __fastcall FUN_0045bdb0(int param_1)
{
  do {
    FUN_004561a0(DAT_004896b0);
  } while (*(char *)(param_1 + 0xc) == '\0');
}


/* FUN_0045bdd0 @ 0x0045bdd0 */

void __fastcall FUN_0045bdd0(int param_1)
{
    /* STUB: 5 lines not yet reconstructed */
    return;
}


/* FUN_0045be00 @ 0x0045be00 */

void __fastcall FUN_0045be00(int param_1)
{
    /* STUB: 10 lines not yet reconstructed */
    return;
}


/* FUN_0045be30 @ 0x0045be30 */

void __fastcall FUN_0045be30(int param_1)
{
  *(char *)(param_1 + 0xc) = 0;
}


/* FUN_0045be40 @ 0x0045be40 */

void __fastcall FUN_0045be40(int param_1)
{
    /* STUB: 42 lines not yet reconstructed */
    return;
}


/* FUN_0045bf2e @ 0x0045bf2e */

void FUN_0045bf2e(void) { return; }


/* FUN_0045bf40 @ 0x0045bf40 */

void __thiscall FUN_0045bf40(void *this,short *param_1,void *param_2)
{
    /* STUB: 46 lines not yet reconstructed */
    return;
}


