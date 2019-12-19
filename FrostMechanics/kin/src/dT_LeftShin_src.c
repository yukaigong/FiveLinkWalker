/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftShin_src.h"

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
  double t4402;
  double t4392;
  double t4400;
  double t4403;
  double t4391;
  double t4401;
  double t4405;
  double t4406;
  double t4407;
  double t4408;
  double t4409;
  double t4411;
  double t4412;
  double t4414;
  double t4415;
  double t4428;
  double t4431;
  double t4432;
  double t4433;
  double t4434;
  double t4435;
  double t4441;
  double t4442;
  double t4443;
  double t4419;
  double t4420;
  double t4421;
  double t4451;
  double t4452;
  double t4456;
  double t4457;
  double t4458;
  double t4459;
  double t4460;
  double t4461;
  double t4462;
  double t4463;
  double t4464;
  double t4465;
  double t4446;
  double t4447;
  double t4479;
  double t4480;
  double t4481;
  double t4482;
  t4402 = Cos(var1[2]);
  t4392 = Cos(var1[3]);
  t4400 = Sin(var1[2]);
  t4403 = Sin(var1[3]);
  t4391 = Cos(var1[4]);
  t4401 = -1.*t4392*t4400;
  t4405 = -1.*t4402*t4403;
  t4406 = t4401 + t4405;
  t4407 = t4391*t4406;
  t4408 = t4402*t4392;
  t4409 = -1.*t4400*t4403;
  t4411 = t4408 + t4409;
  t4412 = Sin(var1[4]);
  t4414 = -1.*t4411*t4412;
  t4415 = t4407 + t4414;
  t4428 = -1.*t4406*t4412;
  t4431 = -1.*t4402*t4392;
  t4432 = t4400*t4403;
  t4433 = t4431 + t4432;
  t4434 = t4391*t4433;
  t4435 = t4434 + t4428;
  t4441 = t4391*t4411;
  t4442 = t4406*t4412;
  t4443 = t4441 + t4442;
  t4419 = t4392*t4400;
  t4420 = t4402*t4403;
  t4421 = t4419 + t4420;
  t4451 = t4433*t4412;
  t4452 = t4407 + t4451;
  t4456 = -1.*t4391;
  t4457 = 1. + t4456;
  t4458 = -0.4*t4457;
  t4459 = 0. + t4458;
  t4460 = t4459*t4411;
  t4461 = 0.4*t4412;
  t4462 = 0. + t4461;
  t4463 = t4406*t4462;
  t4464 = -0.64*t4443;
  t4465 = t4460 + t4463 + t4464;
  t4446 = -1.*t4421*t4412;
  t4447 = t4441 + t4446;
  t4479 = t4459*t4406;
  t4480 = t4433*t4462;
  t4481 = -0.64*t4452;
  t4482 = t4479 + t4480 + t4481;
  p_output1[0]=t4415*var2[2] + t4415*var2[3] + (t4414 - 1.*t4391*t4421)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t4435*var2[2] + t4435*var2[3] + (-1.*t4391*t4411 + t4428)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t4443*var2[2] + t4443*var2[3] + t4447*var2[4];
  p_output1[9]=0;
  p_output1[10]=t4452*var2[2] + t4452*var2[3] + t4415*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t4465*var2[2] + t4465*var2[3] + (0.4*t4391*t4411 - 0.4*t4412*t4421 - 0.64*t4447)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t4482*var2[2] + t4482*var2[3] + (0.4*t4391*t4406 - 0.4*t4411*t4412 - 0.64*t4415)*var2[4];
  p_output1[15]=0;
}



void dT_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
