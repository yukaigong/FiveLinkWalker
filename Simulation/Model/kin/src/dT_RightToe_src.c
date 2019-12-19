/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightToe_src.h"

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
  double t998;
  double t953;
  double t960;
  double t4212;
  double t947;
  double t987;
  double t4242;
  double t4283;
  double t4293;
  double t4294;
  double t4310;
  double t4326;
  double t4328;
  double t4332;
  double t4338;
  double t4389;
  double t4413;
  double t4417;
  double t4434;
  double t4456;
  double t4457;
  double t4517;
  double t4518;
  double t4524;
  double t4354;
  double t4363;
  double t4366;
  double t4539;
  double t4540;
  double t4549;
  double t4551;
  double t4552;
  double t4553;
  double t4560;
  double t4561;
  double t4567;
  double t4574;
  double t4576;
  double t4578;
  double t4532;
  double t4533;
  double t4618;
  double t4620;
  double t4627;
  double t4630;
  t998 = Cos(var1[2]);
  t953 = Cos(var1[5]);
  t960 = Sin(var1[2]);
  t4212 = Sin(var1[5]);
  t947 = Cos(var1[6]);
  t987 = -1.*t953*t960;
  t4242 = -1.*t998*t4212;
  t4283 = t987 + t4242;
  t4293 = t947*t4283;
  t4294 = t998*t953;
  t4310 = -1.*t960*t4212;
  t4326 = t4294 + t4310;
  t4328 = Sin(var1[6]);
  t4332 = -1.*t4326*t4328;
  t4338 = t4293 + t4332;
  t4389 = -1.*t4283*t4328;
  t4413 = -1.*t998*t953;
  t4417 = t960*t4212;
  t4434 = t4413 + t4417;
  t4456 = t947*t4434;
  t4457 = t4456 + t4389;
  t4517 = t947*t4326;
  t4518 = t4283*t4328;
  t4524 = t4517 + t4518;
  t4354 = t953*t960;
  t4363 = t998*t4212;
  t4366 = t4354 + t4363;
  t4539 = t4434*t4328;
  t4540 = t4293 + t4539;
  t4549 = -1.*t947;
  t4551 = 1. + t4549;
  t4552 = -0.4*t4551;
  t4553 = 0. + t4552;
  t4560 = t4553*t4326;
  t4561 = 0.4*t4328;
  t4567 = 0. + t4561;
  t4574 = t4283*t4567;
  t4576 = -0.8*t4524;
  t4578 = t4560 + t4574 + t4576;
  t4532 = -1.*t4366*t4328;
  t4533 = t4517 + t4532;
  t4618 = t4553*t4283;
  t4620 = t4434*t4567;
  t4627 = -0.8*t4540;
  t4630 = t4618 + t4620 + t4627;
  p_output1[0]=t4338*var2[2] + t4338*var2[5] + (t4332 - 1.*t4366*t947)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t4457*var2[2] + t4457*var2[5] + (t4389 - 1.*t4326*t947)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t4524*var2[2] + t4524*var2[5] + t4533*var2[6];
  p_output1[9]=0;
  p_output1[10]=t4540*var2[2] + t4540*var2[5] + t4338*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t4578*var2[2] + t4578*var2[5] + (-0.4*t4328*t4366 - 0.8*t4533 + 0.4*t4326*t947)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t4630*var2[2] + t4630*var2[5] + (-0.4*t4326*t4328 - 0.8*t4338 + 0.4*t4283*t947)*var2[6];
  p_output1[15]=0;
}



void dT_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
