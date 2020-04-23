/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightKnee_src.h"

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
  double t3270;
  double t3273;
  double t3267;
  double t3274;
  double t3250;
  double t3271;
  double t3275;
  double t3276;
  double t3279;
  double t3280;
  double t3281;
  double t3283;
  double t3251;
  double t3255;
  double t3262;
  double t3265;
  double t3284;
  double t3285;
  double t3294;
  double t3295;
  double t3296;
  double t3277;
  double t3286;
  double t3287;
  double t3288;
  double t3289;
  double t3291;
  double t3292;
  double t3293;
  double t3297;
  double t3298;
  double t3299;
  double t3300;
  double t3301;
  double t3302;
  double t3304;
  double t3305;
  double t3306;
  t3270 = Cos(var1[5]);
  t3273 = Sin(var1[2]);
  t3267 = Cos(var1[2]);
  t3274 = Sin(var1[5]);
  t3250 = Cos(var1[6]);
  t3271 = t3267*t3270;
  t3275 = -1.*t3273*t3274;
  t3276 = t3271 + t3275;
  t3279 = -1.*t3270*t3273;
  t3280 = -1.*t3267*t3274;
  t3281 = t3279 + t3280;
  t3283 = Sin(var1[6]);
  t3251 = -1.*t3250;
  t3255 = 1. + t3251;
  t3262 = -0.4*t3255;
  t3265 = 0. + t3262;
  t3284 = 0.4*t3283;
  t3285 = 0. + t3284;
  t3294 = -1.*t3267*t3270;
  t3295 = t3273*t3274;
  t3296 = t3294 + t3295;
  t3277 = t3265*t3276;
  t3286 = t3281*t3285;
  t3287 = t3250*t3276;
  t3288 = t3281*t3283;
  t3289 = t3287 + t3288;
  t3291 = -0.4*t3289;
  t3292 = t3277 + t3286 + t3291;
  t3293 = t3265*t3281;
  t3297 = t3296*t3285;
  t3298 = t3250*t3281;
  t3299 = t3296*t3283;
  t3300 = t3298 + t3299;
  t3301 = -0.4*t3300;
  t3302 = t3293 + t3297 + t3301;
  t3304 = t3270*t3273;
  t3305 = t3267*t3274;
  t3306 = t3304 + t3305;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t3292;
  p_output1[7]=0;
  p_output1[8]=t3302;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3292;
  p_output1[16]=0;
  p_output1[17]=t3302;
  p_output1[18]=0.4*t3250*t3276 - 0.4*t3283*t3306 - 0.4*(t3287 - 1.*t3283*t3306);
  p_output1[19]=0;
  p_output1[20]=0.4*t3250*t3281 - 0.4*t3276*t3283 - 0.4*(-1.*t3276*t3283 + t3298);
}



void Jp_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
