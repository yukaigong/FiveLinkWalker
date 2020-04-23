/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightShin_src.h"

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
  double t2393;
  double t2382;
  double t2388;
  double t2395;
  double t2378;
  double t2391;
  double t2399;
  double t2404;
  double t2413;
  double t2415;
  double t2416;
  double t2417;
  double t2418;
  double t2419;
  double t2420;
  double t2405;
  double t2406;
  double t2425;
  double t2427;
  double t2428;
  double t2429;
  double t2408;
  double t2400;
  double t2454;
  double t2458;
  double t2459;
  double t2464;
  double t2465;
  double t2434;
  double t2435;
  double t2436;
  double t2410;
  double t2474;
  double t2476;
  double t2477;
  double t2478;
  double t2479;
  double t2480;
  double t2481;
  double t2482;
  double t2483;
  double t2484;
  double t2485;
  double t2488;
  double t2489;
  double t2490;
  double t2491;
  double t2492;
  double t2493;
  double t2494;
  double t2486;
  double t2509;
  double t2498;
  double t2499;
  double t2500;
  double t2502;
  double t2503;
  double t2504;
  double t2512;
  t2393 = Cos(var1[5]);
  t2382 = Cos(var1[6]);
  t2388 = Sin(var1[5]);
  t2395 = Sin(var1[6]);
  t2378 = Cos(var1[2]);
  t2391 = -1.*t2382*t2388;
  t2399 = -1.*t2393*t2395;
  t2404 = Sin(var1[2]);
  t2413 = t2391 + t2399;
  t2415 = t2378*t2413;
  t2416 = -1.*t2393*t2382;
  t2417 = t2388*t2395;
  t2418 = t2416 + t2417;
  t2419 = t2404*t2418;
  t2420 = t2415 + t2419;
  t2405 = t2393*t2382;
  t2406 = -1.*t2388*t2395;
  t2425 = t2404*t2413;
  t2427 = t2405 + t2406;
  t2428 = t2378*t2427;
  t2429 = t2425 + t2428;
  t2408 = 0. + t2405 + t2406;
  t2400 = 0. + t2391 + t2399;
  t2454 = -1.*t2404*t2413;
  t2458 = t2378*t2418;
  t2459 = t2454 + t2458;
  t2464 = -1.*t2404*t2427;
  t2465 = t2415 + t2464;
  t2434 = t2382*t2388;
  t2435 = t2393*t2395;
  t2436 = 0. + t2434 + t2435;
  t2410 = -1.*t2404*t2408;
  t2474 = -1.*t2382;
  t2476 = 1. + t2474;
  t2477 = -0.4*t2476;
  t2478 = -0.64*t2382;
  t2479 = 0. + t2477 + t2478;
  t2480 = t2393*t2479;
  t2481 = -0.24*t2395;
  t2482 = 0. + t2481;
  t2483 = -1.*t2388*t2482;
  t2484 = 0. + t2480 + t2483;
  t2485 = t2484*t2413;
  t2488 = t2479*t2388;
  t2489 = t2393*t2482;
  t2490 = 0. + t2488 + t2489;
  t2491 = t2490*t2427;
  t2492 = -1.*t2479*t2388;
  t2493 = -1.*t2393*t2482;
  t2494 = t2492 + t2493;
  t2486 = t2480 + t2483;
  t2509 = -1.*t2490*t2413;
  t2498 = 0.24*t2382*t2388;
  t2499 = 0.24*t2393*t2395;
  t2500 = t2498 + t2499;
  t2502 = -0.24*t2393*t2382;
  t2503 = 0.24*t2388*t2395;
  t2504 = t2502 + t2503;
  t2512 = -1.*t2484*t2418;
  p_output1[0]=(t2378*t2400 + t2410)*var2[2] + t2420*var2[5] + t2420*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t2378*t2408 - 1.*t2404*t2436)*var2[2] + t2429*var2[5] + t2429*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2400*t2404 - 1.*t2378*t2408)*var2[2] + t2459*var2[5] + t2459*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t2410 - 1.*t2378*t2436)*var2[2] + t2465*var2[5] + t2465*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t2485 + t2436*t2486 + t2491 + t2408*t2494)*var2[5] + (t2485 + t2491 + t2408*t2500 + t2436*t2504)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(-1.*t2408*t2486 - 1.*t2400*t2494 + t2509 + t2512)*var2[5] + (-1.*t2400*t2500 - 1.*t2408*t2504 + t2509 + t2512)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  p_output1[30]=(0. - 1.*t2395*t2479 + t2382*t2482)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0.24*Power(t2382,2) + 0.24*Power(t2395,2) + t2382*t2479 + t2395*t2482)*var2[6];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void dJb_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
