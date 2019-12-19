/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftShin_src.h"

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
  double t4346;
  double t4351;
  double t4345;
  double t4356;
  double t4333;
  double t4350;
  double t4358;
  double t4359;
  double t4365;
  double t4362;
  double t4363;
  double t4364;
  double t4361;
  double t4370;
  double t4371;
  double t4372;
  double t4376;
  double t4377;
  double t4378;
  double t4381;
  double t4382;
  double t4383;
  double t4384;
  double t4386;
  double t4387;
  double t4379;
  double t4380;
  t4346 = Cos(var1[3]);
  t4351 = Sin(var1[2]);
  t4345 = Cos(var1[2]);
  t4356 = Sin(var1[3]);
  t4333 = Cos(var1[4]);
  t4350 = t4345*t4346;
  t4358 = -1.*t4351*t4356;
  t4359 = t4350 + t4358;
  t4365 = Sin(var1[4]);
  t4362 = t4346*t4351;
  t4363 = t4345*t4356;
  t4364 = t4362 + t4363;
  t4361 = t4333*t4359;
  t4370 = -1.*t4346*t4351;
  t4371 = -1.*t4345*t4356;
  t4372 = t4370 + t4371;
  t4376 = t4333*t4364;
  t4377 = t4359*t4365;
  t4378 = t4376 + t4377;
  t4381 = -1.*t4333;
  t4382 = 1. + t4381;
  t4383 = -0.4*t4382;
  t4384 = 0. + t4383;
  t4386 = 0.4*t4365;
  t4387 = 0. + t4386;
  t4379 = t4372*t4365;
  t4380 = t4361 + t4379;
  p_output1[0]=t4361 - 1.*t4364*t4365;
  p_output1[1]=0.;
  p_output1[2]=-1.*t4359*t4365 + t4333*t4372;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t4378;
  p_output1[9]=0.;
  p_output1[10]=t4380;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t4378 + t4364*t4384 + t4359*t4387 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t4380 + t4359*t4384 + t4372*t4387 + var1[1];
  p_output1[15]=1.;
}



void T_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
