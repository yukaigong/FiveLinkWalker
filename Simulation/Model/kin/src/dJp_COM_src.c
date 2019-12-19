/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_COM_src.h"

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
  double t324;
  double t317;
  double t322;
  double t325;
  double t316;
  double t323;
  double t326;
  double t338;
  double t340;
  double t368;
  double t370;
  double t371;
  double t339;
  double t389;
  double t390;
  double t394;
  double t395;
  double t396;
  double t397;
  double t400;
  double t401;
  double t417;
  double t434;
  double t440;
  double t441;
  double t429;
  double t431;
  double t432;
  double t433;
  double t442;
  double t443;
  double t454;
  double t456;
  double t457;
  double t458;
  double t460;
  double t472;
  double t474;
  double t471;
  double t473;
  double t485;
  double t487;
  double t489;
  double t490;
  double t491;
  double t492;
  double t488;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t498;
  double t501;
  double t502;
  double t503;
  double t517;
  double t518;
  double t519;
  double t513;
  double t514;
  double t515;
  double t516;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  double t525;
  double t526;
  double t427;
  double t463;
  double t512;
  double t528;
  double t538;
  double t540;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t555;
  double t556;
  double t557;
  double t558;
  double t559;
  double t560;
  double t561;
  double t562;
  double t563;
  double t569;
  double t571;
  double t576;
  double t577;
  double t578;
  double t579;
  double t580;
  double t586;
  double t587;
  double t588;
  double t589;
  double t590;
  double t591;
  double t592;
  double t593;
  double t594;
  double t554;
  double t565;
  double t585;
  double t596;
  t324 = Cos(var1[2]);
  t317 = Cos(var1[3]);
  t322 = Sin(var1[2]);
  t325 = Sin(var1[3]);
  t316 = Cos(var1[4]);
  t323 = -1.*t317*t322;
  t326 = -1.*t324*t325;
  t338 = t323 + t326;
  t340 = t324*t317;
  t368 = -1.*t322*t325;
  t370 = t340 + t368;
  t371 = Sin(var1[4]);
  t339 = 0.4*t316*t338;
  t389 = -0.4*t370*t371;
  t390 = t316*t338;
  t394 = -1.*t370*t371;
  t395 = t390 + t394;
  t396 = -0.64*t395;
  t397 = t339 + t389 + t396;
  t400 = t317*t322;
  t401 = t324*t325;
  t417 = t400 + t401;
  t434 = -1.*t324*t317;
  t440 = t322*t325;
  t441 = t434 + t440;
  t429 = -0.748*t338;
  t431 = -1.*t316;
  t432 = 1. + t431;
  t433 = -0.4*t432*t338;
  t442 = 0.4*t441*t371;
  t443 = t441*t371;
  t454 = t390 + t443;
  t456 = -0.64*t454;
  t457 = t433 + t442 + t456;
  t458 = 3.2*t457;
  t460 = t429 + t458;
  t472 = Cos(var1[5]);
  t474 = Sin(var1[5]);
  t471 = Cos(var1[6]);
  t473 = -1.*t472*t322;
  t485 = -1.*t324*t474;
  t487 = t473 + t485;
  t489 = t324*t472;
  t490 = -1.*t322*t474;
  t491 = t489 + t490;
  t492 = Sin(var1[6]);
  t488 = 0.4*t471*t487;
  t493 = -0.4*t491*t492;
  t494 = t471*t487;
  t495 = -1.*t491*t492;
  t496 = t494 + t495;
  t497 = -0.64*t496;
  t498 = t488 + t493 + t497;
  t501 = t472*t322;
  t502 = t324*t474;
  t503 = t501 + t502;
  t517 = -1.*t324*t472;
  t518 = t322*t474;
  t519 = t517 + t518;
  t513 = -0.748*t487;
  t514 = -1.*t471;
  t515 = 1. + t514;
  t516 = -0.4*t515*t487;
  t520 = 0.4*t519*t492;
  t521 = t519*t492;
  t522 = t494 + t521;
  t523 = -0.64*t522;
  t524 = t516 + t520 + t523;
  t525 = 3.2*t524;
  t526 = t513 + t525;
  t427 = 0.1*var2[4]*t397;
  t463 = 0.03125*var2[3]*t460;
  t512 = 0.1*var2[6]*t498;
  t528 = 0.03125*var2[5]*t526;
  t538 = -0.4*t338*t371;
  t540 = -1.*t338*t371;
  t545 = 0.4*t316*t441;
  t546 = t316*t441;
  t547 = t546 + t540;
  t548 = -0.64*t547;
  t549 = t545 + t538 + t548;
  t555 = -0.748*t441;
  t556 = -0.4*t432*t441;
  t557 = 0.4*t417*t371;
  t558 = t417*t371;
  t559 = t546 + t558;
  t560 = -0.64*t559;
  t561 = t556 + t557 + t560;
  t562 = 3.2*t561;
  t563 = t555 + t562;
  t569 = -0.4*t487*t492;
  t571 = -1.*t487*t492;
  t576 = 0.4*t471*t519;
  t577 = t471*t519;
  t578 = t577 + t571;
  t579 = -0.64*t578;
  t580 = t576 + t569 + t579;
  t586 = -0.748*t519;
  t587 = -0.4*t515*t519;
  t588 = 0.4*t503*t492;
  t589 = t503*t492;
  t590 = t577 + t589;
  t591 = -0.64*t590;
  t592 = t587 + t588 + t591;
  t593 = 3.2*t592;
  t594 = t586 + t593;
  t554 = 0.1*var2[4]*t549;
  t565 = 0.03125*var2[3]*t563;
  t585 = 0.1*var2[6]*t580;
  t596 = 0.03125*var2[5]*t594;
  p_output1[0]=var2[2]*(t427 + t463 + t512 + t528 + 0.03125*(-2.88*t322 + t429 + t458 + t513 + t525)*var2[2]) + (t427 + t463 + 0.03125*t460*var2[2])*var2[3] + var2[4]*(0.1*t397*var2[2] + 0.1*t397*var2[3] + 0.1*(t389 - 0.4*t316*t417 - 0.64*(t394 - 1.*t316*t417))*var2[4]) + (t512 + t528 + 0.03125*t526*var2[2])*var2[5] + var2[6]*(0.1*t498*var2[2] + 0.1*t498*var2[5] + 0.1*(t493 - 0.4*t471*t503 - 0.64*(t495 - 1.*t471*t503))*var2[6]);
  p_output1[1]=0;
  p_output1[2]=var2[2]*(t554 + t565 + t585 + t596 + 0.03125*(-2.88*t324 + t555 + t562 + t586 + t593)*var2[2]) + (t554 + t565 + 0.03125*t563*var2[2])*var2[3] + var2[4]*(0.1*t549*var2[2] + 0.1*t549*var2[3] + 0.1*(-0.4*t316*t370 + t538 - 0.64*(-1.*t316*t370 + t540))*var2[4]) + (t585 + t596 + 0.03125*t594*var2[2])*var2[5] + var2[6]*(0.1*t580*var2[2] + 0.1*t580*var2[5] + 0.1*(-0.4*t471*t491 + t569 - 0.64*(-1.*t471*t491 + t571))*var2[6]);
}



void dJp_COM_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
