/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftShin_src.h"

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
  double t1817;
  double t1807;
  double t1815;
  double t1818;
  double t1806;
  double t1816;
  double t1820;
  double t1821;
  double t1822;
  double t1823;
  double t1824;
  double t1826;
  double t1827;
  double t1829;
  double t1830;
  double t1843;
  double t1846;
  double t1847;
  double t1848;
  double t1849;
  double t1850;
  double t1856;
  double t1857;
  double t1858;
  double t1834;
  double t1835;
  double t1836;
  double t1866;
  double t1867;
  double t1871;
  double t1872;
  double t1873;
  double t1874;
  double t1875;
  double t1876;
  double t1877;
  double t1878;
  double t1879;
  double t1880;
  double t1861;
  double t1862;
  double t1894;
  double t1895;
  double t1896;
  double t1897;
  t1817 = Cos(var1[2]);
  t1807 = Cos(var1[3]);
  t1815 = Sin(var1[2]);
  t1818 = Sin(var1[3]);
  t1806 = Cos(var1[4]);
  t1816 = -1.*t1807*t1815;
  t1820 = -1.*t1817*t1818;
  t1821 = t1816 + t1820;
  t1822 = t1806*t1821;
  t1823 = t1817*t1807;
  t1824 = -1.*t1815*t1818;
  t1826 = t1823 + t1824;
  t1827 = Sin(var1[4]);
  t1829 = -1.*t1826*t1827;
  t1830 = t1822 + t1829;
  t1843 = -1.*t1821*t1827;
  t1846 = -1.*t1817*t1807;
  t1847 = t1815*t1818;
  t1848 = t1846 + t1847;
  t1849 = t1806*t1848;
  t1850 = t1849 + t1843;
  t1856 = t1806*t1826;
  t1857 = t1821*t1827;
  t1858 = t1856 + t1857;
  t1834 = t1807*t1815;
  t1835 = t1817*t1818;
  t1836 = t1834 + t1835;
  t1866 = t1848*t1827;
  t1867 = t1822 + t1866;
  t1871 = -1.*t1806;
  t1872 = 1. + t1871;
  t1873 = -0.4*t1872;
  t1874 = 0. + t1873;
  t1875 = t1874*t1826;
  t1876 = 0.4*t1827;
  t1877 = 0. + t1876;
  t1878 = t1821*t1877;
  t1879 = -0.64*t1858;
  t1880 = t1875 + t1878 + t1879;
  t1861 = -1.*t1836*t1827;
  t1862 = t1856 + t1861;
  t1894 = t1874*t1821;
  t1895 = t1848*t1877;
  t1896 = -0.64*t1867;
  t1897 = t1894 + t1895 + t1896;
  p_output1[0]=t1830*var2[2] + t1830*var2[3] + (t1829 - 1.*t1806*t1836)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t1850*var2[2] + t1850*var2[3] + (-1.*t1806*t1826 + t1843)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t1858*var2[2] + t1858*var2[3] + t1862*var2[4];
  p_output1[9]=0;
  p_output1[10]=t1867*var2[2] + t1867*var2[3] + t1830*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t1880*var2[2] + t1880*var2[3] + (0.4*t1806*t1826 - 0.4*t1827*t1836 - 0.64*t1862)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t1897*var2[2] + t1897*var2[3] + (0.4*t1806*t1821 - 0.4*t1826*t1827 - 0.64*t1830)*var2[4];
  p_output1[15]=0;
}



void dT_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
