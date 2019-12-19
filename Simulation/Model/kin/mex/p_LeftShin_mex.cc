/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:38 GMT-05:00
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
  double t4019;
  double t4016;
  double t4017;
  double t4020;
  double t4008;
  double t4018;
  double t4021;
  double t4022;
  double t4024;
  double t4025;
  double t4026;
  double t4027;
  double t4009;
  double t4010;
  double t4014;
  double t4015;
  double t4028;
  double t4029;
  double t4037;
  double t4038;
  double t4039;
  t4019 = Cos(var1[2]);
  t4016 = Cos(var1[3]);
  t4017 = Sin(var1[2]);
  t4020 = Sin(var1[3]);
  t4008 = Cos(var1[4]);
  t4018 = t4016*t4017;
  t4021 = t4019*t4020;
  t4022 = t4018 + t4021;
  t4024 = t4019*t4016;
  t4025 = -1.*t4017*t4020;
  t4026 = t4024 + t4025;
  t4027 = Sin(var1[4]);
  t4009 = -1.*t4008;
  t4010 = 1. + t4009;
  t4014 = -0.4*t4010;
  t4015 = 0. + t4014;
  t4028 = 0.4*t4027;
  t4029 = 0. + t4028;
  t4037 = -1.*t4016*t4017;
  t4038 = -1.*t4019*t4020;
  t4039 = t4037 + t4038;
  p_output1[0]=0. + t4015*t4022 - 0.64*(t4008*t4022 + t4026*t4027) + t4026*t4029 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4015*t4026 + t4029*t4039 - 0.64*(t4008*t4026 + t4027*t4039) + var1[1];
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

#include "p_LeftShin_mex.hh"

namespace SymExpression
{

void p_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
