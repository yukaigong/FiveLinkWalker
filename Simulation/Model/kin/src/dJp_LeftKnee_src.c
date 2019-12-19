/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftKnee_src.h"

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
  double t2565;
  double t2555;
  double t2561;
  double t2566;
  double t2554;
  double t2562;
  double t2567;
  double t2568;
  double t2573;
  double t2574;
  double t2576;
  double t2577;
  double t2579;
  double t2590;
  double t2592;
  double t2593;
  double t2585;
  double t2586;
  double t2587;
  double t2588;
  double t2589;
  double t2594;
  double t2595;
  double t2596;
  double t2597;
  double t2598;
  double t2600;
  double t2601;
  double t2607;
  double t2614;
  double t2615;
  double t2616;
  double t2613;
  double t2617;
  double t2618;
  double t2619;
  double t2620;
  double t2621;
  double t2571;
  double t2578;
  double t2580;
  double t2581;
  double t2582;
  double t2583;
  double t2584;
  double t2602;
  double t2603;
  double t2604;
  double t2605;
  double t2606;
  double t2608;
  double t2609;
  double t2610;
  double t2611;
  double t2612;
  double t2622;
  double t2623;
  double t2624;
  t2565 = Cos(var1[2]);
  t2555 = Cos(var1[3]);
  t2561 = Sin(var1[2]);
  t2566 = Sin(var1[3]);
  t2554 = Cos(var1[4]);
  t2562 = -1.*t2555*t2561;
  t2567 = -1.*t2565*t2566;
  t2568 = t2562 + t2567;
  t2573 = t2565*t2555;
  t2574 = -1.*t2561*t2566;
  t2576 = t2573 + t2574;
  t2577 = Sin(var1[4]);
  t2579 = t2554*t2568;
  t2590 = -1.*t2565*t2555;
  t2592 = t2561*t2566;
  t2593 = t2590 + t2592;
  t2585 = -1.*t2554;
  t2586 = 1. + t2585;
  t2587 = -0.4*t2586;
  t2588 = 0. + t2587;
  t2589 = t2588*t2568;
  t2594 = 0.4*t2577;
  t2595 = 0. + t2594;
  t2596 = t2593*t2595;
  t2597 = t2593*t2577;
  t2598 = t2579 + t2597;
  t2600 = -0.4*t2598;
  t2601 = t2589 + t2596 + t2600;
  t2607 = t2554*t2593;
  t2614 = t2555*t2561;
  t2615 = t2565*t2566;
  t2616 = t2614 + t2615;
  t2613 = t2588*t2593;
  t2617 = t2616*t2595;
  t2618 = t2616*t2577;
  t2619 = t2607 + t2618;
  t2620 = -0.4*t2619;
  t2621 = t2613 + t2617 + t2620;
  t2571 = 0.4*t2554*t2568;
  t2578 = -0.4*t2576*t2577;
  t2580 = -1.*t2576*t2577;
  t2581 = t2579 + t2580;
  t2582 = -0.4*t2581;
  t2583 = t2571 + t2578 + t2582;
  t2584 = var2[4]*t2583;
  t2602 = var2[2]*t2601;
  t2603 = var2[3]*t2601;
  t2604 = t2584 + t2602 + t2603;
  t2605 = 0.4*t2554*t2593;
  t2606 = -0.4*t2568*t2577;
  t2608 = -1.*t2568*t2577;
  t2609 = t2607 + t2608;
  t2610 = -0.4*t2609;
  t2611 = t2605 + t2606 + t2610;
  t2612 = var2[4]*t2611;
  t2622 = var2[2]*t2621;
  t2623 = var2[3]*t2621;
  t2624 = t2612 + t2622 + t2623;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2604;
  p_output1[7]=0;
  p_output1[8]=t2624;
  p_output1[9]=t2604;
  p_output1[10]=0;
  p_output1[11]=t2624;
  p_output1[12]=t2583*var2[2] + t2583*var2[3] + (t2578 - 0.4*t2554*t2616 - 0.4*(t2580 - 1.*t2554*t2616))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t2611*var2[2] + t2611*var2[3] + (-0.4*t2554*t2576 + t2606 - 0.4*(-1.*t2554*t2576 + t2608))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
