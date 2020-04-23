/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToe_src.h"

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
  double t3383;
  double t3862;
  double t3321;
  double t3863;
  double t2909;
  double t3750;
  double t3913;
  double t3976;
  double t4052;
  double t4036;
  double t4042;
  double t4045;
  double t4035;
  double t4092;
  double t4103;
  double t4111;
  double t4192;
  double t4200;
  double t4212;
  double t4238;
  double t4240;
  double t4242;
  double t4253;
  double t4257;
  double t4260;
  double t4220;
  double t4225;
  t3383 = Cos(var1[5]);
  t3862 = Sin(var1[2]);
  t3321 = Cos(var1[2]);
  t3863 = Sin(var1[5]);
  t2909 = Cos(var1[6]);
  t3750 = t3321*t3383;
  t3913 = -1.*t3862*t3863;
  t3976 = t3750 + t3913;
  t4052 = Sin(var1[6]);
  t4036 = t3383*t3862;
  t4042 = t3321*t3863;
  t4045 = t4036 + t4042;
  t4035 = t2909*t3976;
  t4092 = -1.*t3383*t3862;
  t4103 = -1.*t3321*t3863;
  t4111 = t4092 + t4103;
  t4192 = t2909*t4045;
  t4200 = t3976*t4052;
  t4212 = t4192 + t4200;
  t4238 = -1.*t2909;
  t4240 = 1. + t4238;
  t4242 = -0.4*t4240;
  t4253 = 0. + t4242;
  t4257 = 0.4*t4052;
  t4260 = 0. + t4257;
  t4220 = t4111*t4052;
  t4225 = t4035 + t4220;
  p_output1[0]=t4035 - 1.*t4045*t4052;
  p_output1[1]=0.;
  p_output1[2]=-1.*t3976*t4052 + t2909*t4111;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t4212;
  p_output1[9]=0.;
  p_output1[10]=t4225;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.8*t4212 + t4045*t4253 + t3976*t4260 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.8*t4225 + t3976*t4253 + t4111*t4260 + var1[1];
  p_output1[15]=1.;
}



void T_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
