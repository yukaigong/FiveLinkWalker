/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:52 GMT-05:00
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
  double t4485;
  double t4480;
  double t4481;
  double t4489;
  double t4469;
  double t4484;
  double t4490;
  double t4491;
  double t4492;
  double t4493;
  double t4494;
  double t4495;
  double t4496;
  double t4497;
  double t4498;
  double t4509;
  double t4512;
  double t4513;
  double t4514;
  double t4515;
  double t4516;
  double t4520;
  double t4521;
  double t4522;
  double t4501;
  double t4502;
  double t4503;
  double t4530;
  double t4531;
  t4485 = Cos(var1[2]);
  t4480 = Cos(var1[3]);
  t4481 = Sin(var1[2]);
  t4489 = Sin(var1[3]);
  t4469 = Cos(var1[4]);
  t4484 = -1.*t4480*t4481;
  t4490 = -1.*t4485*t4489;
  t4491 = t4484 + t4490;
  t4492 = t4469*t4491;
  t4493 = t4485*t4480;
  t4494 = -1.*t4481*t4489;
  t4495 = t4493 + t4494;
  t4496 = Sin(var1[4]);
  t4497 = -1.*t4495*t4496;
  t4498 = t4492 + t4497;
  t4509 = -1.*t4491*t4496;
  t4512 = -1.*t4485*t4480;
  t4513 = t4481*t4489;
  t4514 = t4512 + t4513;
  t4515 = t4469*t4514;
  t4516 = t4515 + t4509;
  t4520 = t4469*t4495;
  t4521 = t4491*t4496;
  t4522 = t4520 + t4521;
  t4501 = t4480*t4481;
  t4502 = t4485*t4489;
  t4503 = t4501 + t4502;
  t4530 = t4514*t4496;
  t4531 = t4492 + t4530;
  p_output1[0]=t4498*var2[2] + t4498*var2[3] + (t4497 - 1.*t4469*t4503)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t4516*var2[2] + t4516*var2[3] + (-1.*t4469*t4495 + t4509)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4522*var2[2] + t4522*var2[3] + (-1.*t4496*t4503 + t4520)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t4531*var2[2] + t4531*var2[3] + t4498*var2[4];
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

#include "dR_LeftShin_mex.hh"

namespace SymExpression
{

void dR_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
