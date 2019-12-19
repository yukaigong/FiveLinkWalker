/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:51 GMT-05:00
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
  double t4447;
  double t4453;
  double t4445;
  double t4460;
  double t4438;
  double t4452;
  double t4461;
  double t4462;
  double t4468;
  double t4464;
  double t4465;
  double t4467;
  double t4463;
  double t4471;
  double t4472;
  double t4473;
  t4447 = Cos(var1[3]);
  t4453 = Sin(var1[2]);
  t4445 = Cos(var1[2]);
  t4460 = Sin(var1[3]);
  t4438 = Cos(var1[4]);
  t4452 = t4445*t4447;
  t4461 = -1.*t4453*t4460;
  t4462 = t4452 + t4461;
  t4468 = Sin(var1[4]);
  t4464 = t4447*t4453;
  t4465 = t4445*t4460;
  t4467 = t4464 + t4465;
  t4463 = t4438*t4462;
  t4471 = -1.*t4447*t4453;
  t4472 = -1.*t4445*t4460;
  t4473 = t4471 + t4472;
  p_output1[0]=t4463 - 1.*t4467*t4468;
  p_output1[1]=0.;
  p_output1[2]=-1.*t4462*t4468 + t4438*t4473;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t4438*t4467 + t4462*t4468;
  p_output1[7]=0.;
  p_output1[8]=t4463 + t4468*t4473;
}



void R_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
