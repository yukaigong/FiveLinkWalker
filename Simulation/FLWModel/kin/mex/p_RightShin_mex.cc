/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:16 GMT-05:00
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
  double t2208;
  double t2205;
  double t2206;
  double t2209;
  double t2197;
  double t2207;
  double t2210;
  double t2211;
  double t2213;
  double t2214;
  double t2215;
  double t2216;
  double t2198;
  double t2199;
  double t2203;
  double t2204;
  double t2217;
  double t2218;
  double t2226;
  double t2227;
  double t2228;
  t2208 = Cos(var1[2]);
  t2205 = Cos(var1[5]);
  t2206 = Sin(var1[2]);
  t2209 = Sin(var1[5]);
  t2197 = Cos(var1[6]);
  t2207 = t2205*t2206;
  t2210 = t2208*t2209;
  t2211 = t2207 + t2210;
  t2213 = t2208*t2205;
  t2214 = -1.*t2206*t2209;
  t2215 = t2213 + t2214;
  t2216 = Sin(var1[6]);
  t2198 = -1.*t2197;
  t2199 = 1. + t2198;
  t2203 = -0.4*t2199;
  t2204 = 0. + t2203;
  t2217 = 0.4*t2216;
  t2218 = 0. + t2217;
  t2226 = -1.*t2205*t2206;
  t2227 = -1.*t2208*t2209;
  t2228 = t2226 + t2227;
  p_output1[0]=0. + t2204*t2211 - 0.64*(t2197*t2211 + t2215*t2216) + t2215*t2218 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2204*t2215 + t2218*t2228 - 0.64*(t2197*t2215 + t2216*t2228) + var1[1];
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
