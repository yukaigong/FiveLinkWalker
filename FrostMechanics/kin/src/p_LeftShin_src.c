/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftShin_src.h"

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
  double t4027;
  double t4023;
  double t4024;
  double t4028;
  double t4014;
  double t4026;
  double t4029;
  double t4030;
  double t4032;
  double t4033;
  double t4034;
  double t4035;
  double t4015;
  double t4018;
  double t4021;
  double t4022;
  double t4036;
  double t4039;
  double t4047;
  double t4048;
  double t4049;
  t4027 = Cos(var1[2]);
  t4023 = Cos(var1[3]);
  t4024 = Sin(var1[2]);
  t4028 = Sin(var1[3]);
  t4014 = Cos(var1[4]);
  t4026 = t4023*t4024;
  t4029 = t4027*t4028;
  t4030 = t4026 + t4029;
  t4032 = t4027*t4023;
  t4033 = -1.*t4024*t4028;
  t4034 = t4032 + t4033;
  t4035 = Sin(var1[4]);
  t4015 = -1.*t4014;
  t4018 = 1. + t4015;
  t4021 = -0.4*t4018;
  t4022 = 0. + t4021;
  t4036 = 0.4*t4035;
  t4039 = 0. + t4036;
  t4047 = -1.*t4023*t4024;
  t4048 = -1.*t4027*t4028;
  t4049 = t4047 + t4048;
  p_output1[0]=0. + t4022*t4030 - 0.64*(t4014*t4030 + t4034*t4035) + t4034*t4039 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4022*t4034 + t4039*t4049 - 0.64*(t4014*t4034 + t4035*t4049) + var1[1];
}



void p_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
