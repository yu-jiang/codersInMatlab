/*
 * File: checkImageSize_emxutil.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "checkImageSize_emxutil.h"
#include "checkImageSize_types.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : emxArray_char_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = calloc((unsigned int)i, sizeof(char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_int8_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = calloc((unsigned int)i, sizeof(signed char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(signed char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (signed char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_uint8_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = calloc((unsigned int)i, sizeof(unsigned char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(unsigned char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (unsigned char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_char_T **pEmxArray
 * Return Type  : void
 */
void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int8_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (signed char *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_uint8_T **pEmxArray
 * Return Type  : void
 */
void emxFree_uint8_T(emxArray_uint8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint8_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned char *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint8_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_char_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxArray_char_T *emxArray;
  int i;
  *pEmxArray = (emxArray_char_T *)malloc(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int8_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_int8_T(emxArray_int8_T **pEmxArray, int numDimensions)
{
  emxArray_int8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int8_T *)malloc(sizeof(emxArray_int8_T));
  emxArray = *pEmxArray;
  emxArray->data = (signed char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_uint8_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions)
{
  emxArray_uint8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint8_T *)malloc(sizeof(emxArray_uint8_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * File trailer for checkImageSize_emxutil.c
 *
 * [EOF]
 */
