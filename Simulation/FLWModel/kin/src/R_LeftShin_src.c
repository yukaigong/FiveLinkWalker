/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftShin_src.h"

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
  double t1862;
  double t1868;
  double t1860;
  double t1875;
  double t1853;
  double t1867;
  double t1876;
  double t1877;
  double t1883;
  double t1879;
  double t1880;
  double t1882;
  double t1878;
  double t1886;
  double t1887;
  double t1888;
  t1862 = Cos(var1[3]);
  t1868 = Sin(var1[2]);
  t1860 = Cos(var1[2]);
  t1875 = Sin(var1[3]);
  t1853 = Cos(var1[4]);
  t1867 = t1860*t1862;
  t1876 = -1.*t1868*t1875;
  t1877 = t1867 + t1876;
  t1883 = Sin(var1[4]);
  t1879 = t1862*t1868;
  t1880 = t1860*t1875;
  t1882 = t1879 + t1880;
  t1878 = t1853*t1877;
  t1886 = -1.*t1862*t1868;
  t1887 = -1.*t1860*t1875;
  t1888 = t1886 + t1887;
  p_output1[0]=t1878 - 1.*t1882*t1883;
  p_output1[1]=0.;
  p_output1[2]=-1.*t1877*t1883 + t1853*t1888;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t1853*t1882 + t1877*t1883;
  p_output1[7]=0.;
  p_output1[8]=t1878 + t1883*t1888;
}



void R_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
