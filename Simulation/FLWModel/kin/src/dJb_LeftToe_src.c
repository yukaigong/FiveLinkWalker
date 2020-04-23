/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftToe_src.h"

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
  double t852;
  double t660;
  double t665;
  double t1215;
  double t634;
  double t670;
  double t1291;
  double t1358;
  double t1417;
  double t1418;
  double t1421;
  double t1423;
  double t1424;
  double t1425;
  double t1426;
  double t1376;
  double t1384;
  double t1434;
  double t1440;
  double t1441;
  double t1444;
  double t1406;
  double t1313;
  double t1529;
  double t1530;
  double t1602;
  double t1622;
  double t1633;
  double t1448;
  double t1453;
  double t1460;
  double t1407;
  double t1683;
  double t1685;
  double t1686;
  double t1687;
  double t1689;
  double t1691;
  double t1692;
  double t1699;
  double t1707;
  double t1708;
  double t1709;
  double t1712;
  double t1713;
  double t1714;
  double t1715;
  double t1716;
  double t1717;
  double t1718;
  double t1710;
  double t1795;
  double t1725;
  double t1758;
  double t1765;
  double t1769;
  double t1771;
  double t1772;
  double t1802;
  t852 = Cos(var1[3]);
  t660 = Cos(var1[4]);
  t665 = Sin(var1[3]);
  t1215 = Sin(var1[4]);
  t634 = Cos(var1[2]);
  t670 = -1.*t660*t665;
  t1291 = -1.*t852*t1215;
  t1358 = Sin(var1[2]);
  t1417 = t670 + t1291;
  t1418 = t634*t1417;
  t1421 = -1.*t852*t660;
  t1423 = t665*t1215;
  t1424 = t1421 + t1423;
  t1425 = t1358*t1424;
  t1426 = t1418 + t1425;
  t1376 = t852*t660;
  t1384 = -1.*t665*t1215;
  t1434 = t1358*t1417;
  t1440 = t1376 + t1384;
  t1441 = t634*t1440;
  t1444 = t1434 + t1441;
  t1406 = 0. + t1376 + t1384;
  t1313 = 0. + t670 + t1291;
  t1529 = -1.*t1358*t1417;
  t1530 = t634*t1424;
  t1602 = t1529 + t1530;
  t1622 = -1.*t1358*t1440;
  t1633 = t1418 + t1622;
  t1448 = t660*t665;
  t1453 = t852*t1215;
  t1460 = 0. + t1448 + t1453;
  t1407 = -1.*t1358*t1406;
  t1683 = -1.*t660;
  t1685 = 1. + t1683;
  t1686 = -0.4*t1685;
  t1687 = -0.8*t660;
  t1689 = 0. + t1686 + t1687;
  t1691 = t852*t1689;
  t1692 = -0.4*t1215;
  t1699 = 0. + t1692;
  t1707 = -1.*t665*t1699;
  t1708 = 0. + t1691 + t1707;
  t1709 = t1708*t1417;
  t1712 = t1689*t665;
  t1713 = t852*t1699;
  t1714 = 0. + t1712 + t1713;
  t1715 = t1714*t1440;
  t1716 = -1.*t1689*t665;
  t1717 = -1.*t852*t1699;
  t1718 = t1716 + t1717;
  t1710 = t1691 + t1707;
  t1795 = -1.*t1714*t1417;
  t1725 = 0.4*t660*t665;
  t1758 = 0.4*t852*t1215;
  t1765 = t1725 + t1758;
  t1769 = -0.4*t852*t660;
  t1771 = 0.4*t665*t1215;
  t1772 = t1769 + t1771;
  t1802 = -1.*t1708*t1424;
  p_output1[0]=(t1407 + t1313*t634)*var2[2] + t1426*var2[3] + t1426*var2[4];
  p_output1[1]=0;
  p_output1[2]=(-1.*t1358*t1460 + t1406*t634)*var2[2] + t1444*var2[3] + t1444*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1313*t1358 - 1.*t1406*t634)*var2[2] + t1602*var2[3] + t1602*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t1407 - 1.*t1460*t634)*var2[2] + t1633*var2[3] + t1633*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t1709 + t1460*t1710 + t1715 + t1406*t1718)*var2[3] + (t1709 + t1715 + t1406*t1765 + t1460*t1772)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t1406*t1710 - 1.*t1313*t1718 + t1795 + t1802)*var2[3] + (-1.*t1313*t1765 - 1.*t1406*t1772 + t1795 + t1802)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t1215*t1689 + t1699*t660)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.4*Power(t1215,2) + t1215*t1699 + t1689*t660 + 0.4*Power(t660,2))*var2[4];
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



void dJb_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
