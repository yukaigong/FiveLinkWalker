/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:17 GMT-05:00
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
  double t2480;
  double t2477;
  double t2478;
  double t2481;
  double t2469;
  double t2479;
  double t2482;
  double t2483;
  double t2485;
  double t2486;
  double t2487;
  double t2488;
  double t2470;
  double t2471;
  double t2475;
  double t2476;
  double t2489;
  double t2490;
  double t2498;
  double t2499;
  double t2500;
  t2480 = Cos(var1[2]);
  t2477 = Cos(var1[3]);
  t2478 = Sin(var1[2]);
  t2481 = Sin(var1[3]);
  t2469 = Cos(var1[4]);
  t2479 = t2477*t2478;
  t2482 = t2480*t2481;
  t2483 = t2479 + t2482;
  t2485 = t2480*t2477;
  t2486 = -1.*t2478*t2481;
  t2487 = t2485 + t2486;
  t2488 = Sin(var1[4]);
  t2470 = -1.*t2469;
  t2471 = 1. + t2470;
  t2475 = -0.4*t2471;
  t2476 = 0. + t2475;
  t2489 = 0.4*t2488;
  t2490 = 0. + t2489;
  t2498 = -1.*t2477*t2478;
  t2499 = -1.*t2480*t2481;
  t2500 = t2498 + t2499;
  p_output1[0]=0. + t2476*t2483 - 0.4*(t2469*t2483 + t2487*t2488) + t2487*t2490 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2476*t2487 + t2490*t2500 - 0.4*(t2469*t2487 + t2488*t2500) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftKnee_mex.hh"

namespace SymExpression
{

void p_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
