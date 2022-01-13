/*
 * File: fileManager.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Nov-2021 15:05:10
 */

/* Include Files */
#include "fileManager.h"
#include <math.h>
#include <stdio.h>

/* Variable Definitions */
static FILE * eml_openfiles[20];
static boolean_T eml_autoflush[20];

/* Function Declarations */
static signed char filedata(void);
static double rt_roundd_snf(double u);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : signed char
 */
static signed char filedata(void)
{
  int k;
  signed char f;
  boolean_T exitg1;
  f = 0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 20)) {
    if (eml_openfiles[k] == NULL) {
      f = (signed char)(k + 1);
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : double fid
 * Return Type  : int
 */
int cfclose(double fid)
{
  FILE * filestar;
  int cst;
  int st;
  signed char b_fileid;
  signed char fileid;
  st = -1;
  fileid = (signed char)rt_roundd_snf(fid);
  if ((fileid < 0) || (fid != fileid)) {
    fileid = -1;
  }

  b_fileid = fileid;
  if (fileid < 0) {
    b_fileid = -1;
  }

  if (b_fileid >= 3) {
    filestar = eml_openfiles[b_fileid - 3];
  } else if (b_fileid == 0) {
    filestar = stdin;
  } else if (b_fileid == 1) {
    filestar = stdout;
  } else if (b_fileid == 2) {
    filestar = stderr;
  } else {
    filestar = NULL;
  }

  if ((filestar != NULL) && (fileid >= 3)) {
    cst = fclose(filestar);
    if (cst == 0) {
      st = 0;
      eml_openfiles[fileid - 3] = NULL;
      eml_autoflush[fileid - 3] = true;
    }
  }

  return st;
}

/*
 * Arguments    : const char *cfilename
 *                const char *cpermission
 * Return Type  : signed char
 */
signed char cfopen(const char *cfilename, const char *cpermission)
{
  FILE * filestar;
  int i;
  signed char fileid;
  signed char j;
  fileid = -1;
  j = filedata();
  if (j >= 1) {
    filestar = fopen(cfilename, cpermission);
    if (filestar != NULL) {
      eml_openfiles[j - 1] = filestar;
      eml_autoflush[j - 1] = true;
      i = j + 2;
      if (j + 2 > 127) {
        i = 127;
      }

      fileid = (signed char)i;
    }
  }

  return fileid;
}

/*
 * Arguments    : double varargin_1
 *                FILE * *f
 *                boolean_T *a
 * Return Type  : void
 */
void fileManager(double varargin_1, FILE * *f, boolean_T *a)
{
  signed char fileid;
  fileid = (signed char)rt_roundd_snf(varargin_1);
  if ((fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    *f = eml_openfiles[fileid - 3];
    *a = eml_autoflush[fileid - 3];
  } else if (fileid == 0) {
    *f = stdin;
    *a = true;
  } else if (fileid == 1) {
    *f = stdout;
    *a = true;
  } else if (fileid == 2) {
    *f = stderr;
    *a = true;
  } else {
    *f = NULL;
    *a = true;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void filedata_init(void)
{
  FILE * a;
  int i;
  a = NULL;
  for (i = 0; i < 20; i++) {
    eml_autoflush[i] = false;
    eml_openfiles[i] = a;
  }
}

/*
 * File trailer for fileManager.c
 *
 * [EOF]
 */
