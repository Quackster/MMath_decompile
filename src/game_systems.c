/*
 * game_systems.c - Game subsystems
 * Address range: 0x410000 - 0x41FFFF
 * Functions: 309
 *
 * Reconstructed source for MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00410050 @ 0x00410050 */

void FUN_00410050(void)

{
  return;
}


/* FUN_00410062 @ 0x00410062 */

void FUN_00410062(void)

{
  return;
}


/* FUN_00410070 @ 0x00410070 */

int * __thiscall
FUN_00410070(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
    /* STUB: 59 lines not yet reconstructed */
    return 0;
}


/* FUN_0041022b @ 0x0041022b */

void FUN_0041022b(void)

{
  return;
}


/* FUN_00410250 @ 0x00410250 */

int * __thiscall FUN_00410250(void *this,byte param_1)

{
  FUN_00410270(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00410270 @ 0x00410270 */

void __fastcall FUN_00410270(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_004102c1;
  *param_1 = (int)&PTR_LAB_00472c58;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  FUN_00410300((int)param_1);
  FUN_0042c3f0(param_1);
  loc_8 = 0xffffffff;
  FUN_004102cb();
  *__seh_chain = loc_10;
  return;
}


/* FUN_004102cb @ 0x004102cb */

void FUN_004102cb(void)

{
  int __saved_ebp;
  
  FUN_0042be10(*(int **)(__saved_ebp + -0x10));
  return;
}


/* FUN_00410300 @ 0x00410300 */

/* Function cleaned: param_1 accesses offsets 0x126 (object_ptr) and 0x132+ on GameWidget */
void __fastcall FUN_00410300(GameWidget *this)

{
  int *pn1;
  int *pu2;
  short s3;

  if ((int *)this->object_ptr != (int *)0x0) {
    ((void (*)(void))*(void **)this->object_ptr)(); /* call through object_ptr->vtable[0] */
    this->object_ptr = 0;
  }
  s3 = 0;
  do {
    pn1 = (int *)((int)this + 0x132 + s3 * 4); /* TODO: offset 0x132+ is in _pad134 region, array of 10 pointers */
    pu2 = (int *)*pn1;
    if (pu2 != (int *)0x0) {
      ((void (*)(void))((void **)*pu2)[0])(); /* pu2->vtable[0] */
    }
    s3 = s3 + 1;
    *pn1 = 0;
  } while (s3 < 10);
  return;
}


/* FUN_00410350 @ 0x00410350 */

void __fastcall FUN_00410350(int *param_1)

{
    /* STUB: 9 lines not yet reconstructed */
    return;
}


/* FUN_004103a0 @ 0x004103a0 */

void __fastcall FUN_004103a0(void *param_1)

{
    /* STUB: 82 lines not yet reconstructed */
    return;
}


/* FUN_00410592 @ 0x00410592 */

void FUN_00410592(void)

{
  return;
}


/* FUN_004105a4 @ 0x004105a4 */

void FUN_004105a4(void)

{
  return;
}


/* FUN_004105b0 @ 0x004105b0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e (page_offset), 0x15c (visible_slot_count), 0x132+ */
void __fastcall FUN_004105b0(GameWidget *this)

{
  char c1;
  void *pv2;
  ushort u3;
  uint u4;
  void *pu5;
  int n6;
  char *pc7;
  int n8;
  int n9;
  short s10;
  int *__seh_chain;
  int u11;
  int u12;
  int u13;
  int __param_ffffffb8;
  int loc_30 [6];
  char *loc_18;
  char *loc_14;
  int loc_10;
  char *__seh_handler;
  uint loc_8;

  loc_10 = *__seh_chain;
  __seh_handler = &__label_00410803;
  *__seh_chain = &loc_10;
  loc_30[5] = 0;
  loc_30[4] = 0;
  loc_8 = 0;
  loc_30[0] = 0;
  loc_30[1] = 0;
  loc_30[2] = 0;
  loc_30[3] = 0;
  u13 = 0;
  FUN_00401050(&__stk_29,0);
  u12 = 0;
  FUN_00401050(&__stk_28,0);
  loc_18 = &__stk_27;
  u11 = 0;
  FUN_00401050(&__stk_27,0);
  loc_14 = &__stk_26;
  FUN_00401050(&__stk_26,0);
  FUN_0040bfd0(loc_30,u11,u12,u13,__param_ffffffb8);
  loc_8 = CONCAT31((((loc_8) >> 8) & 0xFFFFFF),1);
  FUN_0041ce10(this,loc_30 + 4,0);
  FUN_0044a3c0(DAT_00483458,this->page_offset);
  u3 = FUN_0044a260(DAT_00483458);
  if (9 < (short)u3) {
    u3 = 10;
  }
  s10 = 0;
  this->visible_slot_count = u3;
  do {
    n9 = (int)s10;
    pv2 = *(void **)((int)this + n9 * 4 + 0x132); /* TODO: offset 0x132+ array of slot pointers */
    if (pv2 != (void *)0x0) {
      FUN_00458860(pv2,(char *)&DAT_0047ef44);
      FUN_0041cb70(*(void **)((int)this + n9 * 4 + 0x132),'\x01'); /* TODO: offset 0x132+ array of slot pointers */
      u4 = FUN_0044ab30(DAT_00483458);
      if (((char)u4 != '\0') && (s10 < this->visible_slot_count)) {
        FUN_0041cd60(*(void **)((int)this + n9 * 4 + 0x132),loc_30); /* TODO: offset 0x132+ array of slot pointers */
        loc_14 = (char *)(loc_30[5] + 0xc800);
        FUN_0041d020(*(void **)((int)this + n9 * 4 + 0x132),loc_14, /* TODO: offset 0x132+ array of slot pointers */
                     (loc_30[2] - loc_30[0] & 0xffffff00U) * n9 + loc_30[4] + 0xd200,0);
        pu5 = FUN_0044a780(DAT_00483458);
        FUN_00458920(*(void **)((int)this + n9 * 4 + 0x132),(int)pu5); /* TODO: offset 0x132+ array of slot pointers */
        n6 = FUN_004589f0(*(int *)((int)this + n9 * 4 + 0x132)); /* TODO: offset 0x132+ array of slot pointers */
        n8 = 0;
        if ((*(int **)(n6 + 4) != (int *)0x0) &&
           (pc7 = (char *)**(int **)(n6 + 4), pc7 != (char *)0x0)) {
          c1 = *pc7;
          while (c1 != '\0') {
            pc7 = pc7 + 1;
            n8 = n8 + 1;
            c1 = *pc7;
          }
        }
        if (n8 == 0) {
          FUN_00458860(*(void **)((int)this + n9 * 4 + 0x132),s_____No_Name_Hero_____0047ef48) /* TODO: offset 0x132+ array of slot pointers */
          ;
        }
      }
      FUN_0044a2c0(DAT_00483458);
    }
    s10 = s10 + 1;
  } while (s10 < 10);
  n9 = *(int *)((int)DAT_004897c0 + 0x52); /* TODO: DAT_004897c0 struct unknown */
  pv2 = *(void **)(n9 + 0x84);
  if (pv2 != (void *)0x0) {
    FUN_0041cb70(pv2,'\x01');
  }
  pv2 = *(void **)(n9 + 0x88);
  if (pv2 != (void *)0x0) {
    FUN_0041cb70(pv2,'\x01');
  }
  FUN_0041cb70(*(void **)((int)DAT_004897c0 + 0x52),'\x01'); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cb70(DAT_004897c0,'\x01');
  FUN_0041cad0(*(void **)((int)DAT_004897c0 + 0x52)); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cad0(DAT_004897c0);
  loc_8 = loc_8 & 0xffffff00;
  FUN_004107fb();
  loc_8 = 0xffffffff;
  FUN_0041080d();
  *__seh_chain = loc_10;
  return;
}


/* FUN_004107fb @ 0x004107fb */

void FUN_004107fb(void)

{
  return;
}


/* FUN_0041080d @ 0x0041080d */

void FUN_0041080d(void)

{
  return;
}


/* FUN_00410820 @ 0x00410820 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15c, 0x15a, 0x132+ */
void __fastcall FUN_00410820(GameWidget *this)

{
  int *pu1;
  short s2;

  s2 = 0;
  if (0 < this->visible_slot_count) {
    do {
      pu1 = (int *)((int)this + 0x132 + s2 * 4); /* TODO: offset 0x132+ array of slot pointers */
      FUN_00458de0((void *)*pu1,DAT_0047ef3c);
      if (this->selected_slot == s2) {
        FUN_00458de0((void *)*pu1,DAT_0047ef38);
      }
      s2 = s2 + 1;
    } while (s2 < this->visible_slot_count);
  }
  return;
}


/* FUN_00410a90 @ 0x00410a90 */

void FUN_00410a90(void)

{
  return;
}


/* FUN_00410a98 @ 0x00410a98 */

void FUN_00410a98(void)

{
  return;
}


/* FUN_00410aa0 @ 0x00410aa0 */

void FUN_00410aa0(void)

{
  return;
}


/* FUN_00410aa8 @ 0x00410aa8 */

void FUN_00410aa8(void)

{
  return;
}


/* FUN_00410aba @ 0x00410aba */

void FUN_00410aba(void)

{
  return;
}


/* FUN_00410af0 @ 0x00410af0 */

void __fastcall FUN_00410af0(void *param_1)

{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_00410b90 @ 0x00410b90 */

/* Function cleaned: param_1 accesses GameWidget offset 0x15e (page_offset) */
float10 __fastcall FUN_00410b90(GameWidget *this)

{
  ushort u1;
  ushort u2;
  int loc_4;

  u1 = FUN_0044a260(DAT_00483458);
  loc_4 = 0.0;
  u2 = u1;
  if (9 < (short)u1) {
    u2 = 10;
  }
  if ((ushort)(u1 - u2) != 0) {
    loc_4 = (float)((this->page_offset * 4 + -4) * 0x19) /
              (float)(int)(short)(u1 - u2);
  }
  return (float10)loc_4;
}


/* FUN_00410bf0 @ 0x00410bf0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e, 0x15a, 0x15c, 0x12a */
void __fastcall FUN_00410bf0(GameWidget *this)

{
  int n1;
  ushort u2;
  short u3;
  short s4;

  u2 = FUN_0044a260(DAT_00483458);
  if ((int)(short)u2 < this->page_offset + 10) {
    s4 = this->selected_slot;
    if ((s4 < 0) || (this->visible_slot_count + -1 <= (int)s4)) goto __label_00410c97;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->page_offset);
    FUN_0044a2c0(DAT_00483458);
    u3 = FUN_0044a770(DAT_00483458);
    this->page_offset = u3;
    s4 = this->selected_slot;
    if (s4 == -1) goto __label_00410c97;
    if (0 < s4) {
      this->selected_slot = s4 + -1;
    }
    s4 = this->selected_slot;
    if (this->page_offset + -1 <= (int)s4) goto __label_00410c97;
  }
  this->selected_slot = s4 + 1;
__label_00410c97:
  FUN_004105b0(this);
  FUN_00410820(this);
  n1 = this->scrollbar_ref;
  if (n1 != 0) {
    FUN_00410b90(this);
    FUN_0040fee0(n1);
  }
  return;
}


/* FUN_00410cd0 @ 0x00410cd0 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15e, 0x15a, 0x15c, 0x12a */
void __fastcall FUN_00410cd0(GameWidget *this)

{
  int n1;
  short u2;
  short s3;

  if (this->page_offset < 2) {
    s3 = this->selected_slot;
    if (s3 < 1) goto __label_00410d5b;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->page_offset);
    FUN_0044a330(DAT_00483458);
    u2 = FUN_0044a770(DAT_00483458);
    this->page_offset = u2;
    s3 = this->selected_slot;
    if (s3 == -1) goto __label_00410d5b;
    if ((-1 < s3) && ((int)s3 < this->visible_slot_count + -1)) {
      this->selected_slot = s3 + 1;
    }
    s3 = this->selected_slot;
    if (s3 < this->visible_slot_count) goto __label_00410d5b;
  }
  this->selected_slot = s3 + -1;
__label_00410d5b:
  FUN_004105b0(this);
  FUN_00410820(this);
  n1 = this->scrollbar_ref;
  if (n1 != 0) {
    FUN_00410b90(this);
    FUN_0040fee0(n1);
  }
  return;
}


/* FUN_00410f70 @ 0x00410f70 */

int __fastcall FUN_00410f70(int *param_1)

{
    /* STUB: 17 lines not yet reconstructed */
    return 0;
}


/* FUN_00410fc0 @ 0x00410fc0 */

short FUN_00410fc0(void)

{
    /* STUB: 82 lines not yet reconstructed */
    return 0;
}


/* FUN_004112e0 @ 0x004112e0 */

int * __fastcall FUN_004112e0(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0041132b;
  *__seh_chain = &loc_10;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00472df0;
  *__seh_chain = loc_10;
  return param_1;
}


/* FUN_00411360 @ 0x00411360 */

void FUN_00411360(void)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_004113af;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  FUN_004113a4();
  loc_8 = 0xffffffff;
  FUN_004113b9();
  *__seh_chain = loc_10;
  return;
}


/* FUN_004113a4 @ 0x004113a4 */

void FUN_004113a4(void)

{
  int __saved_ebp;
  
  FUN_00413840((int *)(*(int *)(__saved_ebp + -0x10) + 0x32));
  return;
}


/* FUN_004113b9 @ 0x004113b9 */

void FUN_004113b9(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(*(int *)(__saved_ebp + -0x10) + 4));
  return;
}


/* FUN_004113d0 @ 0x004113d0 */

void __fastcall FUN_004113d0(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041140d;
  *param_1 = &PTR_LAB_00472e00;
  *__seh_chain = &loc_10;
  loc_8 = 0xffffffff;
  FUN_00411417();
  *__seh_chain = loc_10;
  return;
}


/* FUN_00411417 @ 0x00411417 */

void FUN_00411417(void)

{
  int __saved_ebp;
  
  FUN_00413810(*(int **)(__saved_ebp + -0x10));
  return;
}


/* FUN_0041147f @ 0x0041147f */

void FUN_0041147f(void)

{
  int __saved_ebp;
  
  FUN_00413810(*(int **)(__saved_ebp + -0x10));
  return;
}


/* FUN_00411490 @ 0x00411490 */

void __thiscall FUN_00411490(void *this,int param_1)

{
    /* STUB: 25 lines not yet reconstructed */
    return;
}


/* FUN_00411520 @ 0x00411520 */

void FUN_00411520(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00484298,u1,__param_fffffff4);
  return;
}


/* FUN_00411570 @ 0x00411570 */

void FUN_00411570(void)

{
  return;
}


/* FUN_00411580 @ 0x00411580 */

int __fastcall FUN_00411580(void *param_1)

{
    /* STUB: 721 lines not yet reconstructed */
    return 0;
}


/* FUN_004130d0 @ 0x004130d0 */

/* NOTE: overlapping globals */

void FUN_004130d0(void)

{
  _DAT_004842a6 = 0;
  _DAT_004842a4 = 0;
  return;
}


/* FUN_004130e0 @ 0x004130e0 */

void FUN_004130e0(void)

{
  _atexit(FUN_004130f0);
  return;
}


/* FUN_004130f0 @ 0x004130f0 */

void FUN_004130f0(void)

{
  return;
}


/* FUN_00413110 @ 0x00413110 */

/* NOTE: overlapping globals */

void FUN_00413110(void)

{
  _DAT_004842a2 = 0;
  _DAT_004842a0 = 0;
  return;
}


/* FUN_00413120 @ 0x00413120 */

void FUN_00413120(void)

{
  _atexit(FUN_00413130);
  return;
}


/* FUN_00413130 @ 0x00413130 */

void FUN_00413130(void)

{
  return;
}


/* FUN_00413140 @ 0x00413140 */

void __thiscall
FUN_00413140(MathProblem *this,int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint u1;
  int n2;
  uint u3;
  bool b6;
  uint u4;
  uint u5;
  
  b6 = false;
  u1 = param_5 + param_1 + param_4 + param_3 + param_2;
  n2 = FUN_004137b0(this->difficulty,param_1,param_2,param_3,param_4,param_5);
  if (0x57 < this->problem_type - 0x111U) goto sw_120;
  u3 = (int)param_2 >> 0x1f;
  u4 = (int)u1 >> 0x1f;
  u5 = (int)param_3 >> 0x1f;
  switch(this->problem_type) {
  case 0x111:
    if ((0 < (int)(((param_2 ^ u3) - u3 & 1 ^ u3) - u3)) && (param_2 != 0)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x112:
    if ((0 < (int)(((param_3 ^ u5) - u5 & 1 ^ u5) - u5)) && (param_3 != 0)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x113:
    if ((0 < (int)(((u1 ^ u4) - u4 & 1 ^ u4) - u4)) && (u1 != 0)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x114:
    param_3 = param_2;
    if (((int)(((param_2 ^ u3) - u3 & 1 ^ u3) - u3) < 1) ||
       (b6 = false, param_2 == 0)) {
      b6 = true;
    }
    goto joined_r0x0041325f;
  case 0x115:
    if (((int)(((param_3 ^ u5) - u5 & 1 ^ u5) - u5) < 1) ||
       (b6 = false, param_3 == 0)) {
      b6 = true;
    }
joined_r0x0041325f:
    if (param_3 != 0) goto sw_120;
    break;
  case 0x116:
    if (((int)(((u1 ^ u4) - u4 & 1 ^ u4) - u4) < 1) || (u1 == 0)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x117:
  case 0x11a:
  case 0x11d:
    b6 = (float)(int)param_2 == this->threshold;
    goto sw_120;
  case 0x118:
  case 0x11b:
  case 0x11e:
    b6 = (float)(int)param_3 == this->threshold;
    goto sw_120;
  case 0x119:
  case 0x11c:
  case 0x11f:
    b6 = (float)(int)u1 == this->threshold;
  default:
    goto sw_120;
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
    if (((float)(int)u1 < this->threshold) &&
       (this->threshold_high < (float)(int)u1)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x130:
  case 0x131:
  case 0x132:
    if (((float)(int)u1 == this->threshold) &&
       ((float)n2 <= this->threshold_high)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x133:
  case 0x134:
    if (((float)(int)u1 == this->threshold) &&
       (this->threshold_high <= (float)n2)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x135:
  case 0x136:
  case 0x145:
    if (((0 < (int)(((u1 ^ u4) - u4 & 1 ^ u4) - u4)) &&
        (this->threshold < (float)n2)) &&
       ((float)n2 < this->threshold_high)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x137:
  case 0x138:
  case 0x146:
    if ((((int)(((u1 ^ u4) - u4 & 1 ^ u4) - u4) < 1) &&
        (this->threshold < (float)n2)) &&
       ((float)n2 < this->threshold_high)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x140:
  case 0x141:
  case 0x142:
    if ((this->threshold <= (float)n2) &&
       ((float)n2 < this->threshold_high)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x143:
  case 0x144:
    b6 = (float)n2 <= this->threshold;
    goto sw_120;
  case 0x151:
  case 0x155:
  case 0x157:
  case 0x161:
  case 0x165:
  case 0x167:
    if (((float)(int)u1 <= this->threshold) ||
       (b6 = true, this->threshold_high <= (float)(int)u1)) {
      b6 = false;
    }
    if ((b6) && (this->threshold_extra < (float)n2)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x152:
  case 0x156:
  case 0x158:
  case 0x162:
  case 0x166:
  case 0x168:
    if (((float)(int)u1 <= this->threshold) ||
       (b6 = true, this->threshold_high <= (float)(int)u1)) {
      b6 = false;
    }
    if ((b6) && ((float)n2 < this->threshold_extra)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x153:
  case 0x163:
    if ((((float)(int)u1 < this->threshold) &&
        (this->threshold_high < (float)n2)) &&
       ((float)n2 < this->threshold_extra)) {
      b6 = true;
      goto sw_120;
    }
    break;
  case 0x154:
  case 0x164:
    if (((this->threshold < (float)(int)u1) &&
        (this->threshold_high < (float)n2)) &&
       (b6 = true, (float)n2 < this->threshold_extra))
    goto sw_120;
  }
  b6 = false;
sw_120:
  this->is_correct = (uint)b6;
  return;
}


/* FUN_004136e0 @ 0x004136e0 */

int FUN_004136e0(int param_1)

{
  return *(int *)(&DAT_0047ef64 + param_1 * 0x2c);
}


/* FUN_00413700 @ 0x00413700 */

int FUN_00413700(int param_1)

{
  return *(int *)(&DAT_0047ef68 + param_1 * 0x2c);
}


/* FUN_00413720 @ 0x00413720 */

int FUN_00413720(int param_1)

{
  return *(int *)(&DAT_0047ef6c + param_1 * 0x2c);
}


/* FUN_00413740 @ 0x00413740 */

int FUN_00413740(int param_1)

{
  return *(int *)(&DAT_0047ef70 + param_1 * 0x2c);
}


/* FUN_00413760 @ 0x00413760 */

int FUN_00413760(int param_1)

{
  return *(int *)(&DAT_0047ef88 + param_1 * 0x2c);
}


/* FUN_00413780 @ 0x00413780 */

void FUN_00413780(int param_1)

{
  FUN_00413740(param_1);
  return;
}


/* FUN_00413790 @ 0x00413790 */

int FUN_00413790(int param_1)

{
  return *(int *)(&DAT_0047ef74 + param_1 * 0x2c);
}


/* FUN_004137b0 @ 0x004137b0 */

int FUN_004137b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
    /* STUB: 13 lines not yet reconstructed */
    return 0;
}


/* FUN_00413810 @ 0x00413810 */

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


/* FUN_00413840 @ 0x00413840 */

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


/* FUN_00413900 @ 0x00413900 */

/* Function cleaned: param_1 is a large struct (>0x1E8 bytes), likely MathProblem-related
 * TODO: offsets 0x1D2-0x1E6 are beyond DialogWidget, unknown struct type */
int * __fastcall FUN_00413900(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;

  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_004139b9;
  *__seh_chain = &loc_10;
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
  *__seh_chain = loc_10;
  return param_1;
}


/* FUN_00413c66 @ 0x00413c66 */

void FUN_00413c66(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00413d4e @ 0x00413d4e */

void FUN_00413d4e(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00413e03 @ 0x00413e03 */

void FUN_00413e03(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00413e99 @ 0x00413e99 */

void FUN_00413e99(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00413f4e @ 0x00413f4e */

void FUN_00413f4e(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00413fe4 @ 0x00413fe4 */

void FUN_00413fe4(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00414099 @ 0x00414099 */

void FUN_00414099(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_0041414e @ 0x0041414e */

void FUN_0041414e(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_004141e4 @ 0x004141e4 */

void FUN_004141e4(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_004142a3 @ 0x004142a3 */

void FUN_004142a3(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}


/* FUN_00414370 @ 0x00414370 */

void FUN_00414370(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_004842a8,u1,__param_fffffff4);
  return;
}


/* FUN_004143c0 @ 0x004143c0 */

void FUN_004143c0(void)

{
  return;
}


/* FUN_004143e0 @ 0x004143e0 */

/* NOTE: overlapping globals */

void FUN_004143e0(void)

{
  _DAT_004842b6 = 0;
  _DAT_004842b4 = 0;
  return;
}


/* FUN_004143f0 @ 0x004143f0 */

void FUN_004143f0(void)

{
  _atexit(FUN_00414400);
  return;
}


/* FUN_00414400 @ 0x00414400 */

void FUN_00414400(void)

{
  return;
}


/* FUN_00414410 @ 0x00414410 */

/* Function cleaned: param_1 is MathProblem */
void __fastcall FUN_00414410(MathProblem *param_1)

{
  FUN_00414420(param_1,0);
  return;
}


/* FUN_00414420 @ 0x00414420 */

/* Function cleaned: returns address of this->slots[param_1] */
int __thiscall FUN_00414420(MathProblem *this,int param_1)

{
  return (int)&this->slots[param_1];
}


/* FUN_00414440 @ 0x00414440 */

int __thiscall FUN_00414440(MathProblem *this,uint param_1,char param_2)

{
  char u1;
  char c2;
  uint u3;
  int n4;
  int n6;
  int n7;
  uint u8;
  char *pc9;
  int *pn10;
  int *pn11;
  
  if (((param_2 == '\0') && (this->threshold != '\0')) &&
     (this->active_flag != 0)) {
    return (int)&this->slots[param_1].value;
  }
  if (param_1 == 0) {
    switch(this->problem_type) {
    case 0x211:
      n4 = rand();
      n4 = n4 % 3 + 1;
      this->slots[0].value = n4;
      this->slots[1].value = n4;
      n4 = rand();
      u1 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[0].symbol = u1;
      this->slots[1].symbol = u1;
      break;
    case 0x212:
      n4 = rand();
      n4 = n4 % 5 + 10;
      this->slots[0].value = n4;
      this->slots[1].value = n4;
      n4 = rand();
      u1 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[0].symbol = u1;
      this->slots[1].symbol = u1;
      break;
    case 0x213:
      n4 = rand();
      this->slots[0].value = n4 % 5 + 10;
      n4 = rand();
      u1 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[0].symbol = u1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = u1;
      break;
    case 0x214:
      this->slots[0].flags = 5;
      FUN_00417010(this,1,0xc,1);
      break;
    case 0x221:
      n4 = rand();
      this->slots[0].value = n4 % 3 + 1;
      n4 = rand();
      u1 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[0].symbol = u1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = u1;
      break;
    case 0x222:
      n4 = rand();
      this->slots[0].value = n4 % 5 + 10;
      n4 = rand();
      u1 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[0].symbol = u1;
      this->slots[1].value = this->slots[0].value;
      this->slots[1].symbol = u1;
      break;
    case 0x223:
      this->slots[0].flags = 5;
      FUN_00417010(this,1,0x14,1);
      break;
    case 0x224:
      this->slots[0].flags = 0;
      n4 = rand();
      this->slots[0].result = n4 % 0x14 + 1;
      do {
        n4 = rand();
        n4 = n4 % 0x12 + 2;
        this->operand_a = n4;
      } while (this->slots[0].result == n4);
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
      n4 = rand();
      this->slots[0].result = n4 % 0x14 + 1;
      do {
        n4 = rand();
        n4 = n4 % 0x14 + 1;
        this->operand_a = n4;
      } while (this->slots[0].result == n4);
      break;
    case 0x241:
      FUN_004170a0(this,1000,10000,1000);
      break;
    case 0x242:
      this->slots[0].flags = 0;
      n4 = rand();
      this->slots[0].result = ((n4 % 0x28) * 5 + 5) * 2;
      do {
        n4 = rand();
        n4 = ((n4 % 0x28) * 5 + 5) * 2;
        this->operand_a = n4;
      } while (this->slots[0].result == n4);
      break;
    case 0x243:
      this->slots[0].flags = 5;
      n4 = rand();
      this->slots[0].result = ((n4 % 10) * 5 + 5) * 2;
      n4 = rand();
      this->operation = 3;
      this->operand_a = ((n4 % 10) * 5 + 5) * 2;
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
      pn11 = (int *)&this->slots[0].denom;
      pn10 = (int *)&this->slots[0].result;
      FUN_00417240(pn10,pn11);
      this->slots[1].result = *pn10;
      this->slots[1].denom = *pn11;
      *pn10 = *pn10 * 2;
      this->slots[0].flags = 0x20;
      this->slots[1].flags = 0x20;
      *pn11 = *pn11 * 2;
      break;
    case 0x252:
      pn11 = (int *)&this->slots[0].denom;
      pn10 = (int *)&this->slots[0].result;
      FUN_00417240(pn10,pn11);
      n4 = rand();
      this->slots[0].flags = 0x10;
      this->slots[1].flags = 0x30;
      *pn10 = *pn10 + (n4 % 5 + 1) * *pn11;
      this->slots[1].denom = *pn11;
      this->slots[1].result = *pn10;
      break;
    case 0x253:
      this->slots[0].flags = 0;
      n4 = rand();
      this->slots[0].result = ((n4 % 0x28) * 4 + 4) * 0x19;
      do {
        n4 = rand();
        n4 = ((n4 % 0x28) * 4 + 4) * 0x19;
        this->operand_a = n4;
      } while (this->slots[0].result == n4);
      break;
    case 0x254:
      this->slots[0].flags = 5;
      n4 = rand();
      this->slots[0].result = ((n4 % 10) * 4 + 4) * 0x19;
      n4 = rand();
      this->operation = 3;
      n4 = ((n4 % 10) * 4 + 4) * 0x19;
      this->operand_a = n4;
      this->slots[1].result = this->slots[0].result * n4;
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
      u3 = rand();
      this->slots[0].flags = 5;
      if ((u3 & 1) == 0) {
        n4 = rand();
        this->slots[1].denom = 10;
        this->slots[1].result = n4 % 0x32 + 0x32;
        n4 = rand();
        this->operand_a_denom = 10;
        this->operation = 4;
        this->slots[0].denom = 100;
        this->slots[0].flags = this->slots[0].flags | 0x30;
        this->operation = 0x34;
        n4 = n4 % 0x32 + 0x32;
        this->operand_a = n4;
        this->slots[1].flags = this->slots[1].flags | 0x30;
        this->slots[0].result = n4 * this->slots[1].result;
      }
      else {
        n4 = rand();
        this->slots[0].denom = 10;
        this->slots[0].result = n4 % 0x32 + 0x32;
        n4 = rand();
        this->operand_a_denom = 10;
        this->operation = 3;
        n4 = n4 % 0x32 + 0x32;
        this->slots[0].flags = this->slots[0].flags | 0x30;
        this->operand_a = n4;
        this->slots[1].result = this->slots[0].result * n4;
        this->slots[1].denom = 100;
        this->slots[1].flags = this->slots[1].flags | 0x30;
        this->operation = 0x33;
      }
      break;
    case 0x261:
      n4 = rand();
      this->factor = n4 % 5 + 2;
      FUN_00417240((int *)&this->slots[1].result,(int *)&this->slots[1].denom);
      this->slots[1].flags = 0x20;
      this->slots[0].flags = 0x20;
      this->slots[0].result = this->slots[1].result * this->factor;
      this->slots[0].denom = this->slots[1].denom * this->factor;
      break;
    case 0x262:
      pn11 = (int *)&this->slots[0].denom;
      pn10 = (int *)&this->slots[0].result;
      FUN_00417240(pn10,pn11);
      n4 = rand();
      this->slots[0].flags = 0x20;
      this->slots[1].flags = 0x10;
      *pn10 = *pn10 + (n4 % 5 + 1) * *pn11;
      this->slots[1].denom = *pn11;
      this->slots[1].result = *pn10;
      break;
    case 0x263:
      pn11 = (int *)&this->slots[0].denom;
      pn10 = (int *)&this->slots[0].result;
      FUN_00417240(pn10,pn11);
      n4 = rand();
      this->slots[0].flags = 0x10;
      this->slots[1].flags = 0x30;
      *pn10 = *pn10 + (n4 % 5 + 1) * *pn11;
      this->slots[1].denom = *pn11;
      this->slots[1].result = *pn10;
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
      n4 = rand();
      this->slots[0].denom = 100;
      this->slots[0].flags = this->slots[0].flags | 0x40;
      this->slots[0].result = (n4 % 5) * 5 + 5;
      n4 = rand();
      this->operation = 3;
      this->operand_a = ((n4 % 5) * 4 + 4) * 5;
      this->slots[1].result =
           (this->slots[0].result * this->operand_a) / 100;
    }
    goto sw_215;
  }
  u3 = this->correct_slot;
  if (param_1 == u3) {
    if (this->threshold == '\0') {
      switch(this->problem_type) {
      case 0x224:
      case 0x236:
      case 0x242:
      case 0x253:
        n4 = this->slots[0].result;
        n7 = this->operand_a;
        if (n7 < n4) {
          pn11 = (int *)&this->slots[param_1].result;
          *pn11 = n4 - n7;
          this->slots[param_1].flags = 1;
        }
        else {
          pn11 = (int *)&this->slots[param_1].result;
          *pn11 = n7 - n4;
          this->slots[param_1].flags = 2;
        }
        u3 = 1;
        pn10 = (int *)&this->slots[1].result;
        this->slots[param_1].denom = this->slots[0].denom;
        do {
          if ((param_1 != u3) && (*pn11 == *pn10)) {
            FUN_00414440(this,u3,'\0');
          }
          pn10 = (int *)((int)pn10 + 0x12);
          u3 = u3 + 1;
        } while ((int)u3 < 6);
      }
      goto sw_215;
    }
    if (param_1 == u3) goto sw_215;
  }
  switch(this->problem_type) {
  case 0x211:
    do {
      n4 = rand();
      n4 = n4 % 3 + 1;
      this->slots[param_1].value = n4;
    } while (n4 == this->slots[0].value);
    this->slots[param_1].symbol = this->slots[0].symbol;
    break;
  case 0x212:
    do {
      n4 = rand();
      n4 = n4 % 5 + 10;
      this->slots[param_1].value = n4;
    } while (n4 == this->slots[0].value);
    this->slots[param_1].symbol = this->slots[0].symbol;
    break;
  case 0x213:
    do {
      n4 = rand();
      n4 = n4 % 5 + 10;
      this->slots[param_1].value = n4;
    } while (n4 == this->slots[0].value);
    pc9 = (char *)&this->slots[param_1].symbol;
    n4 = rand();
    c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
    *pc9 = c2;
    if (c2 == this->slots[0].symbol) {
      do {
        n4 = rand();
        c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
        *pc9 = c2;
      } while (c2 == this->slots[0].symbol);
    }
    break;
  case 0x214:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -1;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 0xc + 1;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x221:
    if ((param_1 == 2) || (param_1 == 3)) {
      this->slots[param_1].value =
           this->slots[u3].value;
      if ((param_1 & 1) == 0) {
        pc9 = (char *)&this->slots[param_1].symbol;
        n4 = rand();
        c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
        *pc9 = c2;
        if (c2 == this->slots[0].symbol) {
          do {
            n4 = rand();
            c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
            *pc9 = c2;
          } while (c2 == this->slots[0].symbol);
        }
      }
      else {
        pc9 = (char *)&this->slots[param_1].symbol;
        n4 = rand();
        c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
        *pc9 = c2;
        if (c2 == this->slots[0].symbol) {
          do {
            n4 = rand();
            c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
            *pc9 = c2;
          } while (c2 == this->slots[0].symbol);
        }
      }
    }
    else {
      do {
        u3 = rand();
        u8 = (int)u3 >> 0x1f;
        n4 = (((u3 ^ u8) - u8 & 7 ^ u8) - u8) + 1;
        this->slots[param_1].value = n4;
      } while (n4 == this->slots[0].value);
      n4 = rand();
      c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      this->slots[param_1].symbol = c2;
      if (c2 == this->slots[0].symbol) {
        do {
          n4 = rand();
          c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
          this->slots[param_1].symbol = c2;
        } while (c2 == this->slots[0].symbol);
      }
    }
    break;
  case 0x222:
    if ((param_1 == 2) || (param_1 == 3)) {
      this->slots[param_1].value =
           this->slots[u3].value;
      if ((param_1 & 1) == 0) {
        pc9 = (char *)&this->slots[param_1].symbol;
        n4 = rand();
        c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
        *pc9 = c2;
        if (c2 == this->slots[0].symbol) {
          do {
            n4 = rand();
            c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
            *pc9 = c2;
          } while (c2 == this->slots[0].symbol);
        }
      }
      else {
        pc9 = (char *)&this->slots[param_1].symbol;
        n4 = rand();
        c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
        *pc9 = c2;
        if (c2 == this->slots[0].symbol) {
          do {
            n4 = rand();
            c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
            *pc9 = c2;
          } while (c2 == this->slots[0].symbol);
        }
      }
    }
    else {
      do {
        n4 = rand();
        n4 = n4 % 5 + 10;
        this->slots[param_1].value = n4;
      } while (n4 == this->slots[0].value);
      pc9 = (char *)&this->slots[param_1].symbol;
      n4 = rand();
      c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
      *pc9 = c2;
      if (c2 == this->slots[0].symbol) {
        do {
          n4 = rand();
          c2 = (&DAT_0047f0b0)[(n4 % 7) * 4];
          *pc9 = c2;
        } while (c2 == this->slots[0].symbol);
      }
    }
    break;
  case 0x223:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -1;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 0x12 + 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x224:
  case 0x236:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -1;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if ((param_1 == 4) && (this->slots[u3].flags == 2)) {
      this->slots[4].result = this->slots[u3].result;
      this->slots[4].flags = 1;
    }
    else {
      pn11 = (int *)&this->slots[param_1].result;
      do {
        u3 = rand();
        if ((u3 & 1) == 0) {
          n7 = rand();
          *pn11 = n7 % 0x12 + 2;
          n7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*pn11 <= n7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          n7 = rand();
          *pn11 = n7 % 0x12 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *pn11);
    }
    break;
  case 0x231:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -100;
    }
    else {
      do {
        n4 = rand();
        n4 = ((n4 % 9) * 4 + 4) * 0x19;
        this->slots[param_1].result = n4;
      } while (this->slots[this->correct_slot].result == n4);
    }
    break;
  case 0x232:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -10;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = ((n4 % 9) * 5 + 5) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x233:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -10;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 999 + 1;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x234:
    pn11 = (int *)&this->slots[param_1].result;
    do {
      u3 = rand();
      if ((u3 & 1) == 0) {
        n4 = rand();
        *pn11 = this->slots[this->correct_slot].result + n4 % 5 + 1;
      }
      else {
        n4 = this->slots[this->correct_slot].result;
        n7 = rand();
        *pn11 = (n4 - n7 % 5) + -1;
      }
    } while (*pn11 < 0);
    break;
  case 0x235:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 10;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -10;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 0x62 + 0x33;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x241:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1000;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -1000;
    }
    else {
      do {
        n4 = rand();
        n4 = ((n4 % 9) * 5 + 5) * 200;
        this->slots[param_1].result = n4;
      } while (this->slots[this->correct_slot].result == n4);
    }
    break;
  case 0x242:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 10;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -10;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 4) {
      this->slots[4].result = this->slots[u3].result;
      if (this->slots[this->correct_slot].flags == 1) {
        this->slots[4].flags = 2;
      }
      else {
        this->slots[4].flags = 1;
      }
    }
    else {
      pn11 = (int *)&this->slots[param_1].result;
      do {
        u3 = rand();
        if ((u3 & 1) == 0) {
          n7 = rand();
          *pn11 = (n7 % 0x12) * 10 + 2;
          n7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*pn11 <= n7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          n7 = rand();
          *pn11 = (n7 % 0x12) * 10 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *pn11);
    }
    break;
  case 0x243:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -100;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = ((n4 % 0x14) * 5 + 5) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x244:
    pn11 = (int *)&this->slots[param_1].result;
    do {
      u3 = rand();
      if ((u3 & 1) == 0) {
        n4 = rand();
        *pn11 = this->slots[this->correct_slot].result + n4 % 10 + 1
        ;
      }
      else {
        n4 = this->slots[this->correct_slot].result;
        n7 = rand();
        *pn11 = (n4 - n7 % 10) + -1;
      }
    } while (*pn11 < 0);
    break;
  case 0x245:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 0x32;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -0x32;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 900 + 100;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
    break;
  case 0x246:
    pn11 = (int *)&this->slots[param_1].result;
    do {
      u3 = rand();
      if ((u3 & 1) == 0) {
        n4 = rand();
        *pn11 = this->slots[this->correct_slot].result + n4 % 10 + 1
        ;
      }
      else {
        n4 = this->slots[this->correct_slot].result;
        n7 = rand();
        *pn11 = (n4 - n7 % 10) + -1;
      }
    } while (*pn11 < 0);
    this->slots[param_1].flags = 0x30;
    this->slots[param_1].denom =
         this->slots[this->correct_slot].denom;
    break;
  case 0x251:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1;
      this->slots[2].denom =
           this->slots[this->correct_slot].denom + 1;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + 2;
      this->slots[3].denom =
           this->slots[this->correct_slot].denom + 2;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 10 + 1;
        n4 = rand();
        this->slots[param_1].denom = n4 % 10 + 1;
      } while ((float10)(this->slots[param_1].result / this->slots[param_1].denom) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x20;
    break;
  case 0x252:
    if (param_1 == 2) {
      n4 = this->slots[u3].result;
      n7 = this->slots[u3].denom;
      n6 = rand();
      this->slots[2].result = (n4 * 100) / n7 + (n6 % 0x5a + 10) / 10;
      this->slots[2].denom = 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result =
           (this->slots[u3].result * 100) /
           this->slots[u3].denom + 10;
      this->slots[3].denom = 100;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 900 + 100;
        this->slots[param_1].denom = 100;
      } while ((float10)(this->slots[param_1].result / 100) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x30;
    break;
  case 0x253:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 100;
      this->slots[2].flags =
           this->slots[this->correct_slot].flags;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -100;
      this->slots[3].flags =
           this->slots[this->correct_slot].flags;
    }
    else if ((param_1 == 4) && (this->slots[u3].flags == 2)) {
      this->slots[4].result = this->slots[u3].result;
      this->slots[4].flags = 1;
    }
    else {
      pn11 = (int *)&this->slots[param_1].result;
      do {
        u3 = rand();
        if ((u3 & 1) == 0) {
          n7 = rand();
          *pn11 = (n7 % 0x12) * 100 + 2;
          n7 = this->slots[this->correct_slot].result;
          this->slots[param_1].flags = 1;
          if (*pn11 <= n7) {
            this->slots[param_1].flags = 2;
          }
        }
        else {
          n7 = rand();
          *pn11 = (n7 % 0x12) * 100 + 2;
          this->slots[param_1].flags = 1;
        }
      } while (this->slots[this->correct_slot].result == *pn11);
    }
    break;
  case 0x254:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result = this->slots[u3].result + -100;
    }
    else if (param_1 == 4) {
      do {
        n4 = rand();
        this->slots[4].result = ((n4 % 900) * 5 + 500) * 2;
      } while (this->slots[this->correct_slot].result ==
               this->slots[4].result);
    }
    else {
      do {
        n4 = rand();
        n4 = ((n4 % 0x5a) * 4 + 0x28) * 0x19;
        this->slots[param_1].result = n4;
      } while (this->slots[this->correct_slot].result == n4);
    }
    break;
  case 0x255:
    if (param_1 == 2) {
      this->slots[2].result = this->slots[u3].result + 1000;
    }
    else {
      if (param_1 == 3) {
        if (1000 < this->slots[3].result) {
          this->slots[3].result = this->slots[u3].result + -1000;
          goto __label_00415df9;
        }
      }
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 10000 + 500;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
__label_00415df9:
    this->slots[param_1].flags = 0x50;
    this->slots[param_1].denom = 100;
    break;
  case 0x256:
    do {
      n4 = rand();
      n7 = rand();
      n4 = (n4 % 0x32 + 0x32) * (n7 % 0x55 + 5);
      this->slots[param_1].result = n4;
      u3 = this->slots[this->correct_slot].result - n4;
      u8 = (int)u3 >> 0x1f;
    } while ((int)((u3 ^ u8) - u8) < 200);
    this->slots[param_1].flags = 0x30;
    this->slots[param_1].denom = 100;
    break;
  case 0x261:
    if ((param_1 == 2) &&
       (n4 = this->slots[u3].result + 1,
       n4 % (this->slots[u3].denom + 1) != 0)) {
      this->slots[2].result = n4;
      this->slots[2].denom =
           this->slots[this->correct_slot].denom + 1;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 100 + 1;
        n4 = rand();
        this->slots[param_1].denom = n4 % 100 + 1;
      } while ((float10)(this->slots[0].result / this->slots[0].denom) ==
               (float10)(this->slots[param_1].result / this->slots[param_1].denom));
    }
    this->slots[param_1].flags = 0x20;
    break;
  case 0x262:
    if (param_1 == 2) {
      if (this->slots[u3].result != 0) {
        this->slots[2].denom = this->slots[u3].denom;
        n4 = this->slots[this->correct_slot].result;
        if (n4 % this->slots[this->correct_slot].denom == 1) {
          n4 = n4 + 1;
        }
        else {
          n4 = n4 + -1;
        }
        this->slots[2].result = n4;
      }
      pn11 = (int *)&this->slots[2].denom;
      if (this->slots[2].result % *pn11 == 0) {
        if (*pn11 == 2) {
          *pn11 = this->slots[this->correct_slot].denom + 2;
        }
        this->slots[2].result = *pn11 + 1;
      }
    }
    else {
      pn11 = (int *)&this->slots[param_1].denom;
      pn10 = (int *)&this->slots[param_1].result;
      do {
        FUN_00417240(pn10,pn11);
        n4 = rand();
        *pn10 = *pn10 + (n4 % 7 + 1) * *pn11;
      } while (this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom ==
               *pn10 / *pn11);
      if (*pn10 % *pn11 == 0) {
        n4 = this->slots[this->correct_slot].denom;
        *pn11 = n4 + 1;
        *pn10 = n4 + 2;
      }
    }
    this->slots[param_1].flags = 0x10;
    break;
  case 0x263:
    if (param_1 == 2) {
      n4 = this->slots[u3].result;
      n7 = this->slots[u3].denom;
      n6 = rand();
      this->slots[2].result = (n4 * 100) / n7 + (n6 % 0x5a + 10) / 10;
      this->slots[2].denom = 100;
    }
    else if (param_1 == 3) {
      this->slots[3].result =
           (this->slots[u3].result * 100) /
           this->slots[u3].denom + 10;
      this->slots[3].denom = 100;
    }
    else {
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 900 + 100;
        this->slots[param_1].denom = 100;
      } while ((float10)(this->slots[param_1].result / 100) ==
               (float10)(this->slots[this->correct_slot].result / this->slots[this->correct_slot].denom))
      ;
    }
    this->slots[param_1].flags = 0x30;
    break;
  case 0x264:
    pn11 = (int *)&this->slots[param_1].denom;
    pn10 = (int *)&this->slots[param_1].result;
    do {
      FUN_00417240(pn10,pn11);
    } while ((float10)*pn10 / (float10)*pn11 ==
             (float10)this->slots[this->correct_slot].result /
             (float10)this->slots[this->correct_slot].denom);
    this->slots[param_1].flags = 0x40;
    break;
  case 0x265:
    do {
      n4 = rand();
      this->slots[param_1].result = n4 % 100 + 1;
      this->slots[param_1].denom = 1;
    } while (this->slots[this->correct_slot].result ==
             this->slots[param_1].result);
  }
sw_215:
  return (int)&this->slots[param_1].value;
}


/* FUN_004166e0 @ 0x004166e0 */

/* NOTE: overlapping globals */

void FUN_004166e0(void)

{
  _DAT_004842b2 = 0;
  _DAT_004842b0 = 0;
  return;
}


/* FUN_004166f0 @ 0x004166f0 */

void FUN_004166f0(void)

{
  _atexit(FUN_00416700);
  return;
}


/* FUN_00416700 @ 0x00416700 */

void FUN_00416700(void)

{
  return;
}


/* FUN_00416710 @ 0x00416710 */

void * FUN_00416710(int param_1,int param_2,uint param_3,int param_4)

{
    /* STUB: 3 lines not yet reconstructed */
    return;
}


/* FUN_0041680d @ 0x0041680d */

void FUN_0041680d(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416861 @ 0x00416861 */

void FUN_00416861(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_004168b8 @ 0x004168b8 */

void FUN_004168b8(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_0041690f @ 0x0041690f */

void FUN_0041690f(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416970 @ 0x00416970 */

void FUN_00416970(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* Function: caseD_0 @ 0x00416978 */

int sw_0(void)

{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_00416a4a @ 0x00416a4a */

void FUN_00416a4a(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416c79 @ 0x00416c79 */

void FUN_00416c79(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416c81 @ 0x00416c81 */

void FUN_00416c81(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416d2b @ 0x00416d2b */

void FUN_00416d2b(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416d33 @ 0x00416d33 */

void FUN_00416d33(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416dab @ 0x00416dab */

void FUN_00416dab(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416dc7 @ 0x00416dc7 */

int FUN_00416dc7(void)

{
    /* STUB: 29 lines not yet reconstructed */
    return 0;
}


/* FUN_00416e22 @ 0x00416e22 */

void FUN_00416e22(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416e2a @ 0x00416e2a */

void FUN_00416e2a(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416e32 @ 0x00416e32 */

void FUN_00416e32(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416e3a @ 0x00416e3a */

void FUN_00416e3a(void)

{
  int __saved_ebp;
  
  FUN_00413810((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416e4a @ 0x00416e4a */

void FUN_00416e4a(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x6c));
  return;
}


/* FUN_00416e64 @ 0x00416e64 */

void FUN_00416e64(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x28));
  return;
}


/* FUN_00416ef0 @ 0x00416ef0 */

/* Function cleaned: param_1 is MathProblem; 0x1FE=operand_a, 0x202=operand_a_denom, 0x206=operation */
void __fastcall FUN_00416ef0(MathProblem *this)

{
  FUN_00416710(this->operand_a,this->operand_a_denom,this->operation,1);
  return;
}


/* FUN_00416f10 @ 0x00416f10 */

/* Function cleaned: this is MathProblem; accesses slots[param_1].result/denom/flags */
void __thiscall FUN_00416f10(MathProblem *this,int param_1)

{
  FUN_00416710(this->slots[param_1].result,this->slots[param_1].denom,
               this->slots[param_1].flags,0);
  return;
}


/* FUN_00416f40 @ 0x00416f40 */

char __thiscall FUN_00416f40(MathProblem *this,uint param_1)

{
  int *pu1;
  int n2;
  
  pu1 = (int *)&this->is_correct;
  if (this->correct_slot == param_1) {
    *pu1 = 1;
  }
  else {
    *pu1 = 0;
  }
  if (this->threshold != '\0') goto __label_00416ff3;
  switch(this->slots[param_1].flags) {
  case 1:
    this->operand_a = this->operand_a + this->slots[param_1].result;
    break;
  case 2:
    this->operand_a = this->operand_a - this->slots[param_1].result;
    break;
  case 3:
    n2 = this->slots[param_1].result * this->operand_a;
    goto __label_00416fc6;
  case 4:
    n2 = this->operand_a / this->slots[param_1].result;
__label_00416fc6:
    this->operand_a = n2;
  }
  if (this->operand_a < 0) {
    this->operand_a = 0;
  }
  this->correct_slot = param_1;
  if (this->active_flag != 0) {
    FUN_00414440(this,param_1,'\x01');
  }
__label_00416ff3:
  return *(char *)pu1;
}


/* FUN_00417010 @ 0x00417010 */

int __thiscall FUN_00417010(MathProblem *this,int param_1,int param_2,int param_3)

{
  uint u1;
  int n2;
  uint u3;
  
  this->slots[0].flags = 5;
  u1 = rand();
  u3 = (int)u1 >> 0x1f;
  if (((u1 ^ u3) - u3 & 1 ^ u3) == u3) {
    n2 = FUN_0044d460(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a,-1,-1,-1,-1);
    this->operation = 2;
    this->slots[1].result = n2;
  }
  else {
    n2 = FUN_0044d400(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a);
    this->operation = 1;
    this->slots[1].result = n2;
  }
  this->slots[0].denom = this->slots[1].denom;
  this->operand_a_denom = this->slots[1].denom;
  return 0;
}


/* FUN_004170a0 @ 0x004170a0 */

int __thiscall FUN_004170a0(void *this,int param_1,int param_2,int param_3)

{
    /* STUB: 18 lines not yet reconstructed */
    return 0;
}


/* FUN_00417140 @ 0x00417140 */

int __thiscall FUN_00417140(MathProblem *this,int param_1,int param_2,int param_3)

{
  uint u1;
  int n2;
  uint u3;
  
  this->slots[0].flags = 5;
  u1 = rand();
  u3 = (int)u1 >> 0x1f;
  if (((u1 ^ u3) - u3 & 1 ^ u3) == u3) {
    floor(SQRT((double)(param_2 / param_3)));
    ceil(SQRT((double)(param_1 / param_3)));
    n2 = FUN_0044d700(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a,-1,-1,-1,-1);
    this->operation = 4;
    this->slots[1].result = n2;
  }
  else {
    n2 = FUN_0044d610(param_1,param_2,param_3,(int *)&this->slots[0].result,
                         (int *)&this->operand_a);
    this->operation = 3;
    this->slots[1].result = n2;
  }
  this->slots[0].denom = this->slots[1].denom;
  this->operand_a_denom = this->slots[1].denom;
  return 0;
}


/* FUN_00417240 @ 0x00417240 */

int * __cdecl FUN_00417240(int *param_1,int *param_2)

{
  int n1;
  int *pu2;
  
  n1 = rand();
  pu2 = (int *)(n1 / 0xb);
  switch(n1 % 0xb) {
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
    pu2 = param_2;
  }
  return pu2;
}


/* FUN_00417320 @ 0x00417320 */

int * __thiscall FUN_00417320(CString *this,int param_1,uint param_2)

{
  char c1;
  int n2;
  uint *pu3;
  char *pc4;
  uint u5;
  uint u6;
  int *pu7;
  int *pu8;
  
  u6 = 0;
  *(void ***)this = &PTR_LAB_00472e04;
  this->pp_buffer = 0;
  this->capacity = 0;
  this->allocator = 0;
  this->extra_data = 0;
  this->owns_buffer = 0;
  this->tag = 0xffffffff;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pc4 = (char *)**(int **)(param_1 + 4), pc4 != (char *)0x0)) {
    c1 = *pc4;
    while (c1 != '\0') {
      pc4 = pc4 + 1;
      u6 = u6 + 1;
      c1 = *pc4;
    }
  }
  if ((0 < (int)param_2) && ((int)param_2 <= (int)u6)) {
    u6 = param_2;
  }
  if (-1 < (int)u6) {
    n2 = u6 + 1;
    if (n2 < 2) {
      n2 = 1;
    }
    n2 = (((int)(n2 + (n2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    pu3 = FUN_0046ccb0(DAT_00483df4,7,n2);
    this->pp_buffer = pu3;
    this->capacity = n2;
  }
  pu7 = (int *)**(int **)(param_1 + 4);
  pu8 = (int *)*this->pp_buffer;
  for (u5 = u6 >> 2; u5 != 0; u5 = u5 - 1) {
    *pu8 = *pu7;
    pu7 = pu7 + 1;
    pu8 = pu8 + 1;
  }
  for (u5 = u6 & 3; u5 != 0; u5 = u5 - 1) {
    *(char *)pu8 = *(char *)pu7;
    pu7 = (int *)((int)pu7 + 1);
    pu8 = (int *)((int)pu8 + 1);
  }
  *(char *)(*this->pp_buffer + u6) = 0;
  return this;
}


/* FUN_004173e0 @ 0x004173e0 */

void __thiscall FUN_004173e0(CString *this,char *param_1,uint param_2)

{
  char c1;
  int n2;
  int n3;
  LPCVOID pv4;
  uint *pu5;
  uint u6;
  char *pc7;
  uint u8;
  
  u8 = 0;
  if (param_1 != (char *)0x0) {
    c1 = *param_1;
    while (c1 != '\0') {
      u8 = u8 + 1;
      c1 = param_1[u8];
    }
    if ((0 < (int)param_2) && ((int)param_2 <= (int)u8)) {
      u8 = param_2;
    }
    if (this->capacity + -1 < (int)u8) {
      n2 = 0;
      pu5 = this->pp_buffer;
      if ((pu5 != (uint *)0x0) && (pc7 = (char *)*pu5, pc7 != (char *)0x0)) {
        c1 = *pc7;
        while (c1 != '\0') {
          pc7 = pc7 + 1;
          n2 = n2 + 1;
          c1 = *pc7;
        }
      }
      n3 = n2 + 1;
      if (n2 + 1 <= (int)(u8 + 1)) {
        n3 = u8 + 1;
      }
      n2 = (((int)(n3 + (n3 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (pu5 == (uint *)0x0) {
        pv4 = this->allocator;
        if (this->allocator == (LPCVOID)0x0) {
          pv4 = DAT_00483df4;
        }
        pu5 = FUN_0046ccb0(pv4,7,n2);
      }
      else {
        pu5 = FUN_0046cdc0(pu5,n2,7);
      }
      this->pp_buffer = pu5;
      this->capacity = n2;
    }
    pc7 = (char *)*this->pp_buffer;
    for (u6 = u8 >> 2; u6 != 0; u6 = u6 - 1) {
      *(int *)pc7 = *(int *)param_1;
      param_1 = param_1 + 4;
      pc7 = pc7 + 4;
    }
    for (u6 = u8 & 3; u6 != 0; u6 = u6 - 1) {
      *pc7 = *param_1;
      param_1 = param_1 + 1;
      pc7 = pc7 + 1;
    }
    *(char *)(*this->pp_buffer + u8) = 0;
  }
  return;
}


/* FUN_004174a0 @ 0x004174a0 */

void __thiscall FUN_004174a0(CString *this,int param_1,uint param_2)

{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  char *pc5;
  uint u6;
  int n7;
  uint u8;
  int *pu9;
  int *pu10;
  
  u8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pc5 = (char *)**(int **)(param_1 + 4), pc5 != (char *)0x0)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      u8 = u8 + 1;
      c1 = *pc5;
    }
  }
  if ((0 < (int)param_2) && ((int)param_2 <= (int)u8)) {
    u8 = param_2;
  }
  if (this->capacity + -1 < (int)u8) {
    n7 = 0;
    pu4 = this->pp_buffer;
    if ((pu4 != (uint *)0x0) && (pc5 = (char *)*pu4, pc5 != (char *)0x0)) {
      c1 = *pc5;
      while (c1 != '\0') {
        pc5 = pc5 + 1;
        n7 = n7 + 1;
        c1 = *pc5;
      }
    }
    n2 = u8 + 1;
    if ((int)(u8 + 1) <= n7 + 1) {
      n2 = n7 + 1;
    }
    n7 = (((int)(n2 + (n2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (pu4 == (uint *)0x0) {
      pv3 = this->allocator;
      if (this->allocator == (LPCVOID)0x0) {
        pv3 = DAT_00483df4;
      }
      pu4 = FUN_0046ccb0(pv3,7,n7);
    }
    else {
      pu4 = FUN_0046cdc0(pu4,n7,7);
    }
    this->pp_buffer = pu4;
    this->capacity = n7;
  }
  pu9 = (int *)**(int **)(param_1 + 4);
  pu10 = (int *)*this->pp_buffer;
  for (u6 = u8 >> 2; u6 != 0; u6 = u6 - 1) {
    *pu10 = *pu9;
    pu9 = pu9 + 1;
    pu10 = pu10 + 1;
  }
  for (u6 = u8 & 3; u6 != 0; u6 = u6 - 1) {
    *(char *)pu10 = *(char *)pu9;
    pu9 = (int *)((int)pu9 + 1);
    pu10 = (int *)((int)pu10 + 1);
  }
  *(char *)(*this->pp_buffer + u8) = 0;
  return;
}


/* FUN_00417570 @ 0x00417570 */

int __fastcall FUN_00417570(int param_1)

{
  char c1;
  int n2;
  char *pc3;
  
  n2 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pc3 = (char *)**(int **)(param_1 + 4), pc3 != (char *)0x0)) {
    c1 = *pc3;
    while (c1 != '\0') {
      pc3 = pc3 + 1;
      n2 = n2 + 1;
      c1 = *pc3;
    }
  }
  return n2;
}


/* FUN_00417590 @ 0x00417590 */

void __thiscall FUN_00417590(CString *this,int param_1)

{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  char *pc5;
  uint u6;
  int n7;
  int n8;
  char *pc9;
  int n10;
  
  n8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pc5 = (char *)**(int **)(param_1 + 4), pc5 != (char *)0x0)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      n8 = n8 + 1;
      c1 = *pc5;
    }
  }
  n7 = 0;
  pu4 = this->pp_buffer;
  if ((pu4 != (uint *)0x0) && (pc5 = (char *)*pu4, pc5 != (char *)0x0)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      n7 = n7 + 1;
      c1 = *pc5;
    }
  }
  if (n8 != 0) {
    if (this->capacity + -1 < n7 + n8) {
      n2 = 0;
      if ((pu4 != (uint *)0x0) && (pc5 = (char *)*pu4, pc5 != (char *)0x0)) {
        c1 = *pc5;
        while (c1 != '\0') {
          pc5 = pc5 + 1;
          n2 = n2 + 1;
          c1 = *pc5;
        }
      }
      n10 = n7 + n8 + 1;
      n7 = n2 + 1;
      if (n2 + 1 <= n10) {
        n7 = n10;
      }
      n7 = (((int)(n7 + (n7 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (pu4 == (uint *)0x0) {
        pv3 = this->allocator;
        if (this->allocator == (LPCVOID)0x0) {
          pv3 = DAT_00483df4;
        }
        pu4 = FUN_0046ccb0(pv3,7,n7);
      }
      else {
        pu4 = FUN_0046cdc0(pu4,n7,7);
      }
      this->pp_buffer = pu4;
      this->capacity = n7;
    }
    pc5 = (char *)0x0;
    if (this->pp_buffer != (int *)0x0) {
      pc5 = (char *)*this->pp_buffer;
      c1 = *pc5;
      while (c1 != '\0') {
        pc5 = pc5 + 1;
        c1 = *pc5;
      }
    }
    pc9 = (char *)**(int **)(param_1 + 4);
    for (u6 = n8 + 1U >> 2; u6 != 0; u6 = u6 - 1) {
      *(int *)pc5 = *(int *)pc9;
      pc9 = pc9 + 4;
      pc5 = pc5 + 4;
    }
    for (u6 = n8 + 1U & 3; u6 != 0; u6 = u6 - 1) {
      *pc5 = *pc9;
      pc9 = pc9 + 1;
      pc5 = pc5 + 1;
    }
  }
  return;
}


/* FUN_00417680 @ 0x00417680 */

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


/* FUN_004176a0 @ 0x004176a0 */

void __thiscall FUN_004176a0(CString *this,int param_1)

{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  int n5;
  char *pc6;
  
  if (this->capacity + -1 < param_1) {
    n5 = 0;
    pu4 = this->pp_buffer;
    if ((pu4 != (uint *)0x0) && (pc6 = (char *)*pu4, pc6 != (char *)0x0)) {
      c1 = *pc6;
      while (c1 != '\0') {
        pc6 = pc6 + 1;
        n5 = n5 + 1;
        c1 = *pc6;
      }
    }
    n2 = param_1 + 1;
    if (param_1 + 1 <= n5 + 1) {
      n2 = n5 + 1;
    }
    n5 = (((int)(n2 + (n2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (pu4 == (uint *)0x0) {
      pv3 = this->allocator;
      if (this->allocator == (LPCVOID)0x0) {
        pv3 = DAT_00483df4;
      }
      pu4 = FUN_0046ccb0(pv3,7,n5);
    }
    else {
      pu4 = FUN_0046cdc0(pu4,n5,7);
    }
    this->pp_buffer = pu4;
    this->capacity = n5;
  }
  return;
}


/* FUN_00417720 @ 0x00417720 */

void __thiscall FUN_00417720(void *this,int *param_1,uint param_2)

{
    /* STUB: 51 lines not yet reconstructed */
    return;
}


/* FUN_004177f0 @ 0x004177f0 */

int __thiscall FUN_004177f0(void *this,int param_1,char param_2)

{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_00417890 @ 0x00417890 */

DWORD __cdecl FUN_00417890(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    DVar1 = 0;
  }
  return DVar1;
}


/* FUN_004178b0 @ 0x004178b0 */

int __cdecl FUN_004178b0(HANDLE param_1,DWORD param_2)

{
    /* STUB: 10 lines not yet reconstructed */
    return 0;
}


/* FUN_004178e0 @ 0x004178e0 */

int __cdecl FUN_004178e0(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  int n2;
  uint u3;
  int u4;
  int n5;
  
  if (DAT_0047f1f4 == '\0') {
    u4 = FUN_004178b0(param_1,param_2);
    return u4;
  }
  DVar1 = FUN_00417890(param_1);
  n5 = (-(uint)(DVar1 < param_2) & 0xa00000) - 0x500000;
  n2 = (int)(param_2 - DVar1) / n5;
  if (n2 < 1) {
    n2 = (int)(DVar1 - param_2) / n5;
  }
  while( true ) {
    if (n2 == 0) {
      u4 = FUN_004178b0(param_1,param_2);
      return u4;
    }
    n2 = n2 + -1;
    u3 = FUN_004178b0(param_1,DVar1);
    if ((char)u3 == '\0') break;
    DVar1 = DVar1 + n5;
    if (DAT_0047f1fc == '\0') {
      FUN_00403230();
    }
    else {
      FUN_004564c0();
    }
  }
  return u3 & 0xffffff00;
}


/* FUN_004179a0 @ 0x004179a0 */

bool __cdecl FUN_004179a0(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
  BOOL flag1;
  uint u2;
  bool loc_5;
  DWORD loc_4;
  
  if (DAT_0047f1f0 == '\0') {
    loc_4 = param_2;
    flag1 = ReadFile(param_1,param_3,param_2,&loc_4,(LPOVERLAPPED)0x0);
    if (flag1 == 0) {
      return false;
    }
    return loc_4 == param_2;
  }
  u2 = param_2 >> 0x10;
  loc_5 = true;
  while( true ) {
    if (u2 == 0) {
      FUN_00403230();
      if (DAT_0047f1f8 != '\0') {
        FUN_004564c0();
      }
      if (param_2 != 0) {
        loc_4 = param_2;
        flag1 = ReadFile(param_1,param_3,param_2,&loc_4,(LPOVERLAPPED)0x0);
        if (flag1 == 0) {
          return false;
        }
        loc_5 = param_2 == loc_4;
      }
      return loc_5;
    }
    u2 = u2 - 1;
    FUN_00403230();
    if (DAT_0047f1f8 != '\0') {
      FUN_004564c0();
    }
    loc_4 = 0x10000;
    flag1 = ReadFile(param_1,param_3,0x10000,&loc_4,(LPOVERLAPPED)0x0);
    if (flag1 == 0 || loc_4 != 0x10000) break;
    param_2 = param_2 - 0x10000;
    param_3 = (LPVOID)((int)param_3 + 0x10000);
  }
  return false;
}


/* FUN_00417af0 @ 0x00417af0 */

void FUN_00417af0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_004842b8,u1,__param_fffffff4);
  return;
}


/* FUN_00417b40 @ 0x00417b40 */

void FUN_00417b40(void)

{
  return;
}


/* FUN_00417b60 @ 0x00417b60 */

/* NOTE: overlapping globals */

void FUN_00417b60(void)

{
  _DAT_004842c6 = 0;
  _DAT_004842c4 = 0;
  return;
}


/* FUN_00417b70 @ 0x00417b70 */

void FUN_00417b70(void)

{
  _atexit(FUN_00417b80);
  return;
}


/* FUN_00417b80 @ 0x00417b80 */

void FUN_00417b80(void)

{
  return;
}


/* FUN_00417ba0 @ 0x00417ba0 */

/* NOTE: overlapping globals */

void FUN_00417ba0(void)

{
  _DAT_004842c2 = 0;
  _DAT_004842c0 = 0;
  return;
}


/* FUN_00417bb0 @ 0x00417bb0 */

void FUN_00417bb0(void)

{
  _atexit(FUN_00417bc0);
  return;
}


/* FUN_00417bc0 @ 0x00417bc0 */

void FUN_00417bc0(void)

{
  return;
}


/* FUN_00417be0 @ 0x00417be0 */

void FUN_00417be0(void)

{
  DAT_0048615e = 0;
  DAT_0048615c = 0;
  return;
}


/* FUN_00417bf0 @ 0x00417bf0 */

void FUN_00417bf0(void)

{
  _atexit(FUN_00417c00);
  return;
}


/* FUN_00417c00 @ 0x00417c00 */

void FUN_00417c00(void)

{
  if ((DAT_0048614c & 1) == 0) {
    DAT_0048614c = DAT_0048614c | 1;
  }
  return;
}


/* FUN_00417c30 @ 0x00417c30 */

void FUN_00417c30(void)

{
  FUN_00451ee0((int *)&DAT_00485328);
  return;
}


/* FUN_00417c40 @ 0x00417c40 */

void FUN_00417c40(void)

{
  _atexit(FUN_00417c50);
  return;
}


/* FUN_00417c50 @ 0x00417c50 */

void FUN_00417c50(void)

{
  if ((DAT_0048614c & 2) == 0) {
    DAT_0048614c = DAT_0048614c | 2;
    FUN_00451f60((int *)&DAT_00485328);
    return;
  }
  return;
}


/* FUN_00417c70 @ 0x00417c70 */

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


/* FUN_00417ca0 @ 0x00417ca0 */

int * __thiscall FUN_00417ca0(void *this,byte param_1)

{
  FUN_00417cc0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00417cc0 @ 0x00417cc0 */

void __fastcall FUN_00417cc0(int *param_1)

{
  int *pn1;
  
  *param_1 = &PTR_LAB_00472e78;
  pn1 = param_1 + 1;
  if (*pn1 != 0) {
    FUN_00427220(pn1);
    *pn1 = 0;
  }
  return;
}


/* FUN_00417d80 @ 0x00417d80 */

void FUN_00417d80(void)

{
    /* STUB: 104 lines not yet reconstructed */
    return;
}


/* FUN_00417ec0 @ 0x00417ec0 */

void FUN_00417ec0(void)

{
  int n1;
  byte *pb2;
  char *pu3;
  ushort u4;
  ushort u5;
  
  if (DAT_0047f208 == 0) {
    FUN_00417d80();
    return;
  }
  n1 = *(int *)(DAT_0047f208 + 4);
  pb2 = DAT_00484f54;
  pu3 = DAT_00485c40;
  u4 = DAT_00486154;
  if (7 < (short)DAT_00486154) {
    u5 = DAT_00486154 >> 3;
    u4 = DAT_00486154 + u5 * -8;
    do {
      if (*pb2 != 0) {
        *pu3 = *(char *)((uint)*pb2 + n1);
      }
      if (pb2[1] != 0) {
        pu3[1] = *(char *)((uint)pb2[1] + n1);
      }
      if (pb2[2] != 0) {
        pu3[2] = *(char *)((uint)pb2[2] + n1);
      }
      if (pb2[3] != 0) {
        pu3[3] = *(char *)((uint)pb2[3] + n1);
      }
      if (pb2[4] != 0) {
        pu3[4] = *(char *)((uint)pb2[4] + n1);
      }
      if (pb2[5] != 0) {
        pu3[5] = *(char *)((uint)pb2[5] + n1);
      }
      if (pb2[6] != 0) {
        pu3[6] = *(char *)((uint)pb2[6] + n1);
      }
      if (pb2[7] != 0) {
        pu3[7] = *(char *)((uint)pb2[7] + n1);
      }
      pb2 = pb2 + 8;
      pu3 = pu3 + 8;
      u5 = u5 - 1;
    } while (u5 != 0);
  }
  if (u4 != 0) {
    switch(u4) {
    case 7:
      if (pb2[6] != 0) {
        pu3[6] = *(char *)((uint)pb2[6] + n1);
      }
    case 6:
      if (pb2[5] != 0) {
        pu3[5] = *(char *)((uint)pb2[5] + n1);
      }
    case 5:
      if (pb2[4] != 0) {
        pu3[4] = *(char *)((uint)pb2[4] + n1);
      }
    case 4:
      if (pb2[3] != 0) {
        pu3[3] = *(char *)((uint)pb2[3] + n1);
      }
    case 3:
      if (pb2[2] != 0) {
        pu3[2] = *(char *)((uint)pb2[2] + n1);
      }
    case 2:
      if (pb2[1] != 0) {
        pu3[1] = *(char *)((uint)pb2[1] + n1);
      }
    case 1:
      if (*pb2 != 0) {
        *pu3 = *(char *)((uint)*pb2 + n1);
      }
    }
  }
  return;
}


/* FUN_00418290 @ 0x00418290 */

void FUN_00418290(void)

{
    /* STUB: 112 lines not yet reconstructed */
    return;
}


/* FUN_00418520 @ 0x00418520 */

void FUN_00418520(void)

{
  char c1;
  char c2;
  char c3;
  char c4;
  int n5;
  int n6;
  int n7;
  short *ps8;
  int n9;
  int loc_4;
  
  n7 = DAT_00485c40;
  n6 = DAT_00485738;
  n5 = DAT_00484f54;
  n9 = (int)DAT_00486154;
  if (7 < n9) {
    ps8 = (short *)(DAT_00485738 + -2 + n9 * 2);
    do {
      c1 = *(char *)(*ps8 + n5);
      c2 = *(char *)(ps8[-1] + n5);
      loc_4 = (loc_4 & ~0xFFFF) | ((unsigned short)(CONCAT11(c2,c1)));
      c3 = *(char *)(ps8[-2] + n5);
      loc_4 = (loc_4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(c3,(short)loc_4)) & 0xFFFFFF);
      c4 = *(char *)(ps8[-3] + n5);
      loc_4 = CONCAT13(c4,(int)loc_4);
      if (loc_4 != 0) {
        if (c1 != '\0') {
          *(char *)(n9 + -1 + n7) = c1;
        }
        if (c2 != '\0') {
          *(char *)(n9 + -2 + n7) = c2;
        }
        if (c3 != '\0') {
          *(char *)(n9 + -3 + n7) = c3;
        }
        if (c4 != '\0') {
          *(char *)(n9 + -4 + n7) = c4;
        }
      }
      c1 = *(char *)(ps8[-4] + n5);
      c2 = *(char *)(ps8[-5] + n5);
      loc_4 = (loc_4 & ~0xFFFF) | ((unsigned short)(CONCAT11(c2,c1)));
      c3 = *(char *)(ps8[-6] + n5);
      loc_4 = (loc_4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(c3,(short)loc_4)) & 0xFFFFFF);
      c4 = *(char *)(ps8[-7] + n5);
      loc_4 = CONCAT13(c4,(int)loc_4);
      if (loc_4 != 0) {
        if (c1 != '\0') {
          *(char *)(n9 + -5 + n7) = c1;
        }
        if (c2 != '\0') {
          *(char *)(n9 + -6 + n7) = c2;
        }
        if (c3 != '\0') {
          *(char *)(n9 + -7 + n7) = c3;
        }
        if (c4 != '\0') {
          *(char *)(n9 + -8 + n7) = c4;
        }
      }
      ps8 = ps8 + -8;
      n9 = n9 + -8;
    } while (7 < n9);
  }
  if (n9 != 0) {
    switch(n9) {
    case 7:
      c1 = *(char *)(*(short *)(n6 + -0xe + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -7 + n7) = c1;
      }
    case 6:
      c1 = *(char *)(*(short *)(n6 + -0xc + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -6 + n7) = c1;
      }
    case 5:
      c1 = *(char *)(*(short *)(n6 + -10 + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -5 + n7) = c1;
      }
    case 4:
      c1 = *(char *)(*(short *)(n6 + -8 + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -4 + n7) = c1;
      }
    case 3:
      c1 = *(char *)(*(short *)(n6 + -6 + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -3 + n7) = c1;
      }
    case 2:
      c1 = *(char *)(*(short *)(n6 + -4 + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -2 + n7) = c1;
      }
    case 1:
      c1 = *(char *)(*(short *)(n6 + -2 + n9 * 2) + n5);
      if (c1 != '\0') {
        *(char *)(n9 + -1 + n7) = c1;
      }
    }
  }
  return;
}


/* FUN_004187a0 @ 0x004187a0 */

void FUN_004187a0(void)

{
  short s1;
  int n2;
  int n3;
  int n4;
  int n5;
  int n6;
  
  n5 = DAT_00485c40;
  n4 = DAT_00485738;
  n3 = DAT_00484f54;
  n2 = DAT_00484f48;
  s1 = DAT_00486154;
  while (s1 = s1 + -1, -1 < s1) {
    n6 = (int)s1;
    if (*(char *)(*(short *)(n4 + n6 * 2) + n2) != '\0') {
      *(char *)(n5 + n6) = *(char *)(n3 + n6);
    }
  }
  return;
}


/* FUN_00418820 @ 0x00418820 */

void FUN_00418820(void)

{
  char c1;
  int n2;
  int n3;
  short s4;
  
  n3 = DAT_00485c40;
  n2 = DAT_00484f54;
  s4 = DAT_00486154;
  while (s4 != 0) {
    s4 = s4 + -1;
    c1 = *(char *)(n2 + s4);
    if (c1 != '\0') {
      *(char *)(((int)DAT_00486154 - (int)s4) + -1 + n3) = c1;
    }
  }
  return;
}


/* FUN_00418970 @ 0x00418970 */

void FUN_00418970(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00485318,u1,__param_fffffff4);
  return;
}


/* FUN_004189c0 @ 0x004189c0 */

void FUN_004189c0(void)

{
  return;
}


/* FUN_004189d0 @ 0x004189d0 */

void FUN_004189d0(void)

{
  int n1;
  int n2;
  int n3;
  int n4;
  short s5;
  
  n3 = DAT_00485c40;
  n2 = DAT_00484f54;
  n1 = DAT_00484f48;
  s5 = DAT_00486154;
  while (s5 != 0) {
    s5 = s5 + -1;
    n4 = (int)s5;
    if (*(char *)(n4 + n1) != '\0') {
      *(char *)((DAT_00486154 - n4) + -1 + n3) = *(char *)(n2 + n4);
    }
  }
  return;
}


/* FUN_00418b70 @ 0x00418b70 */

/* NOTE: overlapping globals */

void FUN_00418b70(void)

{
  _DAT_00486152 = 0;
  _DAT_00486150 = 0;
  return;
}


/* FUN_00418b80 @ 0x00418b80 */

void FUN_00418b80(void)

{
  _atexit(FUN_00418b90);
  return;
}


/* FUN_00418b90 @ 0x00418b90 */

void FUN_00418b90(void)

{
  return;
}


/* FUN_00418bb0 @ 0x00418bb0 */

/* NOTE: overlapping globals */

void FUN_00418bb0(void)

{
  _DAT_0048614a = 0;
  _DAT_00486148 = 0;
  return;
}


/* FUN_00418bc0 @ 0x00418bc0 */

void FUN_00418bc0(void)

{
  _atexit(FUN_00418bd0);
  return;
}


/* FUN_00418bd0 @ 0x00418bd0 */

void FUN_00418bd0(void)

{
  return;
}


/* FUN_00418e40 @ 0x00418e40 */

void FUN_00418e40(short *param_1,short param_2,short param_3,short param_4,short param_5)

{
  ushort u1;
  short s2;
  short s3;
  short s4;
  short s5;
  short s6;
  int n7;
  int n8;
  short loc_e;
  short loc_4;
  
  *param_1 = 0;
  n8 = (int)param_3 - (int)param_2;
  u1 = (ushort)(n8 >> 0x1f);
  s2 = ((ushort)n8 ^ u1) - u1;
  n7 = (int)param_5 - (int)param_4;
  u1 = (ushort)(n7 >> 0x1f);
  s3 = ((ushort)n7 ^ u1) - u1;
  if ((s2 != 0) && (s3 != 0)) {
    s4 = 1;
    if (n8 < 1) {
      s4 = -1;
    }
    s5 = 1;
    if (n7 < 1) {
      s5 = -1;
    }
    loc_e = 0;
    s6 = -s2;
    if (-1 < s2) {
      loc_4 = s2 + 1;
      do {
        s6 = s3 * 2 + s6;
        if (-1 < param_2) {
          n7 = (int)loc_e;
          loc_e = loc_e + 1;
          param_1[n7] = param_4;
        }
        for (; -1 < s6; s6 = s6 + s2 * -2) {
          param_4 = param_4 + s5;
        }
        param_2 = param_2 + s4;
        loc_4 = loc_4 + -1;
      } while (loc_4 != 0);
    }
  }
  return;
}


/* FUN_00419020 @ 0x00419020 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419020(void *this,short *param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* STUB: 31 lines not yet reconstructed */
    return;
}


/* FUN_00419180 @ 0x00419180 */

void __thiscall
FUN_00419180(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_00419400 @ 0x00419400 */

void __thiscall
FUN_00419400(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)

{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_004194d0 @ 0x004194d0 */

void __thiscall
FUN_004194d0(void *this,int *param_1,short *param_2,int param_3,int param_4,
            int param_5)

{
    /* STUB: 26 lines not yet reconstructed */
    return;
}


/* FUN_00419559 @ 0x00419559 */

void FUN_00419559(void)

{
  return;
}


/* FUN_00419570 @ 0x00419570 */

void __thiscall
FUN_00419570(void *this,short *param_1,int *param_2,short *param_3,int param_4,
            int param_5,int param_6)

{
  int *__seh_chain;
  short loc_18;
  short loc_16;
  short loc_14;
  short loc_12;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_004195fd;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  loc_18 = *param_3;
  loc_16 = param_3[1];
  loc_12 = (param_1[3] - param_1[1]) + loc_16;
  loc_14 = (param_1[2] - *param_1) + loc_18;
  FUN_00419610(this,(int *)param_1,param_2,(int *)&loc_18,param_4,param_5,param_6);
  loc_8 = 0xffffffff;
  FUN_00419607();
  *__seh_chain = loc_10;
  return;
}


/* FUN_00419607 @ 0x00419607 */

void FUN_00419607(void)

{
  return;
}


/* FUN_00419610 @ 0x00419610 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419610(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)

{
    /* STUB: 164 lines not yet reconstructed */
    return;
}


/* FUN_004199c8 @ 0x004199c8 */

void FUN_004199c8(void)

{
  return;
}


/* Function: default @ 0x00419a5b */

void sw_0041_default(void)

{
  int __saved_ebp;
  int *__seh_chain;
  
  *(char *)(__saved_ebp + -4) = 1;
  FUN_00419a8b();
  *(char *)(__saved_ebp + -4) = 0;
  FUN_00419a93();
  *(int *)(__saved_ebp + -4) = 0xffffffff;
  FUN_00419aa5();
  *__seh_chain = *(int *)(__saved_ebp + -0xc);
  return;
}


/* FUN_00419a8b @ 0x00419a8b */

void FUN_00419a8b(void)

{
  return;
}


/* FUN_00419a93 @ 0x00419a93 */

void FUN_00419a93(void)

{
  return;
}


/* FUN_00419aa5 @ 0x00419aa5 */

void FUN_00419aa5(void)

{
  return;
}


/* FUN_00419ae0 @ 0x00419ae0 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419ae0(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)

{
    /* STUB: 164 lines not yet reconstructed */
    return;
}


/* FUN_00419ea1 @ 0x00419ea1 */

void FUN_00419ea1(void)

{
  return;
}


/* Function: default @ 0x00419f34 */

void sw_0041_default(void)

{
  int __saved_ebp;
  int *__seh_chain;
  
  *(char *)(__saved_ebp + -4) = 1;
  FUN_00419f64();
  *(char *)(__saved_ebp + -4) = 0;
  FUN_00419f6c();
  *(int *)(__saved_ebp + -4) = 0xffffffff;
  FUN_00419f7e();
  *__seh_chain = *(int *)(__saved_ebp + -0xc);
  return;
}


/* FUN_00419f64 @ 0x00419f64 */

void FUN_00419f64(void)

{
  return;
}


/* FUN_00419f6c @ 0x00419f6c */

void FUN_00419f6c(void)

{
  return;
}


/* FUN_00419f7e @ 0x00419f7e */

void FUN_00419f7e(void)

{
  return;
}


/* FUN_00419fc0 @ 0x00419fc0 */

int FUN_00419fc0(int param_1)

{
  int u1;
  
  u1 = DAT_0047f20c;
  DAT_0047f20c = param_1;
  return u1;
}


/* FUN_00419fe0 @ 0x00419fe0 */

int __thiscall FUN_00419fe0(void *this,short param_1,short param_2)

{
    /* STUB: 12 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a020 @ 0x0041a020 */

void __thiscall FUN_0041a020(void *this,short *param_1)

{
  FUN_00419fe0(this,param_1[1],*param_1);
  return;
}


/* FUN_0041a040 @ 0x0041a040 */

void __thiscall FUN_0041a040(void *this,short *param_1,int *param_2,short *param_3)

{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0041a0b0 @ 0x0041a0b0 */

void __thiscall FUN_0041a0b0(void *this,int param_1,int *param_2,short *param_3)

{
    /* STUB: 27 lines not yet reconstructed */
    return;
}


/* FUN_0041a150 @ 0x0041a150 */

char __thiscall
FUN_0041a150(void *this,short *param_1,char param_2,int *param_3,short *param_4,char param_5)

{
    /* STUB: 228 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a55c @ 0x0041a55c */

void FUN_0041a55c(void)

{
  return;
}


/* FUN_0041a580 @ 0x0041a580 */

char FUN_0041a580(void)

{
    /* STUB: 29 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a630 @ 0x0041a630 */

char FUN_0041a630(void)

{
    /* STUB: 32 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a700 @ 0x0041a700 */

char FUN_0041a700(void)

{
    /* STUB: 42 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a940 @ 0x0041a940 */

int * __thiscall FUN_0041a940(void *this,short param_1,int *param_2)

{
    /* STUB: 24 lines not yet reconstructed */
    return 0;
}


/* FUN_0041a9a0 @ 0x0041a9a0 */

uint __thiscall FUN_0041a9a0(void *this,short *param_1,short *param_2,char param_3)

{
    /* STUB: 62 lines not yet reconstructed */
    return 0;
}


/* FUN_0041ab40 @ 0x0041ab40 */

int FUN_0041ab40(int param_1)

{
  int u1;
  
  u1 = DAT_0047f208;
  DAT_0047f208 = param_1;
  return u1;
}


/* FUN_0041ab60 @ 0x0041ab60 */

void __thiscall FUN_0041ab60(void *this,int param_1)

{
    /* STUB: 23 lines not yet reconstructed */
    return;
}


/* FUN_0041abd0 @ 0x0041abd0 */

/* NOTE: overlapping globals */

void __thiscall FUN_0041abd0(void *this,void *param_1,char param_2)

{
  int u1;
  int *pu2;
  int *pu3;
  int *__seh_chain;
  char loc_18 [8];
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0041ac81;
  *__seh_chain = &loc_10;
  if (param_2 != '\0') {
    FUN_0042f120(loc_18,*(short *)((int)param_1 + 4)); /* TODO: param_1 struct unknown, offset +0x04 */
    loc_8 = 0;
    FUN_00452160(&DAT_00485328,param_1,(int)loc_18,&__label_00451e80);
    FUN_0041ab60(this,loc_18);
    loc_8 = 0xffffffff;
    FUN_0041ac8b();
  }
  _DAT_0048532c = *(short *)((int)param_1 + 4);   /* TODO: param_1 struct unknown, offset +0x04 */
  pu3 = (int *)((int)param_1 + 6);            /* TODO: param_1 struct unknown, offset +0x06 */
  pu2 = &DAT_0048532e;
  do {
    u1 = *pu3;
    pu3 = pu3 + 1;
    *pu2 = u1;
    pu2 = pu2 + 1;
  } while (pu2 < &DAT_0048572e);
  _DAT_0048572e = *(int *)((int)param_1 + 0x406);       /* TODO: param_1 struct unknown, offset +0x406, could be TextDisplay.field_406 */
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041ac8b @ 0x0041ac8b */

void FUN_0041ac8b(void)

{
  int __saved_ebp;
  
  thunk_FUN_0042f1c0((char *)(__saved_ebp + -0x14));
  return;
}


/* FUN_0041ace0 @ 0x0041ace0 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

int FUN_0041ace0(void *param_1,int param_2)

{
    /* STUB: 60 lines not yet reconstructed */
    return 0;
}


/* FUN_0041ae60 @ 0x0041ae60 */

int __thiscall FUN_0041ae60(void *this,short *param_1,char param_2)

{
    /* STUB: 70 lines not yet reconstructed */
    return 0;
}


/* FUN_0041af60 @ 0x0041af60 */

uint __thiscall FUN_0041af60(void *this,short *param_1)

{
    /* STUB: 58 lines not yet reconstructed */
    return 0;
}


/* FUN_0041b056 @ 0x0041b056 */

void FUN_0041b056(void)

{
  return;
}


/* FUN_0041b068 @ 0x0041b068 */

void FUN_0041b068(void)

{
  int __saved_ebp;
  
  FUN_0043b810((int *)(__saved_ebp + -0x34));
  return;
}


/* FUN_0041b0a0 @ 0x0041b0a0 */

void __thiscall FUN_0041b0a0(void *this,short *param_1,char param_2)

{
  FUN_0041ae60(this,param_1,param_2);
  FUN_0041af60(this,param_1);
  return;
}


/* FUN_0041b0c0 @ 0x0041b0c0 */

void __thiscall FUN_0041b0c0(void *this,short *param_1,char param_2)

{
    /* STUB: 32 lines not yet reconstructed */
    return;
}


/* FUN_0041b150 @ 0x0041b150 */

void __thiscall FUN_0041b150(void *this,char param_1)

{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_0041b1d0 @ 0x0041b1d0 */

void __thiscall FUN_0041b1d0(void *this,char param_1,char param_2)

{
    /* STUB: 28 lines not yet reconstructed */
    return;
}


/* FUN_0041b240 @ 0x0041b240 */

void __thiscall FUN_0041b240(void *this,char param_1,char param_2)

{
    /* STUB: 29 lines not yet reconstructed */
    return;
}


/* FUN_0041b2f0 @ 0x0041b2f0 */

void __thiscall FUN_0041b2f0(void *this,int *param_1,byte param_2,byte param_3)

{
    /* STUB: 84 lines not yet reconstructed */
    return;
}


/* FUN_0041b4b0 @ 0x0041b4b0 */

void __thiscall FUN_0041b4b0(void *this,char param_1,char param_2)

{
    /* STUB: 28 lines not yet reconstructed */
    return;
}


/* FUN_0041b520 @ 0x0041b520 */

void __thiscall FUN_0041b520(void *this,byte param_1,byte param_2)

{
    /* STUB: 28 lines not yet reconstructed */
    return;
}


/* FUN_0041b5be @ 0x0041b5be */

void FUN_0041b5be(void)

{
  int __saved_ebp;
  
  FUN_0043b810((int *)(__saved_ebp + -0x24));
  return;
}


/* FUN_0041b5f0 @ 0x0041b5f0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __cdecl FUN_0041b5f0(UIWidget *param_1,byte param_2)

{
  void *pv1;
  int n2;
  uint u3;

  if (param_1 != (UIWidget *)0x0) {
    FUN_0041dad0(param_1,param_2,'\0');
    if (((param_1->child_list_2 != 0) &&
        (n2 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, n2 != 0)) &&
       (u3 = 1, n2 != 0)) {
      n2 = 4;
      do {
        pv1 = *(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -4 + n2);
        if (pv1 != (void *)0x0) {
          FUN_0041b5f0(pv1,param_2);
        }
        n2 = n2 + 4;
        u3 = u3 + 1;
      } while (u3 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
    }
  }
  return;
}


/* FUN_0041b660 @ 0x0041b660 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __cdecl FUN_0041b660(UIWidget *param_1,void *param_2)

{
  void *pv1;
  uint u2;
  int n3;

  if (param_1 != (UIWidget *)0x0) {
    FUN_0041d780(param_1,param_2);
    if (((param_1->child_list_2 != 0) &&
        (n3 = *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */, n3 != 0)) &&
       (u2 = 1, n3 != 0)) {
      n3 = 4;
      do {
        pv1 = *(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -4 + n3);
        if (pv1 != (void *)0x0) {
          FUN_0041b660(pv1,param_2);
        }
        n3 = n3 + 4;
        u2 = u2 + 1;
      } while (u2 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
    }
  }
  return;
}


/* FUN_0041b6c0 @ 0x0041b6c0 */

int * __fastcall FUN_0041b6c0(int *param_1)

{
  uint u1;
  uint u2;
  int *__seh_chain;
  int n3;
  int n4;
  int u5;
  int n6;
  int n7;
  char c8;
  int u9;
  char c10;
  int __param_ffffffbc;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041b850;
  *__seh_chain = &loc_10;
  /* param_1 is UIElement being initialized */
  UIElement *elem = (UIElement *)param_1;
  elem->rect_left = 0;     /* param_1 + 8 = offset 0x20 */
  loc_8 = 0;
  elem->rect_top = 0;
  elem->rect_right = 0;    /* param_1 + 9 = offset 0x24 */
  elem->pos_y = 0;
  elem->rect_bottom = 0;
  elem->pos_x = 0;
  elem->pos_w = 0;
  elem->pos_h = 0;
  u9 = 0;
  FUN_00401050(&__stk_30,0);
  n7 = 0;
  FUN_00401050(&__stk_29,0);
  u5 = 0;
  FUN_00401050(&__stk_28,0);
  FUN_00401050(&__stk_27,0);
  FUN_0040bfd0((int *)&elem->pos_x,u5,n7,u9,__param_ffffffbc);
  loc_8 = CONCAT31((((loc_8) >> 8) & 0xFFFFFF),1);
  u1 = elem->flags;
  *param_1 = &PTR_FUN_00472f28;
  elem->flags = u1 & 0xfffffffe;
  elem->flags = u1 & 0xfffffffc;
  elem->flags = u1 & 0xffffffec;
  elem->flags = u1 & 0xffffffcc;
  elem->flags = u1 & 0xffffffc4;
  elem->flags = u1 & 0xffffffc0;
  elem->flags = u1 & 0xffffffc0 | 0x40;
  elem->flags = u1 & 0xfffffdc0 | 0x40;
  elem->flags = u1 & 0xfffffdc0 | 0x840;
  elem->flags = u1 & 0xfffff9c0 | 0x840;
  u2 = u1 & 0xffffe9c0;
  elem->flags = u2 | 0x840;
  elem->flags = u2 | 0x8840;
  elem->field_06 = 0;
  elem->parent_ptr = 0;
  elem->flags = u2 | 0xc840;
  elem->child_list_2 = 0;
  param_1[3] = 0;
  elem->flags = u1 & 0xffffc9c0 | 0xc840;
  elem->child_list_1 = 0;
  c10 = '\0';
  elem->field_04 = 0;      /* param_1 + 1 = offset 0x04 */
  c8 = '\0';
  elem->field_3e = 0;
  elem->type_or_mode = 1;
  elem->is_visible = 1;
  n6 = 300;
  FUN_00401050(&__stk_28,300);
  n4 = 400;
  FUN_00401050(&__stk_27,400);
  n3 = 100;
  FUN_00401050(&__stk_26,100);
  FUN_00401050(&__stk_25,100);
  FUN_0041cca0(param_1,n3,n4,n6,n7,c8,c10);
  elem->field_10 = 1;      /* param_1 + 4 = offset 0x10 */
  *__seh_chain = loc_10;
  return param_1;
}


/* FUN_0041b870 @ 0x0041b870 */

int * __thiscall FUN_0041b870(void *this,byte param_1)

{
  FUN_0041b890(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0041b890 @ 0x0041b890 */

void __fastcall FUN_0041b890(int *param_1)

{
    /* STUB: 45 lines not yet reconstructed */
    return;
}


/* FUN_0041b995 @ 0x0041b995 */

void FUN_0041b995(void)

{
  return;
}


/* FUN_0041b9aa @ 0x0041b9aa */

void FUN_0041b9aa(void)

{
  return;
}


/* FUN_0041b9c0 @ 0x0041b9c0 */

/* Function cleaned: this accesses UIWidget offset 0x1a (child_list_1) */
uint __thiscall FUN_0041b9c0(UIWidget *this,int param_1)

{
  uint u1;
  uint u2;
  int *pn3;
  uint u4;

  u1 = (uint)this->child_list_1;
  u2 = u1;
  if (u1 != 0) {
    u4 = 1;
    if (*(uint *)(u1 + 0xe) != 0) {
      pn3 = (int *)**(int **)(u1 + 4);
      do {
        if (*pn3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        pn3 = pn3 + 1;
        u4 = u4 + 1;
        u2 = param_1;
      } while (u4 <= *(uint *)(u1 + 0xe));
    }
  }
  return u2 & 0xffffff00;
}


/* FUN_0041ba00 @ 0x0041ba00 */

/* Function cleaned: this accesses UIWidget offset 0x36 (child_list_2) */
uint __thiscall FUN_0041ba00(UIWidget *this,int param_1)

{
  uint u1;
  uint u2;
  int *pn3;
  uint u4;

  u1 = (uint)this->child_list_2;
  u2 = u1;
  if (u1 != 0) {
    u4 = 1;
    if (*(uint *)(u1 + 0xe) != 0) {
      pn3 = (int *)**(int **)(u1 + 4);
      do {
        if (*pn3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        pn3 = pn3 + 1;
        u4 = u4 + 1;
        u2 = param_1;
      } while (u4 <= *(uint *)(u1 + 0xe));
    }
  }
  return u2 & 0xffffff00;
}


/* FUN_0041ba40 @ 0x0041ba40 */

void __thiscall FUN_0041ba40(GameWidget *this,char param_1,int param_2,int param_3)

{
  void *pv1;
  uint u2;
  int n3;
  
  this->field_10 = param_1;
  if ((((char)param_3 != '\0') && (this->child_list_1 != 0)) &&
     (u2 = 1, *(int *)(this->child_list_1 + 0xe) != 0)) {
    n3 = 4;
    do {
      pv1 = *(void **)(**(int **)(this->child_list_1 + 4) + -4 + n3);
      if (pv1 != (void *)0x0) {
        FUN_0041ba40(pv1,param_1,param_2,param_3);
      }
      n3 = n3 + 4;
      u2 = u2 + 1;
    } while (u2 <= *(uint *)(this->child_list_1 + 0xe));
  }
  if ((((char)param_2 != '\0') && (this->child_list_2 != 0)) &&
     (u2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    n3 = 4;
    do {
      pv1 = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + n3);
      if (pv1 != (void *)0x0) {
        FUN_0041ba40(pv1,param_1,param_2,param_3);
      }
      n3 = n3 + 4;
      u2 = u2 + 1;
    } while (u2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}


/* FUN_0041baf0 @ 0x0041baf0 */

void __thiscall FUN_0041baf0(DialogWidget *this,byte param_1)

{
  int n1;
  uint u2;
  
  FUN_0041da90(this,param_1);
  if ((this->child_list_2 != 0) &&
     (u2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041baf0(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + n1),param_1);
    } while (u2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  if ((this->child_list_1 != 0) &&
     (u2 = 1, *(int *)(this->child_list_1 + 0xe) != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041baf0(*(void **)(**(int **)(this->child_list_1 + 4) + -8 + n1),param_1);
    } while (u2 <= *(uint *)(this->child_list_1 + 0xe));
  }
  return;
}


/* FUN_0041bb70 @ 0x0041bb70 */

int __thiscall FUN_0041bb70(void *this,void *param_1,char param_2)

{
    /* STUB: 104 lines not yet reconstructed */
    return 0;
}


/* FUN_0041bd00 @ 0x0041bd00 */

/* Function cleaned: this accesses UIWidget offset 0x36 (child_list_2), param_1+0x3a = parent_ptr */
void __thiscall FUN_0041bd00(UIWidget *this,int param_1)

{
  uint *pu1;
  void *_Src;
  int n2;
  uint u3;
  int *pn4;
  uint u5;

  u5 = 0;
  n2 = (int)this->child_list_2;
  pu1 = (uint *)(n2 + 0xe);
  u3 = *pu1;
  if (u3 != 0) {
    pn4 = (int *)**(int **)(n2 + 4);
    do {
      if (*pn4 == param_1) {
        u5 = u5 + 1;
        goto __label_0041bd28;
      }
      pn4 = pn4 + 1;
      u5 = u5 + 1;
    } while (u5 < u3);
  }
  u5 = 0;
__label_0041bd28:
  if (u5 != 0) {
    if (u5 <= u3) {
      if (u5 < u3) {
        _Src = (void *)(**(int **)(n2 + 4) + u5 * 4);
        memmove((void *)((int)_Src + -4),_Src,(u3 - u5) * 4);
      }
      *pu1 = *pu1 - 1;
    }
    ((UIElement *)param_1)->parent_ptr = 0;
  }
  return;
}


/* FUN_0041bd70 @ 0x0041bd70 */

void __thiscall FUN_0041bd70(void *this,int param_1)

{
    /* STUB: 69 lines not yet reconstructed */
    return;
}


/* FUN_0041bea0 @ 0x0041bea0 */

void __thiscall FUN_0041bea0(GameWidget *this,short *param_1)

{
  uint u1;
  int n2;
  int *__seh_chain;
  short loc_20;
  short loc_1e;
  short loc_1c;
  short loc_1a;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041c01d;
  *__seh_chain = &loc_10;
  loc_18 = this->rect_top;
  loc_14 = this->rect_bottom;
  if ((this->child_list_2 != 0) && (*(int *)(this->child_list_2 + 0xe) != 0)) {
    loc_1e = 0;
    u1 = 1;
    loc_20 = 0;
    n2 = 4;
    loc_1a = 0;
    loc_8 = (loc_8 & ~0xFF) | 1;
    loc_8 = (loc_8 & 0xFF) | (0 << 8);
    loc_1c = 0;
__label_0041bf04:
    do {
      if (*(uint *)(this->child_list_2 + 0xe) < u1) goto __label_0041bfcc;
      FUN_0041bea0(*(void **)(**(int **)(this->child_list_2 + 4) + -4 + n2),&loc_20);
      if ((loc_1e < loc_1a) && (loc_20 < loc_1c)) {
        if ((((unsigned short)((loc_18) >> 16)) < ((unsigned short)((loc_14) >> 16))) && ((short)loc_18 < (short)loc_14)) {
          if (loc_1e < ((unsigned short)((loc_18) >> 16))) {
            loc_18 = CONCAT22(loc_1e,(short)loc_18);
          }
          if (((unsigned short)((loc_14) >> 16)) < loc_1a) {
            loc_14 = CONCAT22(loc_1a,(short)loc_14);
          }
          if (loc_20 < (short)loc_18) {
            loc_18 = CONCAT22(((unsigned short)((loc_18) >> 16)),loc_20);
          }
          if ((short)loc_14 < loc_1c) {
            n2 = n2 + 4;
            loc_14 = CONCAT22(((unsigned short)((loc_14) >> 16)),loc_1c);
            u1 = u1 + 1;
            goto __label_0041bf04;
          }
        }
        else {
          loc_18 = CONCAT22(loc_1e,loc_20);
          loc_14 = CONCAT22(loc_1a,loc_1c);
        }
      }
      n2 = n2 + 4;
      u1 = u1 + 1;
    } while( true );
  }
__label_0041bfd5:
  loc_8 = 0xffffffff;
  param_1[1] = ((unsigned short)((loc_18) >> 16));
  param_1[3] = ((unsigned short)((loc_14) >> 16));
  *param_1 = (short)loc_18;
  param_1[2] = (short)loc_14;
  FUN_0041c027();
  *__seh_chain = loc_10;
  return;
__label_0041bfcc:
  loc_8 &= ~0xFF;
  FUN_0041c015();
  goto __label_0041bfd5;
}


/* FUN_0041c015 @ 0x0041c015 */

void FUN_0041c015(void)

{
  return;
}


/* FUN_0041c027 @ 0x0041c027 */

void FUN_0041c027(void)

{
  return;
}


/* FUN_0041c030 @ 0x0041c030 */

void __thiscall FUN_0041c030(void *this,void *param_1)

{
  int *__seh_chain;
  int u1;
  int u2;
  int u3;
  short *ps4;
  short loc_18;
  short sStack_16;
  short loc_14;
  short sStack_12;
  short loc_10;
  short uStack_e;
  char *__seh_handler;
  int loc_8;
  
  __seh_handler = &__label_0041c0d4;
  loc_10 = (short)*__seh_chain;
  uStack_e = (short)((uint)*__seh_chain >> 0x10);
  *__seh_chain = &loc_10;
  loc_8 = 0;
  sStack_16 = 0;
  loc_18 = 0;
  sStack_12 = 0;
  loc_14 = 0;
  ps4 = &loc_18;
  FUN_0041bea0(this,ps4);
  u3 = CONCAT22(sStack_12,loc_14);
  FUN_00401ba0(&__stk_36,loc_14);
  u2 = CONCAT22(loc_10,sStack_12);
  FUN_00401ba0(&__stk_35,sStack_12);
  u1 = CONCAT22(sStack_16,loc_18);
  FUN_00401ba0(&__stk_34,loc_18);
  FUN_00401ba0(&__stk_33,sStack_16);
  FUN_0040bfd0(param_1,u1,u2,u3,ps4);
  loc_8 = 0xffffffff;
  FUN_0041c0de();
  *__seh_chain = CONCAT22(uStack_e,loc_10);
  return;
}


/* FUN_0041c0de @ 0x0041c0de */

void FUN_0041c0de(void)

{
  return;
}


/* FUN_0041c0f0 @ 0x0041c0f0 */

/* Function cleaned: walks UIElement parent_ptr chain to root */
int __fastcall FUN_0041c0f0(UIElement *this)

{
  int n1;

  n1 = (int)this->parent_ptr;
  while (n1 != 0) {
    this = (UIElement *)this->parent_ptr;
    n1 = (int)this->parent_ptr;
  }
  return (int)this;
}


/* FUN_0041c110 @ 0x0041c110 */

char __thiscall FUN_0041c110(void *this,void *param_1)

{
    /* STUB: 66 lines not yet reconstructed */
    return 0;
}


/* FUN_0041c1dd @ 0x0041c1dd */

void FUN_0041c1dd(void)

{
  int __saved_ebp;
  
  FUN_004097c0((int *)(__saved_ebp + -0x24));
  return;
}


/* FUN_0041c1e5 @ 0x0041c1e5 */

char FUN_0041c1e5(void)

{
  int __saved_ebp;
  int *__seh_chain;
  
  *__seh_chain = *(int *)(__saved_ebp + -0xc);
  return 1;
}


/* FUN_0041c200 @ 0x0041c200 */

void __thiscall FUN_0041c200(GameWidget *this,int param_1,int param_2,int param_3)

{
  void *self;
  int n1;
  uint u2;
  
  if ((this->child_list_2 != 0) &&
     (u2 = 1, *(int *)(this->child_list_2 + 0xe) != 0)) {
    n1 = 4;
    do {
      self = *(void **)(**(int **)(this->child_list_2 + 4) + -4 + n1);
      if ((char)param_3 != '\0') {
        FUN_0041cb70(self,'\x01');
      }
      ((GameWidget *)self)->pos_y = ((GameWidget *)self)->pos_y + param_1;
      ((GameWidget *)self)->pos_h = ((GameWidget *)self)->pos_h + param_1;
      ((GameWidget *)self)->pos_x = ((GameWidget *)self)->pos_x + param_2;
      ((GameWidget *)self)->pos_w = ((GameWidget *)self)->pos_w + param_2;
      FUN_0041d490((intptr_t)self);
      if (((GameWidget *)self)->child_list_2 != 0) {
        FUN_0041c200((GameWidget *)self,param_1,param_2,param_3);
      }
      if ((char)param_3 != '\0') {
        FUN_0041cb70(self,'\x01');
      }
      n1 = n1 + 4;
      u2 = u2 + 1;
    } while (u2 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}


/* FUN_0041c2a0 @ 0x0041c2a0 */

void __thiscall FUN_0041c2a0(GameWidget *this,int param_1)

{
  uint u1;
  int n2;
  
  this->type_or_mode = param_1;
  if (((this->child_list_2 != 0) &&
      (n2 = *(int *)(this->child_list_2 + 0xe), n2 != 0)) && (u1 = 1, n2 != 0))
  {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0041c2a0(*(void **)(**(int **)(this->child_list_2 + 4) + -8 + n2),param_1);
    } while (u1 <= *(uint *)(this->child_list_2 + 0xe));
  }
  return;
}


/* FUN_0041c2f0 @ 0x0041c2f0 */

int * __thiscall FUN_0041c2f0(void *this,short *param_1)

{
    /* STUB: 31 lines not yet reconstructed */
    return 0;
}


/* FUN_0041c420 @ 0x0041c420 */

/* Function cleaned: param_1 is UIElement; offset 0xc = parent_widget, vtable call */
void __fastcall FUN_0041c420(UIElement *this)

{
  if (this->parent_widget != (void *)0x0) {
                    /* NOTE: Could not recover jumptable at 0x0041c429. Too many branches */
                    /* NOTE: Treating indirect jump as call */
    ((void (*)(void))((void **)(*(int *)this->parent_widget))[0x28 / 4])(); /* parent_widget->vtable[10] */
    return;
  }
  return;
}


/* FUN_0041c4a0 @ 0x0041c4a0 */

void __fastcall FUN_0041c4a0(int *param_1)

{
    /* STUB: 80 lines not yet reconstructed */
    return;
}


/* FUN_0041c61e @ 0x0041c61e */

void FUN_0041c61e(void)

{
  return;
}


/* FUN_0041c626 @ 0x0041c626 */

void FUN_0041c626(void)

{
  return;
}


/* FUN_0041c62e @ 0x0041c62e */

void FUN_0041c62e(void)

{
  return;
}


/* FUN_0041c640 @ 0x0041c640 */

void FUN_0041c640(void)

{
  return;
}


/* FUN_0041c6b0 @ 0x0041c6b0 */

void __thiscall FUN_0041c6b0(void *this,char param_1)

{
    /* STUB: 13 lines not yet reconstructed */
    return;
}


/* FUN_0041c720 @ 0x0041c720 */

/* Function cleaned: param_1 is UIElement; accesses flags(0x12), parent_widget(0x0C), field_3e(0x3E), field_06(0x06) */
void __fastcall FUN_0041c720(UIElement *this)

{
  SHORT SVar1;
  int *pn2;
  uint u3;
  int n4;
  uint u5;

  if ((((*(byte *)&this->flags & 1) != 0) && (n4 = (int)this->parent_widget, n4 != 0)) &&
     (*(int *)(n4 + 0x3e) != 0)) {
    u3 = 0;
    u5 = *(uint *)(*(int *)(n4 + 0x3e) + 0xe);
    if (u5 != 0) {
      pn2 = (int *)**(int **)(*(int *)(n4 + 0x3e) + 4);
      do {
        if (*pn2 == (int)this) {
          n4 = u3 + 1;
          goto __label_0041c759;
        }
        pn2 = pn2 + 1;
        u3 = u3 + 1;
      } while (u3 < u5);
    }
    n4 = 0;
__label_0041c759:
    if (n4 != 0) {
      SVar1 = GetAsyncKeyState(0x10);
      if (SVar1 < 0) {
        u5 = n4 - 1;
      }
      else {
        u5 = n4 + 1;
      }
      n4 = ((UIElement *)this->parent_widget)->field_3e;
      u3 = *(uint *)(n4 + 0xe);
      if (u3 < u5) {
        u5 = 1;
      }
      else if (u5 == 0) {
        u5 = u3;
      }
      FUN_00430ac0((void *)this->field_06,*(int **)(**(int **)(n4 + 4) + -4 + u5 * 4));
    }
  }
  return;
}


/* FUN_0041c7b0 @ 0x0041c7b0 */

void __thiscall FUN_0041c7b0(void *this,int param_1)

{
    /* STUB: 82 lines not yet reconstructed */
    return;
}


/* FUN_0041c8e0 @ 0x0041c8e0 */

void __thiscall FUN_0041c8e0(void *this,int param_1)

{
    /* STUB: 45 lines not yet reconstructed */
    return;
}


/* FUN_0041ca50 @ 0x0041ca50 */

void FUN_0041ca50(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00486168,u1,__param_fffffff4);
  return;
}


/* FUN_0041caa0 @ 0x0041caa0 */

void FUN_0041caa0(void)

{
  return;
}


/* FUN_0041cad0 @ 0x0041cad0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x1a (child_list_1) */
void __fastcall FUN_0041cad0(UIWidget *param_1)

{
  int n1;
  uint u2;

  FUN_0041cb70(param_1,'\x01');
  if (((int)param_1->child_list_1 != 0) &&
     (u2 = 1, *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041cb20(*(void **)(**(int **)((int)param_1->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -8 + n1));
    } while (u2 <= *(uint *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0041cb20 @ 0x0041cb20 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __fastcall FUN_0041cb20(UIWidget *param_1)

{
  int n1;
  uint u2;

  FUN_0041cb70(param_1,'\x01');
  if (((int)param_1->child_list_2 != 0) &&
     (u2 = 1, *(int *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041cb20(*(void **)(**(int **)((int)param_1->child_list_2 + 4) /* CVector: data ptr at +0x04 */ + -8 + n1));
    } while (u2 <= *(uint *)((int)param_1->child_list_2 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0041cb70 @ 0x0041cb70 */

void __thiscall FUN_0041cb70(DialogWidget *this,char param_1)

{
  int *__seh_chain;
  short loc_18 [4];
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041cbec;
  *__seh_chain = &loc_10;
  this->flags = this->flags | 4;
  if ((param_1 != '\0') && (this->field_06 != 0)) {
    loc_18[1] = 0;
    loc_8 = 0;
    loc_18[0] = 0;
    loc_18[3] = 0;
    loc_18[2] = 0;
    FUN_0041dec0(this,loc_18);
    FUN_0042ffd0(this->field_06,loc_18);
    loc_8 = 0xffffffff;
    FUN_0041cbf6();
  }
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041cbf6 @ 0x0041cbf6 */

void FUN_0041cbf6(void)

{
  return;
}


/* FUN_0041cc10 @ 0x0041cc10 */

/* NOTE: overlapping globals */

void FUN_0041cc10(void)

{
  _DAT_0048617a = 0;
  _DAT_00486178 = 0;
  return;
}


/* FUN_0041cc20 @ 0x0041cc20 */

void FUN_0041cc20(void)

{
  _atexit(FUN_0041cc30);
  return;
}


/* FUN_0041cc30 @ 0x0041cc30 */

void FUN_0041cc30(void)

{
  return;
}


/* FUN_0041cc40 @ 0x0041cc40 */

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


/* FUN_0041cca0 @ 0x0041cca0 */

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


/* FUN_0041cd30 @ 0x0041cd30 */

/* NOTE: overlapping globals */

void FUN_0041cd30(void)

{
  _DAT_00486176 = 0;
  _DAT_00486174 = 0;
  return;
}


/* FUN_0041cd40 @ 0x0041cd40 */

void FUN_0041cd40(void)

{
  _atexit(FUN_0041cd50);
  return;
}


/* FUN_0041cd50 @ 0x0041cd50 */

void FUN_0041cd50(void)

{
  return;
}


/* FUN_0041cd60 @ 0x0041cd60 */

void __thiscall FUN_0041cd60(GameWidget *this,int *param_1)

{
  param_1[1] = this->pos_y;
  param_1[3] = this->pos_h;
  *param_1 = this->pos_x;
  param_1[2] = this->pos_w;
  return;
}


/* FUN_0041cd80 @ 0x0041cd80 */

void __thiscall FUN_0041cd80(GameWidget *this,short *param_1)

{
  int u1;
  int u2;
  int u3;
  
  u1 = this->pos_w;
  u2 = this->pos_h;
  u3 = this->pos_x;
  param_1[1] = (short)((uint)this->pos_y >> 8);
  *param_1 = (short)((uint)u3 >> 8);
  param_1[3] = (short)((uint)u2 >> 8);
  param_1[2] = (short)((uint)u1 >> 8);
  return;
}


/* FUN_0041cdc0 @ 0x0041cdc0 */

void __thiscall FUN_0041cdc0(GameWidget *this,int *param_1)

{
  param_1[1] = this->pos_h - this->pos_y;
  *param_1 = this->pos_w - this->pos_x;
  return;
}


/* FUN_0041cde0 @ 0x0041cde0 */

void __thiscall FUN_0041cde0(GameWidget *this,int *param_1)

{
  param_1[1] = (this->pos_y + this->pos_h) / 2;
  *param_1 = (this->pos_x + this->pos_w) / 2;
  return;
}


/* FUN_0041ce10 @ 0x0041ce10 */

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


/* FUN_0041cef0 @ 0x0041cef0 */

void __thiscall FUN_0041cef0(void *this,int *param_1,int param_2)

{
  int *__seh_chain;
  int loc_20;
  int loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041cfc7;
  *__seh_chain = &loc_10;
  loc_18 = *param_1;
  loc_14 = param_1[1];
  loc_1c = 0;
  loc_20 = 0;
  loc_8 = (loc_8 & ~0xFF) | 1;
  loc_8 = (loc_8 & 0xFF) | (0 << 8);
  FUN_0041cdc0(this,&loc_20);
  switch(param_2) {
  case 0:
  case 3:
  case 6:
    loc_14 = loc_14 + loc_1c / 2;
    break;
  case 1:
  case 4:
  case 7:
    break;
  case 2:
  case 5:
  case 8:
    loc_14 = loc_14 - loc_1c / 2;
    break;
  default:
    goto sw_0041_default;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    loc_18 = loc_18 + loc_20 / 2;
    break;
  case 6:
  case 7:
  case 8:
    loc_18 = loc_18 - loc_20 / 2;
  }
sw_0041_default:
  FUN_0041d2d0(this,&loc_18,'\0');
  loc_8 &= ~0xFF;
  FUN_0041cfbf();
  loc_8 = 0xffffffff;
  FUN_0041cfd1();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041cfbf @ 0x0041cfbf */

void FUN_0041cfbf(void)

{
  return;
}


/* FUN_0041cfd1 @ 0x0041cfd1 */

void FUN_0041cfd1(void)

{
  return;
}


/* FUN_0041d020 @ 0x0041d020 */

void __thiscall FUN_0041d020(void *this,int param_1,int param_2,int param_3)

{
  int *__seh_chain;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041d076;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  loc_14 = param_1;
  loc_18 = param_2;
  FUN_0041cef0(this,&loc_18,param_3);
  loc_8 = 0xffffffff;
  FUN_0041d080();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d080 @ 0x0041d080 */

void FUN_0041d080(void)

{
  return;
}


/* FUN_0041d0a0 @ 0x0041d0a0 */

void __thiscall FUN_0041d0a0(void *this,int *param_1,char param_2)

{
  int n1;
  int *__seh_chain;
  int loc_2c;
  int loc_28;
  int loc_24;
  int loc_20;
  void *loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041d1b1;
  *__seh_chain = &loc_10;
  loc_14 = 0;
  loc_18 = 0;
  loc_28 = 0;
  loc_2c = 0;
  loc_8 = (loc_8 & ~0xFF) | 1;
  loc_8 = (loc_8 & 0xFF) | (0 << 8);
  loc_1c = this;
  FUN_0041cdc0(this,&loc_2c);
  if (param_2 == '\0') {
    FUN_00403030(&loc_18,&loc_24,param_1);
    loc_8 = (loc_8 & ~0xFF) | 1;
    FUN_0041d1a1();
  }
  else {
    FUN_0041cdc0(loc_1c,&loc_18);
    loc_14 = loc_14 + param_1[1];
    loc_18 = loc_18 + *param_1;
  }
  if ((loc_28 != loc_14) || (loc_2c != loc_18)) {
    FUN_0041cde0(loc_1c,&loc_2c);
    loc_20 = loc_28 - loc_14 / 2;
    n1 = loc_2c - loc_18 / 2;
    FUN_0041cca0(loc_1c,loc_20,n1,loc_20 + loc_14,loc_18 + n1,'\0','\0');
  }
  loc_8 &= ~0xFF;
  FUN_0041d1a9();
  loc_8 = 0xffffffff;
  FUN_0041d1bb();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d1a1 @ 0x0041d1a1 */

void FUN_0041d1a1(void)

{
  return;
}


/* FUN_0041d1a9 @ 0x0041d1a9 */

void FUN_0041d1a9(void)

{
  return;
}


/* FUN_0041d1bb @ 0x0041d1bb */

void FUN_0041d1bb(void)

{
  return;
}


/* FUN_0041d1d0 @ 0x0041d1d0 */

void __thiscall FUN_0041d1d0(void *this,int param_1,int param_2,char param_3)

{
  int n1;
  int n2;
  int *__seh_chain;
  int loc_20;
  int loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  uint loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041d2ba;
  *__seh_chain = &loc_10;
  loc_14 = 0;
  loc_18 = 0;
  loc_1c = 0;
  loc_20 = 0;
  loc_8 = 1;
  FUN_0041cdc0(this,&loc_20);
  if (param_3 != '\0') {
    FUN_0041cdc0(this,&loc_18);
    param_1 = param_1 + loc_14;
    param_2 = param_2 + loc_18;
  }
  if ((loc_1c != param_1) || (loc_20 != param_2)) {
    FUN_0041cde0(this,&loc_18);
    n1 = loc_14 - param_1 / 2;
    n2 = loc_18 - param_2 / 2;
    FUN_0041cca0(this,n1,n2,n1 + param_1,param_2 + n2,'\0','\0');
  }
  loc_8 = loc_8 & 0xffffff00;
  FUN_0041d2b2();
  loc_8 = 0xffffffff;
  FUN_0041d2c4();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d2b2 @ 0x0041d2b2 */

void FUN_0041d2b2(void)

{
  return;
}


/* FUN_0041d2c4 @ 0x0041d2c4 */

void FUN_0041d2c4(void)

{
  return;
}


/* FUN_0041d2d0 @ 0x0041d2d0 */

void __thiscall FUN_0041d2d0(void *this,int *param_1,char param_2)

{
  int *__seh_chain;
  int loc_24;
  int loc_20;
  void *loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041d38d;
  *__seh_chain = &loc_10;
  loc_18 = *param_1;
  loc_14 = param_1[1];
  loc_8 = 0;
  loc_1c = this;
  if (param_2 == '\0') {
    loc_20 = 0;
    loc_8 = (loc_8 & ~0xFF) | 1;
    loc_8 = (loc_8 & 0xFF) | (0 << 8);
    loc_24 = 0;
    FUN_0041cde0(this,&loc_24);
    loc_14 = loc_14 - loc_20;
    loc_18 = loc_18 - loc_24;
    loc_8 &= ~0xFF;
    FUN_0041d385();
  }
  FUN_0041cca0(loc_1c,loc_14,loc_18,loc_14,loc_18,'\x01','\x01');
  if ((((UIWidget *)loc_1c)->child_list_2 != 0) && (*(int *)((int)((UIWidget *)loc_1c)->child_list_2 + 0xe) /* CVector: count at +0x0E */ != 0)
     ) {
    FUN_0041c200(loc_1c,loc_14,loc_18,1);
  }
  loc_8 = 0xffffffff;
  FUN_0041d397();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d385 @ 0x0041d385 */

void FUN_0041d385(void)

{
  return;
}


/* FUN_0041d397 @ 0x0041d397 */

void FUN_0041d397(void)

{
  return;
}


/* FUN_0041d3a0 @ 0x0041d3a0 */

void __thiscall FUN_0041d3a0(void *this,int param_1,int param_2,char param_3)

{
  int *__seh_chain;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041d3f6;
  *__seh_chain = &loc_10;
  loc_14 = param_1;
  loc_18 = param_2;
  loc_8 = 0;
  FUN_0041d2d0(this,&loc_18,param_3);
  loc_8 = 0xffffffff;
  FUN_0041d400();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d400 @ 0x0041d400 */

void FUN_0041d400(void)

{
  return;
}


/* FUN_0041d410 @ 0x0041d410 */

/* NOTE: overlapping globals */

void * __fastcall FUN_0041d410(int param_1)

{
    /* STUB: 15 lines not yet reconstructed */
    return 0;
}


/* FUN_0041d490 @ 0x0041d490 */

/* Function cleaned: param_1 is UIElement; updates rect from pos fields */
void __fastcall FUN_0041d490(UIElement *this)

{
  short *ps1;

  ps1 = (short *)FUN_0041d410((int)this);
  if (*(char *)&this->pos_y == -0x80) {
    ps1[1] = ps1[1] + 1;
  }
  if (*(char *)&this->pos_x == -0x80) {
    *ps1 = *ps1 + 1;
  }
  this->rect_left = (short)((uint)this->pos_y >> 8) + ps1[1];
  this->rect_top = (short)((uint)this->pos_x >> 8) + *ps1;
  this->rect_right = (short)((uint)this->pos_h >> 8) + ps1[1];
  this->rect_bottom = (short)((uint)this->pos_w >> 8) + *ps1;
  return;
}


/* FUN_0041d4f0 @ 0x0041d4f0 */

/* Function cleaned: param_1 is UIElement; updates pos from rect fields */
void __fastcall FUN_0041d4f0(UIElement *this)

{
  short s1;
  short s2;
  short *ps3;
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;

  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0041d57b;
  *__seh_chain = &loc_10;
  ps3 = (short *)FUN_0041d410((int)this);
  s1 = ps3[1];
  s2 = *ps3;
  this->pos_y = ((int)this->rect_left - (int)s1) * 0x100;
  this->pos_x = ((int)this->rect_top - (int)s2) * 0x100;
  loc_8 = 0xffffffff;
  this->pos_h = ((int)this->rect_right - (int)s1) * 0x100;
  this->pos_w = ((int)this->rect_bottom - (int)s2) * 0x100;
  FUN_0041d585();
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041d585 @ 0x0041d585 */

void FUN_0041d585(void)

{
  return;
}


/* FUN_0041d590 @ 0x0041d590 */

short * __thiscall FUN_0041d590(void *this,short *param_1)

{
    /* STUB: 51 lines not yet reconstructed */
    return 0;
}


/* FUN_0041d65f @ 0x0041d65f */

void FUN_0041d65f(void)

{
  return;
}


/* FUN_0041d667 @ 0x0041d667 */

void FUN_0041d667(void)

{
  return;
}


/* FUN_0041d67e @ 0x0041d67e */

void FUN_0041d67e(void)

{
  return;
}


/* FUN_0041d690 @ 0x0041d690 */

void FUN_0041d690(void)

{
  return;
}


/* FUN_0041d6a0 @ 0x0041d6a0 */

/* Function cleaned: param_1 is UIWidget; accesses offset 0x1a (child_list_1) */
void __fastcall FUN_0041d6a0(UIWidget *this)

{
  void *child;
  int n1;
  uint u2;

  if (((int)this->child_list_1 != 0) &&
      (n1 = *(int *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */, n1 != 0) && (u2 = 1, n1 != 0)) {
    n1 = 4;
    do {
      u2 = u2 + 1;
      n1 = n1 + 4;
      child = *(void **)(**(int **)((int)this->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -8 + n1);
      FUN_0041cb70(child,'\x01');
      FUN_0041d490((UIElement *)child);
      FUN_0041d6a0((UIWidget *)child);
      FUN_0041cb70(child,'\x01');
    } while (u2 <= *(uint *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0041d710 @ 0x0041d710 */

/* Function cleaned: param_1 accesses UIWidget offset 0x1a (child_list_1) */
void __fastcall FUN_0041d710(UIWidget *param_1)

{
  int n1;
  int *_Dst;
  uint u2;
  int *pu3;

  if ((int)param_1->child_list_1 != 0) {
    n1 = *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */;
    while (n1 != 0) {
      n1 = (int)param_1->child_list_1;
      _Dst = (int *)**(int **)(n1 + 4);
      u2 = *(uint *)(n1 + 0xe);
      pu3 = (int *)*_Dst;
      if (u2 != 0) {
        if (1 < u2) {
          memmove(_Dst,_Dst + 1,u2 * 4 - 4);
        }
        *(int *)(n1 + 0xe) = *(int *)(n1 + 0xe) + -1;
      }
      ((void (*)(void))((void **)*pu3)[0])(); /* pu3->vtable[0] */
      n1 = *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */;
    }
  }
  FUN_0041cb70(param_1,'\x01');
  return;
}


/* FUN_0041d780 @ 0x0041d780 */

void __thiscall FUN_0041d780(void *this,void *param_1)

{
    /* STUB: 144 lines not yet reconstructed */
    return;
}


/* FUN_0041da00 @ 0x0041da00 */

void __thiscall FUN_0041da00(DialogWidget *this,void *param_1)

{
  void *self;
  int n1;
  uint u2;
  uint u3;
  
  self = this->field_06;
  if (param_1 != self) {
    if (self != (void *)0x0) {
      if ((this->flags >> 4 & 1) != 0) {
        FUN_00431100(self,(intptr_t)this);
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
        (n1 = *(int *)(this->child_list_1 + 0xe), n1 != 0)) && (u2 = 1, n1 != 0)
       ) {
      do {
        u3 = (uint)(ushort)((short)u2 + 1);
        FUN_0041da00(*(void **)(**(int **)(this->child_list_1 + 4) + -4 + u2 * 4),param_1
                    );
        u2 = u3;
      } while (u3 <= *(uint *)(this->child_list_1 + 0xe));
    }
  }
  return;
}


/* FUN_0041da90 @ 0x0041da90 */

void __thiscall FUN_0041da90(DialogWidget *this,byte param_1)

{
  void *self;
  
  this->flags =
       ((uint)param_1 << 4 ^ this->flags) & 0x10 ^ this->flags;
  self = this->field_06;
  if (self != (void *)0x0) {
    if (param_1 != 0) {
      FUN_00431000(self,(intptr_t)this);
      return;
    }
    FUN_00431100(self,(intptr_t)this);
  }
  return;
}


/* FUN_0041dad0 @ 0x0041dad0 */

void __thiscall FUN_0041dad0(DialogWidget *this,byte param_1,char param_2)

{
  int n1;
  uint u2;
  uint u3;
  
  this->flags =
       ((uint)param_1 << 6 ^ this->flags) & 0x40 ^ this->flags;
  FUN_0041cb70(this,'\x01');
  FUN_0041db50(this,'\x01');
  if ((((param_2 != '\0') && (this->child_list_1 != 0)) &&
      (n1 = *(int *)(this->child_list_1 + 0xe), n1 != 0)) && (u2 = 1, n1 != 0))
  {
    do {
      u3 = (uint)(ushort)((short)u2 + 1);
      FUN_0041dad0(*(void **)(**(int **)(this->child_list_1 + 4) + -4 + u2 * 4),param_1,
                   '\x01');
      u2 = u3;
    } while (u3 <= *(uint *)(this->child_list_1 + 0xe));
  }
  return;
}


/* FUN_0041db50 @ 0x0041db50 */

/* Function cleaned: this accesses UIWidget offset 0x1a (child_list_1) */
void __thiscall FUN_0041db50(UIWidget *this,char param_1)

{
  int n1;
  void *self;
  uint u2;
  uint u3;

  if (((int)this->child_list_1 != 0) &&
      (n1 = *(int *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */, n1 != 0) && (u2 = 1, n1 != 0))
  {
    do {
      u3 = (uint)(ushort)((short)u2 + 1);
      self = *(void **)(**(int **)((int)this->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -4 + u2 * 4);
      FUN_0041cb70(self,param_1);
      FUN_0041db50(self,param_1);
      u2 = u3;
    } while (u3 <= *(uint *)((int)this->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0041dbb0 @ 0x0041dbb0 */

void __fastcall FUN_0041dbb0(void *param_1)

{
    /* STUB: 96 lines not yet reconstructed */
    return;
}


/* FUN_0041dd40 @ 0x0041dd40 */

void __fastcall FUN_0041dd40(void *param_1)

{
    /* STUB: 90 lines not yet reconstructed */
    return;
}


/* FUN_0041dec0 @ 0x0041dec0 */

void __thiscall FUN_0041dec0(GameWidget *this,short *param_1)

{
  int *__seh_chain;
  short loc_18;
  short loc_16;
  short loc_14;
  short loc_12;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0041dfff;
  *__seh_chain = &loc_10;
  param_1[1] = this->rect_left;
  param_1[3] = this->rect_right;
  *param_1 = this->rect_top;
  param_1[2] = this->rect_bottom;
  if (this->parent_widget != 0) {
    loc_16 = 0;
    loc_8 = 0;
    loc_18 = 0;
    loc_12 = 0;
    loc_14 = 0;
    FUN_0041dec0(this->parent_widget,&loc_18);
    if (param_1[1] < param_1[3]) {
      if (*param_1 < param_1[2]) {
        if ((loc_16 < loc_12) && (loc_18 < loc_14)) {
          if (param_1[1] < loc_16) {
            param_1[1] = loc_16;
          }
          if (loc_12 < param_1[3]) {
            param_1[3] = loc_12;
          }
          if (*param_1 < loc_18) {
            *param_1 = loc_18;
          }
          if (loc_14 < param_1[2]) {
            param_1[2] = loc_14;
          }
          if ((param_1[3] <= param_1[1]) || (param_1[2] <= *param_1)) {
            param_1[1] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            *param_1 = 0;
          }
        }
        else {
          param_1[1] = loc_16;
          *param_1 = loc_18;
          param_1[3] = loc_12;
          param_1[2] = loc_14;
        }
      }
    }
    loc_8 = 0xffffffff;
    FUN_0041e009();
  }
  *__seh_chain = loc_10;
  return;
}


/* FUN_0041e009 @ 0x0041e009 */

void FUN_0041e009(void)

{
  return;
}


/* FUN_0041e020 @ 0x0041e020 */

/* Function cleaned: param_1 is UIElement; accesses parent_widget(0x0C), parent's child_list_1(0x1A) */
short __fastcall FUN_0041e020(UIElement *this)

{
  int n1;
  uint u2;
  short s3;
  uint u4;
  int *pn5;

  s3 = 1;
  if (this->parent_widget != 0) {
    u4 = 0;
    n1 = (int)((UIElement *)this->parent_widget)->child_list_1;
    u2 = *(uint *)(n1 + 0xe);
    if (u2 != 0) {
      pn5 = (int *)**(int **)(n1 + 4);
      do {
        if (*pn5 == (int)this) {
          return (short)u4 + 1;
        }
        pn5 = pn5 + 1;
        u4 = u4 + 1;
      } while (u4 < u2);
    }
    s3 = 0;
  }
  return s3;
}


/* FUN_0041e0a0 @ 0x0041e0a0 */

/* Function cleaned: this is UIElement; offset 0x26 = pos_x */
void __thiscall FUN_0041e0a0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_x;
  return;
}


/* FUN_0041e0b0 @ 0x0041e0b0 */

/* Function cleaned: this is UIElement; offset 0x2a = pos_y */
void __thiscall FUN_0041e0b0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_y;
  return;
}


/* FUN_0041e0c0 @ 0x0041e0c0 */

/* Function cleaned: this is UIElement; offset 0x2e = pos_w */
void __thiscall FUN_0041e0c0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_w;
  return;
}


/* FUN_0041e0d0 @ 0x0041e0d0 */

/* Function cleaned: this is UIElement; offset 0x32 = pos_h */
void __thiscall FUN_0041e0d0(UIElement *this,int *param_1)

{
  *param_1 = this->pos_h;
  return;
}


/* FUN_0041e0e0 @ 0x0041e0e0 */

void __fastcall FUN_0041e0e0(int param_1)

{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_0041e240 @ 0x0041e240 */

/* Function cleaned: param_1 is UIElement; offset 0x04 = field_04 */
void __fastcall FUN_0041e240(UIElement *this)

{
  this->field_04 = 1;
  return;
}


/* FUN_0041e250 @ 0x0041e250 */

/* Function cleaned: param_1 is UIElement; offset 0x04 = field_04 */
void __fastcall FUN_0041e250(UIElement *this)

{
  this->field_04 = 0;
  return;
}


/* FUN_0041e260 @ 0x0041e260 */

void __fastcall FUN_0041e260(int *param_1)

{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_0041e3b0 @ 0x0041e3b0 */

int __thiscall FUN_0041e3b0(void *this,int param_1,char param_2)

{
    /* STUB: 36 lines not yet reconstructed */
    return 0;
}


/* FUN_0041e4b0 @ 0x0041e4b0 */

void FUN_0041e4b0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00486180,u1,__param_fffffff4);
  return;
}


/* FUN_0041e500 @ 0x0041e500 */

void FUN_0041e500(void)

{
  return;
}


/* FUN_0041e560 @ 0x0041e560 */

int * __fastcall FUN_0041e560(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0041e5ab;
  *__seh_chain = &loc_10;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00473240;
  *__seh_chain = loc_10;
  return param_1;
}


/* FUN_0041e5c0 @ 0x0041e5c0 */

void __thiscall FUN_0041e5c0(MathProblem *this,int param_1)

{
  uint u1;
  uint u2;
  int n3;
  int *pn4;
  uint u5;
  uint u6;
  int *pn7;
  int *pn8;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (5 < param_1) {
    param_1 = 5;
  }
  this->difficulty = param_1;
  u1 = rand();
  u5 = (int)u1 >> 0x1f;
  this->game_mode = 4;
  pn7 = &DAT_00486188;
  pn4 = (int *)&this->threshold;
  pn8 = &DAT_0047f260 + param_1 * 0x12;
  do {
    if (DAT_0047f210 == 0) {
      *pn4 = *pn7;
      pn4[1] = pn7[1];
      pn4[2] = pn7[2];
      pn4[3] = pn7[3];
      *(short *)(pn4 + 4) = (short)pn7[4];
    }
    else {
      *pn4 = *pn8;
      pn4[1] = pn8[1];
      pn4[2] = pn8[2];
      pn4[3] = pn8[3];
      *(short *)(pn4 + 4) = (short)pn8[4];
      u2 = *pn4 + (((u1 ^ u5) - u5 & 3 ^ u5) - u5);
      u6 = (int)u2 >> 0x1f;
      n3 = ((u2 ^ u6) - u6 & 3 ^ u6) - u6;
      *pn4 = n3;
      *pn7 = n3;
      pn7[1] = pn4[1];
      pn7[2] = pn4[2];
      pn7[3] = pn4[3];
      *(short *)(pn7 + 4) = (short)pn4[4];
    }
    pn7 = (int *)((int)pn7 + 0x12);
    pn8 = (int *)((int)pn8 + 0x12);
    pn4 = (int *)((int)pn4 + 0x12);
  } while (pn7 < &DAT_004861d0);
  u1 = rand();
  u5 = (int)u1 >> 0x1f;
  /* TODO: 0x1DE base + stride 0x12 access into _pad1dc region of MathProblem */
  this->slots[2].denom =
       *(int *)((((u1 ^ u5) - u5 & 3 ^ u5) - u5) * 0x12 + 0x1de + (intptr_t)this);
  this->field_1cc =
       (int)*(short *)(DAT_0048345c + 0x42 + (short)((short)param_1 + 1) * 0xc);
  this->problem_type = (param_1 + 1) * 0x100;
  ((void (*)(void))this->vtable[1])(); /* vtable[1] */
  return;
}


/* FUN_0041e710 @ 0x0041e710 */

/* NOTE: overlapping globals */

void FUN_0041e710(void)

{
  _DAT_004861d6 = 0;
  _DAT_004861d4 = 0;
  return;
}


/* FUN_0041e720 @ 0x0041e720 */

void FUN_0041e720(void)

{
  _atexit(FUN_0041e730);
  return;
}


/* FUN_0041e730 @ 0x0041e730 */

void FUN_0041e730(void)

{
  return;
}


/* FUN_0041e740 @ 0x0041e740 */

int __fastcall FUN_0041e740(void *param_1)

{
    /* STUB: 1965 lines not yet reconstructed */
    return 0;
}


