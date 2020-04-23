/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftThigh_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1338;
  double t1339;
  double t1340;
  double t1341;
  double t1343;
  double t1344;
  double t1345;
  double t1350;
  double t1351;
  double t1352;
  double t1356;
  double t1357;
  double t1358;
  double t1346;
  double t1347;
  double t1348;
  t1338 = Cos(var1[3]);
  t1339 = Sin(var1[2]);
  t1340 = -1.*t1338*t1339;
  t1341 = Cos(var1[2]);
  t1343 = Sin(var1[3]);
  t1344 = -1.*t1341*t1343;
  t1345 = t1340 + t1344;
  t1350 = -1.*t1341*t1338;
  t1351 = t1339*t1343;
  t1352 = t1350 + t1351;
  t1356 = t1341*t1338;
  t1357 = -1.*t1339*t1343;
  t1358 = t1356 + t1357;
  t1346 = var2[2]*t1345;
  t1347 = var2[3]*t1345;
  t1348 = t1346 + t1347;
  p_output1[0]=t1348;
  p_output1[1]=0;
  p_output1[2]=t1352*var2[2] + t1352*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t1358*var2[2] + t1358*var2[3];
  p_output1[9]=0;
  p_output1[10]=t1348;
  p_output1[11]=0;
  p_output1[12]=var2[0] - 0.11*t1358*var2[2] - 0.11*t1358*var2[3];
  p_output1[13]=0;
  p_output1[14]=var2[1] - 0.11*t1345*var2[2] - 0.11*t1345*var2[3];
  p_output1[15]=0;
}



void dT_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
