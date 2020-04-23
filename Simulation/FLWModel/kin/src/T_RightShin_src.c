/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightShin_src.h"

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
  double t2536;
  double t2542;
  double t2535;
  double t2547;
  double t2524;
  double t2540;
  double t2548;
  double t2550;
  double t2555;
  double t2552;
  double t2553;
  double t2554;
  double t2551;
  double t2560;
  double t2561;
  double t2562;
  double t2566;
  double t2567;
  double t2568;
  double t2571;
  double t2572;
  double t2573;
  double t2574;
  double t2576;
  double t2577;
  double t2569;
  double t2570;
  t2536 = Cos(var1[5]);
  t2542 = Sin(var1[2]);
  t2535 = Cos(var1[2]);
  t2547 = Sin(var1[5]);
  t2524 = Cos(var1[6]);
  t2540 = t2535*t2536;
  t2548 = -1.*t2542*t2547;
  t2550 = t2540 + t2548;
  t2555 = Sin(var1[6]);
  t2552 = t2536*t2542;
  t2553 = t2535*t2547;
  t2554 = t2552 + t2553;
  t2551 = t2524*t2550;
  t2560 = -1.*t2536*t2542;
  t2561 = -1.*t2535*t2547;
  t2562 = t2560 + t2561;
  t2566 = t2524*t2554;
  t2567 = t2550*t2555;
  t2568 = t2566 + t2567;
  t2571 = -1.*t2524;
  t2572 = 1. + t2571;
  t2573 = -0.4*t2572;
  t2574 = 0. + t2573;
  t2576 = 0.4*t2555;
  t2577 = 0. + t2576;
  t2569 = t2562*t2555;
  t2570 = t2551 + t2569;
  p_output1[0]=t2551 - 1.*t2554*t2555;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2550*t2555 + t2524*t2562;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t2568;
  p_output1[9]=0.;
  p_output1[10]=t2570;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t2568 + t2554*t2574 + t2550*t2577 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t2570 + t2550*t2574 + t2562*t2577 + var1[1];
  p_output1[15]=1.;
}



void T_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
