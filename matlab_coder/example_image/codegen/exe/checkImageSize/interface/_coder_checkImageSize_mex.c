/*
 * File: _coder_checkImageSize_mex.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "_coder_checkImageSize_mex.h"
#include "_coder_checkImageSize_api.h"

/* Function Definitions */
/*
 * Arguments    : int32_T nlhs
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
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

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
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

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_checkImageSize_mex.c
 *
 * [EOF]
 */
