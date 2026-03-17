/*
 * game_objects.c - Game objects and entities
 * Address range: 0x401000 - 0x408FFF
 * Functions: 223
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00401010 @ 0x00401010 */

void FUN_00401010(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484158,u1,_arg4);
}


/* FUN_00401050 @ 0x00401050 */

int * __thiscall FUN_00401050(void *this,int param_1)
{
  *(int *)this = param_1 << 8;
  return this;
}


/* FUN_00401060 @ 0x00401060
 * Sets a pair of 4-byte values at this+0x00 and this+0x04.
 */

int * __thiscall FUN_00401060(void *this,int param_1,int param_2)
{
  ((int *)this)[1] = 0;
  ((int *)this)[0] = 0;
  ((int *)this)[1] = param_1;
  ((int *)this)[0] = param_2;
  return this;
}


/* FUN_004010b0 @ 0x004010b0 */

/* NOTE: overlapping globals */

void FUN_004010b0(void)
{
  _DAT_00484166 = 0;
  _DAT_00484164 = 0;
}


/* FUN_004010c0 @ 0x004010c0 */

void FUN_004010c0(void)
{
  _atexit(FUN_004010d0);
}


/* FUN_004010d0 @ 0x004010d0 */

void FUN_004010d0(void) { return; }


/* FUN_004010f0 @ 0x004010f0 */

/* NOTE: overlapping globals */

void FUN_004010f0(void)
{
  _DAT_00484162 = 0;
  _DAT_00484160 = 0;
}


/* FUN_00401100 @ 0x00401100 */

void FUN_00401100(void)
{
  _atexit(FUN_00401110);
}


/* FUN_00401110 @ 0x00401110 */

void FUN_00401110(void) { return; }


/* FUN_00401140 @ 0x00401140
 * Struct types: GameWidget (this)
 * GameWidget constructor — initializes extension fields, sets vtable.
 */

GameWidget * __fastcall FUN_00401140(GameWidget *this)
{
  int *_fs;
  int u1;
  int u2;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0040124f;
  *_fs = &_seh_prev;
  u2 = 0x40116a;
  FUN_0044e3f0(this);
  this->pair_x_1 = 0;
  this->pair_y_1 = 0;
  this->pair_x_2 = 0;
  this->object_ptr = NULL;
  _seh_state = 2;
  this->vtable = (void **)&PTR_FUN_00472078;
  this->_pad134[0] = 0;
  *(unsigned char *)&this->field_118 = 0;
  this->field_12e = 0;
  this->field_12f = 0;
  this->scrollbar_ref = 0;
  u1 = 0xffffffff;
  FUN_00401050(&_tmp_34,-1);
  FUN_00401050(&_tmp_33,-1);
  FUN_00401270(&this->pair_x_1,u1,u2);
  u1 = 0;
  FUN_00401050(&_tmp_34,0);
  FUN_00401050(&_tmp_33,0);
  FUN_00401270(&this->pair_x_2,u1,u2);
  this->field_130 = 0;
  FUN_0041da90(this,1);
  this->type_or_mode = 2;
  *_fs = _seh_prev;
  return this;
}


/* FUN_00401270 @ 0x00401270
 * Sets a pair of 4-byte values at this+0x00 and this+0x04.
 */

void __thiscall FUN_00401270(void *this,int param_1,int param_2)
{
  ((int *)this)[1] = param_1;
  ((int *)this)[0] = param_2;
}


/* FUN_00401280 @ 0x00401280 */

int * __thiscall FUN_00401280(void *this,byte param_1)
{
  FUN_004012f0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004012a0 @ 0x004012a0 */

void FUN_004012a0(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004012d7;
  *_fs = &_seh_prev;
  _seh_state = 0xffffffff;
  FUN_004012e1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004012e1 @ 0x004012e1 */

void FUN_004012e1(void)
{
  int _ebp;
  
  FUN_00405420(*(int **)(_ebp + -0x10));
}


/* FUN_004012f0 @ 0x004012f0 */

void __fastcall FUN_004012f0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00401366;
  *param_1 = &PTR_FUN_00472078;
  *_fs = &_seh_prev;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_0040134a();
  _seh_state &= ~0xFF;
  FUN_00401358();
  _seh_state = 0xffffffff;
  FUN_00401370();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0040134a @ 0x0040134a */

void FUN_0040134a(void) { return; }


/* FUN_00401358 @ 0x00401358 */

void FUN_00401358(void) { return; }


/* FUN_00401370 @ 0x00401370 */

void FUN_00401370(void)
{
  FUN_004012a0();
}


/* FUN_00401592 @ 0x00401592 */

void FUN_00401592(void) { return; }


/* FUN_0040159a @ 0x0040159a */

void FUN_0040159a(void) { return; }


/* FUN_004015a2 @ 0x004015a2 */

void FUN_004015a2(void) { return; }


/* FUN_004015b4 @ 0x004015b4 */

void FUN_004015b4(void) { return; }


/* FUN_004015c0 @ 0x004015c0 */

int * __thiscall
FUN_004015c0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
    /* STUB: 45 lines not yet reconstructed */
    return 0;
}


/* FUN_00401730 @ 0x00401730
 * Struct types: GameWidget (this)
 * GameWidget destructor entry — calls FUN_00401750, optionally frees memory.
 */

GameWidget * __thiscall FUN_00401730(GameWidget *this,byte param_1)
{
  FUN_00401750(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00401750 @ 0x00401750
 * Struct types: GameWidget (this)
 * GameWidget destructor — sets vtable, conditionally calls cleanup FUN_00401d20.
 */

void __fastcall FUN_00401750(GameWidget *this)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &L_004017e4;
  this->vtable = (void **)&PTR_FUN_00472120;
  *_fs = &_seh_prev;
  _seh_state = 2;
  if (*(char *)((int)this + 0x12c) == '\0') {  /* TODO: byte within scrollbar_ref/_pad area */
    FUN_00401d20(this);
  }
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_004017b4();
  _seh_state &= ~0xFF;
  FUN_004017cc();
  _seh_state = 0xffffffff;
  FUN_004017ee();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004017b4 @ 0x004017b4 */

void FUN_004017b4(void)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}


/* FUN_004017cc @ 0x004017cc */

void FUN_004017cc(void)
{
    /* STUB: 7 lines not yet reconstructed */
    return;
}


/* FUN_004017ee @ 0x004017ee */

void FUN_004017ee(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_00401930 @ 0x00401930 */

void FUN_00401930(int param_1,short param_2,int param_3,int param_4,int param_5,char param_6,
                 char param_7)
{
    /* STUB: 133 lines not yet reconstructed */
    return;
}


/* FUN_00401ba0 @ 0x00401ba0 */

int * __thiscall FUN_00401ba0(void *this,short param_1)
{
  *(int *)this = (int)param_1 << 8;
  return this;
}


/* FUN_00401d20 @ 0x00401d20
 * Struct types: GameWidget (this), GameBoard (via DAT_004897c0+0x52)
 * GameWidget cleanup — calls cleanup_fn, destroys slot objects in 3 groups,
 * then updates the GameBoard refresh state.
 * NOTE: offsets 0x18C and 0x196 are in the _pad160 region of GameWidget (0x160-0x19B).
 *       These appear to be a second set of group_data/group_count arrays at stride 0x16.
 */

void __fastcall FUN_00401d20(GameWidget *this)
{
  GameBoard *board;
  short s1;
  short s2;

  *(unsigned char *)((int)this + 0x12c) = 1;  /* TODO: offset 0x12C, byte 2 of scrollbar_ref (0x12A-0x12D) */
  if (this->cleanup_fn_ptr != NULL) {
    ((void (*)(void))**(void ***)&this->cleanup_fn_ptr)(); /* cleanup_fn_ptr->vtable[0] */
  }
  s1 = 0;
  do {
    /* Iterate group_data_a slots (stride 0x16, base 0x14A/0x154) */
    for (s2 = 1; (uint)(int)s2 <= *(uint *)((int)this + s1 * 0x16 + 0x154);  /* group_count_a + stride*s1 */
        s2 = s2 + 1) {
      ((void (*)(void))((void **)**(int **)
                    (**(int **)((int)this + s1 * 0x16 + 0x14a) + -4 + s2 * 4))[0])();  /* group_data_a[s1][s2]->vtable[0] */
    }
    /* Iterate group_data_b slots (stride 0x16, base 0x18C/0x196) */
    for (s2 = 1; (uint)(int)s2 <= *(uint *)((int)this + s1 * 0x16 + 0x196);  /* TODO: offset 0x196 in _pad160 region */
        s2 = s2 + 1) {
      ((void (*)(void))((void **)**(int **)
                    (**(int **)((int)this + s1 * 0x16 + 0x18c) + -4 + s2 * 4))[0])();  /* group_data_b[s1][s2]->vtable[0] */ /* TODO: offset 0x18C in _pad160 region */
    }
    s1 = s1 + 1;
  } while (s1 < 3);
  FUN_00402f60((int)this);
  FUN_0041dad0(this,0,'\0');
  if (*(char *)(DAT_00489ac8 + 0xc) == '\0') {
    board = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
    FUN_0042dae0(board,0,this->name_data_ptr,-1,-1);
    board->refresh_counter = 1;
    board->needs_refresh = 1;
    s1 = ((GameSession *)DAT_0048345c)->score_display;
    switch(((GameSession *)DAT_0048345c)->field_96) {
    case 1:
      s1 = s1 + 0xfa;
      break;
    case 2:
      s1 = s1 + 300;
      break;
    case 3:
      s1 = s1 + 0x15e;
      break;
    case 4:
      s1 = s1 + 400;
      break;
    case 5:
      s1 = s1 + 0x1c2;
      break;
    case 6:
      s1 = s1 + 500;
    }
    ((GameSession *)DAT_0048345c)->score_display = s1;
  }
  FUN_0042c3f0(this);
}


/* FUN_00401e70 @ 0x00401e70 */

void __fastcall FUN_00401e70(void *param_1)
{
    /* STUB: 41 lines not yet reconstructed */
    return;
}


/* FUN_00401f80 @ 0x00401f80
 * Struct types: GameWidget (this), GameWidget (n1 — slot items)
 * Searches group_data_a[param_1] for an available slot.
 * Returns first slot where field_12f==0 (and field_12e==0 if param_2 is set).
 */

int __thiscall FUN_00401f80(GameWidget *this,short param_1,char param_2)
{
  GameWidget *slot;
  short s2;

  s2 = 1;
  do {
    if (*(short *)((int)this + param_1 * 0x16 + 0x154) < s2) {  /* group_count_a + stride*param_1 */
      return 0;
    }
    slot = (GameWidget *)*(int *)(**(int **)((int)this + param_1 * 0x16 + 0x14a) + -4 + s2 * 4);  /* group_data_a + stride*param_1 */
    if (slot->field_12f == '\0') {
      if (param_2 == '\0') {
        return (int)slot;
      }
      if (slot->field_12e == '\0') {
        return (int)slot;
      }
    }
    s2 = s2 + 1;
  } while( true );
}


/* FUN_00401fe0 @ 0x00401fe0
 * Struct types: GameWidget (this)
 * Searches group_data_b[param_1] (stride 0x16, base 0x18C/0x196) for first
 * non-null slot where byte at offset 0x118 == 0.
 * NOTE: offset 0x118 on the slot object = GameWidget.field_118 (low byte check)
 */

int __thiscall FUN_00401fe0(GameWidget *this,short param_1)
{
  int n1;
  short s2;

  s2 = 1;
  while( true ) {
    if (*(short *)((int)this + param_1 * 0x16 + 0x196) < s2) {  /* TODO: offset 0x196 + stride*param_1, in _pad160 region */
      return 0;
    }
    n1 = *(int *)(**(int **)((int)this + param_1 * 0x16 + 0x18c) + -4 + s2 * 4);  /* TODO: offset 0x18C + stride*param_1, in _pad160 region */
    if ((n1 != 0) && (*(char *)(n1 + 0x118) == '\0')) break;
    s2 = s2 + 1;
  }
  return n1;
}


/* FUN_00402030 @ 0x00402030
 * Struct types: GameWidget (this)
 * Searches all 3 group slots for an available widget. If none found,
 * sets object_ptr to 3 (sentinel value).
 */

void __fastcall FUN_00402030(GameWidget *this)
{
  int n1;

  n1 = FUN_00401f80(this,0,'\0');
  if (n1 == 0) {
    n1 = FUN_00401f80(this,1,'\0');
    if (n1 == 0) {
      n1 = FUN_00401f80(this,2,'\0');
      if (n1 == 0) {
        this->object_ptr = (void *)3;
      }
    }
  }
  return;
}


/* FUN_00402070 @ 0x00402070 */

uint FUN_00402070(void *param_1)
{
    /* STUB: 159 lines not yet reconstructed */
    return 0;
}


/* FUN_0040227d @ 0x0040227d */

void FUN_0040227d(void) { return; }


/* FUN_00402499 @ 0x00402499 */

void FUN_00402499(void) { return; }


/* FUN_004024a1 @ 0x004024a1 */

void FUN_004024a1(void) { return; }


/* FUN_004024a9 @ 0x004024a9 */

void FUN_004024a9(void) { return; }


/* FUN_004024b1 @ 0x004024b1 */

void FUN_004024b1(void) { return; }


/* FUN_004024b9 @ 0x004024b9 */

void FUN_004024b9(void) { return; }


/* FUN_004024cb @ 0x004024cb */

void FUN_004024cb(void) { return; }


/* FUN_004024e0 @ 0x004024e0 */

void FUN_004024e0(int *param_1)
{
    /* STUB: 203 lines not yet reconstructed */
    return;
}


/* FUN_00402a37 @ 0x00402a37 */

void FUN_00402a37(void) { return; }


/* FUN_00402a3f @ 0x00402a3f */

void FUN_00402a3f(void) { return; }


/* FUN_00402a47 @ 0x00402a47 */

void FUN_00402a47(void) { return; }


/* FUN_00402a4f @ 0x00402a4f */

void FUN_00402a4f(void) { return; }


/* FUN_00402a64 @ 0x00402a64 */

void FUN_00402a64(void) { return; }


/* FUN_00402a6c @ 0x00402a6c */

void FUN_00402a6c(void) { return; }


/* FUN_00402a7e @ 0x00402a7e */

void FUN_00402a7e(void) { return; }


/* FUN_00402a90 @ 0x00402a90
 * Struct types: GameWidget (this), GameWidget (n2 — slot items)
 * Searches group_data_a for first slot with both field_12e and field_12f == 0.
 * Group index comes from param_1's level_data_ptr byte at offset +7.
 */

int __thiscall FUN_00402a90(GameWidget *this,int param_1)
{
  short s1;
  GameWidget *slot;
  short s3;
  uint u4;

  u4 = (uint)*(byte *)(*(int *)(param_1 + 0xf6) + 7);
  s1 = *(short *)((int)this + u4 * 0x16 + 0x154);  /* group_count_a + stride*u4 */
  s3 = 1;
  if (0 < s1) {
    do {
      slot = (GameWidget *)*(int *)(**(int **)((int)this + u4 * 0x16 + 0x14a) + -4 + s3 * 4);  /* group_data_a + stride*u4 */
      if ((slot->field_12e == '\0') && (slot->field_12f == '\0')) {
        return (int)slot;
      }
      s3 = s3 + 1;
    } while (s3 <= s1);
  }
  return 0;
}


/* FUN_00402af0 @ 0x00402af0 */

int * __thiscall FUN_00402af0(SoundPlayer *this,int *param_1,int param_2,char param_3)
{
  short s1;
  void *self;
  ushort u2;
  ushort u3;
  int n4;
  int n5;
  short s6;
  int *_fs;
  int u7;
  int _arg2;
  int *pn8;
  int v20;
  int v1c;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  uint _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00402ced;
  *_fs = &_seh_prev;
  u7 = 0;
  FUN_00401050(&_tmp_31,0);
  v14 = &_tmp_30;
  FUN_00401050(&_tmp_30,0);
  FUN_00401060(&v20,u7,_arg2);
  _seh_state = 1;
  u2 = (ushort)*(byte *)(*(int *)(param_2 + 0xf6) + 7);
  v18 = 0;
  u3 = u2 + 1;
  if (param_3 != '\0') {
    u3 = u2;
  }
  if (u3 < 3) {
    n5 = (int)(short)u3;
    s1 = *(short *)((int)this + n5 * 0x16 + 0x196);  /* TODO: offset 0x196 + stride*n5, in _pad160 region */
    n4 = (int)*(short *)(&DAT_00472040 + n5 * 2) << 8;
    v14 = &_tmp_30;
    v18 = n4;
    FUN_00401ba0(&_tmp_30,*(short *)(&DAT_00472030 + n5 * 2));
    FUN_00401270(&v20,u7,n4);
    v14 = (char *)((uint)v14 & 0xffff);
    if (0 < *(short *)(&DAT_00472050 + n5 * 2)) {
      do {
        s6 = 1;
        while( true ) {
          if (s1 < s6) {
            v14 = &_tmp_30;
            n4 = v18;
            FUN_00401ba0(&_tmp_30,*(short *)(&DAT_00472030 + n5 * 2));
            FUN_00401270(&v20,u7,n4);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[1] = v1c;
            goto L_00402c7b;
          }
          self = *(void **)(**(int **)((int)this + n5 * 0x16 + 0x18c) + -4 + s6 * 4);  /* TODO: offset 0x18C + stride*n5, in _pad160 region */
          pn8 = &v20;
          u7 = 0x402bf8;
          FUN_0041cde0(self,pn8);
          if (((v18 == v20) && (*(short *)(&DAT_00472038 + n5 * 2) * 0x100 == v1c)
              ) || ((((SoundPlayer *)self)->sequence_data[52] != '\0' &&
                    (((SoundPlayer *)self)->sequence_data[52] == v18)))) break;
          s6 = s6 + 1;
        }
        FUN_00401ba0(&_tmp_31,*(short *)(&DAT_00472048 + n5 * 2));
        u7 = 0x402c47;
        FUN_00402d00(&v18,(int)pn8);
        s6 = ((unsigned short)((v14) >> 16)) + 1;
        v14 = (char *)CONCAT22(s6,(short)v14);
      } while (s6 < *(short *)(&DAT_00472050 + n5 * 2));
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = DAT_0048415c;
  v20 = DAT_00484158;
L_00402c7b:
  _seh_state = _seh_state & 0xffffff00;
  *param_1 = v20;
  FUN_00402cf7();
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00402cf7 @ 0x00402cf7 */

void FUN_00402cf7(void) { return; }


/* FUN_00402d00 @ 0x00402d00 */

int * __thiscall FUN_00402d00(void *this,int param_1)
{
  *(int *)this = *(int *)this + param_1;
  return this;
}


/* FUN_00402d10 @ 0x00402d10 */

void __fastcall FUN_00402d10(void *param_1)
{
    /* STUB: 92 lines not yet reconstructed */
    return;
}


/* FUN_00402e39 @ 0x00402e39 */

void FUN_00402e39(void) { return; }


/* FUN_00402f0b @ 0x00402f0b */

void FUN_00402f0b(void) { return; }


/* FUN_00402f2d @ 0x00402f2d */

void FUN_00402f2d(void) { return; }


/* FUN_00402f3f @ 0x00402f3f */

void FUN_00402f3f(void) { return; }


/* FUN_00402f50 @ 0x00402f50
 * Adds to a pair of 4-byte values at this+0x00 and this+0x04.
 */

void __thiscall FUN_00402f50(void *this,int param_1,int param_2)
{
  ((int *)this)[1] += param_1;
  ((int *)this)[0] += param_2;
}


/* FUN_00402f60 @ 0x00402f60
 * Destroys two sub-objects at offsets 0x1CA and 0x1CE via vtable[0] calls.
 * TODO: offsets 0x1CA/0x1CE beyond GameWidget (0x19C). May be a larger
 *       derived struct or these are accessed via embedded sub-objects.
 */

void __fastcall FUN_00402f60(int param_1)
{
  if (*(void **)(param_1 + 0x1ca) != NULL) {
    ((void (*)(void))**(void ***)(param_1 + 0x1ca))(); /* obj at param_1+0x1ca->vtable[0] */
    *(int *)(param_1 + 0x1ca) = 0;
  }
  if (*(void **)(param_1 + 0x1ce) != NULL) {
    ((void (*)(void))**(void ***)(param_1 + 0x1ce))(); /* obj at param_1+0x1ce->vtable[0] */
    *(int *)(param_1 + 0x1ce) = 0;
  }
  return;
}


/* FUN_00402fa0 @ 0x00402fa0
 * Struct types: GameWidget (param_1) — but also accesses 0x1CA/0x1CE beyond GameWidget
 * Converts field_130 and field_12e to strings and passes them to display objects.
 * TODO: offsets 0x1CA/0x1CE beyond GameWidget (0x19C), likely a derived struct.
 */

void __fastcall FUN_00402fa0(GameWidget *this)
{
  char v28 [40];

  if (((DialogWidget *)this)->dialog_value != 0) {  /* offset 0x1CE, DialogWidget::dialog_value */
    _itoa((int)*(short *)&this->field_130,v28,10);
    FUN_00458860((void *)((DialogWidget *)this)->dialog_value,v28);
  }
  if (*(int *)((int)this + 0x1ca) != 0) {  /* TODO: offset 0x1CA, within DialogWidget::dialog_data region */
    _itoa((int)this->field_12e,v28,10);
    FUN_00458860(*(void **)((int)this + 0x1ca),v28);  /* TODO: offset 0x1CA, within DialogWidget::dialog_data region */
  }
  return;
}


/* FUN_00403030 @ 0x00403030
 * Copies a pair of 4-byte values from param_2 through this into param_1.
 */

int * __thiscall FUN_00403030(void *this,int *param_1,int *param_2)
{
  int u1;
  int *_fs;
  char v10 [12];

  u1 = *_fs;
  *_fs = v10;
  ((int *)this)[1] = param_2[1];
  ((int *)this)[0] = *param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = ((int *)this)[1];
  *param_1 = ((int *)this)[0];
  *_fs = u1;
  return param_1;
}


/* FUN_00403160 @ 0x00403160 */

void __thiscall FUN_00403160(void *this,int *param_1,uint param_2)
{
    /* STUB: 51 lines not yet reconstructed */
    return;
}


/* FUN_00403230 @ 0x00403230 */

void FUN_00403230(void)
{
    /* STUB: 10 lines not yet reconstructed */
    return;
}


/* FUN_00403290 @ 0x00403290 */

void FUN_00403290(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484168,u1,_arg4);
}


/* FUN_004032e0 @ 0x004032e0 */

void FUN_004032e0(void) { return; }


/* FUN_00403300 @ 0x00403300 */

/* NOTE: overlapping globals */

void FUN_00403300(void)
{
  _DAT_00484176 = 0;
  _DAT_00484174 = 0;
}


/* FUN_00403310 @ 0x00403310 */

void FUN_00403310(void)
{
  _atexit(FUN_00403320);
}


/* FUN_00403320 @ 0x00403320 */

void FUN_00403320(void) { return; }


/* FUN_00403340 @ 0x00403340 */

/* NOTE: overlapping globals */

void FUN_00403340(void)
{
  _DAT_00484172 = 0;
  _DAT_00484170 = 0;
}


/* FUN_00403350 @ 0x00403350 */

void FUN_00403350(void)
{
  _atexit(FUN_00403360);
}


/* FUN_00403360 @ 0x00403360 */

void FUN_00403360(void) { return; }


/* FUN_00403370 @ 0x00403370 */

int * __fastcall FUN_00403370(int *param_1)
{
    /* STUB: 58 lines not yet reconstructed */
    return 0;
}


/* FUN_004034e0 @ 0x004034e0 */

int * __thiscall FUN_004034e0(void *this,byte param_1)
{
  FUN_00403580(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00403500 @ 0x00403500 */

void FUN_00403500(void)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0040356a;
  *_fs = &_seh_prev;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_00403554();
  _seh_state &= ~0xFF;
  FUN_0040355f();
  _seh_state = 0xffffffff;
  FUN_00403574();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00403554 @ 0x00403554 */

void FUN_00403554(void) { return; }


/* FUN_0040355f @ 0x0040355f */

void FUN_0040355f(void)
{
  int _ebp;
  
  FUN_0043b810((int *)(*(int *)(_ebp + -0x10) + 0x42));
}


/* FUN_00403574 @ 0x00403574 */

void FUN_00403574(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_00403580 @ 0x00403580
 * Struct types: UIWidget (this) — offsets 0x6a-0xca fall within UIElement/UIWidget range.
 * Destructor: sets vtable, frees resources at 0x6a and 0xca (within sub_widgets/scroll_data),
 * destroys child objects, frees palette data.
 * NOTE: param_1 typed as int* — index-based access uses sizeof(int)=4 stride.
 *   param_1[0x21] = byte 0x84 = sub_widgets_a[15]
 *   param_1[0x22] = byte 0x88 = sub_widgets_b[0]
 *   param_1[0x29] = byte 0xA4 = sub_widgets_b[7]
 *   param_1+0x2c  = byte 0xB0 = sub_widgets_b[10]  (1-byte access)
 *   0x6a = sub_widgets_a[9], 0xca = scroll_data[0]
 */

void __fastcall FUN_00403580(UIWidget *this)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  uint _seh_state;

  _seh_prev = *_fs;
  _handler = &L_00403684;
  this->vtable = (void **)&PTR_FUN_004721f0;
  *_fs = &_seh_prev;
  _seh_state = 1;
  FUN_00404830(this,0);
  if (this->sub_widgets_a[9] != 0) {  /* +0x6A = sub_widgets_a[9] */
    FUN_0046f5f0(this->sub_widgets_a[9]);
  }
  this->sub_widgets_a[9] = 0;
  if (*(uint *)&this->scroll_data[0] != 0) {
    FUN_0046f5f0(*(uint *)&this->scroll_data[0]);
  }
  *(int *)&this->scroll_data[0] = 0;
  FUN_004036a0(this,NULL);
  if (*(char *)&this->sub_widgets_b[10] != '\0') {  /* +0xB0 = byte within sub_widgets_b[10] */
    *(unsigned char *)&this->sub_widgets_b[10] = 0;  /* TODO: flag byte at 0xB0 */
    FUN_00409330();
  }
  if (this->sub_widgets_a[15] != 0) {
    FUN_0042c3f0((int *)this->sub_widgets_a[15]);
  }
  if (this->sub_widgets_b[0] != 0) {
    FUN_0042c3f0((int *)this->sub_widgets_b[0]);
  }
  if ((this->sub_widgets_b[7] != 0) && (*(char *)&this->sub_widgets_b[8] != '\0')) {  /* +0xA2 = first byte of sub_widgets_b[8] used as flag */
    FUN_0046e210((LPCVOID)this->sub_widgets_b[7]);
    this->sub_widgets_b[7] = 0;
  }
  _seh_state = _seh_state & 0xffffff00;
  FUN_00403679();
  _seh_state = 0xffffffff;
  FUN_0040368e();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00403679 @ 0x00403679 */

void FUN_00403679(void)
{
  int _ebp;
  
  FUN_00404e10((int *)(*(int *)(_ebp + -0x10) + 0x6e));
}


/* FUN_0040368e @ 0x0040368e */

void FUN_0040368e(void)
{
  FUN_00403500();
}


/* FUN_004036a0 @ 0x004036a0 */

void __thiscall FUN_004036a0(void *this,int *param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return;
}


/* FUN_00403755 @ 0x00403755 */

void FUN_00403755(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x418));
}


/* FUN_00403790 @ 0x00403790 */

void __thiscall FUN_00403790(void *this,void *param_1,uint param_2)
{
    /* STUB: 13 lines not yet reconstructed */
    return;
}


/* FUN_004037e0 @ 0x004037e0
 * Struct types: UIWidget-derived (param_1)
 * Initializes palette/tile data, iterates child widgets via vtable calls,
 * sets up viewport coordinates and optionally renders an image.
 * Offsets: 0x6a (resource handle), 0x7c (child count), 0x72 (child list ptr),
 *          0x42 (embedded sub-object)
 */

void __fastcall FUN_004037e0(void *param_1)
{
  ushort *pu1;
  short u2;
  short u3;
  ushort *pu4;
  LPCVOID pv5;
  int u6;
  short s7;
  int n8;
  int n9;
  short s10;
  int *_fs;
  int n11;
  int _arg1;
  char c12;
  char c13;
  uint u14;
  uint u15;
  int v38 [5];
  char *v24;
  int v20;
  short v1c [2];
  int v18;
  char *v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00403a2f;
  *_fs = &_seh_prev;
  pu4 = NULL;
  n8 = *(int *)((int)param_1 + 0x6a);  /* TODO: unknown struct offset 0x6a on param_1 */
  if ((n8 != 0) && (*(int *)(n8 + 8) != 0)) {
    _arg1 = 0x403826;
    pu4 = FUN_004607d0(DAT_004838c0,*(int *)(n8 + 8),NULL,NULL,0);
  }
  if (pu4 == NULL) {
    u15 = 0;
    u14 = 0x400;
    pv5 = (LPCVOID)FUN_00460080(DAT_004838c0,0x400);
    pu4 = FUN_0046f060(pv5,u14,u15);
    s7 = 0;
    do {
      n9 = (int)s7;
      s7 = s7 + 1;
      n8 = n9 * 4;
      pu1 = pu4 + n9 * 2;
      *(unsigned char *)pu1 = (&DAT_0047fcc2)[n8];
      *(unsigned char *)((int)pu1 + 1) = (&DAT_0047fcc1)[n8]; /* TODO: byte at pu1+1, palette entry */
      *(unsigned char *)(pu1 + 1) = (&DAT_0047fcc0)[n8];
      *(unsigned char *)((int)pu1 + 3) = 0; /* TODO: byte at pu1+3, palette padding */
    } while (s7 < 0x100);
  }
  FUN_004036a0(param_1,(int *)pu4);
  s7 = *(short *)((int)param_1 + 0x7c);  /* TODO: unknown struct offset 0x7c on param_1 */
  if ((s7 != 0) && (s10 = 1, 0 < s7)) {
    do {
      n8 = (int)s10;
      s10 = s10 + 1;
      /* vtable[0x28] call on child widget (offset 0xa0 / 4 = 0x28) */
      ((void (*)(void))((void **)(**(int **)(**(int **)((int)param_1 + 0x72) + -4 + n8 * 4)))[0xa0 / 4])();  /* child->vtable[40] */ /* TODO: offset 0x72 on param_1 */
    } while (s10 <= s7);
  }
  /* vtable[0x15] call on sub-object at +0x42 (offset 0x54 / 4 = 0x15) */
  ((void (*)(void))((void **)(*(int *)((int)param_1 + 0x42)))[0x54 / 4])();  /* obj at param_1+0x42->vtable[21] */ /* TODO: offset 0x42 on param_1 */
  c13 = '\0';
  c12 = '\0';
  v24 = &_tmp_25;
  n11 = 0x1e0;
  FUN_00401050(&_tmp_25,0x1e0);
  v18 = &_tmp_24;
  n9 = 0x280;
  FUN_00401050(&_tmp_24,0x280);
  v14 = &_tmp_23;
  n8 = 0;
  FUN_00401050(&_tmp_23,0);
  v20 = &_tmp_22;
  FUN_00401050(&_tmp_22,0);
  FUN_0041cca0(param_1,n8,n9,n11,_arg1,c12,c13);
  FUN_0041b150((void *)((int)param_1 + 0x42),1);
  if (*(int *)((int)param_1 + 0x6a) != 0) {  /* TODO: offset 0x6a on param_1 */
    FUN_0043b760(v38);
    _seh_state = 2;
    v14 = NULL;
    v1c[1] = 0;
    v1c[0] = 0;
    v18 = (char *)0x28001e0;
    u6 = FUN_0041ace0(DAT_004838c0,**(int **)((int)param_1 + 0x6a));  /* TODO: offset 0x6a on param_1 */
    if ((char)u6 != '\0') {
      s7 = FUN_0043b970((int)v38);
      v20 = (char *)CONCAT22((short)((0x1e0 - s7) / 2),(short)v20);
      s7 = FUN_0043b940((int)v38);
      v14 = (char *)CONCAT22((short)((0x280 - s7) / 2),((unsigned short)((v20) >> 16)));
      u2 = FUN_0043b970((int)v38);
      u3 = FUN_0043b940((int)v38);
      v1c[1] = 0;
      v1c[0] = 0;
      v18 = (char *)CONCAT22(u3,u2);
      FUN_00419570(v38,v1c,(int *)((int)param_1 + 0x42),(short *)&v14,1,0,0);
    }
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_00403a1f();
    _seh_state &= ~0xFF;
    FUN_00403a27();
    _seh_state = 0xffffffff;
    FUN_00403a39();
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00403a1f @ 0x00403a1f */

void FUN_00403a1f(void) { return; }


/* FUN_00403a27 @ 0x00403a27 */

void FUN_00403a27(void) { return; }


/* FUN_00403a39 @ 0x00403a39 */

void FUN_00403a39(void)
{
  int _ebp;
  
  FUN_0043b810((int *)(_ebp + -0x34));
}


/* FUN_00403a50 @ 0x00403a50
 * Clears palette data and calls vtable[0x29] (offset 0xa4/4) on each child widget.
 * Offsets: 0x7c (child count), 0x72 (child list ptr)
 */

void __fastcall FUN_00403a50(void *param_1)
{
  short s1;
  int n2;
  short s3;

  FUN_004036a0(param_1,NULL);
  s1 = *(short *)((int)param_1 + 0x7c);  /* TODO: unknown struct offset 0x7c on param_1 */
  if ((s1 != 0) && (s3 = 1, 0 < s1)) {
    do {
      n2 = (int)s3;
      s3 = s3 + 1;
      /* vtable[0x29] call on child widget (offset 0xa4 / 4 = 0x29) */
      ((void (*)(void))((void **)(**(int **)(**(int **)((int)param_1 + 0x72) + -4 + n2 * 4)))[0xa4 / 4])();  /* child->vtable[41] */ /* TODO: offset 0x72 on param_1 */
    } while (s3 <= s1);
  }
  return;
}


/* FUN_00403aa0 @ 0x00403aa0 */

void FUN_00403aa0(void) { return; }


/* FUN_00403ae0 @ 0x00403ae0 */

int * FUN_00403ae0(int param_1)
{
    /* STUB: 113 lines not yet reconstructed */
    return 0;
}


/* FUN_00403eb9 @ 0x00403eb9 */

void FUN_00403eb9(void)
{
  FUN_004012a0();
}


/* FUN_00403f29 @ 0x00403f29 */

void FUN_00403f29(void)
{
  FUN_004012a0();
}


/* FUN_00403f40 @ 0x00403f40 */

void __thiscall FUN_00403f40(void *this,void *param_1)
{
    /* STUB: 89 lines not yet reconstructed */
    return;
}


/* FUN_00404120 @ 0x00404120 */

void __fastcall FUN_00404120(void *param_1)
{
    /* STUB: 183 lines not yet reconstructed */
    return;
}


/* FUN_0040450f @ 0x0040450f */

void FUN_0040450f(void) { return; }


/* FUN_00404517 @ 0x00404517 */

void FUN_00404517(void) { return; }


/* FUN_00404529 @ 0x00404529 */

void FUN_00404529(void) { return; }


/* FUN_00404580 @ 0x00404580 */

void FUN_00404580(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484178,u1,_arg4);
}


/* FUN_004045d0 @ 0x004045d0 */

void FUN_004045d0(void) { return; }


/* FUN_00404610 @ 0x00404610 */

/* NOTE: overlapping globals */

void FUN_00404610(void)
{
  _DAT_00484186 = 0;
  _DAT_00484184 = 0;
}


/* FUN_00404620 @ 0x00404620 */

void FUN_00404620(void)
{
  _atexit(FUN_00404630);
}


/* FUN_00404630 @ 0x00404630 */

void FUN_00404630(void) { return; }


/* FUN_004046c0 @ 0x004046c0 */

void __fastcall FUN_004046c0(int param_1)
{
    /* STUB: 55 lines not yet reconstructed */
    return;
}


/* FUN_004047d0 @ 0x004047d0 */

/* NOTE: overlapping globals */

void FUN_004047d0(void)
{
  _DAT_00484182 = 0;
  _DAT_00484180 = 0;
}


/* FUN_004047e0 @ 0x004047e0 */

void FUN_004047e0(void)
{
  _atexit(FUN_004047f0);
}


/* FUN_004047f0 @ 0x004047f0 */

void FUN_004047f0(void) { return; }


/* FUN_00404830 @ 0x00404830 */

void __thiscall FUN_00404830(SoundPlayer *this,int param_1)
{
  if ((this->sequence_data[17] != 0) && (this->sequence_data[17] != '\0')) {
    this->sequence_data[17] = 0;
    FUN_0046f5f0(this->sequence_data[17]);
  }
  this->sequence_data[17] = param_1;
}


/* FUN_00404870 @ 0x00404870 */

void __thiscall FUN_00404870(void *this,int param_1)
{
    /* STUB: 15 lines not yet reconstructed */
    return;
}


/* FUN_004048d0 @ 0x004048d0 */

void __fastcall FUN_004048d0(void *param_1)
{
    /* STUB: 54 lines not yet reconstructed */
    return;
}


/* FUN_00404a80 @ 0x00404a80 */

void __fastcall FUN_00404a80(int param_1)
{
  int *pu1;
  int *pu2;
  
  if (*(int *)(param_1 + 0x9e) != 0) {
    pu1 = (int *)(param_1 + 0x96);
    FUN_00434490(*(int *)(param_1 + 0x9e));
    if ((int *)*pu1 != NULL) {
      FUN_00433420((int *)*pu1);
      FUN_00433270(pu1);
    }
    pu2 = (int *)(param_1 + 0x9a);
    if ((int *)*pu2 != NULL) {
      FUN_00433420((int *)*pu2);
      FUN_00433270(pu2);
    }
    *(short *)(param_1 + 0x94) = 0;
    *(int *)(param_1 + 0x9e) = 0;
    *(short *)(param_1 + 0x92) = 0;
    *pu1 = 0;
    *pu2 = 0;
  }
  return;
}


/* FUN_00404b00 @ 0x00404b00 */

void __fastcall FUN_00404b00(int param_1)
{
    /* STUB: 71 lines not yet reconstructed */
    return;
}


/* FUN_00404d00 @ 0x00404d00
 * Struct types: UIElement-derived (this)
 * Shows a modal dialog (param_1) — stores in sub_widgets_b[0] (+0x88),
 * calls vtable[0x27] on the dialog, then pumps messages until dismissed.
 * Offset 0x88 = UIElement.sub_widgets_b[0]
 */

short __thiscall FUN_00404d00(UIElement *this,int *param_1)
{
  int u1;

  if (param_1 == NULL) {
    return 0;
  }
  this->sub_widgets_b[0] = (int)param_1;
  FUN_0042c0e0(param_1);
  /* vtable[0x27] call on param_1 (offset 0x9c / 4 = 0x27) */
  ((void (*)(void))((void **)(*param_1))[0x9c / 4])();
  FUN_0042bf70(param_1);
  do {
    u1 = FUN_0041b9c0(DAT_004897c0,(int)param_1);
    if ((char)u1 == '\0') {
      u1 = FUN_0041b9c0(this,(int)param_1);
      if ((char)u1 == '\0') {
        this->sub_widgets_b[0] = 0;
        return DAT_004873c0;
      }
    }
    FUN_004561a0(DAT_004896b0);
  } while( true );
}


/* FUN_00404d80 @ 0x00404d80
 * Struct types: UIElement-derived (this)
 * Shows a non-modal child widget. Stores in sub_widgets_a[15] (+0x84).
 * Offset 0x84 = UIElement.sub_widgets_a[15]
 */

void __thiscall FUN_00404d80(UIElement *this,int *param_1)
{
  if (param_1 != NULL) {
    this->sub_widgets_a[15] = (int)param_1;
    FUN_0042c0e0(param_1);
    /* vtable[0x27] call on param_1 (offset 0x9c / 4 = 0x27) */
    ((void (*)(void))((void **)(*param_1))[0x9c / 4])();
    FUN_0042bf70(param_1);
  }
  return;
}


/* FUN_00404db0 @ 0x00404db0
 * Struct types: UIElement-derived (this)
 * Replaces the child widget at sub_widgets_a[15] (+0x84).
 * Destroys the existing one, then shows the new param_1.
 */

void __thiscall FUN_00404db0(UIElement *this,int *param_1)
{
  if ((int *)this->sub_widgets_a[15] != NULL) {
    FUN_0042c3f0((int *)this->sub_widgets_a[15]);
    this->sub_widgets_a[15] = 0;
  }
  if (param_1 != NULL) {
    FUN_00404d80(this,param_1);
  }
  return;
}


/* FUN_00404de0 @ 0x00404de0 */

void __fastcall FUN_00404de0(int param_1)
{
  *(int *)(param_1 + 0x84) = 0;
}


/* FUN_00404e10 @ 0x00404e10 */

void __fastcall FUN_00404e10(int *param_1)
{
  *param_1 = &PTR_LAB_004721e8;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_00404e90 @ 0x00404e90 */

void FUN_00404e90(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484188,u1,_arg4);
}


/* FUN_00404ee0 @ 0x00404ee0 */

void FUN_00404ee0(void) { return; }


/* FUN_00404f00 @ 0x00404f00 */

/* NOTE: overlapping globals */

void FUN_00404f00(void)
{
  _DAT_00484196 = 0;
  _DAT_00484194 = 0;
}


/* FUN_00404f10 @ 0x00404f10 */

void FUN_00404f10(void)
{
  _atexit(FUN_00404f20);
}


/* FUN_00404f20 @ 0x00404f20 */

void FUN_00404f20(void) { return; }


/* FUN_00404f40 @ 0x00404f40 */

/* NOTE: overlapping globals */

void FUN_00404f40(void)
{
  _DAT_00484192 = 0;
  _DAT_00484190 = 0;
}


/* FUN_00404f50 @ 0x00404f50 */

void FUN_00404f50(void)
{
  _atexit(FUN_00404f60);
}


/* FUN_00404f60 @ 0x00404f60 */

void FUN_00404f60(void) { return; }


/* FUN_00404f80 @ 0x00404f80 */

void FUN_00404f80(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00484198,u1,_arg4);
}


/* FUN_00404fc0 @ 0x00404fc0 */

void FUN_00404fc0(void)
{
  _atexit(FUN_00404fd0);
}


/* FUN_00404fd0 @ 0x00404fd0 */

void FUN_00404fd0(void) { return; }


/* FUN_00404ff0 @ 0x00404ff0 */

/* NOTE: overlapping globals */

void FUN_00404ff0(void)
{
  _DAT_004841a6 = 0;
  _DAT_004841a4 = 0;
}


/* FUN_00405000 @ 0x00405000 */

void FUN_00405000(void)
{
  _atexit(FUN_00405010);
}


/* FUN_00405010 @ 0x00405010 */

void FUN_00405010(void) { return; }


/* FUN_00405030 @ 0x00405030 */

/* NOTE: overlapping globals */

void FUN_00405030(void)
{
  _DAT_004841a2 = 0;
  _DAT_004841a0 = 0;
}


/* FUN_00405040 @ 0x00405040 */

void FUN_00405040(void)
{
  _atexit(FUN_00405050);
}


/* FUN_00405050 @ 0x00405050 */

void FUN_00405050(void) { return; }


/* FUN_00405060 @ 0x00405060
 * Struct types: UIWidget (this — returned from FUN_0041c0f0)
 * Resets the active focus widget on the global DAT_004897c0 object.
 * Offset 0x108 on UIWidget = field_108.
 */

void FUN_00405060(void)
{
  int n1;
  UIWidget *widget;

  if ((DAT_004897c0 != NULL) && (DAT_0047e7a8 != '\0')) {
    ((UIWidget *)DAT_004897c0)->_pad42[2] = 0;  /* TODO: DAT_004897c0 offset 0x44, _pad42 region if UIElement */
    if ((((UIWidget *)DAT_004897c0)->sub_widgets_a[1] != 0) &&  /* TODO: DAT_004897c0 offset 0x4a, sub_widgets_a[1] if UIElement */
       (((n1 = *(int *)(((UIWidget *)DAT_004897c0)->sub_widgets_a[1] + 0x1a), n1 != 0 &&  /* TODO: DAT_004897c0+0x4a->child_list_1 (+0x1A) */
         (*(int *)(n1 + 0xe) != 0)) && (*(int *)**(int **)(n1 + 4) != 0)))) {
      widget = (UIWidget *)FUN_0041c0f0(*(int *)**(int **)(n1 + 4));
      FUN_0041da90(widget,1);
      widget->field_108 = 0;
      ((UIWidget *)DAT_004897c0)->_pad42[2] = widget;  /* TODO: DAT_004897c0 offset 0x44 */
      FUN_00434090(DAT_004897c0,((UIWidget *)DAT_004897c0)->_pad42[2]);  /* TODO: DAT_004897c0 offset 0x44 */
    }
  }
  return;
}


/* FUN_004050d0 @ 0x004050d0 */

int __cdecl FUN_004050d0(int param_1)
{
    /* STUB: 41 lines not yet reconstructed */
    return 0;
}


/* FUN_00405187 @ 0x00405187 */

void FUN_00405187(void)
{
  int _ebp;
  
  FUN_004097c0((int *)(_ebp + -0x28));
}


/* FUN_00405190 @ 0x00405190 */

void __cdecl FUN_00405190(int param_1,int param_2,int param_3)
{
    /* STUB: 66 lines not yet reconstructed */
    return;
}


/* FUN_004052b0 @ 0x004052b0
 * Struct types: UIWidget (this)
 * UIWidget constructor — initializes all extension fields, sets vtable.
 * NOTE: some accesses use param_1 as int* (stride 4), others as byte offsets.
 *   param_1+0x42 (int* stride) = byte 0x108 = field_108
 *   param_1+0x43 = byte 0x10C = active_anim_id
 *   param_1+0x44 = byte 0x110 = cell_count
 *   param_1+0x45 = byte 0x114 = anim_flag_0
 *   param_1+0x11 = byte 0x44 = _pad42[2]
 *   param_1+0x32 = byte 0xC8 = cursor_style_a
 *   param_1[0x41] = byte 0x104 = animation_timer
 */

UIWidget * __fastcall FUN_004052b0(UIWidget *this)
{
  int *_fs;
  int u1;
  int u2;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00405406;
  *_fs = &_seh_prev;
  FUN_0041b6c0(this);
  _seh_state = 0;
  u2 = 0x4052e7;
  FUN_00465a60((int *)&this->scroll_data);
  this->origin_x = 0;
  this->origin_y = 0;
  _seh_state = CONCAT31((unsigned int)((uint)_seh_state >> 8),2);
  this->cell_count = 0;
  this->vtable = (void **)&PTR_FUN_00472420;
  this->active_anim_id = 0;
  this->cell_info_ptr = NULL;
  this->tile_data_ptr = NULL;
  this->timestamp = 0;
  this->pending_frame = 0;
  this->mirror_flag = 0;
  this->level_data_ptr = NULL;
  this->is_interactive = 0;
  this->field_109 = 0;
  this->scrollable_flag = 0;
  this->field_108 = 0;
  this->field_c7 = 0;
  u1 = 1;
  this->auto_focus = 1;
  this->current_frame = (short)0xffff;
  FUN_00401050(&_tmp_37,1);
  FUN_00401050(&_tmp_36,1);
  FUN_00401270(&this->origin_x,u1,u2);
  this->flags = this->flags | 0x1000;
  *(short *)((int)this + 0x44) = (short)0xffff;  /* TODO: offset 0x44, _pad42[2..3] within _pad42 region */
  this->cursor_style_a = 0;
  this->cursor_style_b = 0;
  this->animation_timer = 1;
  FUN_0041da90(this,1);
  this->anim_flag_1 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_0 = 0;
  this->_pad42[0] = 0;
  this->is_visible = 0;
  *_fs = _seh_prev;
  return this;
}


/* FUN_00405420 @ 0x00405420 */

void __fastcall FUN_00405420(int *param_1)
{
    /* STUB: 52 lines not yet reconstructed */
    return;
}


/* FUN_0040553e @ 0x0040553e */

void FUN_0040553e(void) { return; }


/* FUN_0040554c @ 0x0040554c */

void FUN_0040554c(void)
{
  int _ebp;
  
  FUN_00465af0((int *)(*(int *)(_ebp + -0x10) + 0xca));
}


/* FUN_00405564 @ 0x00405564 */

void FUN_00405564(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_00405570 @ 0x00405570
 * Struct types: UIWidget (this)
 * Cleans up a UIWidget — resets current_frame, detaches from parent,
 * destroys child widgets, clears sub_widgets arrays, re-focuses if needed.
 */

void __fastcall FUN_00405570(UIWidget *this)
{
  int *pu1;
  int n2;
  short s3;
  uint u4;

  FUN_00409580(this,'\x01');
  this->current_frame = (short)0xffff;
  FUN_0041d780(this,NULL);
  if (this->parent_ptr != NULL) {
    FUN_0041bd00(this->parent_ptr,(int)this);
  }
  if (this->child_list_2 != NULL) {
    u4 = ((CVector *)this->child_list_2)->count /* CVector: count at +0x0E */ * 4;
    while (3 < u4) {
      u4 = u4 - 4;
      pu1 = *(int **)(*(int *)((CVector *)this->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + u4);
      FUN_0041bd00(this,(int)pu1);
      /* vtable[0] call — destructor */
      ((void (*)(void))((void **)*pu1)[0])(); /* pu1->vtable[0] */
    }
    ((CVector *)this->child_list_2)->count /* CVector: count at +0x0E */ = 0;
  }
  FUN_004068f0(this);
  s3 = 0;
  do {
    n2 = (int)s3;
    s3 = s3 + 1;
    this->sub_widgets_a[n2] = 0;
    this->sub_widgets_b[n2] = 0;
  } while (s3 < 0x10);
  if (((this->auto_focus != '\0') && (DAT_004897c0 != 0)) &&
     (((UIWidget *)DAT_004897c0)->_pad42[2] == (int *)this)) {
    FUN_00405060();
  }
  FUN_0041e260(this);
}


/* FUN_00405630 @ 0x00405630 */

void __thiscall FUN_00405630(SoundPlayer *this,char param_1)
{
  this->sequence_data[31] = param_1;
  if (param_1 != '\0') {
    this->sequence_data[32] = 0x21;
    this->sequence_data[32] = 0x22;
    return;
  }
  this->sequence_data[32] = 0;
  this->sequence_data[32] = 0;
}


/* FUN_00405660 @ 0x00405660 */

int * __thiscall FUN_00405660(UIWidget *this,short *param_1)
{
  int *pn1;
  uint u2;
  int n3;
  
  if ((((param_1[1] < this->rect_left) || (this->rect_right <= param_1[1]))
      || (*param_1 < this->rect_top)) || (this->rect_bottom <= *param_1)) {
    return NULL;
  }
  if (((this->child_list_1 != 0) &&
      (n3 = ((CVector *)this->child_list_1)->count, n3 != 0)) && (u2 = 1, n3 != 0))
  {
    n3 = 4;
    do {
      pn1 = FUN_0041c2f0(*(void **)(*(int *)((CVector *)this->child_list_1)->data[0] + -4 + n3),
                            param_1);
      if (pn1 != NULL) {
        return pn1;
      }
      n3 = n3 + 4;
      u2 = u2 + 1;
    } while (u2 <= ((CVector *)this->child_list_1)->count);
  }
  if ((this->cell_count != 0) && (this->cell_info_ptr != 0)) {
    u2 = FUN_0041a9a0((void *)&this->scroll_data,(short *)&this->rect_top,param_1,
                         this->mirror_flag);
    return (int *)(((char)u2 == '\0') - 1 & (uint)this);
  }
  return NULL;
}


/* FUN_00405730 @ 0x00405730
 * Struct types: UIWidget (this)
 * Loads animation cell info from level_data_ptr, sets cell_info_ptr,
 * calculates bounding box from cell dimensions and origin scale.
 * Offsets: 0xf6=level_data_ptr, 0x10e=current_frame, 0xfa=cell_info_ptr,
 *          0x110=cell_count, 0xca=scroll_data, 0xee=origin_y, 0xea=origin_x,
 *          0x32=pos_h, 0x26=pos_x, 0x2a=pos_y, 0x2e=pos_w
 * NOTE: 0xe8 is within scroll_data (0xCA+0x1E), and 0x82 is within sub_widgets_a.
 */

void __fastcall FUN_00405730(UIWidget *this)
{
  int n1;
  int n2;
  short *ps3;
  int *_fs;
  int v24;
  int v20;
  int v1c;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00405885;
  *_fs = &_seh_prev;
  n2 = this->sub_widgets_b[*(short *)((int)this->level_data_ptr + 8 +
                            this->current_frame * 2) - 1];  /* TODO: level_data_ptr sub-struct, frame table at +0x08 */
  this->cell_info_ptr = (void *)n2;
  if (n2 != 0) {
    if (*(short *)(n2 + 4) < this->cell_count) {
      this->cell_count = *(short *)(n2 + 4);
    }
    if ((this->cell_count != 0) && (n2 != 0)) {
      n1 = *(int *)(n2 + 8 + (short)(this->cell_count + -1) * 4);
      ps3 = (short *)(n2 + n1);
      if (n1 == 0) {
        ps3 = NULL;
      }
      FUN_00465c20((int *)&this->scroll_data,n2);
      *(short *)((int)this + 0xe8) = this->cell_count;  /* TODO: offset 0xE8, scroll_data[0x1E] within scroll_data region */
      ((void (*)(void))((void **)(*(int *)&this->scroll_data))[0x80 / 4])(); /* scroll_data obj->vtable[32] */
      if (ps3 != NULL) {
        v20 = 0;
        v24 = 0;
        _seh_state = 0;
        n2 = (int)*ps3 * this->origin_y * 0x100;
        v18 = (n2 >> 8) - (n2 >> 0x1f) >> 1;
        n2 = (int)ps3[1] * this->origin_x * 0x100;
        v14 = (n2 >> 8) - (n2 >> 0x1f) >> 1;
        FUN_0041cde0(this,&v24);
        v1c = v24 + v14;
        v14 = v24 - v14;
        this->pos_h = v18 + v20;
        this->pos_x = v14;
        this->pos_y = v20 - v18;
        this->pos_w = v1c;
        FUN_0041d490((int)this);
        _seh_state = 0xffffffff;
        FUN_0040588f();
      }
    }
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0040588f @ 0x0040588f */

void FUN_0040588f(void) { return; }


/* FUN_004058a0 @ 0x004058a0
 * Struct types: UIWidget (this)
 * Returns tile_data_ptr value if non-null, otherwise 0.
 */

int __fastcall FUN_004058a0(UIWidget *this)
{
  short *pu1;

  pu1 = this->tile_data_ptr;
  if (pu1 == NULL) {
    return 0;
  }
  return CONCAT22((short)((uint)pu1 >> 0x10),*pu1);
}


/* FUN_004058c0 @ 0x004058c0 */

void __thiscall FUN_004058c0(GameWidget *this,short param_1)
{
  int n1;
  int n2;
  int n3;
  int n4;
  int v10;
  int vc;
  int v8;
  
  if ((param_1 != 0) || (this->cell_count != 0)) {
    n4 = 0;
    n3 = 0;
    v10 = 0;
    v8 = 0;
    if (this->cell_count != 0) {
      FUN_0041cb20(this);
    }
    if (this->cell_count != 0) {
      n1 = (intptr_t)this->cell_count;
      n3 = this->tile_data_ptr;
      n2 = n3 + n1 * 0xe;
      n4 = *(short *)(n3 + -2 + n1 * 0xe) * -0x100;
      n3 = *(short *)(n3 + -4 + n1 * 0xe) * -0x100;
      v10 = *(short *)(n2 + -6) * -0x100;
      v8 = *(short *)(n2 + -8) * -0x100;
    }
    if (param_1 != 0) {
      if (param_1 < 0) {
        param_1 = 1;
      }
      else if (*this->tile_data_ptr < param_1) {
        param_1 = *this->tile_data_ptr;
      }
    }
    this->cell_count = param_1;
    if (param_1 != 0) {
      FUN_00405730(this);
      n2 = this->cell_count * 0xe + this->tile_data_ptr;
      n4 = n4 + *(short *)(n2 + -2) * 0x100;
      n3 = n3 + *(short *)(n2 + -4) * 0x100;
      v10 = v10 + *(short *)(n2 + -6) * 0x100;
      v8 = v8 + *(short *)(n2 + -8) * 0x100;
    }
    n2 = this->origin_x;
    v10 = v10 * this->origin_y >> 8;
    vc = n4 * this->origin_y >> 8;
    n4 = v8 * n2 >> 8;
    if (this->mirror_flag != '\0') {
      v10 = -v10;
      vc = -vc;
    }
    this->pos_y = this->pos_y + v10;
    this->pos_h = this->pos_h + v10;
    this->pos_x = this->pos_x + n4;
    this->pos_w = this->pos_w + n4;
    FUN_0041d490((intptr_t)this);
    FUN_0041c200(this,vc,n3 * n2 >> 8,0);
    if (param_1 != 0) {
      FUN_0041cb20(this);
    }
  }
  return;
}


/* FUN_00405a80 @ 0x00405a80 */

void FUN_00405a80(void)
{
  int u1;
  int _arg4;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004841e8,u1,_arg4);
}


/* FUN_00405ad0 @ 0x00405ad0 */

void FUN_00405ad0(void) { return; }


/* FUN_00405ae0 @ 0x00405ae0
 * Struct types: UIWidget (param_1)
 * Processes animation ticks — advances frames, handles loop/stop/bounce modes,
 * recursively processes child widgets.
 * param_1[0x45] = byte 0x114 = anim_flag_0
 * param_1[0x44] = byte 0x110 = cell_count
 */

void __cdecl FUN_00405ae0(UIWidget *this,short param_2,char param_3)
{
  UIWidget *child;
  short s2;
  short s3;
  uint u4;
  int n5;

  s2 = 0;
  do {
    if ((this->flags >> 4 & 1) == 0) {
L_00405bd3:
      if (((this->child_list_2 != NULL) &&
          (n5 = ((CVector *)this->child_list_2)->count /* CVector: count at +0x0E */, n5 != 0)) &&
         (u4 = 1, n5 != 0)) {
        n5 = 4;
        do {
          child = *(UIWidget **)(*(int *)((CVector *)this->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + -4 + n5);
          if (child->is_visible == '\0') {
            FUN_00405ae0(child,param_2,'\0');
          }
          n5 = n5 + 4;
          u4 = u4 + 1;
        } while (u4 <= ((CVector *)this->child_list_2)->count /* CVector: count at +0x0E */);
      }
      return;
    }
    s3 = 0;
    while( true ) {
      if (*this->tile_data_ptr <= s3) break;
      s2 = s2 + this->tile_data_ptr[s3 * 7 + 7];
      if (param_2 < s2) {
        s3 = s3 + 1;
        goto L_00405bc2;
      }
      s3 = s3 + 1;
    }
    if (this->anim_flag_0 != '\0') {
      /* vtable[0] call — destructor */
      ((void (*)(void))this->vtable[0])(); /* vtable[0] */
      return;
    }
    if (this->anim_flag_1 != '\0') {
      FUN_0041dad0(this,0,'\0');
      FUN_0041da90(this,0);
      /* vtable[0x26] call (offset 0x98 / 4) */
      (*(void (*)(void))this->vtable[0x26])();  /* vtable[0x26] (offset 0x98 / 4) */
      goto L_00405bd3;
    }
    if (this->anim_flag_2 != '\0') {
      s3 = *this->tile_data_ptr;
      this->anim_flag_3 = 1;
      FUN_0041da90(this,0);
      (*(void (*)(void))this->vtable[0x26])();  /* vtable[0x26] (offset 0x98 / 4) */
L_00405bc2:
      if (this->cell_count != s3) {
        FUN_004058c0(this,s3);
      }
      goto L_00405bd3;
    }
    if (param_3 != '\0') {
      FUN_00405d30(this,this->pending_frame);
      return;
    }
  } while( true );
}


/* FUN_00405c40 @ 0x00405c40 */

/* NOTE: overlapping globals */

void FUN_00405c40(void)
{
  _DAT_004841f6 = 0;
  _DAT_004841f4 = 0;
}


/* FUN_00405c50 @ 0x00405c50 */

void FUN_00405c50(void)
{
  _atexit(FUN_00405c60);
}


/* FUN_00405c60 @ 0x00405c60 */

void FUN_00405c60(void) { return; }


/* FUN_00405c80 @ 0x00405c80 */

/* NOTE: overlapping globals */

void FUN_00405c80(void)
{
  _DAT_004841f2 = 0;
  _DAT_004841f0 = 0;
}


/* FUN_00405c90 @ 0x00405c90 */

void FUN_00405c90(void)
{
  _atexit(FUN_00405ca0);
}


/* FUN_00405ca0 @ 0x00405ca0 */

void FUN_00405ca0(void) { return; }


/* FUN_00405cb0 @ 0x00405cb0
 * Struct types: UIWidget (this)
 * Animation timer tick — calculates elapsed frames since last timestamp,
 * then calls FUN_00405ae0 to advance animation.
 * param_1+0x44 (int* stride) = byte offset 0x110 = cell_count
 */

void __fastcall FUN_00405cb0(UIWidget *this)
{
  DWORD dw1;
  short s2;

  if ((this->parent_ptr == NULL) && (this->level_data_ptr != NULL)) {
    dw1 = GetTickCount();
    if (this->timestamp == 0) {
      this->cell_count = 0;
      s2 = 1;
    }
    else {
      s2 = (short)((ulonglong)(DAT_004890a4 * dw1) / 1000) -
              (short)((ulonglong)(uint)(DAT_004890a4 * this->timestamp) / 1000);
    }
    FUN_00405ae0(this,s2,'\x01');
  }
  return;
}


/* FUN_00405d30 @ 0x00405d30 */

void __thiscall FUN_00405d30(UIWidget *this,short param_1)
{
  short *ps1;
  short s2;
  void *self;
  DWORD dw3;
  short s4;
  uint u5;
  int n6;
  
  FUN_00460a80(DAT_004838c0,0x74727073);
  this->anim_flag_3 = 0;
  this->current_frame = param_1;
  ps1 = (short *)(this->level_data_ptr + 8 + param_1 * 2);
  s2 = *ps1;
  if (s2 < 1) {
    s4 = 1;
  }
  else {
    s4 = *(short *)(this->level_data_ptr + 0x18);
    if (s2 <= s4) goto L_00405d84;
  }
  *ps1 = s4;
  s2 = s4;
L_00405d84:
  FUN_004058c0(this,0);
  FUN_00406980(this,s2);
  this->tile_data_ptr = (short *)this->sub_widgets_a[s2 - 1];  /* offset 0x46 + (s2-1)*4 */
  this->cell_info_ptr = (void *)this->sub_widgets_b[s2 - 1];  /* offset 0x86 + (s2-1)*4 */
  FUN_004058c0(this,1);
  if ((this->child_list_2 != 0) &&
     (u5 = 1, ((CVector *)this->child_list_2)->count != 0)) {
    n6 = 4;
    do {
      self = *(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n6);
      if (((UIWidget *)self)->is_visible == '\0') {
        FUN_00405d30((UIWidget *)self,param_1);
      }
      n6 = n6 + 4;
      u5 = u5 + 1;
    } while (u5 <= ((CVector *)this->child_list_2)->count);
  }
  dw3 = GetTickCount();
  this->timestamp = dw3;
}


/* FUN_00405e10 @ 0x00405e10 */

char __thiscall FUN_00405e10(void *this,short param_1,char param_2)
{
    /* STUB: 105 lines not yet reconstructed */
    return 0;
}


/* FUN_004060c0 @ 0x004060c0 */

void __thiscall FUN_004060c0(void *this,int param_1,int param_2,int param_3,char param_4)
{
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00406117;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00406130(this,param_2,param_1,param_3,param_4);
  _seh_state = 0xffffffff;
  FUN_0040610f();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0040610f @ 0x0040610f */

void FUN_0040610f(void) { return; }


/* FUN_00406130 @ 0x00406130 */

void __thiscall FUN_00406130(void *this,int param_1,int param_2,int param_3,char param_4)
{
    /* STUB: 101 lines not yet reconstructed */
    return;
}


/* FUN_004063a8 @ 0x004063a8 */

void FUN_004063a8(void) { return; }


/* FUN_004063b0 @ 0x004063b0 */

void FUN_004063b0(void) { return; }


/* FUN_004063b8 @ 0x004063b8 */

void FUN_004063b8(void) { return; }


/* FUN_004063c0 @ 0x004063c0 */

void FUN_004063c0(void) { return; }


/* FUN_004063c8 @ 0x004063c8 */

void FUN_004063c8(void) { return; }


/* FUN_004063d0 @ 0x004063d0 */

void FUN_004063d0(void) { return; }


/* FUN_004063d8 @ 0x004063d8 */

void FUN_004063d8(void) { return; }


/* FUN_004063e0 @ 0x004063e0 */

void FUN_004063e0(void) { return; }


/* FUN_004063f2 @ 0x004063f2 */

void FUN_004063f2(void) { return; }


/* FUN_00406400 @ 0x00406400 */

void __cdecl FUN_00406400(int *param_1,int param_2,int param_3)
{
  *param_1 = param_3 * param_2 >> 8;
}


/* FUN_00406420 @ 0x00406420 */

void __fastcall FUN_00406420(int param_1)
{
    /* STUB: 135 lines not yet reconstructed */
    return;
}


/* FUN_004066fc @ 0x004066fc */

void FUN_004066fc(void) { return; }


/* FUN_00406704 @ 0x00406704 */

void FUN_00406704(void) { return; }


/* FUN_00406716 @ 0x00406716 */

void FUN_00406716(void) { return; }


/* FUN_00406720 @ 0x00406720 */

void __thiscall FUN_00406720(UIWidget *this,short param_1)
{
  uint u1;
  
  if ((param_1 == 0) || (this->active_anim_id == param_1)) {
    this->anim_flag_0 = 0;
    this->anim_flag_2 = 0;
    this->anim_flag_1 = 0;
    this->anim_flag_3 = 0;
    FUN_00405d30(this,this->current_frame);
  }
  else {
    this->current_frame = 0xffff;
    u1 = this->flags >> 4;
    if ((u1 & 1) != 0) {
      FUN_0041da90(this,0);
    }
    FUN_004058c0(this,0);
    FUN_004068f0(this);
    this->active_anim_id = param_1;
    FUN_004067f0(this);
    this->anim_flag_0 = 0;
    this->anim_flag_2 = 0;
    this->anim_flag_1 = 0;
    this->anim_flag_3 = 0;
    FUN_00405d30(this,this->pending_frame);
    if ((u1 & 1) != 0) {
      FUN_0041da90(this,1);
      return;
    }
  }
  return;
}


/* FUN_004067f0 @ 0x004067f0 */

void * __fastcall FUN_004067f0(void *param_1)
{
    /* STUB: 3 lines not yet reconstructed */
    return;
}


/* FUN_004068f0 @ 0x004068f0 */

void __fastcall FUN_004068f0(void *param_1)
{
    /* STUB: 23 lines not yet reconstructed */
    return;
}


/* FUN_00406980 @ 0x00406980 */

void __thiscall FUN_00406980(void *this,short param_1)
{
    /* STUB: 67 lines not yet reconstructed */
    return;
}


/* FUN_00406b20 @ 0x00406b20 */

void __thiscall FUN_00406b20(SoundPlayer *this,short param_1)
{
  uint u1;
  int *pn2;
  int n3;
  
  if ((this->sequence_data[49] == -1) ||
     (*(short *)(this->sequence_data[43] + 8 + this->sequence_data[49] * 2) != param_1)) {
    n3 = (int)param_1;
    u1 = (uint)((UIWidget *)this)->sub_widgets_a[n3 - 1];  /* offset 0x46 + (n3-1)*4; TODO: this typed as SoundPlayer but accesses UIWidget fields */
    if (u1 != 0) {
      if (*(char *)((intptr_t)this + 0x42) == '\0') {  /* _pad42[0] */
        pn2 = this->sequence_data[43];  /* TODO: maps to UIWidget offset 0xF4 */
        if ((*pn2 == 0) || (*(char *)(*pn2 + 6) == '\0')) {
          FUN_0046b490(DAT_004838c0,*(int *)((int)pn2 + n3 * 8 + 0x12),u1);  /* TODO: stride-8 array at pn2+0x12 */
        }
        else {
          FUN_0046b4e0(DAT_004838c0,*(uint *)((int)pn2 + n3 * 8 + 0x12),u1);  /* TODO: stride-8 array at pn2+0x12 */
        }
      }
      ((UIWidget *)this)->sub_widgets_a[n3 - 1] = 0;  /* offset 0x46 + (n3-1)*4 */
    }
    u1 = (uint)((UIWidget *)this)->sub_widgets_b[n3 - 1];  /* offset 0x86 + (n3-1)*4 */
    if (u1 != 0) {
      if (*(char *)((intptr_t)this + 0x42) == '\0') {  /* _pad42[0] */
        pn2 = this->sequence_data[43];  /* TODO: maps to UIWidget offset 0xF4 */
        if (((*pn2 == 0) || (*(char *)(*pn2 + 6) == '\0')) &&
           (this->sequence_data[31] != '\0')) {
          FUN_0046b620(DAT_004838c0,*(int *)((int)pn2 + n3 * 8 + 0x12),u1);  /* TODO: stride-8 array at pn2+0x12 */
        }
        else {
          FUN_0046b680(DAT_004838c0,*(uint *)((int)pn2 + n3 * 8 + 0x12),u1);  /* TODO: stride-8 array at pn2+0x12 */
        }
      }
      else {
        FUN_0046f5f0(u1);
      }
      ((UIWidget *)this)->sub_widgets_b[n3 - 1] = 0;  /* offset 0x86 + (n3-1)*4 */
      if (this->sequence_data[39] == u1) {
        FUN_00465c20((void *)&this->sequence_data[32],0);
      }
    }
  }
  return;
}


/* FUN_00406ca0 @ 0x00406ca0 */

void __thiscall FUN_00406ca0(GameWidget *this,char param_1,char param_2)
{
  char c1;
  void *self;
  int n2;
  uint u3;
  char v5;
  
  v5 = (byte)(this->flags >> 4) & 1;
  FUN_0041da90(this,0);
  c1 = *(char *)(this->level_data_ptr + 5);
  if ((c1 != '\0') && (c1 != param_1)) {
    *(char *)(this->level_data_ptr + 5) = param_1;
    FUN_00406db0(this);
    FUN_0041cad0(this);
  }
  if (((this->child_list_2 != 0) &&
      (n2 = ((CVector *)this->child_list_2)->count, n2 != 0)) && (u3 = 1, n2 != 0))
  {
    n2 = 4;
    do {
      self = *(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n2);
      FUN_00406d60(self,param_1);
      if (param_2 != '\0') {
        FUN_00406ca0(self,param_1,'\x01');
      }
      n2 = n2 + 4;
      u3 = u3 + 1;
    } while (u3 <= ((CVector *)this->child_list_2)->count);
  }
  if (this->parent_ptr == 0) {
    FUN_00406d60(this,param_1);
  }
  FUN_0041da90(this,v5);
}


/* FUN_00406d60 @ 0x00406d60 */

void __thiscall FUN_00406d60(GameWidget *this,char param_1)
{
  char c1;
  uint u2;
  
  u2 = this->flags;
  FUN_0041da90(this,0);
  c1 = *(char *)(this->level_data_ptr + 6);
  if ((c1 != '\0') && (param_1 != c1)) {
    *(char *)(this->level_data_ptr + 6) = param_1;
    FUN_00406db0(this);
    FUN_0041cad0(this);
  }
  FUN_0041da90(this,(byte)(u2 >> 4) & 1);
}


/* FUN_00406db0 @ 0x00406db0 */

void __fastcall FUN_00406db0(void *param_1)
{
    /* STUB: 78 lines not yet reconstructed */
    return;
}


/* FUN_00406fc0 @ 0x00406fc0
 * Struct types: UIWidget (param_1, param_2)
 * Tests intersection of two UIWidgets' bounding rectangles, then performs
 * pixel-level collision check via scroll_data if rects overlap.
 * Offsets: 0x1E=rect_top, 0x20=rect_left, 0x22=rect_bottom, 0x24=rect_right,
 *          0x0A=is_visible, 0xCA=scroll_data, 0x102=mirror_flag
 */

char __cdecl FUN_00406fc0(UIWidget *param_1,UIWidget *param_2)
{
  short s1;
  char u2;
  short s3;
  short s4;

  if ((param_1 != NULL) && (param_2 != NULL)) {
    s4 = param_2->rect_bottom;
    if (param_1->rect_bottom <= param_2->rect_bottom) {
      s4 = param_1->rect_bottom;
    }
    s3 = param_2->rect_top;
    s1 = param_1->rect_top;
    if (s3 <= s1) {
      s3 = s1;
    }
    if (s3 <= s4) {
      s4 = param_2->rect_right;
      if (param_1->rect_right <= param_2->rect_right) {
        s4 = param_1->rect_right;
      }
      s3 = param_2->rect_left;
      if (param_2->rect_left <= param_1->rect_left) {
        s3 = param_1->rect_left;
      }
      if (((s3 <= s4) && (param_1->is_visible == '\0')) &&
         (param_2->is_visible == '\0')) {
        u2 = FUN_0041a150(&param_1->scroll_data,&param_1->rect_top,
                             param_1->mirror_flag,&param_2->scroll_data,
                             &param_2->rect_top,param_2->mirror_flag);
        return u2;
      }
    }
  }
  return 0;
}


/* FUN_00407070 @ 0x00407070
 * Struct types: UIWidget (param_1), UIElement (siblings via parent_widget->child_list_1)
 * Searches sibling widgets (after this one in parent's child list) for
 * one that overlaps this widget's bounding rect.
 * Offsets: 0x0C=parent_widget, 0x1A=child_list_1, 0x10=field_10
 */

int __fastcall FUN_00407070(UIWidget *this)
{
  int n1;
  char c2;
  short s3;
  int n4;
  uint u5;

  s3 = FUN_0041e020(this);
  n4 = (int)((UIElement *)this->parent_widget)->child_list_1;  /* parent_widget->child_list_1 */
  if ((n4 != 0) && (u5 = (int)s3 + 1, u5 <= *(uint *)(n4 + 0xe))) {  /* child_list_1->count */
    n4 = u5 * 4;
    do {
      n1 = *(int *)(**(int **)((int)((UIElement *)this->parent_widget)->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + -4 + n4);
      if (*(char *)(n1 + 0x10) != '\0') {  /* field_10 on UIElement */
        c2 = FUN_00406fc0((UIWidget *)this,(UIWidget *)n1);
        if (c2 != '\0') {
          return n1;
        }
      }
      n4 = n4 + 4;
      u5 = u5 + 1;
    } while (u5 <= *(uint *)((int)((UIElement *)this->parent_widget)->child_list_1 + 0xe) /* CVector: count at +0x0E */);
  }
  return 0;
}


/* FUN_004070e0 @ 0x004070e0 */

void __thiscall FUN_004070e0(GameWidget *this,char param_1,short param_2)
{
  short s1;
  short s2;
  void *self;
  int n3;
  bool b4;
  int u5;
  int _arg3;
  char c6;
  uint v8;
  
  if (this->mirror_flag != param_1) {
    this->mirror_flag = param_1;
    if ((this->child_list_2 != 0) &&
       (n3 = ((CVector *)this->child_list_2)->count, n3 != 0)) {
      v8 = 1;
      s1 = this->rect_right;
      s2 = this->rect_left;
      if (n3 != 0) {
        n3 = 4;
        do {
          self = *(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -4 + n3);
          b4 = ((GameWidget *)self)->mirror_flag == '\0';
          n3 = n3 + 4;
          _arg3 = CONCAT31((unsigned int)((uint)this->child_list_2 >> 8),b4);
          FUN_004070e0((GameWidget *)self,b4,
                       ((short)((int)s1 + (int)s2 >> 1) -
                       (short)((intptr_t)((GameWidget *)self)->rect_right +
                               (intptr_t)((GameWidget *)self)->rect_left >> 1)) * 2);
          v8 = v8 + 1;
        } while (v8 <= ((CVector *)this->child_list_2)->count);
      }
    }
    c6 = '\x01';
    u5 = 0;
    FUN_00401050(&_tmp_38,0);
    FUN_00401ba0(&_tmp_37,param_2);
    FUN_0041d3a0(this,u5,_arg3,c6);
  }
  return;
}


/* FUN_004071c0 @ 0x004071c0 */

void __thiscall FUN_004071c0(DialogWidget *this,int param_1,int param_2,ushort param_3)
{
  int u1;
  longlong l2;
  int n3;
  int n4;
  DWORD dw5;
  DWORD dw6;
  int n7;
  uint u8;
  int *_fs;
  int v20;
  int v1c;
  short v16;
  int v11;
  char uStack_d;
  void *_handler;
  int v8;
  
  u1 = *_fs;
  _handler = &L_00407329;
  uStack_d = (char)((uint)u1 >> 0x18);
  *_fs = (int)&v11 + 1;
  v1c = 0;
  v20 = 0;
  v8 = 2;
  v11 = CONCAT31((unsigned int)u1,(char)(this->flags >> 4)) & 0xffffff01;
  FUN_0041da90(this,0);
  FUN_0041cde0(this,&v20);
  u8 = (uint)param_3;
  n3 = param_2 - v1c;
  v16 = 1;
  n4 = param_1 - v20;
  if (param_3 != 0) {
    do {
      v1c = v1c + n3 / (int)u8;
      v20 = v20 + n4 / (int)u8;
      FUN_0041d3a0(this,v1c,v20,'\0');
      dw5 = GetTickCount();
      l2 = (longlong)DAT_004890a4;
      dw6 = GetTickCount();
      n7 = (int)(((longlong)(int)dw6 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
      while (n7 == (int)(((int)dw5 * l2 & 0xffffffffU) / 1000)) {
        FUN_00431160(this->field_06,'\0');
        dw6 = GetTickCount();
        n7 = (int)(((longlong)(int)dw6 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
      }
      FUN_00431160(this->field_06,'\0');
      v16 = v16 + 1;
    } while ((int)v16 <= (int)u8);
  }
  FUN_0041d3a0(this,param_2,param_1,'\0');
  FUN_0041da90(this,(byte)v11);
  v8 = (v8 & ~0xFF) | 1;
  FUN_00407319();
  v8 &= ~0xFF;
  FUN_00407321();
  v8 = 0xffffffff;
  FUN_00407333();
  *_fs = CONCAT13(uStack_d,(((v11) >> 8) & 0xFFFFFF));
}


/* FUN_00407319 @ 0x00407319 */

void FUN_00407319(void) { return; }


/* FUN_00407321 @ 0x00407321 */

void FUN_00407321(void) { return; }


/* FUN_00407333 @ 0x00407333 */

void FUN_00407333(void) { return; }


/* FUN_00407340 @ 0x00407340 */

char FUN_00407340(int param_1,char param_2,char param_3,int param_4,char param_5)
{
  char u1;
  ushort *pu2;
  
  u1 = 0;
  pu2 = FUN_0042c860(DAT_004838c0,param_1);
  if (pu2 != NULL) {
    u1 = FUN_004073a0((short *)pu2,param_2,param_3,param_4,param_5);
    FUN_0042c8d0(DAT_004838c0,param_1,(uint)pu2);
  }
  return u1;
}


/* FUN_004073a0 @ 0x004073a0 */

char FUN_004073a0(short *param_1,char param_2,char param_3,int param_4,char param_5)
{
  SHORT sz1;
  SHORT sz2;
  SHORT sz3;
  DWORD dw4;
  uint u5;
  ushort *pu6;
  short s7;
  int *_fs;
  int v2c;
  int v28;
  int v24;
  ushort *v20;
  int v1c;
  void *v18;
  char v12;
  char v11;
  int _seh_prev;
  void *_handler;
  uint _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00407617;
  *_fs = &_seh_prev;
  v12 = 0;
  sz1 = GetAsyncKeyState(2);
  sz2 = GetAsyncKeyState(4);
  sz3 = GetAsyncKeyState(1);
  v28 = 0;
  v2c = 0;
  _seh_state = 0;
  v11 = (-1 < sz1 && -1 < sz2) && -1 < sz3;
  dw4 = GetTickCount();
  v1c = (int)(((longlong)(int)dw4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
  if (param_3 == '\0') {
    FUN_00403030(&v2c,&v24,&DAT_004841e8);
    _seh_state = _seh_state & 0xffffff00;
    FUN_0040760f();
  }
  else {
    FUN_0041ce10(v18,&v2c,param_4);
  }
  v20 = FUN_0042c5b0(param_1,&v2c,NULL);
  if (v20 != NULL) {
    s7 = 0;
    if (0 < *param_1) {
      do {
        if ((param_5 == '\0') && (s7 != 0)) {
          if (param_2 == '\0') {
            FUN_00431160((void *)((UIElement *)v18)->field_06,'\0');  /* field_06 on UIElement */
          }
          else {
            dw4 = GetTickCount();
            u5 = (int)(((longlong)(int)dw4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                    v1c;
            while (u5 < 5) {
              FUN_00431160((void *)((UIElement *)v18)->field_06,'\0');  /* field_06 on UIElement */
              dw4 = GetTickCount();
              u5 = (int)(((longlong)(int)dw4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000) -
                      v1c;
            }
            dw4 = GetTickCount();
            v1c = (int)(((longlong)(int)dw4 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
          }
        }
        sz1 = GetAsyncKeyState(2);
        sz2 = GetAsyncKeyState(4);
        sz3 = GetAsyncKeyState(1);
        if ((sz1 < 0 || sz2 < 0) || sz3 < 0) {
          if (v11 != '\0') {
            v12 = 1;
            if (s7 < *param_1) {
              do {
                pu6 = v20 + s7 * 0xd;
                FUN_0041d3a0(v18,*(int *)(pu6 + 2),*(int *)pu6,'\0');
                if ((char)param_1[1] != '\0') {
                  FUN_00406130(v18,*(int *)(pu6 + 6),*(int *)(pu6 + 4),0,'\x01');
                }
                s7 = s7 + 1;
              } while (s7 < *param_1);
            }
            break;
          }
        }
        else if (v11 == '\0') {
          v11 = '\x01';
        }
        pu6 = v20 + s7 * 0xd;
        FUN_0041d2d0(v18,(int *)pu6,'\0');
        if ((char)param_1[1] != '\0') {
          FUN_00406130(v18,*(int *)(pu6 + 6),*(int *)(pu6 + 4),0,'\x01');
        }
        s7 = s7 + 1;
      } while (s7 < *param_1);
    }
    FUN_0046f5f0((uint)v20);
  }
  _seh_state = 0xffffffff;
  FUN_00407621();
  *_fs = _seh_prev;
  return v12;
}


/* FUN_0040760f @ 0x0040760f */

void FUN_0040760f(void) { return; }


/* FUN_00407621 @ 0x00407621 */

void FUN_00407621(void) { return; }


/* FUN_00407630 @ 0x00407630 */

char __thiscall
FUN_00407630(void *this,short param_1,ushort *param_2,ushort *param_3,ushort *param_4,
            ushort *param_5)
{
    /* STUB: 172 lines not yet reconstructed */
    return 0;
}


/* FUN_00407b10 @ 0x00407b10 */

char __thiscall FUN_00407b10(void *this,short param_1,ushort *param_2)
{
    /* STUB: 96 lines not yet reconstructed */
    return 0;
}


/* FUN_00407df0 @ 0x00407df0 */

char __thiscall FUN_00407df0(UIWidget *this,short param_1,int param_2)
{
  short u1;
  short s2;
  uint u3;
  bool b4;
  bool b5;
  SHORT sz6;
  SHORT sz7;
  SHORT sz8;
  short s9;
  int n10;
  short *ps11;
  DWORD dw12;
  int _extra;
  uint u13;
  int _extra;
  char uStack_12;
  short uStack_c;
  short uStack_a;
  int v8;
  int v4;
  
  u1 = this->pending_frame;
  s2 = this->current_frame;
  uStack_12 = 0;
  sz6 = GetAsyncKeyState(2);
  sz7 = GetAsyncKeyState(4);
  sz8 = GetAsyncKeyState(1);
  b4 = (-1 < sz6 && -1 < sz7) && -1 < sz8;
  u3 = this->flags;
  FUN_0041da90(this,0);
  this->anim_flag_0 = 0;
  this->anim_flag_2 = 0;
  this->anim_flag_1 = 0;
  this->anim_flag_3 = 0;
  FUN_00405d30(this,param_1);
  this->pending_frame = param_1;
  uStack_c = 0;
  uStack_a = 0;
  n10 = FUN_0043a6b0(DAT_004838c0,param_2);
  uStack_c = (short)n10;
  uStack_a = (short)((uint)n10 >> 0x10);
  FUN_004090e0(n10);
  FUN_004564c0();
  FUN_00433050((int *)CONCAT22(uStack_a,uStack_c));
  ps11 = FUN_00434300((int *)CONCAT22(uStack_a,uStack_c));
  FUN_00409140(ps11);
  s9 = FUN_0042b700();
  FUN_0045d780(ps11,s9);
  FUN_0045d720((int)ps11,3);
  FUN_004564c0();
  dw12 = GetTickCount();
  v8 = (int)(((longlong)(int)dw12 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
  v4 = v8 + 1000;
  b5 = FUN_0045d930((int)ps11);
  s9 = (short)CONCAT31(_extra,b5);
  do {
    if ((s9 == 0) || (v4 <= v8)) goto L_00407fdc;
    u13 = FUN_0045d8e0((int)ps11);
    if ((short)u13 < 0) goto L_00407fdc;
    FUN_004564c0();
    FUN_004058c0(this,(short)((int)((uint)(ushort)((short)u13 >> 0xf) << 0x10 | u13 & 0xffff)
                             % 5) + 1);
    FUN_00430860();
    dw12 = GetTickCount();
    v8 = (int)(((longlong)(int)dw12 * (longlong)DAT_004890a4 & 0xffffffffU) / 1000);
    sz6 = GetAsyncKeyState(2);
    sz7 = GetAsyncKeyState(4);
    sz8 = GetAsyncKeyState(1);
    if ((sz6 < 0 || sz7 < 0) || sz8 < 0) {
      if (b4) {
        uStack_12 = 1;
L_00407fdc:
        FUN_00434490((int)ps11);
        FUN_00433420((int *)CONCAT22(uStack_a,uStack_c));
        FUN_00433270((int *)&uStack_c);
        this->pending_frame = u1;
        FUN_0041da90(this,(byte)(u3 >> 4) & 1);
        this->anim_flag_0 = 0;
        this->anim_flag_2 = 0;
        this->anim_flag_1 = 0;
        this->anim_flag_3 = 0;
        FUN_00405d30(this,s2);
        return uStack_12;
      }
    }
    else if (!b4) {
      b4 = true;
    }
    b5 = FUN_0045d930((int)ps11);
    s9 = (short)CONCAT31(_extra,b5);
  } while( true );
}


/* FUN_00408070 @ 0x00408070 */

void * __cdecl FUN_00408070(int param_1)
{
  int n1;
  int *pn2;
  void *this;
  int n3;
  uint u4;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00408148;
  *_fs = &_seh_prev;
  _seh_state = 0;
  n1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  if (((((((UIWidget *)DAT_004897c0)->rect_left <= ((unsigned short)((param_1) >> 16))) &&
        (((unsigned short)((param_1) >> 16)) < ((UIWidget *)DAT_004897c0)->rect_right)) &&
       (((UIWidget *)DAT_004897c0)->rect_top <= (short)param_1)) &&
      (((short)param_1 < ((UIWidget *)DAT_004897c0)->rect_bottom && (*(int *)(n1 + 0x1a) != 0)))) &&
     (u4 = 1, *(int *)(*(int *)(n1 + 0x1a) + 0xe) != 0)) {
    n3 = 4;
    do {
      this = *(void **)(**(int **)(*(int *)(n1 + 0x1a) + 4) + -4 + n3);
      if (((UIWidget *)DAT_004897c0)->sub_widgets_a[1] != this) {
        pn2 = FUN_0041c2f0(this,(short *)&param_1);
        if (((pn2 != NULL) && (((UIWidget *)pn2)->level_data_ptr != 0)) &&
           (((UIWidget *)pn2)->is_visible == '\0')) {
          _seh_state = 0xffffffff;
          FUN_00408152();
          goto L_00408126;
        }
      }
      n3 = n3 + 4;
      u4 = u4 + 1;
    } while (u4 <= *(uint *)(*(int *)(n1 + 0x1a) + 0xe));
  }
  _seh_state = 0xffffffff;
  FUN_00408152();
  this = NULL;
L_00408126:
  *_fs = _seh_prev;
  return this;
}


/* FUN_00408152 @ 0x00408152 */

void FUN_00408152(void) { return; }


/* FUN_00408160 @ 0x00408160 */

void __thiscall FUN_00408160(GameWidget *this,char param_1)
{
  int n1;
  uint u2;
  
  this->field_108 = param_1;
  if (((this->child_list_2 != 0) &&
      (n1 = ((CVector *)this->child_list_2)->count, n1 != 0)) && (u2 = 1, n1 != 0))
  {
    n1 = 4;
    do {
      n1 = n1 + 4;
      u2 = u2 + 1;
      FUN_00408160(*(void **)(*(int *)((CVector *)this->child_list_2)->data[0] + -8 + n1),param_1);
    } while (u2 <= ((CVector *)this->child_list_2)->count);
  }
  return;
}


/* FUN_004081f0 @ 0x004081f0 */

char __thiscall FUN_004081f0(void *this,char param_1)
{
    /* STUB: 291 lines not yet reconstructed */
    return 0;
}


/* FUN_00408760 @ 0x00408760 */

void FUN_00408760(void) { return; }


/* FUN_00408768 @ 0x00408768 */

void FUN_00408768(void) { return; }


/* FUN_004087fa @ 0x004087fa */

void FUN_004087fa(void) { return; }


/* FUN_00408802 @ 0x00408802 */

void FUN_00408802(void) { return; }


/* FUN_0040880a @ 0x0040880a */

void FUN_0040880a(void) { return; }


/* FUN_0040881c @ 0x0040881c */

void FUN_0040881c(void) { return; }


/* FUN_00408830 @ 0x00408830
 * Copies a pair of 2-byte values from param_1 into this.
 */

short * __thiscall FUN_00408830(void *this,short *param_1)
{
  ((short *)this)[1] = param_1[1];
  ((short *)this)[0] = *param_1;
  return this;
}


/* FUN_00408850 @ 0x00408850 */

int __fastcall FUN_00408850(int param_1)
{
  return param_1 + 0x1c;
}


/* FUN_00408870 @ 0x00408870 */

char __thiscall FUN_00408870(void *this,void *param_1,int param_2)
{
    /* STUB: 86 lines not yet reconstructed */
    return 0;
}


/* FUN_00408a60 @ 0x00408a60 */

void FUN_00408a60(void *param_1,uint param_2)
{
  ushort *pu1;
  int n2;
  short s3;
  
  pu1 = FUN_0046b8f0(param_1,param_2);
  if (pu1 != NULL) {
    s3 = 0;
    if (0 < (short)pu1[0x12]) {
      do {
        n2 = (int)s3;
        s3 = s3 + 1;
        FUN_00408a60(param_1,*(uint *)(pu1 + n2 * 2 + 0x13));
      } while (s3 < (short)pu1[0x12]);
    }
    FUN_00461420(param_1,param_2,'\x01');
    FUN_0046f5f0((uint)pu1);
  }
  return;
}


/* FUN_00408ac0 @ 0x00408ac0 */

uint * __thiscall FUN_00408ac0(void *this,uint *param_1,void *param_2,byte param_3,short param_4)
{
    /* STUB: 105 lines not yet reconstructed */
    return 0;
}


/* FUN_00408d29 @ 0x00408d29 */

void FUN_00408d29(void) { return; }


/* FUN_00408d40 @ 0x00408d40 */

short __cdecl FUN_00408d40(int param_1,int param_2,int param_3)
{
  int *pn1;
  int n2;
  int *_fs;
  int v18;
  int v14;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00408e93;
  *_fs = &_seh_prev;
  v14 = param_2 + ((unsigned short)((param_3) >> 16)) * -0x100;
  v18 = v14;
  pn1 = &v18;
  if (v14 < 1) {
    v14 = -v14;
    pn1 = &v14;
  }
  if (*pn1 < 0x1000) {
    v14 = param_1 + (short)param_3 * -0x100;
    v18 = v14;
    pn1 = &v18;
    if (v14 < 1) {
      v14 = -v14;
      pn1 = &v14;
    }
    if (*pn1 < 0x1000) {
      v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(1)) << 16);
    }
    else {
      v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(4)) << 16);
      if (param_1 <= (short)param_3 * 0x100) {
        v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(8)) << 16);
      }
    }
  }
  else {
    n2 = (int)(short)param_3;
    if (param_2 < ((unsigned short)((param_3) >> 16)) * 0x100) {
      v14 = param_1 + n2 * -0x100;
      v18 = v14;
      pn1 = &v18;
      if (v14 < 1) {
        v14 = -v14;
        pn1 = &v14;
      }
      if (*pn1 < 0x1000) {
        v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(2)) << 16);
      }
      else {
        v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(3)) << 16);
        if (param_1 <= n2 * 0x100) {
          v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(9)) << 16);
        }
      }
    }
    else {
      v14 = param_1 + n2 * -0x100;
      v18 = v14;
      pn1 = &v18;
      if (v14 < 1) {
        v14 = -v14;
        pn1 = &v14;
      }
      if (*pn1 < 0x1000) {
        v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(6)) << 16);
      }
      else {
        v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(5)) << 16);
        if (param_1 <= n2 * 0x100) {
          v14 = (v14 & ~(0xFFFF << 16)) | (((unsigned short)(7)) << 16);
        }
      }
    }
  }
  _seh_state = 0;
  FUN_00408e8b();
  _seh_state = 0xffffffff;
  FUN_00408e9d();
  *_fs = _seh_prev;
  return ((unsigned short)((v14) >> 16));
}


/* FUN_00408e8b @ 0x00408e8b */

void FUN_00408e8b(void) { return; }


/* FUN_00408e9d @ 0x00408e9d */

void FUN_00408e9d(void) { return; }


/* FUN_00408eb0 @ 0x00408eb0
 * Struct types: UIWidget (param_1)
 */

void __cdecl FUN_00408eb0(UIWidget *param_1,void *param_2,char param_3)
{
  short s1;
  short *pu2;
  uint u3;
  int n4;
  int *_fs;
  int *pn5;
  int v20;
  int v1c;
  char *v18;
  short v14;
  short v12;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004090a8;
  *_fs = &_seh_prev;
  v1c = 0;
  v20 = 0;
  v12 = 0;
  v14 = 0;
  _seh_state = (_seh_state & ~0xFF) | 1;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  if ((param_1->field_06 == 0) || (param_1->is_visible != '\0')) {
    _seh_state = 0;
  }
  else if (param_1 == param_2) {
    _seh_state = 0;
  }
  else {
    if (*(char *)((int)param_1->level_data_ptr + 4) == '\x02') {  /* TODO: level_data_ptr sub-struct, byte at +0x04 */
      if (param_3 == '\0') {
        FUN_0041da90(param_1,1);
        param_1->anim_flag_0 = 0;
        param_1->anim_flag_2 = 0;
        param_1->anim_flag_1 = 0;
        param_1->anim_flag_3 = 0;
        FUN_00405d30(param_1,0);
      }
      else {
        if (param_1->current_frame != 6) {
          param_1->anim_flag_0 = 0;
          param_1->anim_flag_2 = 0;
          param_1->anim_flag_1 = 0;
          param_1->anim_flag_3 = 0;
          FUN_00405d30(param_1,6);
        }
        FUN_0041da90(param_1,0);
        pu2 = (short *)FUN_00430bc0(param_1->field_06);
        FUN_004096f0(&v14,(short *)&v18,pu2);
        _seh_state = (_seh_state & ~0xFF) | 1;
        FUN_0040908f();
        pn5 = &v20;
        FUN_0041cde0(param_1,pn5);
        if (param_1->mirror_flag != '\0') {
          n4 = (int)v12;
          v12 = (short)((uint)v1c >> 8);
          v1c = n4 << 8;
        }
        v18 = &_tmp_34;
        pu2 = &v14;
        n4 = 0x40904f;
        FUN_00408830(&_tmp_34,pu2);
        _seh_state = (_seh_state & ~0xFF) | 3;
        FUN_004090c0(&_tmp_32,&v20);
        _seh_state = (_seh_state & ~0xFF) | 1;
        s1 = FUN_00408d40(n4,(int)pu2,pn5);
        FUN_004058c0(param_1,s1);
      }
    }
    if (((param_1->child_list_2 != NULL) &&
        (n4 = ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */, n4 != 0)) &&
       (u3 = 1, n4 != 0)) {
      n4 = 4;
      do {
        n4 = n4 + 4;
        u3 = u3 + 1;
        FUN_00408eb0(*(UIWidget **)(*(int *)((CVector *)param_1->child_list_2)->data[0] /* CVector: data ptr at +0x04 */ + -8 + n4),param_2,
                     param_3);
      } while (u3 <= ((CVector *)param_1->child_list_2)->count /* CVector: count at +0x0E */);
    }
    _seh_state &= ~0xFF;
  }
  FUN_004090a0();
  _seh_state = 0xffffffff;
  FUN_004090b2();
  /* SEH epilog */
  *_fs = _seh_prev;
}


