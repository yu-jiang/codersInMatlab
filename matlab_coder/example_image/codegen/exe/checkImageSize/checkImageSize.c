/*
 * File: checkImageSize.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "checkImageSize.h"
#include "checkImageSize_data.h"
#include "checkImageSize_emxutil.h"
#include "checkImageSize_initialize.h"
#include "checkImageSize_types.h"
#include "fileManager.h"
#include "libmwjpegreader.h"
#include <stdio.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_char_T *filepath
 * Return Type  : void
 */
void checkImageSize(const emxArray_char_T *filepath)
{
  FILE * b_NULL;
  FILE * filestar;
  emxArray_char_T *fname_tmp;
  emxArray_int8_T *b_out;
  emxArray_uint8_T *out;
  double outDimsInit[3];
  double outDims_data[3];
  double libjpegMsgCode;
  int i;
  int loop_ub;
  int outNumDims;
  char libjpegWarnBuffer[200];
  signed char colorSpaceStatus;
  signed char fileStatus;
  signed char fileid;
  signed char libjpegReadDone;
  unsigned char u;
  boolean_T autoflush;
  if (!isInitialized_checkImageSize) {
    checkImageSize_initialize();
  }

  emxInit_char_T(&fname_tmp, 2);
  i = fname_tmp->size[0] * fname_tmp->size[1];
  fname_tmp->size[0] = 1;
  fname_tmp->size[1] = filepath->size[1] + 1;
  emxEnsureCapacity_char_T(fname_tmp, i);
  loop_ub = filepath->size[1];
  for (i = 0; i < loop_ub; i++) {
    fname_tmp->data[i] = filepath->data[i];
  }

  fname_tmp->data[filepath->size[1]] = '\x00';
  for (i = 0; i < 200; i++) {
    libjpegWarnBuffer[i] = ' ';
  }

  jpegreader_getimagesize(&fname_tmp->data[0], &outDimsInit[0], &fileStatus,
    &colorSpaceStatus, &libjpegMsgCode, &libjpegWarnBuffer[0], &fileid);
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

  emxInit_uint8_T(&out, 3);
  emxInit_int8_T(&b_out, 2);
  if ((fileStatus == -1) || (colorSpaceStatus == -2) || (colorSpaceStatus == -1)
      || (fileid == -1)) {
    if (outNumDims == 3) {
      out->size[0] = 0;
      out->size[1] = 0;
      out->size[2] = 0;
    } else {
      out->size[0] = 0;
      out->size[1] = 0;
      out->size[2] = 1;
    }
  } else {
    if (outNumDims == 3) {
      i = out->size[0] * out->size[1] * out->size[2];
      out->size[0] = (int)outDims_data[0];
      out->size[1] = (int)outDims_data[1];
      out->size[2] = 3;
      emxEnsureCapacity_uint8_T(out, i);
    } else {
      i = b_out->size[0] * b_out->size[1];
      b_out->size[0] = (int)outDims_data[0];
      b_out->size[1] = (int)outDims_data[1];
      emxEnsureCapacity_int8_T(b_out, i);
      loop_ub = (int)outDims_data[0] * (int)outDims_data[1];
      for (i = 0; i < loop_ub; i++) {
        b_out->data[i] = 1;
      }

      i = out->size[0] * out->size[1] * out->size[2];
      out->size[0] = b_out->size[0];
      out->size[1] = b_out->size[1];
      out->size[2] = 1;
      emxEnsureCapacity_uint8_T(out, i);
    }

    jpegreader_uint8(&fname_tmp->data[0], &out->data[0], &outDims_data[0],
                     (double)outNumDims, &fileStatus, &libjpegReadDone,
                     &libjpegMsgCode, &libjpegWarnBuffer[0], &fileid);
    if ((fileStatus == -1) || (libjpegReadDone == 0) || (fileid == -1)) {
      if (outNumDims == 3) {
        out->size[0] = 0;
        out->size[1] = 0;
        out->size[2] = 0;
      } else {
        out->size[0] = 0;
        out->size[1] = 0;
        out->size[2] = 1;
      }
    }
  }

  emxFree_char_T(&fname_tmp);
  emxFree_int8_T(&b_out);

  /*  This is not working */
  /* a = imread('frame0300.jpg');  % This would work. */
  fileid = cfopen("myfile.csv", "ab");
  b_NULL = NULL;
  fileManager(fileid, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    u = out->data[0];
    if (out->data[0] > 127) {
      u = 127U;
    }

    fprintf(filestar, "%d,", (signed char)u);
    if (autoflush) {
      fflush(filestar);
    }
  }

  fileManager(fileid, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    u = out->data[1];
    if (out->data[1] > 127) {
      u = 127U;
    }

    fprintf(filestar, "%d,", (signed char)u);
    if (autoflush) {
      fflush(filestar);
    }
  }

  fileManager(fileid, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    u = out->data[2];
    if (out->data[2] > 127) {
      u = 127U;
    }

    fprintf(filestar, "%d,", (signed char)u);
    if (autoflush) {
      fflush(filestar);
    }
  }

  emxFree_uint8_T(&out);
  b_NULL = NULL;
  fileManager(fileid, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    fprintf(filestar, "\n");
    if (autoflush) {
      fflush(filestar);
    }
  }

  cfclose(fileid);
}

/*
 * File trailer for checkImageSize.c
 *
 * [EOF]
 */
