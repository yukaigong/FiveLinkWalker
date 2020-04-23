/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:55 GMT-05:00
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
  double t3527;
  double t3530;
  double t3524;
  double t3531;
  double t3521;
  double t3528;
  double t3532;
  double t3533;
  double t3540;
  double t3537;
  double t3538;
  double t3539;
  double t3536;
  double t3543;
  double t3544;
  double t3545;
  double t3549;
  double t3550;
  double t3551;
  double t3554;
  double t3555;
  double t3556;
  double t3557;
  double t3559;
  double t3560;
  double t3552;
  double t3553;
  t3527 = Cos(var1[5]);
  t3530 = Sin(var1[2]);
  t3524 = Cos(var1[2]);
  t3531 = Sin(var1[5]);
  t3521 = Cos(var1[6]);
  t3528 = t3524*t3527;
  t3532 = -1.*t3530*t3531;
  t3533 = t3528 + t3532;
  t3540 = Sin(var1[6]);
  t3537 = t3527*t3530;
  t3538 = t3524*t3531;
  t3539 = t3537 + t3538;
  t3536 = t3521*t3533;
  t3543 = -1.*t3527*t3530;
  t3544 = -1.*t3524*t3531;
  t3545 = t3543 + t3544;
  t3549 = t3521*t3539;
  t3550 = t3533*t3540;
  t3551 = t3549 + t3550;
  t3554 = -1.*t3521;
  t3555 = 1. + t3554;
  t3556 = -0.4*t3555;
  t3557 = 0. + t3556;
  t3559 = 0.4*t3540;
  t3560 = 0. + t3559;
  t3552 = t3545*t3540;
  t3553 = t3536 + t3552;
  p_output1[0]=t3536 - 1.*t3539*t3540;
  p_output1[1]=0.;
  p_output1[2]=-1.*t3533*t3540 + t3521*t3545;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t3551;
  p_output1[9]=0.;
  p_output1[10]=t3553;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.4*t3551 + t3539*t3557 + t3533*t3560 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.4*t3553 + t3533*t3557 + t3545*t3560 + var1[1];
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

#include "T_RightKnee_mex.hh"

namespace SymExpression
{

void T_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
