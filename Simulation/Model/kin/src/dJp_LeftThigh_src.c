/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftThigh_src.h"

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
  double t3843;
  double t3844;
  double t3845;
  double t3846;
  double t3848;
  double t3849;
  double t3850;
  double t3854;
  double t3855;
  double t3856;
  double t3851;
  double t3852;
  double t3853;
  double t3857;
  double t3858;
  double t3859;
  t3843 = Cos(var1[3]);
  t3844 = Sin(var1[2]);
  t3845 = -1.*t3843*t3844;
  t3846 = Cos(var1[2]);
  t3848 = Sin(var1[3]);
  t3849 = -1.*t3846*t3848;
  t3850 = t3845 + t3849;
  t3854 = -1.*t3846*t3843;
  t3855 = t3844*t3848;
  t3856 = t3854 + t3855;
  t3851 = -0.11*var2[2]*t3850;
  t3852 = -0.11*var2[3]*t3850;
  t3853 = t3851 + t3852;
  t3857 = -0.11*var2[2]*t3856;
  t3858 = -0.11*var2[3]*t3856;
  t3859 = t3857 + t3858;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3853;
  p_output1[7]=0;
  p_output1[8]=t3859;
  p_output1[9]=t3853;
  p_output1[10]=0;
  p_output1[11]=t3859;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
