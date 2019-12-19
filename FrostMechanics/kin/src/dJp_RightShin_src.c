/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightShin_src.h"

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
  double t4875;
  double t4865;
  double t4871;
  double t4876;
  double t4864;
  double t4872;
  double t4877;
  double t4878;
  double t4883;
  double t4884;
  double t4886;
  double t4887;
  double t4889;
  double t4900;
  double t4902;
  double t4903;
  double t4895;
  double t4896;
  double t4897;
  double t4898;
  double t4899;
  double t4904;
  double t4905;
  double t4906;
  double t4907;
  double t4908;
  double t4910;
  double t4911;
  double t4917;
  double t4924;
  double t4925;
  double t4926;
  double t4923;
  double t4927;
  double t4928;
  double t4929;
  double t4930;
  double t4931;
  double t4881;
  double t4888;
  double t4890;
  double t4891;
  double t4892;
  double t4893;
  double t4894;
  double t4912;
  double t4913;
  double t4914;
  double t4915;
  double t4916;
  double t4918;
  double t4919;
  double t4920;
  double t4921;
  double t4922;
  double t4932;
  double t4933;
  double t4934;
  t4875 = Cos(var1[2]);
  t4865 = Cos(var1[5]);
  t4871 = Sin(var1[2]);
  t4876 = Sin(var1[5]);
  t4864 = Cos(var1[6]);
  t4872 = -1.*t4865*t4871;
  t4877 = -1.*t4875*t4876;
  t4878 = t4872 + t4877;
  t4883 = t4875*t4865;
  t4884 = -1.*t4871*t4876;
  t4886 = t4883 + t4884;
  t4887 = Sin(var1[6]);
  t4889 = t4864*t4878;
  t4900 = -1.*t4875*t4865;
  t4902 = t4871*t4876;
  t4903 = t4900 + t4902;
  t4895 = -1.*t4864;
  t4896 = 1. + t4895;
  t4897 = -0.4*t4896;
  t4898 = 0. + t4897;
  t4899 = t4898*t4878;
  t4904 = 0.4*t4887;
  t4905 = 0. + t4904;
  t4906 = t4903*t4905;
  t4907 = t4903*t4887;
  t4908 = t4889 + t4907;
  t4910 = -0.64*t4908;
  t4911 = t4899 + t4906 + t4910;
  t4917 = t4864*t4903;
  t4924 = t4865*t4871;
  t4925 = t4875*t4876;
  t4926 = t4924 + t4925;
  t4923 = t4898*t4903;
  t4927 = t4926*t4905;
  t4928 = t4926*t4887;
  t4929 = t4917 + t4928;
  t4930 = -0.64*t4929;
  t4931 = t4923 + t4927 + t4930;
  t4881 = 0.4*t4864*t4878;
  t4888 = -0.4*t4886*t4887;
  t4890 = -1.*t4886*t4887;
  t4891 = t4889 + t4890;
  t4892 = -0.64*t4891;
  t4893 = t4881 + t4888 + t4892;
  t4894 = var2[6]*t4893;
  t4912 = var2[2]*t4911;
  t4913 = var2[5]*t4911;
  t4914 = t4894 + t4912 + t4913;
  t4915 = 0.4*t4864*t4903;
  t4916 = -0.4*t4878*t4887;
  t4918 = -1.*t4878*t4887;
  t4919 = t4917 + t4918;
  t4920 = -0.64*t4919;
  t4921 = t4915 + t4916 + t4920;
  t4922 = var2[6]*t4921;
  t4932 = var2[2]*t4931;
  t4933 = var2[5]*t4931;
  t4934 = t4922 + t4932 + t4933;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4914;
  p_output1[7]=0;
  p_output1[8]=t4934;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t4914;
  p_output1[16]=0;
  p_output1[17]=t4934;
  p_output1[18]=t4893*var2[2] + t4893*var2[5] + (t4888 - 0.4*t4864*t4926 - 0.64*(t4890 - 1.*t4864*t4926))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t4921*var2[2] + t4921*var2[5] + (-0.4*t4864*t4886 + t4916 - 0.64*(-1.*t4864*t4886 + t4918))*var2[6];
}



void dJp_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
