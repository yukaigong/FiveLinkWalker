/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftShin_src.h"

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
  double t1921;
  double t1915;
  double t1919;
  double t1922;
  double t1914;
  double t1920;
  double t1923;
  double t1925;
  double t1926;
  double t1932;
  double t1933;
  double t1934;
  double t1938;
  double t1939;
  double t1940;
  double t1953;
  double t1956;
  double t1957;
  double t1958;
  double t1959;
  double t1960;
  double t1964;
  double t1965;
  double t1966;
  double t1943;
  double t1944;
  double t1947;
  double t1974;
  double t1975;
  t1921 = Cos(var1[2]);
  t1915 = Cos(var1[3]);
  t1919 = Sin(var1[2]);
  t1922 = Sin(var1[3]);
  t1914 = Cos(var1[4]);
  t1920 = -1.*t1915*t1919;
  t1923 = -1.*t1921*t1922;
  t1925 = t1920 + t1923;
  t1926 = t1914*t1925;
  t1932 = t1921*t1915;
  t1933 = -1.*t1919*t1922;
  t1934 = t1932 + t1933;
  t1938 = Sin(var1[4]);
  t1939 = -1.*t1934*t1938;
  t1940 = t1926 + t1939;
  t1953 = -1.*t1925*t1938;
  t1956 = -1.*t1921*t1915;
  t1957 = t1919*t1922;
  t1958 = t1956 + t1957;
  t1959 = t1914*t1958;
  t1960 = t1959 + t1953;
  t1964 = t1914*t1934;
  t1965 = t1925*t1938;
  t1966 = t1964 + t1965;
  t1943 = t1915*t1919;
  t1944 = t1921*t1922;
  t1947 = t1943 + t1944;
  t1974 = t1958*t1938;
  t1975 = t1926 + t1974;
  p_output1[0]=t1940*var2[2] + t1940*var2[3] + (t1939 - 1.*t1914*t1947)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t1960*var2[2] + t1960*var2[3] + (-1.*t1914*t1934 + t1953)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1966*var2[2] + t1966*var2[3] + (-1.*t1938*t1947 + t1964)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t1975*var2[2] + t1975*var2[3] + t1940*var2[4];
}



void dR_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
