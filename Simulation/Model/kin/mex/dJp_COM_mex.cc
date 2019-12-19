/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:19 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t240;
  double t223;
  double t225;
  double t241;
  double t196;
  double t239;
  double t242;
  double t269;
  double t288;
  double t293;
  double t295;
  double t296;
  double t270;
  double t297;
  double t298;
  double t299;
  double t313;
  double t314;
  double t315;
  double t318;
  double t319;
  double t320;
  double t347;
  double t359;
  double t360;
  double t343;
  double t344;
  double t345;
  double t346;
  double t361;
  double t362;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  double t373;
  double t375;
  double t372;
  double t374;
  double t376;
  double t377;
  double t379;
  double t380;
  double t381;
  double t382;
  double t378;
  double t383;
  double t384;
  double t385;
  double t386;
  double t387;
  double t388;
  double t391;
  double t392;
  double t393;
  double t407;
  double t408;
  double t409;
  double t403;
  double t404;
  double t405;
  double t406;
  double t410;
  double t411;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t341;
  double t369;
  double t402;
  double t418;
  double t428;
  double t430;
  double t435;
  double t436;
  double t437;
  double t438;
  double t439;
  double t445;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t452;
  double t453;
  double t459;
  double t461;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t476;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t482;
  double t483;
  double t484;
  double t444;
  double t455;
  double t475;
  double t486;
  t240 = Cos(var1[2]);
  t223 = Cos(var1[3]);
  t225 = Sin(var1[2]);
  t241 = Sin(var1[3]);
  t196 = Cos(var1[4]);
  t239 = -1.*t223*t225;
  t242 = -1.*t240*t241;
  t269 = t239 + t242;
  t288 = t240*t223;
  t293 = -1.*t225*t241;
  t295 = t288 + t293;
  t296 = Sin(var1[4]);
  t270 = 0.4*t196*t269;
  t297 = -0.4*t295*t296;
  t298 = t196*t269;
  t299 = -1.*t295*t296;
  t313 = t298 + t299;
  t314 = -0.64*t313;
  t315 = t270 + t297 + t314;
  t318 = t223*t225;
  t319 = t240*t241;
  t320 = t318 + t319;
  t347 = -1.*t240*t223;
  t359 = t225*t241;
  t360 = t347 + t359;
  t343 = -0.748*t269;
  t344 = -1.*t196;
  t345 = 1. + t344;
  t346 = -0.4*t345*t269;
  t361 = 0.4*t360*t296;
  t362 = t360*t296;
  t363 = t298 + t362;
  t364 = -0.64*t363;
  t365 = t346 + t361 + t364;
  t366 = 3.2*t365;
  t367 = t343 + t366;
  t373 = Cos(var1[5]);
  t375 = Sin(var1[5]);
  t372 = Cos(var1[6]);
  t374 = -1.*t373*t225;
  t376 = -1.*t240*t375;
  t377 = t374 + t376;
  t379 = t240*t373;
  t380 = -1.*t225*t375;
  t381 = t379 + t380;
  t382 = Sin(var1[6]);
  t378 = 0.4*t372*t377;
  t383 = -0.4*t381*t382;
  t384 = t372*t377;
  t385 = -1.*t381*t382;
  t386 = t384 + t385;
  t387 = -0.64*t386;
  t388 = t378 + t383 + t387;
  t391 = t373*t225;
  t392 = t240*t375;
  t393 = t391 + t392;
  t407 = -1.*t240*t373;
  t408 = t225*t375;
  t409 = t407 + t408;
  t403 = -0.748*t377;
  t404 = -1.*t372;
  t405 = 1. + t404;
  t406 = -0.4*t405*t377;
  t410 = 0.4*t409*t382;
  t411 = t409*t382;
  t412 = t384 + t411;
  t413 = -0.64*t412;
  t414 = t406 + t410 + t413;
  t415 = 3.2*t414;
  t416 = t403 + t415;
  t341 = 0.1*var2[4]*t315;
  t369 = 0.03125*var2[3]*t367;
  t402 = 0.1*var2[6]*t388;
  t418 = 0.03125*var2[5]*t416;
  t428 = -0.4*t269*t296;
  t430 = -1.*t269*t296;
  t435 = 0.4*t196*t360;
  t436 = t196*t360;
  t437 = t436 + t430;
  t438 = -0.64*t437;
  t439 = t435 + t428 + t438;
  t445 = -0.748*t360;
  t446 = -0.4*t345*t360;
  t447 = 0.4*t320*t296;
  t448 = t320*t296;
  t449 = t436 + t448;
  t450 = -0.64*t449;
  t451 = t446 + t447 + t450;
  t452 = 3.2*t451;
  t453 = t445 + t452;
  t459 = -0.4*t377*t382;
  t461 = -1.*t377*t382;
  t466 = 0.4*t372*t409;
  t467 = t372*t409;
  t468 = t467 + t461;
  t469 = -0.64*t468;
  t470 = t466 + t459 + t469;
  t476 = -0.748*t409;
  t477 = -0.4*t405*t409;
  t478 = 0.4*t393*t382;
  t479 = t393*t382;
  t480 = t467 + t479;
  t481 = -0.64*t480;
  t482 = t477 + t478 + t481;
  t483 = 3.2*t482;
  t484 = t476 + t483;
  t444 = 0.1*var2[4]*t439;
  t455 = 0.03125*var2[3]*t453;
  t475 = 0.1*var2[6]*t470;
  t486 = 0.03125*var2[5]*t484;
  p_output1[0]=var2[2]*(t341 + t369 + t402 + t418 + 0.03125*(-2.88*t225 + t343 + t366 + t403 + t415)*var2[2]) + (t341 + t369 + 0.03125*t367*var2[2])*var2[3] + var2[4]*(0.1*t315*var2[2] + 0.1*t315*var2[3] + 0.1*(t297 - 0.4*t196*t320 - 0.64*(t299 - 1.*t196*t320))*var2[4]) + (t402 + t418 + 0.03125*t416*var2[2])*var2[5] + var2[6]*(0.1*t388*var2[2] + 0.1*t388*var2[5] + 0.1*(t383 - 0.4*t372*t393 - 0.64*(t385 - 1.*t372*t393))*var2[6]);
  p_output1[1]=0;
  p_output1[2]=var2[2]*(t444 + t455 + t475 + t486 + 0.03125*(-2.88*t240 + t445 + t452 + t476 + t483)*var2[2]) + (t444 + t455 + 0.03125*t453*var2[2])*var2[3] + var2[4]*(0.1*t439*var2[2] + 0.1*t439*var2[3] + 0.1*(-0.4*t196*t295 + t428 - 0.64*(-1.*t196*t295 + t430))*var2[4]) + (t475 + t486 + 0.03125*t484*var2[2])*var2[5] + var2[6]*(0.1*t470*var2[2] + 0.1*t470*var2[5] + 0.1*(-0.4*t372*t381 + t459 - 0.64*(-1.*t372*t381 + t461))*var2[6]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_COM_mex.hh"

namespace SymExpression
{

void dJp_COM_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
