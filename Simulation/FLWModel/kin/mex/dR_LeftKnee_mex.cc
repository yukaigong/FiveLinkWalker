/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:30 GMT-05:00
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
  double t2923;
  double t2918;
  double t2919;
  double t2927;
  double t2907;
  double t2922;
  double t2928;
  double t2929;
  double t2930;
  double t2931;
  double t2932;
  double t2933;
  double t2934;
  double t2935;
  double t2936;
  double t2947;
  double t2950;
  double t2951;
  double t2952;
  double t2953;
  double t2954;
  double t2958;
  double t2959;
  double t2960;
  double t2939;
  double t2940;
  double t2941;
  double t2968;
  double t2969;
  t2923 = Cos(var1[2]);
  t2918 = Cos(var1[3]);
  t2919 = Sin(var1[2]);
  t2927 = Sin(var1[3]);
  t2907 = Cos(var1[4]);
  t2922 = -1.*t2918*t2919;
  t2928 = -1.*t2923*t2927;
  t2929 = t2922 + t2928;
  t2930 = t2907*t2929;
  t2931 = t2923*t2918;
  t2932 = -1.*t2919*t2927;
  t2933 = t2931 + t2932;
  t2934 = Sin(var1[4]);
  t2935 = -1.*t2933*t2934;
  t2936 = t2930 + t2935;
  t2947 = -1.*t2929*t2934;
  t2950 = -1.*t2923*t2918;
  t2951 = t2919*t2927;
  t2952 = t2950 + t2951;
  t2953 = t2907*t2952;
  t2954 = t2953 + t2947;
  t2958 = t2907*t2933;
  t2959 = t2929*t2934;
  t2960 = t2958 + t2959;
  t2939 = t2918*t2919;
  t2940 = t2923*t2927;
  t2941 = t2939 + t2940;
  t2968 = t2952*t2934;
  t2969 = t2930 + t2968;
  p_output1[0]=t2936*var2[2] + t2936*var2[3] + (t2935 - 1.*t2907*t2941)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t2954*var2[2] + t2954*var2[3] + (-1.*t2907*t2933 + t2947)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2960*var2[2] + t2960*var2[3] + (-1.*t2934*t2941 + t2958)*var2[4];
  p_output1[7]=0;
  p_output1[8]=t2969*var2[2] + t2969*var2[3] + t2936*var2[4];
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

#include "dR_LeftKnee_mex.hh"

namespace SymExpression
{

void dR_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
