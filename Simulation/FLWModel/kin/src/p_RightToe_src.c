/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToe_src.h"

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
  double t1832;
  double t1136;
  double t1137;
  double t1855;
  double t40;
  double t1296;
  double t1990;
  double t2633;
  double t2749;
  double t2759;
  double t2797;
  double t2856;
  double t364;
  double t372;
  double t382;
  double t1042;
  double t2865;
  double t2907;
  double t2933;
  double t2936;
  double t2937;
  t1832 = Cos(var1[2]);
  t1136 = Cos(var1[5]);
  t1137 = Sin(var1[2]);
  t1855 = Sin(var1[5]);
  t40 = Cos(var1[6]);
  t1296 = t1136*t1137;
  t1990 = t1832*t1855;
  t2633 = t1296 + t1990;
  t2749 = t1832*t1136;
  t2759 = -1.*t1137*t1855;
  t2797 = t2749 + t2759;
  t2856 = Sin(var1[6]);
  t364 = -1.*t40;
  t372 = 1. + t364;
  t382 = -0.4*t372;
  t1042 = 0. + t382;
  t2865 = 0.4*t2856;
  t2907 = 0. + t2865;
  t2933 = -1.*t1136*t1137;
  t2936 = -1.*t1832*t1855;
  t2937 = t2933 + t2936;
  p_output1[0]=0. + t1042*t2633 + t2797*t2907 - 0.8*(t2797*t2856 + t2633*t40) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1042*t2797 + t2907*t2937 - 0.8*(t2856*t2937 + t2797*t40) + var1[1];
}



void p_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
