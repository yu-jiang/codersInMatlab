/*
 * File: _coder_checkImageSize_api.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

#ifndef _CODER_CHECKIMAGESIZE_API_H
#define _CODER_CHECKIMAGESIZE_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void checkImageSize(emxArray_char_T *filepath);
  void checkImageSize_api(const mxArray * const prhs[1]);
  void checkImageSize_atexit(void);
  void checkImageSize_initialize(void);
  void checkImageSize_terminate(void);
  void checkImageSize_xil_shutdown(void);
  void checkImageSize_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_checkImageSize_api.h
 *
 * [EOF]
 */
