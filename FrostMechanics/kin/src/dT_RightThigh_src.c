/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightThigh_src.h"

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
  double t4695;
  double t4696;
  double t4697;
  double t4698;
  double t4700;
  double t4701;
  double t4702;
  double t4707;
  double t4708;
  double t4709;
  double t4713;
  double t4714;
  double t4715;
  double t4703;
  double t4704;
  double t4705;
  t4695 = Cos(var1[5]);
  t4696 = Sin(var1[2]);
  t4697 = -1.*t4695*t4696;
  t4698 = Cos(var1[2]);
  t4700 = Sin(var1[5]);
  t4701 = -1.*t4698*t4700;
  t4702 = t4697 + t4701;
  t4707 = -1.*t4698*t4695;
  t4708 = t4696*t4700;
  t4709 = t4707 + t4708;
  t4713 = t4698*t4695;
  t4714 = -1.*t4696*t4700;
  t4715 = t4713 + t4714;
  t4703 = var2[2]*t4702;
  t4704 = var2[5]*t4702;
  t4705 = t4703 + t4704;
  p_output1[0]=t4705;
  p_output1[1]=0;
  p_output1[2]=t4709*var2[2] + t4709*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t4715*var2[2] + t4715*var2[5];
  p_output1[9]=0;
  p_output1[10]=t4705;
  p_output1[11]=0;
  p_output1[12]=var2[0] - 0.11*t4715*var2[2] - 0.11*t4715*var2[5];
  p_output1[13]=0;
  p_output1[14]=var2[1] - 0.11*t4702*var2[2] - 0.11*t4702*var2[5];
  p_output1[15]=0;
}



void dT_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
