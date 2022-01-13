/*
 * File: checkImageSize_emxutil.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

#ifndef CHECKIMAGESIZE_EMXUTIL_H
#define CHECKIMAGESIZE_EMXUTIL_H

/* Include Files */
#include "checkImageSize_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel);
  extern void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int oldNumel);
  extern void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel);
  extern void emxFree_char_T(emxArray_char_T **pEmxArray);
  extern void emxFree_int8_T(emxArray_int8_T **pEmxArray);
  extern void emxFree_uint8_T(emxArray_uint8_T **pEmxArray);
  extern void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions);
  extern void emxInit_int8_T(emxArray_int8_T **pEmxArray, int numDimensions);
  extern void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for checkImageSize_emxutil.h
 *
 * [EOF]
 */
