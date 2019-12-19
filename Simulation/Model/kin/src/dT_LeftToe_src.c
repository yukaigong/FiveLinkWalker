/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftToe_src.h"

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
  double t2175;
  double t1115;
  double t1243;
  double t2201;
  double t1107;
  double t2161;
  double t2212;
  double t2217;
  double t2223;
  double t2252;
  double t2253;
  double t2254;
  double t2271;
  double t2272;
  double t2274;
  double t2338;
  double t2368;
  double t2370;
  double t2374;
  double t2378;
  double t2379;
  double t2411;
  double t2412;
  double t2413;
  double t2299;
  double t2300;
  double t2303;
  double t2445;
  double t2446;
  double t2450;
  double t2451;
  double t2452;
  double t2456;
  double t2457;
  double t2458;
  double t2476;
  double t2479;
  double t2485;
  double t2494;
  double t2416;
  double t2418;
  double t2595;
  double t2596;
  double t2616;
  double t2620;
  t2175 = Cos(var1[2]);
  t1115 = Cos(var1[3]);
  t1243 = Sin(var1[2]);
  t2201 = Sin(var1[3]);
  t1107 = Cos(var1[4]);
  t2161 = -1.*t1115*t1243;
  t2212 = -1.*t2175*t2201;
  t2217 = t2161 + t2212;
  t2223 = t1107*t2217;
  t2252 = t2175*t1115;
  t2253 = -1.*t1243*t2201;
  t2254 = t2252 + t2253;
  t2271 = Sin(var1[4]);
  t2272 = -1.*t2254*t2271;
  t2274 = t2223 + t2272;
  t2338 = -1.*t2217*t2271;
  t2368 = -1.*t2175*t1115;
  t2370 = t1243*t2201;
  t2374 = t2368 + t2370;
  t2378 = t1107*t2374;
  t2379 = t2378 + t2338;
  t2411 = t1107*t2254;
  t2412 = t2217*t2271;
  t2413 = t2411 + t2412;
  t2299 = t1115*t1243;
  t2300 = t2175*t2201;
  t2303 = t2299 + t2300;
  t2445 = t2374*t2271;
  t2446 = t2223 + t2445;
  t2450 = -1.*t1107;
  t2451 = 1. + t2450;
  t2452 = -0.4*t2451;
  t2456 = 0. + t2452;
  t2457 = t2456*t2254;
  t2458 = 0.4*t2271;
  t2476 = 0. + t2458;
  t2479 = t2217*t2476;
  t2485 = -0.8*t2413;
  t2494 = t2457 + t2479 + t2485;
  t2416 = -1.*t2303*t2271;
  t2418 = t2411 + t2416;
  t2595 = t2456*t2217;
  t2596 = t2374*t2476;
  t2616 = -0.8*t2446;
  t2620 = t2595 + t2596 + t2616;
  p_output1[0]=t2274*var2[2] + t2274*var2[3] + (t2272 - 1.*t1107*t2303)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2379*var2[2] + t2379*var2[3] + (-1.*t1107*t2254 + t2338)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2413*var2[2] + t2413*var2[3] + t2418*var2[4];
  p_output1[9]=0;
  p_output1[10]=t2446*var2[2] + t2446*var2[3] + t2274*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2494*var2[2] + t2494*var2[3] + (0.4*t1107*t2254 - 0.4*t2271*t2303 - 0.8*t2418)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2620*var2[2] + t2620*var2[3] + (0.4*t1107*t2217 - 0.4*t2254*t2271 - 0.8*t2274)*var2[4];
  p_output1[15]=0;
}



void dT_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
