#ifndef GHIDRA_TYPES_H
#define GHIDRA_TYPES_H

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Ghidra primitive type aliases */
typedef unsigned char   byte;
typedef unsigned short  word;
typedef unsigned int    dword;
typedef long double     float10;
typedef long long       longlong;
typedef unsigned long long ulonglong;
typedef unsigned char   uchar;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef unsigned long long undefined8;
typedef unsigned short  ushort;
typedef unsigned char   undefined3;  /* Ghidra 3-byte, treated as 4 */

#ifndef __cplusplus
#ifndef bool
typedef unsigned char   bool;
#endif
#define true 1
#define false 0
#endif

/* Ghidra uses 'code' for function pointer targets */
typedef void code;

#endif /* GHIDRA_TYPES_H */
