/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:59 GMT-05:00
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
  double t3673;
  double t3668;
  double t3669;
  double t3677;
  double t3657;
  double t3672;
  double t3678;
  double t3679;
  double t3680;
  double t3681;
  double t3682;
  double t3683;
  double t3684;
  double t3685;
  double t3686;
  double t3697;
  double t3700;
  double t3701;
  double t3702;
  double t3703;
  double t3704;
  double t3708;
  double t3709;
  double t3710;
  double t3689;
  double t3690;
  double t3691;
  double t3718;
  double t3719;
  t3673 = Cos(var1[2]);
  t3668 = Cos(var1[5]);
  t3669 = Sin(var1[2]);
  t3677 = Sin(var1[5]);
  t3657 = Cos(var1[6]);
  t3672 = -1.*t3668*t3669;
  t3678 = -1.*t3673*t3677;
  t3679 = t3672 + t3678;
  t3680 = t3657*t3679;
  t3681 = t3673*t3668;
  t3682 = -1.*t3669*t3677;
  t3683 = t3681 + t3682;
  t3684 = Sin(var1[6]);
  t3685 = -1.*t3683*t3684;
  t3686 = t3680 + t3685;
  t3697 = -1.*t3679*t3684;
  t3700 = -1.*t3673*t3668;
  t3701 = t3669*t3677;
  t3702 = t3700 + t3701;
  t3703 = t3657*t3702;
  t3704 = t3703 + t3697;
  t3708 = t3657*t3683;
  t3709 = t3679*t3684;
  t3710 = t3708 + t3709;
  t3689 = t3668*t3669;
  t3690 = t3673*t3677;
  t3691 = t3689 + t3690;
  t3718 = t3702*t3684;
  t3719 = t3680 + t3718;
  p_output1[0]=t3686*var2[2] + t3686*var2[5] + (t3685 - 1.*t3657*t3691)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t3704*var2[2] + t3704*var2[5] + (-1.*t3657*t3683 + t3697)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3710*var2[2] + t3710*var2[5] + (-1.*t3684*t3691 + t3708)*var2[6];
  p_output1[7]=0;
  p_output1[8]=t3719*var2[2] + t3719*var2[5] + t3686*var2[6];
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

#include "dR_RightKnee_mex.hh"

namespace SymExpression
{

void dR_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
