/*
 * game_ui.c - UI and menus
 * Address range: 0x430000 - 0x43AFFF
 * Functions: 366
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_00430020 @ 0x00430020 */

void __thiscall FUN_00430020(GameScreen *this,LPCSTR param_1,short param_2,short param_3,ushort param_4)
{
  char c1;
  int n2;
  LPCSTR str3;

  FUN_00430680();
  if (param_4 == 0) {
    n2 = -1;
    str3 = param_1;
    do {
      if (n2 == 0) break;
      n2 = n2 + -1;
      c1 = *str3;
      str3 = str3 + 1;
    } while (c1 != '\0');
    param_4 = ~(ushort)n2 - 1;
  }
  if ((HDC)this->hdc_active != NULL) {
    SetBkMode((HDC)this->hdc_active,1);
    MoveToEx((HDC)this->hdc_active,(int)param_2,(int)param_3,NULL);
    SetTextAlign((HDC)this->hdc_active,0x19);
    ExtTextOutA((HDC)this->hdc_active,(int)param_2,(int)param_3,0,NULL,param_1,
                (uint)param_4,NULL);
  }
  return;
}


/* FUN_004300b0 @ 0x004300b0 */

int __fastcall FUN_004300b0(GameScreen *this)
{
  ushort u1;
  uint u2;
  int n3;
  HGDIOBJ pv4;
  HFONT h;
  BOOL flag5;
  char v40 [64];

  u2 = this->font_style;
  n3 = GetDeviceCaps((HDC)this->hdc_active,0x5a);
  u1 = this->font_size;
  pv4 = GetStockObject(0xd);
  pv4 = SelectObject((HDC)this->hdc_active,pv4);
  FUN_00456410((uint)this->font_id,v40);
  h = CreateFontA(-(int)(short)((int)((uint)u1 * n3) / 0x48),0,0,0,
                  (int)(short)((-(ushort)((u2 & 1) == 0) & 0xfed4) + 700),
                  this->font_style & 2,this->font_style & 4,0,0,0,0,0,0,v40);
  if (h != NULL) {
    SelectObject((HDC)this->hdc_active,h);
    flag5 = DeleteObject(pv4);
    return CONCAT31((unsigned int)((uint)flag5 >> 8),1);
  }
  pv4 = SelectObject((HDC)this->hdc_active,pv4);
  return (uint)pv4 & 0xffffff00;
}


/* FUN_00430190 @ 0x00430190 */

int __thiscall FUN_00430190(GameScreen *this,short param_1)
{
  int _eax;
  int u1;

  if (this->font_id != param_1) {
    this->font_id = param_1;
    u1 = FUN_004300b0(this);
    return u1;
  }
  return CONCAT31((unsigned int)(CONCAT22((short)((uint)_eax >> 0x10),param_1) >> 8),1);
}


/* FUN_004301b0 @ 0x004301b0 */

void __thiscall FUN_004301b0(GameScreen *this,int param_1)
{
  int n1;

  n1 = FUN_004563d0(param_1);
  FUN_00430190(this,(short)n1);
}


/* FUN_004301d0 @ 0x004301d0 */

void __thiscall FUN_004301d0(GameScreen *this,short param_1)
{
  if (this->font_size != param_1) {
    this->font_size = param_1;
    FUN_004300b0(this);
  }
  return;
}


/* FUN_00430200 @ 0x00430200 */

void FUN_00430200(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004875f0,u1,_arg5);
}


/* FUN_00430250 @ 0x00430250 */

void FUN_00430250(void) { return; }


/* FUN_00430260 @ 0x00430260 */

/* NOTE: overlapping globals */

void * __thiscall FUN_00430260(void *this,LPCSTR param_1)
{
    /* STUB: 27 lines not yet reconstructed */
    return 0;
}


/* FUN_00430300 @ 0x00430300 */

short __thiscall FUN_00430300(void *this,LPCSTR param_1)
{
  short u1;
  void *pu2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00430362;
  *_fs = &_seh_prev;
  pu2 = FUN_00430260(this,param_1);
  _seh_state = 0xffffffff;
  u1 = *(short *)(pu2 + 2);
  FUN_0043036c();
  *_fs = _seh_prev;
  return u1;
}


/* FUN_0043036c @ 0x0043036c */

void FUN_0043036c(void) { return; }


/* FUN_00430380 @ 0x00430380 */

void __thiscall FUN_00430380(void *this,short *param_1)
{
    /* STUB: 17 lines not yet reconstructed */
    return;
}


/* FUN_004303e0 @ 0x004303e0 */

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
}


/* FUN_00430480 @ 0x00430480 */

/* NOTE: overlapping globals */

void FUN_00430480(void)
{
  _DAT_00487606 = 0;
  _DAT_00487604 = 0;
}


/* FUN_00430490 @ 0x00430490 */

void FUN_00430490(void)
{
  _atexit(FUN_004304a0);
}


/* FUN_004304a0 @ 0x004304a0 */

void FUN_004304a0(void) { return; }


/* FUN_004304b0 @ 0x004304b0 */

void __thiscall FUN_004304b0(GameScreen *this,int param_1)
{
  FUN_004304d0(this,(char)param_1,(char)((uint)param_1 >> 8),(char)((uint)param_1 >> 0x10));
}


/* FUN_004304d0 @ 0x004304d0 */

void __thiscall FUN_004304d0(GameScreen *this,char param_1,char param_2,char param_3)
{
  this->color_r = param_1;
  this->color_g = param_2;
  this->color_b = param_3;
  FUN_004303e0((intptr_t)this);
}


/* FUN_004304f0 @ 0x004304f0 */

void __thiscall FUN_004304f0(void *this,int param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043053f;
  _seh_state = 0;
  *_fs = &_seh_prev;
  FUN_00430590(this,((unsigned short)((param_1) >> 16)),(short)param_1);
  _seh_state = 0xffffffff;
  FUN_00430537();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00430537 @ 0x00430537 */

void FUN_00430537(void) { return; }


/* FUN_00430560 @ 0x00430560 */

/* NOTE: overlapping globals */

void FUN_00430560(void)
{
  _DAT_00487602 = 0;
  _DAT_00487600 = 0;
}


/* FUN_00430570 @ 0x00430570 */

void FUN_00430570(void)
{
  _atexit(FUN_00430580);
}


/* FUN_00430580 @ 0x00430580 */

void FUN_00430580(void) { return; }


/* FUN_00430590 @ 0x00430590 */

void __thiscall FUN_00430590(GameScreen *this,short param_1,short param_2)
{
  if ((this->pen_width != param_1) || (this->pen_style != param_2)) {
    this->pen_width = param_1;
    this->pen_style = param_2;
    FUN_004303e0((intptr_t)this);
  }
  return;
}


/* FUN_004305c0 @ 0x004305c0 */

void __thiscall FUN_004305c0(GameScreen *this,short *param_1)
{
  HGDIOBJ pv1;

  FUN_00430680();
  pv1 = GetStockObject(5);
  pv1 = SelectObject((HDC)this->hdc_active,pv1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pv1);
}


/* FUN_00430620 @ 0x00430620 */

void __thiscall FUN_00430620(GameScreen *this,short *param_1)
{
  HGDIOBJ pv1;

  FUN_00430680();
  pv1 = GetStockObject(8);
  pv1 = SelectObject((HDC)this->hdc_active,pv1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pv1);
}


/* FUN_00430680 @ 0x00430680 */

void FUN_00430680(void) { return; }


/* FUN_00430690 @ 0x00430690 */

void __fastcall FUN_00430690(void *param_1)
{
    /* STUB: 30 lines not yet reconstructed */
    return;
}


/* FUN_0043075b @ 0x0043075b */

void FUN_0043075b(void) { return; }


/* FUN_00430770 @ 0x00430770 */

void FUN_00430770(UIElement *param_1)
{
  int n1;
  short s2;
  short s3;
  short s4;
  uint u5;

  if (((param_1 == NULL) || ((param_1->flags >> 6 & 1) == 0)) ||
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
        n1 = ((CVector *)param_1->child_list_1)->count /* CVector: count at +0x0E */;
        if (n1 == 0) {
          return;
        }
        u5 = n1 * 4;
        do {
          u5 = u5 - 4;
          FUN_00430770(*(UIElement **)(*(int *)((CVector *)param_1->child_list_1)->data[0] /* CVector: data ptr at +0x04 */ + u5));
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


/* FUN_00430860 @ 0x00430860 */

/* NOTE: overlapping globals */

void FUN_00430860(void)
{
  short s1;
  ushort u2;
  short s3;
  short s4;
  int n5;
  HRGN pHVar6;
  short s7;
  int *_fs;
  short v24;
  short v22;
  short v20;
  short v1e;
  void *v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00430a96;
  *_fs = &_seh_prev;
  FUN_00430680();
  if (DAT_004800c0 != 0) {
    s7 = 1;
    v18 = _DAT_00487460;
    _seh_state = 0;
    v14 = _DAT_00487464;
    if (1 < DAT_004800c0) {
      do {
        n5 = (int)s7;
        s1 = (&DAT_00487462)[n5 * 4];
        u2 = (&DAT_00487466)[n5 * 4];
        if (s1 < (short)u2) {
          s3 = (&DAT_00487464)[n5 * 4];
          s4 = (&DAT_00487460)[n5 * 4];
          if (s4 < s3) {
            if (((unsigned short)((v18) >> 16)) < ((unsigned short)((v14) >> 16))) {
              if ((short)v14 <= (short)v18) goto L_00430923;
              if (s1 < ((unsigned short)((v18) >> 16))) {
                v18 = CONCAT22(s1,(short)v18);
              }
              if (((unsigned short)((v14) >> 16)) < (short)u2) {
                v14 = CONCAT22(u2,(short)v14);
              }
              if (s4 < (short)v18) {
                v18 = CONCAT22(((unsigned short)((v18) >> 16)),s4);
              }
              if (s3 <= (short)v14) goto L_00430933;
            }
            else {
L_00430923:
              v18 = CONCAT22(s1,s4);
              v14 = (uint)u2 << 0x10;
            }
            v14 = CONCAT22(((unsigned short)((v14) >> 16)),s3);
          }
        }
L_00430933:
        s7 = s7 + 1;
      } while (s7 < DAT_004800c0);
    }
    FUN_0042f820((int)v1c);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)((unsigned short)((v18) >> 16)),(int)(short)v18,(int)((unsigned short)((v14) >> 16)),
               (int)(short)v14);
    SelectClipRgn((HDC)((GameScreen *)v1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (((UIElement *)v1c)->child_list_1 != NULL) {
      FUN_00430770((UIElement *)((UIElement *)v1c)->child_list_1);
    }
    s7 = 0;
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_0042f830((int)v1c);
    _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF),2);
    v22 = 0;
    v24 = 0;
    v1e = 0;
    v20 = 0;
    FUN_00430c70(v1c,&v24);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)v22,(int)v24,(int)v1e,(int)v20);
    SelectClipRgn((HDC)((GameScreen *)v1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (0 < DAT_004800c0) {
      do {
        n5 = (int)s7;
        s7 = s7 + 1;
        FUN_0042f800(v1c,&DAT_00487460 + n5 * 4);
      } while (s7 < DAT_004800c0);
    }
    _seh_state = (_seh_state & ~0xFF) | 1;
    FUN_00430a86();
    _seh_state &= ~0xFF;
    FUN_00430a8e();
    _seh_state = 0xffffffff;
    DAT_004800c0 = 0;
    FUN_00430aa0();
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00430a86 @ 0x00430a86 */

void FUN_00430a86(void) { return; }


/* FUN_00430a8e @ 0x00430a8e */

void FUN_00430a8e(void) { return; }


/* FUN_00430aa0 @ 0x00430aa0 */

void FUN_00430aa0(void) { return; }


/* FUN_00430ab0 @ 0x00430ab0 */

void __fastcall FUN_00430ab0(GameScreen *this)
{
  UpdateWindow((HWND)this->hwnd);
}


/* FUN_00430ac0 @ 0x00430ac0
 * Struct types: UIElement (this)
 * Note: offset 0x12 is flags field, but used here as a pointer - likely reinterpreted
 */
void __thiscall FUN_00430ac0(void *this,int *param_1)
{
  int *pn1;

  pn1 = (int *)((UIElement *)this)->flags; /* offset 0x12 reinterpreted as pointer */
  if (param_1 != pn1) {
    if (pn1 != NULL) {
      ((void (*)(void))((void **)(*pn1))[0x50 / 4])(); /* pn1->vtable[20] */
    }
    ((UIElement *)this)->flags = (unsigned int)param_1; /* offset 0x12 reinterpreted as pointer */
    if (param_1 != NULL) {
      ((void (*)(void))((void **)(*param_1))[0x4c / 4])(); /* param_1->vtable[19] */
    }
  }
  return;
}


/* FUN_00430af0 @ 0x00430af0 */

void __fastcall FUN_00430af0(int param_1)
{
  FUN_00430680();
  if (((UIElement *)param_1)->child_list_1 != NULL) {
    ((void (*)(void))((void **)(**(int **)((UIElement *)param_1)->child_list_1))[0x44 / 4])(); /* child_list_1->vtable[17] */
  }
  if (((UIElement *)param_1)->flags != 0) { /* offset 0x12 reinterpreted as pointer */
    ((void (*)(void))((void **)(**(int **)(int)((UIElement *)param_1)->flags))[0x4c / 4])(); /* obj at flags->vtable[19] */
  }
  return;
}


/* FUN_00430b20 @ 0x00430b20 */

void __fastcall FUN_00430b20(int param_1)
{
  if (((UIElement *)param_1)->flags != 0) { /* offset 0x12 reinterpreted as pointer */
    ((void (*)(void))((void **)(**(int **)(int)((UIElement *)param_1)->flags))[0x50 / 4])(); /* obj at flags->vtable[20] */
  }
  if (((UIElement *)param_1)->child_list_1 != NULL) {
    ((void (*)(void))((void **)(**(int **)((UIElement *)param_1)->child_list_1))[0x48 / 4])(); /* child_list_1->vtable[18] */
  }
  return;
}


/* FUN_00430b40 @ 0x00430b40 */

int __fastcall FUN_00430b40(int param_1)
{
    /* STUB: 23 lines not yet reconstructed */
    return 0;
}


/* FUN_00430bae @ 0x00430bae */

void FUN_00430bae(void) { return; }


/* FUN_00430bc0 @ 0x00430bc0 */

/* NOTE: overlapping globals */

void * __fastcall FUN_00430bc0(int param_1)
{
    /* STUB: 17 lines not yet reconstructed */
    return 0;
}


/* FUN_00430c70 @ 0x00430c70 */

void __thiscall FUN_00430c70(void *this,short *param_1)
{
    /* STUB: 9 lines not yet reconstructed */
    return;
}


/* FUN_00430cb0 @ 0x00430cb0 */

void __thiscall FUN_00430cb0(void *this,short *param_1)
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
  _handler = &L_00430d1e;
  *_fs = &_seh_prev;
  _seh_state = 0;
  v16 = 0;
  v18 = 0;
  v12 = 0;
  v14 = 0;
  FUN_00430c70(this,&v18);
  _seh_state = 0xffffffff;
  param_1[1] = v12 - v16;
  *param_1 = v14 - v18;
  FUN_00430d28();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00430d28 @ 0x00430d28 */

void FUN_00430d28(void) { return; }


/* FUN_00430d30 @ 0x00430d30 */

void __fastcall FUN_00430d30(void *param_1)
{
  int n1;
  short s2;
  int *_fs;
  int n3;
  int n4;
  int _arg3;
  char c5;
  char c6;
  short v1c;
  short sStack_1a;
  short v18;
  short v16;
  short v14;
  short v12;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &DAT_00430f33;
  *_fs = &_seh_prev;
  s2 = 0;
  FUN_0042f7d0(param_1);
  if (((UIElement *)param_1)->child_list_1 != 0) {
    sStack_1a = 0;
    _seh_state = (_seh_state & ~0xFF) | 1;
    _seh_state = (_seh_state & 0xFF) | (0 << 8);
    v1c = 0;
    v16 = 0;
    v18 = 0;
    v12 = 0;
    v14 = 0;
    FUN_00430cb0(param_1,&v1c);
    c6 = '\0';
    n1 = CONCAT22(sStack_1a,v1c);
    c5 = '\0';
    FUN_00401ba0(&_tmp_31,v1c);
    n4 = CONCAT22(v18,sStack_1a);
    FUN_00401ba0(&_tmp_30,sStack_1a);
    n3 = 0;
    FUN_00401050(&_tmp_29,0);
    FUN_00401050(&_tmp_28,0);
    FUN_0041cca0(((UIElement *)param_1)->child_list_1,n3,n4,n1,_arg3,c5,c6);
    if (0 < DAT_004800c0) {
      do {
        n1 = (int)s2;
        if (((short)(&DAT_00487462)[n1 * 4] < (short)(&DAT_00487466)[n1 * 4]) &&
           ((short)(&DAT_00487460)[n1 * 4] < (short)(&DAT_00487464)[n1 * 4])) {
          if ((v16 < v12) && (v18 < v14)) {
            if ((short)(&DAT_00487462)[n1 * 4] < v16) {
              (&DAT_00487462)[n1 * 4] = v16;
            }
            if (v12 < (short)(&DAT_00487466)[n1 * 4]) {
              (&DAT_00487466)[n1 * 4] = v12;
            }
            if ((short)(&DAT_00487460)[n1 * 4] < v18) {
              (&DAT_00487460)[n1 * 4] = v18;
            }
            if (v14 < (short)(&DAT_00487464)[n1 * 4]) {
              (&DAT_00487464)[n1 * 4] = v14;
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
            (&DAT_00487462)[n1 * 4] = v16;
            (&DAT_00487460)[n1 * 4] = v18;
            (&DAT_00487466)[n1 * 4] = v12;
            (&DAT_00487464)[n1 * 4] = v14;
          }
        }
        s2 = s2 + 1;
      } while (s2 < DAT_004800c0);
    }
    _seh_state &= ~0xFF;
    FUN_00430f2b();
    _seh_state = 0xffffffff;
    FUN_00430f3d();
  }
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00430f2b @ 0x00430f2b */

void FUN_00430f2b(void) { return; }


/* FUN_00430f3d @ 0x00430f3d */

void FUN_00430f3d(void) { return; }


/* FUN_00430f50 @ 0x00430f50 */

void __thiscall FUN_00430f50(GameWidget *this,char param_1)
{
  short *ps1;
  int n2;
  uint u3;
  
  if (*(char *)(DAT_004896b0 + 0x27) != '\0') {
    if ((DAT_004897c0 != 0) && (((UIWidget *)DAT_004897c0)->sub_widgets_a[3] != NULL)) {
      ((void (*)(void))((void **)(*((UIWidget *)DAT_004897c0)->sub_widgets_a[3]))[0xc0 / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[48] */
    }
    FUN_004564f0(DAT_004896b0);
    return;
  }
  this->field_04 = this->field_04 + 1;
  if (((this->type_or_mode != 0) &&
      (n2 = ((CVector *)this->type_or_mode)->count, n2 != 0)) && (u3 = 1, n2 != 0))
  {
    n2 = 4;
    do {
      n2 = n2 + 4;
      u3 = u3 + 1;
      ((void (*)(void))((void **)(**(int **)(**(int **)((CVector *)this->type_or_mode)->data + -8 + n2)))[0x1c / 4])(); /* child obj->vtable[7] */
    } while (u3 <= ((CVector *)this->type_or_mode)->count);
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


/* FUN_00431000 @ 0x00431000 */

void __thiscall FUN_00431000(void *this,int param_1)
{
    /* STUB: 73 lines not yet reconstructed */
    return;
}


/* FUN_00431100 @ 0x00431100 */

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
  pu1 = (uint *)&((CVector *)n2)->count;
  u3 = *pu1;
  if (u3 != 0) {
    pn4 = (int *)**(int **)((CVector *)n2)->data;
    do {
      if (*pn4 == param_1) {
        u5 = u5 + 1;
        goto L_00431128;
      }
      pn4 = pn4 + 1;
      u5 = u5 + 1;
    } while (u5 < u3);
  }
  u5 = 0;
L_00431128:
  if ((u5 != 0) && (u5 <= u3)) {
    if (u5 < u3) {
      _Src = (void *)(**(int **)(n2 + 4) + u5 * 4);
      memmove((void *)((int)_Src + -4),_Src,(u3 - u5) * 4);
    }
    *pu1 = *pu1 - 1;
  }
  return;
}


/* FUN_00431160 @ 0x00431160 */

/* NOTE: overlapping globals */

void __thiscall FUN_00431160(void *this,char param_1)
{
  int n1;
  bool b2;
  DWORD dw3;
  uint u4;
  
  FUN_00403230();
  u4 = *(int *)(DAT_004896b0 + 4) + _DAT_00489098;
  dw3 = GetTickCount();
  n1 = DAT_004896b0;
  if ((u4 < dw3) || (param_1 != '\0')) {
    dw3 = GetTickCount();
    *(DWORD *)(n1 + 4) = dw3;
    b2 = FUN_00456580(DAT_004896b0);
    n1 = DAT_004896b0;
    if ((!b2) && (param_1 == '\0')) {
      FUN_00430f50(this,'\0');
      return;
    }
    dw3 = GetTickCount();
    *(DWORD *)(n1 + 8) = dw3;
    FUN_00430f50(this,'\x01');
  }
  return;
}


/* FUN_004311e0 @ 0x004311e0 */

/* NOTE: overlapping globals */

void __fastcall FUN_004311e0(void *param_1)
{
  int *pn1;
  short *pu2;
  int *pn3;
  short *ps4;
  DWORD dw5;
  int n6;
  int n7;
  int *_fs;
  int _seh_prev;
  void *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &DAT_0043143d;
  *_fs = &_seh_prev;
  FUN_00431160(param_1,'\0');
  pu2 = (short *)FUN_00408850(DAT_004896b0);
  FUN_00408830(&_tmp_38,pu2);
  _seh_state = 0xffffffff;
  pn3 = (int *)FUN_00430b40((int)param_1);
  pn1 = *(int **)(DAT_004896b0 + 0x40);
  _DAT_004838c8 = pn3;
  if (pn3 == pn1) {
    if (((pn3 != NULL) && (*(short *)(DAT_004896b0 + 0x30) == 0)) &&
       ((((UIElement *)pn3)->flags >> 5 & 1) != 0)) {
      ((void (*)(void))((void **)(*pn3))[0x20 / 4])(); /* pn3->vtable[8] */
    }
  }
  else {
    if (pn1 != NULL) {
      ((void (*)(void))((void **)(*pn1))[0x28 / 4])(); /* pn1->vtable[10] */
    }
    if (pn3 != NULL) {
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
    dw5 = GetTickCount();
    *(DWORD *)(n7 + 0xc) = dw5;
    if (pn3 != NULL) {
      ((void (*)(void))((void **)(*pn3))[0x2c / 4])(); /* pn3->vtable[11] */
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 2:
    if (pn3 != NULL) {
      ((void (*)(void))((void **)(*pn3))[0x30 / 4])(); /* pn3->vtable[12] */
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 3:
  case 4:
  case 5:
    if ((*(char *)(DAT_004896b0 + 0x3e) == '\x10') || (((UIElement *)param_1)->flags == 0) /* flags reinterpreted as pointer */
       ) goto sw_7;
    if (*(short *)(DAT_004896b0 + 0x30) == 4) {
      ((void (*)(void))((void **)(**(int **)(int)((UIElement *)param_1)->flags))[0x40 / 4])(); /* obj at flags->vtable[16] */
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 6:
  case 8:
  case 0x45:
    if (n6 == 6) {
      if (param_1 != NULL) {
        FUN_00430690(param_1);
      }
    }
    else if (n6 == 8) {
      if (param_1 != NULL) {
        FUN_00430af0((int)param_1);
      }
    }
    else if ((n6 == 0x45) && (param_1 != NULL)) {
      FUN_00430b20((int)param_1);
    }
  default:
    goto sw_7;
  case 9:
    if (((UIElement *)param_1)->flags != 0) { /* flags reinterpreted as pointer */
      ((void (*)(void))((void **)(**(int **)(int)((UIElement *)param_1)->flags))[0x3c / 4])(); /* obj at flags->vtable[15] */
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 0x41:
    if (pn3 != NULL) {
      ((void (*)(void))((void **)(*pn3))[0x34 / 4])();
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 0x42:
    if (pn3 != NULL) {
      if ((((UIElement *)pn3)->flags >> 0xc & 1) == 0) {
        ((void (*)(void))((void **)(*pn3))[0x34 / 4])();
      }
      else {
        ((void (*)(void))((void **)(*pn3))[0x38 / 4])(); /* pn3->vtable[14] */
      }
    }
    n7 = DAT_004896b0;
    dw5 = GetTickCount();
    break;
  case 0x46:
    FUN_00430d30(param_1);
    goto sw_7;
  case 0x47:
    FUN_0045be00(DAT_00489ac8);
    goto sw_7;
  }
  *(DWORD *)(n7 + 0xc) = dw5;
sw_7:
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004314d0 @ 0x004314d0 */

short * __fastcall FUN_004314d0(short *param_1)
{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}


/* FUN_00431500 @ 0x00431500 */

void FUN_00431500(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00487f88,u1,_arg5);
}


/* FUN_00431540 @ 0x00431540 */

void FUN_00431540(void)
{
  _atexit(FUN_00431550);
}


/* FUN_00431550 @ 0x00431550 */

void FUN_00431550(void) { return; }


/* FUN_00431570 @ 0x00431570 */

/* NOTE: overlapping globals */

void FUN_00431570(void)
{
  _DAT_00488b0e = 0;
  _DAT_00488b0c = 0;
}


/* FUN_00431580 @ 0x00431580 */

void FUN_00431580(void)
{
  _atexit(FUN_00431590);
}


/* FUN_00431590 @ 0x00431590 */

void FUN_00431590(void) { return; }


/* FUN_004315b0 @ 0x004315b0 */

/* NOTE: overlapping globals */

void FUN_004315b0(void)
{
  _DAT_00488a8e = 0;
  _DAT_00488a8c = 0;
}


/* FUN_004315c0 @ 0x004315c0 */

void FUN_004315c0(void)
{
  _atexit(FUN_004315d0);
}


/* FUN_004315d0 @ 0x004315d0 */

void FUN_004315d0(void) { return; }


/* FUN_004315e0 @ 0x004315e0 */

int * __thiscall
FUN_004315e0(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  DWORD dw1;
  int *self;
  int *_fs;
  int n2;
  char c3;
  int v2c;
  int v28;
  int v24;
  int v20;
  char *v1c;
  int v18;
  int *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00431774;
  *_fs = &_seh_prev;
  v14 = this;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  _seh_state = 0;
  self = (int *)((DialogWidget *)v14)->dialog_data;
  FUN_00458040(self);
  v20 = 0;
  v24 = 0;
  *v14 = &PTR_FUN_00474290;
  v28 = 0;
  v2c = 0;
  _seh_state = CONCAT31((unsigned int)((uint)_seh_state >> 8),3);
  FUN_0041cdc0(v14,&v2c);
  FUN_0041ce10(v14,&v24,0);
  FUN_00458e50(self,0x10003);
  n2 = 0x431685;
  FUN_0041d780(self,(void *)v14[3]);
  c3 = '\0';
  v18 = v28 + -0x4600;
  v1c = &_tmp_32;
  FUN_00401050(&_tmp_32,0x14);
  FUN_00458ca0(self,v18,n2,c3);
  v1c = (char *)(v24 + 0x3700);
  FUN_0041d020(self,v20 + 0x2300,(int)v1c,0);
  FUN_0041dd40(self);
  FUN_00458de0(self,'\b');
  FUN_00458dd0(self,1);
  ((void (*)(void))((void **)(*self))[0x90 / 4])(); /* self->vtable[36] */
  ((UIWidget *)v14)->field_109 = 1;
  FUN_00431860((int)v14);
  n2 = DAT_004896b0;
  if (*(char *)(DAT_004896b0 + 0x28) == '\0') {
    *(char *)(DAT_004896b0 + 0x28) = '\x01';
    dw1 = GetTickCount();
    *(DWORD *)(n2 + 4) = dw1;
    *(DWORD *)(n2 + 0xc) = dw1;
  }
  _seh_state = (_seh_state & ~0xFF) | 2;
  *(char *)(DAT_004896b0 + 0x2a) = 1;
  FUN_00431756();
  _seh_state = CONCAT31((((_seh_state) >> 8) & 0xFFFFFF),1);
  FUN_0043175e();
  *_fs = _seh_prev;
  return v14;
}


/* FUN_00431756 @ 0x00431756 */

void FUN_00431756(void) { return; }


/* FUN_0043175e @ 0x0043175e */

void FUN_0043175e(void) { return; }


/* FUN_00431790 @ 0x00431790 */

int * __thiscall FUN_00431790(void *this,byte param_1)
{
  FUN_004317b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004317b0 @ 0x004317b0 */

void __fastcall FUN_004317b0(int *param_1)
{
  int n1;
  DWORD dw2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  uint _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00431840;
  *param_1 = &PTR_FUN_00474290;
  *_fs = &_seh_prev;
  n1 = DAT_004896b0;
  _seh_state = 1;
  if ((*(char *)(DAT_004896b0 + 0x28) != '\0') && (*(char *)(DAT_004896b0 + 0x29) == '\0')) {
    *(char *)(DAT_004896b0 + 0x28) = '\0';
    dw2 = GetTickCount();
    *(DWORD *)(n1 + 4) = dw2;
    *(DWORD *)(n1 + 0xc) = dw2;
  }
  _seh_state = _seh_state & 0xffffff00;
  *(char *)(DAT_004896b0 + 0x2a) = 0;
  FUN_00431832();
  _seh_state = 0xffffffff;
  FUN_0043184a();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00431832 @ 0x00431832 */

void FUN_00431832(void)
{
  int _ebp;
  
  FUN_00458710((int *)((int)((DialogWidget *)*(int *)(_ebp + -0x10))->dialog_data));
}


/* FUN_0043184a @ 0x0043184a */

void FUN_0043184a(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_00431860 @ 0x00431860 */

void __fastcall FUN_00431860(int param_1)
{
  ((DialogWidget *)param_1)->dialog_initialized = 1;
  ((DialogWidget *)param_1)->dialog_value = 0;
  *(int *)(param_1 + 0x1d4) = 0; /* TODO: offset 0x1D4 in DialogWidget._pad1d3 region */
  ((DialogWidget *)param_1)->dialog_active = 0;
  ((DialogWidget *)param_1)->input_mode = 0;
  FUN_00431be0(param_1);
}


/* FUN_004318b0 @ 0x004318b0 */

void __thiscall FUN_004318b0(void *this,char param_1)
{
    /* STUB: 158 lines not yet reconstructed */
    return;
}


/* FUN_00431b45 @ 0x00431b45 */

void FUN_00431b45(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x48));
}


/* FUN_00431b5f @ 0x00431b5f */

void FUN_00431b5f(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x2c));
}


/* FUN_00431b80 @ 0x00431b80 */

void FUN_00431b80(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488c90,u1,_arg5);
}


/* FUN_00431bd0 @ 0x00431bd0 */

void FUN_00431bd0(void) { return; }


/* FUN_00431be0 @ 0x00431be0 */

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
  char v50 [80];
  
  pc7 = v50;
  for (n6 = 0x14; n6 != 0; n6 = n6 + -1) {
    pc7[0] = '\0';
    pc7[1] = '\0';
    pc7[2] = '\0';
    pc7[3] = '\0';
    pc7 = pc7 + 4;
  }
  this = (int *)((DialogWidget *)param_1)->dialog_data;
  sprintf(v50,&DAT_00480110,(double)*(float *)&((DialogWidget *)param_1)->dialog_value);
  FUN_00458860(this,v50);
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
        if ((*(int **)(n3 + 4) != NULL) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != NULL)) {
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
        if ((*(int **)(n3 + 4) != NULL) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != NULL)) {
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
          if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != NULL) &&
             (pc7 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc7 != NULL)) {
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
      if ((*(int **)(n3 + 4) != NULL) &&
         (pc7 = (char *)**(int **)(n3 + 4), pc7 != NULL)) {
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
        if ((*(int **)(n3 + 4) != NULL) &&
           (pc7 = (char *)**(int **)(n3 + 4), pc7 != NULL)) {
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
          if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != NULL) &&
             (pc7 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc7 != NULL)) {
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
    if ((*(int **)(n5 + 4) != NULL) &&
       (pc7 = (char *)**(int **)(n5 + 4), pc7 != NULL)) {
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
    if ((*(int **)(n5 + 4) != NULL) &&
       (pc7 = (char *)**(int **)(n5 + 4), pc7 != NULL)) {
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
  if ((*(int **)(n3 + 4) != NULL) &&
     (pc7 = (char *)**(int **)(n3 + 4), pc7 != NULL)) {
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


/* FUN_00431f20 @ 0x00431f20 */

/* NOTE: overlapping globals */

void FUN_00431f20(void)
{
  _DAT_00488c9e = 0;
  _DAT_00488c9c = 0;
}


/* FUN_00431f30 @ 0x00431f30 */

void FUN_00431f30(void)
{
  _atexit(FUN_00431f40);
}


/* FUN_00431f40 @ 0x00431f40 */

void FUN_00431f40(void) { return; }


/* FUN_00431f50 @ 0x00431f50 */

void __thiscall FUN_00431f50(DialogWidget *this,char param_1)
{
  int n1;
  
  if (this->dialog_active == '\0') {
    if (this->dialog_initialized != '\0') goto L_00431fab;
    n1 = FUN_004589f0((intptr_t)this->dialog_data);
    sscanf((char *)**(int **)(n1 + 4),&DAT_00480118,&this->dialog_value);
    this->dialog_active = 1;
  }
  else {
    if (this->dialog_initialized != '\0') goto L_00431fab;
    FUN_00432000((intptr_t)this);
  }
  this->dialog_initialized = 1;
L_00431fab:
  this->input_mode = param_1;
}


/* FUN_00431fd0 @ 0x00431fd0 */

/* NOTE: overlapping globals */

void FUN_00431fd0(void)
{
  _DAT_00488c9a = 0;
  _DAT_00488c98 = 0;
}


/* FUN_00431fe0 @ 0x00431fe0 */

void FUN_00431fe0(void)
{
  _atexit(FUN_00431ff0);
}


/* FUN_00431ff0 @ 0x00431ff0 */

void FUN_00431ff0(void) { return; }


/* FUN_00432000 @ 0x00432000 */

void __fastcall FUN_00432000(int param_1)
{
  float *pfVar1;
  float f2;
  int n3;
  
  if (((DialogWidget *)param_1)->dialog_active == '\0') {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x1d4); /* TODO: offset 0x1D4 in DialogWidget._pad1d3 region */
  n3 = FUN_004589f0((int)((DialogWidget *)param_1)->dialog_data);
  sscanf((char *)**(int **)(n3 + 4),&DAT_00480118,pfVar1);
  switch(((DialogWidget *)param_1)->input_mode) {
  case 0x2a:
    f2 = *(float *)&((DialogWidget *)param_1)->dialog_value * *pfVar1;
    break;
  case 0x2b:
    f2 = *(float *)&((DialogWidget *)param_1)->dialog_value + *pfVar1;
    break;
  default:
    goto sw_2c;
  case 0x2d:
    f2 = *(float *)&((DialogWidget *)param_1)->dialog_value - *pfVar1;
    break;
  case 0x2f:
    if (ABS(*pfVar1) == 0.0) {
      FUN_00431860(param_1);
      FUN_00458860((void *)((DialogWidget *)param_1)->dialog_data,s_Error_0047ee88);
      return;
    }
    f2 = *(float *)&((DialogWidget *)param_1)->dialog_value / *pfVar1;
  }
  *(float *)&((DialogWidget *)param_1)->dialog_value = f2;
sw_2c:
  *pfVar1 = 0.0;
  ((DialogWidget *)param_1)->dialog_initialized = 1;
  FUN_00431be0(param_1);
}


/* FUN_00432370 @ 0x00432370 */

void __thiscall FUN_00432370(TextDisplay *this,int param_1,int param_2)
{
  int n1;
  short s2;
  
  s2 = 1;
  if (((CVector *)this->field_11c)->count != 0) {
    do {
      n1 = (int)s2;
      s2 = s2 + 1;
      FUN_0041d3a0(*(void **)(**(int **)((CVector *)this->field_11c)->data + -4 + n1 * 4),param_1,
                   param_2,'\x01');
    } while ((uint)(int)s2 <= ((CVector *)this->field_11c)->count);
  }
  FUN_0041d3a0((void *)&this->field_126,param_1,param_2,'\x01');
  FUN_0041d3a0(this,param_1,param_2,'\x01');
}


/* FUN_004325d0 @ 0x004325d0 */

void FUN_004325d0(void) { return; }


/* FUN_004325d8 @ 0x004325d8 */

void FUN_004325d8(void) { return; }


/* FUN_004325e0 @ 0x004325e0 */

void FUN_004325e0(void) { return; }


/* FUN_004325e8 @ 0x004325e8 */

void FUN_004325e8(void) { return; }


/* FUN_004325fa @ 0x004325fa */

void FUN_004325fa(void) { return; }


/* FUN_00432610 @ 0x00432610 */

void __fastcall FUN_00432610(int *param_1)
{
  int *pn1;
  
  pn1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  ((void (*)(void))((void **)(*pn1))[200 / 4])(); /* pn1->vtable[50] */
  *(char *)(pn1 + 0x5d) = 1;
  FUN_0042c3f0(param_1);
}


/* FUN_00432640 @ 0x00432640 */

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
}


/* FUN_00432680 @ 0x00432680 */

void __thiscall FUN_00432680(CString *this,int param_1,int param_2)
{
  char c1;
  int *pn2;
  char *pc3;
  int n4;

  pn2 = (int *)this->pp_buffer;
  n4 = 0;
  if ((pn2 != NULL) && (pc3 = (char *)*pn2, pc3 != NULL)) {
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


/* FUN_004326d0 @ 0x004326d0 */

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
    if ((pu4 != NULL) && (pc6 = (char *)*pu4, pc6 != NULL)) {
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
  n5 = 0;
  if (0 < param_2) {
    do {
      n5 = n5 + 1;
      *(char *)(*this->pp_buffer + -1 + n5) = param_1;
    } while (n5 < param_2);
  }
  *(char *)(*this->pp_buffer + n5) = 0;
}


/* FUN_00432770 @ 0x00432770 */

int __thiscall FUN_00432770(CString *this,char param_1,int param_2,int param_3)
{
  char c1;
  int *pn2;
  char *pc3;
  int n4;

  pn2 = (int *)this->pp_buffer;
  if ((pn2 != NULL) && (0 < param_3)) {
    n4 = 0;
    if ((pn2 != NULL) && (pc3 = (char *)*pn2, pc3 != NULL)) {
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


/* FUN_004327e0 @ 0x004327e0 */

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
  if (pn2 != NULL) {
    n3 = 0;
    pc6 = (char *)*pn2;
    if (pc6 != NULL) {
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
      if ((pn2 != NULL) && (pc6 = (char *)*pn2, pc6 != NULL)) {
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
          if (pc6 != NULL) {
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
            if (pc6 != NULL) {
              c1 = *pc6;
              pc5 = pc6;
              while (c1 != '\0') {
                if (*pc5 == param_1) {
                  if (pc5[1] == c4) goto L_00432886;
                  goto L_00432889;
                }
                pc5 = pc5 + 2;
                c1 = *pc5;
              }
            }
          }
          if (param_1 == c4) {
L_00432886:
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return n3;
            }
          }
L_00432889:
          n3 = n3 + -1;
        } while (n3 != 0);
      }
    }
  }
  return -1;
}


/* FUN_004328b0 @ 0x004328b0 */

void FUN_004328b0(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488ca0,u1,_arg5);
}


/* FUN_00432900 @ 0x00432900 */

void FUN_00432900(void) { return; }


/* FUN_00432920 @ 0x00432920 */

/* NOTE: overlapping globals */

void FUN_00432920(void)
{
  _DAT_00488cae = 0;
  _DAT_00488cac = 0;
}


/* FUN_00432930 @ 0x00432930 */

void FUN_00432930(void)
{
  _atexit(FUN_00432940);
}


/* FUN_00432940 @ 0x00432940 */

void FUN_00432940(void) { return; }


/* FUN_00432960 @ 0x00432960 */

/* NOTE: overlapping globals */

void FUN_00432960(void)
{
  _DAT_00488caa = 0;
  _DAT_00488ca8 = 0;
}


/* FUN_00432970 @ 0x00432970 */

void FUN_00432970(void)
{
  _atexit(FUN_00432980);
}


/* FUN_00432980 @ 0x00432980 */

void FUN_00432980(void) { return; }


/* FUN_00432990 @ 0x00432990 */

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


/* FUN_004329b0 @ 0x004329b0 */

int * __thiscall FUN_004329b0(void *this,byte param_1)
{
  FUN_00432a50(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004329d0 @ 0x004329d0 */

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


/* FUN_00432a10 @ 0x00432a10 */

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


/* FUN_00432a50 @ 0x00432a50 */

void __fastcall FUN_00432a50(int *param_1)
{
  *param_1 = &PTR_FUN_00474380;
}


/* FUN_00432a60 @ 0x00432a60 */

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
}


/* FUN_00432a90 @ 0x00432a90 */

float10 __fastcall FUN_00432a90(int param_1)
{
  return SQRT((float10)*(double *)(param_1 + 0xc) * (float10)*(double *)(param_1 + 0xc) +
              (float10)*(double *)(param_1 + 4) * (float10)*(double *)(param_1 + 4));
}


/* FUN_00432ab0 @ 0x00432ab0 */

void __fastcall FUN_00432ab0(int param_1)
{
  int n1;
  int *pu2;
  int *pu3;
  int *_fs;
  float10 f4;
  double _arg1;
  double _arg2;
  char v3c [4];
  int v38 [6];
  double v20;
  double v18;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00432b78;
  *_fs = &_seh_prev;
  FUN_004329d0(v3c,(int *)&_tmp_0);
  _seh_state = 0;
  pu2 = v38;
  pu3 = (int *)&_tmp_23;
  for (n1 = 6; n1 != 0; n1 = n1 + -1) {
    *pu3 = *pu2;
    pu2 = pu2 + 1;
    pu3 = pu3 + 1;
  }
  f4 = FUN_00432b90(param_1,_arg1,_arg2);
  v18 = (double)f4;
  f4 = FUN_00432a90(param_1);
  v20 = (double)f4;
  f4 = FUN_00432a90((int)v3c);
  f4 = (float10)v18 / (f4 * (float10)v20);
  v18 = (double)f4;
  if (f4 <= (float10)1.0) {
    if (v18 < -1.0) {
      v18 = -1.0;
    }
  }
  else {
    v18 = 1.0;
  }
  _seh_state = 0xffffffff;
  FUN_00432b82();
  _CIacos();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00432b82 @ 0x00432b82 */

void FUN_00432b82(void)
{
  int _ebp;
  
  FUN_00432a50((int *)(_ebp + -0x38));
}


/* FUN_00432b90 @ 0x00432b90 */

float10 __thiscall FUN_00432b90(int param_1,double param_2,double param_3)
{
  return (float10)*(double *)(param_1 + 0xc) * (float10)param_3 +
         (float10)*(double *)(param_1 + 4) * (float10)param_2;
}


/* FUN_00432bb0 @ 0x00432bb0 */

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
}


/* FUN_00432be0 @ 0x00432be0 */

float10 __fastcall FUN_00432be0(int param_1)
{
    /* STUB: 59 lines not yet reconstructed */
    return 0;
}


/* FUN_00432cb6 @ 0x00432cb6 */

void FUN_00432cb6(void)
{
  int _ebp;
  
  FUN_00432a50((int *)(_ebp + -0x30));
}


/* FUN_00432cc0 @ 0x00432cc0 */

float10 __fastcall FUN_00432cc0(int param_1)
{
  int n1;
  int *pu2;
  int *pu3;
  int *_fs;
  float10 f4;
  char v34 [28];
  double v18;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00432d56;
  *_fs = &_seh_prev;
  FUN_00432a10(v34,0,0,0,0xbff00000,0,0);
  _seh_state = 0;
  if (param_1 == 0) {
    pu2 = NULL;
  }
  else {
    pu2 = (int *)(param_1 + 4);
  }
  pu3 = (int *)&_tmp_26;
  for (n1 = 6; n1 != 0; n1 = n1 + -1) {
    *pu3 = *pu2;
    pu2 = pu2 + 1;
    pu3 = pu3 + 1;
  }
  f4 = FUN_00432be0((int)v34);
  v18 = (double)f4;
  if (f4 < (float10)0.0) {
    v18 = v18 + 6.283185306;
  }
  _seh_state = 0xffffffff;
  FUN_00432d60();
  *_fs = _seh_prev;
  return (float10)v18;
}


/* FUN_00432d60 @ 0x00432d60 */

void FUN_00432d60(void)
{
  int _ebp;
  
  FUN_00432a50((int *)(_ebp + -0x30));
}


/* FUN_00432d80 @ 0x00432d80 */

void FUN_00432d80(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488cb0,u1,_arg5);
}


/* FUN_00432dd0 @ 0x00432dd0 */

void FUN_00432dd0(void) { return; }


/* FUN_00432df0 @ 0x00432df0 */

/* NOTE: overlapping globals */

void FUN_00432df0(void)
{
  _DAT_00488cbe = 0;
  _DAT_00488cbc = 0;
}


/* FUN_00432e00 @ 0x00432e00 */

void FUN_00432e00(void)
{
  _atexit(FUN_00432e10);
}


/* FUN_00432e10 @ 0x00432e10 */

void FUN_00432e10(void) { return; }


/* FUN_00432e30 @ 0x00432e30 */

/* NOTE: overlapping globals */

void FUN_00432e30(void)
{
  _DAT_00488cba = 0;
  _DAT_00488cb8 = 0;
}


/* FUN_00432e40 @ 0x00432e40 */

void FUN_00432e40(void)
{
  _atexit(FUN_00432e50);
}


/* FUN_00432e50 @ 0x00432e50 */

void FUN_00432e50(void) { return; }


/* FUN_00432e70 @ 0x00432e70 */

void FUN_00432e70(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488cc8,u1,_arg5);
}


/* FUN_00432eb0 @ 0x00432eb0 */

void FUN_00432eb0(void)
{
  _atexit(FUN_00432ec0);
}


/* FUN_00432ec0 @ 0x00432ec0 */

void FUN_00432ec0(void) { return; }


/* FUN_00432ee0 @ 0x00432ee0 */

/* NOTE: overlapping globals */

void FUN_00432ee0(void)
{
  _DAT_00488cd6 = 0;
  _DAT_00488cd4 = 0;
}


/* FUN_00432ef0 @ 0x00432ef0 */

void FUN_00432ef0(void)
{
  _atexit(FUN_00432f00);
}


/* FUN_00432f00 @ 0x00432f00 */

void FUN_00432f00(void) { return; }


/* FUN_00432f20 @ 0x00432f20 */

/* NOTE: overlapping globals */

void FUN_00432f20(void)
{
  _DAT_00488cd2 = 0;
  _DAT_00488cd0 = 0;
}


/* FUN_00432f30 @ 0x00432f30 */

void FUN_00432f30(void)
{
  _atexit(FUN_00432f40);
}


/* FUN_00432f40 @ 0x00432f40 */

void FUN_00432f40(void) { return; }


/* FUN_00432f50 @ 0x00432f50 */

/* NOTE: Removing unreachable block (ram,0x00432f76) */

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


/* FUN_00432fb0 @ 0x00432fb0 */

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


/* FUN_00433050 @ 0x00433050 */

int __cdecl FUN_00433050(int *param_1)
{
  ushort *pu1;
  int n2;
  char c3;
  int n4;
  int n5;
  char *pc6;
  int n7;
  
  if (param_1 == NULL) {
    return 0xfffffffe;
  }
  param_1[5] = (int)param_1[1] / 0x73e;
  pu1 = FUN_0046f060(DAT_0047fc7c,(int)param_1[1] / 0x73e,1);
  param_1[4] = pu1;
  if (pu1 == NULL) {
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


/* FUN_00433100 @ 0x00433100 */

ushort * FUN_00433100(void)
{
  ushort *pu1;
  
  pu1 = FUN_0046f060(DAT_0047fc7c,0x18,1);
  if (pu1 == NULL) {
    return NULL;
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


/* FUN_00433140 @ 0x00433140 */

int __cdecl FUN_00433140(ushort *param_1,int *param_2)
{
  int _eax;
  short u4;
  ushort *pu1;
  int u2;
  uint u3;
  uint u5;
  int *pu6;
  ushort *v4;
  
  u4 = (short)((uint)_eax >> 0x10);
  if (param_1 == NULL) {
    return CONCAT22(u4,0xfff9);
  }
  if (param_2 == NULL) {
    return CONCAT22(u4,0xfffe);
  }
  if (((((*param_1 & 1) == 0) && ((short)param_1[1] < 0x100)) && ((short)param_1[2] < 0x100)) &&
     ((short)param_1[3] < 0x100)) {
    v4 = FUN_00433100();
    if (v4 == NULL) {
      return 0xff94;
    }
    u3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(v4 + 2) = *(int *)(param_1 + 4);
      *(uint *)(v4 + 2) = *(uint *)(v4 + 2) & 0xfffffffe;
      pu1 = FUN_0046f060(DAT_0047fc7c,*(uint *)(v4 + 2),1);
      *(ushort **)v4 = pu1;
      if (*(int **)v4 == NULL) {
        u2 = FUN_00433270(&v4);
        return CONCAT22((short)((uint)u2 >> 0x10),0xff94);
      }
      u3 = *(uint *)(v4 + 2);
      pu1 = param_1 + 8;
      pu6 = *(int **)v4;
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
    v4[4] = *param_1;
    v4[5] = param_1[1];
    v4[6] = param_1[2];
    v4[7] = param_1[3];
    *param_2 = v4;
    return u3 & 0xffff0000;
  }
  return CONCAT22(u4,0xfff9);
}


/* FUN_00433270 @ 0x00433270 */

uint __cdecl FUN_00433270(int *param_1)
{
    /* STUB: 72 lines not yet reconstructed */
    return 0;
}


/* FUN_00433420 @ 0x00433420 */

int __cdecl FUN_00433420(int *param_1)
{
    /* STUB: 87 lines not yet reconstructed */
    return 0;
}


/* FUN_004335e0 @ 0x004335e0 */

void FUN_004335e0(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488cd8,u1,_arg5);
}


/* FUN_00433630 @ 0x00433630 */

void FUN_00433630(void) { return; }


/* FUN_00433650 @ 0x00433650 */

/* NOTE: overlapping globals */

void FUN_00433650(void)
{
  _DAT_00488ce6 = 0;
  _DAT_00488ce4 = 0;
}


/* FUN_00433660 @ 0x00433660 */

void FUN_00433660(void)
{
  _atexit(FUN_00433670);
}


/* FUN_00433670 @ 0x00433670 */

void FUN_00433670(void) { return; }


/* FUN_00433690 @ 0x00433690 */

/* NOTE: overlapping globals */

void FUN_00433690(void)
{
  _DAT_00488ce2 = 0;
  _DAT_00488ce0 = 0;
}


/* FUN_004336a0 @ 0x004336a0 */

void FUN_004336a0(void)
{
  _atexit(FUN_004336b0);
}


/* FUN_004336b0 @ 0x004336b0 */

void FUN_004336b0(void) { return; }


/* FUN_004336c0 @ 0x004336c0 */

int * __fastcall FUN_004336c0(int *param_1)
{
    /* STUB: 35 lines not yet reconstructed */
    return 0;
}


/* FUN_00433790 @ 0x00433790 */

int * __thiscall FUN_00433790(void *this,byte param_1)
{
  FUN_004337b0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_004337b0 @ 0x004337b0 */

void __fastcall FUN_004337b0(int *param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return;
}


/* FUN_00433876 @ 0x00433876 */

void FUN_00433876(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_00433880 @ 0x00433880 */

char __fastcall FUN_00433880(UIElement *param_1)
{
  param_1->_pad42[1] = 1;
  FUN_00430ac0((void *)param_1->field_06,param_1);
  param_1->_pad42[1] = 0;
  return 1;
}


/* FUN_00433a50 @ 0x00433a50 */

void FUN_00433a50(void)
{
  int _ebp;
  
  FUN_004097c0((int *)(_ebp + -0x24));
}


/* FUN_00433a80 @ 0x00433a80 */

short __fastcall FUN_00433a80(int param_1)
{
  return *(short *)&((UIElement *)param_1)->sub_widgets_a[4]; /* offset 0x56 in sub_widgets_a */
}


/* FUN_00433aa0 @ 0x00433aa0 */

int * __thiscall FUN_00433aa0(void *this,short param_1)
{
    /* STUB: 217 lines not yet reconstructed */
    return 0;
}


/* FUN_00433f8c @ 0x00433f8c */

void FUN_00433f8c(void) { return; }


/* FUN_00433f94 @ 0x00433f94 */

void FUN_00433f94(void) { return; }


/* FUN_00433f9c @ 0x00433f9c */

void FUN_00433f9c(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x43c));
}


/* FUN_00433fb1 @ 0x00433fb1 */

void FUN_00433fb1(void) { return; }


/* FUN_0043406d @ 0x0043406d */

void FUN_0043406d(void) { return; }


/* FUN_00434090 @ 0x00434090 */

uint __thiscall FUN_00434090(void *this,int param_1)
{
    /* STUB: 9 lines not yet reconstructed */
    return 0;
}


/* FUN_00434130 @ 0x00434130 */

void FUN_00434130(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488ce8,u1,_arg5);
}


/* FUN_00434180 @ 0x00434180 */

void FUN_00434180(void) { return; }


/* FUN_004341a0 @ 0x004341a0 */

/* NOTE: overlapping globals */

void FUN_004341a0(void)
{
  _DAT_00488cf6 = 0;
  _DAT_00488cf4 = 0;
}


/* FUN_004341b0 @ 0x004341b0 */

void FUN_004341b0(void)
{
  _atexit(FUN_004341c0);
}


/* FUN_004341c0 @ 0x004341c0 */

void FUN_004341c0(void) { return; }


/* FUN_004341e0 @ 0x004341e0 */

/* NOTE: overlapping globals */

void FUN_004341e0(void)
{
  _DAT_00488cf2 = 0;
  _DAT_00488cf0 = 0;
}


/* FUN_004341f0 @ 0x004341f0 */

void FUN_004341f0(void)
{
  _atexit(FUN_00434200);
}


/* FUN_00434200 @ 0x00434200 */

void FUN_00434200(void) { return; }


/* FUN_00434220 @ 0x00434220 */

void FUN_00434220(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488cf8,u1,_arg5);
}


/* FUN_00434260 @ 0x00434260 */

void FUN_00434260(void)
{
  _atexit(FUN_00434270);
}


/* FUN_00434270 @ 0x00434270 */

void FUN_00434270(void) { return; }


/* FUN_00434290 @ 0x00434290 */

/* NOTE: overlapping globals */

void FUN_00434290(void)
{
  _DAT_00488d06 = 0;
  _DAT_00488d04 = 0;
}


/* FUN_004342a0 @ 0x004342a0 */

void FUN_004342a0(void)
{
  _atexit(FUN_004342b0);
}


/* FUN_004342b0 @ 0x004342b0 */

void FUN_004342b0(void) { return; }


/* FUN_004342d0 @ 0x004342d0 */

/* NOTE: overlapping globals */

void FUN_004342d0(void)
{
  _DAT_00488d02 = 0;
  _DAT_00488d00 = 0;
}


/* FUN_004342e0 @ 0x004342e0 */

void FUN_004342e0(void)
{
  _atexit(FUN_004342f0);
}


/* FUN_004342f0 @ 0x004342f0 */

void FUN_004342f0(void) { return; }


/* FUN_00434300 @ 0x00434300 */

short * __cdecl FUN_00434300(int *param_1)
{
  uint *pu1;
  uint u2;
  int n3;
  int n4;
  short s5;
  short *ps6;
  
  s5 = 0;
  if ((param_1 == NULL) || (*param_1 == 0)) {
    return NULL;
  }
  if (0 < DAT_00487126) {
    do {
      n4 = (int)s5;
      if ((&DAT_00487132)[n4 * 0x3c] != 0) goto L_00434392;
      s5 = s5 + 1;
    } while (s5 < DAT_00487126);
  }
  s5 = 0;
  if (0 < DAT_00487126) {
    do {
      n4 = (int)s5;
      if (((&DAT_00487134)[n4 * 0x3c] & 0xff) < (*(ushort *)(param_1 + 2) & 0xff)) {
L_00434392:
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
  return NULL;
}


/* FUN_00434490 @ 0x00434490 */

int __cdecl FUN_00434490(int param_1)
{
  uint *pu1;
  uint u2;
  uint _eax;
  int n3;
  int u4;
  ushort u5;
  short s6;
  short v2;
  
  if (param_1 == 0) {
    return CONCAT22((short)(_eax >> 0x10),0xffff);
  }
  if (param_1 == -1) {
    v2 = 0;
    if (0 < DAT_00487126) {
      do {
        n3 = (int)v2;
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
        v2 = v2 + 1;
      } while (v2 < DAT_00487126);
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
      _eax = s6 * 7;
      pu1 = (uint *)(param_1 + 0x24 + s6 * 0xe);
      if (((*(byte *)((int)pu1 + 0xd) & 0x10) != 0) && (_eax = 0, *pu1 != 0)) { /* TODO: sound slot sub-entry flags byte at +0xd */
        _eax = FUN_0046f5f0(*pu1);
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
        _eax = 0;
        if (u2 != 0) {
          _eax = FUN_0046f5f0(u2);
          (&DAT_00487312)[s6] = 0;
        }
        s6 = s6 + 1;
      } while (s6 < 0x18);
      DAT_00487310 = 0;
    }
  }
  return _eax & 0xffff0000;
}


/* FUN_00434640 @ 0x00434640 */

int __cdecl FUN_00434640(int *param_1,int param_2)
{
  int *pn1;
  uint u2;
  int n3;
  int _eax;
  short u5;
  void *pu4;
  short s6;
  short s7;
  bool b8;
  
  u5 = (short)((uint)_eax >> 0x10);
  if (param_2 == 0) {
    return CONCAT22(u5,0xffff);
  }
  if (param_1 == NULL) {
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


/* FUN_00434780 @ 0x00434780 */

void FUN_00434780(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d08,u1,_arg5);
}


/* FUN_004347d0 @ 0x004347d0 */

void FUN_004347d0(void) { return; }


/* FUN_004347f0 @ 0x004347f0 */

/* NOTE: overlapping globals */

void FUN_004347f0(void)
{
  _DAT_00488d16 = 0;
  _DAT_00488d14 = 0;
}


/* FUN_00434800 @ 0x00434800 */

void FUN_00434800(void)
{
  _atexit(FUN_00434810);
}


/* FUN_00434810 @ 0x00434810 */

void FUN_00434810(void) { return; }


/* FUN_00434830 @ 0x00434830 */

/* NOTE: overlapping globals */

void FUN_00434830(void)
{
  _DAT_00488d12 = 0;
  _DAT_00488d10 = 0;
}


/* FUN_00434840 @ 0x00434840 */

void FUN_00434840(void)
{
  _atexit(FUN_00434850);
}


/* FUN_00434850 @ 0x00434850 */

void FUN_00434850(void) { return; }


/* FUN_00434860 @ 0x00434860 */

int * __fastcall FUN_00434860(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004348fc;
  *_fs = &_seh_prev;
  FUN_0041b6c0(param_1);
  _seh_state = 0;
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
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00434974 @ 0x00434974 */

void FUN_00434974(void) { return; }


/* FUN_0043497f @ 0x0043497f */

void FUN_0043497f(void)
{
  int _ebp;
  
  FUN_0043b810((int *)(*(int *)(_ebp + -0x10) + 0x42));
}


/* FUN_00434994 @ 0x00434994 */

void FUN_00434994(void)
{
  int _ebp;
  
  FUN_0041b890(*(int **)(_ebp + -0x10));
}


/* FUN_004349a0 @ 0x004349a0 */

void __thiscall FUN_004349a0(SoundPlayer *this,short param_1,short param_2)
{
  this->sequence_data[5] = param_1;
  this->sequence_data[4] = param_2;
  FUN_0041cad0(this);
}


/* FUN_004349e0 @ 0x004349e0 */

void __fastcall FUN_004349e0(void *param_1)
{
    /* STUB: 163 lines not yet reconstructed */
    return;
}


/* FUN_00434b6c @ 0x00434b6c */

void FUN_00434b6c(void) { return; }


/* FUN_00434b74 @ 0x00434b74 */

void FUN_00434b74(void) { return; }


/* FUN_00434d5b @ 0x00434d5b */

void FUN_00434d5b(void) { return; }


/* FUN_00434d63 @ 0x00434d63 */

void FUN_00434d63(void) { return; }


/* FUN_00434d6b @ 0x00434d6b */

void FUN_00434d6b(void) { return; }


/* FUN_00434d7b @ 0x00434d7b */

void FUN_00434d7b(void) { return; }


/* FUN_00434d8d @ 0x00434d8d */

void FUN_00434d8d(void) { return; }


/* FUN_00434da0 @ 0x00434da0 */

short * __thiscall FUN_00434da0(GameWidget *this,short *param_1)
{
  int u1;
  short u2;
  int *_fs;
  char v10 [12];
  
  u1 = *_fs;
  u2 = this->flags;
  *_fs = v10;
  param_1[1] = u2;
  *param_1 = this->field_10;
  *_fs = u1;
  return param_1;
}


/* FUN_00434e10 @ 0x00434e10 */

char FUN_00434e10(void *param_1,int param_2,short param_3,short param_4)
{
    /* STUB: 94 lines not yet reconstructed */
    return 0;
}


/* FUN_0043502b @ 0x0043502b */

void FUN_0043502b(void) { return; }


/* FUN_0043503d @ 0x0043503d */

void FUN_0043503d(void)
{
  int _ebp;
  
  FUN_00465af0((int *)(_ebp + -0x4c));
}


/* FUN_00435060 @ 0x00435060 */

void FUN_00435060(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d18,u1,_arg5);
}


/* FUN_004350b0 @ 0x004350b0 */

void FUN_004350b0(void) { return; }


/* FUN_004350d0 @ 0x004350d0 */

/* NOTE: overlapping globals */

void FUN_004350d0(void)
{
  _DAT_00488d26 = 0;
  _DAT_00488d24 = 0;
}


/* FUN_004350e0 @ 0x004350e0 */

void FUN_004350e0(void)
{
  _atexit(FUN_004350f0);
}


/* FUN_004350f0 @ 0x004350f0 */

void FUN_004350f0(void) { return; }


/* FUN_00435110 @ 0x00435110 */

/* NOTE: overlapping globals */

void FUN_00435110(void)
{
  _DAT_00488d22 = 0;
  _DAT_00488d20 = 0;
}


/* FUN_00435120 @ 0x00435120 */

void FUN_00435120(void)
{
  _atexit(FUN_00435130);
}


/* FUN_00435130 @ 0x00435130 */

void FUN_00435130(void) { return; }


/* FUN_00435150 @ 0x00435150 */

void FUN_00435150(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d38,u1,_arg5);
}


/* FUN_00435190 @ 0x00435190 */

void FUN_00435190(void)
{
  _atexit(FUN_004351a0);
}


/* FUN_004351a0 @ 0x004351a0 */

void FUN_004351a0(void) { return; }


/* FUN_004351c0 @ 0x004351c0 */

/* NOTE: overlapping globals */

void FUN_004351c0(void)
{
  _DAT_00488d5a = 0;
  _DAT_00488d58 = 0;
}


/* FUN_004351d0 @ 0x004351d0 */

void FUN_004351d0(void)
{
  _atexit(FUN_004351e0);
}


/* FUN_004351e0 @ 0x004351e0 */

void FUN_004351e0(void) { return; }


/* FUN_00435200 @ 0x00435200 */

/* NOTE: overlapping globals */

void FUN_00435200(void)
{
  _DAT_00488d56 = 0;
  _DAT_00488d54 = 0;
}


/* FUN_00435210 @ 0x00435210 */

void FUN_00435210(void)
{
  _atexit(FUN_00435220);
}


/* FUN_00435220 @ 0x00435220 */

void FUN_00435220(void) { return; }


/* FUN_00435980 @ 0x00435980 */

int * __fastcall FUN_00435980(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004359d2;
  *_fs = &_seh_prev;
  FUN_0044e3f0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00474658;
  FUN_00435a60((int)param_1);
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00435a49 @ 0x00435a49 */

void FUN_00435a49(void)
{
  FUN_004012a0();
}


/* FUN_00435a60 @ 0x00435a60 */

void __fastcall FUN_00435a60(int param_1)
{
  *(int *)(param_1 + 0x11a) = 0;
  *(int *)(param_1 + 0x11e) = 0x1e;
  *(char *)(param_1 + 0x122) = 1;
  *(char *)(param_1 + 0x118) = 1;
  *(char *)(param_1 + 0x123) = 1;
}


/* FUN_00435a90 @ 0x00435a90 */

void __fastcall FUN_00435a90(int param_1)
{
  *(int *)(param_1 + 0x11a) = 0;
  *(char *)(param_1 + 0x122) = 1;
  *(char *)(param_1 + 0x123) = 1;
}


/* FUN_00435ab0 @ 0x00435ab0 */

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
}


/* FUN_00435b00 @ 0x00435b00 */

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
      ((void (*)(void))((void **)(*((UIWidget *)DAT_004897c0)->sub_widgets_a[3]))[0xac / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[43] */
    }
    else {
      FUN_004058c0(param_1,(short)n1);
    }
    *(int *)((int)param_1 + 0x11e) = 0x1e; /* TODO: unknown struct, offset 0x11e */
  }
  return;
}


/* FUN_00435b70 @ 0x00435b70 */

void __thiscall FUN_00435b70(UIWidget *this,short param_1)
{
  int n1;

  n1 = (int)this->cell_count - (int)param_1;
  if (n1 < 1) {
    n1 = 1;
  }
  FUN_004058c0(this,(short)n1);
}


/* FUN_00435ba0 @ 0x00435ba0 */

int * __fastcall FUN_00435ba0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_00435bef;
  *_fs = &_seh_prev;
  FUN_004535d0(param_1);
  *param_1 = &PTR_FUN_00474700;
  param_1[0x46] = 0;
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_00435c10 @ 0x00435c10 */

int * __thiscall FUN_00435c10(void *this,byte param_1)
{
  FUN_00435c30(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00435c30 @ 0x00435c30 */

void __fastcall FUN_00435c30(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00435c79;
  *param_1 = &PTR_FUN_00474700;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00435d70(param_1);
  _seh_state = 0xffffffff;
  FUN_00435c83();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00435c83 @ 0x00435c83 */

void FUN_00435c83(void)
{
  FUN_00429f40();
}


/* FUN_00435c90 @ 0x00435c90 */

void __fastcall FUN_00435c90(int *param_1)
{
  FUN_00435d70(param_1);
  FUN_00405570(param_1);
}


/* FUN_00435cb0 @ 0x00435cb0 */

void __fastcall FUN_00435cb0(int param_1)
{
    /* STUB: 27 lines not yet reconstructed */
    return;
}


/* FUN_00435d70 @ 0x00435d70 */

void __fastcall FUN_00435d70(DialogWidget *param_1)
{
  if (param_1->prev_dialog != NULL) {
    FUN_00436100(param_1);
    ((void (*)(void))**(void ***)&param_1->prev_dialog)(); /* prev_dialog->vtable[0] */
    param_1->prev_dialog = NULL;
  }
  return;
}


/* FUN_00435da0 @ 0x00435da0 */

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
  int *_fs;
  int v1c;
  int v18;
  void *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_004360e7;
  *_fs = &_seh_prev;
  v18 = 0;
  v1c = 0;
  _seh_state = 0;
  v14 = this;
  if (((DialogWidget *)this)->prev_dialog == NULL) {
    FUN_00435cb0((intptr_t)this);
  }
  pv2 = (void *)FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
  n3 = FUN_00432770(pv2,'0',0,1);
  if (n3 != -1) {
    while( true ) {
      n3 = 0;
      pv2 = (void *)FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      n4 = FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      if ((*(int **)(n4 + 4) != NULL) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != NULL)) {
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
      n4 = FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      if ((*(int **)(n4 + 4) != NULL) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != NULL)) {
        c1 = *pc6;
        while (c1 != '\0') {
          pc6 = pc6 + 1;
          n3 = n3 + 1;
          c1 = *pc6;
        }
      }
      pv2 = (void *)FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      n3 = n3 + -1;
      if (-1 < n3) {
        n4 = 0;
        if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != NULL) &&
           (pc6 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc6 != NULL)) {
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
    pv2 = (void *)FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
    n4 = FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
    if ((*(int **)(n4 + 4) != NULL) &&
       (pc6 = (char *)**(int **)(n4 + 4), pc6 != NULL)) {
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
      n4 = FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      if ((*(int **)(n4 + 4) != NULL) &&
         (pc6 = (char *)**(int **)(n4 + 4), pc6 != NULL)) {
        c1 = *pc6;
        while (c1 != '\0') {
          pc6 = pc6 + 1;
          n3 = n3 + 1;
          c1 = *pc6;
        }
      }
      pv2 = (void *)FUN_004589f0(((DialogWidget *)v14)->prev_dialog);
      n3 = n3 + -1;
      if (-1 < n3) {
        n4 = 0;
        if ((*(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */ != NULL) &&
           (pc6 = (char *)**(int **)((int)pv2 + 4) /* CString: pp_buffer at +0x04 */, pc6 != NULL)) {
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
  if ((*(int **)(param_1 + 4) != NULL) &&
     (pc6 = (char *)**(int **)(param_1 + 4), pc6 != NULL)) {
    c1 = *pc6;
    s8 = 0;
    while (c1 != '\0') {
      pc6 = pc6 + 1;
      s8 = s8 + 1;
      c1 = *pc6;
    }
  }
  FUN_00458b40(((DialogWidget *)v14)->prev_dialog,s8 + 1,1);
  FUN_00458920(((DialogWidget *)v14)->prev_dialog,param_1);
  FUN_0041d780(((DialogWidget *)v14)->prev_dialog,((UIElement *)v14)->parent_widget);
  FUN_0041cde0(v14,&v1c);
  FUN_0041d3a0(((DialogWidget *)v14)->prev_dialog,v18,v1c,'\0');
  FUN_0041bb70(v14,((DialogWidget *)v14)->prev_dialog,'\x01');
  FUN_0041dd40(((DialogWidget *)v14)->prev_dialog);
  FUN_0041dad0(((DialogWidget *)v14)->prev_dialog,1,'\0');
  FUN_0041da90(((DialogWidget *)v14)->prev_dialog,1);
  _seh_state = 0xffffffff;
  FUN_004360f1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004360f1 @ 0x004360f1 */

void FUN_004360f1(void) { return; }


/* FUN_00436100 @ 0x00436100 */

void __fastcall FUN_00436100(DialogWidget *param_1)
{
  if (param_1->prev_dialog != NULL) {
    FUN_0041bd00(param_1,(int)param_1->prev_dialog);
    FUN_0041d780(param_1->prev_dialog,NULL);
    FUN_0041dad0(param_1->prev_dialog,0,'\0');
  }
  return;
}


/* FUN_00436140 @ 0x00436140 */

void __thiscall FUN_00436140(DialogWidget *this,int *param_1)
{
  FUN_0041d3a0(this->prev_dialog,param_1[1],*param_1,'\x01');
}


/* FUN_00436160 @ 0x00436160 */

int * __thiscall FUN_00436160(SoundPlayer *this,int param_1,int *param_2)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_004361f1;
  *_fs = &_seh_prev;
  FUN_00435ba0(this);
  this->sequence_data[58] = 0;
  this->sequence_data[59] = 0;
  this->sequence_data[58] = 0;
  _seh_state = 1;
  *(void ***)this = &PTR_FUN_004747a8;
  if (param_1 != -1) {
    FUN_00436230(param_1,param_2);
  }
  *_fs = _seh_prev;
  return this;
}


/* FUN_00436210 @ 0x00436210 */

int * __thiscall FUN_00436210(void *this,byte param_1)
{
  FUN_00436400(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00436230 @ 0x00436230 */

void FUN_00436230(int param_1,int *param_2)
{
    /* STUB: 73 lines not yet reconstructed */
    return;
}


/* FUN_00436367 @ 0x00436367 */

void FUN_00436367(void) { return; }


/* FUN_004363f2 @ 0x004363f2 */

void FUN_004363f2(void) { return; }


/* FUN_00436400 @ 0x00436400 */

void __fastcall FUN_00436400(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00436458;
  *param_1 = &PTR_FUN_004747a8;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_0043644a();
  _seh_state = 0xffffffff;
  FUN_00436462();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0043644a @ 0x0043644a */

void FUN_0043644a(void) { return; }


/* FUN_00436462 @ 0x00436462 */

void FUN_00436462(void)
{
  int _ebp;
  
  FUN_00435c30(*(int **)(_ebp + -0x10));
}


/* FUN_0043650d @ 0x0043650d */

void FUN_0043650d(void) { return; }


/* FUN_00436530 @ 0x00436530 */

int * __thiscall FUN_00436530(void *this,int param_1,int *param_2)
{
    /* STUB: 27 lines not yet reconstructed */
    return 0;
}


/* FUN_004365f0 @ 0x004365f0 */

int * __thiscall FUN_004365f0(void *this,byte param_1)
{
  FUN_00436610(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00436610 @ 0x00436610 */

void __fastcall FUN_00436610(int *param_1)
{
    /* STUB: 19 lines not yet reconstructed */
    return;
}


/* FUN_0043667c @ 0x0043667c */

void FUN_0043667c(void)
{
  int _ebp;
  
  FUN_00436400(*(int **)(_ebp + -0x10));
}


/* FUN_00436690 @ 0x00436690 */

void __fastcall FUN_00436690(GameWidget *param_1)
{
  if (param_1->slot_ptr_0 != NULL) {
    ((void (*)(void))**(void ***)&param_1->slot_ptr_0)(); /* slot_ptr_0->vtable[0] */
    param_1->slot_ptr_0 = NULL;
  }
  FUN_00435c90(param_1);
}


/* FUN_004366c0 @ 0x004366c0 */

void __fastcall FUN_004366c0(GameWidget *this)
{
  if (this->slot_ptr_0 != NULL) {
    ((void (*)(void))**(void ***)&this->slot_ptr_0)(); /* slot_ptr_0->vtable[0] */
    this->slot_ptr_0 = NULL;
  }
  return;
}


/* FUN_004366e0 @ 0x004366e0 */

void __thiscall FUN_004366e0(GameWidget *this,short param_1,short param_2)
{
  int *_fs;
  int v18 [3];
  char *_handler;
  int v8;
  
  v18[2] = *_fs;
  _handler = &L_00436799;
  *_fs = v18 + 2;
  v18[1] = 0;
  v18[0] = 0;
  v8 = 0;
  FUN_0041cde0(this,v18);
  FUN_00406720(this->slot_ptr_0,param_1);
  FUN_0041d780(this->slot_ptr_0,this->parent_widget);
  FUN_0041dd40(this->slot_ptr_0);
  FUN_0041dad0(this->slot_ptr_0,1,'\0');
  FUN_0041d2d0(this->slot_ptr_0,v18,'\0');
  if (param_2 != 0) {
    FUN_00406ca0(this->slot_ptr_0,(char)param_2,'\0');
  }
  v8 = 0xffffffff;
  FUN_004367a3();
  *_fs = v18[2];
}


/* FUN_004367a3 @ 0x004367a3 */

void FUN_004367a3(void) { return; }


/* FUN_004367b0 @ 0x004367b0 */

void __fastcall FUN_004367b0(GameWidget *this)
{
  FUN_0041dad0(this->slot_ptr_0,0,'\0');
  FUN_0041d780(this->slot_ptr_0,NULL);
}


/* FUN_004367e0 @ 0x004367e0 */

void __fastcall FUN_004367e0(GameWidget *param_1)
{
  FUN_0041dd40(param_1);
  FUN_0041dd40(param_1->slot_ptr_0);
}


/* FUN_00436800 @ 0x00436800 */

int * __fastcall FUN_00436800(int *param_1)
{
    /* STUB: 82 lines not yet reconstructed */
    return 0;
}


/* FUN_00436a50 @ 0x00436a50 */

int * __thiscall FUN_00436a50(void *this,byte param_1)
{
  FUN_00436ae0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_00436a70 @ 0x00436a70 */

void FUN_00436a70(void)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00436ac2;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_00436ab4();
  _seh_state = 0xffffffff;
  FUN_00436acc();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00436ab4 @ 0x00436ab4 */

void FUN_00436ab4(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(*(int *)(_ebp + -0x10) + 0x1d2));
}


/* FUN_00436acc @ 0x00436acc */

void FUN_00436acc(void)
{
  FUN_00411360();
}


/* FUN_00436ae0 @ 0x00436ae0 */

void __fastcall FUN_00436ae0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00436b9b;
  *param_1 = &PTR_FUN_00474900;
  *_fs = &_seh_prev;
  _seh_state = (_seh_state & ~0xFF) | 4;
  _seh_state = (_seh_state & 0xFF) | (0 << 8);
  FUN_00436b55();
  _seh_state = (_seh_state & ~0xFF) | 3;
  FUN_00436b63();
  _seh_state = (_seh_state & ~0xFF) | 2;
  FUN_00436b71();
  _seh_state = (_seh_state & ~0xFF) | 1;
  FUN_00436b7f();
  _seh_state &= ~0xFF;
  FUN_00436b8d();
  _seh_state = 0xffffffff;
  FUN_00436ba5();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00436b55 @ 0x00436b55 */

void FUN_00436b55(void)
{
  int _ebp;
  
  FUN_0043a0b0((int *)(*(int *)(_ebp + -0x10) + 0x5ce));
}


/* FUN_00436b63 @ 0x00436b63 */

void FUN_00436b63(void)
{
  FUN_00436a70();
}


/* FUN_00436b71 @ 0x00436b71 */

void FUN_00436b71(void)
{
  int _ebp;
  
  FUN_0042f0a0((int *)(*(int *)(_ebp + -0x10) + 0x2fe));
}


/* FUN_00436b7f @ 0x00436b7f */

void FUN_00436b7f(void)
{
  int _ebp;
  
  FUN_0043a080((int *)(*(int *)(_ebp + -0x10) + 0x2e0));
}


/* FUN_00436b8d @ 0x00436b8d */

void FUN_00436b8d(void)
{
  int _ebp;
  
  FUN_0040ac40((int *)(*(int *)(_ebp + -0x10) + 0x1b4));
}


/* FUN_00436ba5 @ 0x00436ba5 */

void FUN_00436ba5(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_00436bb0 @ 0x00436bb0 */

void __thiscall FUN_00436bb0(TextDisplay *this,void *param_1)
{
  void *_Src;
  uint u1;
  int *pn2;
  uint u3;
  
  if (param_1 != NULL) {
    u3 = 0;
    u1 = this->data_count;
    if (u1 != 0) {
      pn2 = (int *)*this->pp_data;
      do {
        if ((void *)*pn2 == param_1) {
          u3 = u3 + 1;
          goto L_00436be1;
        }
        pn2 = pn2 + 1;
        u3 = u3 + 1;
      } while (u3 < u1);
    }
    u3 = 0;
L_00436be1:
    if ((u3 != 0) && (u3 <= u1)) {
      if (u3 < u1) {
        _Src = (void *)(*this->pp_data + u3 * 4);
        memmove((void *)((int)_Src + -4),_Src,(u1 - u3) * 4);
      }
      this->data_count = this->data_count + -1;
    }
    FUN_004535c0(param_1);
    FUN_0041d780(param_1,NULL);
    FUN_00436100(param_1);
  }
  return;
}


/* FUN_00436c40 @ 0x00436c40 */

uint __fastcall FUN_00436c40(void *param_1)
{
    /* STUB: 99 lines not yet reconstructed */
    return 0;
}


/* FUN_00436e60 @ 0x00436e60 */

int __cdecl FUN_00436e60(uint param_1)
{
  int n1;
  
  n1 = rand();
  return (int)(n1 * (param_1 & 0xffff)) / 0x7fff;
}


/* FUN_00436e80 @ 0x00436e80 */

char __cdecl FUN_00436e80(int param_1,int param_2)
{
  char c1;
  char u2;
  uint u3;
  int n4;
  
  if ((((UIElement *)param_1)->child_list_2 != 0) && (u3 = 1, 1 < ((CVector *)((UIElement *)param_1)->child_list_2)->count))
  {
    n4 = 4;
    do {
      c1 = FUN_00436e80(*(int *)(**(int **)((CVector *)((UIElement *)param_1)->child_list_2)->data + -4 + n4),param_2);
      if (c1 != '\0') {
        return 1;
      }
      n4 = n4 + 4;
      u3 = u3 + 1;
    } while (u3 < ((CVector *)((UIElement *)param_1)->child_list_2)->count);
  }
  u2 = FUN_00406fc0(param_1,param_2);
  return u2;
}


/* FUN_00436ef0 @ 0x00436ef0 */

uint __fastcall FUN_00436ef0(int *param_1)
{
    /* STUB: 128 lines not yet reconstructed */
    return 0;
}


/* FUN_00437290 @ 0x00437290 */

void __thiscall FUN_00437290(void *this,void *param_1)
{
  int *_fs;
  int u1;
  int _arg4;
  int v1c [2];
  char *v14;
  int _seh_prev;
  char *_handler;
  uint _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00437340;
  *_fs = &_seh_prev;
  v1c[1] = 0;
  v1c[0] = 0;
  _seh_state = 0;
  u1 = 0;
  FUN_00401050(&_tmp_34,0);
  FUN_00401050(&_tmp_33,0);
  FUN_00401270((void *)((int)param_1 + 0x132),u1,_arg4); /* TODO: unknown offset 0x132 on GameWidget (in field_130 or _pad134 range) */
  FUN_0041cde0(param_1,v1c);
  FUN_00436bb0(this,param_1);
  v14 = &_tmp_33;
  FUN_004090c0(&_tmp_33,v1c);
  _seh_state = _seh_state & 0xffffff00;
  FUN_00438030((int)this);
  _seh_state = 0xffffffff;
  FUN_0043734a();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0043734a @ 0x0043734a */

void FUN_0043734a(void) { return; }


/* FUN_00437360 @ 0x00437360 */

void __fastcall FUN_00437360(void *param_1)
{
    /* STUB: 151 lines not yet reconstructed */
    return;
}


/* FUN_004377ab @ 0x004377ab */

void FUN_004377ab(void) { return; }


/* FUN_004377c0 @ 0x004377c0 */

void __fastcall FUN_004377c0(int param_1)
{
    /* STUB: 66 lines not yet reconstructed */
    return;
}


/* FUN_00437963 @ 0x00437963 */

void FUN_00437963(void) { return; }


/* FUN_00437975 @ 0x00437975 */

void FUN_00437975(void) { return; }


/* FUN_00437980 @ 0x00437980 */

void __fastcall FUN_00437980(int param_1)
{
  uint u1;
  void *pv2;
  uint u3;
  int *_fs;
  int v20 [3];
  void *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00437ae5;
  *_fs = &_seh_prev;
  v20[1] = 0;
  v20[0] = 0;
  _seh_state = 0;
  v20[2] = ((TextDisplay *)param_1)->data_count;
  for (u3 = v20[2] * 4; 3 < u3; u3 = u3 - 4) {
    v14 = *(void **)(**(int **)((TextDisplay *)param_1)->pp_data + -4 + u3);
    if ((v14 != NULL) && (((UIElement *)v14)->parent_widget != NULL)) {
      FUN_0041cde0(v14,v20);
      if ((*(int *)(param_1 + 0x19c) != 0) &&
         (pv2 = *(void **)(**(int **)(param_1 + 0x302) + -4 + u3), pv2 != NULL)) {
        FUN_0041d780(pv2,((UIElement *)v14)->parent_widget);
        FUN_0041d2d0(pv2,v20,'\0');
        FUN_0041dad0(pv2,1,'\0');
        FUN_0041da90(pv2,1);
        ((UIWidget *)pv2)->type_or_mode = 0;
        ((UIWidget *)pv2)->anim_flag_0 = 0;
        ((UIWidget *)pv2)->anim_flag_2 = 0;
        ((UIWidget *)pv2)->anim_flag_1 = 1;
        ((UIWidget *)pv2)->anim_flag_3 = 0;
        FUN_00405d30(pv2,0);
      }
      FUN_004535c0(v14);
      FUN_00436100(v14);
      FUN_0041d780(v14,NULL);
      if (u3 != 0) {
        u1 = ((TextDisplay *)param_1)->data_count;
        if ((uint)v20[2] <= u1) {
          if ((uint)v20[2] < u1) {
            pv2 = (void *)(**(int **)((TextDisplay *)param_1)->pp_data + u3);
            memmove((void *)((int)pv2 + -4),pv2,(u1 - v20[2]) * 4);
          }
          ((TextDisplay *)param_1)->data_count = ((TextDisplay *)param_1)->data_count + -1;
        }
      }
    }
    v20[2] = v20[2] - 1;
  }
  _seh_state = 0xffffffff;
  FUN_00437aef();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_00437aef @ 0x00437aef */

void FUN_00437aef(void) { return; }


/* FUN_00437b00 @ 0x00437b00 */

void __fastcall FUN_00437b00(int param_1)
{
  FUN_00435ab0(*(void **)(param_1 + 0x1b0),(int)DAT_00480154);
}


/* FUN_00437b20 @ 0x00437b20 */

void __fastcall FUN_00437b20(int param_1)
{
  FUN_00435a90(*(int *)(param_1 + 0x1b0));
}


/* FUN_00437b30 @ 0x00437b30 */

void __fastcall FUN_00437b30(int param_1)
{
  int *pn1;
  uint u2;
  int *pu3;
  void *this;
  short s4;
  
  while (u2 = ((TextDisplay *)param_1)->data_count, u2 != 0) {
    pu3 = (int *)**(int **)((TextDisplay *)param_1)->pp_data;
    this = (void *)*pu3;
    if (u2 != 0) {
      if (1 < u2) {
        memmove(pu3,pu3 + 1,u2 * 4 - 4);
      }
      ((TextDisplay *)param_1)->data_count = ((TextDisplay *)param_1)->data_count + -1;
    }
    FUN_004535c0(this);
    FUN_0041d780(this,NULL);
    FUN_004564c0();
  }
  s4 = 0;
  do {
    pn1 = (int *)(param_1 + 0x5e4 + s4 * 4);
    pu3 = (int *)*pn1;
    if (pu3 != NULL) {
      ((void (*)(void))((void **)*pu3)[0])(); /* pu3->vtable[0] */
      *pn1 = 0;
      FUN_004564c0();
    }
    s4 = s4 + 1;
  } while (s4 < 6);
}


/* FUN_00437bc0 @ 0x00437bc0 */

void __fastcall FUN_00437bc0(void *param_1)
{
    /* STUB: 83 lines not yet reconstructed */
    return;
}


/* FUN_00437e2d @ 0x00437e2d */

void FUN_00437e2d(void) { return; }


/* FUN_00437e40 @ 0x00437e40 */

void __fastcall FUN_00437e40(void *param_1)
{
    /* STUB: 60 lines not yet reconstructed */
    return;
}


/* FUN_00438020 @ 0x00438020 */

void FUN_00438020(void) { return; }


/* FUN_00438030 @ 0x00438030 */

void __fastcall FUN_00438030(int param_1)
{
  void *pv1;
  int *_fs;
  int u2;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_00438132;
  _seh_state = 0;
  *_fs = &_seh_prev;
  if (*(void **)(param_1 + 0x19c) != NULL) {
    if ((*(char *)(DAT_004896b0 + 0x2d) == '\0') || (*(int *)(param_1 + 0xd0) == 0)) {
      u2 = 1;
    }
    else {
      u2 = 3;
    }
    FUN_004092c0(*(void **)(param_1 + 0x19c),u2,1);
    FUN_0041d2d0(*(void **)(param_1 + 0x19c),(int *)&_tmp_0,'\0');
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
  _seh_state = 0xffffffff;
  FUN_0043813c();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0043813c @ 0x0043813c */

void FUN_0043813c(void) { return; }


/* FUN_00438150 @ 0x00438150 */

void __fastcall FUN_00438150(int param_1)
{
  void *this;
  SHORT sz1;
  DWORD dw2;
  int *_fs;
  char *pu3;
  int n4;
  char c5;
  int v1c [2];
  char *v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_00438262;
  *_fs = &_seh_prev;
  v1c[1] = 0;
  v1c[0] = 0;
  _seh_state = 0;
  this = *(void **)&((UIWidget *)DAT_004897c0)->field_44;
  if (this != NULL) {
    FUN_0041cde0(this,v1c);
    n4 = 0x4381b8;
    sz1 = GetAsyncKeyState(0x25);
    if (sz1 < 0) {
      if ((int)(short)((uint)v1c[1] >> 8) - (int)*(short *)(param_1 + 0x32c) <=
          (int)*(short *)(param_1 + 0x330)) goto L_00438187;
      dw2 = GetTickCount();
      c5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = dw2;
      v14 = (char *)-(int)DAT_00488d2c;
      FUN_00401050(&_tmp_34,0);
      pu3 = v14;
    }
    else {
      n4 = 0x4381c1;
      sz1 = GetAsyncKeyState(0x27);
      if ((-1 < sz1) ||
         ((int)*(short *)(param_1 + 0x332) <=
          (int)*(short *)(param_1 + 0x32e) + (int)(short)((uint)v1c[1] >> 8)))
      goto L_00438187;
      dw2 = GetTickCount();
      c5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = dw2;
      v14 = &_tmp_34;
      FUN_00401050(&_tmp_34,0);
      pu3 = DAT_00488d2c;
    }
    FUN_0041d3a0(this,pu3,n4,c5);
  }
L_00438187:
  _seh_state = 0xffffffff;
  FUN_0043826c();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0043826c @ 0x0043826c */

void FUN_0043826c(void) { return; }


/* FUN_00438280 @ 0x00438280 */

void __fastcall FUN_00438280(void *param_1)
{
  char c1;
  uint u2;
  uint u3;
  char *pc4;
  char *pc5;
  int *_fs;
  char v48 [40];
  char *v20;
  char *v1c;
  int v18;
  int v14;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0043839a;
  *_fs = &_seh_prev;
  v14 = 0;
  v18 = 0;
  _seh_state = 0;
  FUN_0041ce10(param_1,&v18,2);
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
  pc5 = v48;
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
  _itoa((int)((GameSession *)DAT_0048345c)->score_display - (int)DAT_00488d50,v48,10);
  pc4 = v48;
  FUN_00458860(*(void **)((int)param_1 + 0x2d8),pc4); /* TODO: unknown struct, offset 0x2d8 */
  v20 = &_tmp_25;
  FUN_00401ba0(&_tmp_25,
               *(short *)(&DAT_0048026c + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&v14,(int)pc4);
  v1c = &_tmp_25;
  FUN_00401ba0(&_tmp_25,
               *(short *)(&DAT_0048026e + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&v18,(int)pc4);
  FUN_0041d020(*(void **)((int)param_1 + 0x2d8),v14,v18,2); /* TODO: unknown struct, offset 0x2d8 */
  FUN_0041dd40(*(void **)((int)param_1 + 0x2d8)); /* TODO: unknown struct, offset 0x2d8 */
  _seh_state = 0xffffffff;
  FUN_004383a4();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_004383a4 @ 0x004383a4 */

void FUN_004383a4(void) { return; }


/* FUN_004383b0 @ 0x004383b0 */

void __fastcall FUN_004383b0(void *param_1)
{
  int n1;
  uint u2;
  void *pv3;
  int n4;
  uint u5;
  int n6;
  void *this;
  
  this = NULL;
  if (*(int *)((int)param_1 + 0x5ca) == 4) { /* TODO: unknown struct, offset 0x5ca (possibly TextDisplay.data_count-related) */
    n1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[1];
    if (((n1 != 0) && (((UIElement *)n1)->child_list_1 != 0)) &&
       (u2 = ((CVector *)((UIElement *)n1)->child_list_1)->count, u2 != 0)) {
      u5 = 1;
      pv3 = *(void **)&((UIWidget *)DAT_004897c0)->field_44;
      if (u2 != 0) {
        n6 = 4;
        do {
          this = (void *)FUN_0041c0f0(*(int *)(**(int **)((CVector *)((UIElement *)n1)->child_list_1)->data + -4 + n6))
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
    if (this != NULL) {
      FUN_0041c2a0(this,0);
    }
    FUN_0042db60(0,*(ushort **)((int)param_1 + 0x314),-1,-1); /* TODO: unknown struct, offset 0x314 */
    FUN_00437bc0(param_1);
  }
  return;
}


/* FUN_00438df0 @ 0x00438df0 */

int * __fastcall FUN_00438df0(int *param_1)
{
    /* STUB: 6 lines not yet reconstructed */
    return 0;
}


/* FUN_004392c5 @ 0x004392c5 */

void FUN_004392c5(void) { return; }


/* FUN_004392cd @ 0x004392cd */

void FUN_004392cd(void) { return; }


/* FUN_004392d5 @ 0x004392d5 */

void FUN_004392d5(void) { return; }


/* FUN_004392ef @ 0x004392ef */

void FUN_004392ef(void)
{
  int _ebp;
  
  FUN_004113d0((int *)(_ebp + -0x40));
}


/* FUN_00439bad @ 0x00439bad */

void FUN_00439bad(void) { return; }


/* FUN_00439bb5 @ 0x00439bb5 */

void FUN_00439bb5(void) { return; }


/* FUN_00439bc7 @ 0x00439bc7 */

void FUN_00439bc7(void) { return; }


/* FUN_00439ff0 @ 0x00439ff0 */

void __fastcall FUN_00439ff0(int param_1)
{
  int n1;
  int n2;
  
  if (((*(int *)(param_1 + 0x1a0) != 0) && (DAT_004897c0 != 0)) &&
     (n1 = *(void **)&((UIWidget *)DAT_004897c0)->field_44, n1 != 0)) {
    n2 = FUN_0041c0f0(*(int *)(param_1 + 0x1a0));
    if (n2 == n1) {
      FUN_0041bd00(*(void **)&((UIWidget *)DAT_004897c0)->field_44,*(int *)(param_1 + 0x1a0));
    }
  }
  return;
}


/* FUN_0043a040 @ 0x0043a040 */

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


/* FUN_0043a080 @ 0x0043a080 */

void __fastcall FUN_0043a080(int *param_1)
{
  *param_1 = &PTR_LAB_004748fc;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_0043a0b0 @ 0x0043a0b0 */

void __fastcall FUN_0043a0b0(int *param_1)
{
  *param_1 = &PTR_LAB_004748f8;
  if ((uint *)param_1[1] != NULL) {
    FUN_0046d110((uint *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
}


/* FUN_0043a170 @ 0x0043a170 */

void FUN_0043a170(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d60,u1,_arg5);
}


/* FUN_0043a1c0 @ 0x0043a1c0 */

void FUN_0043a1c0(void) { return; }


/* FUN_0043a1e0 @ 0x0043a1e0 */

/* NOTE: overlapping globals */

void FUN_0043a1e0(void)
{
  _DAT_00488d6e = 0;
  _DAT_00488d6c = 0;
}


/* FUN_0043a1f0 @ 0x0043a1f0 */

void FUN_0043a1f0(void)
{
  _atexit(FUN_0043a200);
}


/* FUN_0043a200 @ 0x0043a200 */

void FUN_0043a200(void) { return; }


/* FUN_0043a220 @ 0x0043a220 */

/* NOTE: overlapping globals */

void FUN_0043a220(void)
{
  _DAT_00488d6a = 0;
  _DAT_00488d68 = 0;
}


/* FUN_0043a230 @ 0x0043a230 */

void FUN_0043a230(void)
{
  _atexit(FUN_0043a240);
}


/* FUN_0043a240 @ 0x0043a240 */

void FUN_0043a240(void) { return; }


/* FUN_0043a250 @ 0x0043a250 */

int * __thiscall
FUN_0043a250(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
  int n1;
  DWORD dw2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043a2dc;
  *_fs = &_seh_prev;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  *(void ***)this = &PTR_FUN_004749f0;
  _seh_state = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 1;
  n1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 1;
  dw2 = GetTickCount();
  *(DWORD *)(n1 + 4) = dw2;
  *_fs = _seh_prev;
  *(DWORD *)(n1 + 0xc) = dw2;
  return this;
}


/* FUN_0043a2f0 @ 0x0043a2f0 */

int * __thiscall FUN_0043a2f0(void *this,byte param_1)
{
  FUN_0043a310(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0043a310 @ 0x0043a310 */

void __fastcall FUN_0043a310(int *param_1)
{
  int n1;
  DWORD dw2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0043a373;
  *param_1 = &PTR_FUN_004749f0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 0;
  n1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 0;
  dw2 = GetTickCount();
  _seh_state = 0xffffffff;
  *(DWORD *)(n1 + 4) = dw2;
  *(DWORD *)(n1 + 0xc) = dw2;
  FUN_0043a37d();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0043a37d @ 0x0043a37d */

void FUN_0043a37d(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_0043a5c6 @ 0x0043a5c6 */

void FUN_0043a5c6(void) { return; }


/* FUN_0043a5ce @ 0x0043a5ce */

void FUN_0043a5ce(void) { return; }


/* FUN_0043a5d6 @ 0x0043a5d6 */

void FUN_0043a5d6(void) { return; }


/* FUN_0043a5de @ 0x0043a5de */

void FUN_0043a5de(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x450));
}


/* FUN_0043a5e9 @ 0x0043a5e9 */

void FUN_0043a5e9(void)
{
  int _ebp;
  
  FUN_0044e840((int *)(_ebp + -0x44));
}


/* FUN_0043a620 @ 0x0043a620 */

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
}


/* FUN_0043a6b0 @ 0x0043a6b0 */

int __cdecl FUN_0043a6b0(void *param_1,int param_2)
{
  ushort *pu1;
  int v4;
  
  pu1 = FUN_004607d0(param_1,param_2,NULL,NULL,0);
  v4 = 0;
  if (pu1 != NULL) {
    FUN_0043a620(pu1);
    FUN_00433140(pu1,&v4);
    FUN_0046f5f0((uint)pu1);
  }
  return v4;
}


/* FUN_0043a700 @ 0x0043a700 */

void __cdecl FUN_0043a700(int param_1,int param_2,int *param_3)
{
  FUN_00433420(param_3);
  FUN_00433270(&param_3);
}


/* FUN_0043a730 @ 0x0043a730 */

void FUN_0043a730(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d70,u1,_arg5);
}


/* FUN_0043a780 @ 0x0043a780 */

void FUN_0043a780(void) { return; }


/* FUN_0043a7a0 @ 0x0043a7a0 */

/* NOTE: overlapping globals */

void FUN_0043a7a0(void)
{
  _DAT_00488d7e = 0;
  _DAT_00488d7c = 0;
}


/* FUN_0043a7b0 @ 0x0043a7b0 */

void FUN_0043a7b0(void)
{
  _atexit(FUN_0043a7c0);
}


/* FUN_0043a7c0 @ 0x0043a7c0 */

void FUN_0043a7c0(void) { return; }


/* FUN_0043a7e0 @ 0x0043a7e0 */

/* NOTE: overlapping globals */

void FUN_0043a7e0(void)
{
  _DAT_00488d7a = 0;
  _DAT_00488d78 = 0;
}


/* FUN_0043a7f0 @ 0x0043a7f0 */

void FUN_0043a7f0(void)
{
  _atexit(FUN_0043a800);
}


/* FUN_0043a800 @ 0x0043a800 */

void FUN_0043a800(void) { return; }


/* FUN_0043a810 @ 0x0043a810 */

char __cdecl
FUN_0043a810(void *param_1,char param_2,int param_3,int param_4,char param_5,
            char param_6)
{
    /* STUB: 252 lines not yet reconstructed */
    return 0;
}


/* FUN_0043ac48 @ 0x0043ac48 */

void FUN_0043ac48(void) { return; }


/* FUN_0043ac6c @ 0x0043ac6c */

void FUN_0043ac6c(void) { return; }


/* FUN_0043acf9 @ 0x0043acf9 */

void FUN_0043acf9(void) { return; }


/* FUN_0043ad50 @ 0x0043ad50 */

int FUN_0043ad50(void)
{
    /* STUB: 20 lines not yet reconstructed */
    return 0;
}


/* FUN_0043ade0 @ 0x0043ade0 */

void FUN_0043ade0(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d80,u1,_arg5);
}


/* FUN_0043ae30 @ 0x0043ae30 */

void FUN_0043ae30(void) { return; }


/* FUN_0043ae50 @ 0x0043ae50 */

/* NOTE: overlapping globals */

void FUN_0043ae50(void)
{
  _DAT_00488d8e = 0;
  _DAT_00488d8c = 0;
}


/* FUN_0043ae60 @ 0x0043ae60 */

void FUN_0043ae60(void)
{
  _atexit(FUN_0043ae70);
}


/* FUN_0043ae70 @ 0x0043ae70 */

void FUN_0043ae70(void) { return; }


/* FUN_0043ae90 @ 0x0043ae90 */

/* NOTE: overlapping globals */

void FUN_0043ae90(void)
{
  _DAT_00488d8a = 0;
  _DAT_00488d88 = 0;
}


/* FUN_0043aea0 @ 0x0043aea0 */

void FUN_0043aea0(void)
{
  _atexit(FUN_0043aeb0);
}


/* FUN_0043aeb0 @ 0x0043aeb0 */

void FUN_0043aeb0(void) { return; }


/* FUN_0043aed0 @ 0x0043aed0 */

void FUN_0043aed0(void)
{
  int u1;
  int _arg5;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00488d90,u1,_arg5);
}


/* FUN_0043af10 @ 0x0043af10 */

void FUN_0043af10(void)
{
  _atexit(FUN_0043af20);
}


/* FUN_0043af20 @ 0x0043af20 */

void FUN_0043af20(void) { return; }


/* FUN_0043af40 @ 0x0043af40 */

/* NOTE: overlapping globals */

void FUN_0043af40(void)
{
  _DAT_00488d9e = 0;
  _DAT_00488d9c = 0;
}


/* FUN_0043af50 @ 0x0043af50 */

void FUN_0043af50(void)
{
  _atexit(FUN_0043af60);
}


/* FUN_0043af60 @ 0x0043af60 */

void FUN_0043af60(void) { return; }


/* FUN_0043af80 @ 0x0043af80 */

/* NOTE: overlapping globals */

void FUN_0043af80(void)
{
  _DAT_00488d9a = 0;
  _DAT_00488d98 = 0;
}


/* FUN_0043af90 @ 0x0043af90 */

void FUN_0043af90(void)
{
  _atexit(FUN_0043afa0);
}


/* FUN_0043afa0 @ 0x0043afa0 */

void FUN_0043afa0(void) { return; }


/* FUN_0043afb0 @ 0x0043afb0 */

int * __fastcall FUN_0043afb0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0043b002;
  *_fs = &_seh_prev;
  FUN_004052b0(param_1);
  _seh_state = 0;
  *param_1 = &PTR_FUN_00474ab0;
  FUN_0043b090(param_1);
  *_fs = _seh_prev;
  return param_1;
}


