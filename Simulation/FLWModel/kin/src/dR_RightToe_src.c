/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightToe_src.h"

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
  double t4198;
  double t462;
  double t774;
  double t4351;
  double t461;
  double t775;
  double t4356;
  double t4358;
  double t4540;
  double t4545;
  double t4553;
  double t4555;
  double t4556;
  double t4560;
  double t4561;
  double t4618;
  double t4636;
  double t4642;
  double t4644;
  double t4648;
  double t4649;
  double t4656;
  double t4657;
  double t4659;
  double t4588;
  double t4593;
  double t4605;
  double t4714;
  double t4727;
  t4198 = Cos(var1[2]);
  t462 = Cos(var1[5]);
  t774 = Sin(var1[2]);
  t4351 = Sin(var1[5]);
  t461 = Cos(var1[6]);
  t775 = -1.*t462*t774;
  t4356 = -1.*t4198*t4351;
  t4358 = t775 + t4356;
  t4540 = t461*t4358;
  t4545 = t4198*t462;
  t4553 = -1.*t774*t4351;
  t4555 = t4545 + t4553;
  t4556 = Sin(var1[6]);
  t4560 = -1.*t4555*t4556;
  t4561 = t4540 + t4560;
  t4618 = -1.*t4358*t4556;
  t4636 = -1.*t4198*t462;
  t4642 = t774*t4351;
  t4644 = t4636 + t4642;
  t4648 = t461*t4644;
  t4649 = t4648 + t4618;
  t4656 = t461*t4555;
  t4657 = t4358*t4556;
  t4659 = t4656 + t4657;
  t4588 = t462*t774;
  t4593 = t4198*t4351;
  t4605 = t4588 + t4593;
  t4714 = t4644*t4556;
  t4727 = t4540 + t4714;
  p_output1[0]=t4561*var2[2] + t4561*var2[5] + (t4560 - 1.*t4605*t461)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t4649*var2[2] + t4649*var2[5] + (-1.*t4555*t461 + t4618)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4659*var2[2] + t4659*var2[5] + (-1.*t4556*t4605 + t4656)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t4727*var2[2] + t4727*var2[5] + t4561*var2[6];
}



void dR_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
