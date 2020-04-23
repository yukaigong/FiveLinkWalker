/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToe_src.h"

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
  double t1724;
  double t1768;
  double t1715;
  double t1792;
  double t1680;
  double t1759;
  double t1801;
  double t1804;
  double t1886;
  double t1849;
  double t1854;
  double t1857;
  double t1845;
  double t1971;
  double t1981;
  double t1985;
  double t2026;
  double t2028;
  double t2029;
  double t2067;
  double t2072;
  double t2075;
  double t2091;
  double t2123;
  double t2124;
  double t2033;
  double t2049;
  t1724 = Cos(var1[3]);
  t1768 = Sin(var1[2]);
  t1715 = Cos(var1[2]);
  t1792 = Sin(var1[3]);
  t1680 = Cos(var1[4]);
  t1759 = t1715*t1724;
  t1801 = -1.*t1768*t1792;
  t1804 = t1759 + t1801;
  t1886 = Sin(var1[4]);
  t1849 = t1724*t1768;
  t1854 = t1715*t1792;
  t1857 = t1849 + t1854;
  t1845 = t1680*t1804;
  t1971 = -1.*t1724*t1768;
  t1981 = -1.*t1715*t1792;
  t1985 = t1971 + t1981;
  t2026 = t1680*t1857;
  t2028 = t1804*t1886;
  t2029 = t2026 + t2028;
  t2067 = -1.*t1680;
  t2072 = 1. + t2067;
  t2075 = -0.4*t2072;
  t2091 = 0. + t2075;
  t2123 = 0.4*t1886;
  t2124 = 0. + t2123;
  t2033 = t1985*t1886;
  t2049 = t1845 + t2033;
  p_output1[0]=t1845 - 1.*t1857*t1886;
  p_output1[1]=0.;
  p_output1[2]=-1.*t1804*t1886 + t1680*t1985;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t2029;
  p_output1[9]=0.;
  p_output1[10]=t2049;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.8*t2029 + t1857*t2091 + t1804*t2124 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.8*t2049 + t1804*t2091 + t1985*t2124 + var1[1];
  p_output1[15]=1.;
}



void T_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
