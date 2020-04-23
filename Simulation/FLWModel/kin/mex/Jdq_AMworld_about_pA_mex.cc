/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:37 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t160;
  double t145;
  double t152;
  double t161;
  double t132;
  double t156;
  double t166;
  double t172;
  double t184;
  double t188;
  double t189;
  double t191;
  double t197;
  double t228;
  double t230;
  double t232;
  double t210;
  double t216;
  double t217;
  double t220;
  double t227;
  double t234;
  double t235;
  double t240;
  double t241;
  double t243;
  double t247;
  double t250;
  double t264;
  double t269;
  double t271;
  double t272;
  double t274;
  double t276;
  double t281;
  double t289;
  double t290;
  double t291;
  double t293;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t327;
  double t331;
  double t337;
  double t338;
  double t339;
  double t176;
  double t192;
  double t198;
  double t200;
  double t202;
  double t204;
  double t208;
  double t256;
  double t258;
  double t259;
  double t332;
  double t335;
  double t336;
  double t340;
  double t342;
  double t347;
  double t348;
  double t350;
  double t352;
  double t354;
  double t366;
  double t367;
  double t380;
  double t282;
  double t283;
  double t284;
  double t285;
  double t386;
  double t387;
  double t389;
  double t298;
  double t299;
  double t437;
  double t438;
  double t439;
  double t266;
  double t267;
  double t381;
  double t384;
  double t390;
  double t391;
  double t277;
  double t279;
  double t287;
  double t301;
  double t303;
  double t304;
  double t306;
  double t308;
  double t309;
  double t394;
  double t395;
  double t396;
  double t397;
  double t401;
  double t402;
  double t403;
  double t436;
  double t441;
  double t442;
  double t447;
  double t450;
  double t452;
  double t453;
  double t405;
  double t406;
  double t315;
  double t316;
  double t329;
  double t409;
  double t414;
  double t415;
  double t418;
  double t420;
  double t422;
  double t423;
  double t470;
  double t435;
  double t455;
  double t465;
  double t466;
  double t467;
  double t468;
  double t474;
  double t475;
  double t476;
  double t477;
  double t499;
  double t500;
  double t520;
  double t521;
  double t523;
  double t525;
  double t526;
  double t527;
  double t531;
  double t532;
  double t533;
  double t534;
  double t535;
  double t536;
  double t456;
  double t457;
  double t478;
  double t479;
  double t481;
  double t482;
  double t483;
  double t487;
  double t488;
  double t491;
  double t503;
  double t504;
  t160 = Cos(var1[2]);
  t145 = Cos(var1[5]);
  t152 = Sin(var1[2]);
  t161 = Sin(var1[5]);
  t132 = Cos(var1[6]);
  t156 = -1.*t145*t152;
  t166 = -1.*t160*t161;
  t172 = t156 + t166;
  t184 = t160*t145;
  t188 = -1.*t152*t161;
  t189 = t184 + t188;
  t191 = Sin(var1[6]);
  t197 = t132*t172;
  t228 = -1.*t160*t145;
  t230 = t152*t161;
  t232 = t228 + t230;
  t210 = -1.*t132;
  t216 = 1. + t210;
  t217 = -0.4*t216;
  t220 = 0. + t217;
  t227 = t220*t172;
  t234 = 0.4*t191;
  t235 = 0. + t234;
  t240 = t232*t235;
  t241 = t232*t191;
  t243 = t197 + t241;
  t247 = -0.64*t243;
  t250 = t227 + t240 + t247;
  t264 = -1.*var3[2];
  t269 = Cos(var1[3]);
  t271 = t160*t269;
  t272 = Sin(var1[3]);
  t274 = -1.*t152*t272;
  t276 = t271 + t274;
  t281 = Cos(var1[4]);
  t289 = -1.*t269*t152;
  t290 = -1.*t160*t272;
  t291 = t289 + t290;
  t293 = Sin(var1[4]);
  t320 = t220*t189;
  t321 = t172*t235;
  t322 = t132*t189;
  t324 = t172*t191;
  t325 = t322 + t324;
  t327 = -0.64*t325;
  t331 = t320 + t321 + t327;
  t337 = t145*t152;
  t338 = t160*t161;
  t339 = t337 + t338;
  t176 = 0.4*t132*t172;
  t192 = -0.4*t189*t191;
  t198 = -1.*t189*t191;
  t200 = t197 + t198;
  t202 = -0.64*t200;
  t204 = t176 + t192 + t202;
  t208 = var2[6]*t204;
  t256 = var2[2]*t250;
  t258 = var2[5]*t250;
  t259 = var2[1] + t208 + t256 + t258;
  t332 = var2[2]*t331;
  t335 = var2[5]*t331;
  t336 = 0.4*t132*t189;
  t340 = -0.4*t339*t191;
  t342 = -1.*t339*t191;
  t347 = t322 + t342;
  t348 = -0.64*t347;
  t350 = t336 + t340 + t348;
  t352 = var2[6]*t350;
  t354 = var2[0] + t332 + t335 + t352;
  t366 = -1.*var3[1];
  t367 = 0. + t366;
  t380 = -1.*var3[0];
  t282 = -1.*t281;
  t283 = 1. + t282;
  t284 = -0.4*t283;
  t285 = 0. + t284;
  t386 = t269*t152;
  t387 = t160*t272;
  t389 = t386 + t387;
  t298 = 0.4*t293;
  t299 = 0. + t298;
  t437 = -1.*t160*t269;
  t438 = t152*t272;
  t439 = t437 + t438;
  t266 = 0.24*t160;
  t267 = t264 + var1[1] + t266;
  t381 = 0.24*t152;
  t384 = t380 + var1[0] + t381;
  t390 = -0.11*t389;
  t391 = t380 + var1[0] + t390;
  t277 = -0.11*t276;
  t279 = t264 + var1[1] + t277;
  t287 = t285*t276;
  t301 = t291*t299;
  t303 = t281*t276;
  t304 = t291*t293;
  t306 = t303 + t304;
  t308 = -0.64*t306;
  t309 = 0. + t264 + var1[1] + t287 + t301 + t308;
  t394 = t285*t389;
  t395 = t276*t299;
  t396 = t281*t389;
  t397 = t276*t293;
  t401 = t396 + t397;
  t402 = -0.64*t401;
  t403 = 0. + t380 + var1[0] + t394 + t395 + t402;
  t436 = t285*t291;
  t441 = t439*t299;
  t442 = t281*t291;
  t447 = t439*t293;
  t450 = t442 + t447;
  t452 = -0.64*t450;
  t453 = t436 + t441 + t452;
  t405 = -0.11*t339;
  t406 = t380 + var1[0] + t405;
  t315 = -0.11*t189;
  t316 = t264 + var1[1] + t315;
  t329 = 0. + t264 + var1[1] + t320 + t321 + t327;
  t409 = t220*t339;
  t414 = t189*t235;
  t415 = t132*t339;
  t418 = t189*t191;
  t420 = t415 + t418;
  t422 = -0.64*t420;
  t423 = 0. + t380 + var1[0] + t409 + t414 + t422;
  t470 = t287 + t301 + t308;
  t435 = -0.748*t367*t291;
  t455 = 3.2*t367*t453;
  t465 = 0.11*t291*t391;
  t466 = -0.11*t276*t279;
  t467 = t465 + t466;
  t468 = 6.8*t467;
  t474 = t470*t309;
  t475 = -1.*t403*t453;
  t476 = t474 + t475;
  t477 = 3.2*t476;
  t499 = 0.748*t367*t276;
  t500 = -3.2*t367*t470;
  t520 = 0.4*t281*t291;
  t521 = -0.4*t276*t293;
  t523 = -1.*t276*t293;
  t525 = t442 + t523;
  t526 = -0.64*t525;
  t527 = t520 + t521 + t526;
  t531 = 0.4*t281*t276;
  t532 = -0.4*t389*t293;
  t533 = -1.*t389*t293;
  t534 = t303 + t533;
  t535 = -0.64*t534;
  t536 = t531 + t532 + t535;
  t456 = -0.748*t367*t172;
  t457 = 3.2*t367*t250;
  t478 = 0.11*t172*t406;
  t479 = -0.11*t189*t316;
  t481 = t478 + t479;
  t482 = 6.8*t481;
  t483 = t331*t329;
  t487 = -1.*t423*t250;
  t488 = t483 + t487;
  t491 = 3.2*t488;
  t503 = 0.748*t367*t189;
  t504 = -3.2*t367*t331;
  p_output1[0]=-3.2*t259*var4[1];
  p_output1[1]=12.*t267 + 6.8*t279 + 3.2*t309 + 6.8*t316 + 3.2*t329 + 3.2*(t259*var4[0] - 1.*t354*var4[2]);
  p_output1[2]=-32.*t367 + 3.2*t354*var4[1];
  p_output1[3]=32.*t367 - 3.2*t259*var4[4];
  p_output1[4]=-12.*t384 - 6.8*t391 - 3.2*t403 - 6.8*t406 - 3.2*t423 + 3.2*(t259*var4[3] - 1.*t354*var4[5]);
  p_output1[5]=3.2*t354*var4[4];
  p_output1[6]=-2.88*t152*t367 + t435 + t455 + t456 + t457 - 3.2*t259*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t160*t267 + 0.24*t152*t384) + t468 + t477 + t482 + t491 + 3.2*(t259*var4[6] - 1.*t354*var4[8]);
  p_output1[8]=-2.88*t160*t367 + t499 + t500 + t503 + t504 + 3.2*t354*var4[7];
  p_output1[9]=t435 + t455 - 3.2*t259*var4[10];
  p_output1[10]=0.6699999999999999 + t468 + t477 + 3.2*(t259*var4[9] - 1.*t354*var4[11]);
  p_output1[11]=t499 + t500 + 3.2*t354*var4[10];
  p_output1[12]=3.2*t367*t527 - 3.2*t259*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t403*t527 + t309*t536) + 3.2*(t259*var4[12] - 1.*t354*var4[14]);
  p_output1[14]=-3.2*t367*t536 + 3.2*t354*var4[13];
  p_output1[15]=t456 + t457 - 3.2*t259*var4[16];
  p_output1[16]=0.6699999999999999 + t482 + t491 + 3.2*(t259*var4[15] - 1.*t354*var4[17]);
  p_output1[17]=t503 + t504 + 3.2*t354*var4[16];
  p_output1[18]=3.2*t204*t367 - 3.2*t259*var4[19];
  p_output1[19]=0.2 + 3.2*(t329*t350 - 1.*t204*t423) + 3.2*(t259*var4[18] - 1.*t354*var4[20]);
  p_output1[20]=-3.2*t350*t367 + 3.2*t354*var4[19];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 7) && 
      !(mrows == 7 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMworld_about_pA_mex.hh"

namespace SymExpression
{

void Jdq_AMworld_about_pA_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
