/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightThigh_src.h"

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
  double t4616;
  double t4617;
  double t4618;
  double t4619;
  double t4621;
  double t4622;
  double t4623;
  double t4627;
  double t4628;
  double t4629;
  double t4624;
  double t4625;
  double t4626;
  double t4630;
  double t4631;
  double t4632;
  t4616 = Cos(var1[5]);
  t4617 = Sin(var1[2]);
  t4618 = -1.*t4616*t4617;
  t4619 = Cos(var1[2]);
  t4621 = Sin(var1[5]);
  t4622 = -1.*t4619*t4621;
  t4623 = t4618 + t4622;
  t4627 = -1.*t4619*t4616;
  t4628 = t4617*t4621;
  t4629 = t4627 + t4628;
  t4624 = -0.11*var2[2]*t4623;
  t4625 = -0.11*var2[5]*t4623;
  t4626 = t4624 + t4625;
  t4630 = -0.11*var2[2]*t4629;
  t4631 = -0.11*var2[5]*t4629;
  t4632 = t4630 + t4631;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4626;
  p_output1[7]=0;
  p_output1[8]=t4632;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t4626;
  p_output1[16]=0;
  p_output1[17]=t4632;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
