/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightShin_src.h"

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
  double t5212;
  double t5219;
  double t5211;
  double t5226;
  double t5201;
  double t5218;
  double t5227;
  double t5228;
  double t5234;
  double t5230;
  double t5231;
  double t5233;
  double t5229;
  double t5237;
  double t5238;
  double t5239;
  t5212 = Cos(var1[5]);
  t5219 = Sin(var1[2]);
  t5211 = Cos(var1[2]);
  t5226 = Sin(var1[5]);
  t5201 = Cos(var1[6]);
  t5218 = t5211*t5212;
  t5227 = -1.*t5219*t5226;
  t5228 = t5218 + t5227;
  t5234 = Sin(var1[6]);
  t5230 = t5212*t5219;
  t5231 = t5211*t5226;
  t5233 = t5230 + t5231;
  t5229 = t5201*t5228;
  t5237 = -1.*t5212*t5219;
  t5238 = -1.*t5211*t5226;
  t5239 = t5237 + t5238;
  p_output1[0]=t5229 - 1.*t5233*t5234;
  p_output1[1]=0.;
  p_output1[2]=-1.*t5228*t5234 + t5201*t5239;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t5201*t5233 + t5228*t5234;
  p_output1[7]=0.;
  p_output1[8]=t5229 + t5234*t5239;
}



void R_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
