/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:03 GMT-05:00
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
  double t2113;
  double t2114;
  double t2115;
  double t2116;
  double t2118;
  double t2119;
  double t2120;
  double t2125;
  double t2126;
  double t2127;
  double t2131;
  double t2132;
  double t2133;
  double t2121;
  double t2122;
  double t2123;
  t2113 = Cos(var1[5]);
  t2114 = Sin(var1[2]);
  t2115 = -1.*t2113*t2114;
  t2116 = Cos(var1[2]);
  t2118 = Sin(var1[5]);
  t2119 = -1.*t2116*t2118;
  t2120 = t2115 + t2119;
  t2125 = -1.*t2116*t2113;
  t2126 = t2114*t2118;
  t2127 = t2125 + t2126;
  t2131 = t2116*t2113;
  t2132 = -1.*t2114*t2118;
  t2133 = t2131 + t2132;
  t2121 = var2[2]*t2120;
  t2122 = var2[5]*t2120;
  t2123 = t2121 + t2122;
  p_output1[0]=t2123;
  p_output1[1]=0;
  p_output1[2]=t2127*var2[2] + t2127*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2133*var2[2] + t2133*var2[5];
  p_output1[9]=0;
  p_output1[10]=t2123;
  p_output1[11]=0;
  p_output1[12]=var2[0] - 0.11*t2133*var2[2] - 0.11*t2133*var2[5];
  p_output1[13]=0;
  p_output1[14]=var2[1] - 0.11*t2120*var2[2] - 0.11*t2120*var2[5];
  p_output1[15]=0;
}



void dT_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
