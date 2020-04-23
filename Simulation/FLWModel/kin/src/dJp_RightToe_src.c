/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightToe_src.h"

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
  double t2998;
  double t2980;
  double t2983;
  double t3003;
  double t2822;
  double t2994;
  double t3007;
  double t3013;
  double t3020;
  double t3060;
  double t3079;
  double t3084;
  double t3086;
  double t3188;
  double t3189;
  double t3193;
  double t3175;
  double t3178;
  double t3181;
  double t3185;
  double t3187;
  double t3197;
  double t3203;
  double t3204;
  double t3205;
  double t3209;
  double t3210;
  double t3212;
  double t3218;
  double t3250;
  double t3251;
  double t3252;
  double t3247;
  double t3253;
  double t3255;
  double t3259;
  double t3262;
  double t3269;
  double t3014;
  double t3085;
  double t3087;
  double t3088;
  double t3089;
  double t3090;
  double t3165;
  double t3213;
  double t3214;
  double t3215;
  double t3216;
  double t3217;
  double t3222;
  double t3223;
  double t3224;
  double t3245;
  double t3246;
  double t3276;
  double t3278;
  double t3291;
  t2998 = Cos(var1[2]);
  t2980 = Cos(var1[5]);
  t2983 = Sin(var1[2]);
  t3003 = Sin(var1[5]);
  t2822 = Cos(var1[6]);
  t2994 = -1.*t2980*t2983;
  t3007 = -1.*t2998*t3003;
  t3013 = t2994 + t3007;
  t3020 = t2998*t2980;
  t3060 = -1.*t2983*t3003;
  t3079 = t3020 + t3060;
  t3084 = Sin(var1[6]);
  t3086 = t2822*t3013;
  t3188 = -1.*t2998*t2980;
  t3189 = t2983*t3003;
  t3193 = t3188 + t3189;
  t3175 = -1.*t2822;
  t3178 = 1. + t3175;
  t3181 = -0.4*t3178;
  t3185 = 0. + t3181;
  t3187 = t3185*t3013;
  t3197 = 0.4*t3084;
  t3203 = 0. + t3197;
  t3204 = t3193*t3203;
  t3205 = t3193*t3084;
  t3209 = t3086 + t3205;
  t3210 = -0.8*t3209;
  t3212 = t3187 + t3204 + t3210;
  t3218 = t2822*t3193;
  t3250 = t2980*t2983;
  t3251 = t2998*t3003;
  t3252 = t3250 + t3251;
  t3247 = t3185*t3193;
  t3253 = t3252*t3203;
  t3255 = t3252*t3084;
  t3259 = t3218 + t3255;
  t3262 = -0.8*t3259;
  t3269 = t3247 + t3253 + t3262;
  t3014 = 0.4*t2822*t3013;
  t3085 = -0.4*t3079*t3084;
  t3087 = -1.*t3079*t3084;
  t3088 = t3086 + t3087;
  t3089 = -0.8*t3088;
  t3090 = t3014 + t3085 + t3089;
  t3165 = var2[6]*t3090;
  t3213 = var2[2]*t3212;
  t3214 = var2[5]*t3212;
  t3215 = t3165 + t3213 + t3214;
  t3216 = 0.4*t2822*t3193;
  t3217 = -0.4*t3013*t3084;
  t3222 = -1.*t3013*t3084;
  t3223 = t3218 + t3222;
  t3224 = -0.8*t3223;
  t3245 = t3216 + t3217 + t3224;
  t3246 = var2[6]*t3245;
  t3276 = var2[2]*t3269;
  t3278 = var2[5]*t3269;
  t3291 = t3246 + t3276 + t3278;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3215;
  p_output1[7]=0;
  p_output1[8]=t3291;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3215;
  p_output1[16]=0;
  p_output1[17]=t3291;
  p_output1[18]=t3090*var2[2] + t3090*var2[5] + (t3085 - 0.4*t2822*t3252 - 0.8*(t3087 - 1.*t2822*t3252))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t3245*var2[2] + t3245*var2[5] + (-0.4*t2822*t3079 + t3217 - 0.8*(-1.*t2822*t3079 + t3222))*var2[6];
}



void dJp_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
