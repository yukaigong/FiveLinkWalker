/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:39 GMT-05:00
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
  double t4042;
  double t4045;
  double t4041;
  double t4046;
  double t4029;
  double t4044;
  double t4049;
  double t4050;
  double t4052;
  double t4053;
  double t4054;
  double t4055;
  double t4030;
  double t4034;
  double t4039;
  double t4040;
  double t4056;
  double t4059;
  double t4067;
  double t4068;
  double t4069;
  double t4051;
  double t4060;
  double t4061;
  double t4062;
  double t4063;
  double t4064;
  double t4065;
  double t4066;
  double t4070;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4075;
  double t4077;
  double t4078;
  double t4079;
  t4042 = Cos(var1[3]);
  t4045 = Sin(var1[2]);
  t4041 = Cos(var1[2]);
  t4046 = Sin(var1[3]);
  t4029 = Cos(var1[4]);
  t4044 = t4041*t4042;
  t4049 = -1.*t4045*t4046;
  t4050 = t4044 + t4049;
  t4052 = -1.*t4042*t4045;
  t4053 = -1.*t4041*t4046;
  t4054 = t4052 + t4053;
  t4055 = Sin(var1[4]);
  t4030 = -1.*t4029;
  t4034 = 1. + t4030;
  t4039 = -0.4*t4034;
  t4040 = 0. + t4039;
  t4056 = 0.4*t4055;
  t4059 = 0. + t4056;
  t4067 = -1.*t4041*t4042;
  t4068 = t4045*t4046;
  t4069 = t4067 + t4068;
  t4051 = t4040*t4050;
  t4060 = t4054*t4059;
  t4061 = t4029*t4050;
  t4062 = t4054*t4055;
  t4063 = t4061 + t4062;
  t4064 = -0.64*t4063;
  t4065 = t4051 + t4060 + t4064;
  t4066 = t4040*t4054;
  t4070 = t4069*t4059;
  t4071 = t4029*t4054;
  t4072 = t4069*t4055;
  t4073 = t4071 + t4072;
  t4074 = -0.64*t4073;
  t4075 = t4066 + t4070 + t4074;
  t4077 = t4042*t4045;
  t4078 = t4041*t4046;
  t4079 = t4077 + t4078;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t4065;
  p_output1[7]=0;
  p_output1[8]=t4075;
  p_output1[9]=t4065;
  p_output1[10]=0;
  p_output1[11]=t4075;
  p_output1[12]=0.4*t4029*t4050 - 0.4*t4055*t4079 - 0.64*(t4061 - 1.*t4055*t4079);
  p_output1[13]=0;
  p_output1[14]=0.4*t4029*t4054 - 0.4*t4050*t4055 - 0.64*(-1.*t4050*t4055 + t4071);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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

#include "Jp_LeftShin_mex.hh"

namespace SymExpression
{

void Jp_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
