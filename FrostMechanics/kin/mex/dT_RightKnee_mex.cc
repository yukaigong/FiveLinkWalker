/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:57 GMT-05:00
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
  double t3572;
  double t3565;
  double t3566;
  double t3576;
  double t3556;
  double t3571;
  double t3577;
  double t3578;
  double t3579;
  double t3580;
  double t3581;
  double t3582;
  double t3583;
  double t3586;
  double t3587;
  double t3598;
  double t3601;
  double t3602;
  double t3603;
  double t3604;
  double t3605;
  double t3609;
  double t3610;
  double t3611;
  double t3590;
  double t3591;
  double t3592;
  double t3619;
  double t3620;
  double t3624;
  double t3625;
  double t3626;
  double t3627;
  double t3628;
  double t3629;
  double t3630;
  double t3631;
  double t3632;
  double t3633;
  double t3614;
  double t3615;
  double t3647;
  double t3648;
  double t3649;
  double t3650;
  t3572 = Cos(var1[2]);
  t3565 = Cos(var1[5]);
  t3566 = Sin(var1[2]);
  t3576 = Sin(var1[5]);
  t3556 = Cos(var1[6]);
  t3571 = -1.*t3565*t3566;
  t3577 = -1.*t3572*t3576;
  t3578 = t3571 + t3577;
  t3579 = t3556*t3578;
  t3580 = t3572*t3565;
  t3581 = -1.*t3566*t3576;
  t3582 = t3580 + t3581;
  t3583 = Sin(var1[6]);
  t3586 = -1.*t3582*t3583;
  t3587 = t3579 + t3586;
  t3598 = -1.*t3578*t3583;
  t3601 = -1.*t3572*t3565;
  t3602 = t3566*t3576;
  t3603 = t3601 + t3602;
  t3604 = t3556*t3603;
  t3605 = t3604 + t3598;
  t3609 = t3556*t3582;
  t3610 = t3578*t3583;
  t3611 = t3609 + t3610;
  t3590 = t3565*t3566;
  t3591 = t3572*t3576;
  t3592 = t3590 + t3591;
  t3619 = t3603*t3583;
  t3620 = t3579 + t3619;
  t3624 = -1.*t3556;
  t3625 = 1. + t3624;
  t3626 = -0.4*t3625;
  t3627 = 0. + t3626;
  t3628 = t3627*t3582;
  t3629 = 0.4*t3583;
  t3630 = 0. + t3629;
  t3631 = t3578*t3630;
  t3632 = -0.4*t3611;
  t3633 = t3628 + t3631 + t3632;
  t3614 = -1.*t3592*t3583;
  t3615 = t3609 + t3614;
  t3647 = t3627*t3578;
  t3648 = t3603*t3630;
  t3649 = -0.4*t3620;
  t3650 = t3647 + t3648 + t3649;
  p_output1[0]=t3587*var2[2] + t3587*var2[5] + (t3586 - 1.*t3556*t3592)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t3605*var2[2] + t3605*var2[5] + (-1.*t3556*t3582 + t3598)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t3611*var2[2] + t3611*var2[5] + t3615*var2[6];
  p_output1[9]=0;
  p_output1[10]=t3620*var2[2] + t3620*var2[5] + t3587*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t3633*var2[2] + t3633*var2[5] + (0.4*t3556*t3582 - 0.4*t3583*t3592 - 0.4*t3615)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t3650*var2[2] + t3650*var2[5] + (0.4*t3556*t3578 - 0.4*t3582*t3583 - 0.4*t3587)*var2[6];
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

#include "dT_RightKnee_mex.hh"

namespace SymExpression
{

void dT_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
