/*
 * game_ui.c - UI and menus
 * Address range: 0x430000 - 0x43AFFF
 * Functions: 366
 *
 * Auto-generated from Ghidra decompilation of MMath.exe
 */

#include "ghidra_types.h"
#include "ghidra_funcs.h"
#include "ghidra_globals.h"
#include "game_structs.h"

/* Function: FUN_00430020 @ 0x00430020 */

void __thiscall FUN_00430020(GameScreen *this,LPCSTR param_1,short param_2,short param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;

  FUN_00430680();
  if (param_4 == 0) {
    iVar2 = -1;
    pCVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pCVar3;
      pCVar3 = pCVar3 + 1;
    } while (cVar1 != '\0');
    param_4 = ~(ushort)iVar2 - 1;
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
  ushort uVar1;
  uint uVar2;
  int iVar3;
  HGDIOBJ pvVar4;
  HFONT h;
  BOOL BVar5;
  char local_40 [64];

  uVar2 = this->font_style;
  iVar3 = GetDeviceCaps((HDC)this->hdc_active,0x5a);
  uVar1 = this->font_size;
  pvVar4 = GetStockObject(0xd);
  pvVar4 = SelectObject((HDC)this->hdc_active,pvVar4);
  FUN_00456410((uint)this->font_id,local_40);
  h = CreateFontA(-(int)(short)((int)((uint)uVar1 * iVar3) / 0x48),0,0,0,
                  (int)(short)((-(ushort)((uVar2 & 1) == 0) & 0xfed4) + 700),
                  this->font_style & 2,this->font_style & 4,0,0,0,0,0,0,local_40);
  if (h != (HFONT)0x0) {
    SelectObject((HDC)this->hdc_active,h);
    BVar5 = DeleteObject(pvVar4);
    return CONCAT31((unsigned int)((uint)BVar5 >> 8),1);
  }
  pvVar4 = SelectObject((HDC)this->hdc_active,pvVar4);
  return (uint)pvVar4 & 0xffffff00;
}



/* Function: FUN_00430190 @ 0x00430190 */

int __thiscall FUN_00430190(GameScreen *this,short param_1)

{
  int in_EAX;
  int uVar1;

  if (this->font_id != param_1) {
    this->font_id = param_1;
    uVar1 = FUN_004300b0(this);
    return uVar1;
  }
  return CONCAT31((unsigned int)(CONCAT22((short)((uint)in_EAX >> 0x10),param_1) >> 8),1);
}



/* Function: FUN_004301b0 @ 0x004301b0 */

void __thiscall FUN_004301b0(GameScreen *this,int param_1)

{
  int iVar1;

  iVar1 = FUN_004563d0(param_1);
  FUN_00430190(this,(short)iVar1);
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_004875f0,uVar1,in_stack_fffffff4);
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
    /* TODO: 27 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00430300 @ 0x00430300 */

short __thiscall FUN_00430300(void *this,LPCSTR param_1)

{
  short uVar1;
  void *puVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00430362;
  *unaff_FS_OFFSET = &local_10;
  puVar2 = FUN_00430260(this,param_1);
  local_8 = 0xffffffff;
  uVar1 = *(short *)(puVar2 + 2);
  FUN_0043036c();
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}



/* Function: FUN_0043036c @ 0x0043036c */

void FUN_0043036c(void)

{
  return;
}



/* Function: FUN_00430380 @ 0x00430380 */

void __thiscall FUN_00430380(void *this,short *param_1)

{
    /* TODO: 17 lines - has decompilation artifacts */
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043053f;
  local_8 = 0;
  *unaff_FS_OFFSET = &local_10;
  FUN_00430590(this,((unsigned short)((param_1) >> 16)),(short)param_1);
  local_8 = 0xffffffff;
  FUN_00430537();
  *unaff_FS_OFFSET = local_10;
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
  HGDIOBJ pvVar1;

  FUN_00430680();
  pvVar1 = GetStockObject(5);
  pvVar1 = SelectObject((HDC)this->hdc_active,pvVar1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pvVar1);
  return;
}



/* Function: FUN_00430620 @ 0x00430620 */

void __thiscall FUN_00430620(GameScreen *this,short *param_1)

{
  HGDIOBJ pvVar1;

  FUN_00430680();
  pvVar1 = GetStockObject(8);
  pvVar1 = SelectObject((HDC)this->hdc_active,pvVar1);
  Rectangle((HDC)this->hdc_active,(int)param_1[1],(int)*param_1,(int)param_1[3],
            (int)param_1[2]);
  SelectObject((HDC)this->hdc_active,pvVar1);
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
    /* TODO: 30 lines - has decompilation artifacts */
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
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;

  if (((param_1 == (UIElement *)0x0) || ((param_1->flags >> 6 & 1) == 0)) ||
     (sVar2 = 0, DAT_004800c0 < 1)) {
    return;
  }
  do {
    iVar1 = (int)sVar2;
    sVar3 = (&DAT_00487460)[iVar1 * 4];
    if ((short)(&DAT_00487460)[iVar1 * 4] <= param_1->rect_top) {
      sVar3 = param_1->rect_top;
    }
    sVar4 = (&DAT_00487464)[iVar1 * 4];
    if (param_1->rect_bottom <= (short)(&DAT_00487464)[iVar1 * 4]) {
      sVar4 = param_1->rect_bottom;
    }
    if (sVar3 <= sVar4) {
      sVar3 = (&DAT_00487466)[iVar1 * 4];
      if (param_1->rect_right <= (short)(&DAT_00487466)[iVar1 * 4]) {
        sVar3 = param_1->rect_right;
      }
      sVar4 = (&DAT_00487462)[iVar1 * 4];
      if ((short)(&DAT_00487462)[iVar1 * 4] <= param_1->rect_left) {
        sVar4 = param_1->rect_left;
      }
      if (sVar4 <= sVar3) {
        ((void (*)(void))param_1->vtable[0x14 / 4])(); /* vtable[5] */
        if (param_1->child_list_1 == 0) {
          return;
        }
        iVar1 = *(int *)((int)param_1->child_list_1 + 0xe);
        if (iVar1 == 0) {
          return;
        }
        uVar5 = iVar1 * 4;
        do {
          uVar5 = uVar5 - 4;
          FUN_00430770(*(UIElement **)(**(int **)((int)param_1->child_list_1 + 4) + uVar5));
        } while (3 < uVar5);
        return;
      }
    }
    sVar2 = sVar2 + 1;
    if (DAT_004800c0 <= sVar2) {
      return;
    }
  } while( true );
}



/* Function: FUN_00430860 @ 0x00430860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430860(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  HRGN pHVar6;
  short sVar7;
  int *unaff_FS_OFFSET;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00430a96;
  *unaff_FS_OFFSET = &local_10;
  FUN_00430680();
  if (DAT_004800c0 != 0) {
    sVar7 = 1;
    local_18 = _DAT_00487460;
    local_8 = 0;
    local_14 = _DAT_00487464;
    if (1 < DAT_004800c0) {
      do {
        iVar5 = (int)sVar7;
        sVar1 = (&DAT_00487462)[iVar5 * 4];
        uVar2 = (&DAT_00487466)[iVar5 * 4];
        if (sVar1 < (short)uVar2) {
          sVar3 = (&DAT_00487464)[iVar5 * 4];
          sVar4 = (&DAT_00487460)[iVar5 * 4];
          if (sVar4 < sVar3) {
            if (((unsigned short)((local_18) >> 16)) < ((unsigned short)((local_14) >> 16))) {
              if ((short)local_14 <= (short)local_18) goto LAB_00430923;
              if (sVar1 < ((unsigned short)((local_18) >> 16))) {
                local_18 = CONCAT22(sVar1,(short)local_18);
              }
              if (((unsigned short)((local_14) >> 16)) < (short)uVar2) {
                local_14 = CONCAT22(uVar2,(short)local_14);
              }
              if (sVar4 < (short)local_18) {
                local_18 = CONCAT22(((unsigned short)((local_18) >> 16)),sVar4);
              }
              if (sVar3 <= (short)local_14) goto LAB_00430933;
            }
            else {
LAB_00430923:
              local_18 = CONCAT22(sVar1,sVar4);
              local_14 = (uint)uVar2 << 0x10;
            }
            local_14 = CONCAT22(((unsigned short)((local_14) >> 16)),sVar3);
          }
        }
LAB_00430933:
        sVar7 = sVar7 + 1;
      } while (sVar7 < DAT_004800c0);
    }
    FUN_0042f820((int)local_1c);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)((unsigned short)((local_18) >> 16)),(int)(short)local_18,(int)((unsigned short)((local_14) >> 16)),
               (int)(short)local_14);
    SelectClipRgn((HDC)((GameScreen *)local_1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (*(int **)((int)local_1c + 0x1a) != (int *)0x0) { /* TODO: unknown offset 0x1a on GameScreen */
      FUN_00430770(*(UIElement **)((int)local_1c + 0x1a));
    }
    sVar7 = 0;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_0042f830((int)local_1c);
    local_8 = CONCAT31((((local_8) >> 8) & 0xFFFFFF),2);
    local_22 = 0;
    local_24 = 0;
    local_1e = 0;
    local_20 = 0;
    FUN_00430c70(local_1c,&local_24);
    FUN_00430680();
    pHVar6 = CreateRectRgn(0,0,0,0);
    SetRectRgn(pHVar6,(int)local_22,(int)local_24,(int)local_1e,(int)local_20);
    SelectClipRgn((HDC)((GameScreen *)local_1c)->hdc_active,pHVar6);
    DeleteObject(pHVar6);
    if (0 < DAT_004800c0) {
      do {
        iVar5 = (int)sVar7;
        sVar7 = sVar7 + 1;
        FUN_0042f800(local_1c,&DAT_00487460 + iVar5 * 4);
      } while (sVar7 < DAT_004800c0);
    }
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    FUN_00430a86();
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    FUN_00430a8e();
    local_8 = 0xffffffff;
    DAT_004800c0 = 0;
    FUN_00430aa0();
  }
  *unaff_FS_OFFSET = local_10;
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
  int *piVar1;

  piVar1 = *(int **)((intptr_t)this + 0x12); /* TODO: offset 0x12 used as pointer, possibly different struct */
  if (param_1 != piVar1) {
    if (piVar1 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar1))[0x50 / 4])(); /* piVar1->vtable[20] */
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
    /* TODO: 23 lines - has decompilation artifacts */
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
    /* TODO: 17 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00430c70 @ 0x00430c70 */

void __thiscall FUN_00430c70(void *this,short *param_1)

{
    /* TODO: 9 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00430cb0 @ 0x00430cb0 */

void __thiscall FUN_00430cb0(void *this,short *param_1)

{
  int *unaff_FS_OFFSET;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00430d1e;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_16 = 0;
  local_18 = 0;
  local_12 = 0;
  local_14 = 0;
  FUN_00430c70(this,&local_18);
  local_8 = 0xffffffff;
  param_1[1] = local_12 - local_16;
  *param_1 = local_14 - local_18;
  FUN_00430d28();
  *unaff_FS_OFFSET = local_10;
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
  int iVar1;
  short sVar2;
  int *unaff_FS_OFFSET;
  int iVar3;
  int iVar4;
  int in_stack_ffffffc0;
  char cVar5;
  char cVar6;
  short local_1c;
  short sStack_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_00430f33;
  *unaff_FS_OFFSET = &local_10;
  sVar2 = 0;
  FUN_0042f7d0(param_1);
  if (((UIElement *)param_1)->child_list_1 != 0) {
    sStack_1a = 0;
    local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
    local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
    local_1c = 0;
    local_16 = 0;
    local_18 = 0;
    local_12 = 0;
    local_14 = 0;
    FUN_00430cb0(param_1,&local_1c);
    cVar6 = '\0';
    iVar1 = CONCAT22(sStack_1a,local_1c);
    cVar5 = '\0';
    FUN_00401ba0(&ghidra_stack_ffffffc0,local_1c);
    iVar4 = CONCAT22(local_18,sStack_1a);
    FUN_00401ba0(&ghidra_stack_ffffffbc,sStack_1a);
    iVar3 = 0;
    FUN_00401050(&ghidra_stack_ffffffb8,0);
    FUN_00401050(&ghidra_stack_ffffffb4,0);
    FUN_0041cca0(((UIElement *)param_1)->child_list_1,iVar3,iVar4,iVar1,in_stack_ffffffc0,cVar5,cVar6);
    if (0 < DAT_004800c0) {
      do {
        iVar1 = (int)sVar2;
        if (((short)(&DAT_00487462)[iVar1 * 4] < (short)(&DAT_00487466)[iVar1 * 4]) &&
           ((short)(&DAT_00487460)[iVar1 * 4] < (short)(&DAT_00487464)[iVar1 * 4])) {
          if ((local_16 < local_12) && (local_18 < local_14)) {
            if ((short)(&DAT_00487462)[iVar1 * 4] < local_16) {
              (&DAT_00487462)[iVar1 * 4] = local_16;
            }
            if (local_12 < (short)(&DAT_00487466)[iVar1 * 4]) {
              (&DAT_00487466)[iVar1 * 4] = local_12;
            }
            if ((short)(&DAT_00487460)[iVar1 * 4] < local_18) {
              (&DAT_00487460)[iVar1 * 4] = local_18;
            }
            if (local_14 < (short)(&DAT_00487464)[iVar1 * 4]) {
              (&DAT_00487464)[iVar1 * 4] = local_14;
            }
            if (((short)(&DAT_00487466)[iVar1 * 4] <= (short)(&DAT_00487462)[iVar1 * 4]) ||
               ((short)(&DAT_00487464)[iVar1 * 4] <= (short)(&DAT_00487460)[iVar1 * 4])) {
              (&DAT_00487462)[iVar1 * 4] = 0;
              (&DAT_00487460)[iVar1 * 4] = 0;
              (&DAT_00487466)[iVar1 * 4] = 0;
              (&DAT_00487464)[iVar1 * 4] = 0;
            }
          }
          else {
            (&DAT_00487462)[iVar1 * 4] = local_16;
            (&DAT_00487460)[iVar1 * 4] = local_18;
            (&DAT_00487466)[iVar1 * 4] = local_12;
            (&DAT_00487464)[iVar1 * 4] = local_14;
          }
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < DAT_004800c0);
    }
    local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
    FUN_00430f2b();
    local_8 = 0xffffffff;
    FUN_00430f3d();
  }
  *unaff_FS_OFFSET = local_10;
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
  short *psVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(DAT_004896b0 + 0x27) != '\0') {
    if ((DAT_004897c0 != 0) && (*(int **)(DAT_004897c0 + 0x52) != (int *)0x0)) {
      ((void (*)(void))((void **)(**(int **)(DAT_004897c0 + 0x52)))[0xc0 / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[48] */
    }
    FUN_004564f0(DAT_004896b0);
    return;
  }
  this->field_04 = this->field_04 + 1;
  if (((this->type_or_mode != 0) &&
      (iVar2 = *(int *)(this->type_or_mode + 0xe), iVar2 != 0)) && (uVar3 = 1, iVar2 != 0))
  {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 + 1;
      ((void (*)(void))((void **)(**(int **)(**(int **)(this->type_or_mode + 4) + -8 + iVar2)))[0x1c / 4])(); /* child obj->vtable[7] */
    } while (uVar3 <= *(uint *)(this->type_or_mode + 0xe));
  }
  if ((DAT_004800c0 != 0) && (param_1 != '\0')) {
    FUN_00430860();
  }
  psVar1 = (short *)&this->field_04;
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    FUN_0045ecd0();
  }
  return;
}



/* Function: FUN_00431000 @ 0x00431000 */

void __thiscall FUN_00431000(void *this,int param_1)

{
    /* TODO: 73 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00431100 @ 0x00431100 */

void __thiscall FUN_00431100(UIElement *this,int param_1)

{
  uint *puVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;

  uVar5 = 0;
  iVar2 = this->type_or_mode;
  puVar1 = (uint *)(iVar2 + 0xe);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    piVar4 = (int *)**(int **)(iVar2 + 4);
    do {
      if (*piVar4 == param_1) {
        uVar5 = uVar5 + 1;
        goto LAB_00431128;
      }
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  uVar5 = 0;
LAB_00431128:
  if ((uVar5 != 0) && (uVar5 <= uVar3)) {
    if (uVar5 < uVar3) {
      _Src = (void *)(**(int **)(iVar2 + 4) + uVar5 * 4);
      memmove((void *)((int)_Src + -4),_Src,(uVar3 - uVar5) * 4);
    }
    *puVar1 = *puVar1 - 1;
  }
  return;
}



/* Function: FUN_00431160 @ 0x00431160 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00431160(void *this,char param_1)

{
  int iVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  
  FUN_00403230();
  uVar4 = *(int *)(DAT_004896b0 + 4) + _DAT_00489098;
  DVar3 = GetTickCount();
  iVar1 = DAT_004896b0;
  if ((uVar4 < DVar3) || (param_1 != '\0')) {
    DVar3 = GetTickCount();
    *(DWORD *)(iVar1 + 4) = DVar3;
    bVar2 = FUN_00456580(DAT_004896b0);
    iVar1 = DAT_004896b0;
    if ((!bVar2) && (param_1 == '\0')) {
      FUN_00430f50(this,'\0');
      return;
    }
    DVar3 = GetTickCount();
    *(DWORD *)(iVar1 + 8) = DVar3;
    FUN_00430f50(this,'\x01');
  }
  return;
}



/* Function: FUN_004311e0 @ 0x004311e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004311e0(void *param_1)

{
  int *piVar1;
  short *puVar2;
  int *piVar3;
  short *psVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_10;
  void *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0043143d;
  *unaff_FS_OFFSET = &local_10;
  FUN_00431160(param_1,'\0');
  puVar2 = (short *)FUN_00408850(DAT_004896b0);
  FUN_00408830(&ghidra_stack_ffffffdc,puVar2);
  local_8 = 0xffffffff;
  piVar3 = (int *)FUN_00430b40((int)param_1);
  piVar1 = *(int **)(DAT_004896b0 + 0x40);
  _DAT_004838c8 = piVar3;
  if (piVar3 == piVar1) {
    if (((piVar3 != (int *)0x0) && (*(short *)(DAT_004896b0 + 0x30) == 0)) &&
       ((((UIElement *)piVar3)->flags >> 5 & 1) != 0)) {
      ((void (*)(void))((void **)(*piVar3))[0x20 / 4])(); /* piVar3->vtable[8] */
    }
  }
  else {
    if (piVar1 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar1))[0x28 / 4])(); /* piVar1->vtable[10] */
    }
    if (piVar3 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar3))[0x24 / 4])(); /* piVar3->vtable[9] */
    }
    *(int **)(DAT_004896b0 + 0x40) = piVar3;
  }
  psVar4 = (short *)(DAT_004896b0 + 0x30);
  if (*psVar4 == 1) {
    DAT_004838d8 = piVar3;
  }
  if ((*psVar4 == 0x42) && (DAT_004838d4 != piVar3)) {
    *psVar4 = 0x41;
  }
  piVar1 = piVar3;
  if ((*(short *)(DAT_004896b0 + 0x30) == 0x41) && (DAT_004838d8 != piVar3)) {
    *(short *)(DAT_004896b0 + 0x30) = 2;
    piVar1 = DAT_004838d4;
  }
  DAT_004838d4 = piVar1;
  iVar7 = DAT_004896b0;
  iVar6 = (int)*(short *)(DAT_004896b0 + 0x30);
  switch(iVar6) {
  case 1:
    DVar5 = GetTickCount();
    *(DWORD *)(iVar7 + 0xc) = DVar5;
    if (piVar3 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar3))[0x2c / 4])(); /* piVar3->vtable[11] */
    }
    iVar7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 2:
    if (piVar3 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar3))[0x30 / 4])(); /* piVar3->vtable[12] */
    }
    iVar7 = DAT_004896b0;
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
    iVar7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 6:
  case 8:
  case 0x45:
    if (iVar6 == 6) {
      if (param_1 != (void *)0x0) {
        FUN_00430690(param_1);
      }
    }
    else if (iVar6 == 8) {
      if (param_1 != (void *)0x0) {
        FUN_00430af0((int)param_1);
      }
    }
    else if ((iVar6 == 0x45) && (param_1 != (void *)0x0)) {
      FUN_00430b20((int)param_1);
    }
  default:
    goto switchD_004312ee_caseD_7;
  case 9:
    if (*(int **)((int)param_1 + 0x12) != (int *)0x0) { /* TODO: offset 0x12 used as pointer */
      ((void (*)(void))((void **)(**(int **)((int)param_1 + 0x12)))[0x3c / 4])(); /* obj at param_1+0x12->vtable[15] */ /* TODO: offset 0x12 used as pointer */
    }
    iVar7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x41:
    if (piVar3 != (int *)0x0) {
      ((void (*)(void))((void **)(*piVar3))[0x34 / 4])();
    }
    iVar7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x42:
    if (piVar3 != (int *)0x0) {
      if ((((UIElement *)piVar3)->flags >> 0xc & 1) == 0) {
        ((void (*)(void))((void **)(*piVar3))[0x34 / 4])();
      }
      else {
        ((void (*)(void))((void **)(*piVar3))[0x38 / 4])(); /* piVar3->vtable[14] */
      }
    }
    iVar7 = DAT_004896b0;
    DVar5 = GetTickCount();
    break;
  case 0x46:
    FUN_00430d30(param_1);
    goto switchD_004312ee_caseD_7;
  case 0x47:
    FUN_0045be00(DAT_00489ac8);
    goto switchD_004312ee_caseD_7;
  }
  *(DWORD *)(iVar7 + 0xc) = DVar5;
switchD_004312ee_caseD_7:
  *unaff_FS_OFFSET = local_10;
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00487f88,uVar1,in_stack_fffffff4);
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
  int *this_00;
  int *unaff_FS_OFFSET;
  int iVar2;
  char cVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00431774;
  *unaff_FS_OFFSET = &local_10;
  local_14 = this;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  this_00 = (int *)((DialogWidget *)local_14)->dialog_data;
  FUN_00458040(this_00);
  local_20 = 0;
  local_24 = 0;
  *local_14 = &PTR_FUN_00474290;
  local_28 = 0;
  local_2c = 0;
  local_8 = CONCAT31((unsigned int)((uint)local_8 >> 8),3);
  FUN_0041cdc0(local_14,&local_2c);
  FUN_0041ce10(local_14,&local_24,0);
  FUN_00458e50(this_00,0x10003);
  iVar2 = 0x431685;
  FUN_0041d780(this_00,(void *)local_14[3]);
  cVar3 = '\0';
  local_18 = local_28 + -0x4600;
  local_1c = &ghidra_stack_ffffffc4;
  FUN_00401050(&ghidra_stack_ffffffc4,0x14);
  FUN_00458ca0(this_00,local_18,iVar2,cVar3);
  local_1c = (char *)(local_24 + 0x3700);
  FUN_0041d020(this_00,local_20 + 0x2300,(int)local_1c,0);
  FUN_0041dd40(this_00);
  FUN_00458de0(this_00,'\b');
  FUN_00458dd0(this_00,1);
  ((void (*)(void))((void **)(*this_00))[0x90 / 4])(); /* this_00->vtable[36] */
  ((UIWidget *)local_14)->field_109 = 1;
  FUN_00431860((int)local_14);
  iVar2 = DAT_004896b0;
  if (*(char *)(DAT_004896b0 + 0x28) == '\0') {
    *(char *)(DAT_004896b0 + 0x28) = '\x01';
    DVar1 = GetTickCount();
    *(DWORD *)(iVar2 + 4) = DVar1;
    *(DWORD *)(iVar2 + 0xc) = DVar1;
  }
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  *(char *)(DAT_004896b0 + 0x2a) = 1;
  FUN_00431756();
  local_8 = CONCAT31((((local_8) >> 8) & 0xFFFFFF),1);
  FUN_0043175e();
  *unaff_FS_OFFSET = local_10;
  return local_14;
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
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00431840;
  *param_1 = &PTR_FUN_00474290;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = DAT_004896b0;
  local_8 = 1;
  if ((*(char *)(DAT_004896b0 + 0x28) != '\0') && (*(char *)(DAT_004896b0 + 0x29) == '\0')) {
    *(char *)(DAT_004896b0 + 0x28) = '\0';
    DVar2 = GetTickCount();
    *(DWORD *)(iVar1 + 4) = DVar2;
    *(DWORD *)(iVar1 + 0xc) = DVar2;
  }
  local_8 = local_8 & 0xffffff00;
  *(char *)(DAT_004896b0 + 0x2a) = 0;
  FUN_00431832();
  local_8 = 0xffffffff;
  FUN_0043184a();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00431832 @ 0x00431832 */

void FUN_00431832(void)

{
  int unaff_EBP;
  
  FUN_00458710((int *)(*(int *)(unaff_EBP + -0x10) + 0x126));
  return;
}



/* Function: FUN_0043184a @ 0x0043184a */

void FUN_0043184a(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
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
    /* TODO: 158 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00431b45 @ 0x00431b45 */

void FUN_00431b45(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x48));
  return;
}



/* Function: FUN_00431b5f @ 0x00431b5f */

void FUN_00431b5f(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_00431b80 @ 0x00431b80 */

void FUN_00431b80(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488c90,uVar1,in_stack_fffffff4);
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
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  void *_Dst;
  int *this;
  char local_50 [80];
  
  pcVar7 = local_50;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  this = (int *)(param_1 + 0x126);
  sprintf(local_50,&DAT_00480110,(double)*(float *)(param_1 + 0x1ce));
  FUN_00458860(this,local_50);
  pvVar2 = (void *)FUN_004589f0((int)this);
  iVar6 = FUN_00432770(pvVar2,'.',0,1);
  if (iVar6 != -1) {
    pvVar2 = (void *)FUN_004589f0((int)this);
    iVar6 = FUN_00432770(pvVar2,'0',0,1);
    if (iVar6 != -1) {
      while( true ) {
        iVar6 = 0;
        pvVar2 = (void *)FUN_004589f0((int)this);
        iVar3 = FUN_004589f0((int)this);
        if ((*(int **)(iVar3 + 4) != (int *)0x0) &&
           (pcVar7 = (char *)**(int **)(iVar3 + 4), pcVar7 != (char *)0x0)) {
          cVar1 = *pcVar7;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            iVar6 = iVar6 + 1;
            cVar1 = *pcVar7;
          }
        }
        iVar3 = FUN_004327e0(pvVar2,'0',0,1);
        if (iVar3 - iVar6 != -1) break;
        iVar6 = 0;
        iVar3 = FUN_004589f0((int)this);
        if ((*(int **)(iVar3 + 4) != (int *)0x0) &&
           (pcVar7 = (char *)**(int **)(iVar3 + 4), pcVar7 != (char *)0x0)) {
          cVar1 = *pcVar7;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            iVar6 = iVar6 + 1;
            cVar1 = *pcVar7;
          }
        }
        pvVar2 = (void *)FUN_004589f0((int)this);
        iVar6 = iVar6 + -1;
        if (-1 < iVar6) {
          iVar3 = 0;
          if ((*(int **)((int)pvVar2 + 4) != (int *)0x0) &&
             (pcVar7 = (char *)**(int **)((int)pvVar2 + 4), pcVar7 != (char *)0x0)) {
            cVar1 = *pcVar7;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              iVar3 = iVar3 + 1;
              cVar1 = *pcVar7;
            }
          }
          iVar5 = 1;
          if (iVar6 < iVar3) {
            while (((iVar3 = iVar5, iVar5 == -1 || (iVar3 = iVar5 + -1, iVar5 != 0)) &&
                   (iVar6 = FUN_00432770(pvVar2,'0',iVar6,1), iVar6 != -1))) {
              iVar4 = FUN_00417570((int)pvVar2);
              iVar5 = iVar3;
              if (iVar6 < iVar4) {
                _Dst = (void *)(**(int **)((int)pvVar2 + 4) + iVar6);
                memmove(_Dst,(void *)((int)_Dst + 1),(iVar4 - iVar6) + 1);
              }
            }
          }
        }
      }
      iVar6 = 0;
      pvVar2 = (void *)FUN_004589f0((int)this);
      iVar3 = FUN_004589f0((int)this);
      if ((*(int **)(iVar3 + 4) != (int *)0x0) &&
         (pcVar7 = (char *)**(int **)(iVar3 + 4), pcVar7 != (char *)0x0)) {
        cVar1 = *pcVar7;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          iVar6 = iVar6 + 1;
          cVar1 = *pcVar7;
        }
      }
      iVar3 = FUN_004327e0(pvVar2,'.',0,1);
      if (iVar3 - iVar6 == -1) {
        iVar6 = 0;
        iVar3 = FUN_004589f0((int)this);
        if ((*(int **)(iVar3 + 4) != (int *)0x0) &&
           (pcVar7 = (char *)**(int **)(iVar3 + 4), pcVar7 != (char *)0x0)) {
          cVar1 = *pcVar7;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            iVar6 = iVar6 + 1;
            cVar1 = *pcVar7;
          }
        }
        pvVar2 = (void *)FUN_004589f0((int)this);
        iVar6 = iVar6 + -1;
        if (-1 < iVar6) {
          iVar3 = 0;
          if ((*(int **)((int)pvVar2 + 4) != (int *)0x0) &&
             (pcVar7 = (char *)**(int **)((int)pvVar2 + 4), pcVar7 != (char *)0x0)) {
            cVar1 = *pcVar7;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              iVar3 = iVar3 + 1;
              cVar1 = *pcVar7;
            }
          }
          iVar5 = 1;
          if (iVar6 < iVar3) {
            while (((iVar3 = iVar5, iVar5 == -1 || (iVar3 = iVar5 + -1, iVar5 != 0)) &&
                   (iVar6 = FUN_00432770(pvVar2,'.',iVar6,1), iVar6 != -1))) {
              FUN_00432680(pvVar2,iVar6,1);
              iVar5 = iVar3;
            }
          }
        }
      }
    }
  }
  pvVar2 = (void *)FUN_004589f0((int)this);
  iVar6 = FUN_00432770(pvVar2,'.',0,1);
  while( true ) {
    iVar5 = FUN_004589f0((int)this);
    iVar3 = 0;
    if ((*(int **)(iVar5 + 4) != (int *)0x0) &&
       (pcVar7 = (char *)**(int **)(iVar5 + 4), pcVar7 != (char *)0x0)) {
      cVar1 = *pcVar7;
      while (cVar1 != '\0') {
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar3 + 1;
        cVar1 = *pcVar7;
      }
    }
    if ((iVar3 < 0xb) || (iVar6 == -1)) break;
    pvVar2 = (void *)FUN_004589f0((int)this);
    FUN_00432680(pvVar2,iVar6 + 1,1);
    iVar5 = FUN_004589f0((int)this);
    iVar3 = 0;
    if ((*(int **)(iVar5 + 4) != (int *)0x0) &&
       (pcVar7 = (char *)**(int **)(iVar5 + 4), pcVar7 != (char *)0x0)) {
      cVar1 = *pcVar7;
      while (cVar1 != '\0') {
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar3 + 1;
        cVar1 = *pcVar7;
      }
    }
    if (iVar3 - iVar6 == 1) {
      pvVar2 = (void *)FUN_004589f0((int)this);
      FUN_00432680(pvVar2,iVar6,1);
      iVar6 = -1;
    }
  }
  iVar3 = FUN_004589f0((int)this);
  iVar6 = 0;
  if ((*(int **)(iVar3 + 4) != (int *)0x0) &&
     (pcVar7 = (char *)**(int **)(iVar3 + 4), pcVar7 != (char *)0x0)) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      iVar6 = iVar6 + 1;
      cVar1 = *pcVar7;
    }
  }
  if (10 < iVar6) {
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
  int iVar1;
  
  if (this->dialog_active == '\0') {
    if (this->dialog_initialized != '\0') goto LAB_00431fab;
    iVar1 = FUN_004589f0((intptr_t)this->dialog_data);
    sscanf((char *)**(int **)(iVar1 + 4),&DAT_00480118,&this->dialog_value);
    this->dialog_active = 1;
  }
  else {
    if (this->dialog_initialized != '\0') goto LAB_00431fab;
    FUN_00432000((intptr_t)this);
  }
  this->dialog_initialized = 1;
LAB_00431fab:
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
  float fVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x1d4);
  iVar3 = FUN_004589f0(param_1 + 0x126);
  sscanf((char *)**(int **)(iVar3 + 4),&DAT_00480118,pfVar1);
  switch(*(char *)(param_1 + 0x1d2)) {
  case 0x2a:
    fVar2 = *(float *)(param_1 + 0x1ce) * *pfVar1;
    break;
  case 0x2b:
    fVar2 = *(float *)(param_1 + 0x1ce) + *pfVar1;
    break;
  default:
    goto switchD_00432049_caseD_2c;
  case 0x2d:
    fVar2 = *(float *)(param_1 + 0x1ce) - *pfVar1;
    break;
  case 0x2f:
    if (ABS(*pfVar1) == 0.0) {
      FUN_00431860(param_1);
      FUN_00458860((void *)(param_1 + 0x126),s_Error_0047ee88);
      return;
    }
    fVar2 = *(float *)(param_1 + 0x1ce) / *pfVar1;
  }
  *(float *)(param_1 + 0x1ce) = fVar2;
switchD_00432049_caseD_2c:
  *pfVar1 = 0.0;
  *(char *)(param_1 + 0x1d9) = 1;
  FUN_00431be0(param_1);
  return;
}



/* Function: FUN_00432370 @ 0x00432370 */

void __thiscall FUN_00432370(TextDisplay *this,int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 1;
  if (*(int *)(this->field_11c + 0xe) != 0) {
    do {
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      FUN_0041d3a0(*(void **)(**(int **)(this->field_11c + 4) + -4 + iVar1 * 4),param_1,
                   param_2,'\x01');
    } while ((uint)(int)sVar2 <= *(uint *)(this->field_11c + 0xe));
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
  int *piVar1;
  
  piVar1 = *(int **)(DAT_004897c0 + 0x52);
  ((void (*)(void))((void **)(*piVar1))[200 / 4])(); /* piVar1->vtable[50] */
  *(char *)(piVar1 + 0x5d) = 1;
  FUN_0042c3f0(param_1);
  return;
}



/* Function: FUN_00432640 @ 0x00432640 */

void __thiscall FUN_00432640(CString *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;

  pcVar3 = (char *)(*(int *)this->pp_buffer + param_2);
  do {
    cVar1 = *pcVar3;
    cVar2 = *param_1;
    if (cVar1 != cVar2) {
      return;
    }
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') {
      return;
    }
    param_1 = param_1 + 1;
    if (cVar2 == '\0') {
      return;
    }
  } while ((param_3 == -1) || (param_3 = param_3 + -1, 0 < param_3));
  return;
}



/* Function: FUN_00432680 @ 0x00432680 */

void __thiscall FUN_00432680(CString *this,int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;

  piVar2 = (int *)this->pp_buffer;
  iVar4 = 0;
  if ((piVar2 != (int *)0x0) && (pcVar3 = (char *)*piVar2, pcVar3 != (char *)0x0)) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = *pcVar3;
    }
  }
  if (param_1 < iVar4) {
    memmove((void *)(*piVar2 + param_1),(void *)(param_2 + param_1 + *piVar2),(iVar4 - param_1) + 1)
    ;
  }
  return;
}



/* Function: FUN_004326d0 @ 0x004326d0 */

void __thiscall FUN_004326d0(CString *this,char param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  
  if (this->capacity + -1 < param_2) {
    iVar5 = 0;
    puVar4 = this->pp_buffer;
    if ((puVar4 != (uint *)0x0) && (pcVar6 = (char *)*puVar4, pcVar6 != (char *)0x0)) {
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar5 + 1;
        cVar1 = *pcVar6;
      }
    }
    iVar2 = param_2 + 1;
    if (param_2 + 1 <= iVar5 + 1) {
      iVar2 = iVar5 + 1;
    }
    iVar5 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
    if (puVar4 == (uint *)0x0) {
      pvVar3 = this->allocator;
      if (this->allocator == (LPCVOID)0x0) {
        pvVar3 = DAT_00483df4;
      }
      puVar4 = FUN_0046ccb0(pvVar3,7,iVar5);
    }
    else {
      puVar4 = FUN_0046cdc0(puVar4,iVar5,7);
    }
    this->pp_buffer = puVar4;
    this->capacity = iVar5;
  }
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar5 = iVar5 + 1;
      *(char *)(*this->pp_buffer + -1 + iVar5) = param_1;
    } while (iVar5 < param_2);
  }
  *(char *)(*this->pp_buffer + iVar5) = 0;
  return;
}



/* Function: FUN_00432770 @ 0x00432770 */

int __thiscall FUN_00432770(CString *this,char param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;

  piVar2 = (int *)this->pp_buffer;
  if ((piVar2 != (int *)0x0) && (0 < param_3)) {
    iVar4 = 0;
    if ((piVar2 != (int *)0x0) && (pcVar3 = (char *)*piVar2, pcVar3 != (char *)0x0)) {
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
        cVar1 = *pcVar3;
      }
    }
    if ((param_2 < iVar4) && (iVar4 = *piVar2, *(char *)(iVar4 + param_2) != '\0')) {
      do {
        if (((uint)*(byte *)(iVar4 + param_2) == (int)param_1) &&
           (param_3 = param_3 + -1, param_3 == 0)) {
          return param_2;
        }
        param_2 = param_2 + 1;
      } while (*(char *)(iVar4 + param_2) != '\0');
    }
  }
  return -1;
}



/* Function: FUN_004327e0 @ 0x004327e0 */

int __thiscall FUN_004327e0(GameWidget *this,char param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  piVar2 = this->field_04;
  if (piVar2 != (int *)0x0) {
    iVar3 = 0;
    pcVar6 = (char *)*piVar2;
    if (pcVar6 != (char *)0x0) {
      cVar4 = *pcVar6;
      while (cVar4 != '\0') {
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar3 + 1;
        cVar4 = *pcVar6;
      }
    }
    iVar3 = iVar3 + -1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    if (-1 < iVar3) {
      iVar7 = 0;
      if ((piVar2 != (int *)0x0) && (pcVar6 = (char *)*piVar2, pcVar6 != (char *)0x0)) {
        cVar4 = *pcVar6;
        while (cVar4 != '\0') {
          pcVar6 = pcVar6 + 1;
          iVar7 = iVar7 + 1;
          cVar4 = *pcVar6;
        }
      }
      if ((iVar3 < iVar7) && (iVar3 != 0)) {
        pcVar6 = this->type_or_mode;
        do {
          cVar4 = *(char *)(*piVar2 + iVar3);
          if (pcVar6 != (char *)0x0) {
            cVar1 = *pcVar6;
            pcVar5 = pcVar6;
            while (cVar1 != '\0') {
              if (*pcVar5 == cVar4) {
                cVar4 = pcVar5[1];
                break;
              }
              pcVar5 = pcVar5 + 2;
              cVar1 = *pcVar5;
            }
            if (pcVar6 != (char *)0x0) {
              cVar1 = *pcVar6;
              pcVar5 = pcVar6;
              while (cVar1 != '\0') {
                if (*pcVar5 == param_1) {
                  if (pcVar5[1] == cVar4) goto LAB_00432886;
                  goto LAB_00432889;
                }
                pcVar5 = pcVar5 + 2;
                cVar1 = *pcVar5;
              }
            }
          }
          if (param_1 == cVar4) {
LAB_00432886:
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return iVar3;
            }
          }
LAB_00432889:
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return -1;
}



/* Function: FUN_004328b0 @ 0x004328b0 */

void FUN_004328b0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488ca0,uVar1,in_stack_fffffff4);
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
  int iVar1;
  int *puVar2;
  int *puVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  double in_stack_ffffffa0;
  double in_stack_ffffffa8;
  char local_3c [4];
  int local_38 [6];
  double local_20;
  double local_18;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00432b78;
  *unaff_FS_OFFSET = &local_10;
  FUN_004329d0(local_3c,(int *)&ghidra_stack_00000004);
  local_8 = 0;
  puVar2 = local_38;
  puVar3 = (int *)&ghidra_stack_ffffffa0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  fVar4 = FUN_00432b90(param_1,in_stack_ffffffa0,in_stack_ffffffa8);
  local_18 = (double)fVar4;
  fVar4 = FUN_00432a90(param_1);
  local_20 = (double)fVar4;
  fVar4 = FUN_00432a90((int)local_3c);
  fVar4 = (float10)local_18 / (fVar4 * (float10)local_20);
  local_18 = (double)fVar4;
  if (fVar4 <= (float10)1.0) {
    if (local_18 < -1.0) {
      local_18 = -1.0;
    }
  }
  else {
    local_18 = 1.0;
  }
  local_8 = 0xffffffff;
  FUN_00432b82();
  _CIacos();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00432b82 @ 0x00432b82 */

void FUN_00432b82(void)

{
  int unaff_EBP;
  
  FUN_00432a50((int *)(unaff_EBP + -0x38));
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
  double dVar1;
  float10 fVar2;
  float10 fVar3;

  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  dVar1 = *(double *)((char *)this + 0x04);
  *(double *)((char *)this + 0x04) =
       (double)(fVar2 * (float10)*(double *)((char *)this + 0x04) -
               (float10)*(double *)((char *)this + 0x0C) * fVar3);
  *(double *)((char *)this + 0x0C) =
       (double)((float10)*(double *)((char *)this + 0x0C) * fVar2 + (float10)dVar1 * fVar3);
  return;
}



/* Function: FUN_00432be0 @ 0x00432be0 */

float10 __fastcall FUN_00432be0(int param_1)

{
    /* TODO: 59 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00432cb6 @ 0x00432cb6 */

void FUN_00432cb6(void)

{
  int unaff_EBP;
  
  FUN_00432a50((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: FUN_00432cc0 @ 0x00432cc0 */

float10 __fastcall FUN_00432cc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int *puVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  char local_34 [28];
  double local_18;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00432d56;
  *unaff_FS_OFFSET = &local_10;
  FUN_00432a10(local_34,0,0,0,0xbff00000,0,0);
  local_8 = 0;
  if (param_1 == 0) {
    puVar2 = (int *)0x0;
  }
  else {
    puVar2 = (int *)(param_1 + 4);
  }
  puVar3 = (int *)&ghidra_stack_ffffffac;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  fVar4 = FUN_00432be0((int)local_34);
  local_18 = (double)fVar4;
  if (fVar4 < (float10)0.0) {
    local_18 = local_18 + 6.283185306;
  }
  local_8 = 0xffffffff;
  FUN_00432d60();
  *unaff_FS_OFFSET = local_10;
  return (float10)local_18;
}



/* Function: FUN_00432d60 @ 0x00432d60 */

void FUN_00432d60(void)

{
  int unaff_EBP;
  
  FUN_00432a50((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: FUN_00432d80 @ 0x00432d80 */

void FUN_00432d80(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488cb0,uVar1,in_stack_fffffff4);
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488cc8,uVar1,in_stack_fffffff4);
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
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0) {
    return 0xfffefffe;
  }
  if (*(short *)(param_1 + 0xc) == param_2) {
    bVar1 = true;
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
  if ((*(short *)(param_1 + 0xe) != param_3) || (!bVar1)) {
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
  ushort *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  param_1[5] = (int)param_1[1] / 0x73e;
  puVar1 = FUN_0046f060(DAT_0047fc7c,(int)param_1[1] / 0x73e,1);
  param_1[4] = puVar1;
  if (puVar1 == (ushort *)0x0) {
    return 0xffffff94;
  }
  pcVar6 = (char *)*param_1;
  iVar7 = 0;
  iVar2 = 0;
  iVar5 = 0;
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    do {
      cVar3 = *pcVar6;
      if (cVar3 < '\0') {
        cVar3 = -cVar3;
      }
      iVar2 = iVar2 + cVar3;
      if (iVar4 == 0x73e) {
        iVar7 = iVar7 + 1;
        *(char *)(param_1[4] + -1 + iVar7) = (char)(iVar2 / 0x73e);
        iVar4 = 0;
        iVar2 = 0;
      }
      pcVar6 = pcVar6 + 1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar5 < (int)param_1[1]);
  }
  iVar2 = iVar7 + -1;
  if (iVar7 < (int)param_1[5]) {
    do {
      iVar7 = iVar7 + 1;
      *(char *)(param_1[4] + -1 + iVar7) = *(char *)(param_1[4] + iVar2);
    } while (iVar7 < (int)param_1[5]);
  }
  return param_1[5];
}



/* Function: FUN_00433100 @ 0x00433100 */

ushort * FUN_00433100(void)

{
  ushort *puVar1;
  
  puVar1 = FUN_0046f060(DAT_0047fc7c,0x18,1);
  if (puVar1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xff;
  puVar1[6] = 0xff;
  puVar1[7] = 0xff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return puVar1;
}



/* Function: FUN_00433140 @ 0x00433140 */

int __cdecl FUN_00433140(ushort *param_1,int *param_2)

{
  int in_EAX;
  short uVar4;
  ushort *puVar1;
  int uVar2;
  uint uVar3;
  uint uVar5;
  int *puVar6;
  ushort *local_4;
  
  uVar4 = (short)((uint)in_EAX >> 0x10);
  if (param_1 == (ushort *)0x0) {
    return CONCAT22(uVar4,0xfff9);
  }
  if (param_2 == (int *)0x0) {
    return CONCAT22(uVar4,0xfffe);
  }
  if (((((*param_1 & 1) == 0) && ((short)param_1[1] < 0x100)) && ((short)param_1[2] < 0x100)) &&
     ((short)param_1[3] < 0x100)) {
    local_4 = FUN_00433100();
    if (local_4 == (ushort *)0x0) {
      return 0xff94;
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(local_4 + 2) = *(int *)(param_1 + 4);
      *(uint *)(local_4 + 2) = *(uint *)(local_4 + 2) & 0xfffffffe;
      puVar1 = FUN_0046f060(DAT_0047fc7c,*(uint *)(local_4 + 2),1);
      *(ushort **)local_4 = puVar1;
      if (*(int **)local_4 == (int *)0x0) {
        uVar2 = FUN_00433270(&local_4);
        return CONCAT22((short)((uint)uVar2 >> 0x10),0xff94);
      }
      uVar3 = *(uint *)(local_4 + 2);
      puVar1 = param_1 + 8;
      puVar6 = *(int **)local_4;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *(int *)puVar1;
        puVar1 = puVar1 + 2;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar6 = (char)*puVar1;
        puVar1 = (ushort *)((int)puVar1 + 1);
        puVar6 = (int *)((int)puVar6 + 1);
      }
    }
    local_4[4] = *param_1;
    local_4[5] = param_1[1];
    local_4[6] = param_1[2];
    local_4[7] = param_1[3];
    *param_2 = local_4;
    return uVar3 & 0xffff0000;
  }
  return CONCAT22(uVar4,0xfff9);
}



/* Function: FUN_00433270 @ 0x00433270 */

uint __cdecl FUN_00433270(int *param_1)

{
    /* TODO: 72 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00433420 @ 0x00433420 */

int __cdecl FUN_00433420(int *param_1)

{
    /* TODO: 87 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_004335e0 @ 0x004335e0 */

void FUN_004335e0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488cd8,uVar1,in_stack_fffffff4);
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
    /* TODO: 35 lines - has decompilation artifacts */
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
    /* TODO: 33 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_00433876 @ 0x00433876 */

void FUN_00433876(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(int **)(unaff_EBP + -0x10));
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
  int unaff_EBP;
  
  FUN_004097c0((int *)(unaff_EBP + -0x24));
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
    /* TODO: 217 lines - has decompilation artifacts */
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
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x43c));
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
    /* TODO: 9 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00434130 @ 0x00434130 */

void FUN_00434130(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488ce8,uVar1,in_stack_fffffff4);
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488cf8,uVar1,in_stack_fffffff4);
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
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short *psVar6;
  
  sVar5 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return (short *)0x0;
  }
  if (0 < DAT_00487126) {
    do {
      iVar4 = (int)sVar5;
      if ((&DAT_00487132)[iVar4 * 0x3c] != 0) goto LAB_00434392;
      sVar5 = sVar5 + 1;
    } while (sVar5 < DAT_00487126);
  }
  sVar5 = 0;
  if (0 < DAT_00487126) {
    do {
      iVar4 = (int)sVar5;
      if (((&DAT_00487134)[iVar4 * 0x3c] & 0xff) < (*(ushort *)(param_1 + 2) & 0xff)) {
LAB_00434392:
        iVar3 = iVar4 * 0x78;
        psVar6 = (short *)(&DAT_00487128 + iVar3);
        (&DAT_00487132)[iVar4 * 0x3c] = 1;
        *psVar6 = *(short *)((int)param_1 + 0xa); /* TODO: unknown struct for param_1 */
        *(short *)(iVar3 + 0x48712a) = (short)param_1[3];
        *(short *)(iVar3 + 0x48712c) = *(short *)((int)param_1 + 0xe); /* TODO: unknown struct for param_1 */
        (&DAT_0048713a)[iVar4 * 0x1e] = *param_1;
        (&DAT_0048713e)[iVar4 * 0x1e] = param_1[1];
        (&DAT_00487142)[iVar4 * 0x1e] = param_1[1];
        (&DAT_00487146)[iVar4 * 0x1e] = param_1;
        if (((*(byte *)((int)&DAT_00487134 + iVar3 + 1) & 0x10) != 0) &&
           ((&DAT_00487136)[iVar4 * 0x1e] != 0)) {
          FUN_0046f5f0((&DAT_00487136)[iVar4 * 0x1e]);
        }
        (&DAT_00487134)[iVar4 * 0x3c] = 0;
        (&DAT_00487136)[iVar4 * 0x1e] = *param_1;
        (&DAT_00487134)[iVar4 * 0x3c] = (short)param_1[2];
        FUN_0045d7d0(psVar6);
        if ((&DAT_0048714a)[iVar4 * 0x3c] != 0) {
          sVar5 = 0;
          (&DAT_0048714a)[iVar4 * 0x3c] = 0;
          do {
            puVar1 = (uint *)((int)&DAT_0048714c + sVar5 * 0xe + iVar3);
            if (((*(byte *)((int)puVar1 + 0xd) & 0x10) != 0) && (*puVar1 != 0)) {
              FUN_0046f5f0(*puVar1);
            }
            sVar5 = sVar5 + 1;
            *puVar1 = 0;
            *(short *)(puVar1 + 3) = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
          } while (sVar5 < 6);
        }
        if (DAT_00487310 != 0) {
          sVar5 = 0;
          do {
            uVar2 = (&DAT_00487312)[sVar5];
            if (uVar2 != 0) {
              FUN_0046f5f0(uVar2);
              (&DAT_00487312)[sVar5] = 0;
            }
            sVar5 = sVar5 + 1;
          } while (sVar5 < 0x18);
          DAT_00487310 = 0;
        }
        (&DAT_00487132)[iVar4 * 0x3c] = 0;
        return psVar6;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < DAT_00487126);
  }
  return (short *)0x0;
}



/* Function: FUN_00434490 @ 0x00434490 */

int __cdecl FUN_00434490(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  int uVar4;
  ushort uVar5;
  short sVar6;
  short local_2;
  
  if (param_1 == 0) {
    return CONCAT22((short)(in_EAX >> 0x10),0xffff);
  }
  if (param_1 == -1) {
    local_2 = 0;
    if (0 < DAT_00487126) {
      do {
        iVar3 = (int)local_2;
        (&DAT_00487132)[iVar3 * 0x3c] = 1;
        if (((*(byte *)((int)&DAT_00487134 + iVar3 * 0x78 + 1) & 0x10) != 0) &&
           ((&DAT_00487136)[iVar3 * 0x1e] != 0)) {
          FUN_0046f5f0((&DAT_00487136)[iVar3 * 0x1e]);
          (&DAT_00487136)[iVar3 * 0x1e] = 0;
          (&DAT_00487134)[iVar3 * 0x3c] = 0;
        }
        sVar6 = 0;
        (&DAT_0048714a)[iVar3 * 0x3c] = 0;
        do {
          uVar5 = (ushort)((uint)(sVar6 * 7) >> 0x10);
          puVar1 = (uint *)((int)&DAT_0048714c + sVar6 * 0xe + iVar3 * 0x78);
          if (((*(byte *)((int)puVar1 + 0xd) & 0x10) != 0) && (uVar5 = 0, *puVar1 != 0)) {
            uVar4 = FUN_0046f5f0(*puVar1);
            uVar5 = (ushort)((uint)uVar4 >> 0x10);
          }
          sVar6 = sVar6 + 1;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(short *)(puVar1 + 3) = 0;
        } while (sVar6 < 6);
        if (DAT_00487310 != 0) {
          sVar6 = 0;
          do {
            uVar2 = (&DAT_00487312)[sVar6];
            uVar5 = 0;
            if (uVar2 != 0) {
              uVar4 = FUN_0046f5f0(uVar2);
              uVar5 = (ushort)((uint)uVar4 >> 0x10);
              (&DAT_00487312)[sVar6] = 0;
            }
            sVar6 = sVar6 + 1;
          } while (sVar6 < 0x18);
          DAT_00487310 = 0;
        }
        local_2 = local_2 + 1;
      } while (local_2 < DAT_00487126);
      return (uint)uVar5 << 0x10;
    }
  }
  else {
    *(short *)(param_1 + 10) = 1;
    if (((*(byte *)(param_1 + 0xd) & 0x10) != 0) && (*(uint *)(param_1 + 0xe) != 0)) {
      FUN_0046f5f0(*(uint *)(param_1 + 0xe));
      *(int *)(param_1 + 0xe) = 0;
      *(short *)(param_1 + 0xc) = 0;
    }
    sVar6 = 0;
    *(short *)(param_1 + 0x22) = 0;
    do {
      in_EAX = sVar6 * 7;
      puVar1 = (uint *)(param_1 + 0x24 + sVar6 * 0xe);
      if (((*(byte *)((int)puVar1 + 0xd) & 0x10) != 0) && (in_EAX = 0, *puVar1 != 0)) {
        in_EAX = FUN_0046f5f0(*puVar1);
      }
      sVar6 = sVar6 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(short *)(puVar1 + 3) = 0;
    } while (sVar6 < 6);
    if (DAT_00487310 != 0) {
      sVar6 = 0;
      do {
        uVar2 = (&DAT_00487312)[sVar6];
        in_EAX = 0;
        if (uVar2 != 0) {
          in_EAX = FUN_0046f5f0(uVar2);
          (&DAT_00487312)[sVar6] = 0;
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < 0x18);
      DAT_00487310 = 0;
    }
  }
  return in_EAX & 0xffff0000;
}



/* Function: FUN_00434640 @ 0x00434640 */

int __cdecl FUN_00434640(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  short uVar5;
  void *puVar4;
  short sVar6;
  short sVar7;
  bool bVar8;
  
  uVar5 = (short)((uint)in_EAX >> 0x10);
  if (param_2 == 0) {
    return CONCAT22(uVar5,0xffff);
  }
  if (param_1 == (int *)0x0) {
    return CONCAT22(uVar5,0xfffe);
  }
  if (*(short *)(param_2 + 0x22) == 6) {
    return CONCAT22((short)((uint)param_2 >> 0x10),0xfffb);
  }
  bVar8 = *(short *)(param_2 + 10) == 0;
  if (bVar8) {
    *(short *)(param_2 + 10) = 1;
  }
  sVar7 = 0;
  if (0 < DAT_00487126) {
    do {
      iVar3 = sVar7 * 0x78;
      if ((&DAT_0048714a)[sVar7 * 0x3c] != 0) {
        sVar6 = 0;
        do {
          if (*(int *)((int)&DAT_0048714c + sVar6 * 0xe + iVar3) == *param_1) {
            puVar4 = &DAT_00487128 + iVar3;
            if (bVar8) {
              *(short *)(param_2 + 10) = 0;
              puVar4 = (void *)param_2;
            }
            return CONCAT22((short)((uint)puVar4 >> 0x10),0xfff8);
          }
          sVar6 = sVar6 + 1;
        } while (sVar6 < 6);
      }
      sVar7 = sVar7 + 1;
    } while (sVar7 < DAT_00487126);
  }
  piVar1 = (int *)(param_2 + 0x24 + *(short *)(param_2 + 0x22) * 0xe);
  *piVar1 = *param_1;
  uVar2 = param_1[1];
  piVar1[1] = uVar2;
  piVar1[2] = (int)param_1;
  *(short *)(piVar1 + 3) = 0;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x20;
  *(short *)(param_2 + 0x22) = *(short *)(param_2 + 0x22) + 1;
  if (bVar8) {
    *(short *)(param_2 + 10) = 0;
  }
  return uVar2 & 0xffff0000;
}



/* Function: FUN_00434780 @ 0x00434780 */

void FUN_00434780(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d08,uVar1,in_stack_fffffff4);
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004348fc;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041b6c0(param_1);
  local_8 = 0;
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
  *unaff_FS_OFFSET = local_10;
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
  int unaff_EBP;
  
  FUN_0043b810((int *)(*(int *)(unaff_EBP + -0x10) + 0x42));
  return;
}



/* Function: FUN_00434994 @ 0x00434994 */

void FUN_00434994(void)

{
  int unaff_EBP;
  
  FUN_0041b890(*(int **)(unaff_EBP + -0x10));
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
    /* TODO: 163 lines - has decompilation artifacts */
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
  int uVar1;
  short uVar2;
  int *unaff_FS_OFFSET;
  char local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  uVar2 = this->flags;
  *unaff_FS_OFFSET = local_10;
  param_1[1] = uVar2;
  *param_1 = this->field_10;
  *unaff_FS_OFFSET = uVar1;
  return param_1;
}



/* Function: FUN_00434e10 @ 0x00434e10 */

char FUN_00434e10(void *param_1,int param_2,short param_3,short param_4)

{
    /* TODO: 94 lines - has decompilation artifacts */
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
  int unaff_EBP;
  
  FUN_00465af0((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: FUN_00435060 @ 0x00435060 */

void FUN_00435060(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d18,uVar1,in_stack_fffffff4);
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d38,uVar1,in_stack_fffffff4);
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004359d2;
  *unaff_FS_OFFSET = &local_10;
  FUN_0044e3f0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00474658;
  FUN_00435a60((int)param_1);
  *unaff_FS_OFFSET = local_10;
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
  int iVar1;
  
  if ((char)param_1[0x46] == '\0') {
    FUN_00405cb0(param_1);
    return;
  }
  if (((*(char *)(DAT_004896b0 + 0x28) == '\0') && (*(char *)((int)param_1 + 0x123) == '\0')) && /* TODO: unknown struct, offset 0x123 */
     (iVar1 = *(int *)((int)param_1 + 0x11e) + -1, *(int *)((int)param_1 + 0x11e) = iVar1, iVar1 < 1 /* TODO: unknown struct, offset 0x11e */
     )) {
    iVar1 = (short)param_1[0x44] + -1;
    if (iVar1 < 1) {
      ((void (*)(void))((void **)(**(int **)(DAT_004897c0 + 0x52)))[0xac / 4])(); /* obj at *(DAT_004897c0+0x52)->vtable[43] */
    }
    else {
      FUN_004058c0(param_1,(short)iVar1);
    }
    *(int *)((int)param_1 + 0x11e) = 0x1e; /* TODO: unknown struct, offset 0x11e */
  }
  return;
}



/* Function: FUN_00435b70 @ 0x00435b70 */

void __thiscall FUN_00435b70(UIWidget *this,short param_1)

{
  int iVar1;

  iVar1 = (int)this->cell_count - (int)param_1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  FUN_004058c0(this,(short)iVar1);
  return;
}



/* Function: FUN_00435ba0 @ 0x00435ba0 */

int * __fastcall FUN_00435ba0(int *param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00435bef;
  *unaff_FS_OFFSET = &local_10;
  FUN_004535d0(param_1);
  *param_1 = &PTR_FUN_00474700;
  param_1[0x46] = 0;
  *unaff_FS_OFFSET = local_10;
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00435c79;
  *param_1 = &PTR_FUN_00474700;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00435d70(param_1);
  local_8 = 0xffffffff;
  FUN_00435c83();
  *unaff_FS_OFFSET = local_10;
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
    /* TODO: 27 lines - has decompilation artifacts */
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
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  short sVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_004360e7;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0;
  local_1c = 0;
  local_8 = 0;
  local_14 = this;
  if (((DialogWidget *)this)->prev_dialog == (void *)0x0) {
    FUN_00435cb0((intptr_t)this);
  }
  pvVar2 = (void *)FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
  iVar3 = FUN_00432770(pvVar2,'0',0,1);
  if (iVar3 != -1) {
    while( true ) {
      iVar3 = 0;
      pvVar2 = (void *)FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      iVar4 = FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      if ((*(int **)(iVar4 + 4) != (int *)0x0) &&
         (pcVar6 = (char *)**(int **)(iVar4 + 4), pcVar6 != (char *)0x0)) {
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          iVar3 = iVar3 + 1;
          cVar1 = *pcVar6;
        }
      }
      iVar4 = FUN_004327e0(pvVar2,'0',0,1);
      if (iVar4 - iVar3 != -1) break;
      iVar3 = 0;
      iVar4 = FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      if ((*(int **)(iVar4 + 4) != (int *)0x0) &&
         (pcVar6 = (char *)**(int **)(iVar4 + 4), pcVar6 != (char *)0x0)) {
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          iVar3 = iVar3 + 1;
          cVar1 = *pcVar6;
        }
      }
      pvVar2 = (void *)FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        iVar4 = 0;
        if ((*(int **)((int)pvVar2 + 4) != (int *)0x0) &&
           (pcVar6 = (char *)**(int **)((int)pvVar2 + 4), pcVar6 != (char *)0x0)) {
          cVar1 = *pcVar6;
          while (cVar1 != '\0') {
            pcVar6 = pcVar6 + 1;
            iVar4 = iVar4 + 1;
            cVar1 = *pcVar6;
          }
        }
        iVar9 = 1;
        if (iVar3 < iVar4) {
          while (((iVar4 = iVar9, iVar9 == -1 || (iVar4 = iVar9 + -1, iVar9 != 0)) &&
                 (iVar3 = FUN_00432770(pvVar2,'0',iVar3,1), iVar3 != -1))) {
            iVar5 = FUN_00417570((int)pvVar2);
            iVar9 = iVar4;
            if (iVar3 < iVar5) {
              pvVar7 = (void *)(**(int **)((int)pvVar2 + 4) + iVar3);
              memmove(pvVar7,(void *)((int)pvVar7 + 1),(iVar5 - iVar3) + 1);
            }
          }
        }
      }
    }
    iVar3 = 0;
    pvVar2 = (void *)FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
    iVar4 = FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
    if ((*(int **)(iVar4 + 4) != (int *)0x0) &&
       (pcVar6 = (char *)**(int **)(iVar4 + 4), pcVar6 != (char *)0x0)) {
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar3 + 1;
        cVar1 = *pcVar6;
      }
    }
    iVar4 = FUN_004327e0(pvVar2,'.',0,1);
    if (iVar4 - iVar3 == -1) {
      iVar3 = 0;
      iVar4 = FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      if ((*(int **)(iVar4 + 4) != (int *)0x0) &&
         (pcVar6 = (char *)**(int **)(iVar4 + 4), pcVar6 != (char *)0x0)) {
        cVar1 = *pcVar6;
        while (cVar1 != '\0') {
          pcVar6 = pcVar6 + 1;
          iVar3 = iVar3 + 1;
          cVar1 = *pcVar6;
        }
      }
      pvVar2 = (void *)FUN_004589f0(((DialogWidget *)local_14)->prev_dialog);
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        iVar4 = 0;
        if ((*(int **)((int)pvVar2 + 4) != (int *)0x0) &&
           (pcVar6 = (char *)**(int **)((int)pvVar2 + 4), pcVar6 != (char *)0x0)) {
          cVar1 = *pcVar6;
          while (cVar1 != '\0') {
            pcVar6 = pcVar6 + 1;
            iVar4 = iVar4 + 1;
            cVar1 = *pcVar6;
          }
        }
        iVar9 = 1;
        if (iVar3 < iVar4) {
          while (((iVar4 = iVar9, iVar9 == -1 || (iVar4 = iVar9 + -1, iVar9 != 0)) &&
                 (iVar3 = FUN_00432770(pvVar2,'.',iVar3,1), iVar3 != -1))) {
            iVar5 = FUN_00417570((int)pvVar2);
            iVar9 = iVar4;
            if (iVar3 < iVar5) {
              pvVar7 = (void *)(**(int **)((int)pvVar2 + 4) + iVar3);
              memmove(pvVar7,(void *)((int)pvVar7 + 1),(iVar5 - iVar3) + 1);
            }
          }
        }
      }
    }
  }
  sVar8 = 0;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (pcVar6 = (char *)**(int **)(param_1 + 4), pcVar6 != (char *)0x0)) {
    cVar1 = *pcVar6;
    sVar8 = 0;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      sVar8 = sVar8 + 1;
      cVar1 = *pcVar6;
    }
  }
  FUN_00458b40(((DialogWidget *)local_14)->prev_dialog,sVar8 + 1,1);
  FUN_00458920(((DialogWidget *)local_14)->prev_dialog,param_1);
  FUN_0041d780(((DialogWidget *)local_14)->prev_dialog,((UIElement *)local_14)->parent_widget);
  FUN_0041cde0(local_14,&local_1c);
  FUN_0041d3a0(((DialogWidget *)local_14)->prev_dialog,local_18,local_1c,'\0');
  FUN_0041bb70(local_14,((DialogWidget *)local_14)->prev_dialog,'\x01');
  FUN_0041dd40(((DialogWidget *)local_14)->prev_dialog);
  FUN_0041dad0(((DialogWidget *)local_14)->prev_dialog,1,'\0');
  FUN_0041da90(((DialogWidget *)local_14)->prev_dialog,1);
  local_8 = 0xffffffff;
  FUN_004360f1();
  *unaff_FS_OFFSET = local_10;
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004361f1;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435ba0(this);
  this->sequence_data[58] = 0;
  this->sequence_data[59] = 0;
  this->sequence_data[58] = 0;
  local_8 = 1;
  *(void ***)this = &PTR_FUN_004747a8;
  if (param_1 != -1) {
    FUN_00436230(param_1,param_2);
  }
  *unaff_FS_OFFSET = local_10;
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
    /* TODO: 73 lines - has decompilation artifacts */
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00436458;
  *param_1 = &PTR_FUN_004747a8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0043644a();
  local_8 = 0xffffffff;
  FUN_00436462();
  *unaff_FS_OFFSET = local_10;
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
  int unaff_EBP;
  
  FUN_00435c30(*(int **)(unaff_EBP + -0x10));
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
    /* TODO: 27 lines - has decompilation artifacts */
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
    /* TODO: 19 lines - has decompilation artifacts */
    return;
}



/* Function: FUN_0043667c @ 0x0043667c */

void FUN_0043667c(void)

{
  int unaff_EBP;
  
  FUN_00436400(*(int **)(unaff_EBP + -0x10));
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
  int *unaff_FS_OFFSET;
  int local_18 [3];
  char *puStack_c;
  int local_8;
  
  local_18[2] = *unaff_FS_OFFSET;
  puStack_c = &LAB_00436799;
  *unaff_FS_OFFSET = local_18 + 2;
  local_18[1] = 0;
  local_18[0] = 0;
  local_8 = 0;
  FUN_0041cde0(this,local_18);
  FUN_00406720(this->slot_ptr_0,param_1);
  FUN_0041d780(this->slot_ptr_0,this->parent_widget);
  FUN_0041dd40(this->slot_ptr_0);
  FUN_0041dad0(this->slot_ptr_0,1,'\0');
  FUN_0041d2d0(this->slot_ptr_0,local_18,'\0');
  if (param_2 != 0) {
    FUN_00406ca0(this->slot_ptr_0,(char)param_2,'\0');
  }
  local_8 = 0xffffffff;
  FUN_004367a3();
  *unaff_FS_OFFSET = local_18[2];
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
    /* TODO: 82 lines - has decompilation artifacts */
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00436ac2;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00436ab4();
  local_8 = 0xffffffff;
  FUN_00436acc();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00436ab4 @ 0x00436ab4 */

void FUN_00436ab4(void)

{
  int unaff_EBP;
  
  FUN_004113d0((int *)(*(int *)(unaff_EBP + -0x10) + 0x1d2));
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00436b9b;
  *param_1 = &PTR_FUN_00474900;
  *unaff_FS_OFFSET = &local_10;
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(4));
  local_8 = (local_8 & ~(0xFFFFFF << 8)) | (((unsigned int)(0) & 0xFFFFFF) << 8);
  FUN_00436b55();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(3));
  FUN_00436b63();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(2));
  FUN_00436b71();
  local_8 = (local_8 & ~0xFF) | ((unsigned char)(1));
  FUN_00436b7f();
  local_8 = (uint)(((local_8) >> 8) & 0xFFFFFF) << 8;
  FUN_00436b8d();
  local_8 = 0xffffffff;
  FUN_00436ba5();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_00436b55 @ 0x00436b55 */

void FUN_00436b55(void)

{
  int unaff_EBP;
  
  FUN_0043a0b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x5ce));
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
  int unaff_EBP;
  
  FUN_0042f0a0((int *)(*(int *)(unaff_EBP + -0x10) + 0x2fe));
  return;
}



/* Function: FUN_00436b7f @ 0x00436b7f */

void FUN_00436b7f(void)

{
  int unaff_EBP;
  
  FUN_0043a080((int *)(*(int *)(unaff_EBP + -0x10) + 0x2e0));
  return;
}



/* Function: FUN_00436b8d @ 0x00436b8d */

void FUN_00436b8d(void)

{
  int unaff_EBP;
  
  FUN_0040ac40((int *)(*(int *)(unaff_EBP + -0x10) + 0x1b4));
  return;
}



/* Function: FUN_00436ba5 @ 0x00436ba5 */

void FUN_00436ba5(void)

{
  int unaff_EBP;
  
  FUN_0042cd10(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00436bb0 @ 0x00436bb0 */

void __thiscall FUN_00436bb0(TextDisplay *this,void *param_1)

{
  void *_Src;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != (void *)0x0) {
    uVar3 = 0;
    uVar1 = this->data_count;
    if (uVar1 != 0) {
      piVar2 = (int *)*this->pp_data;
      do {
        if ((void *)*piVar2 == param_1) {
          uVar3 = uVar3 + 1;
          goto LAB_00436be1;
        }
        piVar2 = piVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    uVar3 = 0;
LAB_00436be1:
    if ((uVar3 != 0) && (uVar3 <= uVar1)) {
      if (uVar3 < uVar1) {
        _Src = (void *)(*this->pp_data + uVar3 * 4);
        memmove((void *)((int)_Src + -4),_Src,(uVar1 - uVar3) * 4);
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
    /* TODO: 99 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00436e60 @ 0x00436e60 */

int __cdecl FUN_00436e60(uint param_1)

{
  int iVar1;
  
  iVar1 = rand();
  return (int)(iVar1 * (param_1 & 0xffff)) / 0x7fff;
}



/* Function: FUN_00436e80 @ 0x00436e80 */

char __cdecl FUN_00436e80(int param_1,int param_2)

{
  char cVar1;
  char uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x36) != 0) && (uVar3 = 1, 1 < *(uint *)(*(int *)(param_1 + 0x36) + 0xe)))
  {
    iVar4 = 4;
    do {
      cVar1 = FUN_00436e80(*(int *)(**(int **)(*(int *)(param_1 + 0x36) + 4) + -4 + iVar4),param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x36) + 0xe));
  }
  uVar2 = FUN_00406fc0(param_1,param_2);
  return uVar2;
}



/* Function: FUN_00436ef0 @ 0x00436ef0 */

uint __fastcall FUN_00436ef0(int *param_1)

{
    /* TODO: 128 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_00437290 @ 0x00437290 */

void __thiscall FUN_00437290(void *this,void *param_1)

{
  int *unaff_FS_OFFSET;
  int uVar1;
  int in_stack_ffffffcc;
  int local_1c [2];
  char *local_14;
  int local_10;
  char *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00437340;
  *unaff_FS_OFFSET = &local_10;
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_8 = 0;
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_ffffffcc,0);
  FUN_00401050(&ghidra_stack_ffffffc8,0);
  FUN_00401270((void *)((int)param_1 + 0x132),uVar1,in_stack_ffffffcc); /* TODO: unknown offset 0x132 on GameWidget (in field_130 or _pad134 range) */
  FUN_0041cde0(param_1,local_1c);
  FUN_00436bb0(this,param_1);
  local_14 = &ghidra_stack_ffffffc8;
  FUN_004090c0(&ghidra_stack_ffffffc8,local_1c);
  local_8 = local_8 & 0xffffff00;
  FUN_00438030((int)this);
  local_8 = 0xffffffff;
  FUN_0043734a();
  *unaff_FS_OFFSET = local_10;
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
    /* TODO: 151 lines - has decompilation artifacts */
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
    /* TODO: 66 lines - has decompilation artifacts */
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
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_20 [3];
  void *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00437ae5;
  *unaff_FS_OFFSET = &local_10;
  local_20[1] = 0;
  local_20[0] = 0;
  local_8 = 0;
  local_20[2] = *(uint *)(param_1 + 0x5dc);
  for (uVar3 = local_20[2] * 4; 3 < uVar3; uVar3 = uVar3 - 4) {
    local_14 = *(void **)(**(int **)(param_1 + 0x5d2) + -4 + uVar3);
    if ((local_14 != (void *)0x0) && (((UIElement *)local_14)->parent_widget != (void *)0x0)) {
      FUN_0041cde0(local_14,local_20);
      if ((*(int *)(param_1 + 0x19c) != 0) &&
         (pvVar2 = *(void **)(**(int **)(param_1 + 0x302) + -4 + uVar3), pvVar2 != (void *)0x0)) {
        FUN_0041d780(pvVar2,((UIElement *)local_14)->parent_widget);
        FUN_0041d2d0(pvVar2,local_20,'\0');
        FUN_0041dad0(pvVar2,1,'\0');
        FUN_0041da90(pvVar2,1);
        ((UIWidget *)pvVar2)->type_or_mode = 0;
        ((UIWidget *)pvVar2)->anim_flag_0 = 0;
        ((UIWidget *)pvVar2)->anim_flag_2 = 0;
        ((UIWidget *)pvVar2)->anim_flag_1 = 1;
        ((UIWidget *)pvVar2)->anim_flag_3 = 0;
        FUN_00405d30(pvVar2,0);
      }
      FUN_004535c0(local_14);
      FUN_00436100(local_14);
      FUN_0041d780(local_14,(void *)0x0);
      if (uVar3 != 0) {
        uVar1 = *(uint *)(param_1 + 0x5dc);
        if ((uint)local_20[2] <= uVar1) {
          if ((uint)local_20[2] < uVar1) {
            pvVar2 = (void *)(**(int **)(param_1 + 0x5d2) + uVar3);
            memmove((void *)((int)pvVar2 + -4),pvVar2,(uVar1 - local_20[2]) * 4);
          }
          *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x5dc) + -1;
        }
      }
    }
    local_20[2] = local_20[2] - 1;
  }
  local_8 = 0xffffffff;
  FUN_00437aef();
  *unaff_FS_OFFSET = local_10;
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
  int *piVar1;
  uint uVar2;
  int *puVar3;
  void *this;
  short sVar4;
  
  while (uVar2 = *(uint *)(param_1 + 0x5dc), uVar2 != 0) {
    puVar3 = (int *)**(int **)(param_1 + 0x5d2);
    this = (void *)*puVar3;
    if (uVar2 != 0) {
      if (1 < uVar2) {
        memmove(puVar3,puVar3 + 1,uVar2 * 4 - 4);
      }
      *(int *)(param_1 + 0x5dc) = *(int *)(param_1 + 0x5dc) + -1;
    }
    FUN_004535c0(this);
    FUN_0041d780(this,(void *)0x0);
    FUN_004564c0();
  }
  sVar4 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x5e4 + sVar4 * 4);
    puVar3 = (int *)*piVar1;
    if (puVar3 != (int *)0x0) {
      ((void (*)(void))((void **)*puVar3)[0])(); /* puVar3->vtable[0] */
      *piVar1 = 0;
      FUN_004564c0();
    }
    sVar4 = sVar4 + 1;
  } while (sVar4 < 6);
  return;
}



/* Function: FUN_00437bc0 @ 0x00437bc0 */

void __fastcall FUN_00437bc0(void *param_1)

{
    /* TODO: 83 lines - has decompilation artifacts */
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
    /* TODO: 60 lines - has decompilation artifacts */
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
  void *pvVar1;
  int *unaff_FS_OFFSET;
  int uVar2;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00438132;
  local_8 = 0;
  *unaff_FS_OFFSET = &local_10;
  if (*(void **)(param_1 + 0x19c) != (void *)0x0) {
    if ((*(char *)(DAT_004896b0 + 0x2d) == '\0') || (*(int *)(param_1 + 0xd0) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
    FUN_004092c0(*(void **)(param_1 + 0x19c),uVar2,1);
    FUN_0041d2d0(*(void **)(param_1 + 0x19c),(int *)&ghidra_stack_00000004,'\0');
    FUN_0041dd40(*(void **)(param_1 + 0x19c));
    FUN_0041dad0(*(void **)(param_1 + 0x19c),1,'\0');
    FUN_0041da90(*(void **)(param_1 + 0x19c),1);
    pvVar1 = *(void **)(param_1 + 0x19c);
    ((UIWidget *)pvVar1)->anim_flag_0 = 0;
    ((UIWidget *)pvVar1)->anim_flag_2 = 0;
    ((UIWidget *)pvVar1)->anim_flag_1 = 0;
    ((UIWidget *)pvVar1)->anim_flag_3 = 0;
    FUN_00405d30(pvVar1,3);
    ((UIWidget *)*(void **)(param_1 + 0x19c))->pending_frame = 2;
    pvVar1 = *(void **)(param_1 + 0x19c);
    ((UIWidget *)pvVar1)->anim_flag_0 = 0;
    ((UIWidget *)pvVar1)->anim_flag_2 = 0;
    ((UIWidget *)pvVar1)->anim_flag_1 = 1;
    ((UIWidget *)pvVar1)->anim_flag_3 = 0;
    FUN_00405d30(pvVar1,0);
  }
  local_8 = 0xffffffff;
  FUN_0043813c();
  *unaff_FS_OFFSET = local_10;
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
  int *unaff_FS_OFFSET;
  char *puVar3;
  int iVar4;
  char cVar5;
  int local_1c [2];
  char *local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_00438262;
  *unaff_FS_OFFSET = &local_10;
  local_1c[1] = 0;
  local_1c[0] = 0;
  local_8 = 0;
  this = *(void **)(DAT_004897c0 + 0x44);
  if (this != (void *)0x0) {
    FUN_0041cde0(this,local_1c);
    iVar4 = 0x4381b8;
    SVar1 = GetAsyncKeyState(0x25);
    if (SVar1 < 0) {
      if ((int)(short)((uint)local_1c[1] >> 8) - (int)*(short *)(param_1 + 0x32c) <=
          (int)*(short *)(param_1 + 0x330)) goto LAB_00438187;
      DVar2 = GetTickCount();
      cVar5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = DVar2;
      local_14 = (char *)-(int)DAT_00488d2c;
      FUN_00401050(&ghidra_stack_ffffffcc,0);
      puVar3 = local_14;
    }
    else {
      iVar4 = 0x4381c1;
      SVar1 = GetAsyncKeyState(0x27);
      if ((-1 < SVar1) ||
         ((int)*(short *)(param_1 + 0x332) <=
          (int)*(short *)(param_1 + 0x32e) + (int)(short)((uint)local_1c[1] >> 8)))
      goto LAB_00438187;
      DVar2 = GetTickCount();
      cVar5 = '\x01';
      *(DWORD *)(param_1 + 0x176) = DVar2;
      local_14 = &ghidra_stack_ffffffcc;
      FUN_00401050(&ghidra_stack_ffffffcc,0);
      puVar3 = DAT_00488d2c;
    }
    FUN_0041d3a0(this,puVar3,iVar4,cVar5);
  }
LAB_00438187:
  local_8 = 0xffffffff;
  FUN_0043826c();
  *unaff_FS_OFFSET = local_10;
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
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  char local_48 [40];
  char *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043839a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  FUN_0041ce10(param_1,&local_18,2);
  uVar2 = 0xffffffff;
  pcVar4 = (char *)&DAT_0047ef44;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_48;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  _itoa((int)*(short *)(DAT_0048345c + 0x92) - (int)DAT_00488d50,local_48,10);
  pcVar4 = local_48;
  FUN_00458860(*(void **)((int)param_1 + 0x2d8),pcVar4); /* TODO: unknown struct, offset 0x2d8 */
  local_20 = &ghidra_stack_ffffffa8;
  FUN_00401ba0(&ghidra_stack_ffffffa8,
               *(short *)(&DAT_0048026c + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&local_14,(int)pcVar4);
  local_1c = &ghidra_stack_ffffffa8;
  FUN_00401ba0(&ghidra_stack_ffffffa8,
               *(short *)(&DAT_0048026e + *(short *)(*(int *)((int)param_1 + 0x6a) + 0xc) * 4)); /* TODO: unknown struct, offset 0x6a */
  FUN_00402d00(&local_18,(int)pcVar4);
  FUN_0041d020(*(void **)((int)param_1 + 0x2d8),local_14,local_18,2); /* TODO: unknown struct, offset 0x2d8 */
  FUN_0041dd40(*(void **)((int)param_1 + 0x2d8)); /* TODO: unknown struct, offset 0x2d8 */
  local_8 = 0xffffffff;
  FUN_004383a4();
  *unaff_FS_OFFSET = local_10;
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
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *this;
  
  this = (void *)0x0;
  if (*(int *)((int)param_1 + 0x5ca) == 4) { /* TODO: unknown struct, offset 0x5ca (possibly TextDisplay.data_count-related) */
    iVar1 = *(int *)(DAT_004897c0 + 0x4a);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1a) != 0)) &&
       (uVar2 = *(uint *)(*(int *)(iVar1 + 0x1a) + 0xe), uVar2 != 0)) {
      uVar5 = 1;
      pvVar3 = *(void **)(DAT_004897c0 + 0x44);
      if (uVar2 != 0) {
        iVar6 = 4;
        do {
          this = (void *)FUN_0041c0f0(*(int *)(**(int **)(*(int *)(iVar1 + 0x1a) + 4) + -4 + iVar6))
          ;
          if (this != pvVar3) {
            iVar4 = FUN_0042a910((int)this);
            if (*(short *)((int)param_1 + 0x5b0) == iVar4) break; /* TODO: unknown struct, offset 0x5b0 */
          }
          iVar6 = iVar6 + 4;
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar2);
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
    /* TODO: 6 lines - has decompilation artifacts */
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
  int unaff_EBP;
  
  FUN_004113d0((int *)(unaff_EBP + -0x40));
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
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x1a0) != 0) && (DAT_004897c0 != 0)) &&
     (iVar1 = *(int *)(DAT_004897c0 + 0x44), iVar1 != 0)) {
    iVar2 = FUN_0041c0f0(*(int *)(param_1 + 0x1a0));
    if (iVar2 == iVar1) {
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d60,uVar1,in_stack_fffffff4);
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
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043a2dc;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  *(void ***)this = &PTR_FUN_004749f0;
  local_8 = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 1;
  iVar1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 1;
  DVar2 = GetTickCount();
  *(DWORD *)(iVar1 + 4) = DVar2;
  *unaff_FS_OFFSET = local_10;
  *(DWORD *)(iVar1 + 0xc) = DVar2;
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
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_0043a373;
  *param_1 = &PTR_FUN_004749f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(char *)(DAT_004896b0 + 0x2b) = 0;
  iVar1 = DAT_004896b0;
  *(char *)(DAT_004896b0 + 0x28) = 0;
  DVar2 = GetTickCount();
  local_8 = 0xffffffff;
  *(DWORD *)(iVar1 + 4) = DVar2;
  *(DWORD *)(iVar1 + 0xc) = DVar2;
  FUN_0043a37d();
  *unaff_FS_OFFSET = local_10;
  return;
}



/* Function: FUN_0043a37d @ 0x0043a37d */

void FUN_0043a37d(void)

{
  int unaff_EBP;
  
  FUN_0042be10(*(int **)(unaff_EBP + -0x10));
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
  int unaff_EBP;
  
  FUN_00451f60((int *)(unaff_EBP + -0x450));
  return;
}



/* Function: FUN_0043a5e9 @ 0x0043a5e9 */

void FUN_0043a5e9(void)

{
  int unaff_EBP;
  
  FUN_0044e840((int *)(unaff_EBP + -0x44));
  return;
}



/* Function: FUN_0043a620 @ 0x0043a620 */

void __cdecl FUN_0043a620(short *param_1)

{
  short uVar1;
  
  *param_1 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  uVar1 = param_1[1];
  param_1[1] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = param_1[2];
  param_1[2] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = param_1[3];
  param_1[3] = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = param_1[4];
  *(uint *)(param_1 + 4) =
       CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                CONCAT11((char)param_1[5],(char)((ushort)param_1[5] >> 8)));
  uVar1 = param_1[6];
  *(uint *)(param_1 + 6) =
       CONCAT22(CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),
                CONCAT11((char)param_1[7],(char)((ushort)param_1[7] >> 8)));
  return;
}



/* Function: FUN_0043a6b0 @ 0x0043a6b0 */

int __cdecl FUN_0043a6b0(void *param_1,int param_2)

{
  ushort *puVar1;
  int local_4;
  
  puVar1 = FUN_004607d0(param_1,param_2,(ushort *)0x0,(ushort *)0x0,0);
  local_4 = 0;
  if (puVar1 != (ushort *)0x0) {
    FUN_0043a620(puVar1);
    FUN_00433140(puVar1,&local_4);
    FUN_0046f5f0((uint)puVar1);
  }
  return local_4;
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d70,uVar1,in_stack_fffffff4);
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
    /* TODO: 252 lines - has decompilation artifacts */
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
    /* TODO: 20 lines - has decompilation artifacts */
    return 0;
}



/* Function: FUN_0043ade0 @ 0x0043ade0 */

void FUN_0043ade0(void)

{
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d80,uVar1,in_stack_fffffff4);
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
  int uVar1;
  int in_stack_fffffff4;
  
  uVar1 = 0;
  FUN_00401050(&ghidra_stack_fffffff4,0);
  FUN_00401050(&ghidra_stack_fffffff0,0);
  FUN_00401060(&DAT_00488d90,uVar1,in_stack_fffffff4);
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
  int *unaff_FS_OFFSET;
  int local_10;
  char *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0043b002;
  *unaff_FS_OFFSET = &local_10;
  FUN_004052b0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00474ab0;
  FUN_0043b090(param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



