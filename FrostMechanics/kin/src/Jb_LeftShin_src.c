/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftShin_src.h"

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
  double t4151;
  double t4144;
  double t4145;
  double t4152;
  double t4158;
  double t4143;
  double t4159;
  double t4160;
  double t4161;
  double t4150;
  double t4153;
  double t4156;
  double t4167;
  double t4168;
  double t4169;
  double t4162;
  double t4183;
  double t4184;
  double t4185;
  double t4186;
  double t4187;
  double t4189;
  double t4190;
  double t4194;
  double t4195;
  double t4196;
  double t4188;
  double t4191;
  double t4192;
  t4151 = Cos(var1[3]);
  t4144 = Cos(var1[4]);
  t4145 = Sin(var1[3]);
  t4152 = Sin(var1[4]);
  t4158 = Cos(var1[2]);
  t4143 = Sin(var1[2]);
  t4159 = t4151*t4144;
  t4160 = -1.*t4145*t4152;
  t4161 = 0. + t4159 + t4160;
  t4150 = -1.*t4144*t4145;
  t4153 = -1.*t4151*t4152;
  t4156 = 0. + t4150 + t4153;
  t4167 = t4144*t4145;
  t4168 = t4151*t4152;
  t4169 = 0. + t4167 + t4168;
  t4162 = t4158*t4161;
  t4183 = -1.*t4144;
  t4184 = 1. + t4183;
  t4185 = -0.4*t4184;
  t4186 = -0.64*t4144;
  t4187 = 0. + t4185 + t4186;
  t4189 = -0.24*t4152;
  t4190 = 0. + t4189;
  t4194 = t4151*t4187;
  t4195 = -1.*t4145*t4190;
  t4196 = 0. + t4194 + t4195;
  t4188 = t4187*t4145;
  t4191 = t4151*t4190;
  t4192 = 0. + t4188 + t4191;
  p_output1[0]=0. + t4143*t4156 + t4162;
  p_output1[1]=0.;
  p_output1[2]=0. + t4143*t4161 + t4158*t4169;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t4156*t4158 - 1.*t4143*t4161;
  p_output1[7]=0.;
  p_output1[8]=0. + t4162 - 1.*t4143*t4169;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t4169*t4192 + t4161*t4196;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t4161*t4192 - 1.*t4156*t4196;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t4144*t4187 + t4152*t4190;
  p_output1[19]=0.;
  p_output1[20]=0. + t4152*t4187 - 1.*t4144*t4190;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=-0.24;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=1.;
  p_output1[29]=0.;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
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



void Jb_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
