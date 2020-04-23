/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:47 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3253;
  double t3256;
  double t3252;
  double t3257;
  double t3240;
  double t3255;
  double t3260;
  double t3261;
  double t3263;
  double t3264;
  double t3265;
  double t3266;
  double t3241;
  double t3245;
  double t3250;
  double t3251;
  double t3267;
  double t3270;
  double t3278;
  double t3279;
  double t3280;
  double t3262;
  double t3271;
  double t3272;
  double t3273;
  double t3274;
  double t3275;
  double t3276;
  double t3277;
  double t3281;
  double t3282;
  double t3283;
  double t3284;
  double t3285;
  double t3286;
  double t3288;
  double t3289;
  double t3290;
  t3253 = Cos(var1[5]);
  t3256 = Sin(var1[2]);
  t3252 = Cos(var1[2]);
  t3257 = Sin(var1[5]);
  t3240 = Cos(var1[6]);
  t3255 = t3252*t3253;
  t3260 = -1.*t3256*t3257;
  t3261 = t3255 + t3260;
  t3263 = -1.*t3253*t3256;
  t3264 = -1.*t3252*t3257;
  t3265 = t3263 + t3264;
  t3266 = Sin(var1[6]);
  t3241 = -1.*t3240;
  t3245 = 1. + t3241;
  t3250 = -0.4*t3245;
  t3251 = 0. + t3250;
  t3267 = 0.4*t3266;
  t3270 = 0. + t3267;
  t3278 = -1.*t3252*t3253;
  t3279 = t3256*t3257;
  t3280 = t3278 + t3279;
  t3262 = t3251*t3261;
  t3271 = t3265*t3270;
  t3272 = t3240*t3261;
  t3273 = t3265*t3266;
  t3274 = t3272 + t3273;
  t3275 = -0.4*t3274;
  t3276 = t3262 + t3271 + t3275;
  t3277 = t3251*t3265;
  t3281 = t3280*t3270;
  t3282 = t3240*t3265;
  t3283 = t3280*t3266;
  t3284 = t3282 + t3283;
  t3285 = -0.4*t3284;
  t3286 = t3277 + t3281 + t3285;
  t3288 = t3253*t3256;
  t3289 = t3252*t3257;
  t3290 = t3288 + t3289;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t3276;
  p_output1[7]=0;
  p_output1[8]=t3286;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t3276;
  p_output1[16]=0;
  p_output1[17]=t3286;
  p_output1[18]=0.4*t3240*t3261 - 0.4*t3266*t3290 - 0.4*(t3272 - 1.*t3266*t3290);
  p_output1[19]=0;
  p_output1[20]=0.4*t3240*t3265 - 0.4*t3261*t3266 - 0.4*(-1.*t3261*t3266 + t3282);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_RightKnee_mex.hh"

namespace SymExpression
{

void Jp_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
