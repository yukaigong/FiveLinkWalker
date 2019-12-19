/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightShin_src.h"

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
  double t4921;
  double t4914;
  double t4915;
  double t4922;
  double t4928;
  double t4911;
  double t4929;
  double t4930;
  double t4931;
  double t4920;
  double t4923;
  double t4925;
  double t4937;
  double t4938;
  double t4939;
  double t4932;
  double t4953;
  double t4954;
  double t4955;
  double t4956;
  double t4957;
  double t4959;
  double t4960;
  double t4964;
  double t4965;
  double t4966;
  double t4958;
  double t4961;
  double t4962;
  t4921 = Cos(var1[5]);
  t4914 = Cos(var1[6]);
  t4915 = Sin(var1[5]);
  t4922 = Sin(var1[6]);
  t4928 = Cos(var1[2]);
  t4911 = Sin(var1[2]);
  t4929 = t4921*t4914;
  t4930 = -1.*t4915*t4922;
  t4931 = 0. + t4929 + t4930;
  t4920 = -1.*t4914*t4915;
  t4923 = -1.*t4921*t4922;
  t4925 = 0. + t4920 + t4923;
  t4937 = t4914*t4915;
  t4938 = t4921*t4922;
  t4939 = 0. + t4937 + t4938;
  t4932 = t4928*t4931;
  t4953 = -1.*t4914;
  t4954 = 1. + t4953;
  t4955 = -0.4*t4954;
  t4956 = -0.64*t4914;
  t4957 = 0. + t4955 + t4956;
  t4959 = -0.24*t4922;
  t4960 = 0. + t4959;
  t4964 = t4921*t4957;
  t4965 = -1.*t4915*t4960;
  t4966 = 0. + t4964 + t4965;
  t4958 = t4957*t4915;
  t4961 = t4921*t4960;
  t4962 = 0. + t4958 + t4961;
  p_output1[0]=0. + t4911*t4925 + t4932;
  p_output1[1]=0.;
  p_output1[2]=0. + t4911*t4931 + t4928*t4939;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t4925*t4928 - 1.*t4911*t4931;
  p_output1[7]=0.;
  p_output1[8]=0. + t4932 - 1.*t4911*t4939;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t4939*t4962 + t4931*t4966;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t4931*t4962 - 1.*t4925*t4966;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0. + t4914*t4957 + t4922*t4960;
  p_output1[31]=0.;
  p_output1[32]=0. + t4922*t4957 - 1.*t4914*t4960;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=-0.24;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
}



void Jb_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
