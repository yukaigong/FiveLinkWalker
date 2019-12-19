/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftThigh_src.h"

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
  double t3924;
  double t3925;
  double t3926;
  double t3927;
  double t3929;
  double t3930;
  double t3931;
  double t3936;
  double t3937;
  double t3938;
  double t3942;
  double t3943;
  double t3944;
  double t3932;
  double t3933;
  double t3934;
  t3924 = Cos(var1[3]);
  t3925 = Sin(var1[2]);
  t3926 = -1.*t3924*t3925;
  t3927 = Cos(var1[2]);
  t3929 = Sin(var1[3]);
  t3930 = -1.*t3927*t3929;
  t3931 = t3926 + t3930;
  t3936 = -1.*t3927*t3924;
  t3937 = t3925*t3929;
  t3938 = t3936 + t3937;
  t3942 = t3927*t3924;
  t3943 = -1.*t3925*t3929;
  t3944 = t3942 + t3943;
  t3932 = var2[2]*t3931;
  t3933 = var2[3]*t3931;
  t3934 = t3932 + t3933;
  p_output1[0]=t3934;
  p_output1[1]=0;
  p_output1[2]=t3938*var2[2] + t3938*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t3944*var2[2] + t3944*var2[3];
  p_output1[9]=0;
  p_output1[10]=t3934;
  p_output1[11]=0;
  p_output1[12]=var2[0] - 0.11*t3944*var2[2] - 0.11*t3944*var2[3];
  p_output1[13]=0;
  p_output1[14]=var2[1] - 0.11*t3931*var2[2] - 0.11*t3931*var2[3];
  p_output1[15]=0;
}



void dT_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
