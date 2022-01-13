/*
 * File: fileManager.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  int cfclose(double fid);
  signed char cfopen(const char *cfilename, const char *cpermission);
  void fileManager(double varargin_1, FILE * *f, boolean_T *a);
  void filedata_init(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for fileManager.h
 *
 * [EOF]
 */
