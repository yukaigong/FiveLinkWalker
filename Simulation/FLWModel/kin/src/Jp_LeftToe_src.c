/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftToe_src.h"

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
  double t679;
  double t684;
  double t675;
  double t685;
  double t563;
  double t680;
  double t691;
  double t694;
  double t697;
  double t698;
  double t702;
  double t704;
  double t587;
  double t607;
  double t666;
  double t672;
  double t708;
  double t709;
  double t722;
  double t728;
  double t729;
  double t695;
  double t712;
  double t713;
  double t715;
  double t716;
  double t718;
  double t719;
  double t721;
  double t730;
  double t734;
  double t735;
  double t736;
  double t737;
  double t738;
  double t740;
  double t743;
  double t744;
  t679 = Cos(var1[3]);
  t684 = Sin(var1[2]);
  t675 = Cos(var1[2]);
  t685 = Sin(var1[3]);
  t563 = Cos(var1[4]);
  t680 = t675*t679;
  t691 = -1.*t684*t685;
  t694 = t680 + t691;
  t697 = -1.*t679*t684;
  t698 = -1.*t675*t685;
  t702 = t697 + t698;
  t704 = Sin(var1[4]);
  t587 = -1.*t563;
  t607 = 1. + t587;
  t666 = -0.4*t607;
  t672 = 0. + t666;
  t708 = 0.4*t704;
  t709 = 0. + t708;
  t722 = -1.*t675*t679;
  t728 = t684*t685;
  t729 = t722 + t728;
  t695 = t672*t694;
  t712 = t702*t709;
  t713 = t563*t694;
  t715 = t702*t704;
  t716 = t713 + t715;
  t718 = -0.8*t716;
  t719 = t695 + t712 + t718;
  t721 = t672*t702;
  t730 = t729*t709;
  t734 = t563*t702;
  t735 = t729*t704;
  t736 = t734 + t735;
  t737 = -0.8*t736;
  t738 = t721 + t730 + t737;
  t740 = t679*t684;
  t743 = t675*t685;
  t744 = t740 + t743;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t719;
  p_output1[7]=0;
  p_output1[8]=t738;
  p_output1[9]=t719;
  p_output1[10]=0;
  p_output1[11]=t738;
  p_output1[12]=0.4*t563*t694 - 0.4*t704*t744 - 0.8*(t713 - 1.*t704*t744);
  p_output1[13]=0;
  p_output1[14]=0.4*t563*t702 - 0.4*t694*t704 - 0.8*(-1.*t694*t704 + t734);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void Jp_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
