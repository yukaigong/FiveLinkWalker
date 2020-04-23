/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:49 GMT-05:00
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
  double t3297;
  double t3281;
  double t3286;
  double t3300;
  double t3277;
  double t3293;
  double t3301;
  double t3302;
  double t3305;
  double t3307;
  double t3308;
  double t3309;
  double t3312;
  double t3325;
  double t3326;
  double t3327;
  double t3319;
  double t3320;
  double t3321;
  double t3323;
  double t3324;
  double t3328;
  double t3329;
  double t3330;
  double t3331;
  double t3332;
  double t3333;
  double t3334;
  double t3340;
  double t3347;
  double t3348;
  double t3349;
  double t3346;
  double t3350;
  double t3351;
  double t3352;
  double t3353;
  double t3354;
  double t3304;
  double t3311;
  double t3313;
  double t3315;
  double t3316;
  double t3317;
  double t3318;
  double t3335;
  double t3336;
  double t3337;
  double t3338;
  double t3339;
  double t3341;
  double t3342;
  double t3343;
  double t3344;
  double t3345;
  double t3355;
  double t3356;
  double t3357;
  t3297 = Cos(var1[2]);
  t3281 = Cos(var1[5]);
  t3286 = Sin(var1[2]);
  t3300 = Sin(var1[5]);
  t3277 = Cos(var1[6]);
  t3293 = -1.*t3281*t3286;
  t3301 = -1.*t3297*t3300;
  t3302 = t3293 + t3301;
  t3305 = t3297*t3281;
  t3307 = -1.*t3286*t3300;
  t3308 = t3305 + t3307;
  t3309 = Sin(var1[6]);
  t3312 = t3277*t3302;
  t3325 = -1.*t3297*t3281;
  t3326 = t3286*t3300;
  t3327 = t3325 + t3326;
  t3319 = -1.*t3277;
  t3320 = 1. + t3319;
  t3321 = -0.4*t3320;
  t3323 = 0. + t3321;
  t3324 = t3323*t3302;
  t3328 = 0.4*t3309;
  t3329 = 0. + t3328;
  t3330 = t3327*t3329;
  t3331 = t3327*t3309;
  t3332 = t3312 + t3331;
  t3333 = -0.4*t3332;
  t3334 = t3324 + t3330 + t3333;
  t3340 = t3277*t3327;
  t3347 = t3281*t3286;
  t3348 = t3297*t3300;
  t3349 = t3347 + t3348;
  t3346 = t3323*t3327;
  t3350 = t3349*t3329;
  t3351 = t3349*t3309;
  t3352 = t3340 + t3351;
  t3353 = -0.4*t3352;
  t3354 = t3346 + t3350 + t3353;
  t3304 = 0.4*t3277*t3302;
  t3311 = -0.4*t3308*t3309;
  t3313 = -1.*t3308*t3309;
  t3315 = t3312 + t3313;
  t3316 = -0.4*t3315;
  t3317 = t3304 + t3311 + t3316;
  t3318 = var2[6]*t3317;
  t3335 = var2[2]*t3334;
  t3336 = var2[5]*t3334;
  t3337 = t3318 + t3335 + t3336;
  t3338 = 0.4*t3277*t3327;
  t3339 = -0.4*t3302*t3309;
  t3341 = -1.*t3302*t3309;
  t3342 = t3340 + t3341;
  t3343 = -0.4*t3342;
  t3344 = t3338 + t3339 + t3343;
  t3345 = var2[6]*t3344;
  t3355 = var2[2]*t3354;
  t3356 = var2[5]*t3354;
  t3357 = t3345 + t3355 + t3356;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3337;
  p_output1[7]=0;
  p_output1[8]=t3357;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3337;
  p_output1[16]=0;
  p_output1[17]=t3357;
  p_output1[18]=t3317*var2[2] + t3317*var2[5] + (t3311 - 0.4*t3277*t3349 - 0.4*(t3313 - 1.*t3277*t3349))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t3344*var2[2] + t3344*var2[5] + (-0.4*t3277*t3308 + t3339 - 0.4*(-1.*t3277*t3308 + t3341))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_RightKnee_mex.hh"

namespace SymExpression
{

void dJp_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
