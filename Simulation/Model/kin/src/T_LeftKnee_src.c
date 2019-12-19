/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftKnee_src.h"

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
  double t2788;
  double t2792;
  double t2787;
  double t2796;
  double t2778;
  double t2791;
  double t2797;
  double t2798;
  double t2803;
  double t2800;
  double t2801;
  double t2802;
  double t2799;
  double t2808;
  double t2809;
  double t2810;
  double t2814;
  double t2815;
  double t2816;
  double t2819;
  double t2820;
  double t2821;
  double t2822;
  double t2824;
  double t2825;
  double t2817;
  double t2818;
  t2788 = Cos(var1[3]);
  t2792 = Sin(var1[2]);
  t2787 = Cos(var1[2]);
  t2796 = Sin(var1[3]);
  t2778 = Cos(var1[4]);
  t2791 = t2787*t2788;
  t2797 = -1.*t2792*t2796;
  t2798 = t2791 + t2797;
  t2803 = Sin(var1[4]);
  t2800 = t2788*t2792;
  t2801 = t2787*t2796;
  t2802 = t2800 + t2801;
  t2799 = t2778*t2798;
  t2808 = -1.*t2788*t2792;
  t2809 = -1.*t2787*t2796;
  t2810 = t2808 + t2809;
  t2814 = t2778*t2802;
  t2815 = t2798*t2803;
  t2816 = t2814 + t2815;
  t2819 = -1.*t2778;
  t2820 = 1. + t2819;
  t2821 = -0.4*t2820;
  t2822 = 0. + t2821;
  t2824 = 0.4*t2803;
  t2825 = 0. + t2824;
  t2817 = t2810*t2803;
  t2818 = t2799 + t2817;
  p_output1[0]=t2799 - 1.*t2802*t2803;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2798*t2803 + t2778*t2810;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t2816;
  p_output1[9]=0.;
  p_output1[10]=t2818;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.4*t2816 + t2802*t2822 + t2798*t2825 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.4*t2818 + t2798*t2822 + t2810*t2825 + var1[1];
  p_output1[15]=1.;
}



void T_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
