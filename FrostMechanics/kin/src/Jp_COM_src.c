/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_COM_src.h"

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
  double t98;
  double t103;
  double t88;
  double t108;
  double t83;
  double t99;
  double t112;
  double t126;
  double t137;
  double t145;
  double t147;
  double t148;
  double t150;
  double t174;
  double t175;
  double t176;
  double t198;
  double t211;
  double t197;
  double t199;
  double t212;
  double t213;
  double t215;
  double t216;
  double t217;
  double t218;
  double t220;
  double t230;
  double t231;
  double t232;
  double t169;
  double t170;
  double t171;
  double t172;
  double t177;
  double t178;
  double t190;
  double t191;
  double t192;
  double t193;
  double t226;
  double t227;
  double t228;
  double t229;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t247;
  double t255;
  double t256;
  double t257;
  double t268;
  double t276;
  double t277;
  double t278;
  double t253;
  double t254;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t274;
  double t275;
  double t279;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  t98 = Cos(var1[3]);
  t103 = Sin(var1[2]);
  t88 = Cos(var1[2]);
  t108 = Sin(var1[3]);
  t83 = Cos(var1[4]);
  t99 = t88*t98;
  t112 = -1.*t103*t108;
  t126 = t99 + t112;
  t137 = t98*t103;
  t145 = t88*t108;
  t147 = t137 + t145;
  t148 = Sin(var1[4]);
  t150 = t83*t126;
  t174 = -1.*t98*t103;
  t175 = -1.*t88*t108;
  t176 = t174 + t175;
  t198 = Cos(var1[5]);
  t211 = Sin(var1[5]);
  t197 = Cos(var1[6]);
  t199 = t88*t198;
  t212 = -1.*t103*t211;
  t213 = t199 + t212;
  t215 = t198*t103;
  t216 = t88*t211;
  t217 = t215 + t216;
  t218 = Sin(var1[6]);
  t220 = t197*t213;
  t230 = -1.*t198*t103;
  t231 = -1.*t88*t211;
  t232 = t230 + t231;
  t169 = -0.748*t126;
  t170 = -1.*t83;
  t171 = 1. + t170;
  t172 = -0.4*t171*t126;
  t177 = 0.4*t176*t148;
  t178 = t176*t148;
  t190 = t150 + t178;
  t191 = -0.64*t190;
  t192 = t172 + t177 + t191;
  t193 = 3.2*t192;
  t226 = -0.748*t213;
  t227 = -1.*t197;
  t228 = 1. + t227;
  t229 = -0.4*t228*t213;
  t233 = 0.4*t232*t218;
  t234 = t232*t218;
  t235 = t220 + t234;
  t236 = -0.64*t235;
  t237 = t229 + t233 + t236;
  t238 = 3.2*t237;
  t247 = t83*t176;
  t255 = -1.*t88*t98;
  t256 = t103*t108;
  t257 = t255 + t256;
  t268 = t197*t232;
  t276 = -1.*t88*t198;
  t277 = t103*t211;
  t278 = t276 + t277;
  t253 = -0.748*t176;
  t254 = -0.4*t171*t176;
  t258 = 0.4*t257*t148;
  t259 = t257*t148;
  t260 = t247 + t259;
  t261 = -0.64*t260;
  t262 = t254 + t258 + t261;
  t263 = 3.2*t262;
  t274 = -0.748*t232;
  t275 = -0.4*t228*t232;
  t279 = 0.4*t278*t218;
  t280 = t278*t218;
  t281 = t268 + t280;
  t282 = -0.64*t281;
  t283 = t275 + t279 + t282;
  t284 = 3.2*t283;
  p_output1[0]=var2[0] + 0.03125*(t169 + t193 + t226 + t238 + 2.88*t88)*var2[2] + 0.03125*(t169 + t193)*var2[3] + 0.1*(-0.4*t147*t148 - 0.64*(-1.*t147*t148 + t150) + 0.4*t126*t83)*var2[4] + 0.03125*(t226 + t238)*var2[5] + 0.1*(0.4*t197*t213 - 0.4*t217*t218 - 0.64*(-1.*t217*t218 + t220))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + 0.03125*(-2.88*t103 + t253 + t263 + t274 + t284)*var2[2] + 0.03125*(t253 + t263)*var2[3] + 0.1*(-0.4*t126*t148 - 0.64*(-1.*t126*t148 + t247) + 0.4*t176*t83)*var2[4] + 0.03125*(t274 + t284)*var2[5] + 0.1*(-0.4*t213*t218 + 0.4*t197*t232 - 0.64*(-1.*t213*t218 + t268))*var2[6];
}



void Jp_COM_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
