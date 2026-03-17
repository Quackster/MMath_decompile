/*
 * game_resources.c - Resource loading
 * Address range: 0x45C000 - 0x45FFFF
 * Functions: 218
 *
 * Part of MMath (Educational Math Game, ~1995)
 */

#include "types.h"
#include "funcs.h"
#include "globals.h"
#include "game_structs.h"

/* FUN_0045c050 @ 0x0045c050 */

void FUN_0045c050(void) { return; }


/* FUN_0045c060 @ 0x0045c060 */

void FUN_0045c060(void) { return; }


/* FUN_0045c070 @ 0x0045c070 */

void __fastcall FUN_0045c070(int param_1)
{
    /* STUB: 8 lines not yet reconstructed */
    return;
}


/* FUN_0045c090 @ 0x0045c090 */

void FUN_0045c090(void) { return; }


/* FUN_0045c0a0 @ 0x0045c0a0 */

void FUN_0045c0a0(void) { return; }


/* FUN_0045c0b0 @ 0x0045c0b0 */

void FUN_0045c0b0(void) { return; }


/* FUN_0045c0c0 @ 0x0045c0c0 */

void FUN_0045c0c0(void) { return; }


/* FUN_0045c0e0 @ 0x0045c0e0 */

void FUN_0045c0e0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004893f0,u1,_arg1);
}


/* FUN_0045c130 @ 0x0045c130 */

void FUN_0045c130(void) { return; }


/* FUN_0045c150 @ 0x0045c150 */

/* NOTE: overlapping globals */

void FUN_0045c150(void)
{
  _DAT_004893fe = 0;
  _DAT_004893fc = 0;
}


/* FUN_0045c160 @ 0x0045c160 */

void FUN_0045c160(void)
{
  _atexit(FUN_0045c170);
}


/* FUN_0045c170 @ 0x0045c170 */

void FUN_0045c170(void) { return; }


/* FUN_0045c190 @ 0x0045c190 */

/* NOTE: overlapping globals */

void FUN_0045c190(void)
{
  _DAT_004893fa = 0;
  _DAT_004893f8 = 0;
}


/* FUN_0045c1a0 @ 0x0045c1a0 */

void FUN_0045c1a0(void)
{
  _atexit(FUN_0045c1b0);
}


/* FUN_0045c1b0 @ 0x0045c1b0 */

void FUN_0045c1b0(void) { return; }


/* FUN_0045c1c0 @ 0x0045c1c0 */

ushort * __cdecl FUN_0045c1c0(int *param_1,short param_2,short param_3,ushort *param_4)
{
  LPCVOID pv1;
  int n2;
  short s3;
  short v12;
  int v10;
  int vc;
  int v8;
  int v4;

  if (param_1 != NULL) {
    v10 = *param_1;
    vc = param_1[1];
    v8 = param_1[2];
    v4 = param_1[3];
    if (-1 < param_2) {
      FUN_0045c2a0(' ',(char)param_2,(int)&v10);
    }
    if (-1 < param_3) {
      FUN_0045c2a0('!',(char)param_3,(int)&v10);
    }
    if (param_4 == NULL) {
      pv1 = DAT_00483df4;
      if (DAT_004833cc != NULL) {
        pv1 = DAT_004833cc;
      }
      param_4 = FUN_0046f060(pv1,0x200,1);
    }
    v12 = 0;
    do {
      s3 = 0;
      do {
        n2 = (int)s3;
        s3 = s3 + 1;
        param_4[n2 + v12 * 0x10] =
             CONCAT11(*(char *)((char *)&v10 + (int)v12), /* TODO: v10 byte array access */
                      *(char *)((char *)&v10 + n2)); /* TODO: v10 byte array access */
      } while (s3 < 0x10);
      v12 = v12 + 1;
    } while (v12 < 0x10);
    return param_4;
  }
  return NULL;
}


/* FUN_0045c2a0 @ 0x0045c2a0 */

void __cdecl FUN_0045c2a0(char param_1,char param_2,int param_3)
{
  char c1;
  short s2;
  
  if (param_3 != 0) {
    s2 = 1;
    do {
      c1 = *(char *)(s2 + param_3);
      if ((c1 != '\0') && ((byte)((param_1 * '\x04' + '\x05') - c1) < 4)) {
        *(char *)(s2 + param_3) = c1 + (param_1 - param_2) * -4;
      }
      s2 = s2 + 1;
    } while (s2 < 0x10);
  }
  return;
}


/* FUN_0045c300 @ 0x0045c300 */

uint __cdecl
FUN_0045c300(int param_1,int param_2,int param_3,int param_4,void *param_5
            )
{
    /* STUB: 91 lines not yet reconstructed */
    return 0;
}


/* FUN_0045c470 @ 0x0045c470 */

int __cdecl FUN_0045c470(byte *param_1,int param_2,int param_3,short *param_4)
{
  byte b1;
  char c2;
  char c3;
  byte b4;
  uint u5;
  int u6;
  short s7;
  int _edx;
  int _extra_edx;
  byte *pb8;
  ushort u9;
  
  c2 = (char)param_2 - (char)param_3;
  c3 = (char)param_2 * '\x04' + '\x05';
  do {
    b1 = *param_1;
    pb8 = param_1 + 1;
    u5 = b1 - 1;
    switch(b1) {
    case 1:
    case 0x81:
      b4 = param_1[2];
      u6 = (int)(u5 >> 8);
      u5 = CONCAT31(u6,b4);
      pb8 = param_1 + 2;
      if ((byte)(c3 - b4) < 4) {
        b4 = b4 + c2 * -4;
        u5 = CONCAT31(u6,b4);
        *pb8 = b4;
      }
    case 0x21:
    case 0xa1:
      pb8 = pb8 + 1;
      break;
    case 9:
    case 0x89:
      pb8 = param_1 + 3;
      u5 = FUN_0045c470((byte *)((char *)param_4 + (uint)(ushort)param_4[param_1[2] + 7] + *param_4 * 2 + 0xe),
                           param_2,param_3,param_4);
      _edx = _extra_edx;
      break;
    case 0x11:
    case 0x31:
    case 0x90:
    case 0x91:
    case 0xb1:
      b4 = *pb8;
      u9 = (ushort)b4;
      pb8 = param_1 + 2;
      if (7 < b4) {
        _edx = CONCAT22((short)((uint)_edx >> 0x10),(ushort)(b4 >> 3));
        u5 = _edx * 8;
        u9 = (ushort)b4 - (short)u5;
        do {
          if ((byte)(c3 - *pb8) < 4) {
            *pb8 = *pb8 + c2 * -4;
          }
          if ((byte)(c3 - pb8[1]) < 4) {
            pb8[1] = pb8[1] + c2 * -4;
          }
          if ((byte)(c3 - pb8[2]) < 4) {
            pb8[2] = pb8[2] + c2 * -4;
          }
          if ((byte)(c3 - pb8[3]) < 4) {
            pb8[3] = pb8[3] + c2 * -4;
          }
          if ((byte)(c3 - pb8[4]) < 4) {
            pb8[4] = pb8[4] + c2 * -4;
          }
          if ((byte)(c3 - pb8[5]) < 4) {
            pb8[5] = pb8[5] + c2 * -4;
          }
          if ((byte)(c3 - pb8[6]) < 4) {
            pb8[6] = pb8[6] + c2 * -4;
          }
          if ((byte)(c3 - pb8[7]) < 4) {
            pb8[7] = pb8[7] + c2 * -4;
          }
          u5 = u5 & 0xffffff00;
          pb8 = pb8 + 8;
          s7 = (short)_edx + -1;
          _edx = CONCAT22((short)((uint)_edx >> 0x10),s7);
        } while (s7 != 0);
      }
      if (u9 != 0) {
        _edx = (int)(short)u9;
        u5 = _edx - 1;
        switch(u5) {
        case 6:
          b4 = pb8[6];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[6] = b4;
          }
        case 5:
          b4 = pb8[5];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[5] = b4;
          }
        case 4:
          b4 = pb8[4];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[4] = b4;
          }
        case 3:
          b4 = pb8[3];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[3] = b4;
          }
        case 2:
          b4 = pb8[2];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[2] = b4;
          }
        case 1:
          b4 = pb8[1];
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            pb8[1] = b4;
          }
        case 0:
          b4 = *pb8;
          u6 = (int)(u5 >> 8);
          u5 = CONCAT31(u6,b4);
          if ((byte)(c3 - b4) < 4) {
            b4 = b4 + c2 * -4;
            u5 = CONCAT31(u6,b4);
            *pb8 = b4;
          }
        default:
          pb8 = pb8 + _edx;
        }
      }
    }
    param_1 = pb8;
  } while ((b1 & 0x80) == 0);
  return CONCAT31(u5 >> 8,1);
}


/* FUN_0045c7a0 @ 0x0045c7a0 */

int __cdecl
FUN_0045c7a0(int param_1,int param_2,int param_3,int param_4)
{
  int u1;
  
  u1 = FUN_0045c300(param_1,param_2,param_3,param_4,FUN_0045c470);
  return CONCAT31((unsigned int)((uint)u1 >> 8),1);
}


/* FUN_0045c7e0 @ 0x0045c7e0 */

void FUN_0045c7e0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489400,u1,_arg1);
}


/* FUN_0045c830 @ 0x0045c830 */

void FUN_0045c830(void) { return; }


/* FUN_0045c850 @ 0x0045c850 */

/* NOTE: overlapping globals */

void FUN_0045c850(void)
{
  _DAT_0048940e = 0;
  _DAT_0048940c = 0;
}


/* FUN_0045c860 @ 0x0045c860 */

void FUN_0045c860(void)
{
  _atexit(FUN_0045c870);
}


/* FUN_0045c870 @ 0x0045c870 */

void FUN_0045c870(void) { return; }


/* FUN_0045c890 @ 0x0045c890 */

/* NOTE: overlapping globals */

void FUN_0045c890(void)
{
  _DAT_0048940a = 0;
  _DAT_00489408 = 0;
}


/* FUN_0045c8a0 @ 0x0045c8a0 */

void FUN_0045c8a0(void)
{
  _atexit(FUN_0045c8b0);
}


/* FUN_0045c8b0 @ 0x0045c8b0 */

void FUN_0045c8b0(void) { return; }


/* FUN_0045c8c0 @ 0x0045c8c0 */

void FUN_0045c8c0(void) { return; }


/* FUN_0045c8d0 @ 0x0045c8d0 */

void FUN_0045c8d0(void) { return; }


/* FUN_0045c8f0 @ 0x0045c8f0 */

void FUN_0045c8f0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489410,u1,_arg1);
}


/* FUN_0045c940 @ 0x0045c940 */

void FUN_0045c940(void) { return; }


/* FUN_0045c960 @ 0x0045c960 */

/* NOTE: overlapping globals */

void FUN_0045c960(void)
{
  _DAT_0048941e = 0;
  _DAT_0048941c = 0;
}


/* FUN_0045c970 @ 0x0045c970 */

void FUN_0045c970(void)
{
  _atexit(FUN_0045c980);
}


/* FUN_0045c980 @ 0x0045c980 */

void FUN_0045c980(void) { return; }


/* FUN_0045c9a0 @ 0x0045c9a0 */

/* NOTE: overlapping globals */

void FUN_0045c9a0(void)
{
  _DAT_0048941a = 0;
  _DAT_00489418 = 0;
}


/* FUN_0045c9b0 @ 0x0045c9b0 */

void FUN_0045c9b0(void)
{
  _atexit(FUN_0045c9c0);
}


/* FUN_0045c9c0 @ 0x0045c9c0 */

void FUN_0045c9c0(void) { return; }


/* FUN_0045c9e0 @ 0x0045c9e0 */

void FUN_0045c9e0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489420,u1,_arg1);
}


/* FUN_0045ca20 @ 0x0045ca20 */

void FUN_0045ca20(void)
{
  _atexit(FUN_0045ca30);
}


/* FUN_0045ca30 @ 0x0045ca30 */

void FUN_0045ca30(void) { return; }


/* FUN_0045ca50 @ 0x0045ca50 */

/* NOTE: overlapping globals */

void FUN_0045ca50(void)
{
  _DAT_0048942e = 0;
  _DAT_0048942c = 0;
}


/* FUN_0045ca60 @ 0x0045ca60 */

void FUN_0045ca60(void)
{
  _atexit(FUN_0045ca70);
}


/* FUN_0045ca70 @ 0x0045ca70 */

void FUN_0045ca70(void) { return; }


/* FUN_0045ca90 @ 0x0045ca90 */

/* NOTE: overlapping globals */

void FUN_0045ca90(void)
{
  _DAT_0048942a = 0;
  _DAT_00489428 = 0;
}


/* FUN_0045caa0 @ 0x0045caa0 */

void FUN_0045caa0(void)
{
  _atexit(FUN_0045cab0);
}


/* FUN_0045cab0 @ 0x0045cab0 */

void FUN_0045cab0(void) { return; }


/* FUN_0045cad0 @ 0x0045cad0 */

void FUN_0045cad0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489430,u1,_arg1);
}


/* FUN_0045cb10 @ 0x0045cb10 */

void FUN_0045cb10(void)
{
  _atexit(FUN_0045cb20);
}


/* FUN_0045cb20 @ 0x0045cb20 */

void FUN_0045cb20(void) { return; }


/* FUN_0045cb40 @ 0x0045cb40 */

/* NOTE: overlapping globals */

void FUN_0045cb40(void)
{
  _DAT_0048943e = 0;
  _DAT_0048943c = 0;
}


/* FUN_0045cb50 @ 0x0045cb50 */

void FUN_0045cb50(void)
{
  _atexit(FUN_0045cb60);
}


/* FUN_0045cb60 @ 0x0045cb60 */

void FUN_0045cb60(void) { return; }


/* FUN_0045cb80 @ 0x0045cb80 */

/* NOTE: overlapping globals */

void FUN_0045cb80(void)
{
  _DAT_0048943a = 0;
  _DAT_00489438 = 0;
}


/* FUN_0045cb90 @ 0x0045cb90 */

void FUN_0045cb90(void)
{
  _atexit(FUN_0045cba0);
}


/* FUN_0045cba0 @ 0x0045cba0 */

void FUN_0045cba0(void) { return; }


/* FUN_0045cbb0 @ 0x0045cbb0 */

void FUN_0045cbb0(void)
{
  DWORD dwMessageId;
  DWORD dwLanguageId;
  LPCSTR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  LPCSTR v4;
  
  lpBuffer = &v4;
  Arguments = (va_list *)0x0;
  nSize = 0;
  dwLanguageId = 0x400;
  dwMessageId = GetLastError();
  FormatMessageA(0x1100,NULL,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
  MessageBoxA(NULL,v4,s_GetLastError_0048386c,0x40);
  LocalFree(v4);
}


/* FUN_0045cc00 @ 0x0045cc00 */

int __cdecl FUN_0045cc00(int *param_1,int *param_2)
{
  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


/* FUN_0045cc20 @ 0x0045cc20 */

/* NOTE: overlapping globals */

int FUN_0045cc20(int *param_1)
{
    /* STUB: 33 lines not yet reconstructed */
    return 0;
}


/* FUN_0045cd00 @ 0x0045cd00 */

void FUN_0045cd00(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489440,u1,_arg1);
}


/* FUN_0045cd50 @ 0x0045cd50 */

void FUN_0045cd50(void) { return; }


/* FUN_0045cd70 @ 0x0045cd70 */

/* NOTE: overlapping globals */

void FUN_0045cd70(void)
{
  _DAT_0048944e = 0;
  _DAT_0048944c = 0;
}


/* FUN_0045cd80 @ 0x0045cd80 */

void FUN_0045cd80(void)
{
  _atexit(FUN_0045cd90);
}


/* FUN_0045cd90 @ 0x0045cd90 */

void FUN_0045cd90(void) { return; }


/* FUN_0045cdb0 @ 0x0045cdb0 */

/* NOTE: overlapping globals */

void FUN_0045cdb0(void)
{
  _DAT_0048944a = 0;
  _DAT_00489448 = 0;
}


/* FUN_0045cdc0 @ 0x0045cdc0 */

void FUN_0045cdc0(void)
{
  _atexit(FUN_0045cdd0);
}


/* FUN_0045cdd0 @ 0x0045cdd0 */

void FUN_0045cdd0(void) { return; }


/* FUN_0045cdf0 @ 0x0045cdf0 */

void FUN_0045cdf0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489450,u1,_arg1);
}


/* FUN_0045ce30 @ 0x0045ce30 */

void FUN_0045ce30(void)
{
  _atexit(FUN_0045ce40);
}


/* FUN_0045ce40 @ 0x0045ce40 */

void FUN_0045ce40(void) { return; }


/* FUN_0045ce60 @ 0x0045ce60 */

/* NOTE: overlapping globals */

void FUN_0045ce60(void)
{
  _DAT_0048945e = 0;
  _DAT_0048945c = 0;
}


/* FUN_0045ce70 @ 0x0045ce70 */

void FUN_0045ce70(void)
{
  _atexit(FUN_0045ce80);
}


/* FUN_0045ce80 @ 0x0045ce80 */

void FUN_0045ce80(void) { return; }


/* FUN_0045cea0 @ 0x0045cea0 */

/* NOTE: overlapping globals */

void FUN_0045cea0(void)
{
  _DAT_0048945a = 0;
  _DAT_00489458 = 0;
}


/* FUN_0045ceb0 @ 0x0045ceb0 */

void FUN_0045ceb0(void)
{
  _atexit(FUN_0045cec0);
}


/* FUN_0045cec0 @ 0x0045cec0 */

void FUN_0045cec0(void) { return; }


/* FUN_0045cf10 @ 0x0045cf10
 * Struct types: unknown struct >0x2CA bytes (param_1)
 * TODO: offsets 0x2c2 and 0x2c6 don't match any known struct
 */
int * __fastcall FUN_0045cf10(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _seh_state = 0xffffffff;
  _handler = &L_0045cf95;
  *_fs = &_seh_prev;
  FUN_0042cbd0(param_1);
  _seh_state = 0;
  FUN_0040ab70(param_1 + 0x67);          /* byte offset 0x19C into unknown struct */
  *(short *)(param_1 + 0xb0) = 1;       /* byte offset 0x2C0 into unknown struct */
  *param_1 = &PTR_FUN_00477380;         /* vtable */
  param_1[0x66] = 0;                    /* byte offset 0x198 into unknown struct */
  *(int *)((char *)param_1 + 0x2c2) = 0;   /* TODO: unknown offset 0x2C2 on unknown struct */
  *(int *)((char *)param_1 + 0x2c6) = 0;   /* TODO: unknown offset 0x2C6 on unknown struct */
  *_fs = _seh_prev;
  return param_1;
}


/* FUN_0045cfb0 @ 0x0045cfb0 */

void * __thiscall FUN_0045cfb0(void *this,byte param_1)
{
  FUN_0045cfd0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045cfd0 @ 0x0045cfd0 */

void __fastcall FUN_0045cfd0(int *param_1)
{
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;
  
  _seh_prev = *_fs;
  _handler = &L_0045d028;
  *param_1 = &PTR_FUN_00477380;
  *_fs = &_seh_prev;
  _seh_state = 0;
  FUN_0045d01a();
  _seh_state = 0xffffffff;
  FUN_0045d032();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045d01a @ 0x0045d01a */

void FUN_0045d01a(void)
{
  int _ebp;
  
  FUN_0040ac40((int *)(*(int *)(_ebp + -0x10) + 0x19c)); /* SEH helper: outer param_1 + byte offset 0x19C */
}


/* FUN_0045d032 @ 0x0045d032 */

void FUN_0045d032(void)
{
  int _ebp;
  
  FUN_0042cd10(*(int **)(_ebp + -0x10));
}


/* FUN_0045d040 @ 0x0045d040 */

void __fastcall FUN_0045d040(int *param_1)
{
  int u1;
  int n2;
  char c3;

  FUN_0041d780(((UIWidget *)DAT_004897c0)->sub_widgets_a[1],param_1);
  FUN_0041dd40(((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
  ((UIWidget *)((UIWidget *)DAT_004897c0)->sub_widgets_a[1])->type_or_mode = 3;
  if (*(void **)&((UIWidget *)DAT_004897c0)->field_44 != NULL) {
    n2 = 0x45d085;
    FUN_0041d780(*(void **)&((UIWidget *)DAT_004897c0)->field_44,((UIWidget *)DAT_004897c0)->sub_widgets_a[1]);
    c3 = '\0';
    u1 = 0xffffff9c;
    FUN_00401050(&_tmp_42,-100);
    FUN_00401050(&_tmp_41,-100);
    FUN_0041d3a0(*(void **)&((UIWidget *)DAT_004897c0)->field_44,u1,n2,c3);
    FUN_0041dd40(*(void **)&((UIWidget *)DAT_004897c0)->field_44);
    FUN_0041c2a0(*(void **)&((UIWidget *)DAT_004897c0)->field_44,0);
  }
  ((void (*)(void))((void **)(*param_1))[0xdc / 4])(); /* param_1->vtable[55] */
  FUN_0041dd40((void *)param_1[0x66]);
}


/* FUN_0045d140 @ 0x0045d140 */

void __fastcall FUN_0045d140(int *param_1)
{
    /* STUB: 42 lines not yet reconstructed */
    return;
}


/* FUN_0045d360 @ 0x0045d360 */

void __cdecl FUN_0045d360(uint param_1,char param_2)
{
  if (param_2 != '\0') {
    FUN_00461940(DAT_004838c0,param_1);
    return;
  }
  FUN_00461830(DAT_004838c0,param_1);
}


/* FUN_0045d380 @ 0x0045d380 */

void __cdecl FUN_0045d380(int param_1,short param_2,char param_3,char param_4)
{
    /* STUB: 25 lines not yet reconstructed */
    return;
}


/* FUN_0045d410 @ 0x0045d410 */

void __cdecl FUN_0045d410(int param_1,char param_2,char param_3)
{
  short s1;
  
  if (param_1 != 0) {
    s1 = 0;
    do {
      FUN_0045d380(param_1,*(short *)(param_1 + 8 + s1 * 2),param_2,param_3);
      if (param_2 != '\0') {
        FUN_004564c0();
      }
      s1 = s1 + 1;
    } while (s1 < 8);
  }
  return;
}


/* FUN_0045d460 @ 0x0045d460 */

void __cdecl FUN_0045d460(uint param_1,char param_2)
{
    /* STUB: 25 lines not yet reconstructed */
    return;
}


/* FUN_0045d510 @ 0x0045d510 */

void __cdecl FUN_0045d510(uint param_1,char param_2)
{
  ResourceRecord *rec;
  ushort *pu1;
  int n2;
  short s3;

  rec = (ResourceRecord *)FUN_004608a0(DAT_004838c0,(byte)param_1);
  if (rec != NULL) {
    if (rec->field_16 == 0x74726170) { /* resource tag == "part" */
      FUN_0045d460(param_1,param_2);
      return;
    }
    if (rec->field_16 != 0x74736c63) { /* resource tag != "cls\0" */
      FUN_0045d360(param_1,param_2);
      return;
    }
    pu1 = FUN_0040f040(DAT_004838c0,param_1);
    if (pu1 != NULL) {
      s3 = 1;
      if (0 < (short)*pu1) {
        do {
          n2 = (int)s3;
          s3 = s3 + 1;
          FUN_0045d510(*(uint *)(pu1 + n2 * 2 + -1),param_2);
        } while (s3 <= (short)*pu1);
      }
      FUN_0040f070(DAT_004838c0,param_1,(uint)pu1);
    }
  }
  return;
}


/* FUN_0045d5d0 @ 0x0045d5d0 */

void FUN_0045d5d0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489460,u1,_arg1);
}


/* FUN_0045d620 @ 0x0045d620 */

void FUN_0045d620(void) { return; }


/* FUN_0045d640 @ 0x0045d640 */

/* NOTE: overlapping globals */

void FUN_0045d640(void)
{
  _DAT_0048946e = 0;
  _DAT_0048946c = 0;
}


/* FUN_0045d650 @ 0x0045d650 */

void FUN_0045d650(void)
{
  _atexit(FUN_0045d660);
}


/* FUN_0045d660 @ 0x0045d660 */

void FUN_0045d660(void) { return; }


/* FUN_0045d680 @ 0x0045d680 */

/* NOTE: overlapping globals */

void FUN_0045d680(void)
{
  _DAT_0048946a = 0;
  _DAT_00489468 = 0;
}


/* FUN_0045d690 @ 0x0045d690 */

void FUN_0045d690(void)
{
  _atexit(FUN_0045d6a0);
}


/* FUN_0045d6a0 @ 0x0045d6a0 */

void FUN_0045d6a0(void) { return; }


/* FUN_0045d6b0 @ 0x0045d6b0 */

void __cdecl FUN_0045d6b0(ResourceRecord *rec)
{
  int n2;
  short s3;

  s3 = 0;
  if (rec != NULL) {
    rec->entry_count = 0;
    rec->field_02 = 0xff;
    rec->field_0e = 0;
    rec->field_04 = 0xff;
    rec->field_12 = 0;
    rec->mode_flags = 0;
    rec->field_16 = 0;
    rec->field_22 = 0;
    rec->field_1a = 0;
    rec->data_block_ptr = 0;
    rec->active_flag = 1;
    do {
      n2 = (int)s3;
      s3 = s3 + 1;
      rec->entries[n2].field_00 = 0;
      rec->entries[n2].field_02 = 0;
      *(int *)&rec->entries[n2].field_04 = 0;
      *(int *)&rec->entries[n2].field_08 = 0;
      rec->entries[n2].field_0c = 0;
    } while (s3 < 6);
    rec->field_06 = 0;
    rec->field_08 = 0;
  }
  return;
}


/* FUN_0045d720 @ 0x0045d720 */

/* NOTE: Removing unreachable block (ram,0x0045d746) */

short __cdecl FUN_0045d720(ResourceRecord *rec,ushort param_2)
{
  if (rec != NULL) {
    if ((ushort)rec->mode_flags != param_2) {
      rec->mode_flags = 4;
      if ((param_2 & 0xff) < 5) {
        *(ushort *)&rec->mode_flags = param_2 & 0xff;
      }
      if ((0 < rec->mode_flags) && ((param_2 & 0x4000) != 0)) {
        *(ushort *)&rec->mode_flags = (ushort)rec->mode_flags | 0x4000;
      }
    }
    return rec->mode_flags;
  }
  return 0xffff;
}


/* FUN_0045d780 @ 0x0045d780 */

short __cdecl FUN_0045d780(short *param_1,short param_2)
{
  if (param_1 == NULL) {
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


/* FUN_0045d7d0 @ 0x0045d7d0 */

void __cdecl FUN_0045d7d0(short *param_1)
{
  int n1;
  
  n1 = (int)*param_1;
  if (DAT_0047fc80 != 0) {
    param_1[3] = (ushort)((uint)(param_1[1] * n1) >> 8) & 0xff;
    param_1[4] = (ushort)((uint)(param_1[2] * n1) >> 8) & 0xff;
    return;
  }
  param_1[4] = (ushort)((uint)(param_1[1] * n1) >> 8) & 0xff;
  param_1[3] = (ushort)((uint)(param_1[2] * n1) >> 8) & 0xff;
}


/* FUN_0045d830 @ 0x0045d830 */

int __cdecl FUN_0045d830(short *param_1,short param_2,short param_3)
{
  bool b1;
  
  b1 = false;
  if (param_1 == NULL) {
    return 0xffffffff;
  }
  if (param_1[1] == param_2) {
    b1 = true;
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
    if (b1) goto L_0045d8bd;
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
L_0045d8bd:
  return *(int *)(param_1 + 1);
}


/* FUN_0045d8e0 @ 0x0045d8e0 */

uint __cdecl FUN_0045d8e0(ResourceRecord *rec)
{
  ResourceDataBlock *blk;
  int _eax;
  short u3;
  int n2;

  u3 = (short)((uint)_eax >> 0x10);
  if (rec == NULL) {
    return CONCAT22(u3,0xffff);
  }
  blk = (ResourceDataBlock *)rec->data_block_ptr;
  if (blk == NULL) {
    return CONCAT22(u3,0xfffe);
  }
  if (blk->byte_data_ptr == NULL) {
    return CONCAT22(u3,0xfffd);
  }
  n2 = (rec->field_16 - rec->field_1a) / 0x73e;
  if (blk->data_limit <= n2) {
    n2 = blk->data_limit + -1;
  }
  return CONCAT22((short)((uint)n2 >> 0x10),(ushort)*((byte *)blk->byte_data_ptr + n2));
}


/* FUN_0045d930 @ 0x0045d930 */

bool __cdecl FUN_0045d930(ResourceRecord *rec)
{
  if (rec == NULL) {
    return false;
  }
  return rec->active_flag == 0;
}


/* FUN_0045d950 @ 0x0045d950 */

uint __cdecl FUN_0045d950(ResourceRecord *rec)
{
  if (rec == NULL) {
    return 0xffff;
  }
  return (((ushort)rec->mode_flags & 0x2000) == 0) - 1 & 0xfffffffb;
}


/* FUN_0045d990 @ 0x0045d990 */

void FUN_0045d990(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489470,u1,_arg1);
}


/* FUN_0045d9e0 @ 0x0045d9e0 */

void FUN_0045d9e0(void) { return; }


/* FUN_0045da00 @ 0x0045da00 */

/* NOTE: overlapping globals */

void FUN_0045da00(void)
{
  _DAT_0048947e = 0;
  _DAT_0048947c = 0;
}


/* FUN_0045da10 @ 0x0045da10 */

void FUN_0045da10(void)
{
  _atexit(FUN_0045da20);
}


/* FUN_0045da20 @ 0x0045da20 */

void FUN_0045da20(void) { return; }


/* FUN_0045da40 @ 0x0045da40 */

/* NOTE: overlapping globals */

void FUN_0045da40(void)
{
  _DAT_0048947a = 0;
  _DAT_00489478 = 0;
}


/* FUN_0045da50 @ 0x0045da50 */

void FUN_0045da50(void)
{
  _atexit(FUN_0045da60);
}


/* FUN_0045da60 @ 0x0045da60 */

void FUN_0045da60(void) { return; }


/* FUN_0045da70 @ 0x0045da70 */

void __thiscall FUN_0045da70(void *this,int param_1)
{
    /* STUB: 13 lines not yet reconstructed */
    return;
}


/* FUN_0045dad0 @ 0x0045dad0 */

void __fastcall FUN_0045dad0(int param_1)
{
  FUN_0045daf0(param_1);
  *(int *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = 0;
}


/* FUN_0045daf0 @ 0x0045daf0 */

int __fastcall FUN_0045daf0(int param_1)
{
    /* STUB: 9 lines not yet reconstructed */
    return 0;
}


/* FUN_0045db40 @ 0x0045db40 */

void FUN_0045db40(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489480,u1,_arg1);
}


/* FUN_0045db90 @ 0x0045db90 */

void FUN_0045db90(void) { return; }


/* FUN_0045dbb0 @ 0x0045dbb0 */

/* NOTE: overlapping globals */

void FUN_0045dbb0(void)
{
  _DAT_0048948e = 0;
  _DAT_0048948c = 0;
}


/* FUN_0045dbc0 @ 0x0045dbc0 */

void FUN_0045dbc0(void)
{
  _atexit(FUN_0045dbd0);
}


/* FUN_0045dbd0 @ 0x0045dbd0 */

void FUN_0045dbd0(void) { return; }


/* FUN_0045dbf0 @ 0x0045dbf0 */

/* NOTE: overlapping globals */

void FUN_0045dbf0(void)
{
  _DAT_0048948a = 0;
  _DAT_00489488 = 0;
}


/* FUN_0045dc00 @ 0x0045dc00 */

void FUN_0045dc00(void)
{
  _atexit(FUN_0045dc10);
}


/* FUN_0045dc10 @ 0x0045dc10 */

void FUN_0045dc10(void) { return; }


/* FUN_0045dc30 @ 0x0045dc30 */

void FUN_0045dc30(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489490,u1,_arg1);
}


/* FUN_0045dc70 @ 0x0045dc70 */

void FUN_0045dc70(void)
{
  _atexit(FUN_0045dc80);
}


/* FUN_0045dc80 @ 0x0045dc80 */

void FUN_0045dc80(void) { return; }


/* FUN_0045dca0 @ 0x0045dca0 */

/* NOTE: overlapping globals */

void FUN_0045dca0(void)
{
  _DAT_0048949e = 0;
  _DAT_0048949c = 0;
}


/* FUN_0045dcb0 @ 0x0045dcb0 */

void FUN_0045dcb0(void)
{
  _atexit(FUN_0045dcc0);
}


/* FUN_0045dcc0 @ 0x0045dcc0 */

void FUN_0045dcc0(void) { return; }


/* FUN_0045dce0 @ 0x0045dce0 */

/* NOTE: overlapping globals */

void FUN_0045dce0(void)
{
  _DAT_0048949a = 0;
  _DAT_00489498 = 0;
}


/* FUN_0045dcf0 @ 0x0045dcf0 */

void FUN_0045dcf0(void)
{
  _atexit(FUN_0045dd00);
}


/* FUN_0045dd00 @ 0x0045dd00 */

void FUN_0045dd00(void) { return; }


/* FUN_0045dd10 @ 0x0045dd10 */

int * __fastcall FUN_0045dd10(int *param_1)
{
  *param_1 = &PTR_FUN_00477490;
  return param_1;
}


/* FUN_0045dd20 @ 0x0045dd20 */

void * __thiscall FUN_0045dd20(void *this,byte param_1)
{
  FUN_0045dd40(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045dd40 @ 0x0045dd40 */

void __fastcall FUN_0045dd40(int *param_1)
{
  *param_1 = &PTR_FUN_00477490;
}


/* FUN_0045dd50 @ 0x0045dd50 */

void FUN_0045dd50(void)
{
    /* STUB: 197 lines not yet reconstructed */
    return;
}


/* FUN_0045e2c4 @ 0x0045e2c4 */

void FUN_0045e2c4(void) { return; }


/* FUN_0045e2cc @ 0x0045e2cc */

void FUN_0045e2cc(void) { return; }


/* FUN_0045e2dc @ 0x0045e2dc */

void FUN_0045e2dc(void) { return; }


/* FUN_0045e2e4 @ 0x0045e2e4 */

void FUN_0045e2e4(void) { return; }


/* FUN_0045e2ec @ 0x0045e2ec */

void FUN_0045e2ec(void) { return; }


/* FUN_0045e2f4 @ 0x0045e2f4 */

void FUN_0045e2f4(void) { return; }


/* FUN_0045e311 @ 0x0045e311 */

void FUN_0045e311(void) { return; }


/* FUN_0045e319 @ 0x0045e319 */

void FUN_0045e319(void) { return; }


/* FUN_0045e321 @ 0x0045e321 */

void FUN_0045e321(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x480));
}


/* FUN_0045e336 @ 0x0045e336 */

void FUN_0045e336(void)
{
  int _ebp;
  
  FUN_0044e840((int *)(_ebp + -0x58));
}


/* FUN_0045e350 @ 0x0045e350 */

void FUN_0045e350(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004894a0,u1,_arg1);
}


/* FUN_0045e3a0 @ 0x0045e3a0 */

void FUN_0045e3a0(void) { return; }


/* FUN_0045e3c0 @ 0x0045e3c0 */

/* NOTE: overlapping globals */

void FUN_0045e3c0(void)
{
  _DAT_004894ae = 0;
  _DAT_004894ac = 0;
}


/* FUN_0045e3d0 @ 0x0045e3d0 */

void FUN_0045e3d0(void)
{
  _atexit(FUN_0045e3e0);
}


/* FUN_0045e3e0 @ 0x0045e3e0 */

void FUN_0045e3e0(void) { return; }


/* FUN_0045e400 @ 0x0045e400 */

/* NOTE: overlapping globals */

void FUN_0045e400(void)
{
  _DAT_004894aa = 0;
  _DAT_004894a8 = 0;
}


/* FUN_0045e410 @ 0x0045e410 */

void FUN_0045e410(void)
{
  _atexit(FUN_0045e420);
}


/* FUN_0045e420 @ 0x0045e420 */

void FUN_0045e420(void) { return; }


/* FUN_0045e430 @ 0x0045e430 */

void * __thiscall
FUN_0045e430(SoundPlayer *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
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
  _handler = &L_0045e4d1;
  *_fs = &_seh_prev;
  FUN_0042bc70(this,param_1,param_2,param_3,param_4,param_5);
  _seh_state = 0;
  *(void ***)this = &PTR_FUN_004774c0;
  this->sequence_data[55] = 0;
  this->sequence_data[56] = 1;
  FUN_0040e270(DAT_004897c0,0xe);
  n1 = DAT_004896b0;
  ((TimerState *)DAT_004896b0)->flag_28 = 1;
  dw2 = GetTickCount();
  ((TimerState *)n1)->tick_a = dw2;
  ((TimerState *)n1)->tick_b = dw2;
  ((TimerState *)DAT_004896b0)->flag_29 = 1;
  *_fs = _seh_prev;
  return this;
}


/* FUN_0045e4f0 @ 0x0045e4f0 */

void * __thiscall FUN_0045e4f0(void *this,byte param_1)
{
  FUN_0045e510(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045e510 @ 0x0045e510 */

void __fastcall FUN_0045e510(GameWidget *param_1)
{
  int n1;
  DWORD dw2;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  _seh_prev = *_fs;
  _handler = &L_0045e59e;
  param_1->vtable = &PTR_FUN_004774c0;
  *_fs = &_seh_prev;
  _seh_state = 0;
  if (param_1->object_ptr != NULL) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  n1 = DAT_004896b0;
  if (*(char *)&param_1->scrollbar_ref != '\0') {
    ((TimerState *)DAT_004896b0)->flag_28 = 0;
    dw2 = GetTickCount();
    ((TimerState *)n1)->tick_a = dw2;
    ((TimerState *)n1)->tick_b = dw2;
  }
  _seh_state = 0xffffffff;
  ((TimerState *)DAT_004896b0)->flag_29 = 0;
  FUN_0045e5a8();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045e5a8 @ 0x0045e5a8 */

void FUN_0045e5a8(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_0045e5b0 @ 0x0045e5b0 */

void __fastcall FUN_0045e5b0(GameWidget *param_1)
{
  if (param_1->object_ptr != NULL) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  FUN_0042bec0(param_1);
}


/* FUN_0045e7cc @ 0x0045e7cc */

void FUN_0045e7cc(void) { return; }


/* FUN_0045e91f @ 0x0045e91f */

void FUN_0045e91f(void) { return; }


/* FUN_0045e970 @ 0x0045e970 */

void __fastcall FUN_0045e970(GameWidget *param_1)
{
  int n1;
  DWORD dw2;

  n1 = ((UIWidget *)DAT_004897c0)->sub_widgets_a[3];
  ((GameBoard *)n1)->is_timed = 1;                       /* GameBoard +0x174 */
  FUN_0041dad0(((GameBoard *)n1)->reward_obj_d,1,'\0');   /* GameBoard +0x160 */
  n1 = DAT_004896b0;
  ((TimerState *)DAT_004896b0)->flag_27 = 0;
  dw2 = GetTickCount();
  ((TimerState *)n1)->tick_a = dw2;
  ((TimerState *)n1)->tick_b = dw2;
  if (param_1->object_ptr != NULL) {
    ((void (*)(void))**(void ***)&param_1->object_ptr)();
    param_1->object_ptr = 0;
  }
  FUN_0042c3f0(param_1);
}


/* FUN_0045ecd0 @ 0x0045ecd0 */

void FUN_0045ecd0(void)
{
    /* STUB: 35 lines not yet reconstructed */
    return;
}


/* FUN_0045eda0 @ 0x0045eda0 */

void FUN_0045eda0(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_004896b8,u1,_arg1);
}


/* FUN_0045edf0 @ 0x0045edf0 */

void FUN_0045edf0(void) { return; }


/* FUN_0045ee10 @ 0x0045ee10 */

/* NOTE: overlapping globals */

void FUN_0045ee10(void)
{
  _DAT_00489ad2 = 0;
  _DAT_00489ad0 = 0;
}


/* FUN_0045ee20 @ 0x0045ee20 */

void FUN_0045ee20(void)
{
  _atexit(FUN_0045ee30);
}


/* FUN_0045ee30 @ 0x0045ee30 */

void FUN_0045ee30(void) { return; }


/* FUN_0045ee50 @ 0x0045ee50 */

/* NOTE: overlapping globals */

void FUN_0045ee50(void)
{
  _DAT_00489ace = 0;
  _DAT_00489acc = 0;
}


/* FUN_0045ee60 @ 0x0045ee60 */

void FUN_0045ee60(void)
{
  _atexit(FUN_0045ee70);
}


/* FUN_0045ee70 @ 0x0045ee70 */

void FUN_0045ee70(void) { return; }


/* FUN_0045ee90 @ 0x0045ee90 */

void FUN_0045ee90(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489ad8,u1,_arg1);
}


/* FUN_0045eed0 @ 0x0045eed0 */

void FUN_0045eed0(void)
{
  _atexit(FUN_0045eee0);
}


/* FUN_0045eee0 @ 0x0045eee0 */

void FUN_0045eee0(void) { return; }


/* FUN_0045ef00 @ 0x0045ef00 */

/* NOTE: overlapping globals */

void FUN_0045ef00(void)
{
  _DAT_00489ae6 = 0;
  _DAT_00489ae4 = 0;
}


/* FUN_0045ef10 @ 0x0045ef10 */

void FUN_0045ef10(void)
{
  _atexit(FUN_0045ef20);
}


/* FUN_0045ef20 @ 0x0045ef20 */

void FUN_0045ef20(void) { return; }


/* FUN_0045ef40 @ 0x0045ef40 */

/* NOTE: overlapping globals */

void FUN_0045ef40(void)
{
  _DAT_00489ae2 = 0;
  _DAT_00489ae0 = 0;
}


/* FUN_0045ef50 @ 0x0045ef50 */

void FUN_0045ef50(void)
{
  _atexit(FUN_0045ef60);
}


/* FUN_0045ef60 @ 0x0045ef60 */

void FUN_0045ef60(void) { return; }


/* FUN_0045ef70 @ 0x0045ef70 */

short * __cdecl FUN_0045ef70(int *param_1)
{
    /* STUB: 10 lines not yet reconstructed */
    return 0;
}


/* FUN_0045efd0 @ 0x0045efd0 */

char __cdecl FUN_0045efd0(int *param_1,char param_2)
{
    /* STUB: 58 lines not yet reconstructed */
    return 0;
}


/* FUN_0045f100 @ 0x0045f100 */

char __cdecl FUN_0045f100(int param_1,char param_2)
{
  char u1;
  int *pn2;
  
  u1 = 0;
  pn2 = (int *)FUN_0043a6b0(DAT_004838c0,param_1);
  if (pn2 != NULL) {
    u1 = FUN_0045efd0(pn2,param_2);
    FUN_0043a700(DAT_004838c0,param_1,pn2);
  }
  return u1;
}


/* FUN_0045f160 @ 0x0045f160 */

void FUN_0045f160(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489ae8,u1,_arg1);
}


/* FUN_0045f1b0 @ 0x0045f1b0 */

void FUN_0045f1b0(void) { return; }


/* FUN_0045f1d0 @ 0x0045f1d0 */

/* NOTE: overlapping globals */

void FUN_0045f1d0(void)
{
  _DAT_00489af6 = 0;
  _DAT_00489af4 = 0;
}


/* FUN_0045f1e0 @ 0x0045f1e0 */

void FUN_0045f1e0(void)
{
  _atexit(FUN_0045f1f0);
}


/* FUN_0045f1f0 @ 0x0045f1f0 */

void FUN_0045f1f0(void) { return; }


/* FUN_0045f210 @ 0x0045f210 */

/* NOTE: overlapping globals */

void FUN_0045f210(void)
{
  _DAT_00489af2 = 0;
  _DAT_00489af0 = 0;
}


/* FUN_0045f220 @ 0x0045f220 */

void FUN_0045f220(void)
{
  _atexit(FUN_0045f230);
}


/* FUN_0045f230 @ 0x0045f230 */

void FUN_0045f230(void) { return; }


/* FUN_0045f250 @ 0x0045f250 */

void FUN_0045f250(void)
{
  int u1;
  int _arg1;
  
  u1 = 0;
  FUN_00401050(&_tmp_44,0);
  FUN_00401050(&_tmp_43,0);
  FUN_00401060(&DAT_00489b00,u1,_arg1);
}


/* FUN_0045f290 @ 0x0045f290 */

void FUN_0045f290(void)
{
  _atexit(FUN_0045f2a0);
}


/* FUN_0045f2a0 @ 0x0045f2a0 */

void FUN_0045f2a0(void) { return; }


/* FUN_0045f2c0 @ 0x0045f2c0 */

/* NOTE: overlapping globals */

void FUN_0045f2c0(void)
{
  _DAT_00489b12 = 0;
  _DAT_00489b10 = 0;
}


/* FUN_0045f2d0 @ 0x0045f2d0 */

void FUN_0045f2d0(void)
{
  _atexit(FUN_0045f2e0);
}


/* FUN_0045f2e0 @ 0x0045f2e0 */

void FUN_0045f2e0(void) { return; }


/* FUN_0045f300 @ 0x0045f300 */

/* NOTE: overlapping globals */

void FUN_0045f300(void)
{
  _DAT_00489b0e = 0;
  _DAT_00489b0c = 0;
}


/* FUN_0045f310 @ 0x0045f310 */

void FUN_0045f310(void)
{
  _atexit(FUN_0045f320);
}


/* FUN_0045f320 @ 0x0045f320 */

void FUN_0045f320(void) { return; }


/* FUN_0045f6fa @ 0x0045f6fa */

void FUN_0045f6fa(void) { return; }


/* FUN_0045f702 @ 0x0045f702 */

void FUN_0045f702(void) { return; }


/* FUN_0045f70a @ 0x0045f70a */

void FUN_0045f70a(void) { return; }


/* FUN_0045f712 @ 0x0045f712 */

void FUN_0045f712(void) { return; }


/* FUN_0045f71a @ 0x0045f71a */

void FUN_0045f71a(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x878));
}


/* FUN_0045f725 @ 0x0045f725 */

void FUN_0045f725(void)
{
  int _ebp;
  
  FUN_00451f60((int *)(_ebp + -0x46c));
}


/* FUN_0045f73a @ 0x0045f73a */

void FUN_0045f73a(void)
{
  int _ebp;
  
  FUN_0044e840((int *)(_ebp + -0x60));
}


/* FUN_0045f750 @ 0x0045f750 */

void * __thiscall
FUN_0045f750(void *this,short param_1,short param_2,short param_3,int param_4,void *param_5)
{
    /* STUB: 138 lines not yet reconstructed */
    return 0;
}


/* FUN_0045fb91 @ 0x0045fb91 */

void FUN_0045fb91(void) { return; }


/* FUN_0045fb99 @ 0x0045fb99 */

void FUN_0045fb99(void) { return; }


/* FUN_0045fbc0 @ 0x0045fbc0 */

void * __thiscall FUN_0045fbc0(void *this,byte param_1)
{
  FUN_0045fbe0(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


/* FUN_0045fbe0 @ 0x0045fbe0
 * Struct types: GameWidget-like (param_1) - treats fields at 0x126 and 0x13A as arrays of 5 pointers
 * TODO: This may be a subclass of GameWidget with different layout at 0x126-0x155
 */
void __fastcall FUN_0045fbe0(GameWidget *param_1)
{
  int *pu1;
  int n2;
  DWORD dw3;
  short s4;
  int *_fs;
  int _seh_prev;
  char *_handler;
  int _seh_state;

  /* SEH prolog */
  _seh_prev = *_fs;
  _handler = &L_0045fca7;
  *_fs = &_seh_prev;
  param_1->vtable = &PTR_FUN_004775b0;
  s4 = 0;
  _seh_state = 0;
  do {
    /* stride-4 ptr array at +0x126: [object_ptr, scrollbar_ref, field_12e, field_130+2, cleanup_fn_ptr] */
    pu1 = *(int **)((char *)&param_1->object_ptr + s4 * 4);
    if (pu1 != NULL) {
      ((void (*)(void))((void **)*pu1)[0])();  /* vtable[0] call */
    }
    /* stride-4 ptr array at +0x13A: [slot_ptr_0, _pad13e, name_data_ptr, _pad146, groups_a[0].data_ptr] */
    pu1 = *(int **)((char *)&param_1->slot_ptr_0 + s4 * 4);
    if (pu1 != NULL) {
      ((void (*)(void))((void **)*pu1)[0])();  /* vtable[0] call */
    }
    s4 = s4 + 1;
  } while (s4 < 5);
  /* 0x152 = groups_a[0]._pad04 + 4 (byte +0x08 within GroupEntry) */
  if (*(int **)((char *)&param_1->groups_a[0] + 0x08) != NULL) { /* TODO: hidden ptr field in GroupEntry._pad04 */
    ((void (*)(void))**(void ***)((char *)&param_1->groups_a[0] + 0x08))(); /* vtable[0] call */
    *(int *)((char *)&param_1->groups_a[0] + 0x08) = 0;
  }
  /* 0x14E = groups_a[0]._pad04 (byte +0x04 within GroupEntry) */
  if (*(int **)((char *)&param_1->groups_a[0] + 0x04) != NULL) { /* TODO: hidden ptr field in GroupEntry._pad04 */
    ((void (*)(void))**(void ***)((char *)&param_1->groups_a[0] + 0x04))(); /* vtable[0] call */
  }
  n2 = DAT_004896b0;
  ((TimerState *)DAT_004896b0)->flag_28 = 0;
  dw3 = GetTickCount();
  ((TimerState *)n2)->tick_a = dw3;
  ((TimerState *)n2)->tick_b = dw3;
  _seh_state = 0xffffffff;
  ((TimerState *)DAT_004896b0)->flag_2c = 0;
  FUN_0045fcb1();
  /* SEH epilog */
  *_fs = _seh_prev;
}


/* FUN_0045fcb1 @ 0x0045fcb1 */

void FUN_0045fcb1(void)
{
  int _ebp;
  
  FUN_0042be10(*(int **)(_ebp + -0x10));
}


/* FUN_0045fe2d @ 0x0045fe2d */

void FUN_0045fe2d(void) { return; }


/* FUN_0045fe99 @ 0x0045fe99 */

void FUN_0045fe99(void)
{
  FUN_004012a0();
}


/* FUN_0045feb0 @ 0x0045feb0 */

/* Byte-swaps (endian conversion) for binary resource data.
 * Header shorts at +0x08..+0x10, then sub-entries at +0x1C with stride 0x0E.
 */
void __cdecl FUN_0045feb0(char *data,char param_2)
{
  int n1;
  short u2;
  ushort u3;
  short u4;
  int *pu5;
  short s6;

  /* swap header short pair at +0x08 and +0x0A */
  u2 = *(short *)(data + 0x08);
  *(uint *)(data + 0x08) =
       CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                CONCAT11((char)*(short *)(data + 0x0A),
                         (char)((ushort)*(short *)(data + 0x0A) >> 8)));
  if (param_2 == '\0') {
    /* swap header shorts at +0x0C, +0x0E, +0x10 */
    u2 = *(short *)(data + 0x0C);
    *(short *)(data + 0x0C) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(data + 0x0E);
    *(short *)(data + 0x0E) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(data + 0x10);
    *(short *)(data + 0x10) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  s6 = 0;
  u3 = *(ushort *)(data + 0x0E);  /* sub-entry count */
  if (u3 != 0) {
    do {
      /* sub-entry at +0x1C + s6 * 0x0E: swap first 4 bytes (two shorts) */
      pu5 = (int *)(data + 0x1C + s6 * 0x0E);
      n1 = (int)data + s6 * 0x0E;
      *pu5 = CONCAT22(CONCAT11((char)*(short *)pu5,
                                  (char)((ushort)*(short *)pu5 >> 8)),
                         CONCAT11((char)*(short *)((char *)pu5 + 2),
                                  (char)((ushort)*(short *)((char *)pu5 + 2) >> 8)));
      /* sub-entry bytes at +0x20 and +0x22 relative to data+s6*0x0E */
      pu5 = (int *)(n1 + 0x20);
      u2 = *(short *)pu5;
      u4 = *(short *)(n1 + 0x22);
      *pu5 = CONCAT22(CONCAT11((char)u2,(char)((ushort)u2 >> 8)),
                         CONCAT11((char)u4,(char)((ushort)u4 >> 8)));
      s6 = s6 + 1;
    } while ((int)s6 < (int)(uint)u3);
  }
  if (param_2 != '\0') {
    /* swap header shorts at +0x0C, +0x0E, +0x10 */
    u2 = *(short *)(data + 0x0C);
    *(short *)(data + 0x0C) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(data + 0x0E);
    *(short *)(data + 0x0E) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
    u2 = *(short *)(data + 0x10);
    *(short *)(data + 0x10) = CONCAT11((char)u2,(char)((ushort)u2 >> 8));
  }
  return;
}


/* FUN_0045ffc0 @ 0x0045ffc0
 * Struct types: unknown struct ~0x3E bytes (param_1)
 * TODO: byte offsets 0x26, 0x2a, 0x3a suggest UIElement-like but int-array indexing doesn't match
 */
int * __fastcall FUN_0045ffc0(int *param_1)
{
  *param_1 = &PTR_FUN_0047771c;
  param_1[2] = 0;
  param_1[3] = 0;
  *(char *)(param_1 + 9) = 0;
  ((UIElement *)param_1)->pos_y = 0;  /* UIElement +0x2A */
  ((UIElement *)param_1)->pos_x = 0;  /* UIElement +0x26 */
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  ((UIElement *)param_1)->parent_ptr = 0;  /* UIElement +0x3A */
  return param_1;
}


/* FUN_0045fff0 @ 0x0045fff0 */

void * __thiscall FUN_0045fff0(void *this,byte param_1)
{
  FUN_00460010(this);
  if ((param_1 & 1) != 0) {
    FUN_0046c410((uint)this);
  }
  return this;
}


