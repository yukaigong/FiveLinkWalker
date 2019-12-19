/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:26 GMT-05:00
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
  double t2777;
  double t2780;
  double t2774;
  double t2781;
  double t2771;
  double t2778;
  double t2782;
  double t2783;
  double t2790;
  double t2787;
  double t2788;
  double t2789;
  double t2786;
  double t2793;
  double t2794;
  double t2795;
  double t2799;
  double t2800;
  double t2801;
  double t2804;
  double t2805;
  double t2806;
  double t2807;
  double t2809;
  double t2810;
  double t2802;
  double t2803;
  t2777 = Cos(var1[3]);
  t2780 = Sin(var1[2]);
  t2774 = Cos(var1[2]);
  t2781 = Sin(var1[3]);
  t2771 = Cos(var1[4]);
  t2778 = t2774*t2777;
  t2782 = -1.*t2780*t2781;
  t2783 = t2778 + t2782;
  t2790 = Sin(var1[4]);
  t2787 = t2777*t2780;
  t2788 = t2774*t2781;
  t2789 = t2787 + t2788;
  t2786 = t2771*t2783;
  t2793 = -1.*t2777*t2780;
  t2794 = -1.*t2774*t2781;
  t2795 = t2793 + t2794;
  t2799 = t2771*t2789;
  t2800 = t2783*t2790;
  t2801 = t2799 + t2800;
  t2804 = -1.*t2771;
  t2805 = 1. + t2804;
  t2806 = -0.4*t2805;
  t2807 = 0. + t2806;
  t2809 = 0.4*t2790;
  t2810 = 0. + t2809;
  t2802 = t2795*t2790;
  t2803 = t2786 + t2802;
  p_output1[0]=t2786 - 1.*t2789*t2790;
  p_output1[1]=0.;
  p_output1[2]=-1.*t2783*t2790 + t2771*t2795;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t2801;
  p_output1[9]=0.;
  p_output1[10]=t2803;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.4*t2801 + t2789*t2807 + t2783*t2810 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.4*t2803 + t2783*t2807 + t2795*t2810 + var1[1];
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

#include "T_LeftKnee_mex.hh"

namespace SymExpression
{

void T_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
