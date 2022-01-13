/*
 * _coder_checkImageSize_api.c
 *
 * Code generation for function '_coder_checkImageSize_api'
 *
 */

/* Include files */
#include "_coder_checkImageSize_api.h"
#include "checkImageSize.h"
#include "checkImageSize_data.h"
#include "checkImageSize_emxutil.h"
#include "checkImageSize_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_checkImageSize_api",         /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *filepath,
  const char_T *identifier, emxArray_char_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *filepath,
  const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(filepath), &thisId, y);
  emlrtDestroyArray(&filepath);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims, &bv[0], iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

void checkImageSize_api(const mxArray * const prhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_char_T *filepath;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_char_T(&st, &filepath, 2, &n_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "filepath", filepath);

  /* Invoke the target function */
  checkImageSize(&st, filepath);
  emxFree_char_T(&filepath);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_checkImageSize_api.c) */
