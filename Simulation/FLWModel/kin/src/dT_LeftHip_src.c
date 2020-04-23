/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftHip_src.h"

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
  double t2368;
  double t2369;
  double t2370;
  double t2374;
  double t2375;
  double t2376;
  double t2377;
  double t2381;
  double t2382;
  double t2383;
  double t2387;
  double t2388;
  double t2389;
  double t2378;
  double t2379;
  double t2380;
  t2368 = Cos(var1[3]);
  t2369 = Sin(var1[2]);
  t2370 = -1.*t2368*t2369;
  t2374 = Cos(var1[2]);
  t2375 = Sin(var1[3]);
  t2376 = -1.*t2374*t2375;
  t2377 = t2370 + t2376;
  t2381 = -1.*t2374*t2368;
  t2382 = t2369*t2375;
  t2383 = t2381 + t2382;
  t2387 = t2374*t2368;
  t2388 = -1.*t2369*t2375;
  t2389 = t2387 + t2388;
  t2378 = var2[2]*t2377;
  t2379 = var2[3]*t2377;
  t2380 = t2378 + t2379;
  p_output1[0]=t2380;
  p_output1[1]=0;
  p_output1[2]=t2383*var2[2] + t2383*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2389*var2[2] + t2389*var2[3];
  p_output1[9]=0;
  p_output1[10]=t2380;
  p_output1[11]=0;
  p_output1[12]=var2[0];
  p_output1[13]=0;
  p_output1[14]=var2[1];
  p_output1[15]=0;
}



void dT_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
