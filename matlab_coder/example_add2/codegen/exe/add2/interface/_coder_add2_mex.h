/*
 * File: _coder_add2_mex.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 11-Jan-2022 23:03:22
 */

#ifndef _CODER_ADD2_MEX_H
#define _CODER_ADD2_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_add2_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[2]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_add2_mex.h
 *
 * [EOF]
 */
