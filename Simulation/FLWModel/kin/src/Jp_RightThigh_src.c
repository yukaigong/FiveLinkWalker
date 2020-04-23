/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightThigh_src.h"

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
  double t2003;
  double t2011;
  double t1998;
  double t2012;
  double t2009;
  double t2013;
  double t2014;
  double t2015;
  double t2016;
  double t2017;
  double t2018;
  double t2019;
  t2003 = Cos(var1[5]);
  t2011 = Sin(var1[2]);
  t1998 = Cos(var1[2]);
  t2012 = Sin(var1[5]);
  t2009 = t1998*t2003;
  t2013 = -1.*t2011*t2012;
  t2014 = t2009 + t2013;
  t2015 = -0.11*t2014;
  t2016 = -1.*t2003*t2011;
  t2017 = -1.*t1998*t2012;
  t2018 = t2016 + t2017;
  t2019 = -0.11*t2018;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2015;
  p_output1[7]=0;
  p_output1[8]=t2019;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2015;
  p_output1[16]=0;
  p_output1[17]=t2019;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void Jp_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
