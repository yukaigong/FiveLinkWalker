/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_LeftKnee_src.h"

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
  double t2746;
  double t2747;
  double t2748;
  double t2749;
  double t2755;
  double t2756;
  double t2757;
  double t2760;
  double t2764;
  double t2765;
  double t2768;
  t2746 = -1.*var2[1];
  t2747 = Cos(var1[3]);
  t2748 = Sin(var1[2]);
  t2749 = -1.*t2747*t2748;
  t2755 = Cos(var1[2]);
  t2756 = Sin(var1[3]);
  t2757 = -1.*t2755*t2756;
  t2760 = t2749 + t2757;
  t2764 = -1.*t2755*t2747;
  t2765 = t2748*t2756;
  t2768 = t2764 + t2765;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2746;
  p_output1[13]=0;
  p_output1[14]=var2[0];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2746;
  p_output1[19]=0;
  p_output1[20]=var2[0];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=t2746 + 0.4*t2760*var2[2] + 0.4*t2760*var2[3];
  p_output1[25]=0;
  p_output1[26]=var2[0] + 0.4*t2768*var2[2] + 0.4*t2768*var2[3];
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void dJs_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
