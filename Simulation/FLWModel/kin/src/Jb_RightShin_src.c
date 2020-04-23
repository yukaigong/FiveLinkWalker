/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightShin_src.h"

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
  double t2340;
  double t2333;
  double t2334;
  double t2341;
  double t2347;
  double t2332;
  double t2348;
  double t2349;
  double t2350;
  double t2339;
  double t2342;
  double t2345;
  double t2356;
  double t2357;
  double t2358;
  double t2351;
  double t2372;
  double t2373;
  double t2374;
  double t2375;
  double t2376;
  double t2378;
  double t2379;
  double t2383;
  double t2384;
  double t2385;
  double t2377;
  double t2380;
  double t2381;
  t2340 = Cos(var1[5]);
  t2333 = Cos(var1[6]);
  t2334 = Sin(var1[5]);
  t2341 = Sin(var1[6]);
  t2347 = Cos(var1[2]);
  t2332 = Sin(var1[2]);
  t2348 = t2340*t2333;
  t2349 = -1.*t2334*t2341;
  t2350 = 0. + t2348 + t2349;
  t2339 = -1.*t2333*t2334;
  t2342 = -1.*t2340*t2341;
  t2345 = 0. + t2339 + t2342;
  t2356 = t2333*t2334;
  t2357 = t2340*t2341;
  t2358 = 0. + t2356 + t2357;
  t2351 = t2347*t2350;
  t2372 = -1.*t2333;
  t2373 = 1. + t2372;
  t2374 = -0.4*t2373;
  t2375 = -0.64*t2333;
  t2376 = 0. + t2374 + t2375;
  t2378 = -0.24*t2341;
  t2379 = 0. + t2378;
  t2383 = t2340*t2376;
  t2384 = -1.*t2334*t2379;
  t2385 = 0. + t2383 + t2384;
  t2377 = t2376*t2334;
  t2380 = t2340*t2379;
  t2381 = 0. + t2377 + t2380;
  p_output1[0]=0. + t2332*t2345 + t2351;
  p_output1[1]=0.;
  p_output1[2]=0. + t2332*t2350 + t2347*t2358;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t2345*t2347 - 1.*t2332*t2350;
  p_output1[7]=0.;
  p_output1[8]=0. + t2351 - 1.*t2332*t2358;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t2358*t2381 + t2350*t2385;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t2350*t2381 - 1.*t2345*t2385;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0. + t2333*t2376 + t2341*t2379;
  p_output1[31]=0.;
  p_output1[32]=0. + t2341*t2376 - 1.*t2333*t2379;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=-0.24;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
}



void Jb_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
