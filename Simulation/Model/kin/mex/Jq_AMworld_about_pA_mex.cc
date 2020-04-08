/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 12:24:35 GMT-04:00
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
  double t47;
  double t31;
  double t45;
  double t48;
  double t29;
  double t46;
  double t55;
  double t57;
  double t67;
  double t69;
  double t71;
  double t72;
  double t76;
  double t100;
  double t101;
  double t105;
  double t91;
  double t95;
  double t96;
  double t98;
  double t99;
  double t107;
  double t109;
  double t111;
  double t117;
  double t118;
  double t119;
  double t120;
  double t133;
  double t134;
  double t138;
  double t141;
  double t143;
  double t149;
  double t152;
  double t153;
  double t154;
  double t155;
  double t157;
  double t169;
  double t171;
  double t172;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t173;
  double t176;
  double t178;
  double t179;
  double t180;
  double t181;
  double t182;
  double t59;
  double t75;
  double t84;
  double t85;
  double t86;
  double t88;
  double t90;
  double t121;
  double t123;
  double t124;
  double t194;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t205;
  double t206;
  double t207;
  double t202;
  double t203;
  double t204;
  double t208;
  double t209;
  double t210;
  double t212;
  double t213;
  double t214;
  double t215;
  double t232;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t242;
  double t243;
  double t244;
  double t265;
  double t266;
  double t274;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t296;
  double t302;
  double t303;
  double t304;
  double t305;
  double t306;
  double t307;
  double t224;
  double t225;
  double t129;
  double t131;
  double t145;
  double t146;
  double t147;
  double t318;
  double t227;
  double t228;
  double t229;
  double t314;
  double t268;
  double t269;
  double t270;
  double t239;
  double t240;
  double t241;
  double t245;
  double t246;
  double t247;
  double t248;
  double t249;
  double t250;
  double t251;
  double t272;
  double t273;
  double t275;
  double t276;
  double t277;
  double t278;
  double t279;
  double t286;
  double t287;
  double t288;
  double t151;
  double t156;
  double t158;
  double t160;
  double t161;
  double t162;
  double t163;
  double t184;
  double t185;
  double t187;
  double t189;
  double t190;
  double t191;
  double t253;
  double t254;
  double t256;
  double t290;
  double t291;
  double t292;
  double t294;
  double t295;
  double t297;
  double t298;
  double t299;
  double t300;
  double t301;
  double t308;
  double t309;
  double t310;
  double t327;
  double t347;
  double t353;
  double t377;
  double t271;
  double t289;
  double t326;
  double t328;
  double t329;
  double t330;
  double t331;
  double t332;
  double t333;
  double t334;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  double t345;
  double t346;
  double t348;
  double t349;
  double t350;
  double t351;
  double t384;
  double t385;
  double t399;
  double t400;
  double t401;
  double t402;
  double t403;
  double t404;
  double t405;
  double t406;
  double t407;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t419;
  double t420;
  double t421;
  double t293;
  double t311;
  double t352;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t359;
  double t360;
  double t361;
  double t362;
  double t367;
  double t368;
  double t369;
  double t370;
  double t371;
  double t372;
  double t373;
  double t374;
  double t375;
  double t376;
  double t378;
  double t379;
  double t380;
  double t381;
  double t386;
  double t388;
  double t443;
  double t444;
  double t445;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t461;
  double t462;
  double t463;
  double t464;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  t47 = Cos(var1[2]);
  t31 = Cos(var1[5]);
  t45 = Sin(var1[2]);
  t48 = Sin(var1[5]);
  t29 = Cos(var1[6]);
  t46 = -1.*t31*t45;
  t55 = -1.*t47*t48;
  t57 = t46 + t55;
  t67 = t47*t31;
  t69 = -1.*t45*t48;
  t71 = t67 + t69;
  t72 = Sin(var1[6]);
  t76 = t29*t57;
  t100 = -1.*t47*t31;
  t101 = t45*t48;
  t105 = t100 + t101;
  t91 = -1.*t29;
  t95 = 1. + t91;
  t96 = -0.4*t95;
  t98 = 0. + t96;
  t99 = t98*t57;
  t107 = 0.4*t72;
  t109 = 0. + t107;
  t111 = t105*t109;
  t117 = t105*t72;
  t118 = t76 + t117;
  t119 = -0.64*t118;
  t120 = t99 + t111 + t119;
  t133 = Cos(var1[3]);
  t134 = -1.*t133*t45;
  t138 = Sin(var1[3]);
  t141 = -1.*t47*t138;
  t143 = t134 + t141;
  t149 = Cos(var1[4]);
  t152 = t47*t133;
  t153 = -1.*t45*t138;
  t154 = t152 + t153;
  t155 = Sin(var1[4]);
  t157 = t149*t143;
  t169 = -1.*t47*t133;
  t171 = t45*t138;
  t172 = t169 + t171;
  t164 = -1.*t149;
  t165 = 1. + t164;
  t166 = -0.4*t165;
  t167 = 0. + t166;
  t168 = t167*t143;
  t173 = 0.4*t155;
  t176 = 0. + t173;
  t178 = t172*t176;
  t179 = t172*t155;
  t180 = t157 + t179;
  t181 = -0.64*t180;
  t182 = t168 + t178 + t181;
  t59 = 0.4*t29*t57;
  t75 = -0.4*t71*t72;
  t84 = -1.*t71*t72;
  t85 = t76 + t84;
  t86 = -0.64*t85;
  t88 = t59 + t75 + t86;
  t90 = var2[6]*t88;
  t121 = var2[2]*t120;
  t123 = var2[5]*t120;
  t124 = var2[1] + t90 + t121 + t123;
  t194 = t98*t71;
  t196 = t57*t109;
  t197 = t29*t71;
  t198 = t57*t72;
  t199 = t197 + t198;
  t200 = -0.64*t199;
  t201 = t194 + t196 + t200;
  t205 = t31*t45;
  t206 = t47*t48;
  t207 = t205 + t206;
  t202 = var2[2]*t201;
  t203 = var2[5]*t201;
  t204 = 0.4*t29*t71;
  t208 = -0.4*t207*t72;
  t209 = -1.*t207*t72;
  t210 = t197 + t209;
  t212 = -0.64*t210;
  t213 = t204 + t208 + t212;
  t214 = var2[6]*t213;
  t215 = var2[0] + t202 + t203 + t214;
  t232 = t167*t154;
  t233 = t143*t176;
  t234 = t149*t154;
  t235 = t143*t155;
  t236 = t234 + t235;
  t237 = -0.64*t236;
  t238 = t232 + t233 + t237;
  t242 = t133*t45;
  t243 = t47*t138;
  t244 = t242 + t243;
  t265 = -1.*var3[1];
  t266 = 0. + t265;
  t274 = t149*t172;
  t280 = t167*t172;
  t281 = t244*t176;
  t282 = t244*t155;
  t283 = t274 + t282;
  t284 = -0.64*t283;
  t285 = t280 + t281 + t284;
  t296 = t29*t105;
  t302 = t98*t105;
  t303 = t207*t109;
  t304 = t207*t72;
  t305 = t296 + t304;
  t306 = -0.64*t305;
  t307 = t302 + t303 + t306;
  t224 = 0.24*var2[2]*t47;
  t225 = var2[0] + t224;
  t129 = -0.24*var2[2]*t45;
  t131 = var2[1] + t129;
  t145 = -0.11*var2[2]*t143;
  t146 = -0.11*var2[3]*t143;
  t147 = var2[1] + t145 + t146;
  t318 = -1.*var3[2];
  t227 = -0.11*var2[2]*t154;
  t228 = -0.11*var2[3]*t154;
  t229 = var2[0] + t227 + t228;
  t314 = -1.*var3[0];
  t268 = -0.11*var2[2]*t172;
  t269 = -0.11*var2[3]*t172;
  t270 = t268 + t269;
  t239 = var2[2]*t238;
  t240 = var2[3]*t238;
  t241 = 0.4*t149*t154;
  t245 = -0.4*t244*t155;
  t246 = -1.*t244*t155;
  t247 = t234 + t246;
  t248 = -0.64*t247;
  t249 = t241 + t245 + t248;
  t250 = var2[4]*t249;
  t251 = var2[0] + t239 + t240 + t250;
  t272 = 0.4*t149*t172;
  t273 = -0.4*t143*t155;
  t275 = -1.*t143*t155;
  t276 = t274 + t275;
  t277 = -0.64*t276;
  t278 = t272 + t273 + t277;
  t279 = var2[4]*t278;
  t286 = var2[2]*t285;
  t287 = var2[3]*t285;
  t288 = t279 + t286 + t287;
  t151 = 0.4*t149*t143;
  t156 = -0.4*t154*t155;
  t158 = -1.*t154*t155;
  t160 = t157 + t158;
  t161 = -0.64*t160;
  t162 = t151 + t156 + t161;
  t163 = var2[4]*t162;
  t184 = var2[2]*t182;
  t185 = var2[3]*t182;
  t187 = var2[1] + t163 + t184 + t185;
  t189 = -0.11*var2[2]*t57;
  t190 = -0.11*var2[5]*t57;
  t191 = var2[1] + t189 + t190;
  t253 = -0.11*var2[2]*t71;
  t254 = -0.11*var2[5]*t71;
  t256 = var2[0] + t253 + t254;
  t290 = -0.11*var2[2]*t105;
  t291 = -0.11*var2[5]*t105;
  t292 = t290 + t291;
  t294 = 0.4*t29*t105;
  t295 = -0.4*t57*t72;
  t297 = -1.*t57*t72;
  t298 = t296 + t297;
  t299 = -0.64*t298;
  t300 = t294 + t295 + t299;
  t301 = var2[6]*t300;
  t308 = var2[2]*t307;
  t309 = var2[5]*t307;
  t310 = t301 + t308 + t309;
  t327 = t145 + t146;
  t347 = t163 + t184 + t185;
  t353 = t189 + t190;
  t377 = t90 + t121 + t123;
  t271 = 6.8*t266*t270;
  t289 = 3.2*t266*t288;
  t326 = 0.11*t154*t147;
  t328 = -0.11*t154;
  t329 = t318 + var1[1] + t328;
  t330 = t327*t329;
  t331 = -0.11*t143*t229;
  t332 = -0.11*t244;
  t333 = t314 + var1[0] + t332;
  t334 = -1.*t333*t270;
  t335 = t326 + t330 + t331 + t334;
  t336 = 6.8*t335;
  t337 = t182*t251;
  t338 = t167*t244;
  t339 = t154*t176;
  t340 = t149*t244;
  t341 = t154*t155;
  t342 = t340 + t341;
  t343 = -0.64*t342;
  t344 = 0. + t314 + var1[0] + t338 + t339 + t343;
  t345 = -1.*t344*t288;
  t346 = 0. + t318 + var1[1] + t232 + t233 + t237;
  t348 = t346*t347;
  t349 = -1.*t238*t187;
  t350 = t337 + t345 + t348 + t349;
  t351 = 3.2*t350;
  t384 = -6.8*t266*t327;
  t385 = -3.2*t266*t347;
  t399 = -0.4*t149*t154;
  t400 = -1.*t149*t154;
  t401 = t400 + t275;
  t402 = -0.64*t401;
  t403 = t399 + t273 + t402;
  t404 = var2[4]*t403;
  t405 = var2[2]*t278;
  t406 = var2[3]*t278;
  t407 = t404 + t405 + t406;
  t413 = var2[2]*t162;
  t414 = var2[3]*t162;
  t415 = -0.4*t149*t244;
  t416 = -1.*t149*t244;
  t417 = t416 + t158;
  t418 = -0.64*t417;
  t419 = t415 + t156 + t418;
  t420 = var2[4]*t419;
  t421 = t413 + t414 + t420;
  t293 = 6.8*t266*t292;
  t311 = 3.2*t266*t310;
  t352 = 0.11*t71*t191;
  t354 = -0.11*t71;
  t355 = t318 + var1[1] + t354;
  t356 = t353*t355;
  t357 = -0.11*t57*t256;
  t358 = -0.11*t207;
  t359 = t314 + var1[0] + t358;
  t360 = -1.*t359*t292;
  t361 = t352 + t356 + t357 + t360;
  t362 = 6.8*t361;
  t367 = t120*t215;
  t368 = t98*t207;
  t369 = t71*t109;
  t370 = t29*t207;
  t371 = t71*t72;
  t372 = t370 + t371;
  t373 = -0.64*t372;
  t374 = 0. + t314 + var1[0] + t368 + t369 + t373;
  t375 = -1.*t374*t310;
  t376 = 0. + t318 + var1[1] + t194 + t196 + t200;
  t378 = t376*t377;
  t379 = -1.*t201*t124;
  t380 = t367 + t375 + t378 + t379;
  t381 = 3.2*t380;
  t386 = -6.8*t266*t353;
  t388 = -3.2*t266*t377;
  t443 = -0.4*t29*t71;
  t444 = -1.*t29*t71;
  t445 = t444 + t297;
  t446 = -0.64*t445;
  t447 = t443 + t295 + t446;
  t448 = var2[6]*t447;
  t449 = var2[2]*t300;
  t450 = var2[5]*t300;
  t451 = t448 + t449 + t450;
  t461 = var2[2]*t88;
  t462 = var2[5]*t88;
  t463 = -0.4*t29*t207;
  t464 = -1.*t29*t207;
  t465 = t464 + t84;
  t466 = -0.64*t465;
  t467 = t463 + t75 + t466;
  t468 = var2[6]*t467;
  t469 = t461 + t462 + t468;
  p_output1[0]=-3.2*t124*var4[1];
  p_output1[1]=-3.2*t124 - 12.*t131 - 6.8*t147 - 3.2*t187 - 6.8*t191 + 3.2*(t124*var4[0] - 1.*t215*var4[2]);
  p_output1[2]=3.2*t215*var4[1];
  p_output1[3]=-3.2*t124*var4[4];
  p_output1[4]=3.2*t215 + 12.*t225 + 6.8*t229 + 3.2*t251 + 6.8*t256 + 3.2*(t124*var4[3] - 1.*t215*var4[5]);
  p_output1[5]=3.2*t215*var4[4];
  p_output1[6]=t271 + t289 + t293 + t311 - 2.88*t266*t47*var2[2] - 3.2*t124*var4[7];
  p_output1[7]=t336 + t351 + t362 + t381 + 12.*(-0.24*t225*t45 - 0.24*t131*t47 + 0.24*t47*(t314 + 0.24*t45 + var1[0])*var2[2] - 0.24*t45*(t318 + 0.24*t47 + var1[1])*var2[2]) + 3.2*(t124*var4[6] - 1.*t215*var4[8]);
  p_output1[8]=t384 + t385 + t386 + t388 + 2.88*t266*t45*var2[2] + 3.2*t215*var4[7];
  p_output1[9]=t271 + t289 - 3.2*t124*var4[10];
  p_output1[10]=t336 + t351 + 3.2*(t124*var4[9] - 1.*t215*var4[11]);
  p_output1[11]=t384 + t385 + 3.2*t215*var4[10];
  p_output1[12]=3.2*t266*t407 - 3.2*t124*var4[13];
  p_output1[13]=3.2*(-1.*t187*t249 + t162*t251 - 1.*t344*t407 + t346*t421) + 3.2*(t124*var4[12] - 1.*t215*var4[14]);
  p_output1[14]=-3.2*t266*t421 + 3.2*t215*var4[13];
  p_output1[15]=t293 + t311 - 3.2*t124*var4[16];
  p_output1[16]=t362 + t381 + 3.2*(t124*var4[15] - 1.*t215*var4[17]);
  p_output1[17]=t386 + t388 + 3.2*t215*var4[16];
  p_output1[18]=3.2*t266*t451 - 3.2*t124*var4[19];
  p_output1[19]=3.2*(-1.*t124*t213 - 1.*t374*t451 + t376*t469 + t215*t88) + 3.2*(t124*var4[18] - 1.*t215*var4[20]);
  p_output1[20]=-3.2*t266*t469 + 3.2*t215*var4[19];
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

#include "Jq_AMworld_about_pA_mex.hh"

namespace SymExpression
{

void Jq_AMworld_about_pA_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
