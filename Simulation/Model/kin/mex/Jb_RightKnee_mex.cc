/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:50 GMT-05:00
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
  double t3347;
  double t3338;
  double t3344;
  double t3348;
  double t3355;
  double t3337;
  double t3356;
  double t3359;
  double t3360;
  double t3345;
  double t3350;
  double t3351;
  double t3363;
  double t3364;
  double t3365;
  double t3361;
  double t3376;
  double t3377;
  double t3378;
  double t3379;
  double t3380;
  double t3385;
  double t3386;
  double t3381;
  double t3382;
  t3347 = Cos(var1[5]);
  t3338 = Cos(var1[6]);
  t3344 = Sin(var1[5]);
  t3348 = Sin(var1[6]);
  t3355 = Cos(var1[2]);
  t3337 = Sin(var1[2]);
  t3356 = t3347*t3338;
  t3359 = -1.*t3344*t3348;
  t3360 = 0. + t3356 + t3359;
  t3345 = -1.*t3338*t3344;
  t3350 = -1.*t3347*t3348;
  t3351 = 0. + t3345 + t3350;
  t3363 = t3338*t3344;
  t3364 = t3347*t3348;
  t3365 = 0. + t3363 + t3364;
  t3361 = t3355*t3360;
  t3376 = -1.*t3338;
  t3377 = 1. + t3376;
  t3378 = -0.4*t3377;
  t3379 = -0.4*t3338;
  t3380 = 0. + t3378 + t3379;
  t3385 = t3347*t3380;
  t3386 = 0. + t3385;
  t3381 = t3380*t3344;
  t3382 = 0. + t3381;
  p_output1[0]=0. + t3337*t3351 + t3361;
  p_output1[1]=0.;
  p_output1[2]=0. + t3337*t3360 + t3355*t3365;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t3351*t3355 - 1.*t3337*t3360;
  p_output1[7]=0.;
  p_output1[8]=0. + t3361 - 1.*t3337*t3365;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t3365*t3382 + t3360*t3386;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t3360*t3382 - 1.*t3351*t3386;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0. + t3338*t3380;
  p_output1[31]=0.;
  p_output1[32]=0. + t3348*t3380;
  p_output1[33]=0.;
  p_output1[34]=1.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=1.;
  p_output1[41]=0.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_RightKnee_mex.hh"

namespace SymExpression
{

void Jb_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
