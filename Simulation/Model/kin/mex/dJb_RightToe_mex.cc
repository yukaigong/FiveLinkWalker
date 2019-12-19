/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:47 GMT-05:00
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
  double t3312;
  double t3269;
  double t3276;
  double t3315;
  double t2716;
  double t3305;
  double t3320;
  double t3362;
  double t3492;
  double t3493;
  double t3495;
  double t3497;
  double t3498;
  double t3508;
  double t3513;
  double t3364;
  double t3365;
  double t3527;
  double t3530;
  double t3532;
  double t3533;
  double t3417;
  double t3336;
  double t3630;
  double t3632;
  double t3635;
  double t3643;
  double t3646;
  double t3547;
  double t3549;
  double t3552;
  double t3423;
  double t3693;
  double t3694;
  double t3695;
  double t3696;
  double t3698;
  double t3699;
  double t3705;
  double t3706;
  double t3707;
  double t3711;
  double t3712;
  double t3717;
  double t3720;
  double t3726;
  double t3729;
  double t3730;
  double t3731;
  double t3732;
  double t3713;
  double t3793;
  double t3739;
  double t3747;
  double t3748;
  double t3752;
  double t3753;
  double t3763;
  double t3823;
  t3312 = Cos(var1[5]);
  t3269 = Cos(var1[6]);
  t3276 = Sin(var1[5]);
  t3315 = Sin(var1[6]);
  t2716 = Cos(var1[2]);
  t3305 = -1.*t3269*t3276;
  t3320 = -1.*t3312*t3315;
  t3362 = Sin(var1[2]);
  t3492 = t3305 + t3320;
  t3493 = t2716*t3492;
  t3495 = -1.*t3312*t3269;
  t3497 = t3276*t3315;
  t3498 = t3495 + t3497;
  t3508 = t3362*t3498;
  t3513 = t3493 + t3508;
  t3364 = t3312*t3269;
  t3365 = -1.*t3276*t3315;
  t3527 = t3362*t3492;
  t3530 = t3364 + t3365;
  t3532 = t2716*t3530;
  t3533 = t3527 + t3532;
  t3417 = 0. + t3364 + t3365;
  t3336 = 0. + t3305 + t3320;
  t3630 = -1.*t3362*t3492;
  t3632 = t2716*t3498;
  t3635 = t3630 + t3632;
  t3643 = -1.*t3362*t3530;
  t3646 = t3493 + t3643;
  t3547 = t3269*t3276;
  t3549 = t3312*t3315;
  t3552 = 0. + t3547 + t3549;
  t3423 = -1.*t3362*t3417;
  t3693 = -1.*t3269;
  t3694 = 1. + t3693;
  t3695 = -0.4*t3694;
  t3696 = -0.8*t3269;
  t3698 = 0. + t3695 + t3696;
  t3699 = t3312*t3698;
  t3705 = -0.4*t3315;
  t3706 = 0. + t3705;
  t3707 = -1.*t3276*t3706;
  t3711 = 0. + t3699 + t3707;
  t3712 = t3711*t3492;
  t3717 = t3698*t3276;
  t3720 = t3312*t3706;
  t3726 = 0. + t3717 + t3720;
  t3729 = t3726*t3530;
  t3730 = -1.*t3698*t3276;
  t3731 = -1.*t3312*t3706;
  t3732 = t3730 + t3731;
  t3713 = t3699 + t3707;
  t3793 = -1.*t3726*t3492;
  t3739 = 0.4*t3269*t3276;
  t3747 = 0.4*t3312*t3315;
  t3748 = t3739 + t3747;
  t3752 = -0.4*t3312*t3269;
  t3753 = 0.4*t3276*t3315;
  t3763 = t3752 + t3753;
  t3823 = -1.*t3711*t3498;
  p_output1[0]=(t2716*t3336 + t3423)*var2[2] + t3513*var2[5] + t3513*var2[6];
  p_output1[1]=0;
  p_output1[2]=(t2716*t3417 - 1.*t3362*t3552)*var2[2] + t3533*var2[5] + t3533*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t3336*t3362 - 1.*t2716*t3417)*var2[2] + t3635*var2[5] + t3635*var2[6];
  p_output1[7]=0;
  p_output1[8]=(t3423 - 1.*t2716*t3552)*var2[2] + t3646*var2[5] + t3646*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t3712 + t3552*t3713 + t3729 + t3417*t3732)*var2[5] + (t3712 + t3729 + t3417*t3748 + t3552*t3763)*var2[6];
  p_output1[13]=0;
  p_output1[14]=(-1.*t3417*t3713 - 1.*t3336*t3732 + t3793 + t3823)*var2[5] + (-1.*t3336*t3748 - 1.*t3417*t3763 + t3793 + t3823)*var2[6];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=(0. - 1.*t3315*t3698 + t3269*t3706)*var2[6];
  p_output1[31]=0;
  p_output1[32]=(0.4*Power(t3269,2) + 0.4*Power(t3315,2) + t3269*t3698 + t3315*t3706)*var2[6];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_RightToe_mex.hh"

namespace SymExpression
{

void dJb_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
