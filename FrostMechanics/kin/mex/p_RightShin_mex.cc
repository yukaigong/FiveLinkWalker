/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:17 GMT-05:00
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
  double t4790;
  double t4787;
  double t4788;
  double t4791;
  double t4779;
  double t4789;
  double t4792;
  double t4793;
  double t4795;
  double t4796;
  double t4797;
  double t4798;
  double t4780;
  double t4781;
  double t4785;
  double t4786;
  double t4799;
  double t4800;
  double t4808;
  double t4809;
  double t4810;
  t4790 = Cos(var1[2]);
  t4787 = Cos(var1[5]);
  t4788 = Sin(var1[2]);
  t4791 = Sin(var1[5]);
  t4779 = Cos(var1[6]);
  t4789 = t4787*t4788;
  t4792 = t4790*t4791;
  t4793 = t4789 + t4792;
  t4795 = t4790*t4787;
  t4796 = -1.*t4788*t4791;
  t4797 = t4795 + t4796;
  t4798 = Sin(var1[6]);
  t4780 = -1.*t4779;
  t4781 = 1. + t4780;
  t4785 = -0.4*t4781;
  t4786 = 0. + t4785;
  t4799 = 0.4*t4798;
  t4800 = 0. + t4799;
  t4808 = -1.*t4787*t4788;
  t4809 = -1.*t4790*t4791;
  t4810 = t4808 + t4809;
  p_output1[0]=0. + t4786*t4793 - 0.64*(t4779*t4793 + t4797*t4798) + t4797*t4800 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4786*t4797 + t4800*t4810 - 0.64*(t4779*t4797 + t4798*t4810) + var1[1];
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

#include "p_RightShin_mex.hh"

namespace SymExpression
{

void p_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
