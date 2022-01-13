/*
 * File: main.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 09:08:11
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "checkImageSize.h"
#include "checkImageSize_emxAPI.h"
#include "checkImageSize_terminate.h"
#include "checkImageSize_types.h"

/* Function Declarations */
static emxArray_char_T *argInit_1xUnbounded_char_T(char * text);
static void main_checkImageSize(char *text);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : emxArray_char_T *
 */
static emxArray_char_T *argInit_1xUnbounded_char_T(char *text) {
  emxArray_char_T *result;
  int length = 0;
  while (1) {
    if (text[length] == 0) {
      break;
    }
    length += 1;
  }
  result = emxCreate_char_T(1, length);
  int idx0;
  for (idx0 = 0; idx0 < 1; idx0++) {
    int idx1;
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      result->data[idx1] = text[idx1];
    }
  }
  return result;
}
/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_checkImageSize(char *text)
{
  emxArray_char_T *filepath;
  filepath = argInit_1xUnbounded_char_T(text);
  /* Initialize function 'checkImageSize' input arguments. */
  /* Initialize function input argument 'filepath'. */
  /* filepath = argInit_1xUnbounded_char_T();

  /* Call the entry-point 'checkImageSize'. */  
  checkImageSize(filepath);
  emxDestroyArray_char_T(filepath);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, char *argv[])
{ 
  printf("Number of inputs %d\n", argc);
  /* The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  char *inputPath = argv[1];
  printf("inputPath: %s\n", inputPath);
  main_checkImageSize(inputPath);

  /* Terminate the application.
     You do not need to do this more than one time. */
  checkImageSize_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
