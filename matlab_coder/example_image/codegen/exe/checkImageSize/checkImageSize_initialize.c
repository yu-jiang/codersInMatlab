/*
 * File: checkImageSize_initialize.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "checkImageSize_initialize.h"
#include "checkImageSize_data.h"
#include "fileManager.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void checkImageSize_initialize(void)
{
  filedata_init();
  isInitialized_checkImageSize = true;
}

/*
 * File trailer for checkImageSize_initialize.c
 *
 * [EOF]
 */
