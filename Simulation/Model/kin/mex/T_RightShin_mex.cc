/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:26 GMT-05:00
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
  double t2522;
  double t2526;
  double t2518;
  double t2528;
  double t2517;
  double t2524;
  double t2532;
  double t2533;
  double t2539;
  double t2535;
  double t2536;
  double t2538;
  double t2534;
  double t2543;
  double t2544;
  double t2545;
  double t2551;
  double t2552;
  double t2553;
  double t2556;
  double t2557;
  double t2558;
  double t2559;
  double t2561;
  double t2562;
  double t2554;
  double t2555;
  t2522 = Cos(var1[5]);
  t2526 = Sin(var1[2]);
  t2518 = Cos(var1[2]);
  t2528 = Sin(var1[5]);
  t2517 = Cos(var1[6]);
  t2524 = t2518*t2522;
  t2532 = -1.*t2526*t2528;
  t2533 = t2524 + t2532;
  t2539 = Sin(var1[6]);
  t2535 = t2522*t2526;
  t2536 = t2518*t2528;
  t2538 = t2535 + t2536;
  t2534 = t2517*t2533;
  t2543 = -1.*t2522*t2526;
  t2544 = -1.*t2518*t2528;
  t2545 = t2543 + t2544;
  t2551 = t2517*t2538;
  t2552 = t2533*t2539;
  t2553 = t2551 + t2552;
  t2556 = -1.*t2517;
  t2557 = 1. + t2556;
  t2558 = -0.4*t2557;
  t2559 = 0. + t2558;
  t2561 = 0.4*t2539;
  t2562 = 0. + t2561;
  t2554 = t2545*t2539;
  t2555 = t2534 + t2554;
  p_output1[0]=t2534 - 1.*t2538*t2539;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2533*t2539 + t2517*t2545;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t2553;
  p_output1[9]=0.;
  p_output1[10]=t2555;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t2553 + t2538*t2559 + t2533*t2562 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t2555 + t2533*t2559 + t2545*t2562 + var1[1];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightShin_mex.hh"

namespace SymExpression
{

void T_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
