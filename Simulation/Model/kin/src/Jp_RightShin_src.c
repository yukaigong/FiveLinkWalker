/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightShin_src.h"

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
  double t4830;
  double t4833;
  double t4827;
  double t4834;
  double t4810;
  double t4831;
  double t4835;
  double t4836;
  double t4839;
  double t4840;
  double t4841;
  double t4843;
  double t4811;
  double t4815;
  double t4822;
  double t4825;
  double t4844;
  double t4845;
  double t4854;
  double t4855;
  double t4856;
  double t4837;
  double t4846;
  double t4847;
  double t4848;
  double t4849;
  double t4851;
  double t4852;
  double t4853;
  double t4857;
  double t4858;
  double t4859;
  double t4860;
  double t4861;
  double t4862;
  double t4864;
  double t4865;
  double t4866;
  t4830 = Cos(var1[5]);
  t4833 = Sin(var1[2]);
  t4827 = Cos(var1[2]);
  t4834 = Sin(var1[5]);
  t4810 = Cos(var1[6]);
  t4831 = t4827*t4830;
  t4835 = -1.*t4833*t4834;
  t4836 = t4831 + t4835;
  t4839 = -1.*t4830*t4833;
  t4840 = -1.*t4827*t4834;
  t4841 = t4839 + t4840;
  t4843 = Sin(var1[6]);
  t4811 = -1.*t4810;
  t4815 = 1. + t4811;
  t4822 = -0.4*t4815;
  t4825 = 0. + t4822;
  t4844 = 0.4*t4843;
  t4845 = 0. + t4844;
  t4854 = -1.*t4827*t4830;
  t4855 = t4833*t4834;
  t4856 = t4854 + t4855;
  t4837 = t4825*t4836;
  t4846 = t4841*t4845;
  t4847 = t4810*t4836;
  t4848 = t4841*t4843;
  t4849 = t4847 + t4848;
  t4851 = -0.64*t4849;
  t4852 = t4837 + t4846 + t4851;
  t4853 = t4825*t4841;
  t4857 = t4856*t4845;
  t4858 = t4810*t4841;
  t4859 = t4856*t4843;
  t4860 = t4858 + t4859;
  t4861 = -0.64*t4860;
  t4862 = t4853 + t4857 + t4861;
  t4864 = t4830*t4833;
  t4865 = t4827*t4834;
  t4866 = t4864 + t4865;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t4852;
  p_output1[7]=0;
  p_output1[8]=t4862;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t4852;
  p_output1[16]=0;
  p_output1[17]=t4862;
  p_output1[18]=0.4*t4810*t4836 - 0.4*t4843*t4866 - 0.64*(t4847 - 1.*t4843*t4866);
  p_output1[19]=0;
  p_output1[20]=0.4*t4810*t4841 - 0.4*t4836*t4843 - 0.64*(-1.*t4836*t4843 + t4858);
}



void Jp_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
