/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:56 GMT-05:00
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
  double t3328;
  double t1673;
  double t1674;
  double t3329;
  double t1671;
  double t3323;
  double t3898;
  double t4434;
  double t4456;
  double t4499;
  double t4517;
  double t4534;
  double t4537;
  double t4538;
  double t4539;
  double t4563;
  double t4574;
  double t4576;
  double t4578;
  double t4579;
  double t4580;
  double t4608;
  double t4610;
  double t4612;
  double t4546;
  double t4548;
  double t4552;
  double t4627;
  double t4630;
  t3328 = Cos(var1[2]);
  t1673 = Cos(var1[5]);
  t1674 = Sin(var1[2]);
  t3329 = Sin(var1[5]);
  t1671 = Cos(var1[6]);
  t3323 = -1.*t1673*t1674;
  t3898 = -1.*t3328*t3329;
  t4434 = t3323 + t3898;
  t4456 = t1671*t4434;
  t4499 = t3328*t1673;
  t4517 = -1.*t1674*t3329;
  t4534 = t4499 + t4517;
  t4537 = Sin(var1[6]);
  t4538 = -1.*t4534*t4537;
  t4539 = t4456 + t4538;
  t4563 = -1.*t4434*t4537;
  t4574 = -1.*t3328*t1673;
  t4576 = t1674*t3329;
  t4578 = t4574 + t4576;
  t4579 = t1671*t4578;
  t4580 = t4579 + t4563;
  t4608 = t1671*t4534;
  t4610 = t4434*t4537;
  t4612 = t4608 + t4610;
  t4546 = t1673*t1674;
  t4548 = t3328*t3329;
  t4552 = t4546 + t4548;
  t4627 = t4578*t4537;
  t4630 = t4456 + t4627;
  p_output1[0]=t4539*var2[2] + t4539*var2[5] + (t4538 - 1.*t1671*t4552)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t4580*var2[2] + t4580*var2[5] + (-1.*t1671*t4534 + t4563)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4612*var2[2] + t4612*var2[5] + (-1.*t4537*t4552 + t4608)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t4630*var2[2] + t4630*var2[5] + t4539*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_RightToe_mex.hh"

namespace SymExpression
{

void dR_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
