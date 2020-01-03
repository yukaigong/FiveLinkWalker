/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightThigh_src.h"

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
  double t2165;
  double t2166;
  double t2167;
  double t2171;
  double t2172;
  double t2173;
  double t2174;
  double t2178;
  double t2179;
  double t2180;
  double t2184;
  double t2185;
  double t2186;
  double t2175;
  double t2176;
  double t2177;
  t2165 = Cos(var1[5]);
  t2166 = Sin(var1[2]);
  t2167 = -1.*t2165*t2166;
  t2171 = Cos(var1[2]);
  t2172 = Sin(var1[5]);
  t2173 = -1.*t2171*t2172;
  t2174 = t2167 + t2173;
  t2178 = -1.*t2171*t2165;
  t2179 = t2166*t2172;
  t2180 = t2178 + t2179;
  t2184 = t2171*t2165;
  t2185 = -1.*t2166*t2172;
  t2186 = t2184 + t2185;
  t2175 = var2[2]*t2174;
  t2176 = var2[5]*t2174;
  t2177 = t2175 + t2176;
  p_output1[0]=t2177;
  p_output1[1]=0;
  p_output1[2]=t2180*var2[2] + t2180*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2186*var2[2] + t2186*var2[5];
  p_output1[7]=0;
  p_output1[8]=t2177;
}



void dR_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
