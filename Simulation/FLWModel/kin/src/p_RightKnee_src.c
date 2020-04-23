/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightKnee_src.h"

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
  double t3238;
  double t3234;
  double t3235;
  double t3239;
  double t3225;
  double t3237;
  double t3240;
  double t3241;
  double t3243;
  double t3244;
  double t3245;
  double t3246;
  double t3226;
  double t3229;
  double t3232;
  double t3233;
  double t3247;
  double t3250;
  double t3258;
  double t3259;
  double t3260;
  t3238 = Cos(var1[2]);
  t3234 = Cos(var1[5]);
  t3235 = Sin(var1[2]);
  t3239 = Sin(var1[5]);
  t3225 = Cos(var1[6]);
  t3237 = t3234*t3235;
  t3240 = t3238*t3239;
  t3241 = t3237 + t3240;
  t3243 = t3238*t3234;
  t3244 = -1.*t3235*t3239;
  t3245 = t3243 + t3244;
  t3246 = Sin(var1[6]);
  t3226 = -1.*t3225;
  t3229 = 1. + t3226;
  t3232 = -0.4*t3229;
  t3233 = 0. + t3232;
  t3247 = 0.4*t3246;
  t3250 = 0. + t3247;
  t3258 = -1.*t3234*t3235;
  t3259 = -1.*t3238*t3239;
  t3260 = t3258 + t3259;
  p_output1[0]=0. + t3233*t3241 - 0.4*(t3225*t3241 + t3245*t3246) + t3245*t3250 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3233*t3245 + t3250*t3260 - 0.4*(t3225*t3245 + t3246*t3260) + var1[1];
}



void p_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
