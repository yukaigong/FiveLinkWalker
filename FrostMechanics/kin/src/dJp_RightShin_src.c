/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightShin_src.h"

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
  double t2293;
  double t2283;
  double t2289;
  double t2294;
  double t2282;
  double t2290;
  double t2295;
  double t2296;
  double t2301;
  double t2302;
  double t2304;
  double t2305;
  double t2307;
  double t2318;
  double t2320;
  double t2321;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2317;
  double t2322;
  double t2323;
  double t2324;
  double t2325;
  double t2326;
  double t2328;
  double t2329;
  double t2335;
  double t2342;
  double t2343;
  double t2344;
  double t2341;
  double t2345;
  double t2346;
  double t2347;
  double t2348;
  double t2349;
  double t2299;
  double t2306;
  double t2308;
  double t2309;
  double t2310;
  double t2311;
  double t2312;
  double t2330;
  double t2331;
  double t2332;
  double t2333;
  double t2334;
  double t2336;
  double t2337;
  double t2338;
  double t2339;
  double t2340;
  double t2350;
  double t2351;
  double t2352;
  t2293 = Cos(var1[2]);
  t2283 = Cos(var1[5]);
  t2289 = Sin(var1[2]);
  t2294 = Sin(var1[5]);
  t2282 = Cos(var1[6]);
  t2290 = -1.*t2283*t2289;
  t2295 = -1.*t2293*t2294;
  t2296 = t2290 + t2295;
  t2301 = t2293*t2283;
  t2302 = -1.*t2289*t2294;
  t2304 = t2301 + t2302;
  t2305 = Sin(var1[6]);
  t2307 = t2282*t2296;
  t2318 = -1.*t2293*t2283;
  t2320 = t2289*t2294;
  t2321 = t2318 + t2320;
  t2313 = -1.*t2282;
  t2314 = 1. + t2313;
  t2315 = -0.4*t2314;
  t2316 = 0. + t2315;
  t2317 = t2316*t2296;
  t2322 = 0.4*t2305;
  t2323 = 0. + t2322;
  t2324 = t2321*t2323;
  t2325 = t2321*t2305;
  t2326 = t2307 + t2325;
  t2328 = -0.64*t2326;
  t2329 = t2317 + t2324 + t2328;
  t2335 = t2282*t2321;
  t2342 = t2283*t2289;
  t2343 = t2293*t2294;
  t2344 = t2342 + t2343;
  t2341 = t2316*t2321;
  t2345 = t2344*t2323;
  t2346 = t2344*t2305;
  t2347 = t2335 + t2346;
  t2348 = -0.64*t2347;
  t2349 = t2341 + t2345 + t2348;
  t2299 = 0.4*t2282*t2296;
  t2306 = -0.4*t2304*t2305;
  t2308 = -1.*t2304*t2305;
  t2309 = t2307 + t2308;
  t2310 = -0.64*t2309;
  t2311 = t2299 + t2306 + t2310;
  t2312 = var2[6]*t2311;
  t2330 = var2[2]*t2329;
  t2331 = var2[5]*t2329;
  t2332 = t2312 + t2330 + t2331;
  t2333 = 0.4*t2282*t2321;
  t2334 = -0.4*t2296*t2305;
  t2336 = -1.*t2296*t2305;
  t2337 = t2335 + t2336;
  t2338 = -0.64*t2337;
  t2339 = t2333 + t2334 + t2338;
  t2340 = var2[6]*t2339;
  t2350 = var2[2]*t2349;
  t2351 = var2[5]*t2349;
  t2352 = t2340 + t2350 + t2351;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2332;
  p_output1[7]=0;
  p_output1[8]=t2352;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2332;
  p_output1[16]=0;
  p_output1[17]=t2352;
  p_output1[18]=t2311*var2[2] + t2311*var2[5] + (t2306 - 0.4*t2282*t2344 - 0.64*(t2308 - 1.*t2282*t2344))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t2339*var2[2] + t2339*var2[5] + (-0.4*t2282*t2304 + t2334 - 0.64*(-1.*t2282*t2304 + t2336))*var2[6];
}



void dJp_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
