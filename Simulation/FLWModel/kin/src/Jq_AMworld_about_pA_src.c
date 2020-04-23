/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMworld_about_pA_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t85;
  double t67;
  double t75;
  double t86;
  double t59;
  double t76;
  double t90;
  double t96;
  double t99;
  double t101;
  double t105;
  double t107;
  double t111;
  double t146;
  double t147;
  double t148;
  double t123;
  double t128;
  double t129;
  double t132;
  double t145;
  double t151;
  double t152;
  double t156;
  double t157;
  double t160;
  double t161;
  double t163;
  double t178;
  double t179;
  double t180;
  double t181;
  double t182;
  double t190;
  double t192;
  double t193;
  double t194;
  double t196;
  double t198;
  double t214;
  double t216;
  double t217;
  double t205;
  double t206;
  double t208;
  double t210;
  double t212;
  double t218;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t226;
  double t98;
  double t109;
  double t117;
  double t118;
  double t119;
  double t120;
  double t121;
  double t166;
  double t167;
  double t168;
  double t237;
  double t239;
  double t240;
  double t241;
  double t242;
  double t243;
  double t245;
  double t252;
  double t253;
  double t254;
  double t247;
  double t248;
  double t250;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t286;
  double t291;
  double t293;
  double t294;
  double t317;
  double t319;
  double t327;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t355;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  double t368;
  double t272;
  double t273;
  double t172;
  double t173;
  double t184;
  double t185;
  double t188;
  double t383;
  double t276;
  double t277;
  double t278;
  double t378;
  double t321;
  double t322;
  double t323;
  double t287;
  double t289;
  double t290;
  double t295;
  double t296;
  double t298;
  double t299;
  double t300;
  double t301;
  double t302;
  double t325;
  double t326;
  double t328;
  double t329;
  double t330;
  double t331;
  double t332;
  double t341;
  double t342;
  double t343;
  double t191;
  double t197;
  double t199;
  double t200;
  double t202;
  double t203;
  double t204;
  double t227;
  double t228;
  double t229;
  double t232;
  double t233;
  double t234;
  double t304;
  double t305;
  double t306;
  double t348;
  double t350;
  double t351;
  double t353;
  double t354;
  double t356;
  double t357;
  double t358;
  double t361;
  double t362;
  double t369;
  double t370;
  double t371;
  double t392;
  double t414;
  double t422;
  double t447;
  double t324;
  double t347;
  double t391;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t398;
  double t399;
  double t401;
  double t402;
  double t403;
  double t404;
  double t405;
  double t406;
  double t408;
  double t409;
  double t410;
  double t411;
  double t412;
  double t413;
  double t415;
  double t417;
  double t418;
  double t419;
  double t455;
  double t456;
  double t472;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t478;
  double t479;
  double t480;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t492;
  double t493;
  double t494;
  double t352;
  double t372;
  double t420;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t430;
  double t431;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t445;
  double t446;
  double t448;
  double t449;
  double t450;
  double t452;
  double t457;
  double t459;
  double t516;
  double t517;
  double t518;
  double t519;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t541;
  double t542;
  t85 = Cos(var1[2]);
  t67 = Cos(var1[5]);
  t75 = Sin(var1[2]);
  t86 = Sin(var1[5]);
  t59 = Cos(var1[6]);
  t76 = -1.*t67*t75;
  t90 = -1.*t85*t86;
  t96 = t76 + t90;
  t99 = t85*t67;
  t101 = -1.*t75*t86;
  t105 = t99 + t101;
  t107 = Sin(var1[6]);
  t111 = t59*t96;
  t146 = -1.*t85*t67;
  t147 = t75*t86;
  t148 = t146 + t147;
  t123 = -1.*t59;
  t128 = 1. + t123;
  t129 = -0.4*t128;
  t132 = 0. + t129;
  t145 = t132*t96;
  t151 = 0.4*t107;
  t152 = 0. + t151;
  t156 = t148*t152;
  t157 = t148*t107;
  t160 = t111 + t157;
  t161 = -0.64*t160;
  t163 = t145 + t156 + t161;
  t178 = Cos(var1[3]);
  t179 = -1.*t178*t75;
  t180 = Sin(var1[3]);
  t181 = -1.*t85*t180;
  t182 = t179 + t181;
  t190 = Cos(var1[4]);
  t192 = t85*t178;
  t193 = -1.*t75*t180;
  t194 = t192 + t193;
  t196 = Sin(var1[4]);
  t198 = t190*t182;
  t214 = -1.*t85*t178;
  t216 = t75*t180;
  t217 = t214 + t216;
  t205 = -1.*t190;
  t206 = 1. + t205;
  t208 = -0.4*t206;
  t210 = 0. + t208;
  t212 = t210*t182;
  t218 = 0.4*t196;
  t220 = 0. + t218;
  t221 = t217*t220;
  t222 = t217*t196;
  t223 = t198 + t222;
  t224 = -0.64*t223;
  t226 = t212 + t221 + t224;
  t98 = 0.4*t59*t96;
  t109 = -0.4*t105*t107;
  t117 = -1.*t105*t107;
  t118 = t111 + t117;
  t119 = -0.64*t118;
  t120 = t98 + t109 + t119;
  t121 = var2[6]*t120;
  t166 = var2[2]*t163;
  t167 = var2[5]*t163;
  t168 = var2[1] + t121 + t166 + t167;
  t237 = t132*t105;
  t239 = t96*t152;
  t240 = t59*t105;
  t241 = t96*t107;
  t242 = t240 + t241;
  t243 = -0.64*t242;
  t245 = t237 + t239 + t243;
  t252 = t67*t75;
  t253 = t85*t86;
  t254 = t252 + t253;
  t247 = var2[2]*t245;
  t248 = var2[5]*t245;
  t250 = 0.4*t59*t105;
  t256 = -0.4*t254*t107;
  t257 = -1.*t254*t107;
  t258 = t240 + t257;
  t259 = -0.64*t258;
  t260 = t250 + t256 + t259;
  t261 = var2[6]*t260;
  t262 = var2[0] + t247 + t248 + t261;
  t280 = t210*t194;
  t281 = t182*t220;
  t282 = t190*t194;
  t283 = t182*t196;
  t284 = t282 + t283;
  t285 = -0.64*t284;
  t286 = t280 + t281 + t285;
  t291 = t178*t75;
  t293 = t85*t180;
  t294 = t291 + t293;
  t317 = -1.*var3[1];
  t319 = 0. + t317;
  t327 = t190*t217;
  t335 = t210*t217;
  t336 = t294*t220;
  t337 = t294*t196;
  t338 = t327 + t337;
  t339 = -0.64*t338;
  t340 = t335 + t336 + t339;
  t355 = t59*t148;
  t363 = t132*t148;
  t364 = t254*t152;
  t365 = t254*t107;
  t366 = t355 + t365;
  t367 = -0.64*t366;
  t368 = t363 + t364 + t367;
  t272 = 0.24*var2[2]*t85;
  t273 = var2[0] + t272;
  t172 = -0.24*var2[2]*t75;
  t173 = var2[1] + t172;
  t184 = -0.11*var2[2]*t182;
  t185 = -0.11*var2[3]*t182;
  t188 = var2[1] + t184 + t185;
  t383 = -1.*var3[2];
  t276 = -0.11*var2[2]*t194;
  t277 = -0.11*var2[3]*t194;
  t278 = var2[0] + t276 + t277;
  t378 = -1.*var3[0];
  t321 = -0.11*var2[2]*t217;
  t322 = -0.11*var2[3]*t217;
  t323 = t321 + t322;
  t287 = var2[2]*t286;
  t289 = var2[3]*t286;
  t290 = 0.4*t190*t194;
  t295 = -0.4*t294*t196;
  t296 = -1.*t294*t196;
  t298 = t282 + t296;
  t299 = -0.64*t298;
  t300 = t290 + t295 + t299;
  t301 = var2[4]*t300;
  t302 = var2[0] + t287 + t289 + t301;
  t325 = 0.4*t190*t217;
  t326 = -0.4*t182*t196;
  t328 = -1.*t182*t196;
  t329 = t327 + t328;
  t330 = -0.64*t329;
  t331 = t325 + t326 + t330;
  t332 = var2[4]*t331;
  t341 = var2[2]*t340;
  t342 = var2[3]*t340;
  t343 = t332 + t341 + t342;
  t191 = 0.4*t190*t182;
  t197 = -0.4*t194*t196;
  t199 = -1.*t194*t196;
  t200 = t198 + t199;
  t202 = -0.64*t200;
  t203 = t191 + t197 + t202;
  t204 = var2[4]*t203;
  t227 = var2[2]*t226;
  t228 = var2[3]*t226;
  t229 = var2[1] + t204 + t227 + t228;
  t232 = -0.11*var2[2]*t96;
  t233 = -0.11*var2[5]*t96;
  t234 = var2[1] + t232 + t233;
  t304 = -0.11*var2[2]*t105;
  t305 = -0.11*var2[5]*t105;
  t306 = var2[0] + t304 + t305;
  t348 = -0.11*var2[2]*t148;
  t350 = -0.11*var2[5]*t148;
  t351 = t348 + t350;
  t353 = 0.4*t59*t148;
  t354 = -0.4*t96*t107;
  t356 = -1.*t96*t107;
  t357 = t355 + t356;
  t358 = -0.64*t357;
  t361 = t353 + t354 + t358;
  t362 = var2[6]*t361;
  t369 = var2[2]*t368;
  t370 = var2[5]*t368;
  t371 = t362 + t369 + t370;
  t392 = t184 + t185;
  t414 = t204 + t227 + t228;
  t422 = t232 + t233;
  t447 = t121 + t166 + t167;
  t324 = 6.8*t319*t323;
  t347 = 3.2*t319*t343;
  t391 = 0.11*t194*t188;
  t393 = -0.11*t194;
  t394 = t383 + var1[1] + t393;
  t395 = t392*t394;
  t396 = -0.11*t182*t278;
  t397 = -0.11*t294;
  t398 = t378 + var1[0] + t397;
  t399 = -1.*t398*t323;
  t401 = t391 + t395 + t396 + t399;
  t402 = 6.8*t401;
  t403 = t226*t302;
  t404 = t210*t294;
  t405 = t194*t220;
  t406 = t190*t294;
  t408 = t194*t196;
  t409 = t406 + t408;
  t410 = -0.64*t409;
  t411 = 0. + t378 + var1[0] + t404 + t405 + t410;
  t412 = -1.*t411*t343;
  t413 = 0. + t383 + var1[1] + t280 + t281 + t285;
  t415 = t413*t414;
  t417 = -1.*t286*t229;
  t418 = t403 + t412 + t415 + t417;
  t419 = 3.2*t418;
  t455 = -6.8*t319*t392;
  t456 = -3.2*t319*t414;
  t472 = -0.4*t190*t194;
  t473 = -1.*t190*t194;
  t474 = t473 + t328;
  t475 = -0.64*t474;
  t476 = t472 + t326 + t475;
  t477 = var2[4]*t476;
  t478 = var2[2]*t331;
  t479 = var2[3]*t331;
  t480 = t477 + t478 + t479;
  t486 = var2[2]*t203;
  t487 = var2[3]*t203;
  t488 = -0.4*t190*t294;
  t489 = -1.*t190*t294;
  t490 = t489 + t199;
  t491 = -0.64*t490;
  t492 = t488 + t197 + t491;
  t493 = var2[4]*t492;
  t494 = t486 + t487 + t493;
  t352 = 6.8*t319*t351;
  t372 = 3.2*t319*t371;
  t420 = 0.11*t105*t234;
  t423 = -0.11*t105;
  t424 = t383 + var1[1] + t423;
  t425 = t422*t424;
  t426 = -0.11*t96*t306;
  t427 = -0.11*t254;
  t428 = t378 + var1[0] + t427;
  t429 = -1.*t428*t351;
  t430 = t420 + t425 + t426 + t429;
  t431 = 6.8*t430;
  t436 = t163*t262;
  t437 = t132*t254;
  t438 = t105*t152;
  t439 = t59*t254;
  t440 = t105*t107;
  t441 = t439 + t440;
  t442 = -0.64*t441;
  t443 = 0. + t378 + var1[0] + t437 + t438 + t442;
  t445 = -1.*t443*t371;
  t446 = 0. + t383 + var1[1] + t237 + t239 + t243;
  t448 = t446*t447;
  t449 = -1.*t245*t168;
  t450 = t436 + t445 + t448 + t449;
  t452 = 3.2*t450;
  t457 = -6.8*t319*t422;
  t459 = -3.2*t319*t447;
  t516 = -0.4*t59*t105;
  t517 = -1.*t59*t105;
  t518 = t517 + t356;
  t519 = -0.64*t518;
  t520 = t516 + t354 + t519;
  t521 = var2[6]*t520;
  t522 = var2[2]*t361;
  t523 = var2[5]*t361;
  t524 = t521 + t522 + t523;
  t534 = var2[2]*t120;
  t535 = var2[5]*t120;
  t536 = -0.4*t59*t254;
  t537 = -1.*t59*t254;
  t538 = t537 + t117;
  t539 = -0.64*t538;
  t540 = t536 + t109 + t539;
  t541 = var2[6]*t540;
  t542 = t534 + t535 + t541;
  p_output1[0]=-3.2*t168*var4[1];
  p_output1[1]=-3.2*t168 - 12.*t173 - 6.8*t188 - 3.2*t229 - 6.8*t234 + 3.2*(t168*var4[0] - 1.*t262*var4[2]);
  p_output1[2]=3.2*t262*var4[1];
  p_output1[3]=-3.2*t168*var4[4];
  p_output1[4]=3.2*t262 + 12.*t273 + 6.8*t278 + 3.2*t302 + 6.8*t306 + 3.2*(t168*var4[3] - 1.*t262*var4[5]);
  p_output1[5]=3.2*t262*var4[4];
  p_output1[6]=t324 + t347 + t352 + t372 - 2.88*t319*t85*var2[2] - 3.2*t168*var4[7];
  p_output1[7]=t402 + t419 + t431 + t452 + 12.*(-0.24*t273*t75 - 0.24*t173*t85 + 0.24*t85*(t378 + 0.24*t75 + var1[0])*var2[2] - 0.24*t75*(t383 + 0.24*t85 + var1[1])*var2[2]) + 3.2*(t168*var4[6] - 1.*t262*var4[8]);
  p_output1[8]=t455 + t456 + t457 + t459 + 2.88*t319*t75*var2[2] + 3.2*t262*var4[7];
  p_output1[9]=t324 + t347 - 3.2*t168*var4[10];
  p_output1[10]=t402 + t419 + 3.2*(t168*var4[9] - 1.*t262*var4[11]);
  p_output1[11]=t455 + t456 + 3.2*t262*var4[10];
  p_output1[12]=3.2*t319*t480 - 3.2*t168*var4[13];
  p_output1[13]=3.2*(-1.*t229*t300 + t203*t302 - 1.*t411*t480 + t413*t494) + 3.2*(t168*var4[12] - 1.*t262*var4[14]);
  p_output1[14]=-3.2*t319*t494 + 3.2*t262*var4[13];
  p_output1[15]=t352 + t372 - 3.2*t168*var4[16];
  p_output1[16]=t431 + t452 + 3.2*(t168*var4[15] - 1.*t262*var4[17]);
  p_output1[17]=t457 + t459 + 3.2*t262*var4[16];
  p_output1[18]=3.2*t319*t524 - 3.2*t168*var4[19];
  p_output1[19]=3.2*(-1.*t168*t260 + t120*t262 - 1.*t443*t524 + t446*t542) + 3.2*(t168*var4[18] - 1.*t262*var4[20]);
  p_output1[20]=-3.2*t319*t542 + 3.2*t262*var4[19];
}



void Jq_AMworld_about_pA_src(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}
