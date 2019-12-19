/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightShin_src.h"

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
  double t5272;
  double t5266;
  double t5270;
  double t5273;
  double t5265;
  double t5271;
  double t5274;
  double t5276;
  double t5277;
  double t5283;
  double t5284;
  double t5285;
  double t5289;
  double t5290;
  double t5291;
  double t5304;
  double t5307;
  double t5308;
  double t5309;
  double t5310;
  double t5311;
  double t5315;
  double t5316;
  double t5317;
  double t5294;
  double t5295;
  double t5298;
  double t5325;
  double t5326;
  t5272 = Cos(var1[2]);
  t5266 = Cos(var1[5]);
  t5270 = Sin(var1[2]);
  t5273 = Sin(var1[5]);
  t5265 = Cos(var1[6]);
  t5271 = -1.*t5266*t5270;
  t5274 = -1.*t5272*t5273;
  t5276 = t5271 + t5274;
  t5277 = t5265*t5276;
  t5283 = t5272*t5266;
  t5284 = -1.*t5270*t5273;
  t5285 = t5283 + t5284;
  t5289 = Sin(var1[6]);
  t5290 = -1.*t5285*t5289;
  t5291 = t5277 + t5290;
  t5304 = -1.*t5276*t5289;
  t5307 = -1.*t5272*t5266;
  t5308 = t5270*t5273;
  t5309 = t5307 + t5308;
  t5310 = t5265*t5309;
  t5311 = t5310 + t5304;
  t5315 = t5265*t5285;
  t5316 = t5276*t5289;
  t5317 = t5315 + t5316;
  t5294 = t5266*t5270;
  t5295 = t5272*t5273;
  t5298 = t5294 + t5295;
  t5325 = t5309*t5289;
  t5326 = t5277 + t5325;
  p_output1[0]=t5291*var2[2] + t5291*var2[5] + (t5290 - 1.*t5265*t5298)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t5311*var2[2] + t5311*var2[5] + (-1.*t5265*t5285 + t5304)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5317*var2[2] + t5317*var2[5] + (-1.*t5289*t5298 + t5315)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t5326*var2[2] + t5326*var2[5] + t5291*var2[6];
}



void dR_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
