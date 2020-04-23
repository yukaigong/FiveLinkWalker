/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:27 GMT-05:00
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
  double t2822;
  double t2815;
  double t2816;
  double t2826;
  double t2806;
  double t2821;
  double t2827;
  double t2828;
  double t2829;
  double t2830;
  double t2831;
  double t2832;
  double t2833;
  double t2836;
  double t2837;
  double t2848;
  double t2851;
  double t2852;
  double t2853;
  double t2854;
  double t2855;
  double t2859;
  double t2860;
  double t2861;
  double t2840;
  double t2841;
  double t2842;
  double t2869;
  double t2870;
  double t2874;
  double t2875;
  double t2876;
  double t2877;
  double t2878;
  double t2879;
  double t2880;
  double t2881;
  double t2882;
  double t2883;
  double t2864;
  double t2865;
  double t2897;
  double t2898;
  double t2899;
  double t2900;
  t2822 = Cos(var1[2]);
  t2815 = Cos(var1[3]);
  t2816 = Sin(var1[2]);
  t2826 = Sin(var1[3]);
  t2806 = Cos(var1[4]);
  t2821 = -1.*t2815*t2816;
  t2827 = -1.*t2822*t2826;
  t2828 = t2821 + t2827;
  t2829 = t2806*t2828;
  t2830 = t2822*t2815;
  t2831 = -1.*t2816*t2826;
  t2832 = t2830 + t2831;
  t2833 = Sin(var1[4]);
  t2836 = -1.*t2832*t2833;
  t2837 = t2829 + t2836;
  t2848 = -1.*t2828*t2833;
  t2851 = -1.*t2822*t2815;
  t2852 = t2816*t2826;
  t2853 = t2851 + t2852;
  t2854 = t2806*t2853;
  t2855 = t2854 + t2848;
  t2859 = t2806*t2832;
  t2860 = t2828*t2833;
  t2861 = t2859 + t2860;
  t2840 = t2815*t2816;
  t2841 = t2822*t2826;
  t2842 = t2840 + t2841;
  t2869 = t2853*t2833;
  t2870 = t2829 + t2869;
  t2874 = -1.*t2806;
  t2875 = 1. + t2874;
  t2876 = -0.4*t2875;
  t2877 = 0. + t2876;
  t2878 = t2877*t2832;
  t2879 = 0.4*t2833;
  t2880 = 0. + t2879;
  t2881 = t2828*t2880;
  t2882 = -0.4*t2861;
  t2883 = t2878 + t2881 + t2882;
  t2864 = -1.*t2842*t2833;
  t2865 = t2859 + t2864;
  t2897 = t2877*t2828;
  t2898 = t2853*t2880;
  t2899 = -0.4*t2870;
  t2900 = t2897 + t2898 + t2899;
  p_output1[0]=t2837*var2[2] + t2837*var2[3] + (t2836 - 1.*t2806*t2842)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2855*var2[2] + t2855*var2[3] + (-1.*t2806*t2832 + t2848)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t2861*var2[2] + t2861*var2[3] + t2865*var2[4];
  p_output1[9]=0;
  p_output1[10]=t2870*var2[2] + t2870*var2[3] + t2837*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t2883*var2[2] + t2883*var2[3] + (0.4*t2806*t2832 - 0.4*t2833*t2842 - 0.4*t2865)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t2900*var2[2] + t2900*var2[3] + (0.4*t2806*t2828 - 0.4*t2832*t2833 - 0.4*t2837)*var2[4];
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

#include "dT_LeftKnee_mex.hh"

namespace SymExpression
{

void dT_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
