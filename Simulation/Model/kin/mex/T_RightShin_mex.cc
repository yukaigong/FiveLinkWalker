/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:27 GMT-05:00
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
  double t5097;
  double t5104;
  double t5096;
  double t5105;
  double t5094;
  double t5101;
  double t5107;
  double t5111;
  double t5117;
  double t5113;
  double t5114;
  double t5115;
  double t5112;
  double t5121;
  double t5122;
  double t5123;
  double t5129;
  double t5130;
  double t5131;
  double t5134;
  double t5135;
  double t5136;
  double t5137;
  double t5139;
  double t5140;
  double t5132;
  double t5133;
  t5097 = Cos(var1[5]);
  t5104 = Sin(var1[2]);
  t5096 = Cos(var1[2]);
  t5105 = Sin(var1[5]);
  t5094 = Cos(var1[6]);
  t5101 = t5096*t5097;
  t5107 = -1.*t5104*t5105;
  t5111 = t5101 + t5107;
  t5117 = Sin(var1[6]);
  t5113 = t5097*t5104;
  t5114 = t5096*t5105;
  t5115 = t5113 + t5114;
  t5112 = t5094*t5111;
  t5121 = -1.*t5097*t5104;
  t5122 = -1.*t5096*t5105;
  t5123 = t5121 + t5122;
  t5129 = t5094*t5115;
  t5130 = t5111*t5117;
  t5131 = t5129 + t5130;
  t5134 = -1.*t5094;
  t5135 = 1. + t5134;
  t5136 = -0.4*t5135;
  t5137 = 0. + t5136;
  t5139 = 0.4*t5117;
  t5140 = 0. + t5139;
  t5132 = t5123*t5117;
  t5133 = t5112 + t5132;
  p_output1[0]=t5112 - 1.*t5115*t5117;
  p_output1[1]=0.;
  p_output1[2]=-1.*t5111*t5117 + t5094*t5123;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t5131;
  p_output1[9]=0.;
  p_output1[10]=t5133;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t5131 + t5115*t5137 + t5111*t5140 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t5133 + t5111*t5137 + t5123*t5140 + var1[1];
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

#include "T_RightShin_mex.hh"

namespace SymExpression
{

void T_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
