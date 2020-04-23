/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightShin_src.h"

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
  double t2216;
  double t2212;
  double t2213;
  double t2217;
  double t2203;
  double t2215;
  double t2218;
  double t2219;
  double t2221;
  double t2222;
  double t2223;
  double t2224;
  double t2204;
  double t2207;
  double t2210;
  double t2211;
  double t2225;
  double t2228;
  double t2236;
  double t2237;
  double t2238;
  t2216 = Cos(var1[2]);
  t2212 = Cos(var1[5]);
  t2213 = Sin(var1[2]);
  t2217 = Sin(var1[5]);
  t2203 = Cos(var1[6]);
  t2215 = t2212*t2213;
  t2218 = t2216*t2217;
  t2219 = t2215 + t2218;
  t2221 = t2216*t2212;
  t2222 = -1.*t2213*t2217;
  t2223 = t2221 + t2222;
  t2224 = Sin(var1[6]);
  t2204 = -1.*t2203;
  t2207 = 1. + t2204;
  t2210 = -0.4*t2207;
  t2211 = 0. + t2210;
  t2225 = 0.4*t2224;
  t2228 = 0. + t2225;
  t2236 = -1.*t2212*t2213;
  t2237 = -1.*t2216*t2217;
  t2238 = t2236 + t2237;
  p_output1[0]=0. + t2211*t2219 - 0.64*(t2203*t2219 + t2223*t2224) + t2223*t2228 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2211*t2223 + t2228*t2238 - 0.64*(t2203*t2223 + t2224*t2238) + var1[1];
}



void p_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
