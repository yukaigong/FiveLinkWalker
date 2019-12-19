/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightKnee_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t3362;
  double t3355;
  double t3356;
  double t3363;
  double t3369;
  double t3354;
  double t3370;
  double t3371;
  double t3372;
  double t3361;
  double t3364;
  double t3367;
  double t3378;
  double t3379;
  double t3380;
  double t3373;
  double t3392;
  double t3393;
  double t3394;
  double t3395;
  double t3396;
  double t3400;
  double t3401;
  double t3397;
  double t3398;
  t3362 = Cos(var1[5]);
  t3355 = Cos(var1[6]);
  t3356 = Sin(var1[5]);
  t3363 = Sin(var1[6]);
  t3369 = Cos(var1[2]);
  t3354 = Sin(var1[2]);
  t3370 = t3362*t3355;
  t3371 = -1.*t3356*t3363;
  t3372 = 0. + t3370 + t3371;
  t3361 = -1.*t3355*t3356;
  t3364 = -1.*t3362*t3363;
  t3367 = 0. + t3361 + t3364;
  t3378 = t3355*t3356;
  t3379 = t3362*t3363;
  t3380 = 0. + t3378 + t3379;
  t3373 = t3369*t3372;
  t3392 = -1.*t3355;
  t3393 = 1. + t3392;
  t3394 = -0.4*t3393;
  t3395 = -0.4*t3355;
  t3396 = 0. + t3394 + t3395;
  t3400 = t3362*t3396;
  t3401 = 0. + t3400;
  t3397 = t3396*t3356;
  t3398 = 0. + t3397;
  p_output1[0]=0. + t3354*t3367 + t3373;
  p_output1[1]=0.;
  p_output1[2]=0. + t3354*t3372 + t3369*t3380;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t3367*t3369 - 1.*t3354*t3372;
  p_output1[7]=0.;
  p_output1[8]=0. + t3373 - 1.*t3354*t3380;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t3380*t3398 + t3372*t3401;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t3372*t3398 - 1.*t3367*t3401;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0. + t3355*t3396;
  p_output1[31]=0.;
  p_output1[32]=0. + t3363*t3396;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
}



void Jb_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
