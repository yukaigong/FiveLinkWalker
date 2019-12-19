/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftShin_src.h"

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
  double t4204;
  double t4193;
  double t4199;
  double t4206;
  double t4189;
  double t4202;
  double t4210;
  double t4215;
  double t4224;
  double t4226;
  double t4227;
  double t4228;
  double t4229;
  double t4230;
  double t4231;
  double t4216;
  double t4217;
  double t4236;
  double t4238;
  double t4239;
  double t4240;
  double t4219;
  double t4211;
  double t4265;
  double t4269;
  double t4270;
  double t4275;
  double t4276;
  double t4245;
  double t4246;
  double t4247;
  double t4221;
  double t4285;
  double t4287;
  double t4288;
  double t4289;
  double t4290;
  double t4291;
  double t4292;
  double t4293;
  double t4294;
  double t4295;
  double t4296;
  double t4299;
  double t4300;
  double t4301;
  double t4302;
  double t4303;
  double t4304;
  double t4305;
  double t4297;
  double t4320;
  double t4309;
  double t4310;
  double t4311;
  double t4313;
  double t4314;
  double t4315;
  double t4323;
  t4204 = Cos(var1[3]);
  t4193 = Cos(var1[4]);
  t4199 = Sin(var1[3]);
  t4206 = Sin(var1[4]);
  t4189 = Cos(var1[2]);
  t4202 = -1.*t4193*t4199;
  t4210 = -1.*t4204*t4206;
  t4215 = Sin(var1[2]);
  t4224 = t4202 + t4210;
  t4226 = t4189*t4224;
  t4227 = -1.*t4204*t4193;
  t4228 = t4199*t4206;
  t4229 = t4227 + t4228;
  t4230 = t4215*t4229;
  t4231 = t4226 + t4230;
  t4216 = t4204*t4193;
  t4217 = -1.*t4199*t4206;
  t4236 = t4215*t4224;
  t4238 = t4216 + t4217;
  t4239 = t4189*t4238;
  t4240 = t4236 + t4239;
  t4219 = 0. + t4216 + t4217;
  t4211 = 0. + t4202 + t4210;
  t4265 = -1.*t4215*t4224;
  t4269 = t4189*t4229;
  t4270 = t4265 + t4269;
  t4275 = -1.*t4215*t4238;
  t4276 = t4226 + t4275;
  t4245 = t4193*t4199;
  t4246 = t4204*t4206;
  t4247 = 0. + t4245 + t4246;
  t4221 = -1.*t4215*t4219;
  t4285 = -1.*t4193;
  t4287 = 1. + t4285;
  t4288 = -0.4*t4287;
  t4289 = -0.64*t4193;
  t4290 = 0. + t4288 + t4289;
  t4291 = t4204*t4290;
  t4292 = -0.24*t4206;
  t4293 = 0. + t4292;
  t4294 = -1.*t4199*t4293;
  t4295 = 0. + t4291 + t4294;
  t4296 = t4295*t4224;
  t4299 = t4290*t4199;
  t4300 = t4204*t4293;
  t4301 = 0. + t4299 + t4300;
  t4302 = t4301*t4238;
  t4303 = -1.*t4290*t4199;
  t4304 = -1.*t4204*t4293;
  t4305 = t4303 + t4304;
  t4297 = t4291 + t4294;
  t4320 = -1.*t4301*t4224;
  t4309 = 0.24*t4193*t4199;
  t4310 = 0.24*t4204*t4206;
  t4311 = t4309 + t4310;
  t4313 = -0.24*t4204*t4193;
  t4314 = 0.24*t4199*t4206;
  t4315 = t4313 + t4314;
  t4323 = -1.*t4295*t4229;
  p_output1[0]=(t4189*t4211 + t4221)*var2[2] + t4231*var2[3] + t4231*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t4189*t4219 - 1.*t4215*t4247)*var2[2] + t4240*var2[3] + t4240*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t4211*t4215 - 1.*t4189*t4219)*var2[2] + t4270*var2[3] + t4270*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t4221 - 1.*t4189*t4247)*var2[2] + t4276*var2[3] + t4276*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t4296 + t4247*t4297 + t4302 + t4219*t4305)*var2[3] + (t4296 + t4302 + t4219*t4311 + t4247*t4315)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t4219*t4297 - 1.*t4211*t4305 + t4320 + t4323)*var2[3] + (-1.*t4211*t4311 - 1.*t4219*t4315 + t4320 + t4323)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t4206*t4290 + t4193*t4293)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.24*Power(t4193,2) + 0.24*Power(t4206,2) + t4193*t4290 + t4206*t4293)*var2[4];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
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



void dJb_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
