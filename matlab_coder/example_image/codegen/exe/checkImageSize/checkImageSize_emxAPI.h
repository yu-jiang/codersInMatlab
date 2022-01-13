/*
 * File: checkImageSize_emxAPI.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

#ifndef CHECKIMAGESIZE_EMXAPI_H
#define CHECKIMAGESIZE_EMXAPI_H

/* Include Files */
#include "checkImageSize_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern emxArray_char_T *emxCreateND_char_T(int numDimensions, const int *size);
  extern emxArray_char_T *emxCreateWrapperND_char_T(char *data, int
    numDimensions, const int *size);
  extern emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols);
  extern emxArray_char_T *emxCreate_char_T(int rows, int cols);
  extern void emxDestroyArray_char_T(emxArray_char_T *emxArray);
  extern void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for checkImageSize_emxAPI.h
 *
 * [EOF]
 */
