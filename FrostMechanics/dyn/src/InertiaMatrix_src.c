/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:27:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "InertiaMatrix_src.h"

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
  double t259;
  double t10;
  double t328;
  double t369;
  double t855;
  double t866;
  double t983;
  double t1003;
  double t1047;
  double t3078;
  double t3080;
  double t3357;
  double t3472;
  double t3530;
  double t3532;
  double t3543;
  double t750;
  double t751;
  double t776;
  double t329;
  double t460;
  double t521;
  double t856;
  double t867;
  double t904;
  double t982;
  double t1066;
  double t1078;
  double t1210;
  double t1242;
  double t1243;
  double t1568;
  double t1619;
  double t2083;
  double t3197;
  double t3198;
  double t3199;
  double t3079;
  double t3083;
  double t3194;
  double t3451;
  double t3479;
  double t3525;
  double t3527;
  double t3562;
  double t3563;
  double t3639;
  double t3643;
  double t3674;
  double t4123;
  double t4136;
  double t4139;
  double t6428;
  double t6429;
  double t6433;
  double t6510;
  double t6514;
  double t6609;
  double t6656;
  double t6705;
  double t6707;
  double t6708;
  double t6766;
  double t6968;
  double t6982;
  double t7034;
  double t7058;
  double t7065;
  double t7078;
  double t7083;
  double t7088;
  double t7143;
  double t7144;
  double t7146;
  double t4354;
  double t4393;
  double t4399;
  double t4413;
  double t4423;
  double t4463;
  double t4465;
  double t4467;
  double t4472;
  double t4610;
  double t4676;
  double t4804;
  double t4806;
  double t4820;
  double t4829;
  double t4872;
  double t5078;
  double t5194;
  double t5210;
  double t5213;
  double t5215;
  double t5893;
  double t6054;
  double t6147;
  double t6180;
  double t11;
  double t230;
  double t265;
  double t318;
  double t777;
  double t827;
  double t3200;
  double t3201;
  double t6189;
  double t6199;
  double t6236;
  double t6241;
  double t6269;
  double t6706;
  double t6787;
  double t6788;
  double t6795;
  double t6798;
  double t6822;
  double t6871;
  double t6873;
  double t6882;
  double t6891;
  double t6892;
  double t7089;
  double t7147;
  double t7152;
  double t7155;
  double t7156;
  double t7166;
  double t7215;
  double t7216;
  double t7220;
  double t7192;
  double t7196;
  double t7197;
  double t7198;
  double t7277;
  double t7292;
  double t7297;
  double t7255;
  double t7257;
  double t7260;
  double t7271;
  double t6181;
  double t6338;
  double t6791;
  double t6858;
  double t6918;
  double t7154;
  double t7185;
  double t7186;
  double t7358;
  double t7370;
  double t7373;
  double t7393;
  double t7394;
  double t7395;
  double t7396;
  double t7401;
  double t7190;
  double t7214;
  double t7224;
  double t7228;
  double t7405;
  double t7411;
  double t7417;
  double t7418;
  double t7472;
  double t7473;
  double t7474;
  double t7475;
  double t7231;
  double t7419;
  double t7483;
  double t7487;
  double t7524;
  double t7525;
  double t7234;
  double t7272;
  double t7298;
  double t7307;
  double t7421;
  double t7434;
  double t7435;
  double t7436;
  double t7496;
  double t7497;
  double t7498;
  double t7510;
  double t7308;
  double t7437;
  double t7514;
  double t7515;
  double t7542;
  double t7543;
  t259 = Sin(var1[2]);
  t10 = Cos(var1[2]);
  t328 = Cos(var1[3]);
  t369 = Sin(var1[3]);
  t855 = Cos(var1[4]);
  t866 = Sin(var1[4]);
  t983 = t328*t855;
  t1003 = -1.*t369*t866;
  t1047 = t983 + t1003;
  t3078 = Cos(var1[5]);
  t3080 = Sin(var1[5]);
  t3357 = Cos(var1[6]);
  t3472 = Sin(var1[6]);
  t3530 = t3078*t3357;
  t3532 = -1.*t3080*t3472;
  t3543 = t3530 + t3532;
  t750 = t10*t328;
  t751 = -1.*t259*t369;
  t776 = t750 + t751;
  t329 = t328*t259;
  t460 = t10*t369;
  t521 = t329 + t460;
  t856 = -1.*t855*t369;
  t867 = -1.*t328*t866;
  t904 = t856 + t867;
  t982 = t259*t904;
  t1066 = t10*t1047;
  t1078 = t982 + t1066;
  t1210 = t855*t369;
  t1242 = t328*t866;
  t1243 = t1210 + t1242;
  t1568 = t10*t1243;
  t1619 = t259*t1047;
  t2083 = t1568 + t1619;
  t3197 = t10*t3078;
  t3198 = -1.*t259*t3080;
  t3199 = t3197 + t3198;
  t3079 = t3078*t259;
  t3083 = t10*t3080;
  t3194 = t3079 + t3083;
  t3451 = -1.*t3357*t3080;
  t3479 = -1.*t3078*t3472;
  t3525 = t3451 + t3479;
  t3527 = t259*t3525;
  t3562 = t10*t3543;
  t3563 = t3527 + t3562;
  t3639 = t3357*t3080;
  t3643 = t3078*t3472;
  t3674 = t3639 + t3643;
  t4123 = t10*t3674;
  t4136 = t259*t3543;
  t4139 = t4123 + t4136;
  t6428 = -1.*t855;
  t6429 = 1. + t6428;
  t6433 = -0.4*t6429;
  t6510 = -0.64*t855;
  t6514 = t6433 + t6510;
  t6609 = t6514*t369;
  t6656 = -0.24*t328*t866;
  t6705 = t6609 + t6656;
  t6707 = t328*t6514;
  t6708 = 0.24*t369*t866;
  t6766 = t6707 + t6708;
  t6968 = -1.*t3357;
  t6982 = 1. + t6968;
  t7034 = -0.4*t6982;
  t7058 = -0.64*t3357;
  t7065 = t7034 + t7058;
  t7078 = t7065*t3080;
  t7083 = -0.24*t3078*t3472;
  t7088 = t7078 + t7083;
  t7143 = t3078*t7065;
  t7144 = 0.24*t3080*t3472;
  t7146 = t7143 + t7144;
  t4354 = -1.*t328*t259;
  t4393 = -1.*t10*t369;
  t4399 = t4354 + t4393;
  t4413 = 6.8*t4399*t776;
  t4423 = 6.8*t521*t776;
  t4463 = t10*t904;
  t4465 = -1.*t259*t1047;
  t4467 = t4463 + t4465;
  t4472 = 3.2*t1078*t4467;
  t4610 = -1.*t259*t1243;
  t4676 = t4610 + t1066;
  t4804 = 3.2*t4676*t2083;
  t4806 = -1.*t3078*t259;
  t4820 = -1.*t10*t3080;
  t4829 = t4806 + t4820;
  t4872 = 6.8*t4829*t3199;
  t5078 = 6.8*t3194*t3199;
  t5194 = t10*t3525;
  t5210 = -1.*t259*t3543;
  t5213 = t5194 + t5210;
  t5215 = 3.2*t3563*t5213;
  t5893 = -1.*t259*t3674;
  t6054 = t5893 + t3562;
  t6147 = 3.2*t6054*t4139;
  t6180 = t4413 + t4423 + t4472 + t4804 + t4872 + t5078 + t5215 + t6147;
  t11 = Power(t10,2);
  t230 = 12.*t11;
  t265 = Power(t259,2);
  t318 = 12.*t265;
  t777 = Power(t776,2);
  t827 = 6.8*t777;
  t3200 = Power(t3199,2);
  t3201 = 6.8*t3200;
  t6189 = Power(t328,2);
  t6199 = -0.11*t6189;
  t6236 = Power(t369,2);
  t6241 = -0.11*t6236;
  t6269 = t6199 + t6241;
  t6706 = -1.*t6705*t1047;
  t6787 = -1.*t904*t6766;
  t6788 = t6706 + t6787;
  t6795 = t6705*t1243;
  t6798 = t1047*t6766;
  t6822 = t6795 + t6798;
  t6871 = Power(t3078,2);
  t6873 = -0.11*t6871;
  t6882 = Power(t3080,2);
  t6891 = -0.11*t6882;
  t6892 = t6873 + t6891;
  t7089 = -1.*t7088*t3543;
  t7147 = -1.*t3525*t7146;
  t7152 = t7089 + t7147;
  t7155 = t7088*t3674;
  t7156 = t3543*t7146;
  t7166 = t7155 + t7156;
  t7215 = t6514*t866;
  t7216 = 0.24*t855*t866;
  t7220 = t7215 + t7216;
  t7192 = t6514*t855;
  t7196 = Power(t866,2);
  t7197 = -0.24*t7196;
  t7198 = t7192 + t7197;
  t7277 = t7065*t3472;
  t7292 = 0.24*t3357*t3472;
  t7297 = t7277 + t7292;
  t7255 = t7065*t3357;
  t7257 = Power(t3472,2);
  t7260 = -0.24*t7257;
  t7271 = t7255 + t7260;
  t6181 = 2.88*t10;
  t6338 = 6.8*t776*t6269;
  t6791 = 3.2*t2083*t6788;
  t6858 = 3.2*t1078*t6822;
  t6918 = 6.8*t3199*t6892;
  t7154 = 3.2*t4139*t7152;
  t7185 = 3.2*t3563*t7166;
  t7186 = t6181 + t6338 + t6791 + t6858 + t6918 + t7154 + t7185;
  t7358 = -2.88*t259;
  t7370 = 6.8*t4399*t6269;
  t7373 = 3.2*t4676*t6788;
  t7393 = 3.2*t4467*t6822;
  t7394 = 6.8*t4829*t6892;
  t7395 = 3.2*t6054*t7152;
  t7396 = 3.2*t5213*t7166;
  t7401 = t7358 + t7370 + t7373 + t7393 + t7394 + t7395 + t7396;
  t7190 = -0.748*t776;
  t7214 = 3.2*t7198*t1078;
  t7224 = 3.2*t7220*t2083;
  t7228 = t7190 + t7214 + t7224;
  t7405 = -0.748*t4399;
  t7411 = 3.2*t7220*t4676;
  t7417 = 3.2*t7198*t4467;
  t7418 = t7405 + t7411 + t7417;
  t7472 = -0.748*t6269;
  t7473 = 3.2*t7220*t6788;
  t7474 = 3.2*t7198*t6822;
  t7475 = 0.67 + t7472 + t7473 + t7474;
  t7231 = -0.768*t1078;
  t7419 = -0.768*t4467;
  t7483 = -0.768*t6822;
  t7487 = 0.2 + t7483;
  t7524 = -0.768*t7198;
  t7525 = 0.2 + t7524;
  t7234 = -0.748*t3199;
  t7272 = 3.2*t7271*t3563;
  t7298 = 3.2*t7297*t4139;
  t7307 = t7234 + t7272 + t7298;
  t7421 = -0.748*t4829;
  t7434 = 3.2*t7297*t6054;
  t7435 = 3.2*t7271*t5213;
  t7436 = t7421 + t7434 + t7435;
  t7496 = -0.748*t6892;
  t7497 = 3.2*t7297*t7152;
  t7498 = 3.2*t7271*t7166;
  t7510 = 0.67 + t7496 + t7497 + t7498;
  t7308 = -0.768*t3563;
  t7437 = -0.768*t5213;
  t7514 = -0.768*t7166;
  t7515 = 0.2 + t7514;
  t7542 = -0.768*t7271;
  t7543 = 0.2 + t7542;
  p_output1[0]=3.2*Power(t1078,2) + 3.2*Power(t2083,2) + t230 + t318 + 6.8*Power(t3194,2) + t3201 + 3.2*Power(t3563,2) + 3.2*Power(t4139,2) + 6.8*Power(t521,2) + t827;
  p_output1[1]=t6180;
  p_output1[2]=t7186;
  p_output1[3]=t7228;
  p_output1[4]=t7231;
  p_output1[5]=t7307;
  p_output1[6]=t7308;
  p_output1[7]=t6180;
  p_output1[8]=t230 + t318 + t3201 + 6.8*Power(t4399,2) + 3.2*Power(t4467,2) + 3.2*Power(t4676,2) + 6.8*Power(t4829,2) + 3.2*Power(t5213,2) + 3.2*Power(t6054,2) + t827;
  p_output1[9]=t7401;
  p_output1[10]=t7418;
  p_output1[11]=t7419;
  p_output1[12]=t7436;
  p_output1[13]=t7437;
  p_output1[14]=t7186;
  p_output1[15]=t7401;
  p_output1[16]=3.3612 + 6.8*Power(t6269,2) + 3.2*Power(t6788,2) + 3.2*Power(t6822,2) + 6.8*Power(t6892,2) + 3.2*Power(t7152,2) + 3.2*Power(t7166,2);
  p_output1[17]=t7475;
  p_output1[18]=t7487;
  p_output1[19]=t7510;
  p_output1[20]=t7515;
  p_output1[21]=t7228;
  p_output1[22]=t7418;
  p_output1[23]=t7475;
  p_output1[24]=0.75228 + 3.2*Power(t7198,2) + 3.2*Power(t7220,2);
  p_output1[25]=t7525;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t7231;
  p_output1[29]=t7419;
  p_output1[30]=t7487;
  p_output1[31]=t7525;
  p_output1[32]=0.38432;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t7307;
  p_output1[36]=t7436;
  p_output1[37]=t7510;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.75228 + 3.2*Power(t7271,2) + 3.2*Power(t7297,2);
  p_output1[41]=t7543;
  p_output1[42]=t7308;
  p_output1[43]=t7437;
  p_output1[44]=t7515;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t7543;
  p_output1[48]=0.38432;
}



void InertiaMatrix_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
