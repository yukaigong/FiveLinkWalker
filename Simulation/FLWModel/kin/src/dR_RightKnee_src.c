/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightKnee_src.h"

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
  double t3694;
  double t3688;
  double t3692;
  double t3695;
  double t3687;
  double t3693;
  double t3696;
  double t3698;
  double t3699;
  double t3705;
  double t3706;
  double t3707;
  double t3711;
  double t3712;
  double t3713;
  double t3726;
  double t3729;
  double t3730;
  double t3731;
  double t3732;
  double t3733;
  double t3737;
  double t3738;
  double t3739;
  double t3716;
  double t3717;
  double t3720;
  double t3747;
  double t3748;
  t3694 = Cos(var1[2]);
  t3688 = Cos(var1[5]);
  t3692 = Sin(var1[2]);
  t3695 = Sin(var1[5]);
  t3687 = Cos(var1[6]);
  t3693 = -1.*t3688*t3692;
  t3696 = -1.*t3694*t3695;
  t3698 = t3693 + t3696;
  t3699 = t3687*t3698;
  t3705 = t3694*t3688;
  t3706 = -1.*t3692*t3695;
  t3707 = t3705 + t3706;
  t3711 = Sin(var1[6]);
  t3712 = -1.*t3707*t3711;
  t3713 = t3699 + t3712;
  t3726 = -1.*t3698*t3711;
  t3729 = -1.*t3694*t3688;
  t3730 = t3692*t3695;
  t3731 = t3729 + t3730;
  t3732 = t3687*t3731;
  t3733 = t3732 + t3726;
  t3737 = t3687*t3707;
  t3738 = t3698*t3711;
  t3739 = t3737 + t3738;
  t3716 = t3688*t3692;
  t3717 = t3694*t3695;
  t3720 = t3716 + t3717;
  t3747 = t3731*t3711;
  t3748 = t3699 + t3747;
  p_output1[0]=t3713*var2[2] + t3713*var2[5] + (t3712 - 1.*t3687*t3720)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t3733*var2[2] + t3733*var2[5] + (-1.*t3687*t3707 + t3726)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3739*var2[2] + t3739*var2[5] + (-1.*t3711*t3720 + t3737)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t3748*var2[2] + t3748*var2[5] + t3713*var2[6];
}



void dR_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
