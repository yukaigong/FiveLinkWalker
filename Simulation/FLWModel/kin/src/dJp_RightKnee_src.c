/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightKnee_src.h"

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
  double t3315;
  double t3305;
  double t3311;
  double t3316;
  double t3304;
  double t3312;
  double t3317;
  double t3318;
  double t3323;
  double t3324;
  double t3326;
  double t3327;
  double t3329;
  double t3340;
  double t3342;
  double t3343;
  double t3335;
  double t3336;
  double t3337;
  double t3338;
  double t3339;
  double t3344;
  double t3345;
  double t3346;
  double t3347;
  double t3348;
  double t3350;
  double t3351;
  double t3357;
  double t3364;
  double t3365;
  double t3366;
  double t3363;
  double t3367;
  double t3368;
  double t3369;
  double t3370;
  double t3371;
  double t3321;
  double t3328;
  double t3330;
  double t3331;
  double t3332;
  double t3333;
  double t3334;
  double t3352;
  double t3353;
  double t3354;
  double t3355;
  double t3356;
  double t3358;
  double t3359;
  double t3360;
  double t3361;
  double t3362;
  double t3372;
  double t3373;
  double t3374;
  t3315 = Cos(var1[2]);
  t3305 = Cos(var1[5]);
  t3311 = Sin(var1[2]);
  t3316 = Sin(var1[5]);
  t3304 = Cos(var1[6]);
  t3312 = -1.*t3305*t3311;
  t3317 = -1.*t3315*t3316;
  t3318 = t3312 + t3317;
  t3323 = t3315*t3305;
  t3324 = -1.*t3311*t3316;
  t3326 = t3323 + t3324;
  t3327 = Sin(var1[6]);
  t3329 = t3304*t3318;
  t3340 = -1.*t3315*t3305;
  t3342 = t3311*t3316;
  t3343 = t3340 + t3342;
  t3335 = -1.*t3304;
  t3336 = 1. + t3335;
  t3337 = -0.4*t3336;
  t3338 = 0. + t3337;
  t3339 = t3338*t3318;
  t3344 = 0.4*t3327;
  t3345 = 0. + t3344;
  t3346 = t3343*t3345;
  t3347 = t3343*t3327;
  t3348 = t3329 + t3347;
  t3350 = -0.4*t3348;
  t3351 = t3339 + t3346 + t3350;
  t3357 = t3304*t3343;
  t3364 = t3305*t3311;
  t3365 = t3315*t3316;
  t3366 = t3364 + t3365;
  t3363 = t3338*t3343;
  t3367 = t3366*t3345;
  t3368 = t3366*t3327;
  t3369 = t3357 + t3368;
  t3370 = -0.4*t3369;
  t3371 = t3363 + t3367 + t3370;
  t3321 = 0.4*t3304*t3318;
  t3328 = -0.4*t3326*t3327;
  t3330 = -1.*t3326*t3327;
  t3331 = t3329 + t3330;
  t3332 = -0.4*t3331;
  t3333 = t3321 + t3328 + t3332;
  t3334 = var2[6]*t3333;
  t3352 = var2[2]*t3351;
  t3353 = var2[5]*t3351;
  t3354 = t3334 + t3352 + t3353;
  t3355 = 0.4*t3304*t3343;
  t3356 = -0.4*t3318*t3327;
  t3358 = -1.*t3318*t3327;
  t3359 = t3357 + t3358;
  t3360 = -0.4*t3359;
  t3361 = t3355 + t3356 + t3360;
  t3362 = var2[6]*t3361;
  t3372 = var2[2]*t3371;
  t3373 = var2[5]*t3371;
  t3374 = t3362 + t3372 + t3373;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3354;
  p_output1[7]=0;
  p_output1[8]=t3374;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3354;
  p_output1[16]=0;
  p_output1[17]=t3374;
  p_output1[18]=t3333*var2[2] + t3333*var2[5] + (t3328 - 0.4*t3304*t3366 - 0.4*(t3330 - 1.*t3304*t3366))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t3361*var2[2] + t3361*var2[5] + (-0.4*t3304*t3326 + t3356 - 0.4*(-1.*t3304*t3326 + t3358))*var2[6];
}



void dJp_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
