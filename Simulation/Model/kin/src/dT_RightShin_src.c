/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightShin_src.h"

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
  double t5169;
  double t5159;
  double t5160;
  double t5170;
  double t1101;
  double t5168;
  double t5171;
  double t5173;
  double t5174;
  double t5175;
  double t5176;
  double t5177;
  double t5179;
  double t5180;
  double t5182;
  double t5195;
  double t5198;
  double t5199;
  double t5200;
  double t5201;
  double t5202;
  double t5208;
  double t5209;
  double t5210;
  double t5186;
  double t5187;
  double t5188;
  double t5218;
  double t5219;
  double t5223;
  double t5224;
  double t5225;
  double t5226;
  double t5227;
  double t5228;
  double t5229;
  double t5230;
  double t5231;
  double t5232;
  double t5213;
  double t5214;
  double t5246;
  double t5247;
  double t5248;
  double t5249;
  t5169 = Cos(var1[2]);
  t5159 = Cos(var1[5]);
  t5160 = Sin(var1[2]);
  t5170 = Sin(var1[5]);
  t1101 = Cos(var1[6]);
  t5168 = -1.*t5159*t5160;
  t5171 = -1.*t5169*t5170;
  t5173 = t5168 + t5171;
  t5174 = t1101*t5173;
  t5175 = t5169*t5159;
  t5176 = -1.*t5160*t5170;
  t5177 = t5175 + t5176;
  t5179 = Sin(var1[6]);
  t5180 = -1.*t5177*t5179;
  t5182 = t5174 + t5180;
  t5195 = -1.*t5173*t5179;
  t5198 = -1.*t5169*t5159;
  t5199 = t5160*t5170;
  t5200 = t5198 + t5199;
  t5201 = t1101*t5200;
  t5202 = t5201 + t5195;
  t5208 = t1101*t5177;
  t5209 = t5173*t5179;
  t5210 = t5208 + t5209;
  t5186 = t5159*t5160;
  t5187 = t5169*t5170;
  t5188 = t5186 + t5187;
  t5218 = t5200*t5179;
  t5219 = t5174 + t5218;
  t5223 = -1.*t1101;
  t5224 = 1. + t5223;
  t5225 = -0.4*t5224;
  t5226 = 0. + t5225;
  t5227 = t5226*t5177;
  t5228 = 0.4*t5179;
  t5229 = 0. + t5228;
  t5230 = t5173*t5229;
  t5231 = -0.64*t5210;
  t5232 = t5227 + t5230 + t5231;
  t5213 = -1.*t5188*t5179;
  t5214 = t5208 + t5213;
  t5246 = t5226*t5173;
  t5247 = t5200*t5229;
  t5248 = -0.64*t5219;
  t5249 = t5246 + t5247 + t5248;
  p_output1[0]=t5182*var2[2] + t5182*var2[5] + (t5180 - 1.*t1101*t5188)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t5202*var2[2] + t5202*var2[5] + (-1.*t1101*t5177 + t5195)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t5210*var2[2] + t5210*var2[5] + t5214*var2[6];
  p_output1[9]=0;
  p_output1[10]=t5219*var2[2] + t5219*var2[5] + t5182*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t5232*var2[2] + t5232*var2[5] + (0.4*t1101*t5177 - 0.4*t5179*t5188 - 0.64*t5214)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t5249*var2[2] + t5249*var2[5] + (0.4*t1101*t5173 - 0.4*t5177*t5179 - 0.64*t5182)*var2[6];
  p_output1[15]=0;
}



void dT_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
