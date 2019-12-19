/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightKnee_src.h"

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
  double t3411;
  double t3402;
  double t3406;
  double t3414;
  double t3399;
  double t3409;
  double t3417;
  double t3420;
  double t3429;
  double t3431;
  double t3432;
  double t3433;
  double t3434;
  double t3435;
  double t3436;
  double t3421;
  double t3422;
  double t3441;
  double t3443;
  double t3444;
  double t3445;
  double t3424;
  double t3418;
  double t3469;
  double t3470;
  double t3471;
  double t3477;
  double t3478;
  double t3450;
  double t3451;
  double t3452;
  double t3426;
  double t3485;
  double t3486;
  double t3487;
  double t3488;
  double t3489;
  double t3490;
  double t3491;
  double t3492;
  double t3493;
  double t3494;
  double t3495;
  double t3503;
  double t3504;
  t3411 = Cos(var1[5]);
  t3402 = Cos(var1[6]);
  t3406 = Sin(var1[5]);
  t3414 = Sin(var1[6]);
  t3399 = Cos(var1[2]);
  t3409 = -1.*t3402*t3406;
  t3417 = -1.*t3411*t3414;
  t3420 = Sin(var1[2]);
  t3429 = t3409 + t3417;
  t3431 = t3399*t3429;
  t3432 = -1.*t3411*t3402;
  t3433 = t3406*t3414;
  t3434 = t3432 + t3433;
  t3435 = t3420*t3434;
  t3436 = t3431 + t3435;
  t3421 = t3411*t3402;
  t3422 = -1.*t3406*t3414;
  t3441 = t3420*t3429;
  t3443 = t3421 + t3422;
  t3444 = t3399*t3443;
  t3445 = t3441 + t3444;
  t3424 = 0. + t3421 + t3422;
  t3418 = 0. + t3409 + t3417;
  t3469 = -1.*t3420*t3429;
  t3470 = t3399*t3434;
  t3471 = t3469 + t3470;
  t3477 = -1.*t3420*t3443;
  t3478 = t3431 + t3477;
  t3450 = t3402*t3406;
  t3451 = t3411*t3414;
  t3452 = 0. + t3450 + t3451;
  t3426 = -1.*t3420*t3424;
  t3485 = -1.*t3402;
  t3486 = 1. + t3485;
  t3487 = -0.4*t3486;
  t3488 = -0.4*t3402;
  t3489 = 0. + t3487 + t3488;
  t3490 = t3411*t3489;
  t3491 = 0. + t3490;
  t3492 = t3491*t3429;
  t3493 = t3489*t3406;
  t3494 = 0. + t3493;
  t3495 = t3494*t3443;
  t3503 = -1.*t3494*t3429;
  t3504 = -1.*t3491*t3434;
  p_output1[0]=(t3399*t3418 + t3426)*var2[2] + t3436*var2[5] + t3436*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t3399*t3424 - 1.*t3420*t3452)*var2[2] + t3445*var2[5] + t3445*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t3418*t3420 - 1.*t3399*t3424)*var2[2] + t3471*var2[5] + t3471*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t3426 - 1.*t3399*t3452)*var2[2] + t3478*var2[5] + t3478*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-1.*t3406*t3424*t3489 + t3411*t3452*t3489 + t3492 + t3495)*var2[5] + (0. + t3492 + t3495)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(t3406*t3418*t3489 - 1.*t3411*t3424*t3489 + t3503 + t3504)*var2[5] + (0. + t3503 + t3504)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  p_output1[30]=(0. - 1.*t3414*t3489)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0. + t3402*t3489)*var2[6];
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



void dJb_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
