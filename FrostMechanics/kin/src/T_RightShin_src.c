/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:29 GMT-05:00
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
  double t5114;
  double t5119;
  double t5113;
  double t5124;
  double t5101;
  double t5118;
  double t5126;
  double t5127;
  double t5133;
  double t5130;
  double t5131;
  double t5132;
  double t5129;
  double t5138;
  double t5139;
  double t5140;
  double t5144;
  double t5145;
  double t5146;
  double t5149;
  double t5150;
  double t5151;
  double t5152;
  double t5154;
  double t5155;
  double t5147;
  double t5148;
  t5114 = Cos(var1[5]);
  t5119 = Sin(var1[2]);
  t5113 = Cos(var1[2]);
  t5124 = Sin(var1[5]);
  t5101 = Cos(var1[6]);
  t5118 = t5113*t5114;
  t5126 = -1.*t5119*t5124;
  t5127 = t5118 + t5126;
  t5133 = Sin(var1[6]);
  t5130 = t5114*t5119;
  t5131 = t5113*t5124;
  t5132 = t5130 + t5131;
  t5129 = t5101*t5127;
  t5138 = -1.*t5114*t5119;
  t5139 = -1.*t5113*t5124;
  t5140 = t5138 + t5139;
  t5144 = t5101*t5132;
  t5145 = t5127*t5133;
  t5146 = t5144 + t5145;
  t5149 = -1.*t5101;
  t5150 = 1. + t5149;
  t5151 = -0.4*t5150;
  t5152 = 0. + t5151;
  t5154 = 0.4*t5133;
  t5155 = 0. + t5154;
  t5147 = t5140*t5133;
  t5148 = t5129 + t5147;
  p_output1[0]=t5129 - 1.*t5132*t5133;
  p_output1[1]=0.;
  p_output1[2]=-1.*t5127*t5133 + t5101*t5140;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t5146;
  p_output1[9]=0.;
  p_output1[10]=t5148;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t5146 + t5132*t5152 + t5127*t5155 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t5148 + t5127*t5152 + t5140*t5155 + var1[1];
  p_output1[15]=1.;
}



void T_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
