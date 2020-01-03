/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightShin_src.h"

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
  double t2637;
  double t2643;
  double t2635;
  double t2650;
  double t2628;
  double t2642;
  double t2651;
  double t2652;
  double t2658;
  double t2654;
  double t2655;
  double t2657;
  double t2653;
  double t2661;
  double t2662;
  double t2663;
  t2637 = Cos(var1[5]);
  t2643 = Sin(var1[2]);
  t2635 = Cos(var1[2]);
  t2650 = Sin(var1[5]);
  t2628 = Cos(var1[6]);
  t2642 = t2635*t2637;
  t2651 = -1.*t2643*t2650;
  t2652 = t2642 + t2651;
  t2658 = Sin(var1[6]);
  t2654 = t2637*t2643;
  t2655 = t2635*t2650;
  t2657 = t2654 + t2655;
  t2653 = t2628*t2652;
  t2661 = -1.*t2637*t2643;
  t2662 = -1.*t2635*t2650;
  t2663 = t2661 + t2662;
  p_output1[0]=t2653 - 1.*t2657*t2658;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2652*t2658 + t2628*t2663;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t2628*t2657 + t2652*t2658;
  p_output1[7]=0.;
  p_output1[8]=t2653 + t2658*t2663;
}



void R_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
