/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightKnee_src.h"

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
  double t3538;
  double t3542;
  double t3537;
  double t3546;
  double t3528;
  double t3541;
  double t3547;
  double t3548;
  double t3553;
  double t3550;
  double t3551;
  double t3552;
  double t3549;
  double t3558;
  double t3559;
  double t3560;
  double t3564;
  double t3565;
  double t3566;
  double t3569;
  double t3570;
  double t3571;
  double t3572;
  double t3574;
  double t3575;
  double t3567;
  double t3568;
  t3538 = Cos(var1[5]);
  t3542 = Sin(var1[2]);
  t3537 = Cos(var1[2]);
  t3546 = Sin(var1[5]);
  t3528 = Cos(var1[6]);
  t3541 = t3537*t3538;
  t3547 = -1.*t3542*t3546;
  t3548 = t3541 + t3547;
  t3553 = Sin(var1[6]);
  t3550 = t3538*t3542;
  t3551 = t3537*t3546;
  t3552 = t3550 + t3551;
  t3549 = t3528*t3548;
  t3558 = -1.*t3538*t3542;
  t3559 = -1.*t3537*t3546;
  t3560 = t3558 + t3559;
  t3564 = t3528*t3552;
  t3565 = t3548*t3553;
  t3566 = t3564 + t3565;
  t3569 = -1.*t3528;
  t3570 = 1. + t3569;
  t3571 = -0.4*t3570;
  t3572 = 0. + t3571;
  t3574 = 0.4*t3553;
  t3575 = 0. + t3574;
  t3567 = t3560*t3553;
  t3568 = t3549 + t3567;
  p_output1[0]=t3549 - 1.*t3552*t3553;
  p_output1[1]=0.;
  p_output1[2]=-1.*t3548*t3553 + t3528*t3560;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t3566;
  p_output1[9]=0.;
  p_output1[10]=t3568;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.4*t3566 + t3552*t3572 + t3548*t3575 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.4*t3568 + t3548*t3572 + t3560*t3575 + var1[1];
  p_output1[15]=1.;
}



void T_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
