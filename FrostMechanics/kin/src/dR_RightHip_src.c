/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightHip_src.h"

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
  double t3187;
  double t3188;
  double t3189;
  double t3193;
  double t3194;
  double t3195;
  double t3196;
  double t3200;
  double t3201;
  double t3202;
  double t3206;
  double t3207;
  double t3208;
  double t3197;
  double t3198;
  double t3199;
  t3187 = Cos(var1[5]);
  t3188 = Sin(var1[2]);
  t3189 = -1.*t3187*t3188;
  t3193 = Cos(var1[2]);
  t3194 = Sin(var1[5]);
  t3195 = -1.*t3193*t3194;
  t3196 = t3189 + t3195;
  t3200 = -1.*t3193*t3187;
  t3201 = t3188*t3194;
  t3202 = t3200 + t3201;
  t3206 = t3193*t3187;
  t3207 = -1.*t3188*t3194;
  t3208 = t3206 + t3207;
  t3197 = var2[2]*t3196;
  t3198 = var2[5]*t3196;
  t3199 = t3197 + t3198;
  p_output1[0]=t3199;
  p_output1[1]=0;
  p_output1[2]=t3202*var2[2] + t3202*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3208*var2[2] + t3208*var2[5];
  p_output1[7]=0;
  p_output1[8]=t3199;
}



void dR_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
