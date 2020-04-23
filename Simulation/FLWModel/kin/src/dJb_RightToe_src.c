/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightToe_src.h"

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
  double t3364;
  double t2711;
  double t2714;
  double t3437;
  double t408;
  double t3361;
  double t3446;
  double t3508;
  double t3535;
  double t3545;
  double t3547;
  double t3549;
  double t3562;
  double t3579;
  double t3589;
  double t3513;
  double t3516;
  double t3624;
  double t3625;
  double t3627;
  double t3628;
  double t3522;
  double t3493;
  double t3712;
  double t3716;
  double t3717;
  double t3737;
  double t3738;
  double t3639;
  double t3641;
  double t3659;
  double t3525;
  double t3781;
  double t3782;
  double t3792;
  double t3794;
  double t3812;
  double t3825;
  double t3829;
  double t3836;
  double t3842;
  double t3852;
  double t3857;
  double t3863;
  double t3872;
  double t3873;
  double t3875;
  double t3879;
  double t3882;
  double t3885;
  double t3859;
  double t4050;
  double t3976;
  double t3977;
  double t3978;
  double t3993;
  double t3996;
  double t4018;
  double t4061;
  t3364 = Cos(var1[5]);
  t2711 = Cos(var1[6]);
  t2714 = Sin(var1[5]);
  t3437 = Sin(var1[6]);
  t408 = Cos(var1[2]);
  t3361 = -1.*t2711*t2714;
  t3446 = -1.*t3364*t3437;
  t3508 = Sin(var1[2]);
  t3535 = t3361 + t3446;
  t3545 = t408*t3535;
  t3547 = -1.*t3364*t2711;
  t3549 = t2714*t3437;
  t3562 = t3547 + t3549;
  t3579 = t3508*t3562;
  t3589 = t3545 + t3579;
  t3513 = t3364*t2711;
  t3516 = -1.*t2714*t3437;
  t3624 = t3508*t3535;
  t3625 = t3513 + t3516;
  t3627 = t408*t3625;
  t3628 = t3624 + t3627;
  t3522 = 0. + t3513 + t3516;
  t3493 = 0. + t3361 + t3446;
  t3712 = -1.*t3508*t3535;
  t3716 = t408*t3562;
  t3717 = t3712 + t3716;
  t3737 = -1.*t3508*t3625;
  t3738 = t3545 + t3737;
  t3639 = t2711*t2714;
  t3641 = t3364*t3437;
  t3659 = 0. + t3639 + t3641;
  t3525 = -1.*t3508*t3522;
  t3781 = -1.*t2711;
  t3782 = 1. + t3781;
  t3792 = -0.4*t3782;
  t3794 = -0.8*t2711;
  t3812 = 0. + t3792 + t3794;
  t3825 = t3364*t3812;
  t3829 = -0.4*t3437;
  t3836 = 0. + t3829;
  t3842 = -1.*t2714*t3836;
  t3852 = 0. + t3825 + t3842;
  t3857 = t3852*t3535;
  t3863 = t3812*t2714;
  t3872 = t3364*t3836;
  t3873 = 0. + t3863 + t3872;
  t3875 = t3873*t3625;
  t3879 = -1.*t3812*t2714;
  t3882 = -1.*t3364*t3836;
  t3885 = t3879 + t3882;
  t3859 = t3825 + t3842;
  t4050 = -1.*t3873*t3535;
  t3976 = 0.4*t2711*t2714;
  t3977 = 0.4*t3364*t3437;
  t3978 = t3976 + t3977;
  t3993 = -0.4*t3364*t2711;
  t3996 = 0.4*t2714*t3437;
  t4018 = t3993 + t3996;
  t4061 = -1.*t3852*t3562;
  p_output1[0]=(t3525 + t3493*t408)*var2[2] + t3589*var2[5] + t3589*var2[6];
  p_output1[1]=0;
  p_output1[2]=(-1.*t3508*t3659 + t3522*t408)*var2[2] + t3628*var2[5] + t3628*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t3493*t3508 - 1.*t3522*t408)*var2[2] + t3717*var2[5] + t3717*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t3525 - 1.*t3659*t408)*var2[2] + t3738*var2[5] + t3738*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t3857 + t3659*t3859 + t3875 + t3522*t3885)*var2[5] + (t3857 + t3875 + t3522*t3978 + t3659*t4018)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(-1.*t3522*t3859 - 1.*t3493*t3885 + t4050 + t4061)*var2[5] + (-1.*t3493*t3978 - 1.*t3522*t4018 + t4050 + t4061)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=(0. - 1.*t3437*t3812 + t2711*t3836)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0.4*Power(t2711,2) + 0.4*Power(t3437,2) + t2711*t3812 + t3437*t3836)*var2[6];
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



void dJb_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
