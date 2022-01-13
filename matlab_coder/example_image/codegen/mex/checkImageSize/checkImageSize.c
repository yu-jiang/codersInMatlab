/*
 * checkImageSize.c
 *
 * Code generation for function 'checkImageSize'
 *
 */

/* Include files */
#include "checkImageSize.h"
#include "checkImageSize_data.h"
#include "checkImageSize_emxutil.h"
#include "checkImageSize_mexutil.h"
#include "checkImageSize_types.h"
#include "fileManager.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "libmwjpegreader.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3,     /* lineNo */
  "checkImageSize",                    /* fcnName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 5,   /* lineNo */
  "checkImageSize",                    /* fcnName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 7,   /* lineNo */
  "checkImageSize",                    /* fcnName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 9,   /* lineNo */
  "checkImageSize",                    /* fcnName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 10,  /* lineNo */
  "checkImageSize",                    /* fcnName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 30,  /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 89,  /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 105, /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 149, /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 51,  /* lineNo */
  "fopen",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fopen.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 35,  /* lineNo */
  "fileManager",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\private\\fileManager.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 15,  /* lineNo */
  "fclose",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fclose.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 22,  /* lineNo */
  "fileManager",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\private\\fileManager.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 170, /* lineNo */
  "fileclose",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\private\\fileManager.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 99,  /* lineNo */
  17,                                  /* colNo */
  "fileopen",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\private\\fileManager.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 64,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 46,  /* lineNo */
  5,                                   /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 57,/* lineNo */
  17,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 59,/* lineNo */
  13,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 62,/* lineNo */
  13,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 65,/* lineNo */
  13,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 118,/* lineNo */
  13,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 120,/* lineNo */
  9,                                   /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 125,/* lineNo */
  9,                                   /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 100,   /* lineNo */
  37,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 98,  /* lineNo */
  37,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  34,                                  /* colNo */
  "a",                                 /* aName */
  "checkImageSize",                    /* fName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 32,/* lineNo */
  18,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 100,/* lineNo */
  26,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 98,/* lineNo */
  26,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 98,/* lineNo */
  5,                                   /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 1, /* lineNo */
  10,                                  /* colNo */
  "checkImageSize",                    /* fName */
  "C:\\git\\worklog\\codegenjunk\\checkImageSize.m"/* pName */
};

static emlrtRSInfo p_emlrtRSI = { 64,  /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 99,  /* lineNo */
  "fileopen",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\private\\fileManager.m"/* pathName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void checkImageSize(const emlrtStack *sp, const emxArray_char_T *filepath)
{
  static const int32_T iv[2] = { 1, 5 };

  static const int32_T iv1[2] = { 1, 10 };

  static const int32_T iv2[2] = { 1, 7 };

  static const int32_T iv3[2] = { 1, 3 };

  static const int32_T iv4[2] = { 1, 7 };

  static const int32_T iv5[2] = { 1, 2 };

  static const char_T filename[10] = { 'm', 'y', 'f', 'i', 'l', 'e', '.', 'c',
    's', 'v' };

  static const char_T b_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T u[5] = { 'f', 'o', 'p', 'e', 'n' };

  static const char_T c_u[3] = { '%', 'd', ',' };

  static const char_T e_u[2] = { '\\', 'n' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *fname_tmp;
  emxArray_int8_T *b_out;
  emxArray_uint8_T *out;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T outDimsInit[3];
  real_T outDims_data[3];
  real_T fileID;
  int32_T i;
  int32_T loop_ub;
  int32_T outNumDims;
  char_T libjpegWarnBuffer[200];
  int8_T colorSpaceStatus;
  int8_T errWarnType;
  int8_T fileStatus;
  int8_T libjpegReadDone;
  uint8_T d_u;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_char_T(sp, &fname_tmp, 2, &i_emlrtRTEI, true);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
  i = fname_tmp->size[0] * fname_tmp->size[1];
  fname_tmp->size[0] = 1;
  fname_tmp->size[1] = filepath->size[1] + 1;
  emxEnsureCapacity_char_T(&b_st, fname_tmp, i, &i_emlrtRTEI);
  loop_ub = filepath->size[1];
  for (i = 0; i < loop_ub; i++) {
    fname_tmp->data[i] = filepath->data[i];
  }

  fname_tmp->data[filepath->size[1]] = '\x00';
  for (i = 0; i < 200; i++) {
    libjpegWarnBuffer[i] = ' ';
  }

  jpegreader_getimagesize(&fname_tmp->data[0], &outDimsInit[0], &fileStatus,
    &colorSpaceStatus, &fileID, &libjpegWarnBuffer[0], &errWarnType);
  if (outDimsInit[2] == 3.0) {
    outDims_data[0] = outDimsInit[0];
    outDims_data[1] = outDimsInit[1];
    outDims_data[2] = 3.0;
    outNumDims = 3;
  } else {
    outDims_data[0] = outDimsInit[0];
    outDims_data[1] = outDimsInit[1];
    outNumDims = 2;
  }

  if ((fileStatus == -1) || (colorSpaceStatus == -2) || (colorSpaceStatus == -1)
      || (errWarnType == -1)) {
    if (fileStatus == -1) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "MATLAB:imagesci:imread:codegenFileOpenError",
        "MATLAB:imagesci:imread:codegenFileOpenError", 3, 4, filepath->size[1],
        &filepath->data[0]);
    }

    if (colorSpaceStatus == -2) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "MATLAB:imagesci:jpg:cmykColorSpace",
        "MATLAB:imagesci:jpg:cmykColorSpace", 0);
    }

    if (colorSpaceStatus == -1) {
      emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
        "MATLAB:imagesci:jpg:unsupportedJpegColorSpace",
        "MATLAB:imagesci:jpg:unsupportedJpegColorSpace", 0);
    }

    if (errWarnType == -1) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:imagesci:jpg:unhandledLibraryError",
        "MATLAB:imagesci:jpg:unhandledLibraryError", 5, 6, 8.0, 4, 200,
        libjpegWarnBuffer);
    }
  }

  if (errWarnType == -2) {
    b_st.site = &g_emlrtRSI;
    warning(&b_st, libjpegWarnBuffer);
  }

  emxInit_uint8_T(&st, &out, 3, &l_emlrtRTEI, true);
  if (outNumDims == 3) {
    if (!(outDims_data[0] >= 0.0)) {
      emlrtNonNegativeCheckR2012b(outDims_data[0], &b_emlrtDCI, &st);
    }

    if (!(outDims_data[1] >= 0.0)) {
      emlrtNonNegativeCheckR2012b(outDims_data[1], &b_emlrtDCI, &st);
    }

    i = out->size[0] * out->size[1] * out->size[2];
    out->size[0] = (int32_T)outDims_data[0];
    out->size[1] = (int32_T)outDims_data[1];
    out->size[2] = 3;
    emxEnsureCapacity_uint8_T(&st, out, i, &k_emlrtRTEI);
  } else {
    if (!(outDims_data[0] >= 0.0)) {
      emlrtNonNegativeCheckR2012b(outDims_data[0], &emlrtDCI, &st);
    }

    if (!(outDims_data[1] >= 0.0)) {
      emlrtNonNegativeCheckR2012b(outDims_data[1], &emlrtDCI, &st);
    }

    emxInit_int8_T(&st, &b_out, 2, &m_emlrtRTEI, true);
    i = b_out->size[0] * b_out->size[1];
    b_out->size[0] = (int32_T)outDims_data[0];
    b_out->size[1] = (int32_T)outDims_data[1];
    emxEnsureCapacity_int8_T(&st, b_out, i, &j_emlrtRTEI);
    loop_ub = (int32_T)outDims_data[0] * (int32_T)outDims_data[1];
    for (i = 0; i < loop_ub; i++) {
      b_out->data[i] = 1;
    }

    i = out->size[0] * out->size[1] * out->size[2];
    out->size[0] = b_out->size[0];
    out->size[1] = b_out->size[1];
    out->size[2] = 1;
    emxEnsureCapacity_uint8_T(&st, out, i, &j_emlrtRTEI);
    emxFree_int8_T(&b_out);
  }

  b_st.site = &h_emlrtRSI;
  jpegreader_uint8(&fname_tmp->data[0], &out->data[0], &outDims_data[0], (real_T)
                   outNumDims, &fileStatus, &libjpegReadDone, &fileID,
                   &libjpegWarnBuffer[0], &errWarnType);
  emxFree_char_T(&fname_tmp);
  if ((fileStatus == -1) || (libjpegReadDone == 0) || (errWarnType == -1)) {
    if (fileStatus == -1) {
      emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
        "MATLAB:imagesci:imread:codegenFileOpenError",
        "MATLAB:imagesci:imread:codegenFileOpenError", 3, 4, filepath->size[1],
        &filepath->data[0]);
    }

    if (errWarnType == -1) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
        "MATLAB:imagesci:jpg:unhandledLibraryError",
        "MATLAB:imagesci:jpg:unhandledLibraryError", 5, 6, 8.0, 4, 200,
        libjpegWarnBuffer);
    }

    if (libjpegReadDone != 1) {
      emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
        "MATLAB:imagesci:jpg:unhandledLibraryError",
        "MATLAB:imagesci:jpg:unhandledLibraryError", 5, 6, 8.0, 4, 200,
        libjpegWarnBuffer);
    }
  }

  if (errWarnType == -2) {
    b_st.site = &i_emlrtRSI;
    warning(&b_st, libjpegWarnBuffer);
  }

  /*  This is not working */
  /* a = imread('frame0300.jpg');  % This would work. */
  st.site = &b_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&c_st, 5, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&c_st, 10, m, &filename[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateString1('a');
  emlrtAssign(&c_y, m);
  d_st.site = &q_emlrtRSI;
  fileID = emlrt_marshallIn(&d_st, c_feval(&d_st, y, b_y, c_y, &c_emlrtMCI),
    "<output of feval>");
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
  st.site = &c_emlrtRSI;
  i = out->size[0] * out->size[1] * out->size[2];
  if (1 > i) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &emlrtBCI, &st);
  }

  if (fileID == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:notimplemented_mx",
      "MATLAB:notimplemented_mx", 0);
  }

  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &b_u[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(fileID);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&st, 3, m, &c_u[0]);
  emlrtAssign(&f_y, m);
  g_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  d_u = out->data[0];
  if (out->data[0] > 127) {
    d_u = 127U;
  }

  *(int8_T *)emlrtMxGetData(m) = (int8_T)d_u;
  emlrtAssign(&g_y, m);
  b_st.site = &p_emlrtRSI;
  emlrt_marshallIn(&b_st, feval(&b_st, d_y, e_y, f_y, g_y, &d_emlrtMCI),
                   "<output of feval>");
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
  st.site = &c_emlrtRSI;
  i = out->size[0] * out->size[1] * out->size[2];
  if (2 > i) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i, &emlrtBCI, &st);
  }

  if (fileID == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:notimplemented_mx",
      "MATLAB:notimplemented_mx", 0);
  }

  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &b_u[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(fileID);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&st, 3, m, &c_u[0]);
  emlrtAssign(&f_y, m);
  g_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  d_u = out->data[1];
  if (out->data[1] > 127) {
    d_u = 127U;
  }

  *(int8_T *)emlrtMxGetData(m) = (int8_T)d_u;
  emlrtAssign(&g_y, m);
  b_st.site = &p_emlrtRSI;
  emlrt_marshallIn(&b_st, feval(&b_st, d_y, e_y, f_y, g_y, &d_emlrtMCI),
                   "<output of feval>");
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
  st.site = &c_emlrtRSI;
  i = out->size[0] * out->size[1] * out->size[2];
  if (3 > i) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i, &emlrtBCI, &st);
  }

  if (fileID == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:notimplemented_mx",
      "MATLAB:notimplemented_mx", 0);
  }

  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &b_u[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(fileID);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&st, 3, m, &c_u[0]);
  emlrtAssign(&f_y, m);
  g_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  d_u = out->data[2];
  if (out->data[2] > 127) {
    d_u = 127U;
  }

  emxFree_uint8_T(&out);
  *(int8_T *)emlrtMxGetData(m) = (int8_T)d_u;
  emlrtAssign(&g_y, m);
  b_st.site = &p_emlrtRSI;
  emlrt_marshallIn(&b_st, feval(&b_st, d_y, e_y, f_y, g_y, &d_emlrtMCI),
                   "<output of feval>");
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2U);
  st.site = &d_emlrtRSI;
  if (fileID == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:notimplemented_mx",
      "MATLAB:notimplemented_mx", 0);
  }

  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &b_u[0]);
  emlrtAssign(&h_y, m);
  i_y = NULL;
  m = emlrtCreateDoubleScalar(fileID);
  emlrtAssign(&i_y, m);
  j_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a(&st, 2, m, &e_u[0]);
  emlrtAssign(&j_y, m);
  b_st.site = &p_emlrtRSI;
  emlrt_marshallIn(&b_st, c_feval(&b_st, h_y, i_y, j_y, &d_emlrtMCI),
                   "<output of feval>");
  st.site = &e_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  d_st.site = &n_emlrtRSI;
  cfclose(&d_st, fileID);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (checkImageSize.c) */
