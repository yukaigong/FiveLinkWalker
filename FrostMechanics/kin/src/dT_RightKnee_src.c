/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightKnee_src.h"

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
  double t3590;
  double t3580;
  double t3588;
  double t3591;
  double t3579;
  double t3589;
  double t3593;
  double t3594;
  double t3595;
  double t3596;
  double t3597;
  double t3599;
  double t3600;
  double t3602;
  double t3603;
  double t3616;
  double t3619;
  double t3620;
  double t3621;
  double t3622;
  double t3623;
  double t3629;
  double t3630;
  double t3631;
  double t3607;
  double t3608;
  double t3609;
  double t3639;
  double t3640;
  double t3644;
  double t3645;
  double t3646;
  double t3647;
  double t3648;
  double t3649;
  double t3650;
  double t3651;
  double t3652;
  double t3653;
  double t3634;
  double t3635;
  double t3667;
  double t3668;
  double t3669;
  double t3670;
  t3590 = Cos(var1[2]);
  t3580 = Cos(var1[5]);
  t3588 = Sin(var1[2]);
  t3591 = Sin(var1[5]);
  t3579 = Cos(var1[6]);
  t3589 = -1.*t3580*t3588;
  t3593 = -1.*t3590*t3591;
  t3594 = t3589 + t3593;
  t3595 = t3579*t3594;
  t3596 = t3590*t3580;
  t3597 = -1.*t3588*t3591;
  t3599 = t3596 + t3597;
  t3600 = Sin(var1[6]);
  t3602 = -1.*t3599*t3600;
  t3603 = t3595 + t3602;
  t3616 = -1.*t3594*t3600;
  t3619 = -1.*t3590*t3580;
  t3620 = t3588*t3591;
  t3621 = t3619 + t3620;
  t3622 = t3579*t3621;
  t3623 = t3622 + t3616;
  t3629 = t3579*t3599;
  t3630 = t3594*t3600;
  t3631 = t3629 + t3630;
  t3607 = t3580*t3588;
  t3608 = t3590*t3591;
  t3609 = t3607 + t3608;
  t3639 = t3621*t3600;
  t3640 = t3595 + t3639;
  t3644 = -1.*t3579;
  t3645 = 1. + t3644;
  t3646 = -0.4*t3645;
  t3647 = 0. + t3646;
  t3648 = t3647*t3599;
  t3649 = 0.4*t3600;
  t3650 = 0. + t3649;
  t3651 = t3594*t3650;
  t3652 = -0.4*t3631;
  t3653 = t3648 + t3651 + t3652;
  t3634 = -1.*t3609*t3600;
  t3635 = t3629 + t3634;
  t3667 = t3647*t3594;
  t3668 = t3621*t3650;
  t3669 = -0.4*t3640;
  t3670 = t3667 + t3668 + t3669;
  p_output1[0]=t3603*var2[2] + t3603*var2[5] + (t3602 - 1.*t3579*t3609)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t3623*var2[2] + t3623*var2[5] + (-1.*t3579*t3599 + t3616)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t3631*var2[2] + t3631*var2[5] + t3635*var2[6];
  p_output1[9]=0;
  p_output1[10]=t3640*var2[2] + t3640*var2[5] + t3603*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t3653*var2[2] + t3653*var2[5] + (0.4*t3579*t3599 - 0.4*t3600*t3609 - 0.4*t3635)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t3670*var2[2] + t3670*var2[5] + (0.4*t3579*t3594 - 0.4*t3599*t3600 - 0.4*t3603)*var2[6];
  p_output1[15]=0;
}



void dT_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
