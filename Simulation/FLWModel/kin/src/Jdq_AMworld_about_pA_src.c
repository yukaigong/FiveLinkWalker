/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMworld_about_pA_src.h"

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
  double t197;
  double t176;
  double t184;
  double t200;
  double t172;
  double t192;
  double t202;
  double t208;
  double t220;
  double t227;
  double t230;
  double t232;
  double t235;
  double t277;
  double t279;
  double t280;
  double t258;
  double t263;
  double t266;
  double t268;
  double t271;
  double t284;
  double t285;
  double t287;
  double t291;
  double t298;
  double t299;
  double t301;
  double t312;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t332;
  double t347;
  double t348;
  double t352;
  double t357;
  double t385;
  double t386;
  double t387;
  double t390;
  double t391;
  double t392;
  double t396;
  double t404;
  double t405;
  double t406;
  double t217;
  double t234;
  double t240;
  double t241;
  double t243;
  double t247;
  double t256;
  double t303;
  double t304;
  double t306;
  double t397;
  double t401;
  double t402;
  double t408;
  double t409;
  double t414;
  double t415;
  double t418;
  double t420;
  double t422;
  double t432;
  double t433;
  double t442;
  double t335;
  double t336;
  double t337;
  double t338;
  double t455;
  double t456;
  double t457;
  double t358;
  double t362;
  double t505;
  double t506;
  double t507;
  double t315;
  double t316;
  double t447;
  double t450;
  double t458;
  double t459;
  double t327;
  double t330;
  double t340;
  double t364;
  double t365;
  double t367;
  double t368;
  double t369;
  double t370;
  double t461;
  double t462;
  double t463;
  double t465;
  double t466;
  double t467;
  double t468;
  double t504;
  double t508;
  double t509;
  double t510;
  double t511;
  double t512;
  double t513;
  double t474;
  double t476;
  double t373;
  double t377;
  double t394;
  double t478;
  double t479;
  double t481;
  double t482;
  double t483;
  double t488;
  double t491;
  double t538;
  double t503;
  double t514;
  double t531;
  double t532;
  double t534;
  double t535;
  double t539;
  double t540;
  double t541;
  double t543;
  double t560;
  double t561;
  double t577;
  double t578;
  double t579;
  double t580;
  double t581;
  double t582;
  double t586;
  double t587;
  double t588;
  double t589;
  double t591;
  double t592;
  double t515;
  double t520;
  double t544;
  double t545;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t552;
  double t563;
  double t564;
  t197 = Cos(var1[2]);
  t176 = Cos(var1[5]);
  t184 = Sin(var1[2]);
  t200 = Sin(var1[5]);
  t172 = Cos(var1[6]);
  t192 = -1.*t176*t184;
  t202 = -1.*t197*t200;
  t208 = t192 + t202;
  t220 = t197*t176;
  t227 = -1.*t184*t200;
  t230 = t220 + t227;
  t232 = Sin(var1[6]);
  t235 = t172*t208;
  t277 = -1.*t197*t176;
  t279 = t184*t200;
  t280 = t277 + t279;
  t258 = -1.*t172;
  t263 = 1. + t258;
  t266 = -0.4*t263;
  t268 = 0. + t266;
  t271 = t268*t208;
  t284 = 0.4*t232;
  t285 = 0. + t284;
  t287 = t280*t285;
  t291 = t280*t232;
  t298 = t235 + t291;
  t299 = -0.64*t298;
  t301 = t271 + t287 + t299;
  t312 = -1.*var3[2];
  t320 = Cos(var1[3]);
  t321 = t197*t320;
  t322 = Sin(var1[3]);
  t324 = -1.*t184*t322;
  t325 = t321 + t324;
  t332 = Cos(var1[4]);
  t347 = -1.*t320*t184;
  t348 = -1.*t197*t322;
  t352 = t347 + t348;
  t357 = Sin(var1[4]);
  t385 = t268*t230;
  t386 = t208*t285;
  t387 = t172*t230;
  t390 = t208*t232;
  t391 = t387 + t390;
  t392 = -0.64*t391;
  t396 = t385 + t386 + t392;
  t404 = t176*t184;
  t405 = t197*t200;
  t406 = t404 + t405;
  t217 = 0.4*t172*t208;
  t234 = -0.4*t230*t232;
  t240 = -1.*t230*t232;
  t241 = t235 + t240;
  t243 = -0.64*t241;
  t247 = t217 + t234 + t243;
  t256 = var2[6]*t247;
  t303 = var2[2]*t301;
  t304 = var2[5]*t301;
  t306 = var2[1] + t256 + t303 + t304;
  t397 = var2[2]*t396;
  t401 = var2[5]*t396;
  t402 = 0.4*t172*t230;
  t408 = -0.4*t406*t232;
  t409 = -1.*t406*t232;
  t414 = t387 + t409;
  t415 = -0.64*t414;
  t418 = t402 + t408 + t415;
  t420 = var2[6]*t418;
  t422 = var2[0] + t397 + t401 + t420;
  t432 = -1.*var3[1];
  t433 = 0. + t432;
  t442 = -1.*var3[0];
  t335 = -1.*t332;
  t336 = 1. + t335;
  t337 = -0.4*t336;
  t338 = 0. + t337;
  t455 = t320*t184;
  t456 = t197*t322;
  t457 = t455 + t456;
  t358 = 0.4*t357;
  t362 = 0. + t358;
  t505 = -1.*t197*t320;
  t506 = t184*t322;
  t507 = t505 + t506;
  t315 = 0.24*t197;
  t316 = t312 + var1[1] + t315;
  t447 = 0.24*t184;
  t450 = t442 + var1[0] + t447;
  t458 = -0.11*t457;
  t459 = t442 + var1[0] + t458;
  t327 = -0.11*t325;
  t330 = t312 + var1[1] + t327;
  t340 = t338*t325;
  t364 = t352*t362;
  t365 = t332*t325;
  t367 = t352*t357;
  t368 = t365 + t367;
  t369 = -0.64*t368;
  t370 = 0. + t312 + var1[1] + t340 + t364 + t369;
  t461 = t338*t457;
  t462 = t325*t362;
  t463 = t332*t457;
  t465 = t325*t357;
  t466 = t463 + t465;
  t467 = -0.64*t466;
  t468 = 0. + t442 + var1[0] + t461 + t462 + t467;
  t504 = t338*t352;
  t508 = t507*t362;
  t509 = t332*t352;
  t510 = t507*t357;
  t511 = t509 + t510;
  t512 = -0.64*t511;
  t513 = t504 + t508 + t512;
  t474 = -0.11*t406;
  t476 = t442 + var1[0] + t474;
  t373 = -0.11*t230;
  t377 = t312 + var1[1] + t373;
  t394 = 0. + t312 + var1[1] + t385 + t386 + t392;
  t478 = t268*t406;
  t479 = t230*t285;
  t481 = t172*t406;
  t482 = t230*t232;
  t483 = t481 + t482;
  t488 = -0.64*t483;
  t491 = 0. + t442 + var1[0] + t478 + t479 + t488;
  t538 = t340 + t364 + t369;
  t503 = -0.748*t433*t352;
  t514 = 3.2*t433*t513;
  t531 = 0.11*t352*t459;
  t532 = -0.11*t325*t330;
  t534 = t531 + t532;
  t535 = 6.8*t534;
  t539 = t538*t370;
  t540 = -1.*t468*t513;
  t541 = t539 + t540;
  t543 = 3.2*t541;
  t560 = 0.748*t433*t325;
  t561 = -3.2*t433*t538;
  t577 = 0.4*t332*t352;
  t578 = -0.4*t325*t357;
  t579 = -1.*t325*t357;
  t580 = t509 + t579;
  t581 = -0.64*t580;
  t582 = t577 + t578 + t581;
  t586 = 0.4*t332*t325;
  t587 = -0.4*t457*t357;
  t588 = -1.*t457*t357;
  t589 = t365 + t588;
  t591 = -0.64*t589;
  t592 = t586 + t587 + t591;
  t515 = -0.748*t433*t208;
  t520 = 3.2*t433*t301;
  t544 = 0.11*t208*t476;
  t545 = -0.11*t230*t377;
  t547 = t544 + t545;
  t548 = 6.8*t547;
  t549 = t396*t394;
  t550 = -1.*t491*t301;
  t551 = t549 + t550;
  t552 = 3.2*t551;
  t563 = 0.748*t433*t230;
  t564 = -3.2*t433*t396;
  p_output1[0]=-3.2*t306*var4[1];
  p_output1[1]=12.*t316 + 6.8*t330 + 3.2*t370 + 6.8*t377 + 3.2*t394 + 3.2*(t306*var4[0] - 1.*t422*var4[2]);
  p_output1[2]=-32.*t433 + 3.2*t422*var4[1];
  p_output1[3]=32.*t433 - 3.2*t306*var4[4];
  p_output1[4]=-12.*t450 - 6.8*t459 - 3.2*t468 - 6.8*t476 - 3.2*t491 + 3.2*(t306*var4[3] - 1.*t422*var4[5]);
  p_output1[5]=3.2*t422*var4[4];
  p_output1[6]=-2.88*t184*t433 + t503 + t514 + t515 + t520 - 3.2*t306*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t197*t316 + 0.24*t184*t450) + t535 + t543 + t548 + t552 + 3.2*(t306*var4[6] - 1.*t422*var4[8]);
  p_output1[8]=-2.88*t197*t433 + t560 + t561 + t563 + t564 + 3.2*t422*var4[7];
  p_output1[9]=t503 + t514 - 3.2*t306*var4[10];
  p_output1[10]=0.6699999999999999 + t535 + t543 + 3.2*(t306*var4[9] - 1.*t422*var4[11]);
  p_output1[11]=t560 + t561 + 3.2*t422*var4[10];
  p_output1[12]=3.2*t433*t582 - 3.2*t306*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t468*t582 + t370*t592) + 3.2*(t306*var4[12] - 1.*t422*var4[14]);
  p_output1[14]=-3.2*t433*t592 + 3.2*t422*var4[13];
  p_output1[15]=t515 + t520 - 3.2*t306*var4[16];
  p_output1[16]=0.6699999999999999 + t548 + t552 + 3.2*(t306*var4[15] - 1.*t422*var4[17]);
  p_output1[17]=t563 + t564 + 3.2*t422*var4[16];
  p_output1[18]=3.2*t247*t433 - 3.2*t306*var4[19];
  p_output1[19]=0.2 + 3.2*(t394*t418 - 1.*t247*t491) + 3.2*(t306*var4[18] - 1.*t422*var4[20]);
  p_output1[20]=-3.2*t418*t433 + 3.2*t422*var4[19];
}



void Jdq_AMworld_about_pA_src(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}
