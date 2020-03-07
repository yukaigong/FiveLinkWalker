/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftThigh_src.h"

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
  double t1257;
  double t1258;
  double t1259;
  double t1260;
  double t1262;
  double t1263;
  double t1264;
  double t1268;
  double t1269;
  double t1270;
  double t1265;
  double t1266;
  double t1267;
  double t1271;
  double t1272;
  double t1273;
  t1257 = Cos(var1[3]);
  t1258 = Sin(var1[2]);
  t1259 = -1.*t1257*t1258;
  t1260 = Cos(var1[2]);
  t1262 = Sin(var1[3]);
  t1263 = -1.*t1260*t1262;
  t1264 = t1259 + t1263;
  t1268 = -1.*t1260*t1257;
  t1269 = t1258*t1262;
  t1270 = t1268 + t1269;
  t1265 = -0.11*var2[2]*t1264;
  t1266 = -0.11*var2[3]*t1264;
  t1267 = t1265 + t1266;
  t1271 = -0.11*var2[2]*t1270;
  t1272 = -0.11*var2[3]*t1270;
  t1273 = t1271 + t1272;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1267;
  p_output1[7]=0;
  p_output1[8]=t1273;
  p_output1[9]=t1267;
  p_output1[10]=0;
  p_output1[11]=t1273;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
