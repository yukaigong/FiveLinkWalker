/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftShin_src.h"

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
  double t4059;
  double t4062;
  double t4056;
  double t4063;
  double t4039;
  double t4060;
  double t4064;
  double t4065;
  double t4068;
  double t4069;
  double t4070;
  double t4072;
  double t4040;
  double t4044;
  double t4051;
  double t4054;
  double t4073;
  double t4074;
  double t4083;
  double t4084;
  double t4085;
  double t4066;
  double t4075;
  double t4076;
  double t4077;
  double t4078;
  double t4080;
  double t4081;
  double t4082;
  double t4086;
  double t4087;
  double t4088;
  double t4089;
  double t4090;
  double t4091;
  double t4093;
  double t4094;
  double t4095;
  t4059 = Cos(var1[3]);
  t4062 = Sin(var1[2]);
  t4056 = Cos(var1[2]);
  t4063 = Sin(var1[3]);
  t4039 = Cos(var1[4]);
  t4060 = t4056*t4059;
  t4064 = -1.*t4062*t4063;
  t4065 = t4060 + t4064;
  t4068 = -1.*t4059*t4062;
  t4069 = -1.*t4056*t4063;
  t4070 = t4068 + t4069;
  t4072 = Sin(var1[4]);
  t4040 = -1.*t4039;
  t4044 = 1. + t4040;
  t4051 = -0.4*t4044;
  t4054 = 0. + t4051;
  t4073 = 0.4*t4072;
  t4074 = 0. + t4073;
  t4083 = -1.*t4056*t4059;
  t4084 = t4062*t4063;
  t4085 = t4083 + t4084;
  t4066 = t4054*t4065;
  t4075 = t4070*t4074;
  t4076 = t4039*t4065;
  t4077 = t4070*t4072;
  t4078 = t4076 + t4077;
  t4080 = -0.64*t4078;
  t4081 = t4066 + t4075 + t4080;
  t4082 = t4054*t4070;
  t4086 = t4085*t4074;
  t4087 = t4039*t4070;
  t4088 = t4085*t4072;
  t4089 = t4087 + t4088;
  t4090 = -0.64*t4089;
  t4091 = t4082 + t4086 + t4090;
  t4093 = t4059*t4062;
  t4094 = t4056*t4063;
  t4095 = t4093 + t4094;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t4081;
  p_output1[7]=0;
  p_output1[8]=t4091;
  p_output1[9]=t4081;
  p_output1[10]=0;
  p_output1[11]=t4091;
  p_output1[12]=0.4*t4039*t4065 - 0.4*t4072*t4095 - 0.64*(t4076 - 1.*t4072*t4095);
  p_output1[13]=0;
  p_output1[14]=0.4*t4039*t4070 - 0.4*t4065*t4072 - 0.64*(-1.*t4065*t4072 + t4087);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void Jp_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
