/*
 * checkImageSize_initialize.c
 *
 * Code generation for function 'checkImageSize_initialize'
 *
 */

/* Include files */
#include "checkImageSize_initialize.h"
#include "_coder_checkImageSize_mex.h"
#include "checkImageSize_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void checkImageSize_once(void);

/* Function Definitions */
static void checkImageSize_once(void)
{
  mex_InitInfAndNan();

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m", 0U, 1U, 3U,
                  0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "checkImageSize", 0, -1, 271);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 229, -1, 265);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 189, -1, 223);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 35, -1, 170);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 172, 185, 228);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void checkImageSize_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    checkImageSize_once();
  }
}

/* End of code generation (checkImageSize_initialize.c) */
