/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:25 GMT-05:00
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
  double t407;
  double t390;
  double t392;
  double t410;
  double t361;
  double t395;
  double t427;
  double t429;
  double t449;
  double t456;
  double t460;
  double t473;
  double t362;
  double t375;
  double t380;
  double t383;
  double t478;
  double t512;
  double t564;
  double t575;
  double t587;
  t407 = Cos(var1[2]);
  t390 = Cos(var1[3]);
  t392 = Sin(var1[2]);
  t410 = Sin(var1[3]);
  t361 = Cos(var1[4]);
  t395 = t390*t392;
  t427 = t407*t410;
  t429 = t395 + t427;
  t449 = t407*t390;
  t456 = -1.*t392*t410;
  t460 = t449 + t456;
  t473 = Sin(var1[4]);
  t362 = -1.*t361;
  t375 = 1. + t362;
  t380 = -0.4*t375;
  t383 = 0. + t380;
  t478 = 0.4*t473;
  t512 = 0. + t478;
  t564 = -1.*t390*t392;
  t575 = -1.*t407*t410;
  t587 = t564 + t575;
  p_output1[0]=0. + t383*t429 - 0.8*(t361*t429 + t460*t473) + t460*t512 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t383*t460 + t512*t587 - 0.8*(t361*t460 + t473*t587) + var1[1];
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

#include "p_LeftToe_mex.hh"

namespace SymExpression
{

void p_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
