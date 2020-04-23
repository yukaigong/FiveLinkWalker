/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftKnee_src.h"

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
  double t2488;
  double t2484;
  double t2485;
  double t2489;
  double t2475;
  double t2487;
  double t2490;
  double t2491;
  double t2493;
  double t2494;
  double t2495;
  double t2496;
  double t2476;
  double t2479;
  double t2482;
  double t2483;
  double t2497;
  double t2500;
  double t2508;
  double t2509;
  double t2510;
  t2488 = Cos(var1[2]);
  t2484 = Cos(var1[3]);
  t2485 = Sin(var1[2]);
  t2489 = Sin(var1[3]);
  t2475 = Cos(var1[4]);
  t2487 = t2484*t2485;
  t2490 = t2488*t2489;
  t2491 = t2487 + t2490;
  t2493 = t2488*t2484;
  t2494 = -1.*t2485*t2489;
  t2495 = t2493 + t2494;
  t2496 = Sin(var1[4]);
  t2476 = -1.*t2475;
  t2479 = 1. + t2476;
  t2482 = -0.4*t2479;
  t2483 = 0. + t2482;
  t2497 = 0.4*t2496;
  t2500 = 0. + t2497;
  t2508 = -1.*t2484*t2485;
  t2509 = -1.*t2488*t2489;
  t2510 = t2508 + t2509;
  p_output1[0]=0. + t2483*t2491 - 0.4*(t2475*t2491 + t2495*t2496) + t2495*t2500 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2483*t2495 + t2500*t2510 - 0.4*(t2475*t2495 + t2496*t2510) + var1[1];
}



void p_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
