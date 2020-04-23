/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:27:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "GravityVector_src.h"

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
  double t274;
  double t977;
  double t1625;
  double t1813;
  double t1859;
  double t1913;
  double t1923;
  double t2719;
  double t3808;
  double t3982;
  double t3984;
  double t3985;
  double t4081;
  double t4103;
  double t4140;
  double t4169;
  double t4587;
  double t5153;
  double t5239;
  double t5243;
  double t5989;
  double t5990;
  double t2245;
  double t3254;
  double t3338;
  double t3455;
  double t3986;
  double t3987;
  double t3990;
  double t3991;
  double t3995;
  double t3997;
  double t4000;
  double t7677;
  double t7681;
  double t7685;
  double t4600;
  double t5201;
  double t5228;
  double t5234;
  double t6352;
  double t6356;
  double t6724;
  double t7024;
  double t7309;
  double t7343;
  double t7670;
  double t7733;
  double t7734;
  double t7735;
  t274 = Sin(var1[2]);
  t977 = Cos(var1[3]);
  t1625 = -1.*t977*t274;
  t1813 = Cos(var1[2]);
  t1859 = Sin(var1[3]);
  t1913 = -1.*t1813*t1859;
  t1923 = t1625 + t1913;
  t2719 = Cos(var1[4]);
  t3808 = -1.*t1813*t977;
  t3982 = t274*t1859;
  t3984 = t3808 + t3982;
  t3985 = Sin(var1[4]);
  t4081 = Cos(var1[5]);
  t4103 = -1.*t4081*t274;
  t4140 = Sin(var1[5]);
  t4169 = -1.*t1813*t4140;
  t4587 = t4103 + t4169;
  t5153 = Cos(var1[6]);
  t5239 = -1.*t1813*t4081;
  t5243 = t274*t4140;
  t5989 = t5239 + t5243;
  t5990 = Sin(var1[6]);
  t2245 = -7.33788*t1923;
  t3254 = -1.*t2719;
  t3338 = 1. + t3254;
  t3455 = -0.4*t3338*t1923;
  t3986 = 0.4*t3984*t3985;
  t3987 = t2719*t1923;
  t3990 = t3984*t3985;
  t3991 = t3987 + t3990;
  t3995 = -0.64*t3991;
  t3997 = t3455 + t3986 + t3995;
  t4000 = 31.392000000000003*t3997;
  t7677 = t1813*t977;
  t7681 = -1.*t274*t1859;
  t7685 = t7677 + t7681;
  t4600 = -7.33788*t4587;
  t5201 = -1.*t5153;
  t5228 = 1. + t5201;
  t5234 = -0.4*t5228*t4587;
  t6352 = 0.4*t5989*t5990;
  t6356 = t5153*t4587;
  t6724 = t5989*t5990;
  t7024 = t6356 + t6724;
  t7309 = -0.64*t7024;
  t7343 = t5234 + t6352 + t7309;
  t7670 = 31.392000000000003*t7343;
  t7733 = t1813*t4081;
  t7734 = -1.*t274*t4140;
  t7735 = t7733 + t7734;
  p_output1[0]=0;
  p_output1[1]=313.92;
  p_output1[2]=t2245 - 28.252799999999997*t274 + t4000 + t4600 + t7670;
  p_output1[3]=t2245 + t4000;
  p_output1[4]=31.392000000000003*(0.4*t1923*t2719 - 0.4*t3985*t7685 - 0.64*(t3987 - 1.*t3985*t7685));
  p_output1[5]=t4600 + t7670;
  p_output1[6]=31.392000000000003*(0.4*t4587*t5153 - 0.4*t5990*t7735 - 0.64*(t6356 - 1.*t5990*t7735));
}



void GravityVector_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
