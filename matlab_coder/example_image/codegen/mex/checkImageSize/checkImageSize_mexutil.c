/*
 * checkImageSize_mexutil.c
 *
 * Code generation for function 'checkImageSize_mexutil'
 *
 */

/* Include files */
#include "checkImageSize_mexutil.h"
#include "checkImageSize_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "feval", true, location);
}

/* End of code generation (checkImageSize_mexutil.c) */
