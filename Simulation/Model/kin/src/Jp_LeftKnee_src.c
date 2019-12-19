/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftKnee_src.h"

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
  double t2520;
  double t2523;
  double t2517;
  double t2524;
  double t2500;
  double t2521;
  double t2525;
  double t2526;
  double t2529;
  double t2530;
  double t2531;
  double t2533;
  double t2501;
  double t2505;
  double t2512;
  double t2515;
  double t2534;
  double t2535;
  double t2544;
  double t2545;
  double t2546;
  double t2527;
  double t2536;
  double t2537;
  double t2538;
  double t2539;
  double t2541;
  double t2542;
  double t2543;
  double t2547;
  double t2548;
  double t2549;
  double t2550;
  double t2551;
  double t2552;
  double t2554;
  double t2555;
  double t2556;
  t2520 = Cos(var1[3]);
  t2523 = Sin(var1[2]);
  t2517 = Cos(var1[2]);
  t2524 = Sin(var1[3]);
  t2500 = Cos(var1[4]);
  t2521 = t2517*t2520;
  t2525 = -1.*t2523*t2524;
  t2526 = t2521 + t2525;
  t2529 = -1.*t2520*t2523;
  t2530 = -1.*t2517*t2524;
  t2531 = t2529 + t2530;
  t2533 = Sin(var1[4]);
  t2501 = -1.*t2500;
  t2505 = 1. + t2501;
  t2512 = -0.4*t2505;
  t2515 = 0. + t2512;
  t2534 = 0.4*t2533;
  t2535 = 0. + t2534;
  t2544 = -1.*t2517*t2520;
  t2545 = t2523*t2524;
  t2546 = t2544 + t2545;
  t2527 = t2515*t2526;
  t2536 = t2531*t2535;
  t2537 = t2500*t2526;
  t2538 = t2531*t2533;
  t2539 = t2537 + t2538;
  t2541 = -0.4*t2539;
  t2542 = t2527 + t2536 + t2541;
  t2543 = t2515*t2531;
  t2547 = t2546*t2535;
  t2548 = t2500*t2531;
  t2549 = t2546*t2533;
  t2550 = t2548 + t2549;
  t2551 = -0.4*t2550;
  t2552 = t2543 + t2547 + t2551;
  t2554 = t2520*t2523;
  t2555 = t2517*t2524;
  t2556 = t2554 + t2555;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2542;
  p_output1[7]=0;
  p_output1[8]=t2552;
  p_output1[9]=t2542;
  p_output1[10]=0;
  p_output1[11]=t2552;
  p_output1[12]=0.4*t2500*t2526 - 0.4*t2533*t2556 - 0.4*(t2537 - 1.*t2533*t2556);
  p_output1[13]=0;
  p_output1[14]=0.4*t2500*t2531 - 0.4*t2526*t2533 - 0.4*(-1.*t2526*t2533 + t2548);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void Jp_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
