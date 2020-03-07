/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightShin_src.h"

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
  double t2592;
  double t2582;
  double t2590;
  double t2593;
  double t2581;
  double t2591;
  double t2595;
  double t2596;
  double t2597;
  double t2598;
  double t2599;
  double t2601;
  double t2602;
  double t2604;
  double t2605;
  double t2618;
  double t2621;
  double t2622;
  double t2623;
  double t2624;
  double t2625;
  double t2631;
  double t2632;
  double t2633;
  double t2609;
  double t2610;
  double t2611;
  double t2641;
  double t2642;
  double t2646;
  double t2647;
  double t2648;
  double t2649;
  double t2650;
  double t2651;
  double t2652;
  double t2653;
  double t2654;
  double t2655;
  double t2636;
  double t2637;
  double t2669;
  double t2670;
  double t2671;
  double t2672;
  t2592 = Cos(var1[2]);
  t2582 = Cos(var1[5]);
  t2590 = Sin(var1[2]);
  t2593 = Sin(var1[5]);
  t2581 = Cos(var1[6]);
  t2591 = -1.*t2582*t2590;
  t2595 = -1.*t2592*t2593;
  t2596 = t2591 + t2595;
  t2597 = t2581*t2596;
  t2598 = t2592*t2582;
  t2599 = -1.*t2590*t2593;
  t2601 = t2598 + t2599;
  t2602 = Sin(var1[6]);
  t2604 = -1.*t2601*t2602;
  t2605 = t2597 + t2604;
  t2618 = -1.*t2596*t2602;
  t2621 = -1.*t2592*t2582;
  t2622 = t2590*t2593;
  t2623 = t2621 + t2622;
  t2624 = t2581*t2623;
  t2625 = t2624 + t2618;
  t2631 = t2581*t2601;
  t2632 = t2596*t2602;
  t2633 = t2631 + t2632;
  t2609 = t2582*t2590;
  t2610 = t2592*t2593;
  t2611 = t2609 + t2610;
  t2641 = t2623*t2602;
  t2642 = t2597 + t2641;
  t2646 = -1.*t2581;
  t2647 = 1. + t2646;
  t2648 = -0.4*t2647;
  t2649 = 0. + t2648;
  t2650 = t2649*t2601;
  t2651 = 0.4*t2602;
  t2652 = 0. + t2651;
  t2653 = t2596*t2652;
  t2654 = -0.64*t2633;
  t2655 = t2650 + t2653 + t2654;
  t2636 = -1.*t2611*t2602;
  t2637 = t2631 + t2636;
  t2669 = t2649*t2596;
  t2670 = t2623*t2652;
  t2671 = -0.64*t2642;
  t2672 = t2669 + t2670 + t2671;
  p_output1[0]=t2605*var2[2] + t2605*var2[5] + (t2604 - 1.*t2581*t2611)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t2625*var2[2] + t2625*var2[5] + (-1.*t2581*t2601 + t2618)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2633*var2[2] + t2633*var2[5] + t2637*var2[6];
  p_output1[9]=0;
  p_output1[10]=t2642*var2[2] + t2642*var2[5] + t2605*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2655*var2[2] + t2655*var2[5] + (0.4*t2581*t2601 - 0.4*t2602*t2611 - 0.64*t2637)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2672*var2[2] + t2672*var2[5] + (0.4*t2581*t2596 - 0.4*t2601*t2602 - 0.64*t2605)*var2[6];
  p_output1[15]=0;
}



void dT_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
