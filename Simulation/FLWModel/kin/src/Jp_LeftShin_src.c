/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:28 GMT-05:00
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
  double t1473;
  double t1476;
  double t1470;
  double t1477;
  double t1453;
  double t1474;
  double t1478;
  double t1479;
  double t1482;
  double t1483;
  double t1484;
  double t1486;
  double t1454;
  double t1458;
  double t1465;
  double t1468;
  double t1487;
  double t1488;
  double t1497;
  double t1498;
  double t1499;
  double t1480;
  double t1489;
  double t1490;
  double t1491;
  double t1492;
  double t1494;
  double t1495;
  double t1496;
  double t1500;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1507;
  double t1508;
  double t1509;
  t1473 = Cos(var1[3]);
  t1476 = Sin(var1[2]);
  t1470 = Cos(var1[2]);
  t1477 = Sin(var1[3]);
  t1453 = Cos(var1[4]);
  t1474 = t1470*t1473;
  t1478 = -1.*t1476*t1477;
  t1479 = t1474 + t1478;
  t1482 = -1.*t1473*t1476;
  t1483 = -1.*t1470*t1477;
  t1484 = t1482 + t1483;
  t1486 = Sin(var1[4]);
  t1454 = -1.*t1453;
  t1458 = 1. + t1454;
  t1465 = -0.4*t1458;
  t1468 = 0. + t1465;
  t1487 = 0.4*t1486;
  t1488 = 0. + t1487;
  t1497 = -1.*t1470*t1473;
  t1498 = t1476*t1477;
  t1499 = t1497 + t1498;
  t1480 = t1468*t1479;
  t1489 = t1484*t1488;
  t1490 = t1453*t1479;
  t1491 = t1484*t1486;
  t1492 = t1490 + t1491;
  t1494 = -0.64*t1492;
  t1495 = t1480 + t1489 + t1494;
  t1496 = t1468*t1484;
  t1500 = t1499*t1488;
  t1501 = t1453*t1484;
  t1502 = t1499*t1486;
  t1503 = t1501 + t1502;
  t1504 = -0.64*t1503;
  t1505 = t1496 + t1500 + t1504;
  t1507 = t1473*t1476;
  t1508 = t1470*t1477;
  t1509 = t1507 + t1508;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t1495;
  p_output1[7]=0;
  p_output1[8]=t1505;
  p_output1[9]=t1495;
  p_output1[10]=0;
  p_output1[11]=t1505;
  p_output1[12]=0.4*t1453*t1479 - 0.4*t1486*t1509 - 0.64*(t1490 - 1.*t1486*t1509);
  p_output1[13]=0;
  p_output1[14]=0.4*t1453*t1484 - 0.4*t1479*t1486 - 0.64*(-1.*t1479*t1486 + t1501);
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
