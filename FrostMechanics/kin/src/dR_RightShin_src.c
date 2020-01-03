/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:32 GMT-05:00
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
  double t2696;
  double t2690;
  double t2694;
  double t2697;
  double t2689;
  double t2695;
  double t2698;
  double t2700;
  double t2701;
  double t2707;
  double t2708;
  double t2709;
  double t2713;
  double t2714;
  double t2715;
  double t2728;
  double t2731;
  double t2732;
  double t2733;
  double t2734;
  double t2735;
  double t2739;
  double t2740;
  double t2741;
  double t2718;
  double t2719;
  double t2722;
  double t2749;
  double t2750;
  t2696 = Cos(var1[2]);
  t2690 = Cos(var1[5]);
  t2694 = Sin(var1[2]);
  t2697 = Sin(var1[5]);
  t2689 = Cos(var1[6]);
  t2695 = -1.*t2690*t2694;
  t2698 = -1.*t2696*t2697;
  t2700 = t2695 + t2698;
  t2701 = t2689*t2700;
  t2707 = t2696*t2690;
  t2708 = -1.*t2694*t2697;
  t2709 = t2707 + t2708;
  t2713 = Sin(var1[6]);
  t2714 = -1.*t2709*t2713;
  t2715 = t2701 + t2714;
  t2728 = -1.*t2700*t2713;
  t2731 = -1.*t2696*t2690;
  t2732 = t2694*t2697;
  t2733 = t2731 + t2732;
  t2734 = t2689*t2733;
  t2735 = t2734 + t2728;
  t2739 = t2689*t2709;
  t2740 = t2700*t2713;
  t2741 = t2739 + t2740;
  t2718 = t2690*t2694;
  t2719 = t2696*t2697;
  t2722 = t2718 + t2719;
  t2749 = t2733*t2713;
  t2750 = t2701 + t2749;
  p_output1[0]=t2715*var2[2] + t2715*var2[5] + (t2714 - 1.*t2689*t2722)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t2735*var2[2] + t2735*var2[5] + (-1.*t2689*t2709 + t2728)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2741*var2[2] + t2741*var2[5] + (-1.*t2713*t2722 + t2739)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t2750*var2[2] + t2750*var2[5] + t2715*var2[6];
}



void dR_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
