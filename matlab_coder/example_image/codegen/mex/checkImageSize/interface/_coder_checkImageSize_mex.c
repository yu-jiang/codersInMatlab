/*
 * _coder_checkImageSize_mex.c
 *
 * Code generation for function '_coder_checkImageSize_mex'
 *
 */

/* Include files */
#include "_coder_checkImageSize_mex.h"
#include "_coder_checkImageSize_api.h"
#include "checkImageSize_data.h"
#include "checkImageSize_initialize.h"
#include "checkImageSize_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void checkImageSize_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray *prhs
  [1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        14, "checkImageSize");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "checkImageSize");
  }

  /* Call the function. */
  checkImageSize_api(prhs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(&checkImageSize_atexit);

  /* Module initialization. */
  checkImageSize_initialize();

  /* Dispatch the entry-point. */
  checkImageSize_mexFunction(nlhs, nrhs, prhs);

  /* Module termination. */
  checkImageSize_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_checkImageSize_mex.c) */
