/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightShin_src.h"

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
  double t2248;
  double t2251;
  double t2245;
  double t2252;
  double t2228;
  double t2249;
  double t2253;
  double t2254;
  double t2257;
  double t2258;
  double t2259;
  double t2261;
  double t2229;
  double t2233;
  double t2240;
  double t2243;
  double t2262;
  double t2263;
  double t2272;
  double t2273;
  double t2274;
  double t2255;
  double t2264;
  double t2265;
  double t2266;
  double t2267;
  double t2269;
  double t2270;
  double t2271;
  double t2275;
  double t2276;
  double t2277;
  double t2278;
  double t2279;
  double t2280;
  double t2282;
  double t2283;
  double t2284;
  t2248 = Cos(var1[5]);
  t2251 = Sin(var1[2]);
  t2245 = Cos(var1[2]);
  t2252 = Sin(var1[5]);
  t2228 = Cos(var1[6]);
  t2249 = t2245*t2248;
  t2253 = -1.*t2251*t2252;
  t2254 = t2249 + t2253;
  t2257 = -1.*t2248*t2251;
  t2258 = -1.*t2245*t2252;
  t2259 = t2257 + t2258;
  t2261 = Sin(var1[6]);
  t2229 = -1.*t2228;
  t2233 = 1. + t2229;
  t2240 = -0.4*t2233;
  t2243 = 0. + t2240;
  t2262 = 0.4*t2261;
  t2263 = 0. + t2262;
  t2272 = -1.*t2245*t2248;
  t2273 = t2251*t2252;
  t2274 = t2272 + t2273;
  t2255 = t2243*t2254;
  t2264 = t2259*t2263;
  t2265 = t2228*t2254;
  t2266 = t2259*t2261;
  t2267 = t2265 + t2266;
  t2269 = -0.64*t2267;
  t2270 = t2255 + t2264 + t2269;
  t2271 = t2243*t2259;
  t2275 = t2274*t2263;
  t2276 = t2228*t2259;
  t2277 = t2274*t2261;
  t2278 = t2276 + t2277;
  t2279 = -0.64*t2278;
  t2280 = t2271 + t2275 + t2279;
  t2282 = t2248*t2251;
  t2283 = t2245*t2252;
  t2284 = t2282 + t2283;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2270;
  p_output1[7]=0;
  p_output1[8]=t2280;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2270;
  p_output1[16]=0;
  p_output1[17]=t2280;
  p_output1[18]=0.4*t2228*t2254 - 0.4*t2261*t2284 - 0.64*(t2265 - 1.*t2261*t2284);
  p_output1[19]=0;
  p_output1[20]=0.4*t2228*t2259 - 0.4*t2254*t2261 - 0.64*(-1.*t2254*t2261 + t2276);
}



void Jp_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
