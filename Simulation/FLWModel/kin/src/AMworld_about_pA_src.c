/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMworld_about_pA_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t6;
  double t8;
  double t14;
  double t18;
  double t20;
  double t21;
  double t25;
  double t26;
  double t28;
  double t35;
  double t38;
  double t39;
  double t40;
  double t41;
  double t43;
  double t58;
  double t59;
  double t61;
  double t49;
  double t50;
  double t55;
  double t56;
  double t57;
  double t62;
  double t66;
  double t67;
  double t69;
  double t70;
  double t71;
  double t72;
  double t80;
  double t81;
  double t82;
  double t83;
  double t84;
  double t89;
  double t91;
  double t92;
  double t93;
  double t94;
  double t96;
  double t110;
  double t111;
  double t112;
  double t103;
  double t104;
  double t105;
  double t107;
  double t109;
  double t113;
  double t114;
  double t115;
  double t117;
  double t118;
  double t119;
  double t120;
  double t15;
  double t16;
  double t29;
  double t30;
  double t31;
  double t142;
  double t135;
  double t163;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t170;
  double t148;
  double t149;
  double t150;
  double t36;
  double t42;
  double t44;
  double t45;
  double t46;
  double t47;
  double t48;
  double t75;
  double t76;
  double t77;
  double t85;
  double t86;
  double t87;
  double t207;
  double t208;
  double t209;
  double t210;
  double t211;
  double t212;
  double t214;
  double t193;
  double t194;
  double t195;
  double t90;
  double t95;
  double t97;
  double t98;
  double t99;
  double t100;
  double t101;
  double t121;
  double t122;
  double t123;
  double t138;
  double t139;
  double t156;
  double t157;
  double t158;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t201;
  double t202;
  double t203;
  double t215;
  double t216;
  double t217;
  double t218;
  double t219;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  t6 = -1.*var3[1];
  t8 = 0. + t6;
  t14 = Sin(var1[2]);
  t18 = Cos(var1[3]);
  t20 = -1.*t18*t14;
  t21 = Cos(var1[2]);
  t25 = Sin(var1[3]);
  t26 = -1.*t21*t25;
  t28 = t20 + t26;
  t35 = Cos(var1[4]);
  t38 = t21*t18;
  t39 = -1.*t14*t25;
  t40 = t38 + t39;
  t41 = Sin(var1[4]);
  t43 = t35*t28;
  t58 = -1.*t21*t18;
  t59 = t14*t25;
  t61 = t58 + t59;
  t49 = -1.*t35;
  t50 = 1. + t49;
  t55 = -0.4*t50;
  t56 = 0. + t55;
  t57 = t56*t28;
  t62 = 0.4*t41;
  t66 = 0. + t62;
  t67 = t61*t66;
  t69 = t61*t41;
  t70 = t43 + t69;
  t71 = -0.64*t70;
  t72 = t57 + t67 + t71;
  t80 = Cos(var1[5]);
  t81 = -1.*t80*t14;
  t82 = Sin(var1[5]);
  t83 = -1.*t21*t82;
  t84 = t81 + t83;
  t89 = Cos(var1[6]);
  t91 = t21*t80;
  t92 = -1.*t14*t82;
  t93 = t91 + t92;
  t94 = Sin(var1[6]);
  t96 = t89*t84;
  t110 = -1.*t21*t80;
  t111 = t14*t82;
  t112 = t110 + t111;
  t103 = -1.*t89;
  t104 = 1. + t103;
  t105 = -0.4*t104;
  t107 = 0. + t105;
  t109 = t107*t84;
  t113 = 0.4*t94;
  t114 = 0. + t113;
  t115 = t112*t114;
  t117 = t112*t94;
  t118 = t96 + t117;
  t119 = -0.64*t118;
  t120 = t109 + t115 + t119;
  t15 = -0.24*var2[2]*t14;
  t16 = var2[1] + t15;
  t29 = -0.11*var2[2]*t28;
  t30 = -0.11*var2[3]*t28;
  t31 = var2[1] + t29 + t30;
  t142 = -1.*var3[0];
  t135 = -1.*var3[2];
  t163 = t56*t40;
  t164 = t28*t66;
  t165 = t35*t40;
  t166 = t28*t41;
  t167 = t165 + t166;
  t168 = -0.64*t167;
  t170 = t163 + t164 + t168;
  t148 = t18*t14;
  t149 = t21*t25;
  t150 = t148 + t149;
  t36 = 0.4*t35*t28;
  t42 = -0.4*t40*t41;
  t44 = -1.*t40*t41;
  t45 = t43 + t44;
  t46 = -0.64*t45;
  t47 = t36 + t42 + t46;
  t48 = var2[4]*t47;
  t75 = var2[2]*t72;
  t76 = var2[3]*t72;
  t77 = var2[1] + t48 + t75 + t76;
  t85 = -0.11*var2[2]*t84;
  t86 = -0.11*var2[5]*t84;
  t87 = var2[1] + t85 + t86;
  t207 = t107*t93;
  t208 = t84*t114;
  t209 = t89*t93;
  t210 = t84*t94;
  t211 = t209 + t210;
  t212 = -0.64*t211;
  t214 = t207 + t208 + t212;
  t193 = t80*t14;
  t194 = t21*t82;
  t195 = t193 + t194;
  t90 = 0.4*t89*t84;
  t95 = -0.4*t93*t94;
  t97 = -1.*t93*t94;
  t98 = t96 + t97;
  t99 = -0.64*t98;
  t100 = t90 + t95 + t99;
  t101 = var2[6]*t100;
  t121 = var2[2]*t120;
  t122 = var2[5]*t120;
  t123 = var2[1] + t101 + t121 + t122;
  t138 = 0.24*var2[2]*t21;
  t139 = var2[0] + t138;
  t156 = -0.11*var2[2]*t40;
  t157 = -0.11*var2[3]*t40;
  t158 = var2[0] + t156 + t157;
  t171 = var2[2]*t170;
  t172 = var2[3]*t170;
  t173 = 0.4*t35*t40;
  t174 = -0.4*t150*t41;
  t175 = -1.*t150*t41;
  t176 = t165 + t175;
  t177 = -0.64*t176;
  t178 = t173 + t174 + t177;
  t179 = var2[4]*t178;
  t180 = var2[0] + t171 + t172 + t179;
  t201 = -0.11*var2[2]*t93;
  t202 = -0.11*var2[5]*t93;
  t203 = var2[0] + t201 + t202;
  t215 = var2[2]*t214;
  t216 = var2[5]*t214;
  t217 = 0.4*t89*t93;
  t218 = -0.4*t195*t94;
  t219 = -1.*t195*t94;
  t220 = t209 + t219;
  t221 = -0.64*t220;
  t222 = t217 + t218 + t221;
  t223 = var2[6]*t222;
  t224 = var2[0] + t215 + t216 + t223;
  p_output1[0]=0. + 3.2*t123*t8 + 12.*t16*t8 + 6.8*t31*t8 + 3.2*t77*t8 + 6.8*t8*t87;
  p_output1[1]=0. + 3.2*(-1.*t77*(0. + t142 - 0.64*(t150*t35 + t40*t41) + t150*t56 + t40*t66 + var1[0]) + t180*(0. + t135 + t163 + t164 + t168 + var1[1])) + 12.*(-1.*t16*(0.24*t14 + t142 + var1[0]) + t139*(t135 + 0.24*t21 + var1[1])) + 3.2*(-1.*t123*(0. + t142 + t107*t195 + t114*t93 - 0.64*(t195*t89 + t93*t94) + var1[0]) + t224*(0. + t135 + t207 + t208 + t212 + var1[1])) + 6.8*(-1.*t31*(t142 - 0.11*t150 + var1[0]) + t158*(t135 - 0.11*t40 + var1[1])) + 6.8*(-1.*t87*(t142 - 0.11*t195 + var1[0]) + t203*(t135 - 0.11*t93 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t139*t8 - 6.8*t158*t8 - 3.2*t180*t8 - 6.8*t203*t8 - 3.2*t224*t8;
}



void AMworld_about_pA_src(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}
