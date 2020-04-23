/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightHip_src.h"

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
  double t3118;
  double t3119;
  double t3120;
  double t3124;
  double t3125;
  double t3126;
  double t3127;
  double t3131;
  double t3132;
  double t3133;
  double t3137;
  double t3138;
  double t3139;
  double t3128;
  double t3129;
  double t3130;
  t3118 = Cos(var1[5]);
  t3119 = Sin(var1[2]);
  t3120 = -1.*t3118*t3119;
  t3124 = Cos(var1[2]);
  t3125 = Sin(var1[5]);
  t3126 = -1.*t3124*t3125;
  t3127 = t3120 + t3126;
  t3131 = -1.*t3124*t3118;
  t3132 = t3119*t3125;
  t3133 = t3131 + t3132;
  t3137 = t3124*t3118;
  t3138 = -1.*t3119*t3125;
  t3139 = t3137 + t3138;
  t3128 = var2[2]*t3127;
  t3129 = var2[5]*t3127;
  t3130 = t3128 + t3129;
  p_output1[0]=t3130;
  p_output1[1]=0;
  p_output1[2]=t3133*var2[2] + t3133*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t3139*var2[2] + t3139*var2[5];
  p_output1[9]=0;
  p_output1[10]=t3130;
  p_output1[11]=0;
  p_output1[12]=var2[0];
  p_output1[13]=0;
  p_output1[14]=var2[1];
  p_output1[15]=0;
}



void dT_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
