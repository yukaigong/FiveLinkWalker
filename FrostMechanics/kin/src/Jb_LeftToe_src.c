/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftToe_src.h"

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
  double t1075;
  double t1034;
  double t1040;
  double t1076;
  double t1106;
  double t986;
  double t1108;
  double t1117;
  double t1120;
  double t1050;
  double t1077;
  double t1093;
  double t1126;
  double t1130;
  double t1178;
  double t1121;
  double t1263;
  double t1266;
  double t1269;
  double t1271;
  double t1274;
  double t1308;
  double t1312;
  double t1332;
  double t1333;
  double t1335;
  double t1276;
  double t1313;
  double t1314;
  t1075 = Cos(var1[3]);
  t1034 = Cos(var1[4]);
  t1040 = Sin(var1[3]);
  t1076 = Sin(var1[4]);
  t1106 = Cos(var1[2]);
  t986 = Sin(var1[2]);
  t1108 = t1075*t1034;
  t1117 = -1.*t1040*t1076;
  t1120 = 0. + t1108 + t1117;
  t1050 = -1.*t1034*t1040;
  t1077 = -1.*t1075*t1076;
  t1093 = 0. + t1050 + t1077;
  t1126 = t1034*t1040;
  t1130 = t1075*t1076;
  t1178 = 0. + t1126 + t1130;
  t1121 = t1106*t1120;
  t1263 = -1.*t1034;
  t1266 = 1. + t1263;
  t1269 = -0.4*t1266;
  t1271 = -0.8*t1034;
  t1274 = 0. + t1269 + t1271;
  t1308 = -0.4*t1076;
  t1312 = 0. + t1308;
  t1332 = t1075*t1274;
  t1333 = -1.*t1040*t1312;
  t1335 = 0. + t1332 + t1333;
  t1276 = t1274*t1040;
  t1313 = t1075*t1312;
  t1314 = 0. + t1276 + t1313;
  p_output1[0]=0. + t1121 + t1093*t986;
  p_output1[1]=0.;
  p_output1[2]=0. + t1106*t1178 + t1120*t986;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t1093*t1106 - 1.*t1120*t986;
  p_output1[7]=0.;
  p_output1[8]=0. + t1121 - 1.*t1178*t986;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t1178*t1314 + t1120*t1335;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t1120*t1314 - 1.*t1093*t1335;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t1034*t1274 + t1076*t1312;
  p_output1[19]=0.;
  p_output1[20]=0. + t1076*t1274 - 1.*t1034*t1312;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=-0.4;
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



void Jb_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
