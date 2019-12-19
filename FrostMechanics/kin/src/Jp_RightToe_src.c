/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightToe_src.h"

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
  double t2941;
  double t2945;
  double t2940;
  double t2946;
  double t1592;
  double t2942;
  double t2949;
  double t2950;
  double t2953;
  double t2954;
  double t2955;
  double t2957;
  double t1593;
  double t2797;
  double t2928;
  double t2937;
  double t2958;
  double t2959;
  double t2970;
  double t2976;
  double t2980;
  double t2951;
  double t2960;
  double t2961;
  double t2962;
  double t2963;
  double t2967;
  double t2968;
  double t2969;
  double t2981;
  double t2982;
  double t2983;
  double t2987;
  double t2988;
  double t2989;
  double t2997;
  double t2998;
  double t3001;
  t2941 = Cos(var1[5]);
  t2945 = Sin(var1[2]);
  t2940 = Cos(var1[2]);
  t2946 = Sin(var1[5]);
  t1592 = Cos(var1[6]);
  t2942 = t2940*t2941;
  t2949 = -1.*t2945*t2946;
  t2950 = t2942 + t2949;
  t2953 = -1.*t2941*t2945;
  t2954 = -1.*t2940*t2946;
  t2955 = t2953 + t2954;
  t2957 = Sin(var1[6]);
  t1593 = -1.*t1592;
  t2797 = 1. + t1593;
  t2928 = -0.4*t2797;
  t2937 = 0. + t2928;
  t2958 = 0.4*t2957;
  t2959 = 0. + t2958;
  t2970 = -1.*t2940*t2941;
  t2976 = t2945*t2946;
  t2980 = t2970 + t2976;
  t2951 = t2937*t2950;
  t2960 = t2955*t2959;
  t2961 = t1592*t2950;
  t2962 = t2955*t2957;
  t2963 = t2961 + t2962;
  t2967 = -0.8*t2963;
  t2968 = t2951 + t2960 + t2967;
  t2969 = t2937*t2955;
  t2981 = t2980*t2959;
  t2982 = t1592*t2955;
  t2983 = t2980*t2957;
  t2987 = t2982 + t2983;
  t2988 = -0.8*t2987;
  t2989 = t2969 + t2981 + t2988;
  t2997 = t2941*t2945;
  t2998 = t2940*t2946;
  t3001 = t2997 + t2998;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2968;
  p_output1[7]=0;
  p_output1[8]=t2989;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2968;
  p_output1[16]=0;
  p_output1[17]=t2989;
  p_output1[18]=0.4*t1592*t2950 - 0.4*t2957*t3001 - 0.8*(t2961 - 1.*t2957*t3001);
  p_output1[19]=0;
  p_output1[20]=0.4*t1592*t2955 - 0.4*t2950*t2957 - 0.8*(-1.*t2950*t2957 + t2982);
}



void Jp_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
