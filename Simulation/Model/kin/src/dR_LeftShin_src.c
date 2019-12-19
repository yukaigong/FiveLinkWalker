/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftShin_src.h"

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
  double t4506;
  double t4500;
  double t4504;
  double t4507;
  double t4499;
  double t4505;
  double t4508;
  double t4510;
  double t4511;
  double t4517;
  double t4518;
  double t4519;
  double t4523;
  double t4524;
  double t4525;
  double t4538;
  double t4541;
  double t4542;
  double t4543;
  double t4544;
  double t4545;
  double t4549;
  double t4550;
  double t4551;
  double t4528;
  double t4529;
  double t4532;
  double t4559;
  double t4560;
  t4506 = Cos(var1[2]);
  t4500 = Cos(var1[3]);
  t4504 = Sin(var1[2]);
  t4507 = Sin(var1[3]);
  t4499 = Cos(var1[4]);
  t4505 = -1.*t4500*t4504;
  t4508 = -1.*t4506*t4507;
  t4510 = t4505 + t4508;
  t4511 = t4499*t4510;
  t4517 = t4506*t4500;
  t4518 = -1.*t4504*t4507;
  t4519 = t4517 + t4518;
  t4523 = Sin(var1[4]);
  t4524 = -1.*t4519*t4523;
  t4525 = t4511 + t4524;
  t4538 = -1.*t4510*t4523;
  t4541 = -1.*t4506*t4500;
  t4542 = t4504*t4507;
  t4543 = t4541 + t4542;
  t4544 = t4499*t4543;
  t4545 = t4544 + t4538;
  t4549 = t4499*t4519;
  t4550 = t4510*t4523;
  t4551 = t4549 + t4550;
  t4528 = t4500*t4504;
  t4529 = t4506*t4507;
  t4532 = t4528 + t4529;
  t4559 = t4543*t4523;
  t4560 = t4511 + t4559;
  p_output1[0]=t4525*var2[2] + t4525*var2[3] + (t4524 - 1.*t4499*t4532)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t4545*var2[2] + t4545*var2[3] + (-1.*t4499*t4519 + t4538)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4551*var2[2] + t4551*var2[3] + (-1.*t4523*t4532 + t4549)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t4560*var2[2] + t4560*var2[3] + t4525*var2[4];
}



void dR_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
