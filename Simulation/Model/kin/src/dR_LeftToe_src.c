/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftToe_src.h"

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
  double t2456;
  double t352;
  double t1913;
  double t2479;
  double t320;
  double t2449;
  double t2485;
  double t2494;
  double t2495;
  double t2516;
  double t2540;
  double t2541;
  double t2594;
  double t2595;
  double t2596;
  double t2748;
  double t2764;
  double t2770;
  double t2777;
  double t2786;
  double t2789;
  double t2805;
  double t2807;
  double t2823;
  double t2643;
  double t2653;
  double t2671;
  double t2875;
  double t2891;
  t2456 = Cos(var1[2]);
  t352 = Cos(var1[3]);
  t1913 = Sin(var1[2]);
  t2479 = Sin(var1[3]);
  t320 = Cos(var1[4]);
  t2449 = -1.*t352*t1913;
  t2485 = -1.*t2456*t2479;
  t2494 = t2449 + t2485;
  t2495 = t320*t2494;
  t2516 = t2456*t352;
  t2540 = -1.*t1913*t2479;
  t2541 = t2516 + t2540;
  t2594 = Sin(var1[4]);
  t2595 = -1.*t2541*t2594;
  t2596 = t2495 + t2595;
  t2748 = -1.*t2494*t2594;
  t2764 = -1.*t2456*t352;
  t2770 = t1913*t2479;
  t2777 = t2764 + t2770;
  t2786 = t320*t2777;
  t2789 = t2786 + t2748;
  t2805 = t320*t2541;
  t2807 = t2494*t2594;
  t2823 = t2805 + t2807;
  t2643 = t352*t1913;
  t2653 = t2456*t2479;
  t2671 = t2643 + t2653;
  t2875 = t2777*t2594;
  t2891 = t2495 + t2875;
  p_output1[0]=t2596*var2[2] + t2596*var2[3] + (t2595 - 1.*t2671*t320)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2789*var2[2] + t2789*var2[3] + (t2748 - 1.*t2541*t320)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2823*var2[2] + t2823*var2[3] + (-1.*t2594*t2671 + t2805)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t2891*var2[2] + t2891*var2[3] + t2596*var2[4];
}



void dR_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
