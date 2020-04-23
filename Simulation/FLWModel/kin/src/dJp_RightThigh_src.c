/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightThigh_src.h"

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
  double t2032;
  double t2033;
  double t2034;
  double t2035;
  double t2037;
  double t2038;
  double t2039;
  double t2043;
  double t2044;
  double t2045;
  double t2040;
  double t2041;
  double t2042;
  double t2046;
  double t2047;
  double t2048;
  t2032 = Cos(var1[5]);
  t2033 = Sin(var1[2]);
  t2034 = -1.*t2032*t2033;
  t2035 = Cos(var1[2]);
  t2037 = Sin(var1[5]);
  t2038 = -1.*t2035*t2037;
  t2039 = t2034 + t2038;
  t2043 = -1.*t2035*t2032;
  t2044 = t2033*t2037;
  t2045 = t2043 + t2044;
  t2040 = -0.11*var2[2]*t2039;
  t2041 = -0.11*var2[5]*t2039;
  t2042 = t2040 + t2041;
  t2046 = -0.11*var2[2]*t2045;
  t2047 = -0.11*var2[5]*t2045;
  t2048 = t2046 + t2047;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2042;
  p_output1[7]=0;
  p_output1[8]=t2048;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2042;
  p_output1[16]=0;
  p_output1[17]=t2048;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
