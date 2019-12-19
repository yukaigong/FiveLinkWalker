/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftThigh_src.h"

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
  double t3976;
  double t3977;
  double t3978;
  double t3982;
  double t3983;
  double t3984;
  double t3985;
  double t3989;
  double t3990;
  double t3991;
  double t3995;
  double t3996;
  double t3997;
  double t3986;
  double t3987;
  double t3988;
  t3976 = Cos(var1[3]);
  t3977 = Sin(var1[2]);
  t3978 = -1.*t3976*t3977;
  t3982 = Cos(var1[2]);
  t3983 = Sin(var1[3]);
  t3984 = -1.*t3982*t3983;
  t3985 = t3978 + t3984;
  t3989 = -1.*t3982*t3976;
  t3990 = t3977*t3983;
  t3991 = t3989 + t3990;
  t3995 = t3982*t3976;
  t3996 = -1.*t3977*t3983;
  t3997 = t3995 + t3996;
  t3986 = var2[2]*t3985;
  t3987 = var2[3]*t3985;
  t3988 = t3986 + t3987;
  p_output1[0]=t3988;
  p_output1[1]=0;
  p_output1[2]=t3991*var2[2] + t3991*var2[3];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3997*var2[2] + t3997*var2[3];
  p_output1[7]=0;
  p_output1[8]=t3988;
}



void dR_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
