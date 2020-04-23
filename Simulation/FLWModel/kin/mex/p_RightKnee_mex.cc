/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:46 GMT-05:00
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
  double t3230;
  double t3227;
  double t3228;
  double t3231;
  double t3219;
  double t3229;
  double t3232;
  double t3233;
  double t3235;
  double t3236;
  double t3237;
  double t3238;
  double t3220;
  double t3221;
  double t3225;
  double t3226;
  double t3239;
  double t3240;
  double t3248;
  double t3249;
  double t3250;
  t3230 = Cos(var1[2]);
  t3227 = Cos(var1[5]);
  t3228 = Sin(var1[2]);
  t3231 = Sin(var1[5]);
  t3219 = Cos(var1[6]);
  t3229 = t3227*t3228;
  t3232 = t3230*t3231;
  t3233 = t3229 + t3232;
  t3235 = t3230*t3227;
  t3236 = -1.*t3228*t3231;
  t3237 = t3235 + t3236;
  t3238 = Sin(var1[6]);
  t3220 = -1.*t3219;
  t3221 = 1. + t3220;
  t3225 = -0.4*t3221;
  t3226 = 0. + t3225;
  t3239 = 0.4*t3238;
  t3240 = 0. + t3239;
  t3248 = -1.*t3227*t3228;
  t3249 = -1.*t3230*t3231;
  t3250 = t3248 + t3249;
  p_output1[0]=0. + t3226*t3233 - 0.4*(t3219*t3233 + t3237*t3238) + t3237*t3240 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3226*t3237 + t3240*t3250 - 0.4*(t3219*t3237 + t3238*t3250) + var1[1];
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

#include "p_RightKnee_mex.hh"

namespace SymExpression
{

void p_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
