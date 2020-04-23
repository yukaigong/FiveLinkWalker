/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftKnee_src.h"

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
  double t2944;
  double t2938;
  double t2942;
  double t2945;
  double t2937;
  double t2943;
  double t2946;
  double t2948;
  double t2949;
  double t2955;
  double t2956;
  double t2957;
  double t2961;
  double t2962;
  double t2963;
  double t2976;
  double t2979;
  double t2980;
  double t2981;
  double t2982;
  double t2983;
  double t2987;
  double t2988;
  double t2989;
  double t2966;
  double t2967;
  double t2970;
  double t2997;
  double t2998;
  t2944 = Cos(var1[2]);
  t2938 = Cos(var1[3]);
  t2942 = Sin(var1[2]);
  t2945 = Sin(var1[3]);
  t2937 = Cos(var1[4]);
  t2943 = -1.*t2938*t2942;
  t2946 = -1.*t2944*t2945;
  t2948 = t2943 + t2946;
  t2949 = t2937*t2948;
  t2955 = t2944*t2938;
  t2956 = -1.*t2942*t2945;
  t2957 = t2955 + t2956;
  t2961 = Sin(var1[4]);
  t2962 = -1.*t2957*t2961;
  t2963 = t2949 + t2962;
  t2976 = -1.*t2948*t2961;
  t2979 = -1.*t2944*t2938;
  t2980 = t2942*t2945;
  t2981 = t2979 + t2980;
  t2982 = t2937*t2981;
  t2983 = t2982 + t2976;
  t2987 = t2937*t2957;
  t2988 = t2948*t2961;
  t2989 = t2987 + t2988;
  t2966 = t2938*t2942;
  t2967 = t2944*t2945;
  t2970 = t2966 + t2967;
  t2997 = t2981*t2961;
  t2998 = t2949 + t2997;
  p_output1[0]=t2963*var2[2] + t2963*var2[3] + (t2962 - 1.*t2937*t2970)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2983*var2[2] + t2983*var2[3] + (-1.*t2937*t2957 + t2976)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2989*var2[2] + t2989*var2[3] + (-1.*t2961*t2970 + t2987)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t2998*var2[2] + t2998*var2[3] + t2963*var2[4];
}



void dR_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
