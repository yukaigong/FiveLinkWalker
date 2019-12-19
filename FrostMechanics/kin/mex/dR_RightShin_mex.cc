/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:32 GMT-05:00
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
  double t5251;
  double t5246;
  double t5247;
  double t5255;
  double t5235;
  double t5250;
  double t5256;
  double t5257;
  double t5258;
  double t5259;
  double t5260;
  double t5261;
  double t5262;
  double t5263;
  double t5264;
  double t5275;
  double t5278;
  double t5279;
  double t5280;
  double t5281;
  double t5282;
  double t5286;
  double t5287;
  double t5288;
  double t5267;
  double t5268;
  double t5269;
  double t5296;
  double t5297;
  t5251 = Cos(var1[2]);
  t5246 = Cos(var1[5]);
  t5247 = Sin(var1[2]);
  t5255 = Sin(var1[5]);
  t5235 = Cos(var1[6]);
  t5250 = -1.*t5246*t5247;
  t5256 = -1.*t5251*t5255;
  t5257 = t5250 + t5256;
  t5258 = t5235*t5257;
  t5259 = t5251*t5246;
  t5260 = -1.*t5247*t5255;
  t5261 = t5259 + t5260;
  t5262 = Sin(var1[6]);
  t5263 = -1.*t5261*t5262;
  t5264 = t5258 + t5263;
  t5275 = -1.*t5257*t5262;
  t5278 = -1.*t5251*t5246;
  t5279 = t5247*t5255;
  t5280 = t5278 + t5279;
  t5281 = t5235*t5280;
  t5282 = t5281 + t5275;
  t5286 = t5235*t5261;
  t5287 = t5257*t5262;
  t5288 = t5286 + t5287;
  t5267 = t5246*t5247;
  t5268 = t5251*t5255;
  t5269 = t5267 + t5268;
  t5296 = t5280*t5262;
  t5297 = t5258 + t5296;
  p_output1[0]=t5264*var2[2] + t5264*var2[5] + (t5263 - 1.*t5235*t5269)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t5282*var2[2] + t5282*var2[5] + (-1.*t5235*t5261 + t5275)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5288*var2[2] + t5288*var2[5] + (-1.*t5262*t5269 + t5286)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t5297*var2[2] + t5297*var2[5] + t5264*var2[6];
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

#include "dR_RightShin_mex.hh"

namespace SymExpression
{

void dR_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
