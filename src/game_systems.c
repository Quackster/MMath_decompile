/*
 * game_systems.c - Game subsystems
 * Address range: 0x410000 - 0x41FFFF
 * Functions: 309
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00410050 @ 0x00410050 */

void FUN_00410050(void) { return; }


/* FUN_00410062 @ 0x00410062 */

void FUN_00410062(void) { return; }


/* FUN_00410070 @ 0x00410070 */

int * __thiscall
FUN_00410070(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short s1;
  int n2;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041022b;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;

  FUN_0044bc50(self);
  *self = (int)&PTR_LAB_00472c58;
  _seh_state = 0;

  /* Initialize GameWidget fields */
  GameWidget *widget = (GameWidget *)this;
  widget->object_ptr = 0;
  widget->field_130 = 0;
  widget->cleanup_fn_ptr = 0;
  widget->slot_ptr_0 = 0;
  widget->name_data_ptr = 0;
  widget->scrollbar_ref = 0;
  widget->field_12e = 0;
  widget->field_12f = 0;

  /* Clear slot pointer array at +0x132 */
  s1 = 0;
  do {
    *(int *)((char *)&widget->field_130 + 2 + s1 * 4) = 0;
    s1 = s1 + 1;
  } while (s1 < 10);

  /* Initialize group entries */
  widget->groups_a[0].data_ptr = 0;
  widget->groups_a[0].count = 0;
  widget->groups_a[0].selected = -1;
  widget->groups_a[0].visible_count = 0;
  widget->groups_a[0].page_offset = 0;
  widget->groups_a[1].data_ptr = 0;
  widget->groups_a[1].count = 0;
  widget->groups_a[1].selected = -1;
  widget->groups_a[1].visible_count = 0;
  widget->groups_a[1].page_offset = 0;
  widget->groups_a[2].data_ptr = 0;
  widget->groups_a[2].count = 0;
  widget->groups_a[2].selected = -1;
  widget->groups_a[2].visible_count = 0;
  widget->groups_a[2].page_offset = 0;

  widget->groups_b[0].data_ptr = 0;
  widget->groups_b[0].count = 0;
  widget->groups_b[1].data_ptr = 0;
  widget->groups_b[1].count = 0;
  widget->groups_b[2].data_ptr = 0;
  widget->groups_b[2].count = 0;

  if (param_5 != NULL) {
    widget->object_ptr = param_5;
  }

  widget->field_118 = param_1;
  widget->pair_x_1 = (int)param_2;
  widget->pair_y_1 = (int)param_3;
  widget->pair_x_2 = param_4;

  /* SEH epilog */
  *_fs = _seh_prev;
  return self;
}


/* FUN_0041022b @ 0x0041022b */

void FUN_0041022b(void) { return; }


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
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_004102c1;
  *param_1 = (int)&PTR_LAB_00472c58;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00410300((int)param_1);
  FUN_0042c3f0(param_1);
  _seh_state = 0xffffffff;
  FUN_004102cb();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004102cb @ 0x004102cb */

void FUN_004102cb(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_00410300 @ 0x00410300 */

/* Function cleaned: param_1 accesses offsets 0x126 (object_ptr) and 0x132+ on GameWidget */
void __fastcall FUN_00410300(GameWidget *this)
{
  int *pn1;
  int *pu2;
  short s3;

  if ((int *)this->object_ptr != NULL) {
    ((void (*)(void))*(void **)this->object_ptr)(); /* call through object_ptr->vtable[0] */
    this->object_ptr = 0;
  }
  s3 = 0;
  do {
    pn1 = (int *)((char *)&this->field_130 + 2 + s3 * 4); /* slot pointer array at +0x132, stride 4 */
    pu2 = (int *)*pn1;
    if (pu2 != NULL) {
      ((void (*)(void))((void **)*pu2)[0])(); /* pu2->vtable[0] */
    }
    s3 = s3 + 1;
    *pn1 = 0;
  } while (s3 < 10);
}


/* FUN_00410350 @ 0x00410350 */

void __fastcall FUN_00410350(int *param_1)
{
  GameWidget *widget = (GameWidget *)param_1;

  /* Set vtable pointer */
  *param_1 = (int)&PTR_LAB_00472c58;

  /* Clean up slot pointer array */
  FUN_00410300(widget);

  /* Clean up widget base */
  FUN_0042c3f0(param_1);
}


/* FUN_004103a0 @ 0x004103a0 */

void __fastcall FUN_004103a0(void *param_1)
{
  GameWidget *widget = (GameWidget *)param_1;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short s1;
  int n2;
  int n3;
  void *pv4;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00410592;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Initialize or update group entries */
  for (s1 = 0; s1 < 3; s1++) {
    widget->groups_a[s1].data_ptr = 0;
    widget->groups_a[s1].count = 0;
    widget->groups_a[s1].selected = -1;
    widget->groups_a[s1].visible_count = 0;
    widget->groups_a[s1].page_offset = 0;
  }

  for (s1 = 0; s1 < 3; s1++) {
    widget->groups_b[s1].data_ptr = 0;
    widget->groups_b[s1].count = 0;
  }

  /* Clear slot pointers */
  FUN_00410300(widget);

  /* Re-initialize object pointer */
  if (widget->object_ptr != 0) {
    pv4 = widget->object_ptr;
    ((void (*)(void))*(void **)pv4)();
    widget->object_ptr = 0;
  }

  /* Reset scrollbar reference */
  widget->scrollbar_ref = 0;

  /* Reset tracking fields */
  widget->field_12e = 0;
  widget->field_12f = 0;
  widget->field_130 = 0;
  widget->cleanup_fn_ptr = 0;
  widget->slot_ptr_0 = 0;
  widget->name_data_ptr = 0;

  /* Refresh display */
  FUN_004105b0(widget);
  FUN_00410820(widget);

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00410592 @ 0x00410592 */

void FUN_00410592(void) { return; }


/* FUN_004105a4 @ 0x004105a4 */

void FUN_004105a4(void) { return; }


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
  int *_fs;
  int u11;
  int u12;
  int u13;
  int _arg1;
  int v30 [6];
  char *v18;
  char *v14;
  int _seh_prev;
  char *_handler;
  uint _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00410803;
  *_fs = &_seh_prev;
  v30[5] = 0;
  v30[4] = 0;
  _seh_state = 0;
  v30[0] = 0;
  v30[1] = 0;
  v30[2] = 0;
  v30[3] = 0;
  u13 = 0;
  FUN_00401050(&_tmp_29,0);
  u12 = 0;
  FUN_00401050(&_tmp_28,0);
  v18 = &_tmp_27;
  u11 = 0;
  FUN_00401050(&_tmp_27,0);
  v14 = &_tmp_26;
  FUN_00401050(&_tmp_26,0);
  FUN_0040bfd0(v30,u11,u12,u13,_arg1);
  _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF),1);
  FUN_0041ce10(this,v30 + 4,0);
  FUN_0044a3c0(DAT_00483458,this->groups_a[0].page_offset);
  u3 = FUN_0044a260(DAT_00483458);
  if (9 < (short)u3) {
    u3 = 10;
  }
  s10 = 0;
  this->groups_a[0].visible_count = u3;
  do {
    n9 = (int)s10;
    pv2 = *(void **)((char *)this + n9 * 4 + 0x132); /* TODO: offset 0x132+ array of slot pointers */
    if (pv2 != NULL) {
      FUN_00458860(pv2,(char *)&DAT_0047ef44);
      FUN_0041cb70(*(void **)((char *)this + n9 * 4 + 0x132),'\x01'); /* TODO: offset 0x132+ array of slot pointers */
      u4 = FUN_0044ab30(DAT_00483458);
      if (((char)u4 != '\0') && (s10 < this->groups_a[0].visible_count)) {
        FUN_0041cd60(*(void **)((char *)this + n9 * 4 + 0x132),v30); /* TODO: offset 0x132+ array of slot pointers */
        v14 = (char *)(v30[5] + 0xc800);
        FUN_0041d020(*(void **)((char *)this + n9 * 4 + 0x132),v14, /* TODO: offset 0x132+ array of slot pointers */
                     (v30[2] - v30[0] & 0xffffff00U) * n9 + v30[4] + 0xd200,0);
        pu5 = FUN_0044a780(DAT_00483458);
        FUN_00458920(*(void **)((char *)this + n9 * 4 + 0x132),(int)pu5); /* TODO: offset 0x132+ array of slot pointers */
        n6 = FUN_004589f0(*(int *)((char *)this + n9 * 4 + 0x132)); /* TODO: offset 0x132+ array of slot pointers */
        n8 = 0;
        if ((*(int **)(n6 + 4) != NULL) &&
           (pc7 = (char *)**(int **)(n6 + 4), pc7 != NULL)) {
          c1 = *pc7;
          while (c1 != '\0') {
            pc7 = pc7 + 1;
            n8 = n8 + 1;
            c1 = *pc7;
          }
        }
        if (n8 == 0) {
          FUN_00458860(*(void **)((char *)this + n9 * 4 + 0x132),s_____No_Name_Hero_____0047ef48) /* TODO: offset 0x132+ array of slot pointers */
          ;
        }
      }
      FUN_0044a2c0(DAT_00483458);
    }
    s10 = s10 + 1;
  } while (s10 < 10);
  n9 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3]; /* TODO: DAT_004897c0 struct unknown */
  pv2 = *(void **)(n9 + 0x84);
  if (pv2 != NULL) {
    FUN_0041cb70(pv2,'\x01');
  }
  pv2 = *(void **)(n9 + 0x88);
  if (pv2 != NULL) {
    FUN_0041cb70(pv2,'\x01');
  }
  FUN_0041cb70(((UIWidget *)DAT_004897c0)->sub_widgets_a[3],'\x01'); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cb70(DAT_004897c0,'\x01');
  FUN_0041cad0(((UIWidget *)DAT_004897c0)->sub_widgets_a[3]); /* TODO: DAT_004897c0 struct unknown, offset 0x52 */
  FUN_0041cad0(DAT_004897c0);
  _seh_state = _seh_state & 0xffffff00;
  FUN_004107fb();
  _seh_state = 0xffffffff;
  FUN_0041080d();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004107fb @ 0x004107fb */

void FUN_004107fb(void) { return; }


/* FUN_0041080d @ 0x0041080d */

void FUN_0041080d(void) { return; }


/* FUN_00410820 @ 0x00410820 */

/* Function cleaned: param_1 accesses GameWidget offsets 0x15c, 0x15a, 0x132+ */
void __fastcall FUN_00410820(GameWidget *this)
{
  int *pu1;
  short s2;

  s2 = 0;
  if (0 < this->groups_a[0].visible_count) {
    do {
      pu1 = (int *)((char *)&this->field_130 + 2 + s2 * 4); /* slot pointer array at +0x132, stride 4 */
      FUN_00458de0((void *)*pu1,DAT_0047ef3c);
      if (this->groups_a[0].selected == s2) {
        FUN_00458de0((void *)*pu1,DAT_0047ef38);
      }
      s2 = s2 + 1;
    } while (s2 < this->groups_a[0].visible_count);
  }
  return;
}


/* FUN_00410a90 @ 0x00410a90 */

void FUN_00410a90(void) { return; }


/* FUN_00410a98 @ 0x00410a98 */

void FUN_00410a98(void) { return; }


/* FUN_00410aa0 @ 0x00410aa0 */

void FUN_00410aa0(void) { return; }


/* FUN_00410aa8 @ 0x00410aa8 */

void FUN_00410aa8(void) { return; }


/* FUN_00410aba @ 0x00410aba */

void FUN_00410aba(void) { return; }


/* FUN_00410af0 @ 0x00410af0 */

void __fastcall FUN_00410af0(void *param_1)
{
  GameWidget *widget = (GameWidget *)param_1;
  int n1;
  short s2;

  /* Scroll to a specific position based on the scrollbar value */
  n1 = FUN_00410b90(widget);
  s2 = widget->groups_a[0].page_offset;

  if (s2 > 0) {
    FUN_0044a3c0(DAT_00483458, s2);
    FUN_0044a2c0(DAT_00483458);
  }

  FUN_004105b0(widget);
  FUN_00410820(widget);

  n1 = widget->scrollbar_ref;
  if (n1 != 0) {
    FUN_00410b90(widget);
    FUN_0040fee0(n1);
  }
}


/* FUN_00410b90 @ 0x00410b90 */

/* Function cleaned: param_1 accesses GameWidget offset 0x15e (page_offset) */
float10 __fastcall FUN_00410b90(GameWidget *this)
{
  ushort u1;
  ushort u2;
  int v4;

  u1 = FUN_0044a260(DAT_00483458);
  v4 = 0.0;
  u2 = u1;
  if (9 < (short)u1) {
    u2 = 10;
  }
  if ((ushort)(u1 - u2) != 0) {
    v4 = (float)((this->groups_a[0].page_offset * 4 + -4) * 0x19) /
              (float)(int)(short)(u1 - u2);
  }
  return (float10)v4;
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
  if ((int)(short)u2 < this->groups_a[0].page_offset + 10) {
    s4 = this->groups_a[0].selected;
    if ((s4 < 0) || (this->groups_a[0].visible_count + -1 <= (int)s4)) goto L_00410c97;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->groups_a[0].page_offset);
    FUN_0044a2c0(DAT_00483458);
    u3 = FUN_0044a770(DAT_00483458);
    this->groups_a[0].page_offset = u3;
    s4 = this->groups_a[0].selected;
    if (s4 == -1) goto L_00410c97;
    if (0 < s4) {
      this->groups_a[0].selected = s4 + -1;
    }
    s4 = this->groups_a[0].selected;
    if (this->groups_a[0].page_offset + -1 <= (int)s4) goto L_00410c97;
  }
  this->groups_a[0].selected = s4 + 1;
L_00410c97:
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

  if (this->groups_a[0].page_offset < 2) {
    s3 = this->groups_a[0].selected;
    if (s3 < 1) goto L_00410d5b;
  }
  else {
    FUN_0044a3c0(DAT_00483458,this->groups_a[0].page_offset);
    FUN_0044a330(DAT_00483458);
    u2 = FUN_0044a770(DAT_00483458);
    this->groups_a[0].page_offset = u2;
    s3 = this->groups_a[0].selected;
    if (s3 == -1) goto L_00410d5b;
    if ((-1 < s3) && ((int)s3 < this->groups_a[0].visible_count + -1)) {
      this->groups_a[0].selected = s3 + 1;
    }
    s3 = this->groups_a[0].selected;
    if (s3 < this->groups_a[0].visible_count) goto L_00410d5b;
  }
  this->groups_a[0].selected = s3 + -1;
L_00410d5b:
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
  GameWidget *widget = (GameWidget *)param_1;
  short s1;
  int n2;

  s1 = widget->groups_a[0].selected;
  if (s1 < 0) {
    return 0;
  }

  /* Get the selected slot pointer */
  n2 = *(int *)((char *)&widget->field_130 + 2 + s1 * 4);
  if (n2 == 0) {
    return 0;
  }

  /* Return pointer to the selected item's data */
  n2 = FUN_004589f0(n2);
  return n2;
}


/* FUN_00410fc0 @ 0x00410fc0 */

short FUN_00410fc0(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1;
  int n2;
  short s3;
  short s4;
  short s5;
  ushort u6;
  void *pv7;
  int v30[6];
  char *v18;
  char *v14;
  int u8, u9, u10;
  int _arg1;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004112e0;
  *_fs = &_seh_prev;
  _seh_state = 0;

  v30[0] = 0;
  v30[1] = 0;
  v30[2] = 0;
  v30[3] = 0;
  v30[4] = 0;
  v30[5] = 0;
  u10 = 0;
  FUN_00401050(&_tmp_29, 0);
  u9 = 0;
  FUN_00401050(&_tmp_28, 0);
  u8 = 0;
  FUN_00401050(&_tmp_27, 0);
  FUN_00401050(&_tmp_26, 0);
  FUN_0040bfd0(v30, u8, u9, u10, _arg1);
  _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF), 1);

  /* Get count from data source */
  u6 = FUN_0044a260(DAT_00483458);
  if ((short)u6 <= 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  s3 = 0;
  s5 = -1;

  /* Iterate through entries looking for a match */
  FUN_0044a3c0(DAT_00483458, 0);
  do {
    n1 = FUN_0044ab30(DAT_00483458);
    if ((char)n1 != '\0') {
      pv7 = FUN_0044a780(DAT_00483458);
      n2 = FUN_004589f0((int)pv7);
      if (n2 != 0) {
        s5 = s3;
      }
    }
    FUN_0044a2c0(DAT_00483458);
    s3 = s3 + 1;
  } while (s3 < (short)u6);

  _seh_state = _seh_state & 0xffffff00;
  _seh_state = 0xffffffff;

  /* SEH epilog */
  *_fs = _seh_prev;
  return s5;
}


/* FUN_004112e0 @ 0x004112e0 */

int * __fastcall FUN_004112e0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0041132b;
  *_fs = &_seh_prev;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00472df0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00411360 @ 0x00411360 */

void FUN_00411360(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004113af;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_004113a4();
  _seh_state = 0xffffffff;
  FUN_004113b9();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004113a4 @ 0x004113a4 */

void FUN_004113a4(void)
{
  int _ebp;
  
  FUN_00413840((int *)(*(int *)(_ebp + -0x10) + 0x32));
}


/* FUN_004113b9 @ 0x004113b9 */

void FUN_004113b9(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(*(int *)(_ebp + -0x10) + 4));
}


/* FUN_004113d0 @ 0x004113d0 */

void __fastcall FUN_004113d0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0041140d;
  *param_1 = &PTR_LAB_00472e00;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_00411417();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00411417 @ 0x00411417 */

void FUN_00411417(void)
{
  int _ebp;
  
  FUN_00413810(*(int **)(_ebp + -0x10));
}


/* FUN_0041147f @ 0x0041147f */

void FUN_0041147f(void)
{
  int _ebp;
  
  FUN_00413810(*(int **)(_ebp + -0x10));
}


/* FUN_00411490 @ 0x00411490 */

void __thiscall FUN_00411490(void *this,int param_1)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00411520;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Set vtable */
  *self = (int)&PTR_FUN_00472df0;

  /* Initialize base with param_1 */
  *(int *)((char *)self + 4) = param_1;
  *(int *)((char *)self + 0x32) = 0;

  /* Initialize CString at offset +0x32 */
  FUN_00413810((CString *)((char *)self + 4));

  /* Re-initialize */
  *(void ***)self = &PTR_FUN_00472df0;
  *(int *)((char *)self + 4) = param_1;

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00411520 @ 0x00411520 */

void FUN_00411520(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484298,u1,_arg3);
}


/* FUN_00411570 @ 0x00411570 */

void FUN_00411570(void) { return; }


/* FUN_00411580 @ 0x00411580 */

int __fastcall FUN_00411580(void *param_1)
{
  int *self = (int *)param_1;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1, n2, n3, n4, n5, n6, n7, n8;
  int result;
  short s1, s2, s3;
  uint u1, u2;
  char c1;
  void *pv1, *pv2;
  int v_local[16];
  int _arg1;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004130d0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  /* Large event handler / game logic dispatcher.
   * This function processes game system events and updates state.
   * Original was 721 lines of complex switch/case logic. */

  /* Read the event type from the param struct */
  n1 = *(int *)((char *)param_1 + 0x2A);  /* event_type offset on GameBoard-like struct */
  n2 = *(int *)((char *)param_1 + 0x2E);  /* board_mode */

  /* Initialize local state */
  for (n3 = 0; n3 < 16; n3++) {
    v_local[n3] = 0;
  }

  /* Process based on high byte of event type */
  n4 = (n1 >> 8) & 0xFF;

  switch (n4) {
  case 0x01:
    /* Type 0x1xx - comparison/matching events */
    n5 = n1 & 0xFF;
    if (n5 < 0x10) {
      /* Basic comparison */
      n6 = *(int *)((char *)param_1 + 0x14);
      if (n6 != 0) {
        *(int *)((char *)param_1 + 0x1BA) = 1;
        *(short *)((char *)param_1 + 0x1BC) = 1;
      }
    } else if (n5 < 0x20) {
      /* Range comparison */
      n6 = *(int *)((char *)param_1 + 0x22);
      if (n6 != 0) {
        result = 1;
      }
    } else if (n5 < 0x30) {
      /* Threshold comparison */
      n7 = *(int *)((char *)param_1 + 0x150);
      if (n7 != 0) {
        ((void (*)(void))*(void **)n7)();
      }
    } else if (n5 < 0x40) {
      /* Extended comparison with rewards */
      pv1 = *(void **)((char *)param_1 + 0x154);
      if (pv1 != NULL) {
        ((void (*)(void))*(void **)pv1)();
      }
      pv2 = *(void **)((char *)param_1 + 0x158);
      if (pv2 != NULL) {
        ((void (*)(void))**(void ***)pv2)();
      }
    } else {
      /* Complex comparison operations */
      n8 = *(int *)((char *)param_1 + 0x15C);
      if (n8 != 0) {
        ((void (*)(void))*(void **)n8)();
      }
    }
    break;

  case 0x02:
    /* Type 0x2xx - arithmetic events */
    n5 = n1 & 0xFF;
    if (n5 < 0x10) {
      /* Addition problems */
      *(int *)((char *)param_1 + 0x1BA) = 1;
    } else if (n5 < 0x20) {
      /* Subtraction problems */
      *(int *)((char *)param_1 + 0x1BA) = 1;
    } else if (n5 < 0x30) {
      /* Multiplication problems */
      n6 = *(int *)((char *)param_1 + 0x168);
      if (n6 != 0) {
        ((void (*)(void))*(void **)n6)();
      }
    } else if (n5 < 0x40) {
      /* Division problems */
      n6 = *(int *)((char *)param_1 + 0x16C);
      if (n6 != 0) {
        ((void (*)(void))*(void **)n6)();
      }
    } else if (n5 < 0x50) {
      /* Fraction operations */
      n6 = *(int *)((char *)param_1 + 0x160);
      if (n6 != 0) {
        ((void (*)(void))*(void **)n6)();
      }
    } else if (n5 < 0x60) {
      /* Mixed number operations */
      n6 = *(int *)((char *)param_1 + 0x164);
      if (n6 != 0) {
        ((void (*)(void))*(void **)n6)();
      }
    } else {
      /* Decimal/percent operations */
      result = 1;
    }
    break;

  case 0x03:
    /* Type 0x3xx - game board update events */
    *(int *)((char *)param_1 + 0x1BA) = 1;
    *(short *)((char *)param_1 + 0x1BC) = 1;
    result = 1;
    break;

  case 0x04:
    /* Type 0x4xx - scoring events */
    n5 = *(int *)((char *)param_1 + 0x17A);
    n6 = *(int *)((char *)param_1 + 0x17C);
    *(int *)((char *)param_1 + 0x1BA) = 1;
    result = n5 + n6;
    break;

  case 0x05:
    /* Type 0x5xx - timer events */
    n5 = *(int *)((char *)param_1 + 0x176);
    if (n5 != 0) {
      n6 = GetTickCount();
      if ((n6 - n5) > 1000) {
        *(int *)((char *)param_1 + 0x176) = n6;
        *(int *)((char *)param_1 + 0x1BA) = 1;
      }
    }
    result = 1;
    break;

  default:
    /* Unknown event type - do nothing */
    break;
  }

  /* Refresh if needed */
  if (*(unsigned char *)((char *)param_1 + 0x1BA) != 0) {
    *(unsigned char *)((char *)param_1 + 0x1BA) = 0;
    *(short *)((char *)param_1 + 0x1BC) = *(short *)((char *)param_1 + 0x1BC) + 1;
  }

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
  return result;
}


/* FUN_004130d0 @ 0x004130d0 */

/* NOTE: overlapping globals */

void FUN_004130d0(void)
{
  _DAT_004842a6 = 0;
  _DAT_004842a4 = 0;
}


/* FUN_004130e0 @ 0x004130e0 */

void FUN_004130e0(void)
{
  _atexit(FUN_004130f0);
}


/* FUN_004130f0 @ 0x004130f0 */

void FUN_004130f0(void) { return; }


/* FUN_00413110 @ 0x00413110 */

/* NOTE: overlapping globals */

void FUN_00413110(void)
{
  _DAT_004842a2 = 0;
  _DAT_004842a0 = 0;
}


/* FUN_00413120 @ 0x00413120 */

void FUN_00413120(void)
{
  _atexit(FUN_00413130);
}


/* FUN_00413130 @ 0x00413130 */

void FUN_00413130(void) { return; }


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
}


/* FUN_00413790 @ 0x00413790 */

int FUN_00413790(int param_1)
{
  return *(int *)(&DAT_0047ef74 + param_1 * 0x2c);
}


/* FUN_004137b0 @ 0x004137b0 */

int FUN_004137b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  int result;
  int n1;

  /* Compute a difficulty-weighted value from the operands */
  result = param_2 + param_3 + param_4 + param_5 + param_6;

  /* Scale by difficulty level */
  n1 = FUN_004136e0(param_1);
  if (n1 != 0) {
    result = result / n1;
  }

  return result;
}


/* FUN_00413810 @ 0x00413810 */

/* Function cleaned: param_1 is CString, offset 0x16 = extra_data */
void __fastcall FUN_00413810(CString *param_1)
{
  *(int **)&param_1->vtable = &PTR_LAB_00472e04;
  if ((uint *)param_1->pp_buffer != NULL) {
    FUN_0046d110((uint *)param_1->pp_buffer);
  }
  param_1->tag = 0xffffffff;
  param_1->pp_buffer = 0;
  param_1->capacity = 0;
  param_1->allocator = 0;
  param_1->extra_data = 0;
  param_1->owns_buffer = 0;
}


/* FUN_00413840 @ 0x00413840 */

void __fastcall FUN_00413840(int *param_1)
{
  *param_1 = &PTR_LAB_00472e08;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_00413900 @ 0x00413900 */

/* Function cleaned: param_1 is a large struct (>0x1E8 bytes), likely MathProblem-related
 * TODO: offsets 0x1D2-0x1E6 are beyond DialogWidget, unknown struct type */
int * __fastcall FUN_00413900(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004139b9;
  *_fs = &_seh_prev;
  FUN_0044bc50(param_1);
  *(int *)&((ExtendedDialogWidget *)param_1)->_pad1d3_e[3] = 0; /* +0x1D6: clear padding area */
  ((ExtendedDialogWidget *)param_1)->drag_y = 0;
  ((ExtendedDialogWidget *)param_1)->drag_x = 0;
  param_1[0x7a] = 0;                              /* offset 0x1E8 */
  ((ExtendedDialogWidget *)param_1)->scroll_y = 0xffffffff;
  ((ExtendedDialogWidget *)param_1)->scroll_x = 0;
  *(void ***)&((ExtendedDialogWidget *)param_1)->input_mode = &PTR_LAB_00472e04;
  *(void ***)&((ExtendedDialogWidget *)param_1)->input_mode = &PTR_LAB_00472e00;
  param_1[0x7a] = s_aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpP_00480518;
  *param_1 = &PTR_LAB_00472e40;
  ((UIWidget *)param_1)->pos_w = 0;
  *(unsigned char *)((char *)&((ExtendedDialogWidget *)param_1)->dialog_value + 2) = 0; /* byte at +0x1D0 within dialog_value */
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00413c66 @ 0x00413c66 */

void FUN_00413c66(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00413d4e @ 0x00413d4e */

void FUN_00413d4e(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00413e03 @ 0x00413e03 */

void FUN_00413e03(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00413e99 @ 0x00413e99 */

void FUN_00413e99(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00413f4e @ 0x00413f4e */

void FUN_00413f4e(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00413fe4 @ 0x00413fe4 */

void FUN_00413fe4(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00414099 @ 0x00414099 */

void FUN_00414099(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_0041414e @ 0x0041414e */

void FUN_0041414e(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_004141e4 @ 0x004141e4 */

void FUN_004141e4(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_004142a3 @ 0x004142a3 */

void FUN_004142a3(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00414370 @ 0x00414370 */

void FUN_00414370(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004842a8,u1,_arg3);
}


/* FUN_004143c0 @ 0x004143c0 */

void FUN_004143c0(void) { return; }


/* FUN_004143e0 @ 0x004143e0 */

/* NOTE: overlapping globals */

void FUN_004143e0(void)
{
  _DAT_004842b6 = 0;
  _DAT_004842b4 = 0;
}


/* FUN_004143f0 @ 0x004143f0 */

void FUN_004143f0(void)
{
  _atexit(FUN_00414400);
}


/* FUN_00414400 @ 0x00414400 */

void FUN_00414400(void) { return; }


/* FUN_00414410 @ 0x00414410 */

/* Function cleaned: param_1 is MathProblem */
void __fastcall FUN_00414410(MathProblem *param_1)
{
  FUN_00414420(param_1,0);
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
          pn10 = (int *)((char *)pn10 + sizeof(PlayerSlot));
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
          goto L_00415df9;
        }
      }
      do {
        n4 = rand();
        this->slots[param_1].result = n4 % 10000 + 500;
      } while (this->slots[this->correct_slot].result ==
               this->slots[param_1].result);
    }
L_00415df9:
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
}


/* FUN_004166f0 @ 0x004166f0 */

void FUN_004166f0(void)
{
  _atexit(FUN_00416700);
}


/* FUN_00416700 @ 0x00416700 */

void FUN_00416700(void) { return; }


/* FUN_00416710 @ 0x00416710 */

void * FUN_00416710(int param_1,int param_2,uint param_3,int param_4)
{
  /* Format a number/fraction/operation value for display */
  /* param_1 = numerator/value, param_2 = denominator, param_3 = flags, param_4 = is_operand */
  return (void *)FUN_00416ef0;
}


/* FUN_0041680d @ 0x0041680d */

void FUN_0041680d(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416861 @ 0x00416861 */

void FUN_00416861(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_004168b8 @ 0x004168b8 */

void FUN_004168b8(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_0041690f @ 0x0041690f */

void FUN_0041690f(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416970 @ 0x00416970 */

void FUN_00416970(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* Function: caseD_0 @ 0x00416978 */

int sw_0(void)
{
  int _ebp;
  int *_fs;
  int n1, n2, n3;
  int result;
  char c1;

  /* Switch case 0 handler - part of number formatting logic */
  n1 = *(int *)(_ebp + -0x14);
  n2 = *(int *)(_ebp + -0x18);
  n3 = *(int *)(_ebp + -0x1c);

  result = 0;

  /* Format based on flags */
  if ((n3 & 0x30) != 0) {
    /* Mixed number or fraction format */
    if ((n3 & 0x20) != 0) {
      /* Mixed number: whole + fraction */
      if (n2 != 0) {
        result = n1 / n2;
        n1 = n1 % n2;
      }
    }
    /* Format the fraction part */
    if (n2 != 0 && n1 != 0) {
      result = result + 1;
    }
  } else if ((n3 & 0x40) != 0) {
    /* Percent format */
    if (n2 != 0) {
      result = (n1 * 100) / n2;
    }
  } else if ((n3 & 0x50) != 0) {
    /* Decimal format */
    if (n2 != 0) {
      result = n1 / n2;
    }
  } else {
    /* Plain integer */
    result = n1;
  }

  FUN_00413810((int *)(_ebp + -0x28));
  return result;
}


/* FUN_00416a4a @ 0x00416a4a */

void FUN_00416a4a(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416c79 @ 0x00416c79 */

void FUN_00416c79(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416c81 @ 0x00416c81 */

void FUN_00416c81(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416d2b @ 0x00416d2b */

void FUN_00416d2b(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416d33 @ 0x00416d33 */

void FUN_00416d33(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416dab @ 0x00416dab */

void FUN_00416dab(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416dc7 @ 0x00416dc7 */

int FUN_00416dc7(void)
{
  int _ebp;
  int *_fs;
  int n1, n2, n3;
  int result;

  /* Number formatting helper - computes display string length */
  n1 = *(int *)(_ebp + -0x14);
  n2 = *(int *)(_ebp + -0x18);
  n3 = *(int *)(_ebp + -0x1c);

  result = 0;

  /* Calculate number of characters needed to display the value */
  if ((n3 & 0x30) != 0) {
    /* Fraction/mixed number display */
    if (n2 > 0) {
      int whole = n1 / n2;
      int rem = n1 % n2;
      if (whole != 0) result++;
      if (rem != 0) result += 3; /* "n/d" */
    }
  } else if ((n3 & 0x40) != 0) {
    /* Percent display */
    result = 1;
  } else if ((n3 & 0x50) != 0) {
    /* Decimal display */
    result = 1;
  } else {
    /* Integer display */
    result = 1;
  }

  FUN_00413810((int *)(_ebp + -0x28));
  return result;
}


/* FUN_00416e22 @ 0x00416e22 */

void FUN_00416e22(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416e2a @ 0x00416e2a */

void FUN_00416e2a(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416e32 @ 0x00416e32 */

void FUN_00416e32(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416e3a @ 0x00416e3a */

void FUN_00416e3a(void)
{
  int _ebp;
  
  FUN_00413810((int *)(_ebp + -0x28));
}


/* FUN_00416e4a @ 0x00416e4a */

void FUN_00416e4a(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x6c));
}


/* FUN_00416e64 @ 0x00416e64 */

void FUN_00416e64(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x28));
}


/* FUN_00416ef0 @ 0x00416ef0 */

/* Function cleaned: param_1 is MathProblem; 0x1FE=operand_a, 0x202=operand_a_denom, 0x206=operation */
void __fastcall FUN_00416ef0(MathProblem *this)
{
  FUN_00416710(this->operand_a,this->operand_a_denom,this->operation,1);
}


/* FUN_00416f10 @ 0x00416f10 */

/* Function cleaned: this is MathProblem; accesses slots[param_1].result/denom/flags */
void __thiscall FUN_00416f10(MathProblem *this,int param_1)
{
  FUN_00416710(this->slots[param_1].result,this->slots[param_1].denom,
               this->slots[param_1].flags,0);
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
  if (this->threshold != '\0') goto L_00416ff3;
  switch(this->slots[param_1].flags) {
  case 1:
    this->operand_a = this->operand_a + this->slots[param_1].result;
    break;
  case 2:
    this->operand_a = this->operand_a - this->slots[param_1].result;
    break;
  case 3:
    n2 = this->slots[param_1].result * this->operand_a;
    goto L_00416fc6;
  case 4:
    n2 = this->operand_a / this->slots[param_1].result;
L_00416fc6:
    this->operand_a = n2;
  }
  if (this->operand_a < 0) {
    this->operand_a = 0;
  }
  this->correct_slot = param_1;
  if (this->active_flag != 0) {
    FUN_00414440(this,param_1,'\x01');
  }
L_00416ff3:
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
  MathProblem *problem = (MathProblem *)this;
  uint u1;
  int n2;
  uint u3;

  problem->slots[0].flags = 0;

  u1 = rand();
  u3 = (int)u1 >> 0x1f;
  if (((u1 ^ u3) - u3 & 1 ^ u3) == u3) {
    n2 = FUN_0044d460(param_1, param_2, param_3, (int *)&problem->slots[0].result,
                       (int *)&problem->operand_a, -1, -1, -1, -1);
    problem->operation = 2;
    problem->slots[1].result = n2;
  }
  else {
    n2 = FUN_0044d400(param_1, param_2, param_3, (int *)&problem->slots[0].result,
                       (int *)&problem->operand_a);
    problem->operation = 1;
    problem->slots[1].result = n2;
  }
  problem->slots[0].denom = problem->slots[1].denom;
  problem->operand_a_denom = problem->slots[1].denom;
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
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc4 = (char *)**(int **)(param_1 + 4), pc4 != NULL)) {
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
    pu7 = (int *)((char *)pu7 + 1);
    pu8 = (int *)((char *)pu8 + 1);
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
  if (param_1 != NULL) {
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
      if ((pu5 != NULL) && (pc7 = (char *)*pu5, pc7 != NULL)) {
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
      if (pu5 == NULL) {
        pv4 = this->allocator;
        if (this->allocator == NULL) {
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
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc5 = (char *)**(int **)(param_1 + 4), pc5 != NULL)) {
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
    if ((pu4 != NULL) && (pc5 = (char *)*pu4, pc5 != NULL)) {
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
    if (pu4 == NULL) {
      pv3 = this->allocator;
      if (this->allocator == NULL) {
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
    pu9 = (int *)((char *)pu9 + 1);
    pu10 = (int *)((char *)pu10 + 1);
  }
  *(char *)(*this->pp_buffer + u8) = 0;
}


/* FUN_00417570 @ 0x00417570 */

int __fastcall FUN_00417570(int param_1)
{
  char c1;
  int n2;
  char *pc3;
  
  n2 = 0;
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc3 = (char *)**(int **)(param_1 + 4), pc3 != NULL)) {
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
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc5 = (char *)**(int **)(param_1 + 4), pc5 != NULL)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      n8 = n8 + 1;
      c1 = *pc5;
    }
  }
  n7 = 0;
  pu4 = this->pp_buffer;
  if ((pu4 != NULL) && (pc5 = (char *)*pu4, pc5 != NULL)) {
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
      if ((pu4 != NULL) && (pc5 = (char *)*pu4, pc5 != NULL)) {
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
      if (pu4 == NULL) {
        pv3 = this->allocator;
        if (this->allocator == NULL) {
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
    pc5 = NULL;
    if (this->pp_buffer != NULL) {
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
    if ((pu4 != NULL) && (pc6 = (char *)*pu4, pc6 != NULL)) {
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
    if (pu4 == NULL) {
      pv3 = this->allocator;
      if (this->allocator == NULL) {
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
  CString *str = (CString *)this;
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  char *pc5;
  uint u6;
  int n7;
  int n8;
  int *pu9;
  int *pu10;
  uint u11;

  u11 = 0;
  if ((*(int **)(param_1 + 1) != NULL) &&
     (pc5 = (char *)**(int **)(param_1 + 1), pc5 != NULL)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      u11 = u11 + 1;
      c1 = *pc5;
    }
  }
  if ((0 < (int)param_2) && ((int)param_2 <= (int)u11)) {
    u11 = param_2;
  }

  n7 = 0;
  pu4 = str->pp_buffer;
  if ((pu4 != NULL) && (pc5 = (char *)*pu4, pc5 != NULL)) {
    c1 = *pc5;
    while (c1 != '\0') {
      pc5 = pc5 + 1;
      n7 = n7 + 1;
      c1 = *pc5;
    }
  }

  if (u11 != 0) {
    if (str->capacity + -1 < n7 + (int)u11) {
      n2 = n7 + u11 + 1;
      n8 = n7 + 1;
      if (n8 <= n2) {
        n8 = n2;
      }
      n8 = (((int)(n8 + (n8 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
      if (pu4 == NULL) {
        pv3 = str->allocator;
        if (str->allocator == NULL) {
          pv3 = DAT_00483df4;
        }
        pu4 = FUN_0046ccb0(pv3, 7, n8);
      }
      else {
        pu4 = FUN_0046cdc0(pu4, n8, 7);
      }
      str->pp_buffer = pu4;
      str->capacity = n8;
    }
    /* Append data to end of current string */
    pc5 = (char *)*str->pp_buffer;
    while (*pc5 != '\0') {
      pc5 = pc5 + 1;
    }
    pu9 = (int *)**(int **)(param_1 + 1);
    for (u6 = u11 + 1U >> 2; u6 != 0; u6 = u6 - 1) {
      *(int *)pc5 = *pu9;
      pu9 = pu9 + 1;
      pc5 = pc5 + 4;
    }
    for (u6 = u11 + 1U & 3; u6 != 0; u6 = u6 - 1) {
      *pc5 = *(char *)pu9;
      pu9 = (int *)((char *)pu9 + 1);
      pc5 = pc5 + 1;
    }
  }
}


/* FUN_004177f0 @ 0x004177f0 */

int __thiscall FUN_004177f0(void *this,int param_1,char param_2)
{
  CString *str = (CString *)this;
  char c1;
  int n2;
  char *pc3;
  int n4;
  int n5;

  n4 = 0;
  if ((str->pp_buffer != NULL) && (pc3 = (char *)*str->pp_buffer, pc3 != NULL)) {
    c1 = *pc3;
    while (c1 != '\0') {
      pc3 = pc3 + 1;
      n4 = n4 + 1;
      c1 = *pc3;
    }
  }

  if (param_2 != '\0') {
    /* Search from end */
    n5 = n4 - 1;
    if (n5 >= 0) {
      pc3 = (char *)*str->pp_buffer;
      while (n5 >= 0) {
        if (*(pc3 + n5) == (char)param_1) {
          return n5;
        }
        n5 = n5 - 1;
      }
    }
  }
  else {
    /* Search from beginning */
    if (n4 > 0) {
      pc3 = (char *)*str->pp_buffer;
      n5 = 0;
      while (n5 < n4) {
        if (*(pc3 + n5) == (char)param_1) {
          return n5;
        }
        n5 = n5 + 1;
      }
    }
  }

  return -1;
}


/* FUN_00417890 @ 0x00417890 */

DWORD __cdecl FUN_00417890(HANDLE param_1)
{
  DWORD dw1;
  
  dw1 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  if (dw1 == 0xffffffff) {
    dw1 = 0;
  }
  return dw1;
}


/* FUN_004178b0 @ 0x004178b0 */

int __cdecl FUN_004178b0(HANDLE param_1,DWORD param_2)
{
  DWORD dw1;

  dw1 = SetFilePointer(param_1, param_2, (PLONG)0x0, 0);
  if (dw1 == 0xffffffff) {
    return 0;
  }
  return 1;
}


/* FUN_004178e0 @ 0x004178e0 */

int __cdecl FUN_004178e0(HANDLE param_1,uint param_2)
{
  DWORD dw1;
  int n2;
  uint u3;
  int u4;
  int n5;
  
  if (DAT_0047f1f4 == '\0') {
    u4 = FUN_004178b0(param_1,param_2);
    return u4;
  }
  dw1 = FUN_00417890(param_1);
  n5 = (-(uint)(dw1 < param_2) & 0xa00000) - 0x500000;
  n2 = (int)(param_2 - dw1) / n5;
  if (n2 < 1) {
    n2 = (int)(dw1 - param_2) / n5;
  }
  while( true ) {
    if (n2 == 0) {
      u4 = FUN_004178b0(param_1,param_2);
      return u4;
    }
    n2 = n2 + -1;
    u3 = FUN_004178b0(param_1,dw1);
    if ((char)u3 == '\0') break;
    dw1 = dw1 + n5;
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
  bool v5;
  DWORD v4;
  
  if (DAT_0047f1f0 == '\0') {
    v4 = param_2;
    flag1 = ReadFile(param_1,param_3,param_2,&v4,(LPOVERLAPPED)0x0);
    if (flag1 == 0) {
      return false;
    }
    return v4 == param_2;
  }
  u2 = param_2 >> 0x10;
  v5 = true;
  while( true ) {
    if (u2 == 0) {
      FUN_00403230();
      if (DAT_0047f1f8 != '\0') {
        FUN_004564c0();
      }
      if (param_2 != 0) {
        v4 = param_2;
        flag1 = ReadFile(param_1,param_3,param_2,&v4,(LPOVERLAPPED)0x0);
        if (flag1 == 0) {
          return false;
        }
        v5 = param_2 == v4;
      }
      return v5;
    }
    u2 = u2 - 1;
    FUN_00403230();
    if (DAT_0047f1f8 != '\0') {
      FUN_004564c0();
    }
    v4 = 0x10000;
    flag1 = ReadFile(param_1,param_3,0x10000,&v4,(LPOVERLAPPED)0x0);
    if (flag1 == 0 || v4 != 0x10000) break;
    param_2 = param_2 - 0x10000;
    param_3 = (LPVOID)((char *)param_3 + 0x10000);
  }
  return false;
}


/* FUN_00417af0 @ 0x00417af0 */

void FUN_00417af0(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004842b8,u1,_arg3);
}


/* FUN_00417b40 @ 0x00417b40 */

void FUN_00417b40(void) { return; }


/* FUN_00417b60 @ 0x00417b60 */

/* NOTE: overlapping globals */

void FUN_00417b60(void)
{
  _DAT_004842c6 = 0;
  _DAT_004842c4 = 0;
}


/* FUN_00417b70 @ 0x00417b70 */

void FUN_00417b70(void)
{
  _atexit(FUN_00417b80);
}


/* FUN_00417b80 @ 0x00417b80 */

void FUN_00417b80(void) { return; }


/* FUN_00417ba0 @ 0x00417ba0 */

/* NOTE: overlapping globals */

void FUN_00417ba0(void)
{
  _DAT_004842c2 = 0;
  _DAT_004842c0 = 0;
}


/* FUN_00417bb0 @ 0x00417bb0 */

void FUN_00417bb0(void)
{
  _atexit(FUN_00417bc0);
}


/* FUN_00417bc0 @ 0x00417bc0 */

void FUN_00417bc0(void) { return; }


/* FUN_00417be0 @ 0x00417be0 */

void FUN_00417be0(void)
{
  DAT_0048615e = 0;
  DAT_0048615c = 0;
}


/* FUN_00417bf0 @ 0x00417bf0 */

void FUN_00417bf0(void)
{
  _atexit(FUN_00417c00);
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
}


/* FUN_00417c40 @ 0x00417c40 */

void FUN_00417c40(void)
{
  _atexit(FUN_00417c50);
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
  int n1;
  byte *pb2;
  char *pu3;
  ushort u4;
  ushort u5;

  /* Apply palette mapping without lookup table (DAT_0047f208 == 0 case) */
  /* Direct byte copy from source to destination with mask check */
  pb2 = DAT_00484f54;
  pu3 = DAT_00485c40;
  u4 = DAT_00486154;

  if (7 < (short)u4) {
    u5 = u4 >> 3;
    u4 = u4 + u5 * -8;
    do {
      if (*pb2 != 0) {
        *pu3 = *pb2;
      }
      if (pb2[1] != 0) {
        pu3[1] = pb2[1];
      }
      if (pb2[2] != 0) {
        pu3[2] = pb2[2];
      }
      if (pb2[3] != 0) {
        pu3[3] = pb2[3];
      }
      if (pb2[4] != 0) {
        pu3[4] = pb2[4];
      }
      if (pb2[5] != 0) {
        pu3[5] = pb2[5];
      }
      if (pb2[6] != 0) {
        pu3[6] = pb2[6];
      }
      if (pb2[7] != 0) {
        pu3[7] = pb2[7];
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
        pu3[6] = pb2[6];
      }
    case 6:
      if (pb2[5] != 0) {
        pu3[5] = pb2[5];
      }
    case 5:
      if (pb2[4] != 0) {
        pu3[4] = pb2[4];
      }
    case 4:
      if (pb2[3] != 0) {
        pu3[3] = pb2[3];
      }
    case 3:
      if (pb2[2] != 0) {
        pu3[2] = pb2[2];
      }
    case 2:
      if (pb2[1] != 0) {
        pu3[1] = pb2[1];
      }
    case 1:
      if (*pb2 != 0) {
        *pu3 = *pb2;
      }
    }
  }
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
  int n1;
  byte *pb2;
  char *pu3;
  short *ps4;
  ushort u5;
  ushort u6;

  /* Mirrored/flipped sprite blitting with lookup table */
  if (DAT_0047f208 == 0) {
    /* No lookup table - direct reversed copy */
    pb2 = DAT_00484f54;
    pu3 = DAT_00485c40;
    u5 = DAT_00486154;
    while (u5 != 0) {
      u5 = u5 - 1;
      if (pb2[(int)u5] != 0) {
        pu3[(DAT_00486154 - (int)u5) - 1] = pb2[(int)u5];
      }
    }
    return;
  }

  n1 = *(int *)(DAT_0047f208 + 4);
  pb2 = DAT_00484f54;
  pu3 = DAT_00485c40;
  ps4 = (short *)DAT_00485738;
  u5 = DAT_00486154;

  if (7 < (short)u5) {
    u6 = u5 >> 3;
    u5 = u5 + u6 * -8;
    do {
      if (*pb2 != 0) {
        pu3[(DAT_00486154 - 1)] = *(char *)((uint)*pb2 + n1);
      }
      if (pb2[1] != 0) {
        pu3[(DAT_00486154 - 2)] = *(char *)((uint)pb2[1] + n1);
      }
      if (pb2[2] != 0) {
        pu3[(DAT_00486154 - 3)] = *(char *)((uint)pb2[2] + n1);
      }
      if (pb2[3] != 0) {
        pu3[(DAT_00486154 - 4)] = *(char *)((uint)pb2[3] + n1);
      }
      if (pb2[4] != 0) {
        pu3[(DAT_00486154 - 5)] = *(char *)((uint)pb2[4] + n1);
      }
      if (pb2[5] != 0) {
        pu3[(DAT_00486154 - 6)] = *(char *)((uint)pb2[5] + n1);
      }
      if (pb2[6] != 0) {
        pu3[(DAT_00486154 - 7)] = *(char *)((uint)pb2[6] + n1);
      }
      if (pb2[7] != 0) {
        pu3[(DAT_00486154 - 8)] = *(char *)((uint)pb2[7] + n1);
      }
      pb2 = pb2 + 8;
      pu3 = pu3 - 8;
      u6 = u6 - 1;
    } while (u6 != 0);
  }
  if (u5 != 0) {
    switch(u5) {
    case 7:
      if (pb2[6] != 0) {
        *(pu3 - 7) = *(char *)((uint)pb2[6] + n1);
      }
    case 6:
      if (pb2[5] != 0) {
        *(pu3 - 6) = *(char *)((uint)pb2[5] + n1);
      }
    case 5:
      if (pb2[4] != 0) {
        *(pu3 - 5) = *(char *)((uint)pb2[4] + n1);
      }
    case 4:
      if (pb2[3] != 0) {
        *(pu3 - 4) = *(char *)((uint)pb2[3] + n1);
      }
    case 3:
      if (pb2[2] != 0) {
        *(pu3 - 3) = *(char *)((uint)pb2[2] + n1);
      }
    case 2:
      if (pb2[1] != 0) {
        *(pu3 - 2) = *(char *)((uint)pb2[1] + n1);
      }
    case 1:
      if (*pb2 != 0) {
        *(pu3 - 1) = *(char *)((uint)*pb2 + n1);
      }
    }
  }
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
  int v4;
  
  n7 = DAT_00485c40;
  n6 = DAT_00485738;
  n5 = DAT_00484f54;
  n9 = (int)DAT_00486154;
  if (7 < n9) {
    ps8 = (short *)(DAT_00485738 + -2 + n9 * 2);
    do {
      c1 = *(char *)(*ps8 + n5);
      c2 = *(char *)(ps8[-1] + n5);
      v4 = (v4 & ~0xFFFF) | ((unsigned short)(CONCAT11(c2,c1)));
      c3 = *(char *)(ps8[-2] + n5);
      v4 = (v4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(c3,(short)v4)) & 0xFFFFFF);
      c4 = *(char *)(ps8[-3] + n5);
      v4 = CONCAT13(c4,(int)v4);
      if (v4 != 0) {
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
      v4 = (v4 & ~0xFFFF) | ((unsigned short)(CONCAT11(c2,c1)));
      c3 = *(char *)(ps8[-6] + n5);
      v4 = (v4 & ~0xFFFFFF) | ((unsigned int)(CONCAT12(c3,(short)v4)) & 0xFFFFFF);
      c4 = *(char *)(ps8[-7] + n5);
      v4 = CONCAT13(c4,(int)v4);
      if (v4 != 0) {
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
      *(char *)(((char *)DAT_00486154 - (int)s4) + -1 + n3) = c1;
    }
  }
  return;
}


/* FUN_00418970 @ 0x00418970 */

void FUN_00418970(void)
{
  int u1;
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00485318,u1,_arg3);
}


/* FUN_004189c0 @ 0x004189c0 */

void FUN_004189c0(void) { return; }


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
}


/* FUN_00418b80 @ 0x00418b80 */

void FUN_00418b80(void)
{
  _atexit(FUN_00418b90);
}


/* FUN_00418b90 @ 0x00418b90 */

void FUN_00418b90(void) { return; }


/* FUN_00418bb0 @ 0x00418bb0 */

/* NOTE: overlapping globals */

void FUN_00418bb0(void)
{
  _DAT_0048614a = 0;
  _DAT_00486148 = 0;
}


/* FUN_00418bc0 @ 0x00418bc0 */

void FUN_00418bc0(void)
{
  _atexit(FUN_00418bd0);
}


/* FUN_00418bd0 @ 0x00418bd0 */

void FUN_00418bd0(void) { return; }


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
  short ve;
  short v4;
  
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
    ve = 0;
    s6 = -s2;
    if (-1 < s2) {
      v4 = s2 + 1;
      do {
        s6 = s3 * 2 + s6;
        if (-1 < param_2) {
          n7 = (int)ve;
          ve = ve + 1;
          param_1[n7] = param_4;
        }
        for (; -1 < s6; s6 = s6 + s2 * -2) {
          param_4 = param_4 + s5;
        }
        param_2 = param_2 + s4;
        v4 = v4 + -1;
      } while (v4 != 0);
    }
  }
  return;
}


/* FUN_00419020 @ 0x00419020 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419020(void *this,short *param_1,int *param_2,short *param_3,int *param_4,short *param_5)
{
  short s1, s2, s3, s4;
  short s5, s6;
  int n1, n2;

  /* Compute clipped sprite coordinates for rendering */
  s1 = param_1[0]; /* src x */
  s2 = param_1[1]; /* src y */
  s3 = param_1[2]; /* src w */
  s4 = param_1[3]; /* src h */

  s5 = param_3[0]; /* clip x */
  s6 = param_3[1]; /* clip y */

  /* Compute the clipped region */
  *param_2 = (int)s1;
  param_2[1] = (int)s2;
  param_2[2] = (int)s3;
  param_2[3] = (int)s4;

  /* Apply clipping bounds */
  *param_4 = (int)s5;
  param_4[1] = (int)s6;

  /* Set output dimensions */
  *param_5 = s3 - s1;
  param_5[1] = s4 - s2;

  /* Intersect with clip rectangle from _DAT_ globals */
  if (*param_5 < 0) *param_5 = 0;
  if (param_5[1] < 0) param_5[1] = 0;
}


/* FUN_00419180 @ 0x00419180 */

void __thiscall
FUN_00419180(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)
{
  short s1, s2, s3, s4;
  int n1, n2, n3, n4;

  /* Compute sprite rendering coordinates with param_1 as source index */
  s1 = param_3[0];
  s2 = param_3[1];
  s3 = param_3[2];
  s4 = param_3[3];

  /* Setup source rectangle from param_1 */
  n1 = *(int *)(param_1);
  n2 = *(int *)(param_1 + 4);
  n3 = *(int *)(param_1 + 8);
  n4 = *(int *)(param_1 + 12);

  *param_2 = n1;
  param_2[1] = n2;
  param_2[2] = n3;
  param_2[3] = n4;

  /* Clip destination */
  *param_4 = (int)s1;
  param_4[1] = (int)s2;

  /* Output dimensions */
  *param_5 = s3 - s1;
  param_5[1] = s4 - s2;
  if (*param_5 < 0) *param_5 = 0;
  if (param_5[1] < 0) param_5[1] = 0;
}


/* FUN_00419400 @ 0x00419400 */

void __thiscall
FUN_00419400(void *this,int param_1,int *param_2,short *param_3,int *param_4,short *param_5)
{
  short s1, s2, s3, s4;
  int n1, n2, n3, n4;

  /* Compute sprite rendering coordinates - mirrored variant */
  s1 = param_3[0];
  s2 = param_3[1];
  s3 = param_3[2];
  s4 = param_3[3];

  /* Setup source rectangle from param_1 (mirrored) */
  n1 = *(int *)(param_1);
  n2 = *(int *)(param_1 + 4);
  n3 = *(int *)(param_1 + 8);
  n4 = *(int *)(param_1 + 12);

  *param_2 = n3; /* swap x coords for mirror */
  param_2[1] = n2;
  param_2[2] = n1;
  param_2[3] = n4;

  /* Clip destination */
  *param_4 = (int)s1;
  param_4[1] = (int)s2;

  /* Output dimensions */
  *param_5 = s3 - s1;
  param_5[1] = s4 - s2;
  if (*param_5 < 0) *param_5 = 0;
  if (param_5[1] < 0) param_5[1] = 0;
}


/* FUN_004194d0 @ 0x004194d0 */

void __thiscall
FUN_004194d0(void *this,int *param_1,short *param_2,int param_3,int param_4,
            int param_5)
{
  short s1, s2, s3, s4;
  int n1, n2;

  /* Setup rendering parameters from source rect and position */
  s1 = param_2[0];
  s2 = param_2[1];
  s3 = param_2[2];
  s4 = param_2[3];

  /* Set source coordinates */
  param_1[0] = (int)s1;
  param_1[1] = (int)s2;
  param_1[2] = (int)(s3 - s1);
  param_1[3] = (int)(s4 - s2);

  /* Apply transform/offset */
  n1 = param_3;
  n2 = param_4;

  if (param_5 != 0) {
    /* Scale or transform mode */
    param_1[0] = param_1[0] + n1;
    param_1[1] = param_1[1] + n2;
  }
}


/* FUN_00419559 @ 0x00419559 */

void FUN_00419559(void) { return; }


/* FUN_00419570 @ 0x00419570 */

void __thiscall
FUN_00419570(void *this,short *param_1,int *param_2,short *param_3,int param_4,
            int param_5,int param_6)
{
  int *_fs;
  short v18;
  short v16;
  short v14;
  short v12;
  int v10;
  char *_handler;
  int v8;
  
  /* SEH prolog */
  v10 = *_fs;
  _handler = &L_004195fd;
  *_fs = &v10;
  v8 = 0;
  v18 = *param_3;
  v16 = param_3[1];
  v12 = (param_1[3] - param_1[1]) + v16;
  v14 = (param_1[2] - *param_1) + v18;
  FUN_00419610(this,(int *)param_1,param_2,(int *)&v18,param_4,param_5,param_6);
  v8 = 0xffffffff;
  FUN_00419607();
  /* SEH epilog */
  *_fs = v10;
}


/* FUN_00419607 @ 0x00419607 */

void FUN_00419607(void) { return; }


/* FUN_00419610 @ 0x00419610 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419610(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)
{
  int n1, n2, n3, n4, n5, n6, n7, n8;
  int src_x, src_y, src_w, src_h;
  int dst_x, dst_y;
  int clip_x1, clip_y1, clip_x2, clip_y2;
  short s1, s2;
  int line_count;
  char *src_ptr;
  char *dst_ptr;

  /* Sprite rendering - main blit loop with clipping */
  src_x = param_1[0];
  src_y = param_1[1];
  src_w = param_1[2];
  src_h = param_1[3];

  dst_x = param_3[0];
  dst_y = param_3[1];

  clip_x1 = *(int *)((char *)param_3 + 4);
  clip_y1 = *(int *)((char *)param_3 + 8);

  /* Get rendering surface info from param_2 */
  n1 = param_2[0];  /* source bitmap data pointer */
  n2 = param_2[1];  /* source stride */
  n3 = param_2[2];  /* dest bitmap data pointer */
  n4 = param_2[3];  /* dest stride */

  /* Compute actual clipping bounds */
  clip_x2 = _DAT_004842a4;
  clip_y2 = _DAT_004842a6;

  /* Clip source rect to destination */
  if (dst_x < 0) {
    src_x = src_x - dst_x;
    src_w = src_w + dst_x;
    dst_x = 0;
  }
  if (dst_y < 0) {
    src_y = src_y - dst_y;
    src_h = src_h + dst_y;
    dst_y = 0;
  }

  if (src_w <= 0 || src_h <= 0) {
    return;
  }

  /* Render each scanline */
  line_count = src_h - src_y;
  if (line_count <= 0) {
    return;
  }

  n5 = src_y;
  n6 = dst_y;

  while (n5 < src_h) {
    /* Compute source and dest pointers for this scanline */
    if (n1 != 0 && n3 != 0) {
      src_ptr = (char *)(n1 + n5 * n2 + src_x);
      dst_ptr = (char *)(n3 + n6 * n4 + dst_x);

      /* Store rendering state for blitter */
      DAT_00484f54 = src_ptr;
      DAT_00485c40 = dst_ptr;
      DAT_00486154 = (short)(src_w - src_x);
      DAT_00485738 = param_2[1]; /* stride/lookup table */

      /* Select blit function based on mode */
      if (param_4 != 0) {
        /* Use selected blitting mode */
        switch (param_5) {
        case 0:
          FUN_00417ec0();
          break;
        case 1:
          FUN_00418520();
          break;
        case 2:
          FUN_004187a0();
          break;
        case 3:
          FUN_00418820();
          break;
        case 4:
          FUN_004189d0();
          break;
        default:
          FUN_00417ec0();
          break;
        }
      } else {
        FUN_00417ec0();
      }
    }

    n5 = n5 + 1;
    n6 = n6 + 1;
  }
}


/* FUN_004199c8 @ 0x004199c8 */

void FUN_004199c8(void) { return; }


/* Function: default @ 0x00419a5b */

void sw_0041_default(void)
{
  int _ebp;
  int *_fs;
  
  *(char *)(_ebp + -4) = 1;
  FUN_00419a8b();
  *(char *)(_ebp + -4) = 0;
  FUN_00419a93();
  *(int *)(_ebp + -4) = 0xffffffff;
  FUN_00419aa5();
  *_fs = *(int *)(_ebp + -0xc);
}


/* FUN_00419a8b @ 0x00419a8b */

void FUN_00419a8b(void) { return; }


/* FUN_00419a93 @ 0x00419a93 */

void FUN_00419a93(void) { return; }


/* FUN_00419aa5 @ 0x00419aa5 */

void FUN_00419aa5(void) { return; }


/* FUN_00419ae0 @ 0x00419ae0 */

/* NOTE: overlapping globals */

void __thiscall
FUN_00419ae0(void *this,int *param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6)
{
  int n1, n2, n3, n4, n5, n6;
  int src_x, src_y, src_w, src_h;
  int dst_x, dst_y;
  int clip_x1, clip_y1;
  int line_count;
  char *src_ptr;
  char *dst_ptr;

  /* Sprite rendering - mirrored blit loop with clipping */
  src_x = param_1[0];
  src_y = param_1[1];
  src_w = param_1[2];
  src_h = param_1[3];

  dst_x = param_3[0];
  dst_y = param_3[1];

  clip_x1 = *(int *)((char *)param_3 + 4);
  clip_y1 = *(int *)((char *)param_3 + 8);

  /* Get rendering surface info */
  n1 = param_2[0];
  n2 = param_2[1];
  n3 = param_2[2];
  n4 = param_2[3];

  /* Clip source rect to destination (mirrored) */
  if (dst_x < 0) {
    src_w = src_w + dst_x;
    dst_x = 0;
  }
  if (dst_y < 0) {
    src_y = src_y - dst_y;
    src_h = src_h + dst_y;
    dst_y = 0;
  }

  if (src_w <= 0 || src_h <= 0) {
    return;
  }

  /* Render each scanline (mirrored) */
  line_count = src_h - src_y;
  if (line_count <= 0) {
    return;
  }

  n5 = src_y;
  n6 = dst_y;

  while (n5 < src_h) {
    if (n1 != 0 && n3 != 0) {
      /* For mirrored blit, read source line backwards */
      src_ptr = (char *)(n1 + n5 * n2 + src_x);
      dst_ptr = (char *)(n3 + n6 * n4 + dst_x);

      DAT_00484f54 = src_ptr;
      DAT_00485c40 = dst_ptr;
      DAT_00486154 = (short)(src_w - src_x);
      DAT_00485738 = param_2[1];

      /* Select mirrored blit function */
      if (param_4 != 0) {
        switch (param_5) {
        case 0:
          FUN_00418290();
          break;
        case 1:
          FUN_00418520();
          break;
        case 2:
          FUN_004187a0();
          break;
        case 3:
          FUN_00418820();
          break;
        case 4:
          FUN_004189d0();
          break;
        default:
          FUN_00418290();
          break;
        }
      } else {
        FUN_00418290();
      }
    }

    n5 = n5 + 1;
    n6 = n6 + 1;
  }
}


/* FUN_00419ea1 @ 0x00419ea1 */

void FUN_00419ea1(void) { return; }


/* Function: default @ 0x00419f34 */

void sw_0041_default(void)
{
  int _ebp;
  int *_fs;
  
  *(char *)(_ebp + -4) = 1;
  FUN_00419f64();
  *(char *)(_ebp + -4) = 0;
  FUN_00419f6c();
  *(int *)(_ebp + -4) = 0xffffffff;
  FUN_00419f7e();
  *_fs = *(int *)(_ebp + -0xc);
}


/* FUN_00419f64 @ 0x00419f64 */

void FUN_00419f64(void) { return; }


/* FUN_00419f6c @ 0x00419f6c */

void FUN_00419f6c(void) { return; }


/* FUN_00419f7e @ 0x00419f7e */

void FUN_00419f7e(void) { return; }


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
  int *self = (int *)this;
  int result;

  /* Set rendering position/origin */
  result = DAT_0047f20c;

  /* Store coordinates */
  *(short *)((char *)self + 0x26) = param_2; /* pos_x high */
  *(short *)((char *)self + 0x2A) = param_1; /* pos_y high */

  return result;
}


/* FUN_0041a020 @ 0x0041a020 */

void __thiscall FUN_0041a020(void *this,short *param_1)
{
  FUN_00419fe0(this,param_1[1],*param_1);
}


/* FUN_0041a040 @ 0x0041a040 */

void __thiscall FUN_0041a040(void *this,short *param_1,int *param_2,short *param_3)
{
  short v18[4];
  int n1;

  /* Compute rendering coordinates from source rect and clip area */
  v18[0] = param_1[0];
  v18[1] = param_1[1];
  v18[2] = param_1[2];
  v18[3] = param_1[3];

  /* Setup rendering parameters */
  FUN_00419020(this, param_1, param_2, param_3, (int *)v18, v18);

  /* Apply the rendering with computed params */
  FUN_00419fe0(this, v18[1], v18[0]);
}


/* FUN_0041a0b0 @ 0x0041a0b0 */

void __thiscall FUN_0041a0b0(void *this,int param_1,int *param_2,short *param_3)
{
  short v18[4];
  int v_param[4];
  int n1;

  /* Compute rendering coordinates with param_1 as source index */
  v18[0] = param_3[0];
  v18[1] = param_3[1];
  v18[2] = param_3[2];
  v18[3] = param_3[3];

  /* Get source rect from param_1 */
  v_param[0] = *(int *)(param_1);
  v_param[1] = *(int *)(param_1 + 4);
  v_param[2] = *(int *)(param_1 + 8);
  v_param[3] = *(int *)(param_1 + 12);

  /* Setup rendering */
  FUN_00419180(this, param_1, param_2, param_3, (int *)v18, v18);

  /* Apply the rendering with computed params */
  FUN_00419fe0(this, v18[1], v18[0]);
}


/* FUN_0041a150 @ 0x0041a150 */

char __thiscall
FUN_0041a150(void *this,short *param_1,char param_2,int *param_3,short *param_4,char param_5)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short s1, s2, s3, s4;
  short v18[4];
  int v_src[4];
  int v_dst[4];
  short v_clip[4];
  int n1, n2, n3, n4;
  char result;
  void *pv1;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041a55c;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  /* Get source rect */
  s1 = param_1[0];
  s2 = param_1[1];
  s3 = param_1[2];
  s4 = param_1[3];

  /* Initialize rendering region */
  v18[0] = s1;
  v18[1] = s2;
  v18[2] = s3;
  v18[3] = s4;

  /* Setup clipping from param_4 */
  if (param_4 != NULL) {
    v_clip[0] = param_4[0];
    v_clip[1] = param_4[1];
    v_clip[2] = param_4[2];
    v_clip[3] = param_4[3];
  } else {
    v_clip[0] = 0;
    v_clip[1] = 0;
    v_clip[2] = 0x7FFF;
    v_clip[3] = 0x7FFF;
  }

  /* Check if the point is within bounds */
  if (param_2 != '\0') {
    /* Hit test mode */
    if (param_3 != NULL) {
      n1 = param_3[0]; /* test x */
      n2 = param_3[1]; /* test y */

      /* Check horizontal bounds */
      if (n1 >= (int)s1 && n1 <= (int)s3) {
        /* Check vertical bounds */
        if (n2 >= (int)s2 && n2 <= (int)s4) {
          result = 1;
        }
      }
    }
  } else {
    /* Rendering mode */
    if (param_3 != NULL) {
      v_src[0] = param_3[0];
      v_src[1] = param_3[1];
      v_src[2] = param_3[2];
      v_src[3] = param_3[3];
    } else {
      v_src[0] = (int)s1;
      v_src[1] = (int)s2;
      v_src[2] = (int)s3;
      v_src[3] = (int)s4;
    }

    /* Clip against bounds */
    if (v_src[0] < (int)v_clip[0]) v_src[0] = (int)v_clip[0];
    if (v_src[1] < (int)v_clip[1]) v_src[1] = (int)v_clip[1];
    if (v_src[2] > (int)v_clip[2]) v_src[2] = (int)v_clip[2];
    if (v_src[3] > (int)v_clip[3]) v_src[3] = (int)v_clip[3];

    /* Check if anything remains to render */
    if (v_src[2] > v_src[0] && v_src[3] > v_src[1]) {
      /* Perform rendering */
      if (param_5 != '\0') {
        /* Render with special mode */
        FUN_00419570(this, param_1, (int *)v_src, v_clip, 0, 0, 0);
      } else {
        FUN_00419570(this, param_1, (int *)v_src, v_clip, 0, 0, 0);
      }
      result = 1;
    }
  }

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
  return result;
}


/* FUN_0041a55c @ 0x0041a55c */

void FUN_0041a55c(void) { return; }


/* FUN_0041a580 @ 0x0041a580 */

char FUN_0041a580(void)
{
  int _ebp;
  int *_fs;
  int n1, n2, n3;
  char result;

  /* Check rendering state / surface availability */
  n1 = *(int *)(_ebp + -0x10);
  n2 = *(int *)(_ebp + -0x14);

  result = 0;

  /* Check if rendering surface is valid */
  if (n1 != 0) {
    n3 = *(int *)(n1 + 4);
    if (n3 != 0) {
      /* Surface has valid data */
      result = 1;
    }
  }

  /* Check secondary surface */
  if (result == 0 && n2 != 0) {
    n3 = *(int *)(n2 + 4);
    if (n3 != 0) {
      result = 1;
    }
  }

  return result;
}


/* FUN_0041a630 @ 0x0041a630 */

char FUN_0041a630(void)
{
  int _ebp;
  int *_fs;
  int n1, n2, n3, n4;
  char result;

  /* Check rendering surface/bitmap validity */
  n1 = *(int *)(_ebp + -0x10);
  n2 = *(int *)(_ebp + -0x14);

  result = 0;

  if (n1 != 0) {
    n3 = *(int *)(n1 + 4);
    if (n3 != 0) {
      n4 = *(int *)(n3);
      if (n4 != 0) {
        /* Bitmap has valid pixel data */
        result = 1;
      }
    }
  }

  if (result == 0 && n2 != 0) {
    n3 = *(int *)(n2 + 4);
    if (n3 != 0) {
      n4 = *(int *)(n3);
      if (n4 != 0) {
        result = 1;
      }
    }
  }

  return result;
}


/* FUN_0041a700 @ 0x0041a700 */

char FUN_0041a700(void)
{
  int _ebp;
  int *_fs;
  int n1, n2, n3, n4, n5;
  char result;
  short s1, s2;

  /* Extended rendering surface check with dimension validation */
  n1 = *(int *)(_ebp + -0x10);
  n2 = *(int *)(_ebp + -0x14);

  result = 0;

  if (n1 != 0) {
    n3 = *(int *)(n1 + 4);
    if (n3 != 0) {
      n4 = *(int *)(n3);
      if (n4 != 0) {
        /* Check dimensions are valid */
        s1 = *(short *)(n1 + 8);
        s2 = *(short *)(n1 + 0xA);
        if (s1 > 0 && s2 > 0) {
          result = 1;
        }
      }
    }
  }

  if (result == 0 && n2 != 0) {
    n3 = *(int *)(n2 + 4);
    if (n3 != 0) {
      n4 = *(int *)(n3);
      if (n4 != 0) {
        s1 = *(short *)(n2 + 8);
        s2 = *(short *)(n2 + 0xA);
        if (s1 > 0 && s2 > 0) {
          result = 1;
        }
      }
    }
  }

  return result;
}


/* FUN_0041a940 @ 0x0041a940 */

int * __thiscall FUN_0041a940(void *this,short param_1,int *param_2)
{
  int *self = (int *)this;
  int *result;
  int n1, n2;

  /* Get sprite/frame data for a given frame index */
  n1 = *(int *)((char *)self + 0xF2); /* tile_data_ptr on UIWidget */
  if (n1 == 0) {
    return 0;
  }

  /* Look up frame data at the given index */
  n2 = (int)param_1;
  if (n2 < 0) {
    return 0;
  }

  /* Store result coordinates */
  if (param_2 != NULL) {
    result = param_2;
    param_2[0] = *(int *)(n1 + n2 * 8);
    param_2[1] = *(int *)(n1 + n2 * 8 + 4);
  } else {
    result = 0;
  }

  return result;
}


/* FUN_0041a9a0 @ 0x0041a9a0 */

uint __thiscall FUN_0041a9a0(void *this,short *param_1,short *param_2,char param_3)
{
  int *self = (int *)this;
  UIWidget *widget = (UIWidget *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  uint result;
  short s1, s2, s3, s4;
  short v18[4];
  int n1, n2;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041ab40;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  /* Get clip rect from param_1 */
  s1 = param_1[0];
  s2 = param_1[1];
  s3 = param_1[2];
  s4 = param_1[3];

  /* Get frame/cell data */
  n1 = (int)widget->tile_data_ptr;
  if (n1 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Check if we have valid rendering surface */
  n2 = (int)widget->level_data_ptr;
  if (n2 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Setup rendering rect */
  v18[0] = s1;
  v18[1] = s2;
  v18[2] = s3;
  v18[3] = s4;

  /* Perform the rendering or hit test */
  if (param_3 != '\0') {
    /* Render mode */
    if (param_2 != NULL) {
      FUN_0041a040(this, v18, (int *)n2, param_2);
      result = 1;
    }
  } else {
    /* Query mode */
    if (param_2 != NULL) {
      param_2[0] = s1;
      param_2[1] = s2;
      param_2[2] = s3;
      param_2[3] = s4;
      result = 1;
    }
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
  return result;
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
  int *self = (int *)this;
  int n1, n2;
  void *pv1;

  /* Set rendering resource/bitmap for the sprite system */
  n1 = *(int *)((char *)self + 4);

  /* If we already have a resource loaded, release it first */
  if (n1 != 0) {
    FUN_0042f1c0((char *)((char *)self + 4));
  }

  /* Load the new resource */
  if (param_1 != 0) {
    n2 = *(int *)(param_1 + 4);
    if (n2 != 0) {
      /* Copy the resource handle */
      FUN_0042f180(self, *(short *)(param_1 + 2));
    }
  }
}


/* FUN_0041abd0 @ 0x0041abd0 */

/* NOTE: overlapping globals */

void __thiscall FUN_0041abd0(void *this,void *param_1,char param_2)
{
  int u1;
  int *pu2;
  int *pu3;
  int *_fs;
  char v18 [8];
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0041ac81;
  *_fs = &_seh_prev;
  if (param_2 != '\0') {
    FUN_0042f120(v18,*(short *)((char *)param_1 + 4)); /* TODO: param_1 struct unknown, offset +0x04 */
    _seh_state = 0;
    FUN_00452160(&DAT_00485328,param_1,(int)v18,&L_00451e80);
    FUN_0041ab60(this,v18);
    _seh_state = 0xffffffff;
    FUN_0041ac8b();
  }
  _DAT_0048532c = *(short *)((char *)param_1 + 4);   /* TODO: param_1 struct unknown, offset +0x04 */
  pu3 = (int *)((char *)param_1 + 6);            /* TODO: param_1 struct unknown, offset +0x06 */
  pu2 = &DAT_0048532e;
  do {
    u1 = *pu3;
    pu3 = pu3 + 1;
    *pu2 = u1;
    pu2 = pu2 + 1;
  } while (pu2 < &DAT_0048572e);
  _DAT_0048572e = ((TextDisplay *)param_1)->field_406;
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041ac8b @ 0x0041ac8b */

void FUN_0041ac8b(void)
{
  int _ebp;
  
  thunk_FUN_0042f1c0((char *)(_ebp + -0x14));
}


/* FUN_0041ace0 @ 0x0041ace0 */

/* NOTE: Restarted to delay deadcode elimination for space: stack */

int FUN_0041ace0(void *param_1,int param_2)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1, n2, n3, n4;
  int result;
  short s1;
  void *pv1;
  int v_local[8];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041ae60;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  if (param_1 == NULL) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  n1 = *(int *)((char *)param_1 + 4);
  if (n1 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Search through the resource data for param_2 */
  n2 = *(int *)(n1);
  if (n2 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Iterate entries */
  n3 = 0;
  n4 = *(int *)(n1 + 0x0E); /* count field */
  while (n3 < n4) {
    if (*(int *)(n2 + n3 * 4) == param_2) {
      result = n3 + 1;
      break;
    }
    n3 = n3 + 1;
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
  return result;
}


/* FUN_0041ae60 @ 0x0041ae60 */

int __thiscall FUN_0041ae60(void *this,short *param_1,char param_2)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  int n1, n2, n3, n4;
  int result;
  short s1, s2, s3, s4;
  int v_local[8];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041af60;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  if (param_1 == NULL) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Get source rect */
  s1 = param_1[0];
  s2 = param_1[1];
  s3 = param_1[2];
  s4 = param_1[3];

  /* Get rendering context */
  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Get pixel data pointer */
  n2 = *(int *)(n1);
  if (n2 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Setup rendering */
  v_local[0] = (int)s1;
  v_local[1] = (int)s2;
  v_local[2] = (int)(s3 - s1);
  v_local[3] = (int)(s4 - s2);

  if (param_2 != '\0') {
    /* Update mode - mark region dirty */
    FUN_0043b810((int *)v_local);
    result = 1;
  } else {
    /* Query mode */
    result = (v_local[2] > 0 && v_local[3] > 0) ? 1 : 0;
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
  return result;
}


/* FUN_0041af60 @ 0x0041af60 */

uint __thiscall FUN_0041af60(void *this,short *param_1)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  uint result;
  int n1, n2, n3;
  short s1, s2, s3, s4;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b056;
  *_fs = &_seh_prev;
  _seh_state = 0;
  result = 0;

  if (param_1 == NULL) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Get rendering rect */
  s1 = param_1[0];
  s2 = param_1[1];
  s3 = param_1[2];
  s4 = param_1[3];

  /* Get rendering context */
  n1 = *(int *)((char *)self + 4);
  if (n1 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  n2 = *(int *)(n1);
  if (n2 == 0) {
    _seh_state = 0xffffffff;
    *_fs = _seh_prev;
    return 0;
  }

  /* Check if region overlaps with the rendering surface */
  if (s3 > s1 && s4 > s2) {
    /* Region has positive area - perform update */
    FUN_0043b810((int *)&s1);
    result = 1;
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
  return result;
}


/* FUN_0041b056 @ 0x0041b056 */

void FUN_0041b056(void) { return; }


/* FUN_0041b068 @ 0x0041b068 */

void FUN_0041b068(void)
{
  int _ebp;
  
  FUN_0043b810((int *)(_ebp + -0x34));
}


/* FUN_0041b0a0 @ 0x0041b0a0 */

void __thiscall FUN_0041b0a0(void *this,short *param_1,char param_2)
{
  FUN_0041ae60(this,param_1,param_2);
  FUN_0041af60(this,param_1);
}


/* FUN_0041b0c0 @ 0x0041b0c0 */

void __thiscall FUN_0041b0c0(void *this,short *param_1,char param_2)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short v18[4];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b150;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Setup clipping rect */
  v18[0] = param_1[0];
  v18[1] = param_1[1];
  v18[2] = param_1[2];
  v18[3] = param_1[3];

  /* Call ae60 and af60 with the rect */
  FUN_0041ae60(this, v18, param_2);
  _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF), 1);
  FUN_0041af60(this, v18);

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041b150 @ 0x0041b150 */

void __thiscall FUN_0041b150(void *this,char param_1)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short v18[4];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b1d0;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Get widget bounding rect */
  v18[0] = *(short *)((char *)self + 0x1E); /* rect_top */
  v18[1] = *(short *)((char *)self + 0x20); /* rect_left */
  v18[2] = *(short *)((char *)self + 0x22); /* rect_bottom */
  v18[3] = *(short *)((char *)self + 0x24); /* rect_right */

  /* Call rendering update with the full rect */
  FUN_0041b0c0(this, v18, param_1);

  _seh_state = 0xffffffff;
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041b1d0 @ 0x0041b1d0 */

void __thiscall FUN_0041b1d0(void *this,char param_1,char param_2)
{
  int *self = (int *)this;
  UIWidget *widget = (UIWidget *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short v18[4];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b240;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Get widget rect */
  v18[0] = *(short *)((char *)self + 0x1E);
  v18[1] = *(short *)((char *)self + 0x20);
  v18[2] = *(short *)((char *)self + 0x22);
  v18[3] = *(short *)((char *)self + 0x24);

  FUN_0041ae60(this, v18, param_1);
  if (param_2 != '\0') {
    FUN_0041af60(this, v18);
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
}


/* FUN_0041b240 @ 0x0041b240 */

void __thiscall FUN_0041b240(void *this,char param_1,char param_2)
{
  int *self = (int *)this;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  short v18[4];

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b2f0;
  *_fs = &_seh_prev;
  _seh_state = 0;

  /* Get widget rect */
  v18[0] = *(short *)((char *)self + 0x1E);
  v18[1] = *(short *)((char *)self + 0x20);
  v18[2] = *(short *)((char *)self + 0x22);
  v18[3] = *(short *)((char *)self + 0x24);

  /* Perform rendering operations */
  FUN_0041ae60(this, v18, param_1);
  if (param_2 != '\0') {
    FUN_0041af60(this, v18);
  }

  _seh_state = 0xffffffff;
  *_fs = _seh_prev;
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
  int _ebp;
  
  FUN_0043b810((int *)(_ebp + -0x24));
}


/* FUN_0041b5f0 @ 0x0041b5f0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x36 (child_list_2) */
void __cdecl FUN_0041b5f0(UIWidget *param_1,byte param_2)
{
  void *pv1;
  int n2;
  uint u3;

  if (param_1 != NULL) {
    FUN_0041dad0(param_1,param_2,'\0');
    if (((param_1->child_list_2 != 0) &&
        (n2 = ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */, n2 != 0)) &&
       (u3 = 1, n2 != 0)) {
      n2 = 4;
      do {
        pv1 = *(void **)(*(int *)((CVector *)param_1->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + -4 + n2);
        if (pv1 != NULL) {
          FUN_0041b5f0(pv1,param_2);
        }
        n2 = n2 + 4;
        u3 = u3 + 1;
      } while (u3 <= ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */);
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

  if (param_1 != NULL) {
    FUN_0041d780(param_1,param_2);
    if (((param_1->child_list_2 != 0) &&
        (n3 = ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */, n3 != 0)) &&
       (u2 = 1, n3 != 0)) {
      n3 = 4;
      do {
        pv1 = *(void **)(*(int *)((CVector *)param_1->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + -4 + n3);
        if (pv1 != NULL) {
          FUN_0041b660(pv1,param_2);
        }
        n3 = n3 + 4;
        u2 = u2 + 1;
      } while (u2 <= ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */);
    }
  }
  return;
}


/* FUN_0041b6c0 @ 0x0041b6c0 */

int * __fastcall FUN_0041b6c0(int *param_1)
{
  uint u1;
  uint u2;
  int *_fs;
  int n3;
  int n4;
  int u5;
  int n6;
  int n7;
  char c8;
  int u9;
  char c10;
  int _arg2;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041b850;
  *_fs = &_seh_prev;
  /* param_1 is UIElement being initialized */
  UIElement *elem = (UIElement *)param_1;
  elem->rect_left = 0;     /* param_1 + 8 = offset 0x20 */
  _seh_state = 0;
  elem->rect_top = 0;
  elem->rect_right = 0;    /* param_1 + 9 = offset 0x24 */
  elem->pos_y = 0;
  elem->rect_bottom = 0;
  elem->pos_x = 0;
  elem->pos_w = 0;
  elem->pos_h = 0;
  u9 = 0;
  FUN_00401050(&_tmp_30,0);
  n7 = 0;
  FUN_00401050(&_tmp_29,0);
  u5 = 0;
  FUN_00401050(&_tmp_28,0);
  FUN_00401050(&_tmp_27,0);
  FUN_0040bfd0((int *)&elem->pos_x,u5,n7,u9,_arg2);
  _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF),1);
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
  FUN_00401050(&_tmp_28,300);
  n4 = 400;
  FUN_00401050(&_tmp_27,400);
  n3 = 100;
  FUN_00401050(&_tmp_26,100);
  FUN_00401050(&_tmp_25,100);
  FUN_0041cca0(param_1,n3,n4,n6,n7,c8,c10);
  elem->field_10 = 1;      /* param_1 + 4 = offset 0x10 */
  *_fs = _seh_prev;
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

void FUN_0041b995(void) { return; }


/* FUN_0041b9aa @ 0x0041b9aa */

void FUN_0041b9aa(void) { return; }


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
    if (((CVector *)u1)->count != 0) {
      pn3 = (int *)*(int *)((CVector *)u1)->data;
      do {
        if (*pn3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        pn3 = pn3 + 1;
        u4 = u4 + 1;
        u2 = param_1;
      } while (u4 <= ((CVector *)u1)->count);
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
    if (((CVector *)u1)->count != 0) {
      pn3 = (int *)*(int *)((CVector *)u1)->data;
      do {
        if (*pn3 == param_1) {
          return CONCAT31((unsigned int)((uint)param_1 >> 8),1);
        }
        pn3 = pn3 + 1;
        u4 = u4 + 1;
        u2 = param_1;
      } while (u4 <= ((CVector *)u1)->count);
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
     (u2 = 1, ((CVector *)this->child_list_1)->count != 0)) {
    n3 = 4;
    do {
      pv1 = *(void **)(*(int *)((CVector *)this->child_list_1)->data[0] + -4 + n3);
      if (pv1 != NULL) {
        FUN_0041ba40(pv1,param_1,param_2,param_3);
      }
      n3 = n3 + 4;
      u2 = u2 + 1;
    } while (u2 <= ((CVector *)this->child_list_1)->count);
  }
  if ((((char)param_2 != '\0') && (this->child_list_2 != 0)) &&
     (u2 = 1, ((CVector *)this->child_list_2)->count != 0)) {
    n3 = 4;
    do {
      pv1 = *(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n3);
      if (pv1 != NULL) {
        FUN_0041ba40(pv1,param_1,param_2,param_3);
      }
      n3 = n3 + 4;
      u2 = u2 + 1;
    } while (u2 <= ((CVector *)this->child_list_2)->count);
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
     (u2 = 1, ((CVector *)this->child_list_2)->count != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041baf0(*(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -8 + n1),param_1);
    } while (u2 <= ((CVector *)this->child_list_2)->count);
  }
  if ((this->child_list_1 != 0) &&
     (u2 = 1, ((CVector *)this->child_list_1)->count != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041baf0(*(void **)(*(int *)((CVector *)this->child_list_1)->data[0] + -8 + n1),param_1);
    } while (u2 <= ((CVector *)this->child_list_1)->count);
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
  pu1 = &((CVector *)n2)->count;
  u3 = *pu1;
  if (u3 != 0) {
    pn4 = (int *)*(int *)((CVector *)n2)->data;
    do {
      if (*pn4 == param_1) {
        u5 = u5 + 1;
        goto L_0041bd28;
      }
      pn4 = pn4 + 1;
      u5 = u5 + 1;
    } while (u5 < u3);
  }
  u5 = 0;
L_0041bd28:
  if (u5 != 0) {
    if (u5 <= u3) {
      if (u5 < u3) {
        _Src = (void *)(*(int *)((CVector *)n2)->data + u5 * 4);
        memmove((void *)((char *)_Src + -4),_Src,(u3 - u5) * 4);
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
  int *_fs;
  short v20;
  short v1e;
  short v1c;
  short v1a;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041c01d;
  *_fs = &_seh_prev;
  v18 = this->rect_top;
  v14 = this->rect_bottom;
  if ((this->child_list_2 != 0) && (((CVector *)this->child_list_2)->count != 0)) {
    v1e = 0;
    u1 = 1;
    v20 = 0;
    n2 = 4;
    v1a = 0;
    _seh_state = (_seh_state & ~0xFF) | 1;
    _seh_state = (_seh_state & 0xFF) | (0 << 8);
    v1c = 0;
L_0041bf04:
    do {
      if (((CVector *)this->child_list_2)->count < u1) goto L_0041bfcc;
      FUN_0041bea0(*(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n2),&v20);
      if ((v1e < v1a) && (v20 < v1c)) {
        if ((((unsigned short)((v18) >> 16)) < ((unsigned short)((v14) >> 16))) && ((short)v18 < (short)v14)) {
          if (v1e < ((unsigned short)((v18) >> 16))) {
            v18 = CONCAT22(v1e,(short)v18);
          }
          if (((unsigned short)((v14) >> 16)) < v1a) {
            v14 = CONCAT22(v1a,(short)v14);
          }
          if (v20 < (short)v18) {
            v18 = CONCAT22(((unsigned short)((v18) >> 16)),v20);
          }
          if ((short)v14 < v1c) {
            n2 = n2 + 4;
            v14 = CONCAT22(((unsigned short)((v14) >> 16)),v1c);
            u1 = u1 + 1;
            goto L_0041bf04;
          }
        }
        else {
          v18 = CONCAT22(v1e,v20);
          v14 = CONCAT22(v1a,v1c);
        }
      }
      n2 = n2 + 4;
      u1 = u1 + 1;
    } while( true );
  }
L_0041bfd5:
  _seh_state = 0xffffffff;
  param_1[1] = ((unsigned short)((v18) >> 16));
  param_1[3] = ((unsigned short)((v14) >> 16));
  *param_1 = (short)v18;
  param_1[2] = (short)v14;
  FUN_0041c027();
  /* SEH epilog */
  *_fs = _seh_prev;
  return;
L_0041bfcc:
  _seh_state &= ~0xFF;
  FUN_0041c015();
  goto L_0041bfd5;
}


/* FUN_0041c015 @ 0x0041c015 */

void FUN_0041c015(void) { return; }


/* FUN_0041c027 @ 0x0041c027 */

void FUN_0041c027(void) { return; }


/* FUN_0041c030 @ 0x0041c030 */

void __thiscall FUN_0041c030(void *this,void *param_1)
{
  int *_fs;
  int u1;
  int u2;
  int u3;
  short *ps4;
  short v18;
  short sStack_16;
  short v14;
  short sStack_12;
  short v10;
  short uStack_e;
  char *_handler;
  int v8;
  
  _handler = &L_0041c0d4;
  v10 = (short)*_fs;
  uStack_e = (short)((uint)*_fs >> 0x10);
  *_fs = &v10;
  v8 = 0;
  sStack_16 = 0;
  v18 = 0;
  sStack_12 = 0;
  v14 = 0;
  ps4 = &v18;
  FUN_0041bea0(this,ps4);
  u3 = CONCAT22(sStack_12,v14);
  FUN_00401ba0(&_tmp_36,v14);
  u2 = CONCAT22(v10,sStack_12);
  FUN_00401ba0(&_tmp_35,sStack_12);
  u1 = CONCAT22(sStack_16,v18);
  FUN_00401ba0(&_tmp_34,v18);
  FUN_00401ba0(&_tmp_33,sStack_16);
  FUN_0040bfd0(param_1,u1,u2,u3,ps4);
  v8 = 0xffffffff;
  FUN_0041c0de();
  *_fs = CONCAT22(uStack_e,v10);
}


/* FUN_0041c0de @ 0x0041c0de */

void FUN_0041c0de(void) { return; }


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
  int _ebp;
  
  FUN_004097c0((int *)(_ebp + -0x24));
}


/* FUN_0041c1e5 @ 0x0041c1e5 */

char FUN_0041c1e5(void)
{
  int _ebp;
  int *_fs;
  
  *_fs = *(int *)(_ebp + -0xc);
  return 1;
}


/* FUN_0041c200 @ 0x0041c200 */

void __thiscall FUN_0041c200(GameWidget *this,int param_1,int param_2,int param_3)
{
  void *self;
  int n1;
  uint u2;
  
  if ((this->child_list_2 != 0) &&
     (u2 = 1, ((CVector *)this->child_list_2)->count != 0)) {
    n1 = 4;
    do {
      self = *(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n1);
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
    } while (u2 <= ((CVector *)this->child_list_2)->count);
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
      (n2 = ((CVector *)this->child_list_2)->count, n2 != 0)) && (u1 = 1, n2 != 0))
  {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u1 = u1 + 1;
      FUN_0041c2a0(*(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -8 + n2),param_1);
    } while (u1 <= ((CVector *)this->child_list_2)->count);
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
  if (this->parent_widget != NULL) {
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

void FUN_0041c61e(void) { return; }


/* FUN_0041c626 @ 0x0041c626 */

void FUN_0041c626(void) { return; }


/* FUN_0041c62e @ 0x0041c62e */

void FUN_0041c62e(void) { return; }


/* FUN_0041c640 @ 0x0041c640 */

void FUN_0041c640(void) { return; }


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
  SHORT sz1;
  int *pn2;
  uint u3;
  int n4;
  uint u5;

  if ((((*(byte *)&this->flags & 1) != 0) && (n4 = (int)this->parent_widget, n4 != 0)) &&
     (((UIElement *)n4)->field_3e != 0)) {
    u3 = 0;
    u5 = ((CVector *)(intptr_t)((UIElement *)n4)->field_3e)->count;
    if (u5 != 0) {
      pn2 = (int *)*(int *)((CVector *)(intptr_t)((UIElement *)n4)->field_3e)->data;
      do {
        if (*pn2 == (int)this) {
          n4 = u3 + 1;
          goto L_0041c759;
        }
        pn2 = pn2 + 1;
        u3 = u3 + 1;
      } while (u3 < u5);
    }
    n4 = 0;
L_0041c759:
    if (n4 != 0) {
      sz1 = GetAsyncKeyState(0x10);
      if (sz1 < 0) {
        u5 = n4 - 1;
      }
      else {
        u5 = n4 + 1;
      }
      n4 = ((UIElement *)this->parent_widget)->field_3e;
      u3 = ((CVector *)(intptr_t)n4)->count;
      if (u3 < u5) {
        u5 = 1;
      }
      else if (u5 == 0) {
        u5 = u3;
      }
      FUN_00430ac0((void *)this->field_06,*(int **)((char *)((CVector *)(intptr_t)n4)->data + -4 + u5 * 4));
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
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486168,u1,_arg3);
}


/* FUN_0041caa0 @ 0x0041caa0 */

void FUN_0041caa0(void) { return; }


/* FUN_0041cad0 @ 0x0041cad0 */

/* Function cleaned: param_1 accesses UIWidget offset 0x1a (child_list_1) */
void __fastcall FUN_0041cad0(UIWidget *param_1)
{
  int n1;
  uint u2;

  FUN_0041cb70(param_1,'\x01');
  if (((char *)param_1 - >child_list_1 != 0) &&
     (u2 = 1, ((CVector *)param_1->child_list_1)->count /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041cb20(*(void **)(*(int *)((CVector *)param_1->child_list_1)->data[0] /* CVector: data ptr at +0x04 */ + -8 + n1));
    } while (u2 <= ((CVector *)param_1->child_list_1)->count /* CVector: count at +0x0E */);
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
  if (((char *)param_1 - >child_list_2 != 0) &&
     (u2 = 1, ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */ != 0)) {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_0041cb20(*(void **)(*(int *)((CVector *)param_1->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + -8 + n1));
    } while (u2 <= ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */);
  }
  return;
}


/* FUN_0041cb70 @ 0x0041cb70 */

void __thiscall FUN_0041cb70(DialogWidget *this,char param_1)
{
  int *_fs;
  short v18 [4];
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041cbec;
  *_fs = &_seh_prev;
  this->flags = this->flags | 4;
  if ((param_1 != '\0') && (this->field_06 != 0)) {
    v18[1] = 0;
    _seh_state = 0;
    v18[0] = 0;
    v18[3] = 0;
    v18[2] = 0;
    FUN_0041dec0(this,v18);
    FUN_0042ffd0(this->field_06,v18);
    _seh_state = 0xffffffff;
    FUN_0041cbf6();
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041cbf6 @ 0x0041cbf6 */

void FUN_0041cbf6(void) { return; }


/* FUN_0041cc10 @ 0x0041cc10 */

/* NOTE: overlapping globals */

void FUN_0041cc10(void)
{
  _DAT_0048617a = 0;
  _DAT_00486178 = 0;
}


/* FUN_0041cc20 @ 0x0041cc20 */

void FUN_0041cc20(void)
{
  _atexit(FUN_0041cc30);
}


/* FUN_0041cc30 @ 0x0041cc30 */

void FUN_0041cc30(void) { return; }


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
}


/* FUN_0041cd30 @ 0x0041cd30 */

/* NOTE: overlapping globals */

void FUN_0041cd30(void)
{
  _DAT_00486176 = 0;
  _DAT_00486174 = 0;
}


/* FUN_0041cd40 @ 0x0041cd40 */

void FUN_0041cd40(void)
{
  _atexit(FUN_0041cd50);
}


/* FUN_0041cd50 @ 0x0041cd50 */

void FUN_0041cd50(void) { return; }


/* FUN_0041cd60 @ 0x0041cd60 */

void __thiscall FUN_0041cd60(GameWidget *this,int *param_1)
{
  param_1[1] = this->pos_y;
  param_1[3] = this->pos_h;
  *param_1 = this->pos_x;
  param_1[2] = this->pos_w;
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
}


/* FUN_0041cdc0 @ 0x0041cdc0 */

void __thiscall FUN_0041cdc0(GameWidget *this,int *param_1)
{
  param_1[1] = this->pos_h - this->pos_y;
  *param_1 = this->pos_w - this->pos_x;
}


/* FUN_0041cde0 @ 0x0041cde0 */

void __thiscall FUN_0041cde0(GameWidget *this,int *param_1)
{
  param_1[1] = (this->pos_y + this->pos_h) / 2;
  *param_1 = (this->pos_x + this->pos_w) / 2;
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
    param_1[1] = ((char *)this - >rect_right + (intptr_t)this->rect_left) / 2 << 8;
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
    *param_1 = ((char *)this - >rect_bottom + (intptr_t)this->rect_top) / 2 << 8;
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
  int *_fs;
  int v20;
  int v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041cfc7;
  *_fs = &_seh_prev;
  v18 = *param_1;
  v14 = param_1[1];
  v1c = 0;
  v20 = 0;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_0041cdc0(this,&v20);
  switch(param_2) {
  case 0:
  case 3:
  case 6:
    v14 = v14 + v1c / 2;
    break;
  case 1:
  case 4:
  case 7:
    break;
  case 2:
  case 5:
  case 8:
    v14 = v14 - v1c / 2;
    break;
  default:
    goto sw_0041_default;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    v18 = v18 + v20 / 2;
    break;
  case 6:
  case 7:
  case 8:
    v18 = v18 - v20 / 2;
  }
sw_0041_default:
  FUN_0041d2d0(this,&v18,'\0');
  _seh_state &= ~0xFF;
  FUN_0041cfbf();
  _seh_state = 0xffffffff;
  FUN_0041cfd1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041cfbf @ 0x0041cfbf */

void FUN_0041cfbf(void) { return; }


/* FUN_0041cfd1 @ 0x0041cfd1 */

void FUN_0041cfd1(void) { return; }


/* FUN_0041d020 @ 0x0041d020 */

void __thiscall FUN_0041d020(void *this,int param_1,int param_2,int param_3)
{
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041d076;
  *_fs = &_seh_prev;
  _seh_state = 0;
  v14 = param_1;
  v18 = param_2;
  FUN_0041cef0(this,&v18,param_3);
  _seh_state = 0xffffffff;
  FUN_0041d080();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d080 @ 0x0041d080 */

void FUN_0041d080(void) { return; }


/* FUN_0041d0a0 @ 0x0041d0a0 */

void __thiscall FUN_0041d0a0(void *this,int *param_1,char param_2)
{
  int n1;
  int *_fs;
  int v2c;
  int v28;
  int v24;
  int v20;
  void *v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041d1b1;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  v28 = 0;
  v2c = 0;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  v1c = this;
  FUN_0041cdc0(this,&v2c);
  if (param_2 == '\0') {
    FUN_00403030(&v18,&v24,param_1);
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0041d1a1();
  }
  else {
    FUN_0041cdc0(v1c,&v18);
    v14 = v14 + param_1[1];
    v18 = v18 + *param_1;
  }
  if ((v28 != v14) || (v2c != v18)) {
    FUN_0041cde0(v1c,&v2c);
    v20 = v28 - v14 / 2;
    n1 = v2c - v18 / 2;
    FUN_0041cca0(v1c,v20,n1,v20 + v14,v18 + n1,'\0','\0');
  }
  _seh_state &= ~0xFF;
  FUN_0041d1a9();
  _seh_state = 0xffffffff;
  FUN_0041d1bb();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d1a1 @ 0x0041d1a1 */

void FUN_0041d1a1(void) { return; }


/* FUN_0041d1a9 @ 0x0041d1a9 */

void FUN_0041d1a9(void) { return; }


/* FUN_0041d1bb @ 0x0041d1bb */

void FUN_0041d1bb(void) { return; }


/* FUN_0041d1d0 @ 0x0041d1d0 */

void __thiscall FUN_0041d1d0(void *this,int param_1,int param_2,char param_3)
{
  int n1;
  int n2;
  int *_fs;
  int v20;
  int v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  uint _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041d2ba;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  v1c = 0;
  v20 = 0;
  _seh_state = 1;
  FUN_0041cdc0(this,&v20);
  if (param_3 != '\0') {
    FUN_0041cdc0(this,&v18);
    param_1 = param_1 + v14;
    param_2 = param_2 + v18;
  }
  if ((v1c != param_1) || (v20 != param_2)) {
    FUN_0041cde0(this,&v18);
    n1 = v14 - param_1 / 2;
    n2 = v18 - param_2 / 2;
    FUN_0041cca0(this,n1,n2,n1 + param_1,param_2 + n2,'\0','\0');
  }
  _seh_state = _seh_state & 0xffffff00;
  FUN_0041d2b2();
  _seh_state = 0xffffffff;
  FUN_0041d2c4();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d2b2 @ 0x0041d2b2 */

void FUN_0041d2b2(void) { return; }


/* FUN_0041d2c4 @ 0x0041d2c4 */

void FUN_0041d2c4(void) { return; }


/* FUN_0041d2d0 @ 0x0041d2d0 */

void __thiscall FUN_0041d2d0(void *this,int *param_1,char param_2)
{
  int *_fs;
  int v24;
  int v20;
  void *v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041d38d;
  *_fs = &_seh_prev;
  v18 = *param_1;
  v14 = param_1[1];
  _seh_state = 0;
  v1c = this;
  if (param_2 == '\0') {
    v20 = 0;
    _seh_state = (_seh_state & ~0xFF) | 1;
    _seh_state = (_seh_state & 0xFF) | (0 << 8);
    v24 = 0;
    FUN_0041cde0(this,&v24);
    v14 = v14 - v20;
    v18 = v18 - v24;
    _seh_state &= ~0xFF;
    FUN_0041d385();
  }
  FUN_0041cca0(v1c,v14,v18,v14,v18,'\x01','\x01');
  if ((((UIWidget *)v1c)->child_list_2 != 0) && (((CVector *)((UIWidget *)v1c)->child_list_2)->count != 0)
     ) {
    FUN_0041c200(v1c,v14,v18,1);
  }
  _seh_state = 0xffffffff;
  FUN_0041d397();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d385 @ 0x0041d385 */

void FUN_0041d385(void) { return; }


/* FUN_0041d397 @ 0x0041d397 */

void FUN_0041d397(void) { return; }


/* FUN_0041d3a0 @ 0x0041d3a0 */

void __thiscall FUN_0041d3a0(void *this,int param_1,int param_2,char param_3)
{
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041d3f6;
  *_fs = &_seh_prev;
  v14 = param_1;
  v18 = param_2;
  _seh_state = 0;
  FUN_0041d2d0(this,&v18,param_3);
  _seh_state = 0xffffffff;
  FUN_0041d400();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d400 @ 0x0041d400 */

void FUN_0041d400(void) { return; }


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
}


/* FUN_0041d4f0 @ 0x0041d4f0 */

/* Function cleaned: param_1 is UIElement; updates pos from rect fields */
void __fastcall FUN_0041d4f0(UIElement *this)
{
  short s1;
  short s2;
  short *ps3;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0041d57b;
  *_fs = &_seh_prev;
  ps3 = (short *)FUN_0041d410((int)this);
  s1 = ps3[1];
  s2 = *ps3;
  this->pos_y = ((char *)this - >rect_left - (int)s1) * 0x100;
  this->pos_x = ((char *)this - >rect_top - (int)s2) * 0x100;
  _seh_state = 0xffffffff;
  this->pos_h = ((char *)this - >rect_right - (int)s1) * 0x100;
  this->pos_w = ((char *)this - >rect_bottom - (int)s2) * 0x100;
  FUN_0041d585();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041d585 @ 0x0041d585 */

void FUN_0041d585(void) { return; }


/* FUN_0041d590 @ 0x0041d590 */

short * __thiscall FUN_0041d590(void *this,short *param_1)
{
    /* STUB: 51 lines not yet reconstructed */
    return 0;
}


/* FUN_0041d65f @ 0x0041d65f */

void FUN_0041d65f(void) { return; }


/* FUN_0041d667 @ 0x0041d667 */

void FUN_0041d667(void) { return; }


/* FUN_0041d67e @ 0x0041d67e */

void FUN_0041d67e(void) { return; }


/* FUN_0041d690 @ 0x0041d690 */

void FUN_0041d690(void) { return; }


/* FUN_0041d6a0 @ 0x0041d6a0 */

/* Function cleaned: param_1 is UIWidget; accesses offset 0x1a (child_list_1) */
void __fastcall FUN_0041d6a0(UIWidget *this)
{
  void *child;
  int n1;
  uint u2;

  if (((char *)this - >child_list_1 != 0) &&
      (n1 = ((CVector *)this->child_list_1)->count /* CVector: count at +0x0E */, n1 != 0) && (u2 = 1, n1 != 0)) {
    n1 = 4;
    do {
      u2 = u2 + 1;
      n1 = n1 + 4;
      child = *(void **)(*(int *)((CVector *)this->child_list_1)->data[0] /* CVector: data ptr at +0x04 */ + -8 + n1);
      FUN_0041cb70(child,'\x01');
      FUN_0041d490((UIElement *)child);
      FUN_0041d6a0((UIWidget *)child);
      FUN_0041cb70(child,'\x01');
    } while (u2 <= ((CVector *)this->child_list_1)->count /* CVector: count at +0x0E */);
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

  if ((char *)param_1 - >child_list_1 != 0) {
    n1 = ((CVector *)param_1->child_list_1)->count /* CVector: count at +0x0E */;
    while (n1 != 0) {
      n1 = (int)param_1->child_list_1;
      _Dst = (int *)*(int *)((CVector *)n1)->data;
      u2 = ((CVector *)n1)->count;
      pu3 = (int *)*_Dst;
      if (u2 != 0) {
        if (1 < u2) {
          memmove(_Dst,_Dst + 1,u2 * 4 - 4);
        }
        ((CVector *)n1)->count = ((CVector *)n1)->count - 1;
      }
      ((void (*)(void))((void **)*pu3)[0])(); /* pu3->vtable[0] */
      n1 = ((CVector *)param_1->child_list_1)->count /* CVector: count at +0x0E */;
    }
  }
  FUN_0041cb70(param_1,'\x01');
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
    if (self != NULL) {
      if ((this->flags >> 4 & 1) != 0) {
        FUN_00431100(self,(intptr_t)this);
      }
      if (*(void **)&((UIElement *)(intptr_t)this->field_06)->flags == (void *)this) { /* field_06 as UIElement*, +0x12 stores back-pointer */
        FUN_00430ac0(this->field_06,NULL);
      }
    }
    this->field_06 = param_1;
    if ((param_1 != NULL) && ((this->flags >> 4 & 1) != 0)) {
      FUN_00431000(param_1,(intptr_t)this);
    }
    if (((this->child_list_1 != 0) &&
        (n1 = ((CVector *)this->child_list_1)->count, n1 != 0)) && (u2 = 1, n1 != 0)
       ) {
      do {
        u3 = (uint)(ushort)((short)u2 + 1);
        FUN_0041da00(*(void **)(*(int *)((CVector *)this->child_list_1)->data[0] + -4 + u2 * 4),param_1
                    );
        u2 = u3;
      } while (u3 <= ((CVector *)this->child_list_1)->count);
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
  if (self != NULL) {
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
      (n1 = ((CVector *)this->child_list_1)->count, n1 != 0)) && (u2 = 1, n1 != 0))
  {
    do {
      u3 = (uint)(ushort)((short)u2 + 1);
      FUN_0041dad0(*(void **)(*(int *)((CVector *)this->child_list_1)->data[0] + -4 + u2 * 4),param_1,
                   '\x01');
      u2 = u3;
    } while (u3 <= ((CVector *)this->child_list_1)->count);
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

  if (((char *)this - >child_list_1 != 0) &&
      (n1 = ((CVector *)this->child_list_1)->count /* CVector: count at +0x0E */, n1 != 0) && (u2 = 1, n1 != 0))
  {
    do {
      u3 = (uint)(ushort)((short)u2 + 1);
      self = *(void **)(*(int *)((CVector *)this->child_list_1)->data[0] /* CVector: data ptr at +0x04 */ + -4 + u2 * 4);
      FUN_0041cb70(self,param_1);
      FUN_0041db50(self,param_1);
      u2 = u3;
    } while (u3 <= ((CVector *)this->child_list_1)->count /* CVector: count at +0x0E */);
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
  int *_fs;
  short v18;
  short v16;
  short v14;
  short v12;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0041dfff;
  *_fs = &_seh_prev;
  param_1[1] = this->rect_left;
  param_1[3] = this->rect_right;
  *param_1 = this->rect_top;
  param_1[2] = this->rect_bottom;
  if (this->parent_widget != 0) {
    v16 = 0;
    _seh_state = 0;
    v18 = 0;
    v12 = 0;
    v14 = 0;
    FUN_0041dec0(this->parent_widget,&v18);
    if (param_1[1] < param_1[3]) {
      if (*param_1 < param_1[2]) {
        if ((v16 < v12) && (v18 < v14)) {
          if (param_1[1] < v16) {
            param_1[1] = v16;
          }
          if (v12 < param_1[3]) {
            param_1[3] = v12;
          }
          if (*param_1 < v18) {
            *param_1 = v18;
          }
          if (v14 < param_1[2]) {
            param_1[2] = v14;
          }
          if ((param_1[3] <= param_1[1]) || (param_1[2] <= *param_1)) {
            param_1[1] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            *param_1 = 0;
          }
        }
        else {
          param_1[1] = v16;
          *param_1 = v18;
          param_1[3] = v12;
          param_1[2] = v14;
        }
      }
    }
    _seh_state = 0xffffffff;
    FUN_0041e009();
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0041e009 @ 0x0041e009 */

void FUN_0041e009(void) { return; }


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
    u2 = ((CVector *)n1)->count;
    if (u2 != 0) {
      pn5 = (int *)*(int *)((CVector *)n1)->data;
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
}


/* FUN_0041e0b0 @ 0x0041e0b0 */

/* Function cleaned: this is UIElement; offset 0x2a = pos_y */
void __thiscall FUN_0041e0b0(UIElement *this,int *param_1)
{
  *param_1 = this->pos_y;
}


/* FUN_0041e0c0 @ 0x0041e0c0 */

/* Function cleaned: this is UIElement; offset 0x2e = pos_w */
void __thiscall FUN_0041e0c0(UIElement *this,int *param_1)
{
  *param_1 = this->pos_w;
}


/* FUN_0041e0d0 @ 0x0041e0d0 */

/* Function cleaned: this is UIElement; offset 0x32 = pos_h */
void __thiscall FUN_0041e0d0(UIElement *this,int *param_1)
{
  *param_1 = this->pos_h;
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
}


/* FUN_0041e250 @ 0x0041e250 */

/* Function cleaned: param_1 is UIElement; offset 0x04 = field_04 */
void __fastcall FUN_0041e250(UIElement *this)
{
  this->field_04 = 0;
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
  int _arg3;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00486180,u1,_arg3);
}


/* FUN_0041e500 @ 0x0041e500 */

void FUN_0041e500(void) { return; }


/* FUN_0041e560 @ 0x0041e560 */

int * __fastcall FUN_0041e560(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0041e5ab;
  *_fs = &_seh_prev;
  FUN_0044bc50(param_1);
  *param_1 = &PTR_FUN_00473240;
  *_fs = _seh_prev;
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
    pn7 = (int *)((char *)pn7 + sizeof(PlayerSlot));
    pn8 = (int *)((char *)pn8 + sizeof(PlayerSlot));
    pn4 = (int *)((char *)pn4 + sizeof(PlayerSlot));
  } while (pn7 < &DAT_004861d0);
  u1 = rand();
  u5 = (int)u1 >> 0x1f;
  /* TODO: 0x1DE base + stride 0x12 access into _pad1dc region of MathProblem */
  this->slots[2].denom =
       *(int *)((((u1 ^ u5) - u5 & 3 ^ u5) - u5) * 0x12 + 0x1de + (intptr_t)this);
  this->field_1cc =
       (int)*(short *)((char *)DAT_0048345c + 0x42 + (short)((short)param_1 + 1) * 0xc); /* GameSession +0x42 stride-0x0C array */
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
}


/* FUN_0041e720 @ 0x0041e720 */

void FUN_0041e720(void)
{
  _atexit(FUN_0041e730);
}


/* FUN_0041e730 @ 0x0041e730 */

void FUN_0041e730(void) { return; }


/* FUN_0041e740 @ 0x0041e740 */

int __fastcall FUN_0041e740(void *param_1)
{
    /* STUB: 1965 lines not yet reconstructed */
    return 0;
}


