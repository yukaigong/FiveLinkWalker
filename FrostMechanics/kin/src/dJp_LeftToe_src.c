/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftToe_src.h"

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
  double t754;
  double t743;
  double t749;
  double t755;
  double t740;
  double t750;
  double t756;
  double t760;
  double t804;
  double t810;
  double t820;
  double t867;
  double t879;
  double t893;
  double t897;
  double t899;
  double t888;
  double t889;
  double t890;
  double t891;
  double t892;
  double t966;
  double t974;
  double t982;
  double t983;
  double t1006;
  double t1016;
  double t1030;
  double t1051;
  double t1093;
  double t1095;
  double t1096;
  double t1077;
  double t1097;
  double t1106;
  double t1108;
  double t1117;
  double t1120;
  double t770;
  double t878;
  double t880;
  double t884;
  double t885;
  double t886;
  double t887;
  double t1031;
  double t1033;
  double t1034;
  double t1040;
  double t1050;
  double t1054;
  double t1066;
  double t1069;
  double t1075;
  double t1076;
  double t1121;
  double t1126;
  double t1130;
  t754 = Cos(var1[2]);
  t743 = Cos(var1[3]);
  t749 = Sin(var1[2]);
  t755 = Sin(var1[3]);
  t740 = Cos(var1[4]);
  t750 = -1.*t743*t749;
  t756 = -1.*t754*t755;
  t760 = t750 + t756;
  t804 = t754*t743;
  t810 = -1.*t749*t755;
  t820 = t804 + t810;
  t867 = Sin(var1[4]);
  t879 = t740*t760;
  t893 = -1.*t754*t743;
  t897 = t749*t755;
  t899 = t893 + t897;
  t888 = -1.*t740;
  t889 = 1. + t888;
  t890 = -0.4*t889;
  t891 = 0. + t890;
  t892 = t891*t760;
  t966 = 0.4*t867;
  t974 = 0. + t966;
  t982 = t899*t974;
  t983 = t899*t867;
  t1006 = t879 + t983;
  t1016 = -0.8*t1006;
  t1030 = t892 + t982 + t1016;
  t1051 = t740*t899;
  t1093 = t743*t749;
  t1095 = t754*t755;
  t1096 = t1093 + t1095;
  t1077 = t891*t899;
  t1097 = t1096*t974;
  t1106 = t1096*t867;
  t1108 = t1051 + t1106;
  t1117 = -0.8*t1108;
  t1120 = t1077 + t1097 + t1117;
  t770 = 0.4*t740*t760;
  t878 = -0.4*t820*t867;
  t880 = -1.*t820*t867;
  t884 = t879 + t880;
  t885 = -0.8*t884;
  t886 = t770 + t878 + t885;
  t887 = var2[4]*t886;
  t1031 = var2[2]*t1030;
  t1033 = var2[3]*t1030;
  t1034 = t887 + t1031 + t1033;
  t1040 = 0.4*t740*t899;
  t1050 = -0.4*t760*t867;
  t1054 = -1.*t760*t867;
  t1066 = t1051 + t1054;
  t1069 = -0.8*t1066;
  t1075 = t1040 + t1050 + t1069;
  t1076 = var2[4]*t1075;
  t1121 = var2[2]*t1120;
  t1126 = var2[3]*t1120;
  t1130 = t1076 + t1121 + t1126;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1034;
  p_output1[7]=0;
  p_output1[8]=t1130;
  p_output1[9]=t1034;
  p_output1[10]=0;
  p_output1[11]=t1130;
  p_output1[12]=t886*var2[2] + t886*var2[3] + (-0.4*t1096*t740 + t878 - 0.8*(-1.*t1096*t740 + t880))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t1075*var2[2] + t1075*var2[3] + (t1050 - 0.4*t740*t820 - 0.8*(t1054 - 1.*t740*t820))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
