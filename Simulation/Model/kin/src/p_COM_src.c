/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:11:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_COM_src.h"

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
  double t1297;
  double t1349;
  double t1350;
  double t1354;
  double t1359;
  double t1360;
  double t1361;
  double t1365;
  double t1377;
  double t1382;
  double t1383;
  double t1384;
  double t1392;
  double t1393;
  double t1394;
  double t1395;
  double t1396;
  double t1403;
  double t1407;
  double t1408;
  double t1409;
  double t1410;
  double t1371;
  double t1372;
  double t1430;
  double t1431;
  double t1432;
  double t1404;
  double t1405;
  double t1444;
  double t1445;
  double t1446;
  t1297 = Sin(var1[2]);
  t1349 = Cos(var1[3]);
  t1350 = t1349*t1297;
  t1354 = Cos(var1[2]);
  t1359 = Sin(var1[3]);
  t1360 = t1354*t1359;
  t1361 = t1350 + t1360;
  t1365 = Cos(var1[4]);
  t1377 = t1354*t1349;
  t1382 = -1.*t1297*t1359;
  t1383 = t1377 + t1382;
  t1384 = Sin(var1[4]);
  t1392 = Cos(var1[5]);
  t1393 = t1392*t1297;
  t1394 = Sin(var1[5]);
  t1395 = t1354*t1394;
  t1396 = t1393 + t1395;
  t1403 = Cos(var1[6]);
  t1407 = t1354*t1392;
  t1408 = -1.*t1297*t1394;
  t1409 = t1407 + t1408;
  t1410 = Sin(var1[6]);
  t1371 = -1.*t1365;
  t1372 = 1. + t1371;
  t1430 = -1.*t1349*t1297;
  t1431 = -1.*t1354*t1359;
  t1432 = t1430 + t1431;
  t1404 = -1.*t1403;
  t1405 = 1. + t1404;
  t1444 = -1.*t1392*t1297;
  t1445 = -1.*t1354*t1394;
  t1446 = t1444 + t1445;
  p_output1[0]=0.03125*(12.*(0.24*t1297 + var1[0]) + 6.8*(-0.11*t1361 + var1[0]) + 3.2*(-0.4*t1361*t1372 + 0.4*t1383*t1384 - 0.64*(t1361*t1365 + t1383*t1384) + var1[0]) + 6.8*(-0.11*t1396 + var1[0]) + 3.2*(-0.4*t1396*t1405 + 0.4*t1409*t1410 - 0.64*(t1396*t1403 + t1409*t1410) + var1[0]));
  p_output1[1]=0;
  p_output1[2]=0.03125*(12.*(0.24*t1354 + var1[1]) + 6.8*(-0.11*t1383 + var1[1]) + 6.8*(-0.11*t1409 + var1[1]) + 3.2*(-0.4*t1372*t1383 + 0.4*t1384*t1432 - 0.64*(t1365*t1383 + t1384*t1432) + var1[1]) + 3.2*(-0.4*t1405*t1409 + 0.4*t1410*t1446 - 0.64*(t1403*t1409 + t1410*t1446) + var1[1]));
}



void p_COM_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
