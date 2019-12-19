/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:36 GMT-05:00
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
  double t2091;
  double t2028;
  double t2029;
  double t2129;
  double t1932;
  double t2075;
  double t2139;
  double t2153;
  double t2161;
  double t2175;
  double t2178;
  double t2179;
  double t2187;
  double t2195;
  double t2199;
  double t2273;
  double t2278;
  double t2279;
  double t2299;
  double t2300;
  double t2301;
  double t2370;
  double t2374;
  double t2378;
  double t2217;
  double t2223;
  double t2251;
  double t2413;
  double t2414;
  double t2437;
  double t2438;
  double t2439;
  double t2443;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2448;
  double t2449;
  double t2388;
  double t2389;
  double t2526;
  double t2539;
  double t2540;
  double t2541;
  t2091 = Cos(var1[2]);
  t2028 = Cos(var1[3]);
  t2029 = Sin(var1[2]);
  t2129 = Sin(var1[3]);
  t1932 = Cos(var1[4]);
  t2075 = -1.*t2028*t2029;
  t2139 = -1.*t2091*t2129;
  t2153 = t2075 + t2139;
  t2161 = t1932*t2153;
  t2175 = t2091*t2028;
  t2178 = -1.*t2029*t2129;
  t2179 = t2175 + t2178;
  t2187 = Sin(var1[4]);
  t2195 = -1.*t2179*t2187;
  t2199 = t2161 + t2195;
  t2273 = -1.*t2153*t2187;
  t2278 = -1.*t2091*t2028;
  t2279 = t2029*t2129;
  t2299 = t2278 + t2279;
  t2300 = t1932*t2299;
  t2301 = t2300 + t2273;
  t2370 = t1932*t2179;
  t2374 = t2153*t2187;
  t2378 = t2370 + t2374;
  t2217 = t2028*t2029;
  t2223 = t2091*t2129;
  t2251 = t2217 + t2223;
  t2413 = t2299*t2187;
  t2414 = t2161 + t2413;
  t2437 = -1.*t1932;
  t2438 = 1. + t2437;
  t2439 = -0.4*t2438;
  t2443 = 0. + t2439;
  t2444 = t2443*t2179;
  t2445 = 0.4*t2187;
  t2446 = 0. + t2445;
  t2447 = t2153*t2446;
  t2448 = -0.8*t2378;
  t2449 = t2444 + t2447 + t2448;
  t2388 = -1.*t2251*t2187;
  t2389 = t2370 + t2388;
  t2526 = t2443*t2153;
  t2539 = t2299*t2446;
  t2540 = -0.8*t2414;
  t2541 = t2526 + t2539 + t2540;
  p_output1[0]=t2199*var2[2] + t2199*var2[3] + (t2195 - 1.*t1932*t2251)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2301*var2[2] + t2301*var2[3] + (-1.*t1932*t2179 + t2273)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2378*var2[2] + t2378*var2[3] + t2389*var2[4];
  p_output1[9]=0;
  p_output1[10]=t2414*var2[2] + t2414*var2[3] + t2199*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2449*var2[2] + t2449*var2[3] + (0.4*t1932*t2179 - 0.4*t2187*t2251 - 0.8*t2389)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2541*var2[2] + t2541*var2[3] + (0.4*t1932*t2153 - 0.4*t2179*t2187 - 0.8*t2199)*var2[4];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftToe_mex.hh"

namespace SymExpression
{

void dT_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
