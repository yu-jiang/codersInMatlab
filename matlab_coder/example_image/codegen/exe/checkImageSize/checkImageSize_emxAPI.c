/*
 * File: checkImageSize_emxAPI.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "checkImageSize_emxAPI.h"
#include "checkImageSize_emxutil.h"
#include "checkImageSize_types.h"
#include <stdlib.h>

/* Function Definitions */
/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateND_char_T(int numDimensions, const int *size)
{
  emxArray_char_T *emx;
  int i;
  int numEl;
  emxInit_char_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (char *)calloc((unsigned int)numEl, sizeof(char));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : char *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateWrapperND_char_T(char *data, int numDimensions, const
  int *size)
{
  emxArray_char_T *emx;
  int i;
  int numEl;
  emxInit_char_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : char *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols)
{
  emxArray_char_T *emx;
  emxInit_char_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreate_char_T(int rows, int cols)
{
  emxArray_char_T *emx;
  int numEl;
  emxInit_char_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (char *)calloc((unsigned int)numEl, sizeof(char));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_char_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_char_T(emxArray_char_T *emxArray)
{
  emxFree_char_T(&emxArray);
}

/*
 * Arguments    : emxArray_char_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxInit_char_T(pEmxArray, numDimensions);
}

/*
 * File trailer for checkImageSize_emxAPI.c
 *
 * [EOF]
 */
