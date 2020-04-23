/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftShin_src.h"

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
  double t1761;
  double t1767;
  double t1760;
  double t1772;
  double t1749;
  double t1765;
  double t1773;
  double t1775;
  double t1780;
  double t1777;
  double t1778;
  double t1779;
  double t1776;
  double t1785;
  double t1786;
  double t1787;
  double t1791;
  double t1792;
  double t1793;
  double t1796;
  double t1797;
  double t1798;
  double t1799;
  double t1801;
  double t1802;
  double t1794;
  double t1795;
  t1761 = Cos(var1[3]);
  t1767 = Sin(var1[2]);
  t1760 = Cos(var1[2]);
  t1772 = Sin(var1[3]);
  t1749 = Cos(var1[4]);
  t1765 = t1760*t1761;
  t1773 = -1.*t1767*t1772;
  t1775 = t1765 + t1773;
  t1780 = Sin(var1[4]);
  t1777 = t1761*t1767;
  t1778 = t1760*t1772;
  t1779 = t1777 + t1778;
  t1776 = t1749*t1775;
  t1785 = -1.*t1761*t1767;
  t1786 = -1.*t1760*t1772;
  t1787 = t1785 + t1786;
  t1791 = t1749*t1779;
  t1792 = t1775*t1780;
  t1793 = t1791 + t1792;
  t1796 = -1.*t1749;
  t1797 = 1. + t1796;
  t1798 = -0.4*t1797;
  t1799 = 0. + t1798;
  t1801 = 0.4*t1780;
  t1802 = 0. + t1801;
  t1794 = t1787*t1780;
  t1795 = t1776 + t1794;
  p_output1[0]=t1776 - 1.*t1779*t1780;
  p_output1[1]=0.;
  p_output1[2]=-1.*t1775*t1780 + t1749*t1787;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t1793;
  p_output1[9]=0.;
  p_output1[10]=t1795;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t1793 + t1779*t1799 + t1775*t1802 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t1795 + t1775*t1799 + t1787*t1802 + var1[1];
  p_output1[15]=1.;
}



void T_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
