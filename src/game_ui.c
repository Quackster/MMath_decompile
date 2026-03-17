/*
 * game_ui.c - UI and menus
 * Address range: 0x430000 - 0x43AFFF
 * Functions: 366
 *
 * Auto-generated from decompilation of MMath.exe
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* Function: FUN_00430020 @ 0x00430020 */

void __thiscall FUN_00430020(GameScreen *this,LPCSTR param_1,short param_2,short param_3,ushort param_4)

{
  char c1;
  int n2;
  LPCSTR pCVar3;

  FUN_00430680();
  if (param_4 == 0) {
    n2 = -1;
    pCVar3 = param_1;
    do {
      if (n2 == 0) break;
      n2 = n2 + -1;
      c1 = *pCVar3;
      pCVar3 = pCVar3 + 1;
    } while (c1 != '\0');
    param_4 = ~(ushort)n2 - 1;
  }
  if ((HDC)this->hdc_active != (HDC)0x0) {
    SetBkMode((HDC)this->hdc_active,1);
    MoveToEx((HDC)this->hdc_active,(int)param_2,(int)param_3,(LPPOINT)0x0);
    SetTextAlign((HDC)this->hdc_active,0x19);
    ExtTextOutA((HDC)this->hdc_active,(int)param_2,(int)param_3,0,(RECT *)0x0,param_1,
                (uint)param_4,(INT *)0x0);
  }
  return;
}



/* Function: FUN_004300b0 @ 0x004300b0 */

int __fastcall FUN_004300b0(GameScreen *this)

{
  ushort u1;
  uint u2;
  int n3;
  HGDIOBJ pv4;
  HFONT h;
  BOOL flag5;
  char loc_40 [64];

  u2 = this->font_style;
  n3 = GetDeviceCaps((HDC)this->hdc_active,0x5a);
  u1 = this->font_size;
  pv4 = GetStockObject(0xd);
  pv4 = SelectObject((HDC)this->hdc_active,pv4);
  FUN_00456410((uint)this->font_id,loc_40);
  h = CreateFontA(-(int)(short)((int)((uint)u1 * n3) / 0x48),0,0,0,
                  (int)(short)((-(ushort)((u2 & 1) == 0) & 0xfed4) + 700),
                  this->font_style & 2,this->font_style & 4,0,0,0,0,0,0,loc_40);
  if (h != (HFONT)0x0) {
    SelectObject((HDC)this->hdc_active,h);
    flag5 = DeleteObject(pv4);
    return CONCAT31((unsigned int)((uint)flag5 >> 8),1);
  }
  pv4 = SelectObject((HDC)this->hdc_active,pv4);
  return (uint)pv4 & 0xffffff00;
}



/* Function: FUN_00430190 @ 0x00430190 */

int __thiscall FUN_00430190(GameScreen *this,short param_1)

{
  int __reg_eax;
  int u1;

  if (this->font_id != param_1) {
    this->font_id = param_1;
    u1 = FUN_004300b0(this);
    return u1;
  }
  return CONCAT31((unsigned int)(CONCAT22((short)((uint)__reg_eax >> 0x10),param_1) >> 8),1);
}



/* Function: FUN_004301b0 @ 0x004301b0 */

void __thiscall FUN_004301b0(GameScreen *this,int param_1)

{
  int n1;

  n1 = FUN_004563d0(param_1);
  FUN_00430190(this,(short)n1);
  return;
}



/* Function: FUN_004301d0 @ 0x004301d0 */

void __thiscall FUN_004301d0(GameScreen *this,short param_1)

{
  if (this->font_size != param_1) {
    this->font_size = param_1;
    FUN_004300b0(this);
  }
  return;
}



/* Function: FUN_00430200 @ 0x00430200 */

void FUN_00430200(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_004875f0,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00430250 @ 0x00430250 */

void FUN_00430250(void)

{
  return;
}



/* Function: FUN_00430260 @ 0x00430260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_00430260(void *this,LPCSTR param_1)

{
    /* TODO: 27 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00430300 @ 0x00430300 */

short __thiscall FUN_00430300(void *this,LPCSTR param_1)

{
  short u1;
  void *pu2;
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00430362;
  *__seh_chain = &loc_10;
  pu2 = FUN_00430260(this,param_1);
  loc_8 = 0xffffffff;
  u1 = *(short *)(pu2 + 2);
  FUN_0043036c();
  *__seh_chain = loc_10;
  return u1;
}



/* Function: FUN_0043036c @ 0x0043036c */

void FUN_0043036c(void)

{
  return;
}



/* Function: FUN_00430380 @ 0x00430380 */

void __thiscall FUN_00430380(void *this,short *param_1)

{
    /* TODO: 17 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004303e0 @ 0x004303e0 */

void __fastcall FUN_004303e0(GameScreen *this)

{
  HPEN h;
  HBRUSH h_00;
  HGDIOBJ ho;
  HGDIOBJ ho_00;
  uint color;

  color = (uint)this->color_b << 0x10 | (uint)this->color_g << 8 |
          (uint)this->color_r;
  h = CreatePen(6,(int)this->pen_width,color);
  h_00 = CreateSolidBrush(color);
  ho = SelectObject((HDC)this->hdc_active,h);
  ho_00 = SelectObject((HDC)this->hdc_active,h_00);
  SetTextColor((HDC)this->hdc_active,color);
  SetBkMode((HDC)this->hdc_active,1);
  DeleteObject(ho);
  DeleteObject(ho_00);
  return;
}



/* Function: FUN_00430480 @ 0x00430480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430480(void)

{
  _DAT_00487606 = 0;
  _DAT_00487604 = 0;
  return;
}



/* Function: FUN_00430490 @ 0x00430490 */

void FUN_00430490(void)

{
  _atexit(FUN_004304a0);
  return;
}



/* Function: FUN_004304a0 @ 0x004304a0 */

void FUN_004304a0(void)

{
  return;
}



/* Function: FUN_004304b0 @ 0x004304b0 */

void __thiscall FUN_004304b0(GameScreen *this,int param_1)

{
  FUN_004304d0(this,(char)param_1,(char)((uint)param_1 >> 8),(char)((uint)param_1 >> 0x10));
  return;
}



/* Function: FUN_004304d0 @ 0x004304d0 */

void __thiscall FUN_004304d0(GameScreen *this,char param_1,char param_2,char param_3)

{
  this->color_r = param_1;
  this->color_g = param_2;
  this->color_b = param_3;
  FUN_004303e0((intptr_t)this);
  return;
}



/* Function: FUN_004304f0 @ 0x004304f0 */

void __thiscall FUN_004304f0(void *this,int param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0043053f;
  loc_8 = 0;
  *__seh_chain = &loc_10;
  FUN_00430590(this,((unsigned short)((param_1) >> 16)),(short)param_1);
  loc_8 = 0xffffffff;
  FUN_00430537();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00430537 @ 0x00430537 */

void FUN_00430537(void)

{
  return;
}



/* Function: FUN_00430560 @ 0x00430560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430560(void)

{
  _DAT_00487602 = 0;
  _DAT_00487600 = 0;
  return;
}



/* Function: FUN_00430570 @ 0x00430570 */

void FUN_00430570(void)

{
  _atexit(FUN_00430580);
  return;
}



/* Function: FUN_00430580 @ 0x00430580 */

void FUN_00430580(void)

{
  return;
}



/* Function: FUN_00430590 @ 0x00430590 */

void __thiscall FUN_00430590(GameScreen *this,short param_1,short param_2)

{
  if ((this->pen_width != param_1) || (this->pen_style != param_2)) {
    this->pen_width = param_1;
    this->pen_style = param_2;
    FUN_004303e0((intptr_t)this);
  }
  return;
}



/* Function: FUN_004305c0 @ 0x004305c0 */

void __thiscall FUN_004305c0(GameScreen *this,short *param_1)

{
  HGDIOBJ pv1;

  FUN_00430680();
  pv1 = GetStockObject(5);
  pv1 = SelectObject((HDC)this->hdc_active,pv1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pv1);
  return;
}



/* Function: FUN_00430620 @ 0x00430620 */

void __thiscall FUN_00430620(GameScreen *this,short *param_1)

{
  HGDIOBJ pv1;

  FUN_00430680();
  pv1 = GetStockObject(8);
  pv1 = SelectObject((HDC)this->hdc_active,pv1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pv1);
  return;
}



/* Function: FUN_00430680 @ 0x00430680 */

void FUN_00430680(void)

{
  return;
}



/* Function: FUN_00430690 @ 0x00430690 */

void __fastcall FUN_00430690(void *param_1)

{
    /* TODO: 30 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0043075b @ 0x0043075b */

void FUN_0043075b(void)

{
  return;
}



/* Function: FUN_00430770 @ 0x00430770 */

void FUN_00430770(UIElement *param_1)

{
  int n1;
  short s2;
  short s3;
  short s4;
  uint u5;

  if (((param_1 == (UIElement *)0x0) || ((param_1->flags >> 6 & 1) == 0)) ||
     (s2 = 0, DAT_004800c0 < 1)) {
    return;
  }
  do {
    n1 = (int)s2;
    s3 = (&DAT_00487460)[n1 * 4];
    if ((short)(&DAT_00487460)[n1 * 4] <= param_1->rect_top) {
      s3 = param_1->rect_top;
    }
    s4 = (&DAT_00487464)[n1 * 4];
    if (param_1->rect_bottom <= (short)(&DAT_00487464)[n1 * 4]) {
      s4 = param_1->rect_bottom;
    }
    if (s3 <= s4) {
      s3 = (&DAT_00487466)[n1 * 4];
      if (param_1->rect_right <= (short)(&DAT_00487466)[n1 * 4]) {
        s3 = param_1->rect_right;
      }
      s4 = (&DAT_00487462)[n1 * 4];
      if ((short)(&DAT_00487462)[n1 * 4] <= param_1->rect_left) {
        s4 = param_1->rect_left;
      }
      if (s4 <= s3) {
        ((void (*)(void))param_1->vtable[0x14 / 4])(); /* vtable[5] */
        if (param_1->child_list_1 == 0) {
          return;
        }
        n1 = *(int *)((int)param_1->child_list_1 + 0xe) /* CVector: count at +0x0E */;
        if (n1 == 0) {
          return;
        }
        u5 = n1 * 4;
        do {
          u5 = u5 - 4;
          FUN_00430770(*(UIElement **)(**(int **)((int)param_1->child_list_1 + 4) /* CVector: data ptr at +0x04 */ + u5));
        } while (3 < u5);
        return;
      }
    }
    s2 = s2 + 1;
    if (DAT_004800c0 <= s2) {
      return;
    }
  } while( true );
}



/* Function: FUN_00430860 @ 0x00430860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430860(void)

{
  short s1;
  ushort u2;
  short s3;
  short s4;
  int n5;
  HRGN pHVar6;
  short s7;
  int *__seh_chain;
  short loc_24;
  short loc_22;
  short loc_20;
  short loc_1e;
  void *loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00430a96;
  *__seh_chain = &loc_10;
  FUN_00430680();
  if (DAT_004800c0 != 0) {
    s7 = 1;
    loc_18 = _DAT_00487460;
    loc_8 = 0;
    loc_14 = _DAT_00487464;
    if (1 < DAT_004800c0) {
      do {
        n5 = (int)s7;
        s1 = (&DAT_00487462)[n5 * 4];
        u2 = (&DAT_00487466)[n5 * 4];
        if (s1 < (short)u2) {
          s3 = (&DAT_00487464)[n5 * 4];
          s4 = (&DAT_00487460)[n5 * 4];
          if (s4 < s3) {
            if (((unsigned short)((loc_18) >> 16)) < ((unsigned short)((loc_14) >> 16))) {
              if ((short)loc_14 <= (short)loc_18) goto __label_00430923;
              if (s1 < ((unsigned short)((loc_18) >> 16))) {
                loc_18 = CONCAT22(s1,(short)loc_18);
              }
              if (((unsigned short)((loc_14) >> 16)) < (short)u2) {
                loc_14 = CONCAT22(u2,(short)loc_14);
              }
              if (s4 < (short)loc_18) {
                loc_18 = CONCAT22(((unsigned short)((loc_18) >> 16)),s4);
              }
              if (s3 <= (short)loc_14) goto __label_00430933;
            }
            else {
__label_00430923:
              loc_18 = CONCAT22(s1,s4);
              loc_14 = (uint)u2 << 0x10;
            }
            loc_14 = CONCAT22(((unsigned short)((loc_14) >> 16)),s3);
          }
        }
__label_00430933:
        s7 = s7 + 1;
      } while (s7 < DAT_004800c0);
    }
    FUN_0042f820((int)loc_1c);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)((unsigned short)((loc_18) >> 16)),(int)(short)loc_18,(int)((unsigned short)((loc_14) >> 16)),
               (int)(short)loc_14);
    SelectClipRgn((HDC)((GameScreen *)loc_1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (*(int **)((int)loc_1c + 0x1a) != (int *)0x0) { /* TODO: unknown offset 0x1a on GameScreen */
      FUN_00430770(*(UIElement **)((int)loc_1c + 0x1a)); /* TODO: unknown offset 0x1a on GameScreen */
    }
    s7 = 0;
    loc_8 = (loc_8 & ~0xFF) | 1;
    FUN_0042f830((int)loc_1c);
    loc_8 = CONCAT31((((loc_8) >> 8) & 0xFFFFFF),2);
    loc_22 = 0;
    loc_24 = 0;
    loc_1e = 0;
    loc_20 = 0;
    FUN_00430c70(loc_1c,&loc_24);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)loc_22,(int)loc_24,(int)loc_1e,(int)loc_20);
    SelectClipRgn((HDC)((GameScreen *)loc_1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (0 < DAT_004800c0) {
      do {
        n5 = (int)s7;
        s7 = s7 + 1;
        FUN_0042f800(loc_1c,&DAT_00487460 + n5 * 4);
      } while (s7 < DAT_004800c0);
    }
    loc_8 = (loc_8 & ~0xFF) | 1;
    FUN_00430a86();
    loc_8 &= ~0xFF;
    FUN_00430a8e();
    loc_8 = 0xffffffff;
    DAT_004800c0 = 0;
    FUN_00430aa0();
  }
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00430a86 @ 0x00430a86 */

void FUN_00430a86(void)

{
  return;
}



/* Function: FUN_00430a8e @ 0x00430a8e */

void FUN_00430a8e(void)

{
  return;
}



/* Function: FUN_00430aa0 @ 0x00430aa0 */

void FUN_00430aa0(void)

{
  return;
}



/* Function: FUN_00430ab0 @ 0x00430ab0 */

void __fastcall FUN_00430ab0(GameScreen *this)

{
  UpdateWindow((HWND)this->hwnd);
  return;
}



/* Function: FUN_00430ac0 @ 0x00430ac0 */

/* Function: FUN_00430ac0 @ 0x00430ac0
 * Struct types: UIElement (this)
 * Note: offset 0x12 is flags field, but used here as a pointer - likely reinterpreted
 */
void __thiscall FUN_00430ac0(void *this,int *param_1)

{
  int *pn1;

  pn1 = *(int **)((intptr_t)this + 0x12); /* TODO: offset 0x12 used as pointer, possibly different struct */
  if (param_1 != pn1) {
    if (pn1 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn1))[0x50 / 4])(); /* pn1->vtable[20] */
    }
    *(int **)((intptr_t)this + 0x12) = param_1; /* TODO: offset 0x12 used as pointer, possibly different struct */
    if (param_1 != (int *)0x0) {
      ((void (*)(void))((void **)(*param_1))[0x4c / 4])(); /* param_1->vtable[19] */
    }
  }
  return;
}



/* Function: FUN_00430af0 @ 0x00430af0 */

void __fastcall FUN_00430af0(int param_1)

{
  FUN_00430680();
  if (*(int **)(param_1 + 0x1a) != (int *)0x0) {
    ((void (*)(void))((void **)(**(int **)(param_1 + 0x1a)))[0x44 / 4])(); /* child_list_1->vtable[17] */
  }
  if (*(int **)(param_1 + 0x12) != (int *)0x0) {
    ((void (*)(void))((void **)(**(int **)(param_1 + 0x12)))[0x4c / 4])(); /* obj at param_1+0x12->vtable[19] */
  }
  return;
}



/* Function: FUN_00430b20 @ 0x00430b20 */

void __fastcall FUN_00430b20(int param_1)

{
  if (*(int **)(param_1 + 0x12) != (int *)0x0) {
    ((void (*)(void))((void **)(**(int **)(param_1 + 0x12)))[0x50 / 4])(); /* obj at param_1+0x12->vtable[20] */
  }
  if (*(int **)(param_1 + 0x1a) != (int *)0x0) {
    ((void (*)(void))((void **)(**(int **)(param_1 + 0x1a)))[0x48 / 4])(); /* child_list_1->vtable[18] */
  }
  return;
}



/* Function: FUN_00430b40 @ 0x00430b40 */

int __fastcall FUN_00430b40(int param_1)

{
    /* TODO: 23 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00430bae @ 0x00430bae */

void FUN_00430bae(void)

{
  return;
}



/* Function: FUN_00430bc0 @ 0x00430bc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __fastcall FUN_00430bc0(int param_1)

{
    /* TODO: 17 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00430c70 @ 0x00430c70 */

void __thiscall FUN_00430c70(void *this,short *param_1)

{
    /* TODO: 9 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00430cb0 @ 0x00430cb0 */

void __thiscall FUN_00430cb0(void *this,short *param_1)

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
  __seh_handler = &__label_00430d1e;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  loc_16 = 0;
  loc_18 = 0;
  loc_12 = 0;
  loc_14 = 0;
  FUN_00430c70(this,&loc_18);
  loc_8 = 0xffffffff;
  param_1[1] = loc_12 - loc_16;
  *param_1 = loc_14 - loc_18;
  FUN_00430d28();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00430d28 @ 0x00430d28 */

void FUN_00430d28(void)

{
  return;
}



/* Function: FUN_00430d30 @ 0x00430d30 */

void __fastcall FUN_00430d30(void *param_1)

{
  int n1;
  short s2;
  int *__seh_chain;
  int n3;
  int n4;
  int __param_ffffffc0;
  char c5;
  char c6;
  short loc_1c;
  short sStack_1a;
  short loc_18;
  short loc_16;
  short loc_14;
  short loc_12;
  int loc_10;
  void *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &DAT_00430f33;
  *__seh_chain = &loc_10;
  s2 = 0;
  FUN_0042f7d0(param_1);
  if (((UIElement *)param_1)->child_list_1 != 0) {
    sStack_1a = 0;
    loc_8 = (loc_8 & ~0xFF) | 1;
    loc_8 = (loc_8 & 0xFF) | (0 << 8);
    loc_1c = 0;
    loc_16 = 0;
    loc_18 = 0;
    loc_12 = 0;
    loc_14 = 0;
    FUN_00430cb0(param_1,&loc_1c);
    c6 = '\0';
    n1 = CONCAT22(sStack_1a,loc_1c);
    c5 = '\0';
    FUN_00401ba0(&__stk_31,loc_1c);
    n4 = CONCAT22(loc_18,sStack_1a);
    FUN_00401ba0(&__stk_30,sStack_1a);
    n3 = 0;
    FUN_00401050(&__stk_29,0);
    FUN_00401050(&__stk_28,0);
    FUN_0041cca0(((UIElement *)param_1)->child_list_1,n3,n4,n1,__param_ffffffc0,c5,c6);
    if (0 < DAT_004800c0) {
      do {
        n1 = (int)s2;
        if (((short)(&DAT_00487462)[n1 * 4] < (short)(&DAT_00487466)[n1 * 4]) &&
           ((short)(&DAT_00487460)[n1 * 4] < (short)(&DAT_00487464)[n1 * 4])) {
          if ((loc_16 < loc_12) && (loc_18 < loc_14)) {
            if ((short)(&DAT_00487462)[n1 * 4] < loc_16) {
              (&DAT_00487462)[n1 * 4] = loc_16;
            }
            if (loc_12 < (short)(&DAT_00487466)[n1 * 4]) {
              (&DAT_00487466)[n1 * 4] = loc_12;
            }
            if ((short)(&DAT_00487460)[n1 * 4] < loc_18) {
              (&DAT_00487460)[n1 * 4] = loc_18;
            }
            if (loc_14 < (short)(&DAT_00487464)[n1 * 4]) {
              (&DAT_00487464)[n1 * 4] = loc_14;
            }
            if (((short)(&DAT_00487466)[n1 * 4] <= (short)(&DAT_00487462)[n1 * 4]) ||
               ((short)(&DAT_00487464)[n1 * 4] <= (short)(&DAT_00487460)[n1 * 4])) {
              (&DAT_00487462)[n1 * 4] = 0;
              (&DAT_00487460)[n1 * 4] = 0;
              (&DAT_00487466)[n1 * 4] = 0;
              (&DAT_00487464)[n1 * 4] = 0;
            }
          }
          else {
            (&DAT_00487462)[n1 * 4] = loc_16;
            (&DAT_00487460)[n1 * 4] = loc_18;
            (&DAT_00487466)[n1 * 4] = loc_12;
            (&DAT_00487464)[n1 * 4] = loc_14;
          }
        }
        s2 = s2 + 1;
      } while (s2 < DAT_004800c0);
    }
    loc_8 &= ~0xFF;
    FUN_00430f2b();
    loc_8 = 0xffffffff;
    FUN_00430f3d();
  }
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00430f2b @ 0x00430f2b */

void FUN_00430f2b(void)

{
  return;
}



/* Function: FUN_00430f3d @ 0x00430f3d */

void FUN_00430f3d(void)

{
  return;
}



/* Function: FUN_00430f50 @ 0x00430f50 */

void __thiscall FUN_00430f50(GameWidget *this,char param_1)

{
  short *ps1;
  int n2;
  uint u3;
  
  if (*(char *)(DAT_004896b0 + 0x27) != '\0') {
    if ((DAT_004897c0 != 0) && (*(int **)(DAT_004897c0 + 0x52) != (int *)0x0)) {
      ((void (*)(void))((void **)(**(int **)(DAT_004897c0 + 0x52)))[0xc0 / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[48] */
    }
    FUN_004564f0(DAT_004896b0);
    return;
  }
  this->field_04 = this->field_04 + 1;
  if (((this->type_or_mode != 0) &&
      (n2 = *(int *)(this->type_or_mode + 0xe), n2 != 0)) && (u3 = 1, n2 != 0))
  {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u3 = u3 + 1;
      ((void (*)(void))((void **)(**(int **)(**(int **)(this->type_or_mode + 4) + -8 + n2)))[0x1c / 4])(); /* child obj->vtable[7] */
    } while (u3 <= *(uint *)(this->type_or_mode + 0xe));
  }
  if ((DAT_004800c0 != 0) && (param_1 != '\0')) {
    FUN_00430860();
  }
  ps1 = (short *)&this->field_04;
  *ps1 = *ps1 + -1;
  if (*ps1 == 0) {
    FUN_0045ecd0();
  }
  return;
}



/* Function: FUN_00431000 @ 0x00431000 */

void __thiscall FUN_00431000(void *this,int param_1)

{
    /* TODO: 73 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00431100 @ 0x00431100 */

void __thiscall FUN_00431100(UIElement *this,int param_1)

{
  uint *pu1;
  void *_Src;
  int n2;
  uint u3;
  int *pn4;
  uint u5;

  u5 = 0;
  n2 = this->type_or_mode;
  pu1 = (uint *)(n2 + 0xe);
  u3 = *pu1;
  if (u3 != 0) {
    pn4 = (int *)**(int **)(n2 + 4);
    do {
      if (*pn4 == param_1) {
        u5 = u5 + 1;
        goto __label_00431128;
      }
      pn4 = pn4 + 1;
      u5 = u5 + 1;
    } while (u5 < u3);
  }
  u5 = 0;
__label_00431128:
  if ((u5 != 0) && (u5 <= u3)) {
    if (u5 < u3) {
      _Src = (void *)(**(int **)(n2 + 4) + u5 * 4);
      memmove((void *)((int)_Src + -4),_Src,(u3 - u5) * 4);
    }
    *pu1 = *pu1 - 1;
  }
  return;
}



/* Function: FUN_00431160 @ 0x00431160 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00431160(void *this,char param_1)

{
  int n1;
  bool b2;
  DWORD DVar3;
  uint u4;
  
  FUN_00403230();
  u4 = *(int *)(DAT_004896b0 + 4) + _DAT_00489098;
  DVar3 = GetTickCount();
  n1 = DAT_004896b0;
  if ((u4 < DVar3) || (param_1 != '\0')) {
    DVar3 = GetTickCount();
    *(DWORD *)(n1 + 4) = DVar3;
    b2 = FUN_00456580(DAT_004896b0);
    n1 = DAT_004896b0;
    if ((!b2) && (param_1 == '\0')) {
      FUN_00430f50(this,'\0');
      return;
    }
    DVar3 = GetTickCount();
    *(DWORD *)(n1 + 8) = DVar3;
    FUN_00430f50(this,'\x01');
  }
  return;
}



/* Function: FUN_004311e0 @ 0x004311e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004311e0(void *param_1)

{
  int *pn1;
  short *pu2;
  int *pn3;
  short *ps4;
  DWORD DVar5;
  int n6;
  int n7;
  int *__seh_chain;
  int loc_10;
  void *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &DAT_0043143d;
  *__seh_chain = &loc_10;
  FUN_00431160(param_1,'\0');
  pu2 = (short *)FUN_00408850(DAT_004896b0);
  FUN_00408830(&__stk_38,pu2);
  loc_8 = 0xffffffff;
  pn3 = (int *)FUN_00430b40((int)param_1);
  pn1 = *(int **)(DAT_004896b0 + 0x40);
  _DAT_004838c8 = pn3;
  if (pn3 == pn1) {
    if (((pn3 != (int *)0x0) && (*(short *)(DAT_004896b0 + 0x30) == 0)) &&
       ((((UIElement *)pn3)->flags >> 5 & 1) != 0)) {
      ((void (*)(void))((void **)(*pn3))[0x20 / 4])(); /* pn3->vtable[8] */
    }
  }
  else {
    if (pn1 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn1))[0x28 / 4])(); /* pn1->vtable[10] */
    }
    if (pn3 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn3))[0x24 / 4])(); /* pn3->vtable[9] */
    }
    *(int **)(DAT_004896b0 + 0x40) = pn3;
  }
  ps4 = (short *)(DAT_004896b0 + 0x30);
  if (*ps4 == 1) {
    DAT_004838d8 = pn3;
  }
  if ((*ps4 == 0x42) && (DAT_004838d4 != pn3)) {
    *ps4 = 0x41;
  }
  pn1 = pn3;
  if ((*(short *)(DAT_004896b0 + 0x30) == 0x41) && (DAT_004838d8 != pn3)) {
    *(short *)(DAT_004896b0 + 0x30) = 2;
    pn1 = DAT_004838d4;
  }
  DAT_004838d4 = pn1;
  n7 = DAT_004896b0;
  n6 = (int)*(short *)(DAT_004896b0 + 0x30);
  switch(n6) {
  case 1:
    DVar5 = GetTickCount();
    *(DWORD *)(n7 + 0xc) = DVar5;
    if (pn3 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn3))[0x2c / 4])(); /* pn3->vtable[11] */
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 2:
    if (pn3 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn3))[0x30 / 4])(); /* pn3->vtable[12] */
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 3:
  case 4:
  case 5:
    if ((*(char *)(DAT_004896b0 + 0x3e) == '\x10') || (*(int **)((int)param_1 + 0x12) == (int *)0x0) /* TODO: offset 0x12 used as pointer, not UIElement.flags */
       ) goto switchD_004312ee_caseD_7;
    if (*(short *)(DAT_004896b0 + 0x30) == 4) {
      ((void (*)(void))((void **)(**(int **)((int)param_1 + 0x12)))[0x40 / 4])(); /* obj at param_1+0x12->vtable[16] */ /* TODO: offset 0x12 used as pointer */
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 6:
  case 8:
  case 0x45:
    if (n6 == 6) {
      if (param_1 != (void *)0x0) {
        FUN_00430690(param_1);
      }
    }
    else if (n6 == 8) {
      if (param_1 != (void *)0x0) {
        FUN_00430af0((int)param_1);
      }
    }
    else if ((n6 == 0x45) && (param_1 != (void *)0x0)) {
      FUN_00430b20((int)param_1);
    }
  default:
    goto switchD_004312ee_caseD_7;
  case 9:
    if (*(int **)((int)param_1 + 0x12) != (int *)0x0) { /* TODO: offset 0x12 used as pointer */
      ((void (*)(void))((void **)(**(int **)((int)param_1 + 0x12)))[0x3c / 4])(); /* obj at param_1+0x12->vtable[15] */ /* TODO: offset 0x12 used as pointer */
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x41:
    if (pn3 != (int *)0x0) {
      ((void (*)(void))((void **)(*pn3))[0x34 / 4])();
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x42:
    if (pn3 != (int *)0x0) {
      if ((((UIElement *)pn3)->flags >> 0xc & 1) == 0) {
        ((void (*)(void))((void **)(*pn3))[0x34 / 4])();
      }
      else {
        ((void (*)(void))((void **)(*pn3))[0x38 / 4])(); /* pn3->vtable[14] */
      }
    }
    n7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x46:
    FUN_00430d30(param_1);
    goto switchD_004312ee_caseD_7;
  case 0x47:
    FUN_0045be00(DAT_00489ac8);
    goto switchD_004312ee_caseD_7;
  }
  *(DWORD *)(n7 + 0xc) = DVar5;
switchD_004312ee_caseD_7:
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_004314d0 @ 0x004314d0 */

short * __fastcall FUN_004314d0(short *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Function: FUN_00431500 @ 0x00431500 */

void FUN_00431500(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00487f88,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00431540 @ 0x00431540 */

void FUN_00431540(void)

{
  _atexit(FUN_00431550);
  return;
}



/* Function: FUN_00431550 @ 0x00431550 */

void FUN_00431550(void)

{
  return;
}



/* Function: FUN_00431570 @ 0x00431570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431570(void)

{
  _DAT_00488b0e = 0;
  _DAT_00488b0c = 0;
  return;
}



/* Function: FUN_00431580 @ 0x00431580 */

void FUN_00431580(void)

{
  _atexit(FUN_00431590);
  return;
}



/* Function: FUN_00431590 @ 0x00431590 */

void FUN_00431590(void)

{
  return;
}



/* Function: FUN_004315b0 @ 0x004315b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004315b0(void)

{
  _DAT_00488a8e = 0;
  _DAT_00488a8c = 0;
  return;
}



/* Function: FUN_004315c0 @ 0x004315c0 */

void FUN_004315c0(void)

{
  _atexit(FUN_004315d0);
  return;
}



/* Function: FUN_004315d0 @ 0x004315d0 */

void FUN_004315d0(void)

{
  return;
}



/* Function: FUN_004315e0 @ 0x004315e0 */

int * __thiscall
FUN_004315e0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  DWORD DVar1;
  int *self;
  int *__seh_chain;
  int n2;
  char c3;
  int loc_2c;
  int loc_28;
  int loc_24;
  int loc_20;
  char *loc_1c;
  int loc_18;
  int *loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00431774;
  *__seh_chain = &loc_10;
  loc_14 = this;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  loc_8 = 0;
  self = (int *)((DialogWidget *)loc_14)->dialog_data;
  FUN_00458040(self);
  loc_20 = 0;
  loc_24 = 0;
  *loc_14 = &PTR_FUN_00474290;
  loc_28 = 0;
  loc_2c = 0;
  loc_8 = CONCAT31((unsigned int)((uint)loc_8 >> 8),3);
  FUN_0041cdc0(loc_14,&loc_2c);
  FUN_0041ce10(loc_14,&loc_24,0);
  FUN_00458e50(self,0x10003);
  n2 = 0x431685;
  FUN_0041d780(self,(void *)loc_14[3]);
  c3 = '\0';
  loc_18 = loc_28 + -0x4600;
  loc_1c = &__stk_32;
  FUN_00401050(&__stk_32,0x14);
  FUN_00458ca0(self,loc_18,n2,c3);
  loc_1c = (char *)(loc_24 + 0x3700);
  FUN_0041d020(self,loc_20 + 0x2300,(int)loc_1c,0);
  FUN_0041dd40(self);
  FUN_00458de0(self,'\b');
  FUN_00458dd0(self,1);
  ((void (*)(void))((void **)(*self))[0x90 / 4])(); /* self->vtable[36] */
  ((UIWidget *)loc_14)->field_109 = 1;
  FUN_00431860((int)loc_14);
  n2 = DAT_004896b0;
  if (*(char *)(DAT_004896b0 + 0x28) == '\0') {
    *(char *)(DAT_004896b0 + 0x28) = '\x01';
    DVar1 = GetTickCount();
    *(DWORD *)(n2 + 4) = DVar1;
    *(DWORD *)(n2 + 0xc) = DVar1;
  }
  loc_8 = (loc_8 & ~0xFF) | 2;
  *(char *)(DAT_004896b0 + 0x2a) = 1;
  FUN_00431756();
  loc_8 = CONCAT31((((loc_8) >> 8) & 0xFFFFFF),1);
  FUN_0043175e();
  *__seh_chain = loc_10;
  return loc_14;
}



/* Function: FUN_00431756 @ 0x00431756 */

void FUN_00431756(void)

{
  return;
}



/* Function: FUN_0043175e @ 0x0043175e */

void FUN_0043175e(void)

{
  return;
}



/* Function: FUN_00431790 @ 0x00431790 */

int * __thiscall FUN_00431790(void *this,byte param_1)

{
  FUN_004317b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004317b0 @ 0x004317b0 */

void __fastcall FUN_004317b0(int *param_1)

{
  int n1;
  DWORD DVar2;
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  uint loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00431840;
  *param_1 = &PTR_FUN_00474290;
  *__seh_chain = &loc_10;
  n1 = DAT_004896b0;
  loc_8 = 1;
  if ((*(char *)(DAT_004896b0 + 0x28) != '\0') && (*(char *)(DAT_004896b0 + 0x29) == '\0')) {
    *(char *)(DAT_004896b0 + 0x28) = '\0';
    DVar2 = GetTickCount();
    *(DWORD *)(n1 + 4) = DVar2;
    *(DWORD *)(n1 + 0xc) = DVar2;
  }
  loc_8 = loc_8 & 0xffffff00;
  *(char *)(DAT_004896b0 + 0x2a) = 0;
  FUN_00431832();
  loc_8 = 0xffffffff;
  FUN_0043184a();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00431832 @ 0x00431832 */

void FUN_00431832(void)

{
  int __saved_ebp;
  
  FUN_00458710((int *)(*(int *)(__saved_ebp + -0x10) + 0x126));
  return;
}



/* Function: FUN_0043184a @ 0x0043184a */

void FUN_0043184a(void)

{
  int __saved_ebp;
  
  FUN_0042be10(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00431860 @ 0x00431860 */

void __fastcall FUN_00431860(int param_1)

{
  *(char *)(param_1 + 0x1d9) = 1;
  *(int *)(param_1 + 0x1ce) = 0;
  *(int *)(param_1 + 0x1d4) = 0;
  *(char *)(param_1 + 0x1d8) = 0;
  *(char *)(param_1 + 0x1d2) = 0;
  FUN_00431be0(param_1);
  return;
}



/* Function: FUN_004318b0 @ 0x004318b0 */

void __thiscall FUN_004318b0(void *this,char param_1)

{
    /* TODO: 158 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00431b45 @ 0x00431b45 */

void FUN_00431b45(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x48));
  return;
}



/* Function: FUN_00431b5f @ 0x00431b5f */

void FUN_00431b5f(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x2c));
  return;
}



/* Function: FUN_00431b80 @ 0x00431b80 */

void FUN_00431b80(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488c90,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00431bd0 @ 0x00431bd0 */

void FUN_00431bd0(void)

{
  return;
}



/* Function: FUN_00431be0 @ 0x00431be0 */

void __fastcall FUN_00431be0(int param_1)

{
  char c1;
  void *pv2;
  int n3;
  int n4;
  int n5;
  int n6;
  char *pc7;
  void *_Dst;
  int *this;
  char loc_50 [80];
  
  pc7 = loc_50;
  for (n6 = 0x14; n6 != 0; n6 = n6 + -1) {
    pc7[0] = '\0';
    pc7[1] = '\0';
    pc7[2] = '\0';
    pc7[3] = '\0';
    pc7 = pc7 + 4;
  }
  this = (int *)(param_1 + 0x126);
  sprintf(loc_50,&DAT_00480110,(double)*(float *)(param_1 + 0x1ce));
  FUN_00458860(this,loc_50);
  pv2 = (void *)FUN_004589f0((int)this);
  n6 = FUN_00432770(pv2,'.',0,1);
  if (n6 != -1) {
    pv2 = (void *)FUN_004589f0((int)this);
    n6 = FUN_00432770(pv2,'0',0,1);
    if (n6 != -1) {
      while( true ) {
        n6 = 0;
        pv2 = (void *)FUN_004589f0((int)this);
        n3 = FUN_004589f0((int)this);
        if ((*(int **)(n3 + 4) != (int *)0x0) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != (char *)0x0)) {
          c1 = *pc7;
          while (c1 != '\0') {
            pc7 = pc7 + 1;
            n6 = n6 + 1;
            c1 = *pc7;
          }
        }
        n3 = FUN_004327e0(pv2,'0',0,1);
        if (n3 - n6 != -1) break;
        n6 = 0;
        n3 = FUN_004589f0((int)this);
        if ((*(int **)(n3 + 4) != (int *)0x0) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != (char *)0x0)) {
          c1 = *pc7;
          while (c1 != '\0') {
            pc7 = pc7 + 1;
            n6 = n6 + 1;
            c1 = *pc7;
          }
        }
        pv2 = (void *)FUN_004589f0((int)this);
        n6 = n6 + -1;
        if (-1 < n6) {
          n3 = 0;
          if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != (int *)0x0) &&
             (pc7 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc7 != (char *)0x0)) {
            c1 = *pc7;
            while (c1 != '\0') {
              pc7 = pc7 + 1;
              n3 = n3 + 1;
              c1 = *pc7;
            }
          }
          n5 = 1;
          if (n6 < n3) {
            while (((n3 = n5, n5 == -1 || (n3 = n5 + -1, n5 != 0)) &&
                   (n6 = FUN_00432770(pv2,'0',n6,1), n6 != -1))) {
              n4 = FUN_00417570((int)pv2);
              n5 = n3;
              if (n6 < n4) {
                _Dst = (void *)(**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ + n6);
                memmove(_Dst,(void *)((int)_Dst + 1),(n4 - n6) + 1);
              }
            }
          }
        }
      }
      n6 = 0;
      pv2 = (void *)FUN_004589f0((int)this);
      n3 = FUN_004589f0((int)this);
      if ((*(int **)(n3 + 4) != (int *)0x0) &&
         (pc7 = (char *)**(int **)(n3 + 4), pc7 != (char *)0x0)) {
        c1 = *pc7;
        while (c1 != '\0') {
          pc7 = pc7 + 1;
          n6 = n6 + 1;
          c1 = *pc7;
        }
      }
      n3 = FUN_004327e0(pv2,'.',0,1);
      if (n3 - n6 == -1) {
        n6 = 0;
        n3 = FUN_004589f0((int)this);
        if ((*(int **)(n3 + 4) != (int *)0x0) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != (char *)0x0)) {
          c1 = *pc7;
          while (c1 != '\0') {
            pc7 = pc7 + 1;
            n6 = n6 + 1;
            c1 = *pc7;
          }
        }
        pv2 = (void *)FUN_004589f0((int)this);
        n6 = n6 + -1;
        if (-1 < n6) {
          n3 = 0;
          if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != (int *)0x0) &&
             (pc7 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc7 != (char *)0x0)) {
            c1 = *pc7;
            while (c1 != '\0') {
              pc7 = pc7 + 1;
              n3 = n3 + 1;
              c1 = *pc7;
            }
          }
          n5 = 1;
          if (n6 < n3) {
            while (((n3 = n5, n5 == -1 || (n3 = n5 + -1, n5 != 0)) &&
                   (n6 = FUN_00432770(pv2,'.',n6,1), n6 != -1))) {
              FUN_00432680(pv2,n6,1);
              n5 = n3;
            }
          }
        }
      }
    }
  }
  pv2 = (void *)FUN_004589f0((int)this);
  n6 = FUN_00432770(pv2,'.',0,1);
  while( true ) {
    n5 = FUN_004589f0((int)this);
    n3 = 0;
    if ((*(int **)(n5 + 4) != (int *)0x0) &&
       (pc7 = (char *)**(int **)(n5 + 4), pc7 != (char *)0x0)) {
      c1 = *pc7;
      while (c1 != '\0') {
        pc7 = pc7 + 1;
        n3 = n3 + 1;
        c1 = *pc7;
      }
    }
    if ((n3 < 0xb) || (n6 == -1)) break;
    pv2 = (void *)FUN_004589f0((int)this);
    FUN_00432680(pv2,n6 + 1,1);
    n5 = FUN_004589f0((int)this);
    n3 = 0;
    if ((*(int **)(n5 + 4) != (int *)0x0) &&
       (pc7 = (char *)**(int **)(n5 + 4), pc7 != (char *)0x0)) {
      c1 = *pc7;
      while (c1 != '\0') {
        pc7 = pc7 + 1;
        n3 = n3 + 1;
        c1 = *pc7;
      }
    }
    if (n3 - n6 == 1) {
      pv2 = (void *)FUN_004589f0((int)this);
      FUN_00432680(pv2,n6,1);
      n6 = -1;
    }
  }
  n3 = FUN_004589f0((int)this);
  n6 = 0;
  if ((*(int **)(n3 + 4) != (int *)0x0) &&
     (pc7 = (char *)**(int **)(n3 + 4), pc7 != (char *)0x0)) {
    c1 = *pc7;
    while (c1 != '\0') {
      pc7 = pc7 + 1;
      n6 = n6 + 1;
      c1 = *pc7;
    }
  }
  if (10 < n6) {
    FUN_00458860(this,s_Overflow_00480104);
  }
  ((void (*)(void))((void **)(*this))[0x90 / 4])(); /* this->vtable[36] */
  return;
}



/* Function: FUN_00431f20 @ 0x00431f20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431f20(void)

{
  _DAT_00488c9e = 0;
  _DAT_00488c9c = 0;
  return;
}



/* Function: FUN_00431f30 @ 0x00431f30 */

void FUN_00431f30(void)

{
  _atexit(FUN_00431f40);
  return;
}



/* Function: FUN_00431f40 @ 0x00431f40 */

void FUN_00431f40(void)

{
  return;
}



/* Function: FUN_00431f50 @ 0x00431f50 */

void __thiscall FUN_00431f50(DialogWidget *this,char param_1)

{
  int n1;
  
  if (this->dialog_active == '\0') {
    if (this->dialog_initialized != '\0') goto __label_00431fab;
    n1 = FUN_004589f0((intptr_t)this->dialog_data);
    sscanf((char *)**(int **)(n1 + 4),&DAT_00480118,&this->dialog_value);
    this->dialog_active = 1;
  }
  else {
    if (this->dialog_initialized != '\0') goto __label_00431fab;
    FUN_00432000((intptr_t)this);
  }
  this->dialog_initialized = 1;
__label_00431fab:
  this->input_mode = param_1;
  return;
}



/* Function: FUN_00431fd0 @ 0x00431fd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431fd0(void)

{
  _DAT_00488c9a = 0;
  _DAT_00488c98 = 0;
  return;
}



/* Function: FUN_00431fe0 @ 0x00431fe0 */

void FUN_00431fe0(void)

{
  _atexit(FUN_00431ff0);
  return;
}



/* Function: FUN_00431ff0 @ 0x00431ff0 */

void FUN_00431ff0(void)

{
  return;
}



/* Function: FUN_00432000 @ 0x00432000 */

void __fastcall FUN_00432000(int param_1)

{
  float *pfVar1;
  float f2;
  int n3;
  
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x1d4);
  n3 = FUN_004589f0(param_1 + 0x126);
  sscanf((char *)**(int **)(n3 + 4),&DAT_00480118,pfVar1);
  switch(*(char *)(param_1 + 0x1d2)) {
  case 0x2a:
    f2 = *(float *)(param_1 + 0x1ce) * *pfVar1;
    break;
  case 0x2b:
    f2 = *(float *)(param_1 + 0x1ce) + *pfVar1;
    break;
  default:
    goto switchD_00432049_caseD_2c;
  case 0x2d:
    f2 = *(float *)(param_1 + 0x1ce) - *pfVar1;
    break;
  case 0x2f:
    if (ABS(*pfVar1) == 0.0) {
      FUN_00431860(param_1);
      FUN_00458860((void *)(param_1 + 0x126),s_Error_0047ee88);
      return;
    }
    f2 = *(float *)(param_1 + 0x1ce) / *pfVar1;
  }
  *(float *)(param_1 + 0x1ce) = f2;
switchD_00432049_caseD_2c:
  *pfVar1 = 0.0;
  *(char *)(param_1 + 0x1d9) = 1;
  FUN_00431be0(param_1);
  return;
}



/* Function: FUN_00432370 @ 0x00432370 */

void __thiscall FUN_00432370(TextDisplay *this,int param_1,int param_2)

{
  int n1;
  short s2;
  
  s2 = 1;
  if (*(int *)(this->field_11c + 0xe) != 0) {
    do {
      n1 = (int)s2;
      s2 = s2 + 1;
      FUN_0041d3a0(*(void **)(**(int **)(this->field_11c + 4) + -4 + n1 * 4),param_1,
                   param_2,'\x01');
    } while ((uint)(int)s2 <= *(uint *)(this->field_11c + 0xe));
  }
  FUN_0041d3a0((void *)&this->field_126,param_1,param_2,'\x01');
  FUN_0041d3a0(this,param_1,param_2,'\x01');
  return;
}



/* Function: FUN_004325d0 @ 0x004325d0 */

void FUN_004325d0(void)

{
  return;
}



/* Function: FUN_004325d8 @ 0x004325d8 */

void FUN_004325d8(void)

{
  return;
}



/* Function: FUN_004325e0 @ 0x004325e0 */

void FUN_004325e0(void)

{
  return;
}



/* Function: FUN_004325e8 @ 0x004325e8 */

void FUN_004325e8(void)

{
  return;
}



/* Function: FUN_004325fa @ 0x004325fa */

void FUN_004325fa(void)

{
  return;
}



/* Function: FUN_00432610 @ 0x00432610 */

void __fastcall FUN_00432610(int *param_1)

{
  int *pn1;
  
  pn1 = *(int **)(DAT_004897c0 + 0x52);
  ((void (*)(void))((void **)(*pn1))[200 / 4])(); /* pn1->vtable[50] */
  *(char *)(pn1 + 0x5d) = 1;
  FUN_0042c3f0(param_1);
  return;
}



/* Function: FUN_00432640 @ 0x00432640 */

void __thiscall FUN_00432640(CString *this,char *param_1,int param_2,int param_3)

{
  char c1;
  char c2;
  char *pc3;

  pc3 = (char *)(*(int *)this->pp_buffer + param_2);
  do {
    c1 = *pc3;
    c2 = *param_1;
    if (c1 != c2) {
      return;
    }
    pc3 = pc3 + 1;
    if (c1 == '\0') {
      return;
    }
    param_1 = param_1 + 1;
    if (c2 == '\0') {
      return;
    }
  } while ((param_3 == -1) || (param_3 = param_3 + -1, 0 < param_3));
  return;
}



/* Function: FUN_00432680 @ 0x00432680 */

void __thiscall FUN_00432680(CString *this,int param_1,int param_2)

{
  char c1;
  int *pn2;
  char *pc3;
  int n4;

  pn2 = (int *)this->pp_buffer;
  n4 = 0;
  if ((pn2 != (int *)0x0) && (pc3 = (char *)*pn2, pc3 != (char *)0x0)) {
    c1 = *pc3;
    while (c1 != '\0') {
      pc3 = pc3 + 1;
      n4 = n4 + 1;
      c1 = *pc3;
    }
  }
  if (param_1 < n4) {
    memmove((void *)(*pn2 + param_1),(void *)(param_2 + param_1 + *pn2),(n4 - param_1) + 1)
    ;
  }
  return;
}



/* Function: FUN_004326d0 @ 0x004326d0 */

void __thiscall FUN_004326d0(CString *this,char param_1,int param_2)

{
  char c1;
  int n2;
  LPCVOID pv3;
  uint *pu4;
  int n5;
  char *pc6;
  
  if (this->capacity + -1 < param_2) {
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
    n2 = param_2 + 1;
    if (param_2 + 1 <= n5 + 1) {
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
  n5 = 0;
  if (0 < param_2) {
    do {
      n5 = n5 + 1;
      *(char *)(*this->pp_buffer + -1 + n5) = param_1;
    } while (n5 < param_2);
  }
  *(char *)(*this->pp_buffer + n5) = 0;
  return;
}



/* Function: FUN_00432770 @ 0x00432770 */

int __thiscall FUN_00432770(CString *this,char param_1,int param_2,int param_3)

{
  char c1;
  int *pn2;
  char *pc3;
  int n4;

  pn2 = (int *)this->pp_buffer;
  if ((pn2 != (int *)0x0) && (0 < param_3)) {
    n4 = 0;
    if ((pn2 != (int *)0x0) && (pc3 = (char *)*pn2, pc3 != (char *)0x0)) {
      c1 = *pc3;
      while (c1 != '\0') {
        pc3 = pc3 + 1;
        n4 = n4 + 1;
        c1 = *pc3;
      }
    }
    if ((param_2 < n4) && (n4 = *pn2, *(char *)(n4 + param_2) != '\0')) {
      do {
        if (((uint)*(byte *)(n4 + param_2) == (int)param_1) &&
           (param_3 = param_3 + -1, param_3 == 0)) {
          return param_2;
        }
        param_2 = param_2 + 1;
      } while (*(char *)(n4 + param_2) != '\0');
    }
  }
  return -1;
}



/* Function: FUN_004327e0 @ 0x004327e0 */

int __thiscall FUN_004327e0(GameWidget *this,char param_1,int param_2,int param_3)

{
  char c1;
  int *pn2;
  int n3;
  char c4;
  char *pc5;
  char *pc6;
  int n7;
  
  pn2 = this->field_04;
  if (pn2 != (int *)0x0) {
    n3 = 0;
    pc6 = (char *)*pn2;
    if (pc6 != (char *)0x0) {
      c4 = *pc6;
      while (c4 != '\0') {
        pc6 = pc6 + 1;
        n3 = n3 + 1;
        c4 = *pc6;
      }
    }
    n3 = n3 + -1;
    if (param_2 != 0) {
      n3 = param_2;
    }
    if (-1 < n3) {
      n7 = 0;
      if ((pn2 != (int *)0x0) && (pc6 = (char *)*pn2, pc6 != (char *)0x0)) {
        c4 = *pc6;
        while (c4 != '\0') {
          pc6 = pc6 + 1;
          n7 = n7 + 1;
          c4 = *pc6;
        }
      }
      if ((n3 < n7) && (n3 != 0)) {
        pc6 = this->type_or_mode;
        do {
          c4 = *(char *)(*pn2 + n3);
          if (pc6 != (char *)0x0) {
            c1 = *pc6;
            pc5 = pc6;
            while (c1 != '\0') {
              if (*pc5 == c4) {
                c4 = pc5[1];
                break;
              }
              pc5 = pc5 + 2;
              c1 = *pc5;
            }
            if (pc6 != (char *)0x0) {
              c1 = *pc6;
              pc5 = pc6;
              while (c1 != '\0') {
                if (*pc5 == param_1) {
                  if (pc5[1] == c4) goto __label_00432886;
                  goto __label_00432889;
                }
                pc5 = pc5 + 2;
                c1 = *pc5;
              }
            }
          }
          if (param_1 == c4) {
__label_00432886:
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return n3;
            }
          }
__label_00432889:
          n3 = n3 + -1;
        } while (n3 != 0);
      }
    }
  }
  return -1;
}



/* Function: FUN_004328b0 @ 0x004328b0 */

void FUN_004328b0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488ca0,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00432900 @ 0x00432900 */

void FUN_00432900(void)

{
  return;
}



/* Function: FUN_00432920 @ 0x00432920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432920(void)

{
  _DAT_00488cae = 0;
  _DAT_00488cac = 0;
  return;
}



/* Function: FUN_00432930 @ 0x00432930 */

void FUN_00432930(void)

{
  _atexit(FUN_00432940);
  return;
}



/* Function: FUN_00432940 @ 0x00432940 */

void FUN_00432940(void)

{
  return;
}



/* Function: FUN_00432960 @ 0x00432960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432960(void)

{
  _DAT_00488caa = 0;
  _DAT_00488ca8 = 0;
  return;
}



/* Function: FUN_00432970 @ 0x00432970 */

void FUN_00432970(void)

{
  _atexit(FUN_00432980);
  return;
}



/* Function: FUN_00432980 @ 0x00432980 */

void FUN_00432980(void)

{
  return;
}



/* Function: FUN_00432990 @ 0x00432990 */

int * __fastcall FUN_00432990(int *param_1)

{
  *param_1 = &PTR_FUN_00474380;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



/* Function: FUN_004329b0 @ 0x004329b0 */

int * __thiscall FUN_004329b0(void *this,byte param_1)

{
  FUN_00432a50(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004329d0 @ 0x004329d0 */

int * __thiscall FUN_004329d0(CString *this,int *param_1)

{
  *(void ***)this = &PTR_FUN_00474380;
  this->capacity = param_1[1];
  this->pp_buffer = *param_1;
  this->tag = param_1[3];
  this->allocator = param_1[2];
  *(int *)((intptr_t)this + 0x18) = param_1[5]; /* TODO: unknown offset 0x18 on CString (past extra_data at 0x16) */
  this->owns_buffer = param_1[4];
  return this;
}



/* Function: FUN_00432a10 @ 0x00432a10 */

int * __thiscall
FUN_00432a10(CString *this,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  *(void ***)this = &PTR_FUN_00474380;
  this->capacity = param_2;
  this->pp_buffer = param_1;
  this->tag = param_4;
  this->allocator = param_3;
  *(int *)((intptr_t)this + 0x18) = param_6; /* TODO: unknown offset 0x18 on CString (past extra_data at 0x16) */
  this->owns_buffer = param_5;
  return this;
}



/* Function: FUN_00432a50 @ 0x00432a50 */

void __fastcall FUN_00432a50(int *param_1)

{
  *param_1 = &PTR_FUN_00474380;
  return;
}



/* Function: FUN_00432a60 @ 0x00432a60 */

void __thiscall
FUN_00432a60(CString *this,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  this->capacity = param_2;
  this->pp_buffer = param_1;
  this->tag = param_4;
  this->allocator = param_3;
  *(int *)((intptr_t)this + 0x18) = param_6; /* TODO: unknown offset 0x18 on CString (past extra_data at 0x16) */
  this->owns_buffer = param_5;
  return;
}



/* Function: FUN_00432a90 @ 0x00432a90 */

float10 __fastcall FUN_00432a90(int param_1)

{
  return SQRT((float10)*(double *)(param_1 + 0xc) * (float10)*(double *)(param_1 + 0xc) +
              (float10)*(double *)(param_1 + 4) * (float10)*(double *)(param_1 + 4));
}



/* Function: FUN_00432ab0 @ 0x00432ab0 */

void __fastcall FUN_00432ab0(int param_1)

{
  int n1;
  int *pu2;
  int *pu3;
  int *__seh_chain;
  float10 f4;
  double __param_ffffffa0;
  double __param_ffffffa8;
  char loc_3c [4];
  int loc_38 [6];
  double loc_20;
  double loc_18;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00432b78;
  *__seh_chain = &loc_10;
  FUN_004329d0(loc_3c,(int *)&__stk_0);
  loc_8 = 0;
  pu2 = loc_38;
  pu3 = (int *)&__stk_23;
  for (n1 = 6; n1 != 0; n1 = n1 + -1) {
    *pu3 = *pu2;
    pu2 = pu2 + 1;
    pu3 = pu3 + 1;
  }
  f4 = FUN_00432b90(param_1,__param_ffffffa0,__param_ffffffa8);
  loc_18 = (double)f4;
  f4 = FUN_00432a90(param_1);
  loc_20 = (double)f4;
  f4 = FUN_00432a90((int)loc_3c);
  f4 = (float10)loc_18 / (f4 * (float10)loc_20);
  loc_18 = (double)f4;
  if (f4 <= (float10)1.0) {
    if (loc_18 < -1.0) {
      loc_18 = -1.0;
    }
  }
  else {
    loc_18 = 1.0;
  }
  loc_8 = 0xffffffff;
  FUN_00432b82();
  _CIacos();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00432b82 @ 0x00432b82 */

void FUN_00432b82(void)

{
  int __saved_ebp;
  
  FUN_00432a50((int *)(__saved_ebp + -0x38));
  return;
}



/* Function: FUN_00432b90 @ 0x00432b90 */

float10 __thiscall FUN_00432b90(int param_1,double param_2,double param_3)

{
  return (float10)*(double *)(param_1 + 0xc) * (float10)param_3 +
         (float10)*(double *)(param_1 + 4) * (float10)param_2;
}



/* Function: FUN_00432bb0 @ 0x00432bb0 */

void __thiscall FUN_00432bb0(void *this,double param_1)

{
  double *pthis = (double *)this;
  double d1;
  float10 f2;
  float10 f3;

  f2 = (float10)fcos((float10)param_1);
  f3 = (float10)fsin((float10)param_1);
  d1 = *(double *)((char *)this + 0x04);
  *(double *)((char *)this + 0x04) =
       (double)(f2 * (float10)*(double *)((char *)this + 0x04) -
               (float10)*(double *)((char *)this + 0x0C) * f3);
  *(double *)((char *)this + 0x0C) =
       (double)((float10)*(double *)((char *)this + 0x0C) * f2 + (float10)d1 * f3);
  return;
}



/* Function: FUN_00432be0 @ 0x00432be0 */

float10 __fastcall FUN_00432be0(int param_1)

{
    /* TODO: 59 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00432cb6 @ 0x00432cb6 */

void FUN_00432cb6(void)

{
  int __saved_ebp;
  
  FUN_00432a50((int *)(__saved_ebp + -0x30));
  return;
}



/* Function: FUN_00432cc0 @ 0x00432cc0 */

float10 __fastcall FUN_00432cc0(int param_1)

{
  int n1;
  int *pu2;
  int *pu3;
  int *__seh_chain;
  float10 f4;
  char loc_34 [28];
  double loc_18;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00432d56;
  *__seh_chain = &loc_10;
  FUN_00432a10(loc_34,0,0,0,0xbff00000,0,0);
  loc_8 = 0;
  if (param_1 == 0) {
    pu2 = (int *)0x0;
  }
  else {
    pu2 = (int *)(param_1 + 4);
  }
  pu3 = (int *)&__stk_26;
  for (n1 = 6; n1 != 0; n1 = n1 + -1) {
    *pu3 = *pu2;
    pu2 = pu2 + 1;
    pu3 = pu3 + 1;
  }
  f4 = FUN_00432be0((int)loc_34);
  loc_18 = (double)f4;
  if (f4 < (float10)0.0) {
    loc_18 = loc_18 + 6.283185306;
  }
  loc_8 = 0xffffffff;
  FUN_00432d60();
  *__seh_chain = loc_10;
  return (float10)loc_18;
}



/* Function: FUN_00432d60 @ 0x00432d60 */

void FUN_00432d60(void)

{
  int __saved_ebp;
  
  FUN_00432a50((int *)(__saved_ebp + -0x30));
  return;
}



/* Function: FUN_00432d80 @ 0x00432d80 */

void FUN_00432d80(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488cb0,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00432dd0 @ 0x00432dd0 */

void FUN_00432dd0(void)

{
  return;
}



/* Function: FUN_00432df0 @ 0x00432df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432df0(void)

{
  _DAT_00488cbe = 0;
  _DAT_00488cbc = 0;
  return;
}



/* Function: FUN_00432e00 @ 0x00432e00 */

void FUN_00432e00(void)

{
  _atexit(FUN_00432e10);
  return;
}



/* Function: FUN_00432e10 @ 0x00432e10 */

void FUN_00432e10(void)

{
  return;
}



/* Function: FUN_00432e30 @ 0x00432e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432e30(void)

{
  _DAT_00488cba = 0;
  _DAT_00488cb8 = 0;
  return;
}



/* Function: FUN_00432e40 @ 0x00432e40 */

void FUN_00432e40(void)

{
  _atexit(FUN_00432e50);
  return;
}



/* Function: FUN_00432e50 @ 0x00432e50 */

void FUN_00432e50(void)

{
  return;
}



/* Function: FUN_00432e70 @ 0x00432e70 */

void FUN_00432e70(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488cc8,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00432eb0 @ 0x00432eb0 */

void FUN_00432eb0(void)

{
  _atexit(FUN_00432ec0);
  return;
}



/* Function: FUN_00432ec0 @ 0x00432ec0 */

void FUN_00432ec0(void)

{
  return;
}



/* Function: FUN_00432ee0 @ 0x00432ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432ee0(void)

{
  _DAT_00488cd6 = 0;
  _DAT_00488cd4 = 0;
  return;
}



/* Function: FUN_00432ef0 @ 0x00432ef0 */

void FUN_00432ef0(void)

{
  _atexit(FUN_00432f00);
  return;
}



/* Function: FUN_00432f00 @ 0x00432f00 */

void FUN_00432f00(void)

{
  return;
}



/* Function: FUN_00432f20 @ 0x00432f20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432f20(void)

{
  _DAT_00488cd2 = 0;
  _DAT_00488cd0 = 0;
  return;
}



/* Function: FUN_00432f30 @ 0x00432f30 */

void FUN_00432f30(void)

{
  _atexit(FUN_00432f40);
  return;
}



/* Function: FUN_00432f40 @ 0x00432f40 */

void FUN_00432f40(void)

{
  return;
}



/* Function: FUN_00432f50 @ 0x00432f50 */

/* WARNING: Removing unreachable block (ram,0x00432f76) */

short __cdecl FUN_00432f50(int param_1,ushort param_2)

{
  if (param_1 != 0) {
    if (*(ushort *)(param_1 + 8) != param_2) {
      *(short *)(param_1 + 8) = 4;
      if ((param_2 & 0xff) < 5) {
        *(ushort *)(param_1 + 8) = param_2 & 0xff;
      }
      if ((0 < (short)*(ushort *)(param_1 + 8)) && ((param_2 & 0x4000) != 0)) {
        *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x4000;
      }
    }
    return *(short *)(param_1 + 8);
  }
  return 0xfffe;
}



/* Function: FUN_00432fb0 @ 0x00432fb0 */

int __cdecl FUN_00432fb0(int param_1,short param_2,short param_3)

{
  bool b1;
  
  b1 = false;
  if (param_1 == 0) {
    return 0xfffefffe;
  }
  if (*(short *)(param_1 + 0xc) == param_2) {
    b1 = true;
  }
  else if (param_2 < 0) {
    *(short *)(param_1 + 0xc) = 0;
  }
  else {
    *(short *)(param_1 + 0xc) = 0xff;
    if (param_2 < 0x100) {
      *(short *)(param_1 + 0xc) = param_2;
    }
  }
  if ((*(short *)(param_1 + 0xe) != param_3) || (!b1)) {
    if (param_3 < 0) {
      *(short *)(param_1 + 0xe) = 0;
    }
    else {
      *(short *)(param_1 + 0xe) = 0xff;
      if (param_3 < 0x100) {
        *(short *)(param_1 + 0xe) = param_3;
      }
    }
  }
  return *(int *)(param_1 + 0xc);
}



/* Function: FUN_00433050 @ 0x00433050 */

int __cdecl FUN_00433050(int *param_1)

{
  ushort *pu1;
  int n2;
  char c3;
  int n4;
  int n5;
  char *pc6;
  int n7;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  param_1[5] = (int)param_1[1] / 0x73e;
  pu1 = FUN_0046f060(DAT_0047fc7c,(int)param_1[1] / 0x73e,1);
  param_1[4] = pu1;
  if (pu1 == (ushort *)0x0) {
    return 0xffffff94;
  }
  pc6 = (char *)*param_1;
  n7 = 0;
  n2 = 0;
  n5 = 0;
  n4 = 0;
  if (0 < (int)param_1[1]) {
    do {
      c3 = *pc6;
      if (c3 < '\0') {
        c3 = -c3;
      }
      n2 = n2 + c3;
      if (n4 == 0x73e) {
        n7 = n7 + 1;
        *(char *)(param_1[4] + -1 + n7) = (char)(n2 / 0x73e);
        n4 = 0;
        n2 = 0;
      }
      pc6 = pc6 + 1;
      n5 = n5 + 1;
      n4 = n4 + 1;
    } while (n5 < (int)param_1[1]);
  }
  n2 = n7 + -1;
  if (n7 < (int)param_1[5]) {
    do {
      n7 = n7 + 1;
      *(char *)(param_1[4] + -1 + n7) = *(char *)(param_1[4] + n2);
    } while (n7 < (int)param_1[5]);
  }
  return param_1[5];
}



/* Function: FUN_00433100 @ 0x00433100 */

ushort * FUN_00433100(void)

{
  ushort *pu1;
  
  pu1 = FUN_0046f060(DAT_0047fc7c,0x18,1);
  if (pu1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  pu1[0] = 0;
  pu1[1] = 0;
  pu1[2] = 0;
  pu1[3] = 0;
  pu1[4] = 0;
  pu1[5] = 0xff;
  pu1[6] = 0xff;
  pu1[7] = 0xff;
  pu1[8] = 0;
  pu1[9] = 0;
  pu1[10] = 0;
  pu1[0xb] = 0;
  return pu1;
}



/* Function: FUN_00433140 @ 0x00433140 */

int __cdecl FUN_00433140(ushort *param_1,int *param_2)

{
  int __reg_eax;
  short u4;
  ushort *pu1;
  int u2;
  uint u3;
  uint u5;
  int *pu6;
  ushort *loc_4;
  
  u4 = (short)((uint)__reg_eax >> 0x10);
  if (param_1 == (ushort *)0x0) {
    return CONCAT22(u4,0xfff9);
  }
  if (param_2 == (int *)0x0) {
    return CONCAT22(u4,0xfffe);
  }
  if (((((*param_1 & 1) == 0) && ((short)param_1[1] < 0x100)) && ((short)param_1[2] < 0x100)) &&
     ((short)param_1[3] < 0x100)) {
    loc_4 = FUN_00433100();
    if (loc_4 == (ushort *)0x0) {
      return 0xff94;
    }
    u3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(loc_4 + 2) = *(int *)(param_1 + 4);
      *(uint *)(loc_4 + 2) = *(uint *)(loc_4 + 2) & 0xfffffffe;
      pu1 = FUN_0046f060(DAT_0047fc7c,*(uint *)(loc_4 + 2),1);
      *(ushort **)loc_4 = pu1;
      if (*(int **)loc_4 == (int *)0x0) {
        u2 = FUN_00433270(&loc_4);
        return CONCAT22((short)((uint)u2 >> 0x10),0xff94);
      }
      u3 = *(uint *)(loc_4 + 2);
      pu1 = param_1 + 8;
      pu6 = *(int **)loc_4;
      for (u5 = u3 >> 2; u5 != 0; u5 = u5 - 1) {
        *pu6 = *(int *)pu1;
        pu1 = pu1 + 2;
        pu6 = pu6 + 1;
      }
      for (u5 = u3 & 3; u5 != 0; u5 = u5 - 1) {
        *(char *)pu6 = (char)*pu1;
        pu1 = (ushort *)((int)pu1 + 1);
        pu6 = (int *)((int)pu6 + 1);
      }
    }
    loc_4[4] = *param_1;
    loc_4[5] = param_1[1];
    loc_4[6] = param_1[2];
    loc_4[7] = param_1[3];
    *param_2 = loc_4;
    return u3 & 0xffff0000;
  }
  return CONCAT22(u4,0xfff9);
}



/* Function: FUN_00433270 @ 0x00433270 */

uint __cdecl FUN_00433270(int *param_1)

{
    /* TODO: 72 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00433420 @ 0x00433420 */

int __cdecl FUN_00433420(int *param_1)

{
    /* TODO: 87 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004335e0 @ 0x004335e0 */

void FUN_004335e0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488cd8,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00433630 @ 0x00433630 */

void FUN_00433630(void)

{
  return;
}



/* Function: FUN_00433650 @ 0x00433650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433650(void)

{
  _DAT_00488ce6 = 0;
  _DAT_00488ce4 = 0;
  return;
}



/* Function: FUN_00433660 @ 0x00433660 */

void FUN_00433660(void)

{
  _atexit(FUN_00433670);
  return;
}



/* Function: FUN_00433670 @ 0x00433670 */

void FUN_00433670(void)

{
  return;
}



/* Function: FUN_00433690 @ 0x00433690 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433690(void)

{
  _DAT_00488ce2 = 0;
  _DAT_00488ce0 = 0;
  return;
}



/* Function: FUN_004336a0 @ 0x004336a0 */

void FUN_004336a0(void)

{
  _atexit(FUN_004336b0);
  return;
}



/* Function: FUN_004336b0 @ 0x004336b0 */

void FUN_004336b0(void)

{
  return;
}



/* Function: FUN_004336c0 @ 0x004336c0 */

int * __fastcall FUN_004336c0(int *param_1)

{
    /* TODO: 35 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00433790 @ 0x00433790 */

int * __thiscall FUN_00433790(void *this,byte param_1)

{
  FUN_004337b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_004337b0 @ 0x004337b0 */

void __fastcall FUN_004337b0(int *param_1)

{
    /* TODO: 33 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00433876 @ 0x00433876 */

void FUN_00433876(void)

{
  int __saved_ebp;
  
  FUN_0041b890(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00433880 @ 0x00433880 */

char __fastcall FUN_00433880(UIElement *param_1)

{
  *(unsigned char *)((int)param_1 + 0x43) = 1; /* TODO: offset 0x43 in _pad42 region on UIElement */
  FUN_00430ac0((void *)param_1->field_06,param_1);
  *(unsigned char *)((int)param_1 + 0x43) = 0; /* TODO: offset 0x43 in _pad42 region on UIElement */
  return 1;
}



/* Function: FUN_00433a50 @ 0x00433a50 */

void FUN_00433a50(void)

{
  int __saved_ebp;
  
  FUN_004097c0((int *)(__saved_ebp + -0x24));
  return;
}



/* Function: FUN_00433a80 @ 0x00433a80 */

short __fastcall FUN_00433a80(int param_1)

{
  return *(short *)(param_1 + 0x56);
}



/* Function: FUN_00433aa0 @ 0x00433aa0 */

int * __thiscall FUN_00433aa0(void *this,short param_1)

{
    /* TODO: 217 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00433f8c @ 0x00433f8c */

void FUN_00433f8c(void)

{
  return;
}



/* Function: FUN_00433f94 @ 0x00433f94 */

void FUN_00433f94(void)

{
  return;
}



/* Function: FUN_00433f9c @ 0x00433f9c */

void FUN_00433f9c(void)

{
  int __saved_ebp;
  
  FUN_00451f60((int *)(__saved_ebp + -0x43c));
  return;
}



/* Function: FUN_00433fb1 @ 0x00433fb1 */

void FUN_00433fb1(void)

{
  return;
}



/* Function: FUN_0043406d @ 0x0043406d */

void FUN_0043406d(void)

{
  return;
}



/* Function: FUN_00434090 @ 0x00434090 */

uint __thiscall FUN_00434090(void *this,int param_1)

{
    /* TODO: 9 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00434130 @ 0x00434130 */

void FUN_00434130(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488ce8,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00434180 @ 0x00434180 */

void FUN_00434180(void)

{
  return;
}



/* Function: FUN_004341a0 @ 0x004341a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004341a0(void)

{
  _DAT_00488cf6 = 0;
  _DAT_00488cf4 = 0;
  return;
}



/* Function: FUN_004341b0 @ 0x004341b0 */

void FUN_004341b0(void)

{
  _atexit(FUN_004341c0);
  return;
}



/* Function: FUN_004341c0 @ 0x004341c0 */

void FUN_004341c0(void)

{
  return;
}



/* Function: FUN_004341e0 @ 0x004341e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004341e0(void)

{
  _DAT_00488cf2 = 0;
  _DAT_00488cf0 = 0;
  return;
}



/* Function: FUN_004341f0 @ 0x004341f0 */

void FUN_004341f0(void)

{
  _atexit(FUN_00434200);
  return;
}



/* Function: FUN_00434200 @ 0x00434200 */

void FUN_00434200(void)

{
  return;
}



/* Function: FUN_00434220 @ 0x00434220 */

void FUN_00434220(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488cf8,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00434260 @ 0x00434260 */

void FUN_00434260(void)

{
  _atexit(FUN_00434270);
  return;
}



/* Function: FUN_00434270 @ 0x00434270 */

void FUN_00434270(void)

{
  return;
}



/* Function: FUN_00434290 @ 0x00434290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434290(void)

{
  _DAT_00488d06 = 0;
  _DAT_00488d04 = 0;
  return;
}



/* Function: FUN_004342a0 @ 0x004342a0 */

void FUN_004342a0(void)

{
  _atexit(FUN_004342b0);
  return;
}



/* Function: FUN_004342b0 @ 0x004342b0 */

void FUN_004342b0(void)

{
  return;
}



/* Function: FUN_004342d0 @ 0x004342d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004342d0(void)

{
  _DAT_00488d02 = 0;
  _DAT_00488d00 = 0;
  return;
}



/* Function: FUN_004342e0 @ 0x004342e0 */

void FUN_004342e0(void)

{
  _atexit(FUN_004342f0);
  return;
}



/* Function: FUN_004342f0 @ 0x004342f0 */

void FUN_004342f0(void)

{
  return;
}



/* Function: FUN_00434300 @ 0x00434300 */

short * __cdecl FUN_00434300(int *param_1)

{
  uint *pu1;
  uint u2;
  int n3;
  int n4;
  short s5;
  short *ps6;
  
  s5 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return (short *)0x0;
  }
  if (0 < DAT_00487126) {
    do {
      n4 = (int)s5;
      if ((&DAT_00487132)[n4 * 0x3c] != 0) goto __label_00434392;
      s5 = s5 + 1;
    } while (s5 < DAT_00487126);
  }
  s5 = 0;
  if (0 < DAT_00487126) {
    do {
      n4 = (int)s5;
      if (((&DAT_00487134)[n4 * 0x3c] & 0xff) < (*(ushort *)(param_1 + 2) & 0xff)) {
__label_00434392:
        n3 = n4 * 0x78;
        ps6 = (short *)(&DAT_00487128 + n3);
        (&DAT_00487132)[n4 * 0x3c] = 1;
        *ps6 = *(short *)((int)param_1 + 0xa); /* TODO: unknown struct for param_1 */
        *(short *)(n3 + 0x48712a) = (short)param_1[3];
        *(short *)(n3 + 0x48712c) = *(short *)((int)param_1 + 0xe); /* TODO: unknown struct for param_1 */
        (&DAT_0048713a)[n4 * 0x1e] = *param_1;
        (&DAT_0048713e)[n4 * 0x1e] = param_1[1];
        (&DAT_00487142)[n4 * 0x1e] = param_1[1];
        (&DAT_00487146)[n4 * 0x1e] = param_1;
        if (((*(byte *)((int)&DAT_00487134 + n3 + 1) & 0x10) != 0) && /* TODO: DAT_00487134 sound slot flags byte */
           ((&DAT_00487136)[n4 * 0x1e] != 0)) {
          FUN_0046f5f0((&DAT_00487136)[n4 * 0x1e]);
        }
        (&DAT_00487134)[n4 * 0x3c] = 0;
        (&DAT_00487136)[n4 * 0x1e] = *param_1;
        (&DAT_00487134)[n4 * 0x3c] = (short)param_1[2];
        FUN_0045d7d0(ps6);
        if ((&DAT_0048714a)[n4 * 0x3c] != 0) {
          s5 = 0;
          (&DAT_0048714a)[n4 * 0x3c] = 0;
          do {
            pu1 = (uint *)((int)&DAT_0048714c + s5 * 0xe + n3);
            if (((*(byte *)((int)pu1 + 0xd) & 0x10) != 0) && (*pu1 != 0)) { /* TODO: sound slot sub-entry flags byte at +0xd */
              FUN_0046f5f0(*pu1);
            }
            s5 = s5 + 1;
            *pu1 = 0;
            *(short *)(pu1 + 3) = 0;
            pu1[1] = 0;
            pu1[2] = 0;
          } while (s5 < 6);
        }
        if (DAT_00487310 != 0) {
          s5 = 0;
          do {
            u2 = (&DAT_00487312)[s5];
            if (u2 != 0) {
              FUN_0046f5f0(u2);
              (&DAT_00487312)[s5] = 0;
            }
            s5 = s5 + 1;
          } while (s5 < 0x18);
          DAT_00487310 = 0;
        }
        (&DAT_00487132)[n4 * 0x3c] = 0;
        return ps6;
      }
      s5 = s5 + 1;
    } while (s5 < DAT_00487126);
  }
  return (short *)0x0;
}



/* Function: FUN_00434490 @ 0x00434490 */

int __cdecl FUN_00434490(int param_1)

{
  uint *pu1;
  uint u2;
  uint __reg_eax;
  int n3;
  int u4;
  ushort u5;
  short s6;
  short loc_2;
  
  if (param_1 == 0) {
    return CONCAT22((short)(__reg_eax >> 0x10),0xffff);
  }
  if (param_1 == -1) {
    loc_2 = 0;
    if (0 < DAT_00487126) {
      do {
        n3 = (int)loc_2;
        (&DAT_00487132)[n3 * 0x3c] = 1;
        if (((*(byte *)((int)&DAT_00487134 + n3 * 0x78 + 1) & 0x10) != 0) && /* TODO: DAT_00487134 sound slot flags byte */
           ((&DAT_00487136)[n3 * 0x1e] != 0)) {
          FUN_0046f5f0((&DAT_00487136)[n3 * 0x1e]);
          (&DAT_00487136)[n3 * 0x1e] = 0;
          (&DAT_00487134)[n3 * 0x3c] = 0;
        }
        s6 = 0;
        (&DAT_0048714a)[n3 * 0x3c] = 0;
        do {
          u5 = (ushort)((uint)(s6 * 7) >> 0x10);
          pu1 = (uint *)((int)&DAT_0048714c + s6 * 0xe + n3 * 0x78);
          if (((*(byte *)((int)pu1 + 0xd) & 0x10) != 0) && (u5 = 0, *pu1 != 0)) { /* TODO: sound slot sub-entry flags byte at +0xd */
            u4 = FUN_0046f5f0(*pu1);
            u5 = (ushort)((uint)u4 >> 0x10);
          }
          s6 = s6 + 1;
          *pu1 = 0;
          pu1[1] = 0;
          pu1[2] = 0;
          *(short *)(pu1 + 3) = 0;
        } while (s6 < 6);
        if (DAT_00487310 != 0) {
          s6 = 0;
          do {
            u2 = (&DAT_00487312)[s6];
            u5 = 0;
            if (u2 != 0) {
              u4 = FUN_0046f5f0(u2);
              u5 = (ushort)((uint)u4 >> 0x10);
              (&DAT_00487312)[s6] = 0;
            }
            s6 = s6 + 1;
          } while (s6 < 0x18);
          DAT_00487310 = 0;
        }
        loc_2 = loc_2 + 1;
      } while (loc_2 < DAT_00487126);
      return (uint)u5 << 0x10;
    }
  }
  else {
    *(short *)(param_1 + 10) = 1;
    if (((*(byte *)(param_1 + 0xd) & 0x10) != 0) && (*(uint *)(param_1 + 0xe) != 0)) {
      FUN_0046f5f0(*(uint *)(param_1 + 0xe));
      *(int *)(param_1 + 0xe) = 0;
      *(short *)(param_1 + 0xc) = 0;
    }
    s6 = 0;
    *(short *)(param_1 + 0x22) = 0;
    do {
      __reg_eax = s6 * 7;
      pu1 = (uint *)(param_1 + 0x24 + s6 * 0xe);
      if (((*(byte *)((int)pu1 + 0xd) & 0x10) != 0) && (__reg_eax = 0, *pu1 != 0)) { /* TODO: sound slot sub-entry flags byte at +0xd */
        __reg_eax = FUN_0046f5f0(*pu1);
      }
      s6 = s6 + 1;
      *pu1 = 0;
      pu1[1] = 0;
      pu1[2] = 0;
      *(short *)(pu1 + 3) = 0;
    } while (s6 < 6);
    if (DAT_00487310 != 0) {
      s6 = 0;
      do {
        u2 = (&DAT_00487312)[s6];
        __reg_eax = 0;
        if (u2 != 0) {
          __reg_eax = FUN_0046f5f0(u2);
          (&DAT_00487312)[s6] = 0;
        }
        s6 = s6 + 1;
      } while (s6 < 0x18);
      DAT_00487310 = 0;
    }
  }
  return __reg_eax & 0xffff0000;
}



/* Function: FUN_00434640 @ 0x00434640 */

int __cdecl FUN_00434640(int *param_1,int param_2)

{
  int *pn1;
  uint u2;
  int n3;
  int __reg_eax;
  short u5;
  void *pu4;
  short s6;
  short s7;
  bool b8;
  
  u5 = (short)((uint)__reg_eax >> 0x10);
  if (param_2 == 0) {
    return CONCAT22(u5,0xffff);
  }
  if (param_1 == (int *)0x0) {
    return CONCAT22(u5,0xfffe);
  }
  if (*(short *)(param_2 + 0x22) == 6) {
    return CONCAT22((short)((uint)param_2 >> 0x10),0xfffb);
  }
  b8 = *(short *)(param_2 + 10) == 0;
  if (b8) {
    *(short *)(param_2 + 10) = 1;
  }
  s7 = 0;
  if (0 < DAT_00487126) {
    do {
      n3 = s7 * 0x78;
      if ((&DAT_0048714a)[s7 * 0x3c] != 0) {
        s6 = 0;
        do {
          if (*(int *)((int)&DAT_0048714c + s6 * 0xe + n3) == *param_1) { /* TODO: DAT_0048714c sound slot sub-entry, stride 0x0E */
            pu4 = &DAT_00487128 + n3;
            if (b8) {
              *(short *)(param_2 + 10) = 0;
              pu4 = (void *)param_2;
            }
            return CONCAT22((short)((uint)pu4 >> 0x10),0xfff8);
          }
          s6 = s6 + 1;
        } while (s6 < 6);
      }
      s7 = s7 + 1;
    } while (s7 < DAT_00487126);
  }
  pn1 = (int *)(param_2 + 0x24 + *(short *)(param_2 + 0x22) * 0xe);
  *pn1 = *param_1;
  u2 = param_1[1];
  pn1[1] = u2;
  pn1[2] = (int)param_1;
  *(short *)(pn1 + 3) = 0;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x20;
  *(short *)(param_2 + 0x22) = *(short *)(param_2 + 0x22) + 1;
  if (b8) {
    *(short *)(param_2 + 10) = 0;
  }
  return u2 & 0xffff0000;
}



/* Function: FUN_00434780 @ 0x00434780 */

void FUN_00434780(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d08,u1,__param_fffffff4);
  return;
}



/* Function: FUN_004347d0 @ 0x004347d0 */

void FUN_004347d0(void)

{
  return;
}



/* Function: FUN_004347f0 @ 0x004347f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004347f0(void)

{
  _DAT_00488d16 = 0;
  _DAT_00488d14 = 0;
  return;
}



/* Function: FUN_00434800 @ 0x00434800 */

void FUN_00434800(void)

{
  _atexit(FUN_00434810);
  return;
}



/* Function: FUN_00434810 @ 0x00434810 */

void FUN_00434810(void)

{
  return;
}



/* Function: FUN_00434830 @ 0x00434830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434830(void)

{
  _DAT_00488d12 = 0;
  _DAT_00488d10 = 0;
  return;
}



/* Function: FUN_00434840 @ 0x00434840 */

void FUN_00434840(void)

{
  _atexit(FUN_00434850);
  return;
}



/* Function: FUN_00434850 @ 0x00434850 */

void FUN_00434850(void)

{
  return;
}



/* Function: FUN_00434860 @ 0x00434860 */

int * __fastcall FUN_00434860(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_004348fc;
  *__seh_chain = &loc_10;
  FUN_0041b6c0(param_1);
  loc_8 = 0;
  FUN_0043b760((int *)((int)param_1 + 0x42)); /* TODO: unknown struct, offset 0x42 */
  *(short *)(param_1 + 0x17) = 0;
  *(short *)((int)param_1 + 0x5a) = 0; /* TODO: unknown struct, offset 0x5a */
  *(int *)((int)param_1 + 0x62) = 0; /* TODO: unknown struct, offset 0x62 */
  *(short *)(param_1 + 0x17) = 0;
  *param_1 = &PTR_FUN_00474448;
  *(short *)((int)param_1 + 0x5a) = 0; /* TODO: unknown struct, offset 0x5a */
  *(unsigned char *)((int)param_1 + 0x5e) = 0xff; /* TODO: unknown struct, offset 0x5e */
  *(unsigned char *)((int)param_1 + 0x5f) = 0xff; /* TODO: unknown struct, offset 0x5f */
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(int *)((int)param_1 + 0x66) = 0; /* TODO: unknown struct, offset 0x66 */
  *(int *)((int)param_1 + 0x62) = 0x100; /* TODO: unknown struct, offset 0x62 */
  *__seh_chain = loc_10;
  return param_1;
}



/* Function: FUN_00434974 @ 0x00434974 */

void FUN_00434974(void)

{
  return;
}



/* Function: FUN_0043497f @ 0x0043497f */

void FUN_0043497f(void)

{
  int __saved_ebp;
  
  FUN_0043b810((int *)(*(int *)(__saved_ebp + -0x10) + 0x42));
  return;
}



/* Function: FUN_00434994 @ 0x00434994 */

void FUN_00434994(void)

{
  int __saved_ebp;
  
  FUN_0041b890(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_004349a0 @ 0x004349a0 */

void __thiscall FUN_004349a0(SoundPlayer *this,short param_1,short param_2)

{
  this->sequence_data[5] = param_1;
  this->sequence_data[4] = param_2;
  FUN_0041cad0(this);
  return;
}



/* Function: FUN_004349e0 @ 0x004349e0 */

void __fastcall FUN_004349e0(void *param_1)

{
    /* TODO: 163 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00434b6c @ 0x00434b6c */

void FUN_00434b6c(void)

{
  return;
}



/* Function: FUN_00434b74 @ 0x00434b74 */

void FUN_00434b74(void)

{
  return;
}



/* Function: FUN_00434d5b @ 0x00434d5b */

void FUN_00434d5b(void)

{
  return;
}



/* Function: FUN_00434d63 @ 0x00434d63 */

void FUN_00434d63(void)

{
  return;
}



/* Function: FUN_00434d6b @ 0x00434d6b */

void FUN_00434d6b(void)

{
  return;
}



/* Function: FUN_00434d7b @ 0x00434d7b */

void FUN_00434d7b(void)

{
  return;
}



/* Function: FUN_00434d8d @ 0x00434d8d */

void FUN_00434d8d(void)

{
  return;
}



/* Function: FUN_00434da0 @ 0x00434da0 */

short * __thiscall FUN_00434da0(GameWidget *this,short *param_1)

{
  int u1;
  short u2;
  int *__seh_chain;
  char loc_10 [12];
  
  u1 = *__seh_chain;
  u2 = this->flags;
  *__seh_chain = loc_10;
  param_1[1] = u2;
  *param_1 = this->field_10;
  *__seh_chain = u1;
  return param_1;
}



/* Function: FUN_00434e10 @ 0x00434e10 */

char FUN_00434e10(void *param_1,int param_2,short param_3,short param_4)

{
    /* TODO: 94 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0043502b @ 0x0043502b */

void FUN_0043502b(void)

{
  return;
}



/* Function: FUN_0043503d @ 0x0043503d */

void FUN_0043503d(void)

{
  int __saved_ebp;
  
  FUN_00465af0((int *)(__saved_ebp + -0x4c));
  return;
}



/* Function: FUN_00435060 @ 0x00435060 */

void FUN_00435060(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d18,u1,__param_fffffff4);
  return;
}



/* Function: FUN_004350b0 @ 0x004350b0 */

void FUN_004350b0(void)

{
  return;
}



/* Function: FUN_004350d0 @ 0x004350d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004350d0(void)

{
  _DAT_00488d26 = 0;
  _DAT_00488d24 = 0;
  return;
}



/* Function: FUN_004350e0 @ 0x004350e0 */

void FUN_004350e0(void)

{
  _atexit(FUN_004350f0);
  return;
}



/* Function: FUN_004350f0 @ 0x004350f0 */

void FUN_004350f0(void)

{
  return;
}



/* Function: FUN_00435110 @ 0x00435110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435110(void)

{
  _DAT_00488d22 = 0;
  _DAT_00488d20 = 0;
  return;
}



/* Function: FUN_00435120 @ 0x00435120 */

void FUN_00435120(void)

{
  _atexit(FUN_00435130);
  return;
}



/* Function: FUN_00435130 @ 0x00435130 */

void FUN_00435130(void)

{
  return;
}



/* Function: FUN_00435150 @ 0x00435150 */

void FUN_00435150(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d38,u1,__param_fffffff4);
  return;
}



/* Function: FUN_00435190 @ 0x00435190 */

void FUN_00435190(void)

{
  _atexit(FUN_004351a0);
  return;
}



/* Function: FUN_004351a0 @ 0x004351a0 */

void FUN_004351a0(void)

{
  return;
}



/* Function: FUN_004351c0 @ 0x004351c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004351c0(void)

{
  _DAT_00488d5a = 0;
  _DAT_00488d58 = 0;
  return;
}



/* Function: FUN_004351d0 @ 0x004351d0 */

void FUN_004351d0(void)

{
  _atexit(FUN_004351e0);
  return;
}



/* Function: FUN_004351e0 @ 0x004351e0 */

void FUN_004351e0(void)

{
  return;
}



/* Function: FUN_00435200 @ 0x00435200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435200(void)

{
  _DAT_00488d56 = 0;
  _DAT_00488d54 = 0;
  return;
}



/* Function: FUN_00435210 @ 0x00435210 */

void FUN_00435210(void)

{
  _atexit(FUN_00435220);
  return;
}



/* Function: FUN_00435220 @ 0x00435220 */

void FUN_00435220(void)

{
  return;
}



/* Function: FUN_00435980 @ 0x00435980 */

int * __fastcall FUN_00435980(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_004359d2;
  *__seh_chain = &loc_10;
  FUN_0044e3f0(param_1);
  loc_8 = 0;
  *param_1 = &PTR_FUN_00474658;
  FUN_00435a60((int)param_1);
  *__seh_chain = loc_10;
  return param_1;
}



/* Function: FUN_00435a49 @ 0x00435a49 */

void FUN_00435a49(void)

{
  FUN_004012a0();
  return;
}



/* Function: FUN_00435a60 @ 0x00435a60 */

void __fastcall FUN_00435a60(int param_1)

{
  *(int *)(param_1 + 0x11a) = 0;
  *(int *)(param_1 + 0x11e) = 0x1e;
  *(char *)(param_1 + 0x122) = 1;
  *(char *)(param_1 + 0x118) = 1;
  *(char *)(param_1 + 0x123) = 1;
  return;
}



/* Function: FUN_00435a90 @ 0x00435a90 */

void __fastcall FUN_00435a90(int param_1)

{
  *(int *)(param_1 + 0x11a) = 0;
  *(char *)(param_1 + 0x122) = 1;
  *(char *)(param_1 + 0x123) = 1;
  return;
}



/* Function: FUN_00435ab0 @ 0x00435ab0 */

void __thiscall FUN_00435ab0(SoundPlayer *this,int param_1)

{
  FUN_00435a60((intptr_t)this);
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  this->sequence_data[51] = 0;
  FUN_00405d30(this,0);
  this->sequence_data[52] = param_1;
  this->sequence_data[52] = 1;
  FUN_004058c0(this,(short)param_1);
  this->sequence_data[54] = 0;
  return;
}



/* Function: FUN_00435b00 @ 0x00435b00 */

void __fastcall FUN_00435b00(int *param_1)

{
  int n1;
  
  if ((char)param_1[0x46] == '\0') {
    FUN_00405cb0(param_1);
    return;
  }
  if (((*(char *)(DAT_004896b0 + 0x28) == '\0') && (*(char *)((int)param_1 + 0x123) == '\0')) && /* TODO: unknown struct, offset 0x123 */
     (n1 = *(int *)((int)param_1 + 0x11e) + -1, *(int *)((int)param_1 + 0x11e) = n1, n1 < 1 /* TODO: unknown struct, offset 0x11e */
     )) {
    n1 = (short)param_1[0x44] + -1;
    if (n1 < 1) {
      ((void (*)(void))((void **)(**(int **)(DAT_004897c0 + 0x52)))[0xac / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[43] */
    }
    else {
      FUN_004058c0(param_1,(short)n1);
    }
    *(int *)((int)param_1 + 0x11e) = 0x1e; /* TODO: unknown struct, offset 0x11e */
  }
  return;
}



/* Function: FUN_00435b70 @ 0x00435b70 */

void __thiscall FUN_00435b70(UIWidget *this,short param_1)

{
  int n1;

  n1 = (int)this->cell_count - (int)param_1;
  if (n1 < 1) {
    n1 = 1;
  }
  FUN_004058c0(this,(short)n1);
  return;
}



/* Function: FUN_00435ba0 @ 0x00435ba0 */

int * __fastcall FUN_00435ba0(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_00435bef;
  *__seh_chain = &loc_10;
  FUN_004535d0(param_1);
  *param_1 = &PTR_FUN_00474700;
  param_1[0x46] = 0;
  *__seh_chain = loc_10;
  return param_1;
}



/* Function: FUN_00435c10 @ 0x00435c10 */

int * __thiscall FUN_00435c10(void *this,byte param_1)

{
  FUN_00435c30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00435c30 @ 0x00435c30 */

void __fastcall FUN_00435c30(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00435c79;
  *param_1 = &PTR_FUN_00474700;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  FUN_00435d70(param_1);
  loc_8 = 0xffffffff;
  FUN_00435c83();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00435c83 @ 0x00435c83 */

void FUN_00435c83(void)

{
  FUN_00429f40();
  return;
}



/* Function: FUN_00435c90 @ 0x00435c90 */

void __fastcall FUN_00435c90(int *param_1)

{
  FUN_00435d70(param_1);
  FUN_00405570(param_1);
  return;
}



/* Function: FUN_00435cb0 @ 0x00435cb0 */

void __fastcall FUN_00435cb0(int param_1)

{
    /* TODO: 27 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00435d70 @ 0x00435d70 */

void __fastcall FUN_00435d70(DialogWidget *param_1)

{
  if (param_1->prev_dialog != (void *)0x0) {
    FUN_00436100(param_1);
    ((void (*)(void))**(void ***)&param_1->prev_dialog)(); /* prev_dialog->vtable[0] */
    param_1->prev_dialog = (void *)0x0;
  }
  return;
}



/* Function: FUN_00435da0 @ 0x00435da0 */

void __thiscall FUN_00435da0(void *this,int param_1)

{
  char c1;
  void *pv2;
  int n3;
  int n4;
  int n5;
  char *pc6;
  void *pv7;
  short s8;
  int n9;
  int *__seh_chain;
  int loc_1c;
  int loc_18;
  void *loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_004360e7;
  *__seh_chain = &loc_10;
  loc_18 = 0;
  loc_1c = 0;
  loc_8 = 0;
  loc_14 = this;
  if (((DialogWidget *)this)->prev_dialog == (void *)0x0) {
    FUN_00435cb0((intptr_t)this);
  }
  pv2 = (void *)FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
  n3 = FUN_00432770(pv2,'0',0,1);
  if (n3 != -1) {
    while( true ) {
      n3 = 0;
      pv2 = (void *)FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      n4 = FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      if ((*(int **)(n4 + 4) != (int *)0x0) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != (char *)0x0)) {
        c1 = *pc6;
        while (c1 != '\0') {
          pc6 = pc6 + 1;
          n3 = n3 + 1;
          c1 = *pc6;
        }
      }
      n4 = FUN_004327e0(pv2,'0',0,1);
      if (n4 - n3 != -1) break;
      n3 = 0;
      n4 = FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      if ((*(int **)(n4 + 4) != (int *)0x0) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != (char *)0x0)) {
        c1 = *pc6;
        while (c1 != '\0') {
          pc6 = pc6 + 1;
          n3 = n3 + 1;
          c1 = *pc6;
        }
      }
      pv2 = (void *)FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      n3 = n3 + -1;
      if (-1 < n3) {
        n4 = 0;
        if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != (int *)0x0) &&
           (pc6 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc6 != (char *)0x0)) {
          c1 = *pc6;
          while (c1 != '\0') {
            pc6 = pc6 + 1;
            n4 = n4 + 1;
            c1 = *pc6;
          }
        }
        n9 = 1;
        if (n3 < n4) {
          while (((n4 = n9, n9 == -1 || (n4 = n9 + -1, n9 != 0)) &&
                 (n3 = FUN_00432770(pv2,'0',n3,1), n3 != -1))) {
            n5 = FUN_00417570((int)pv2);
            n9 = n4;
            if (n3 < n5) {
              pv7 = (void *)(**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ + n3);
              memmove(pv7,(void *)((int)pv7 + 1),(n5 - n3) + 1);
            }
          }
        }
      }
    }
    n3 = 0;
    pv2 = (void *)FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
    n4 = FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
    if ((*(int **)(n4 + 4) != (int *)0x0) &&
       (pc6 = (char *)**(int **)(n4 + 4), pc6 != (char *)0x0)) {
      c1 = *pc6;
      while (c1 != '\0') {
        pc6 = pc6 + 1;
        n3 = n3 + 1;
        c1 = *pc6;
      }
    }
    n4 = FUN_004327e0(pv2,'.',0,1);
    if (n4 - n3 == -1) {
      n3 = 0;
      n4 = FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      if ((*(int **)(n4 + 4) != (int *)0x0) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != (char *)0x0)) {
        c1 = *pc6;
        while (c1 != '\0') {
          pc6 = pc6 + 1;
          n3 = n3 + 1;
          c1 = *pc6;
        }
      }
      pv2 = (void *)FUN_004589f0(((DialogWidget *)loc_14)->prev_dialog);
      n3 = n3 + -1;
      if (-1 < n3) {
        n4 = 0;
        if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != (int *)0x0) &&
           (pc6 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc6 != (char *)0x0)) {
          c1 = *pc6;
          while (c1 != '\0') {
            pc6 = pc6 + 1;
            n4 = n4 + 1;
            c1 = *pc6;
          }
        }
        n9 = 1;
        if (n3 < n4) {
          while (((n4 = n9, n9 == -1 || (n4 = n9 + -1, n9 != 0)) &&
                 (n3 = FUN_00432770(pv2,'.',n3,1), n3 != -1))) {
            n5 = FUN_00417570((int)pv2);
            n9 = n4;
            if (n3 < n5) {
              pv7 = (void *)(**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ + n3);
              memmove(pv7,(void *)((int)pv7 + 1),(n5 - n3) + 1);
            }
          }
        }
      }
    }
  }
  s8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pc6 = (char *)**(int **)(param_1 + 4), pc6 != (char *)0x0)) {
    c1 = *pc6;
    s8 = 0;
    while (c1 != '\0') {
      pc6 = pc6 + 1;
      s8 = s8 + 1;
      c1 = *pc6;
    }
  }
  FUN_00458b40(((DialogWidget *)loc_14)->prev_dialog,s8 + 1,1);
  FUN_00458920(((DialogWidget *)loc_14)->prev_dialog,param_1);
  FUN_0041d780(((DialogWidget *)loc_14)->prev_dialog,((UIElement *)loc_14)->parent_widget);
  FUN_0041cde0(loc_14,&loc_1c);
  FUN_0041d3a0(((DialogWidget *)loc_14)->prev_dialog,loc_18,loc_1c,'\0');
  FUN_0041bb70(loc_14,((DialogWidget *)loc_14)->prev_dialog,'\x01');
  FUN_0041dd40(((DialogWidget *)loc_14)->prev_dialog);
  FUN_0041dad0(((DialogWidget *)loc_14)->prev_dialog,1,'\0');
  FUN_0041da90(((DialogWidget *)loc_14)->prev_dialog,1);
  loc_8 = 0xffffffff;
  FUN_004360f1();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_004360f1 @ 0x004360f1 */

void FUN_004360f1(void)

{
  return;
}



/* Function: FUN_00436100 @ 0x00436100 */

void __fastcall FUN_00436100(DialogWidget *param_1)

{
  if (param_1->prev_dialog != (void *)0x0) {
    FUN_0041bd00(param_1,(int)param_1->prev_dialog);
    FUN_0041d780(param_1->prev_dialog,(void *)0x0);
    FUN_0041dad0(param_1->prev_dialog,0,'\0');
  }
  return;
}



/* Function: FUN_00436140 @ 0x00436140 */

void __thiscall FUN_00436140(DialogWidget *this,int *param_1)

{
  FUN_0041d3a0(this->prev_dialog,param_1[1],*param_1,'\x01');
  return;
}



/* Function: FUN_00436160 @ 0x00436160 */

int * __thiscall FUN_00436160(SoundPlayer *this,int param_1,int *param_2)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_004361f1;
  *__seh_chain = &loc_10;
  FUN_00435ba0(this);
  this->sequence_data[58] = 0;
  this->sequence_data[59] = 0;
  this->sequence_data[58] = 0;
  loc_8 = 1;
  *(void ***)this = &PTR_FUN_004747a8;
  if (param_1 != -1) {
    FUN_00436230(param_1,param_2);
  }
  *__seh_chain = loc_10;
  return this;
}



/* Function: FUN_00436210 @ 0x00436210 */

int * __thiscall FUN_00436210(void *this,byte param_1)

{
  FUN_00436400(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00436230 @ 0x00436230 */

void FUN_00436230(int param_1,int *param_2)

{
    /* TODO: 73 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00436367 @ 0x00436367 */

void FUN_00436367(void)

{
  return;
}



/* Function: FUN_004363f2 @ 0x004363f2 */

void FUN_004363f2(void)

{
  return;
}



/* Function: FUN_00436400 @ 0x00436400 */

void __fastcall FUN_00436400(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00436458;
  *param_1 = &PTR_FUN_004747a8;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  FUN_0043644a();
  loc_8 = 0xffffffff;
  FUN_00436462();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_0043644a @ 0x0043644a */

void FUN_0043644a(void)

{
  return;
}



/* Function: FUN_00436462 @ 0x00436462 */

void FUN_00436462(void)

{
  int __saved_ebp;
  
  FUN_00435c30(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_0043650d @ 0x0043650d */

void FUN_0043650d(void)

{
  return;
}



/* Function: FUN_00436530 @ 0x00436530 */

int * __thiscall FUN_00436530(void *this,int param_1,int *param_2)

{
    /* TODO: 27 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004365f0 @ 0x004365f0 */

int * __thiscall FUN_004365f0(void *this,byte param_1)

{
  FUN_00436610(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00436610 @ 0x00436610 */

void __fastcall FUN_00436610(int *param_1)

{
    /* TODO: 19 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_0043667c @ 0x0043667c */

void FUN_0043667c(void)

{
  int __saved_ebp;
  
  FUN_00436400(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00436690 @ 0x00436690 */

void __fastcall FUN_00436690(GameWidget *param_1)

{
  if (param_1->slot_ptr_0 != (void *)0x0) {
    ((void (*)(void))**(void ***)&param_1->slot_ptr_0)(); /* slot_ptr_0->vtable[0] */
    param_1->slot_ptr_0 = (void *)0x0;
  }
  FUN_00435c90(param_1);
  return;
}



/* Function: FUN_004366c0 @ 0x004366c0 */

void __fastcall FUN_004366c0(GameWidget *this)

{
  if (this->slot_ptr_0 != (void *)0x0) {
    ((void (*)(void))**(void ***)&this->slot_ptr_0)(); /* slot_ptr_0->vtable[0] */
    this->slot_ptr_0 = (void *)0x0;
  }
  return;
}



/* Function: FUN_004366e0 @ 0x004366e0 */

void __thiscall FUN_004366e0(GameWidget *this,short param_1,short param_2)

{
  int *__seh_chain;
  int loc_18 [3];
  char *__seh_handler;
  int loc_8;
  
  loc_18[2] = *__seh_chain;
  __seh_handler = &__label_00436799;
  *__seh_chain = loc_18 + 2;
  loc_18[1] = 0;
  loc_18[0] = 0;
  loc_8 = 0;
  FUN_0041cde0(this,loc_18);
  FUN_00406720(this->slot_ptr_0,param_1);
  FUN_0041d780(this->slot_ptr_0,this->parent_widget);
  FUN_0041dd40(this->slot_ptr_0);
  FUN_0041dad0(this->slot_ptr_0,1,'\0');
  FUN_0041d2d0(this->slot_ptr_0,loc_18,'\0');
  if (param_2 != 0) {
    FUN_00406ca0(this->slot_ptr_0,(char)param_2,'\0');
  }
  loc_8 = 0xffffffff;
  FUN_004367a3();
  *__seh_chain = loc_18[2];
  return;
}



/* Function: FUN_004367a3 @ 0x004367a3 */

void FUN_004367a3(void)

{
  return;
}



/* Function: FUN_004367b0 @ 0x004367b0 */

void __fastcall FUN_004367b0(GameWidget *this)

{
  FUN_0041dad0(this->slot_ptr_0,0,'\0');
  FUN_0041d780(this->slot_ptr_0,(void *)0x0);
  return;
}



/* Function: FUN_004367e0 @ 0x004367e0 */

void __fastcall FUN_004367e0(GameWidget *param_1)

{
  FUN_0041dd40(param_1);
  FUN_0041dd40(param_1->slot_ptr_0);
  return;
}



/* Function: FUN_00436800 @ 0x00436800 */

int * __fastcall FUN_00436800(int *param_1)

{
    /* TODO: 82 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00436a50 @ 0x00436a50 */

int * __thiscall FUN_00436a50(void *this,byte param_1)

{
  FUN_00436ae0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_00436a70 @ 0x00436a70 */

void FUN_00436a70(void)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00436ac2;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  FUN_00436ab4();
  loc_8 = 0xffffffff;
  FUN_00436acc();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00436ab4 @ 0x00436ab4 */

void FUN_00436ab4(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(*(int *)(__saved_ebp + -0x10) + 0x1d2));
  return;
}



/* Function: FUN_00436acc @ 0x00436acc */

void FUN_00436acc(void)

{
  FUN_00411360();
  return;
}



/* Function: FUN_00436ae0 @ 0x00436ae0 */

void __fastcall FUN_00436ae0(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00436b9b;
  *param_1 = &PTR_FUN_00474900;
  *__seh_chain = &loc_10;
  loc_8 = (loc_8 & ~0xFF) | 4;
  loc_8 = (loc_8 & 0xFF) | (0 << 8);
  FUN_00436b55();
  loc_8 = (loc_8 & ~0xFF) | 3;
  FUN_00436b63();
  loc_8 = (loc_8 & ~0xFF) | 2;
  FUN_00436b71();
  loc_8 = (loc_8 & ~0xFF) | 1;
  FUN_00436b7f();
  loc_8 &= ~0xFF;
  FUN_00436b8d();
  loc_8 = 0xffffffff;
  FUN_00436ba5();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00436b55 @ 0x00436b55 */

void FUN_00436b55(void)

{
  int __saved_ebp;
  
  FUN_0043a0b0((int *)(*(int *)(__saved_ebp + -0x10) + 0x5ce));
  return;
}



/* Function: FUN_00436b63 @ 0x00436b63 */

void FUN_00436b63(void)

{
  FUN_00436a70();
  return;
}



/* Function: FUN_00436b71 @ 0x00436b71 */

void FUN_00436b71(void)

{
  int __saved_ebp;
  
  FUN_0042f0a0((int *)(*(int *)(__saved_ebp + -0x10) + 0x2fe));
  return;
}



/* Function: FUN_00436b7f @ 0x00436b7f */

void FUN_00436b7f(void)

{
  int __saved_ebp;
  
  FUN_0043a080((int *)(*(int *)(__saved_ebp + -0x10) + 0x2e0));
  return;
}



/* Function: FUN_00436b8d @ 0x00436b8d */

void FUN_00436b8d(void)

{
  int __saved_ebp;
  
  FUN_0040ac40((int *)(*(int *)(__saved_ebp + -0x10) + 0x1b4));
  return;
}



/* Function: FUN_00436ba5 @ 0x00436ba5 */

void FUN_00436ba5(void)

{
  int __saved_ebp;
  
  FUN_0042cd10(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_00436bb0 @ 0x00436bb0 */

void __thiscall FUN_00436bb0(TextDisplay *this,void *param_1)

{
  void *_Src;
  uint u1;
  int *pn2;
  uint u3;
  
  if (param_1 != (void *)0x0) {
    u3 = 0;
    u1 = this->data_count;
    if (u1 != 0) {
      pn2 = (int *)*this->pp_data;
      do {
        if ((void *)*pn2 == param_1) {
          u3 = u3 + 1;
          goto __label_00436be1;
        }
        pn2 = pn2 + 1;
        u3 = u3 + 1;
      } while (u3 < u1);
    }
    u3 = 0;
__label_00436be1:
    if ((u3 != 0) && (u3 <= u1)) {
      if (u3 < u1) {
        _Src = (void *)(*this->pp_data + u3 * 4);
        memmove((void *)((int)_Src + -4),_Src,(u1 - u3) * 4);
      }
      this->data_count = this->data_count + -1;
    }
    FUN_004535c0(param_1);
    FUN_0041d780(param_1,(void *)0x0);
    FUN_00436100(param_1);
  }
  return;
}



/* Function: FUN_00436c40 @ 0x00436c40 */

uint __fastcall FUN_00436c40(void *param_1)

{
    /* TODO: 99 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00436e60 @ 0x00436e60 */

int __cdecl FUN_00436e60(uint param_1)

{
  int n1;
  
  n1 = rand();
  return (int)(n1 * (param_1 & 0xffff)) / 0x7fff;
}



/* Function: FUN_00436e80 @ 0x00436e80 */

char __cdecl FUN_00436e80(int param_1,int param_2)

{
  char c1;
  char u2;
  uint u3;
  int n4;
  
  if ((*(int *)(param_1 + 0x36) != 0) && (u3 = 1, 1 < *(uint *)(*(int *)(param_1 + 0x36) + 0xe)))
  {
    n4 = 4;
    do {
      c1 = FUN_00436e80(*(int *)(**(int **)(*(int *)(param_1 + 0x36) + 4) + -4 + n4),param_2);
      if (c1 != '\0') {
        return 1;
      }
      n4 = n4 + 4;
      u3 = u3 + 1;
    } while (u3 < *(uint *)(*(int *)(param_1 + 0x36) + 0xe));
  }
  u2 = FUN_00406fc0(param_1,param_2);
  return u2;
}



/* Function: FUN_00436ef0 @ 0x00436ef0 */

uint __fastcall FUN_00436ef0(int *param_1)

{
    /* TODO: 128 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_00437290 @ 0x00437290 */

void __thiscall FUN_00437290(void *this,void *param_1)

{
  int *__seh_chain;
  int u1;
  int __param_ffffffcc;
  int loc_1c [2];
  char *loc_14;
  int loc_10;
  char *__seh_handler;
  uint loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00437340;
  *__seh_chain = &loc_10;
  loc_1c[1] = 0;
  loc_1c[0] = 0;
  loc_8 = 0;
  u1 = 0;
  FUN_00401050(&__stk_34,0);
  FUN_00401050(&__stk_33,0);
  FUN_00401270((void *)((int)param_1 + 0x132),u1,__param_ffffffcc); /* TODO: unknown offset 0x132 on GameWidget (in field_130 or _pad134 range) */
  FUN_0041cde0(param_1,loc_1c);
  FUN_00436bb0(this,param_1);
  loc_14 = &__stk_33;
  FUN_004090c0(&__stk_33,loc_1c);
  loc_8 = loc_8 & 0xffffff00;
  FUN_00438030((int)this);
  loc_8 = 0xffffffff;
  FUN_0043734a();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_0043734a @ 0x0043734a */

void FUN_0043734a(void)

{
  return;
}



/* Function: FUN_00437360 @ 0x00437360 */

void __fastcall FUN_00437360(void *param_1)

{
    /* TODO: 151 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_004377ab @ 0x004377ab */

void FUN_004377ab(void)

{
  return;
}



/* Function: FUN_004377c0 @ 0x004377c0 */

void __fastcall FUN_004377c0(int param_1)

{
    /* TODO: 66 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00437963 @ 0x00437963 */

void FUN_00437963(void)

{
  return;
}



/* Function: FUN_00437975 @ 0x00437975 */

void FUN_00437975(void)

{
  return;
}



/* Function: FUN_00437980 @ 0x00437980 */

void __fastcall FUN_00437980(int param_1)

{
  uint u1;
  void *pv2;
  uint u3;
  int *__seh_chain;
  int loc_20 [3];
  void *loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00437ae5;
  *__seh_chain = &loc_10;
  loc_20[1] = 0;
  loc_20[0] = 0;
  loc_8 = 0;
  loc_20[2] = *(uint *)(param_1 + 0x5dc);
  for (u3 = loc_20[2] * 4; 3 < u3; u3 = u3 - 4) {
    loc_14 = *(void **)(**(int **)(param_1 + 0x5d2) + -4 + u3);
    if ((loc_14 != (void *)0x0) && (((UIElement *)loc_14)->parent_widget != (void *)0x0)) {
      FUN_0041cde0(loc_14,loc_20);
      if ((*(int *)(param_1 + 0x19c) != 0) &&
         (pv2 = *(void **)(**(int **)(param_1 + 0x302) + -4 + u3), pv2 != (void *)0x0)) {
        FUN_0041d780(pv2,((UIElement *)loc_14)->parent_widget);
        FUN_0041d2d0(pv2,loc_20,'\0');
        FUN_0041dad0(pv2,1,'\0');
        FUN_0041da90(pv2,1);
        ((UIWidget *)pv2)->type_or_mode = 0;
        ((UIWidget *)pv2)->anim_flag_0 = 0;
        ((UIWidget *)pv2)->anim_flag_2 = 0;
        ((UIWidget *)pv2)->anim_flag_1 = 1;
        ((UIWidget *)pv2)->anim_flag_3 = 0;
        FUN_00405d30(pv2,0);
      }
      FUN_004535c0(loc_14);
      FUN_00436100(loc_14);
      FUN_0041d780(loc_14,(void *)0x0);
      if (u3 != 0) {
        u1 = *(uint *)(param_1 + 0x5dc);
        if ((uint)loc_20[2] <= u1) {
          if ((uint)loc_20[2] < u1) {
            pv2 = (void *)(**(int **)(param_1 + 0x5d2) + u3);
            memmove((void *)((int)pv2 + -4),pv2,(u1 - loc_20[2]) * 4);
          }
          *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x5dc) + -1;
        }
      }
    }
    loc_20[2] = loc_20[2] - 1;
  }
  loc_8 = 0xffffffff;
  FUN_00437aef();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_00437aef @ 0x00437aef */

void FUN_00437aef(void)

{
  return;
}



/* Function: FUN_00437b00 @ 0x00437b00 */

void __fastcall FUN_00437b00(int param_1)

{
  FUN_00435ab0(*(void **)(param_1 + 0x1b0),(int)DAT_00480154);
  return;
}



/* Function: FUN_00437b20 @ 0x00437b20 */

void __fastcall FUN_00437b20(int param_1)

{
  FUN_00435a90(*(int *)(param_1 + 0x1b0));
  return;
}



/* Function: FUN_00437b30 @ 0x00437b30 */

void __fastcall FUN_00437b30(int param_1)

{
  int *pn1;
  uint u2;
  int *pu3;
  void *this;
  short s4;
  
  while (u2 = *(uint *)(param_1 + 0x5dc), u2 != 0) {
    pu3 = (int *)**(int **)(param_1 + 0x5d2);
    this = (void *)*pu3;
    if (u2 != 0) {
      if (1 < u2) {
        memmove(pu3,pu3 + 1,u2 * 4 - 4);
      }
      *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x5dc) + -1;
    }
    FUN_004535c0(this);
    FUN_0041d780(this,(void *)0x0);
    FUN_004564c0();
  }
  s4 = 0;
  do {
    pn1 = (int *)(param_1 + 0x5e4 + s4 * 4);
    pu3 = (int *)*pn1;
    if (pu3 != (int *)0x0) {
      ((void (*)(void))((void **)*pu3)[0])(); /* pu3->vtable[0] */
      *pn1 = 0;
      FUN_004564c0();
    }
    s4 = s4 + 1;
  } while (s4 < 6);
  return;
}



/* Function: FUN_00437bc0 @ 0x00437bc0 */

void __fastcall FUN_00437bc0(void *param_1)

{
    /* TODO: 83 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00437e2d @ 0x00437e2d */

void FUN_00437e2d(void)

{
  return;
}



/* Function: FUN_00437e40 @ 0x00437e40 */

void __fastcall FUN_00437e40(void *param_1)

{
    /* TODO: 60 lines - has decompiler artifacts */
    return;
}



/* Function: FUN_00438020 @ 0x00438020 */

void FUN_00438020(void)

{
  return;
}



/* Function: FUN_00438030 @ 0x00438030 */

void __fastcall FUN_00438030(int param_1)

{
  void *pv1;
  int *__seh_chain;
  int u2;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00438132;
  loc_8 = 0;
  *__seh_chain = &loc_10;
  if (*(void **)(param_1 + 0x19c) != (void *)0x0) {
    if ((*(char *)(DAT_004896b0 + 0x2d) == '\0') || (*(int *)(param_1 + 0xd0) == 0)) {
      u2 = 1;
    }
    else {
      u2 = 3;
    }
    FUN_004092c0(*(void **)(param_1 + 0x19c),u2,1);
    FUN_0041d2d0(*(void **)(param_1 + 0x19c),(int *)&__stk_0,'\0');
    FUN_0041dd40(*(void **)(param_1 + 0x19c));
    FUN_0041dad0(*(void **)(param_1 + 0x19c),1,'\0');
    FUN_0041da90(*(void **)(param_1 + 0x19c),1);
    pv1 = *(void **)(param_1 + 0x19c);
    ((UIWidget *)pv1)->anim_flag_0 = 0;
    ((UIWidget *)pv1)->anim_flag_2 = 0;
    ((UIWidget *)pv1)->anim_flag_1 = 0;
    ((UIWidget *)pv1)->anim_flag_3 = 0;
    FUN_00405d30(pv1,3);
    ((UIWidget *)*(void **)(param_1 + 0x19c))->pending_frame = 2;
    pv1 = *(void **)(param_1 + 0x19c);
    ((UIWidget *)pv1)->anim_flag_0 = 0;
    ((UIWidget *)pv1)->anim_flag_2 = 0;
    ((UIWidget *)pv1)->anim_flag_1 = 1;
    ((UIWidget *)pv1)->anim_flag_3 = 0;
    FUN_00405d30(pv1,0);
  }
  loc_8 = 0xffffffff;
  FUN_0043813c();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_0043813c @ 0x0043813c */

void FUN_0043813c(void)

{
  return;
}



/* Function: FUN_00438150 @ 0x00438150 */

void __fastcall FUN_00438150(int param_1)

{
  void *this;
  SHORT SVar1;
  DWORD DVar2;
  int *__seh_chain;
  char *pu3;
  int n4;
  char c5;
  int loc_1c [2];
  char *loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_00438262;
  *__seh_chain = &loc_10;
  loc_1c[1] = 0;
  loc_1c[0] = 0;
  loc_8 = 0;
  this = *(void **)(DAT_004897c0 + 0x44);
  if (this != (void *)0x0) {
    FUN_0041cde0(this,loc_1c);
    n4 = 0x4381b8;
    SVar1 = GetAsyncKeyState(0x25);
    if (SVar1 < 0) {
      if ((int)(short)((uint)loc_1c[1] >> 8) - (int)*(short *)(param_1 + 0x32c) <=
          (int)*(short *)(param_1 + 0x330)) goto __label_00438187;
      DVar2 = GetTickCount();
      c5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = DVar2;
      loc_14 = (char *)-(int)DAT_00488d2c;
      FUN_00401050(&__stk_34,0);
      pu3 = loc_14;
    }
    else {
      n4 = 0x4381c1;
      SVar1 = GetAsyncKeyState(0x27);
      if ((-1 < SVar1) ||
         ((int)*(short *)(param_1 + 0x332) <=
          (int)*(short *)(param_1 + 0x32e) + (int)(short)((uint)loc_1c[1] >> 8)))
      goto __label_00438187;
      DVar2 = GetTickCount();
      c5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = DVar2;
      loc_14 = &__stk_34;
      FUN_00401050(&__stk_34,0);
      pu3 = DAT_00488d2c;
    }
    FUN_0041d3a0(this,pu3,n4,c5);
  }
__label_00438187:
  loc_8 = 0xffffffff;
  FUN_0043826c();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_0043826c @ 0x0043826c */

void FUN_0043826c(void)

{
  return;
}



/* Function: FUN_00438280 @ 0x00438280 */

void __fastcall FUN_00438280(void *param_1)

{
  char c1;
  uint u2;
  uint u3;
  char *pc4;
  char *pc5;
  int *__seh_chain;
  char loc_48 [40];
  char *loc_20;
  char *loc_1c;
  int loc_18;
  int loc_14;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0043839a;
  *__seh_chain = &loc_10;
  loc_14 = 0;
  loc_18 = 0;
  loc_8 = 0;
  FUN_0041ce10(param_1,&loc_18,2);
  u2 = 0xffffffff;
  pc4 = (char *)&DAT_0047ef44;
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
  pc5 = loc_48;
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
  _itoa((int)*(short *)(DAT_0048345c + 0x92) - (int)DAT_00488d50,loc_48,10);
  pc4 = loc_48;
  FUN_00458860(*(void **)((int)param_1 + 0x2d8),pc4); /* TODO: unknown struct, offset 0x2d8 */
  loc_20 = &__stk_25;
  FUN_00401ba0(&__stk_25,
               *(short *)(&DAT_0048026c + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&loc_14,(int)pc4);
  loc_1c = &__stk_25;
  FUN_00401ba0(&__stk_25,
               *(short *)(&DAT_0048026e + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&loc_18,(int)pc4);
  FUN_0041d020(*(void **)((int)param_1 + 0x2d8),loc_14,loc_18,2); /* TODO: unknown struct, offset 0x2d8 */
  FUN_0041dd40(*(void **)((int)param_1 + 0x2d8)); /* TODO: unknown struct, offset 0x2d8 */
  loc_8 = 0xffffffff;
  FUN_004383a4();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_004383a4 @ 0x004383a4 */

void FUN_004383a4(void)

{
  return;
}



/* Function: FUN_004383b0 @ 0x004383b0 */

void __fastcall FUN_004383b0(void *param_1)

{
  int n1;
  uint u2;
  void *pv3;
  int n4;
  uint u5;
  int n6;
  void *this;
  
  this = (void *)0x0;
  if (*(int *)((int)param_1 + 0x5ca) == 4) { /* TODO: unknown struct, offset 0x5ca (possibly TextDisplay.data_count-related) */
    n1 = *(int *)(DAT_004897c0 + 0x4a);
    if (((n1 != 0) && (*(int *)(n1 + 0x1a) != 0)) &&
       (u2 = *(uint *)(*(int *)(n1 + 0x1a) + 0xe), u2 != 0)) {
      u5 = 1;
      pv3 = *(void **)(DAT_004897c0 + 0x44);
      if (u2 != 0) {
        n6 = 4;
        do {
          this = (void *)FUN_0041c0f0(*(int *)(**(int **)(*(int *)(n1 + 0x1a) + 4) + -4 + n6))
          ;
          if (this != pv3) {
            n4 = FUN_0042a910((int)this);
            if (*(short *)((int)param_1 + 0x5b0) == n4) break; /* TODO: unknown struct, offset 0x5b0 */
          }
          n6 = n6 + 4;
          u5 = u5 + 1;
        } while (u5 <= u2);
      }
    }
    if (this != (void *)0x0) {
      FUN_0041c2a0(this,0);
    }
    FUN_0042db60(0,*(ushort **)((int)param_1 + 0x314),-1,-1); /* TODO: unknown struct, offset 0x314 */
    FUN_00437bc0(param_1);
  }
  return;
}



/* Function: FUN_00438df0 @ 0x00438df0 */

int * __fastcall FUN_00438df0(int *param_1)

{
    /* TODO: 6 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_004392c5 @ 0x004392c5 */

void FUN_004392c5(void)

{
  return;
}



/* Function: FUN_004392cd @ 0x004392cd */

void FUN_004392cd(void)

{
  return;
}



/* Function: FUN_004392d5 @ 0x004392d5 */

void FUN_004392d5(void)

{
  return;
}



/* Function: FUN_004392ef @ 0x004392ef */

void FUN_004392ef(void)

{
  int __saved_ebp;
  
  FUN_004113d0((int *)(__saved_ebp + -0x40));
  return;
}



/* Function: FUN_00439bad @ 0x00439bad */

void FUN_00439bad(void)

{
  return;
}



/* Function: FUN_00439bb5 @ 0x00439bb5 */

void FUN_00439bb5(void)

{
  return;
}



/* Function: FUN_00439bc7 @ 0x00439bc7 */

void FUN_00439bc7(void)

{
  return;
}



/* Function: FUN_00439ff0 @ 0x00439ff0 */

void __fastcall FUN_00439ff0(int param_1)

{
  int n1;
  int n2;
  
  if (((*(int *)(param_1 + 0x1a0) != 0) && (DAT_004897c0 != 0)) &&
     (n1 = *(int *)(DAT_004897c0 + 0x44), n1 != 0)) {
    n2 = FUN_0041c0f0(*(int *)(param_1 + 0x1a0));
    if (n2 == n1) {
      FUN_0041bd00(*(void **)(DAT_004897c0 + 0x44),*(int *)(param_1 + 0x1a0));
    }
  }
  return;
}



/* Function: FUN_0043a040 @ 0x0043a040 */

int * __thiscall
FUN_0043a040(CString *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = 0;
  this->pp_buffer = 0;
  this->pp_buffer = param_1;
  *(int *)this = param_2;
  this->capacity = 0;
  this->allocator = 0;
  this->allocator = param_3;
  this->capacity = param_4;
  return this;
}



/* Function: FUN_0043a080 @ 0x0043a080 */

void __fastcall FUN_0043a080(int *param_1)

{
  *param_1 = &PTR_LAB_004748fc;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_0043a0b0 @ 0x0043a0b0 */

void __fastcall FUN_0043a0b0(int *param_1)

{
  *param_1 = &PTR_LAB_004748f8;
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_0043a170 @ 0x0043a170 */

void FUN_0043a170(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d60,u1,__param_fffffff4);
  return;
}



/* Function: FUN_0043a1c0 @ 0x0043a1c0 */

void FUN_0043a1c0(void)

{
  return;
}



/* Function: FUN_0043a1e0 @ 0x0043a1e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a1e0(void)

{
  _DAT_00488d6e = 0;
  _DAT_00488d6c = 0;
  return;
}



/* Function: FUN_0043a1f0 @ 0x0043a1f0 */

void FUN_0043a1f0(void)

{
  _atexit(FUN_0043a200);
  return;
}



/* Function: FUN_0043a200 @ 0x0043a200 */

void FUN_0043a200(void)

{
  return;
}



/* Function: FUN_0043a220 @ 0x0043a220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a220(void)

{
  _DAT_00488d6a = 0;
  _DAT_00488d68 = 0;
  return;
}



/* Function: FUN_0043a230 @ 0x0043a230 */

void FUN_0043a230(void)

{
  _atexit(FUN_0043a240);
  return;
}



/* Function: FUN_0043a240 @ 0x0043a240 */

void FUN_0043a240(void)

{
  return;
}



/* Function: FUN_0043a250 @ 0x0043a250 */

int * __thiscall
FUN_0043a250(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)

{
  int n1;
  DWORD DVar2;
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0043a2dc;
  *__seh_chain = &loc_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  *(void ***)this = &PTR_FUN_004749f0;
  loc_8 = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 1;
  n1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 1;
  DVar2 = GetTickCount();
  *(DWORD *)(n1 + 4) = DVar2;
  *__seh_chain = loc_10;
  *(DWORD *)(n1 + 0xc) = DVar2;
  return this;
}



/* Function: FUN_0043a2f0 @ 0x0043a2f0 */

int * __thiscall FUN_0043a2f0(void *this,byte param_1)

{
  FUN_0043a310(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}



/* Function: FUN_0043a310 @ 0x0043a310 */

void __fastcall FUN_0043a310(int *param_1)

{
  int n1;
  DWORD DVar2;
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  __seh_handler = &__label_0043a373;
  *param_1 = &PTR_FUN_004749f0;
  *__seh_chain = &loc_10;
  loc_8 = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 0;
  n1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 0;
  DVar2 = GetTickCount();
  loc_8 = 0xffffffff;
  *(DWORD *)(n1 + 4) = DVar2;
  *(DWORD *)(n1 + 0xc) = DVar2;
  FUN_0043a37d();
  *__seh_chain = loc_10;
  return;
}



/* Function: FUN_0043a37d @ 0x0043a37d */

void FUN_0043a37d(void)

{
  int __saved_ebp;
  
  FUN_0042be10(*(int **)(__saved_ebp + -0x10));
  return;
}



/* Function: FUN_0043a5c6 @ 0x0043a5c6 */

void FUN_0043a5c6(void)

{
  return;
}



/* Function: FUN_0043a5ce @ 0x0043a5ce */

void FUN_0043a5ce(void)

{
  return;
}



/* Function: FUN_0043a5d6 @ 0x0043a5d6 */

void FUN_0043a5d6(void)

{
  return;
}



/* Function: FUN_0043a5de @ 0x0043a5de */

void FUN_0043a5de(void)

{
  int __saved_ebp;
  
  FUN_00451f60((int *)(__saved_ebp + -0x450));
  return;
}



/* Function: FUN_0043a5e9 @ 0x0043a5e9 */

void FUN_0043a5e9(void)

{
  int __saved_ebp;
  
  FUN_0044e840((int *)(__saved_ebp + -0x44));
  return;
}



/* Function: FUN_0043a620 @ 0x0043a620 */

void __cdecl FUN_0043a620(short *param_1)

{
  short u1;
  
  *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  u1 = param_1[1];
  param_1[1] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = param_1[2];
  param_1[2] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = param_1[3];
  param_1[3] = CONCAT11((char)u1,(char)((ushort)u1 >> 8));
  u1 = param_1[4];
  *(uint *)(param_1 + 4) =
       CONCAT22(CONCAT11((char)u1,(char)((ushort)u1 >> 8)),
                CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8)));
  u1 = param_1[6];
  *(uint *)(param_1 + 6) =
       CONCAT22(CONCAT11((char)u1,(char)((ushort)u1 >> 8)),
                CONCAT11((char)param_1[7],(char)((ushort)param_1[7] >> 8)));
  return;
}



/* Function: FUN_0043a6b0 @ 0x0043a6b0 */

int __cdecl FUN_0043a6b0(void *param_1,int param_2)

{
  ushort *pu1;
  int loc_4;
  
  pu1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  loc_4 = 0;
  if (pu1 != (ushort *)0x0) {
    FUN_0043a620(pu1);
    FUN_00433140(pu1,&loc_4);
    FUN_0046f5f0((uint)pu1);
  }
  return loc_4;
}



/* Function: FUN_0043a700 @ 0x0043a700 */

void __cdecl FUN_0043a700(int param_1,int param_2,int *param_3)

{
  FUN_00433420(param_3);
  FUN_00433270(&param_3);
  return;
}



/* Function: FUN_0043a730 @ 0x0043a730 */

void FUN_0043a730(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d70,u1,__param_fffffff4);
  return;
}



/* Function: FUN_0043a780 @ 0x0043a780 */

void FUN_0043a780(void)

{
  return;
}



/* Function: FUN_0043a7a0 @ 0x0043a7a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a7a0(void)

{
  _DAT_00488d7e = 0;
  _DAT_00488d7c = 0;
  return;
}



/* Function: FUN_0043a7b0 @ 0x0043a7b0 */

void FUN_0043a7b0(void)

{
  _atexit(FUN_0043a7c0);
  return;
}



/* Function: FUN_0043a7c0 @ 0x0043a7c0 */

void FUN_0043a7c0(void)

{
  return;
}



/* Function: FUN_0043a7e0 @ 0x0043a7e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a7e0(void)

{
  _DAT_00488d7a = 0;
  _DAT_00488d78 = 0;
  return;
}



/* Function: FUN_0043a7f0 @ 0x0043a7f0 */

void FUN_0043a7f0(void)

{
  _atexit(FUN_0043a800);
  return;
}



/* Function: FUN_0043a800 @ 0x0043a800 */

void FUN_0043a800(void)

{
  return;
}



/* Function: FUN_0043a810 @ 0x0043a810 */

char __cdecl
FUN_0043a810(void *param_1,char param_2,int param_3,int param_4,char param_5,
            char param_6)

{
    /* TODO: 252 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0043ac48 @ 0x0043ac48 */

void FUN_0043ac48(void)

{
  return;
}



/* Function: FUN_0043ac6c @ 0x0043ac6c */

void FUN_0043ac6c(void)

{
  return;
}



/* Function: FUN_0043acf9 @ 0x0043acf9 */

void FUN_0043acf9(void)

{
  return;
}



/* Function: FUN_0043ad50 @ 0x0043ad50 */

int FUN_0043ad50(void)

{
    /* TODO: 20 lines - has decompiler artifacts */
    return 0;
}



/* Function: FUN_0043ade0 @ 0x0043ade0 */

void FUN_0043ade0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d80,u1,__param_fffffff4);
  return;
}



/* Function: FUN_0043ae30 @ 0x0043ae30 */

void FUN_0043ae30(void)

{
  return;
}



/* Function: FUN_0043ae50 @ 0x0043ae50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ae50(void)

{
  _DAT_00488d8e = 0;
  _DAT_00488d8c = 0;
  return;
}



/* Function: FUN_0043ae60 @ 0x0043ae60 */

void FUN_0043ae60(void)

{
  _atexit(FUN_0043ae70);
  return;
}



/* Function: FUN_0043ae70 @ 0x0043ae70 */

void FUN_0043ae70(void)

{
  return;
}



/* Function: FUN_0043ae90 @ 0x0043ae90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ae90(void)

{
  _DAT_00488d8a = 0;
  _DAT_00488d88 = 0;
  return;
}



/* Function: FUN_0043aea0 @ 0x0043aea0 */

void FUN_0043aea0(void)

{
  _atexit(FUN_0043aeb0);
  return;
}



/* Function: FUN_0043aeb0 @ 0x0043aeb0 */

void FUN_0043aeb0(void)

{
  return;
}



/* Function: FUN_0043aed0 @ 0x0043aed0 */

void FUN_0043aed0(void)

{
  int u1;
  int __param_fffffff4;
  
  u1 = 0;
  FUN_00401050(&__stk_44,0);
  FUN_00401050(&__stk_43,0);
  FUN_00401060(&DAT_00488d90,u1,__param_fffffff4);
  return;
}



/* Function: FUN_0043af10 @ 0x0043af10 */

void FUN_0043af10(void)

{
  _atexit(FUN_0043af20);
  return;
}



/* Function: FUN_0043af20 @ 0x0043af20 */

void FUN_0043af20(void)

{
  return;
}



/* Function: FUN_0043af40 @ 0x0043af40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043af40(void)

{
  _DAT_00488d9e = 0;
  _DAT_00488d9c = 0;
  return;
}



/* Function: FUN_0043af50 @ 0x0043af50 */

void FUN_0043af50(void)

{
  _atexit(FUN_0043af60);
  return;
}



/* Function: FUN_0043af60 @ 0x0043af60 */

void FUN_0043af60(void)

{
  return;
}



/* Function: FUN_0043af80 @ 0x0043af80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043af80(void)

{
  _DAT_00488d9a = 0;
  _DAT_00488d98 = 0;
  return;
}



/* Function: FUN_0043af90 @ 0x0043af90 */

void FUN_0043af90(void)

{
  _atexit(FUN_0043afa0);
  return;
}



/* Function: FUN_0043afa0 @ 0x0043afa0 */

void FUN_0043afa0(void)

{
  return;
}



/* Function: FUN_0043afb0 @ 0x0043afb0 */

int * __fastcall FUN_0043afb0(int *param_1)

{
  int *__seh_chain;
  int loc_10;
  char *__seh_handler;
  int loc_8;
  
  loc_10 = *__seh_chain;
  loc_8 = 0xffffffff;
  __seh_handler = &__label_0043b002;
  *__seh_chain = &loc_10;
  FUN_004052b0(param_1);
  loc_8 = 0;
  *param_1 = &PTR_FUN_00474ab0;
  FUN_0043b090(param_1);
  *__seh_chain = loc_10;
  return param_1;
}



