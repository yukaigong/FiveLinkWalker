/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftShin_src.h"

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
  double t4104;
  double t4094;
  double t4100;
  double t4105;
  double t4093;
  double t4101;
  double t4106;
  double t4107;
  double t4112;
  double t4113;
  double t4115;
  double t4116;
  double t4118;
  double t4129;
  double t4131;
  double t4132;
  double t4124;
  double t4125;
  double t4126;
  double t4127;
  double t4128;
  double t4133;
  double t4134;
  double t4135;
  double t4136;
  double t4137;
  double t4139;
  double t4140;
  double t4146;
  double t4153;
  double t4154;
  double t4155;
  double t4152;
  double t4156;
  double t4157;
  double t4158;
  double t4159;
  double t4160;
  double t4110;
  double t4117;
  double t4119;
  double t4120;
  double t4121;
  double t4122;
  double t4123;
  double t4141;
  double t4142;
  double t4143;
  double t4144;
  double t4145;
  double t4147;
  double t4148;
  double t4149;
  double t4150;
  double t4151;
  double t4161;
  double t4162;
  double t4163;
  t4104 = Cos(var1[2]);
  t4094 = Cos(var1[3]);
  t4100 = Sin(var1[2]);
  t4105 = Sin(var1[3]);
  t4093 = Cos(var1[4]);
  t4101 = -1.*t4094*t4100;
  t4106 = -1.*t4104*t4105;
  t4107 = t4101 + t4106;
  t4112 = t4104*t4094;
  t4113 = -1.*t4100*t4105;
  t4115 = t4112 + t4113;
  t4116 = Sin(var1[4]);
  t4118 = t4093*t4107;
  t4129 = -1.*t4104*t4094;
  t4131 = t4100*t4105;
  t4132 = t4129 + t4131;
  t4124 = -1.*t4093;
  t4125 = 1. + t4124;
  t4126 = -0.4*t4125;
  t4127 = 0. + t4126;
  t4128 = t4127*t4107;
  t4133 = 0.4*t4116;
  t4134 = 0. + t4133;
  t4135 = t4132*t4134;
  t4136 = t4132*t4116;
  t4137 = t4118 + t4136;
  t4139 = -0.64*t4137;
  t4140 = t4128 + t4135 + t4139;
  t4146 = t4093*t4132;
  t4153 = t4094*t4100;
  t4154 = t4104*t4105;
  t4155 = t4153 + t4154;
  t4152 = t4127*t4132;
  t4156 = t4155*t4134;
  t4157 = t4155*t4116;
  t4158 = t4146 + t4157;
  t4159 = -0.64*t4158;
  t4160 = t4152 + t4156 + t4159;
  t4110 = 0.4*t4093*t4107;
  t4117 = -0.4*t4115*t4116;
  t4119 = -1.*t4115*t4116;
  t4120 = t4118 + t4119;
  t4121 = -0.64*t4120;
  t4122 = t4110 + t4117 + t4121;
  t4123 = var2[4]*t4122;
  t4141 = var2[2]*t4140;
  t4142 = var2[3]*t4140;
  t4143 = t4123 + t4141 + t4142;
  t4144 = 0.4*t4093*t4132;
  t4145 = -0.4*t4107*t4116;
  t4147 = -1.*t4107*t4116;
  t4148 = t4146 + t4147;
  t4149 = -0.64*t4148;
  t4150 = t4144 + t4145 + t4149;
  t4151 = var2[4]*t4150;
  t4161 = var2[2]*t4160;
  t4162 = var2[3]*t4160;
  t4163 = t4151 + t4161 + t4162;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4143;
  p_output1[7]=0;
  p_output1[8]=t4163;
  p_output1[9]=t4143;
  p_output1[10]=0;
  p_output1[11]=t4163;
  p_output1[12]=t4122*var2[2] + t4122*var2[3] + (t4117 - 0.4*t4093*t4155 - 0.64*(t4119 - 1.*t4093*t4155))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t4150*var2[2] + t4150*var2[3] + (-0.4*t4093*t4115 + t4145 - 0.64*(-1.*t4093*t4115 + t4147))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
