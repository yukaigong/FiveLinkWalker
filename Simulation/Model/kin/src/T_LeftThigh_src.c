/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftThigh_src.h"

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
  double t3909;
  double t3911;
  double t3904;
  double t3912;
  double t3910;
  double t3913;
  double t3914;
  double t3918;
  double t3919;
  double t3920;
  t3909 = Cos(var1[3]);
  t3911 = Sin(var1[2]);
  t3904 = Cos(var1[2]);
  t3912 = Sin(var1[3]);
  t3910 = t3904*t3909;
  t3913 = -1.*t3911*t3912;
  t3914 = t3910 + t3913;
  t3918 = t3909*t3911;
  t3919 = t3904*t3912;
  t3920 = t3918 + t3919;
  p_output1[0]=t3914;
  p_output1[1]=0;
  p_output1[2]=-1.*t3909*t3911 - 1.*t3904*t3912;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t3920;
  p_output1[9]=0;
  p_output1[10]=t3914;
  p_output1[11]=0;
  p_output1[12]=-0.11*t3920 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=-0.11*t3914 + var1[1];
  p_output1[15]=1.;
}



void T_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
