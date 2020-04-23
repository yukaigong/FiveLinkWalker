/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftKnee_src.h"

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
  double t2840;
  double t2830;
  double t2838;
  double t2841;
  double t2829;
  double t2839;
  double t2843;
  double t2844;
  double t2845;
  double t2846;
  double t2847;
  double t2849;
  double t2850;
  double t2852;
  double t2853;
  double t2866;
  double t2869;
  double t2870;
  double t2871;
  double t2872;
  double t2873;
  double t2879;
  double t2880;
  double t2881;
  double t2857;
  double t2858;
  double t2859;
  double t2889;
  double t2890;
  double t2894;
  double t2895;
  double t2896;
  double t2897;
  double t2898;
  double t2899;
  double t2900;
  double t2901;
  double t2902;
  double t2903;
  double t2884;
  double t2885;
  double t2917;
  double t2918;
  double t2919;
  double t2920;
  t2840 = Cos(var1[2]);
  t2830 = Cos(var1[3]);
  t2838 = Sin(var1[2]);
  t2841 = Sin(var1[3]);
  t2829 = Cos(var1[4]);
  t2839 = -1.*t2830*t2838;
  t2843 = -1.*t2840*t2841;
  t2844 = t2839 + t2843;
  t2845 = t2829*t2844;
  t2846 = t2840*t2830;
  t2847 = -1.*t2838*t2841;
  t2849 = t2846 + t2847;
  t2850 = Sin(var1[4]);
  t2852 = -1.*t2849*t2850;
  t2853 = t2845 + t2852;
  t2866 = -1.*t2844*t2850;
  t2869 = -1.*t2840*t2830;
  t2870 = t2838*t2841;
  t2871 = t2869 + t2870;
  t2872 = t2829*t2871;
  t2873 = t2872 + t2866;
  t2879 = t2829*t2849;
  t2880 = t2844*t2850;
  t2881 = t2879 + t2880;
  t2857 = t2830*t2838;
  t2858 = t2840*t2841;
  t2859 = t2857 + t2858;
  t2889 = t2871*t2850;
  t2890 = t2845 + t2889;
  t2894 = -1.*t2829;
  t2895 = 1. + t2894;
  t2896 = -0.4*t2895;
  t2897 = 0. + t2896;
  t2898 = t2897*t2849;
  t2899 = 0.4*t2850;
  t2900 = 0. + t2899;
  t2901 = t2844*t2900;
  t2902 = -0.4*t2881;
  t2903 = t2898 + t2901 + t2902;
  t2884 = -1.*t2859*t2850;
  t2885 = t2879 + t2884;
  t2917 = t2897*t2844;
  t2918 = t2871*t2900;
  t2919 = -0.4*t2890;
  t2920 = t2917 + t2918 + t2919;
  p_output1[0]=t2853*var2[2] + t2853*var2[3] + (t2852 - 1.*t2829*t2859)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2873*var2[2] + t2873*var2[3] + (-1.*t2829*t2849 + t2866)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2881*var2[2] + t2881*var2[3] + t2885*var2[4];
  p_output1[9]=0;
  p_output1[10]=t2890*var2[2] + t2890*var2[3] + t2853*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2903*var2[2] + t2903*var2[3] + (0.4*t2829*t2849 - 0.4*t2850*t2859 - 0.4*t2885)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2920*var2[2] + t2920*var2[3] + (0.4*t2829*t2844 - 0.4*t2849*t2850 - 0.4*t2853)*var2[4];
  p_output1[15]=0;
}



void dT_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
