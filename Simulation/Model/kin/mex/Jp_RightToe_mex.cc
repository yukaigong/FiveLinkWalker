/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:42 GMT-05:00
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
  double t2633;
  double t2907;
  double t1990;
  double t2922;
  double t303;
  double t2797;
  double t2923;
  double t2926;
  double t2929;
  double t2930;
  double t2937;
  double t2939;
  double t307;
  double t1590;
  double t1592;
  double t1593;
  double t2940;
  double t2941;
  double t2952;
  double t2953;
  double t2954;
  double t2928;
  double t2942;
  double t2943;
  double t2945;
  double t2946;
  double t2949;
  double t2950;
  double t2951;
  double t2955;
  double t2956;
  double t2957;
  double t2958;
  double t2959;
  double t2960;
  double t2962;
  double t2963;
  double t2966;
  t2633 = Cos(var1[5]);
  t2907 = Sin(var1[2]);
  t1990 = Cos(var1[2]);
  t2922 = Sin(var1[5]);
  t303 = Cos(var1[6]);
  t2797 = t1990*t2633;
  t2923 = -1.*t2907*t2922;
  t2926 = t2797 + t2923;
  t2929 = -1.*t2633*t2907;
  t2930 = -1.*t1990*t2922;
  t2937 = t2929 + t2930;
  t2939 = Sin(var1[6]);
  t307 = -1.*t303;
  t1590 = 1. + t307;
  t1592 = -0.4*t1590;
  t1593 = 0. + t1592;
  t2940 = 0.4*t2939;
  t2941 = 0. + t2940;
  t2952 = -1.*t1990*t2633;
  t2953 = t2907*t2922;
  t2954 = t2952 + t2953;
  t2928 = t1593*t2926;
  t2942 = t2937*t2941;
  t2943 = t303*t2926;
  t2945 = t2937*t2939;
  t2946 = t2943 + t2945;
  t2949 = -0.8*t2946;
  t2950 = t2928 + t2942 + t2949;
  t2951 = t1593*t2937;
  t2955 = t2954*t2941;
  t2956 = t303*t2937;
  t2957 = t2954*t2939;
  t2958 = t2956 + t2957;
  t2959 = -0.8*t2958;
  t2960 = t2951 + t2955 + t2959;
  t2962 = t2633*t2907;
  t2963 = t1990*t2922;
  t2966 = t2962 + t2963;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2950;
  p_output1[7]=0;
  p_output1[8]=t2960;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2950;
  p_output1[16]=0;
  p_output1[17]=t2960;
  p_output1[18]=-0.4*t2939*t2966 - 0.8*(t2943 - 1.*t2939*t2966) + 0.4*t2926*t303;
  p_output1[19]=0;
  p_output1[20]=-0.4*t2926*t2939 - 0.8*(-1.*t2926*t2939 + t2956) + 0.4*t2937*t303;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_RightToe_mex.hh"

namespace SymExpression
{

void Jp_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
