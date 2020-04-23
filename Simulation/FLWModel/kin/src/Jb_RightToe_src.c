/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightToe_src.h"

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
  double t3215;
  double t2420;
  double t2421;
  double t3216;
  double t3247;
  double t1638;
  double t3251;
  double t3253;
  double t3255;
  double t3212;
  double t3224;
  double t3245;
  double t3269;
  double t3276;
  double t3278;
  double t3259;
  double t3355;
  double t3360;
  double t3361;
  double t3362;
  double t3364;
  double t3417;
  double t3422;
  double t3446;
  double t3447;
  double t3454;
  double t3365;
  double t3423;
  double t3428;
  t3215 = Cos(var1[5]);
  t2420 = Cos(var1[6]);
  t2421 = Sin(var1[5]);
  t3216 = Sin(var1[6]);
  t3247 = Cos(var1[2]);
  t1638 = Sin(var1[2]);
  t3251 = t3215*t2420;
  t3253 = -1.*t2421*t3216;
  t3255 = 0. + t3251 + t3253;
  t3212 = -1.*t2420*t2421;
  t3224 = -1.*t3215*t3216;
  t3245 = 0. + t3212 + t3224;
  t3269 = t2420*t2421;
  t3276 = t3215*t3216;
  t3278 = 0. + t3269 + t3276;
  t3259 = t3247*t3255;
  t3355 = -1.*t2420;
  t3360 = 1. + t3355;
  t3361 = -0.4*t3360;
  t3362 = -0.8*t2420;
  t3364 = 0. + t3361 + t3362;
  t3417 = -0.4*t3216;
  t3422 = 0. + t3417;
  t3446 = t3215*t3364;
  t3447 = -1.*t2421*t3422;
  t3454 = 0. + t3446 + t3447;
  t3365 = t3364*t2421;
  t3423 = t3215*t3422;
  t3428 = 0. + t3365 + t3423;
  p_output1[0]=0. + t1638*t3245 + t3259;
  p_output1[1]=0.;
  p_output1[2]=0. + t1638*t3255 + t3247*t3278;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t3245*t3247 - 1.*t1638*t3255;
  p_output1[7]=0.;
  p_output1[8]=0. + t3259 - 1.*t1638*t3278;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t3278*t3428 + t3255*t3454;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t3255*t3428 - 1.*t3245*t3454;
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
  p_output1[30]=0. + t2420*t3364 + t3216*t3422;
  p_output1[31]=0.;
  p_output1[32]=0. + t3216*t3364 - 1.*t2420*t3422;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=-0.4;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
}



void Jb_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
