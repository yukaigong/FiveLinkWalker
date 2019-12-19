/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_COM_src.h"

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
  double t4;
  double t14;
  double t15;
  double t19;
  double t24;
  double t25;
  double t26;
  double t30;
  double t42;
  double t47;
  double t48;
  double t49;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  double t68;
  double t72;
  double t73;
  double t74;
  double t75;
  double t36;
  double t37;
  double t95;
  double t96;
  double t97;
  double t69;
  double t70;
  double t109;
  double t110;
  double t111;
  t4 = Sin(var1[2]);
  t14 = Cos(var1[3]);
  t15 = t14*t4;
  t19 = Cos(var1[2]);
  t24 = Sin(var1[3]);
  t25 = t19*t24;
  t26 = t15 + t25;
  t30 = Cos(var1[4]);
  t42 = t19*t14;
  t47 = -1.*t4*t24;
  t48 = t42 + t47;
  t49 = Sin(var1[4]);
  t57 = Cos(var1[5]);
  t58 = t57*t4;
  t59 = Sin(var1[5]);
  t60 = t19*t59;
  t61 = t58 + t60;
  t68 = Cos(var1[6]);
  t72 = t19*t57;
  t73 = -1.*t4*t59;
  t74 = t72 + t73;
  t75 = Sin(var1[6]);
  t36 = -1.*t30;
  t37 = 1. + t36;
  t95 = -1.*t14*t4;
  t96 = -1.*t19*t24;
  t97 = t95 + t96;
  t69 = -1.*t68;
  t70 = 1. + t69;
  t109 = -1.*t57*t4;
  t110 = -1.*t19*t59;
  t111 = t109 + t110;
  p_output1[0]=0.03125*(6.8*(-0.11*t26 + var1[0]) + 12.*(0.24*t4 + var1[0]) + 3.2*(-0.4*t26*t37 + 0.4*t48*t49 - 0.64*(t26*t30 + t48*t49) + var1[0]) + 6.8*(-0.11*t61 + var1[0]) + 3.2*(-0.4*t61*t70 + 0.4*t74*t75 - 0.64*(t61*t68 + t74*t75) + var1[0]));
  p_output1[1]=0;
  p_output1[2]=0.03125*(12.*(0.24*t19 + var1[1]) + 6.8*(-0.11*t48 + var1[1]) + 6.8*(-0.11*t74 + var1[1]) + 3.2*(-0.4*t70*t74 + 0.4*t111*t75 - 0.64*(t68*t74 + t111*t75) + var1[1]) + 3.2*(-0.4*t37*t48 + 0.4*t49*t97 - 0.64*(t30*t48 + t49*t97) + var1[1]));
}



void p_COM_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
