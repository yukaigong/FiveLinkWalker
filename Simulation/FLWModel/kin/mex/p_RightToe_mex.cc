/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:40 GMT-05:00
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
  double t2721;
  double t2047;
  double t2270;
  double t2744;
  double t590;
  double t2633;
  double t2747;
  double t2749;
  double t2797;
  double t2801;
  double t2856;
  double t2865;
  double t1020;
  double t1027;
  double t1042;
  double t1990;
  double t2907;
  double t2922;
  double t2934;
  double t2935;
  double t2936;
  t2721 = Cos(var1[2]);
  t2047 = Cos(var1[5]);
  t2270 = Sin(var1[2]);
  t2744 = Sin(var1[5]);
  t590 = Cos(var1[6]);
  t2633 = t2047*t2270;
  t2747 = t2721*t2744;
  t2749 = t2633 + t2747;
  t2797 = t2721*t2047;
  t2801 = -1.*t2270*t2744;
  t2856 = t2797 + t2801;
  t2865 = Sin(var1[6]);
  t1020 = -1.*t590;
  t1027 = 1. + t1020;
  t1042 = -0.4*t1027;
  t1990 = 0. + t1042;
  t2907 = 0.4*t2865;
  t2922 = 0. + t2907;
  t2934 = -1.*t2047*t2270;
  t2935 = -1.*t2721*t2744;
  t2936 = t2934 + t2935;
  p_output1[0]=0. + t1990*t2749 + t2856*t2922 - 0.8*(t2856*t2865 + t2749*t590) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1990*t2856 + t2922*t2936 - 0.8*(t2865*t2936 + t2856*t590) + var1[1];
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

#include "p_RightToe_mex.hh"

namespace SymExpression
{

void p_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
