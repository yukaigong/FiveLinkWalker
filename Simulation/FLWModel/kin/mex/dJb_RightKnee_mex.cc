/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:51 GMT-05:00
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
  double t3391;
  double t3385;
  double t3387;
  double t3394;
  double t3384;
  double t3390;
  double t3395;
  double t3400;
  double t3410;
  double t3411;
  double t3412;
  double t3414;
  double t3415;
  double t3417;
  double t3418;
  double t3402;
  double t3403;
  double t3422;
  double t3423;
  double t3424;
  double t3425;
  double t3404;
  double t3397;
  double t3440;
  double t3441;
  double t3442;
  double t3446;
  double t3447;
  double t3428;
  double t3429;
  double t3430;
  double t3405;
  double t3454;
  double t3455;
  double t3456;
  double t3457;
  double t3458;
  double t3459;
  double t3460;
  double t3461;
  double t3462;
  double t3463;
  double t3464;
  double t3472;
  double t3473;
  t3391 = Cos(var1[5]);
  t3385 = Cos(var1[6]);
  t3387 = Sin(var1[5]);
  t3394 = Sin(var1[6]);
  t3384 = Cos(var1[2]);
  t3390 = -1.*t3385*t3387;
  t3395 = -1.*t3391*t3394;
  t3400 = Sin(var1[2]);
  t3410 = t3390 + t3395;
  t3411 = t3384*t3410;
  t3412 = -1.*t3391*t3385;
  t3414 = t3387*t3394;
  t3415 = t3412 + t3414;
  t3417 = t3400*t3415;
  t3418 = t3411 + t3417;
  t3402 = t3391*t3385;
  t3403 = -1.*t3387*t3394;
  t3422 = t3400*t3410;
  t3423 = t3402 + t3403;
  t3424 = t3384*t3423;
  t3425 = t3422 + t3424;
  t3404 = 0. + t3402 + t3403;
  t3397 = 0. + t3390 + t3395;
  t3440 = -1.*t3400*t3410;
  t3441 = t3384*t3415;
  t3442 = t3440 + t3441;
  t3446 = -1.*t3400*t3423;
  t3447 = t3411 + t3446;
  t3428 = t3385*t3387;
  t3429 = t3391*t3394;
  t3430 = 0. + t3428 + t3429;
  t3405 = -1.*t3400*t3404;
  t3454 = -1.*t3385;
  t3455 = 1. + t3454;
  t3456 = -0.4*t3455;
  t3457 = -0.4*t3385;
  t3458 = 0. + t3456 + t3457;
  t3459 = t3391*t3458;
  t3460 = 0. + t3459;
  t3461 = t3460*t3410;
  t3462 = t3458*t3387;
  t3463 = 0. + t3462;
  t3464 = t3463*t3423;
  t3472 = -1.*t3463*t3410;
  t3473 = -1.*t3460*t3415;
  p_output1[0]=(t3384*t3397 + t3405)*var2[2] + t3418*var2[5] + t3418*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t3384*t3404 - 1.*t3400*t3430)*var2[2] + t3425*var2[5] + t3425*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t3397*t3400 - 1.*t3384*t3404)*var2[2] + t3442*var2[5] + t3442*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t3405 - 1.*t3384*t3430)*var2[2] + t3447*var2[5] + t3447*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-1.*t3387*t3404*t3458 + t3391*t3430*t3458 + t3461 + t3464)*var2[5] + (0. + t3461 + t3464)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(t3387*t3397*t3458 - 1.*t3391*t3404*t3458 + t3472 + t3473)*var2[5] + (0. + t3472 + t3473)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  p_output1[30]=(0. - 1.*t3394*t3458)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0. + t3385*t3458)*var2[6];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_RightKnee_mex.hh"

namespace SymExpression
{

void dJb_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
