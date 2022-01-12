/*
 * File: _coder_add2_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 11-Jan-2022 23:03:22
 */

#ifndef _CODER_ADD2_API_H
#define _CODER_ADD2_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T add2(real_T a, real_T b);

void add2_api(const mxArray *const prhs[2], const mxArray **plhs);

void add2_atexit(void);

void add2_initialize(void);

void add2_terminate(void);

void add2_xil_shutdown(void);

void add2_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_add2_api.h
 *
 * [EOF]
 */
