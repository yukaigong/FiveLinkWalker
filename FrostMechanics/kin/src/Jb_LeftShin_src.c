/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:31 GMT-05:00
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
  double t1565;
  double t1558;
  double t1559;
  double t1566;
  double t1572;
  double t1557;
  double t1573;
  double t1574;
  double t1575;
  double t1564;
  double t1567;
  double t1570;
  double t1581;
  double t1582;
  double t1583;
  double t1576;
  double t1597;
  double t1598;
  double t1599;
  double t1600;
  double t1601;
  double t1603;
  double t1604;
  double t1608;
  double t1609;
  double t1610;
  double t1602;
  double t1605;
  double t1606;
  t1565 = Cos(var1[3]);
  t1558 = Cos(var1[4]);
  t1559 = Sin(var1[3]);
  t1566 = Sin(var1[4]);
  t1572 = Cos(var1[2]);
  t1557 = Sin(var1[2]);
  t1573 = t1565*t1558;
  t1574 = -1.*t1559*t1566;
  t1575 = 0. + t1573 + t1574;
  t1564 = -1.*t1558*t1559;
  t1567 = -1.*t1565*t1566;
  t1570 = 0. + t1564 + t1567;
  t1581 = t1558*t1559;
  t1582 = t1565*t1566;
  t1583 = 0. + t1581 + t1582;
  t1576 = t1572*t1575;
  t1597 = -1.*t1558;
  t1598 = 1. + t1597;
  t1599 = -0.4*t1598;
  t1600 = -0.64*t1558;
  t1601 = 0. + t1599 + t1600;
  t1603 = -0.24*t1566;
  t1604 = 0. + t1603;
  t1608 = t1565*t1601;
  t1609 = -1.*t1559*t1604;
  t1610 = 0. + t1608 + t1609;
  t1602 = t1601*t1559;
  t1605 = t1565*t1604;
  t1606 = 0. + t1602 + t1605;
  p_output1[0]=0. + t1557*t1570 + t1576;
  p_output1[1]=0.;
  p_output1[2]=0. + t1557*t1575 + t1572*t1583;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t1570*t1572 - 1.*t1557*t1575;
  p_output1[7]=0.;
  p_output1[8]=0. + t1576 - 1.*t1557*t1583;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t1583*t1606 + t1575*t1610;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t1575*t1606 - 1.*t1570*t1610;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t1558*t1601 + t1566*t1604;
  p_output1[19]=0.;
  p_output1[20]=0. + t1566*t1601 - 1.*t1558*t1604;
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
