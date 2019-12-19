/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftKnee_src.h"

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
  double t2661;
  double t2652;
  double t2656;
  double t2664;
  double t2649;
  double t2659;
  double t2667;
  double t2670;
  double t2679;
  double t2681;
  double t2682;
  double t2683;
  double t2684;
  double t2685;
  double t2686;
  double t2671;
  double t2672;
  double t2691;
  double t2693;
  double t2694;
  double t2695;
  double t2674;
  double t2668;
  double t2719;
  double t2720;
  double t2721;
  double t2727;
  double t2728;
  double t2700;
  double t2701;
  double t2702;
  double t2676;
  double t2735;
  double t2736;
  double t2737;
  double t2738;
  double t2739;
  double t2740;
  double t2741;
  double t2742;
  double t2743;
  double t2744;
  double t2745;
  double t2753;
  double t2754;
  t2661 = Cos(var1[3]);
  t2652 = Cos(var1[4]);
  t2656 = Sin(var1[3]);
  t2664 = Sin(var1[4]);
  t2649 = Cos(var1[2]);
  t2659 = -1.*t2652*t2656;
  t2667 = -1.*t2661*t2664;
  t2670 = Sin(var1[2]);
  t2679 = t2659 + t2667;
  t2681 = t2649*t2679;
  t2682 = -1.*t2661*t2652;
  t2683 = t2656*t2664;
  t2684 = t2682 + t2683;
  t2685 = t2670*t2684;
  t2686 = t2681 + t2685;
  t2671 = t2661*t2652;
  t2672 = -1.*t2656*t2664;
  t2691 = t2670*t2679;
  t2693 = t2671 + t2672;
  t2694 = t2649*t2693;
  t2695 = t2691 + t2694;
  t2674 = 0. + t2671 + t2672;
  t2668 = 0. + t2659 + t2667;
  t2719 = -1.*t2670*t2679;
  t2720 = t2649*t2684;
  t2721 = t2719 + t2720;
  t2727 = -1.*t2670*t2693;
  t2728 = t2681 + t2727;
  t2700 = t2652*t2656;
  t2701 = t2661*t2664;
  t2702 = 0. + t2700 + t2701;
  t2676 = -1.*t2670*t2674;
  t2735 = -1.*t2652;
  t2736 = 1. + t2735;
  t2737 = -0.4*t2736;
  t2738 = -0.4*t2652;
  t2739 = 0. + t2737 + t2738;
  t2740 = t2661*t2739;
  t2741 = 0. + t2740;
  t2742 = t2741*t2679;
  t2743 = t2739*t2656;
  t2744 = 0. + t2743;
  t2745 = t2744*t2693;
  t2753 = -1.*t2744*t2679;
  t2754 = -1.*t2741*t2684;
  p_output1[0]=(t2649*t2668 + t2676)*var2[2] + t2686*var2[3] + t2686*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t2649*t2674 - 1.*t2670*t2702)*var2[2] + t2695*var2[3] + t2695*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2668*t2670 - 1.*t2649*t2674)*var2[2] + t2721*var2[3] + t2721*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t2676 - 1.*t2649*t2702)*var2[2] + t2728*var2[3] + t2728*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-1.*t2656*t2674*t2739 + t2661*t2702*t2739 + t2742 + t2745)*var2[3] + (0. + t2742 + t2745)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(t2656*t2668*t2739 - 1.*t2661*t2674*t2739 + t2753 + t2754)*var2[3] + (0. + t2753 + t2754)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t2664*t2739)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0. + t2652*t2739)*var2[4];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void dJb_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
