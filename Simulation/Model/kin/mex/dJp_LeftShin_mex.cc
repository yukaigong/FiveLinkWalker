/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:41 GMT-05:00
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
  double t4086;
  double t4070;
  double t4075;
  double t4089;
  double t4066;
  double t4082;
  double t4090;
  double t4091;
  double t4094;
  double t4096;
  double t4097;
  double t4098;
  double t4101;
  double t4114;
  double t4115;
  double t4116;
  double t4108;
  double t4109;
  double t4110;
  double t4112;
  double t4113;
  double t4117;
  double t4118;
  double t4119;
  double t4120;
  double t4121;
  double t4122;
  double t4123;
  double t4129;
  double t4136;
  double t4137;
  double t4138;
  double t4135;
  double t4139;
  double t4140;
  double t4141;
  double t4142;
  double t4143;
  double t4093;
  double t4100;
  double t4102;
  double t4104;
  double t4105;
  double t4106;
  double t4107;
  double t4124;
  double t4125;
  double t4126;
  double t4127;
  double t4128;
  double t4130;
  double t4131;
  double t4132;
  double t4133;
  double t4134;
  double t4144;
  double t4145;
  double t4146;
  t4086 = Cos(var1[2]);
  t4070 = Cos(var1[3]);
  t4075 = Sin(var1[2]);
  t4089 = Sin(var1[3]);
  t4066 = Cos(var1[4]);
  t4082 = -1.*t4070*t4075;
  t4090 = -1.*t4086*t4089;
  t4091 = t4082 + t4090;
  t4094 = t4086*t4070;
  t4096 = -1.*t4075*t4089;
  t4097 = t4094 + t4096;
  t4098 = Sin(var1[4]);
  t4101 = t4066*t4091;
  t4114 = -1.*t4086*t4070;
  t4115 = t4075*t4089;
  t4116 = t4114 + t4115;
  t4108 = -1.*t4066;
  t4109 = 1. + t4108;
  t4110 = -0.4*t4109;
  t4112 = 0. + t4110;
  t4113 = t4112*t4091;
  t4117 = 0.4*t4098;
  t4118 = 0. + t4117;
  t4119 = t4116*t4118;
  t4120 = t4116*t4098;
  t4121 = t4101 + t4120;
  t4122 = -0.64*t4121;
  t4123 = t4113 + t4119 + t4122;
  t4129 = t4066*t4116;
  t4136 = t4070*t4075;
  t4137 = t4086*t4089;
  t4138 = t4136 + t4137;
  t4135 = t4112*t4116;
  t4139 = t4138*t4118;
  t4140 = t4138*t4098;
  t4141 = t4129 + t4140;
  t4142 = -0.64*t4141;
  t4143 = t4135 + t4139 + t4142;
  t4093 = 0.4*t4066*t4091;
  t4100 = -0.4*t4097*t4098;
  t4102 = -1.*t4097*t4098;
  t4104 = t4101 + t4102;
  t4105 = -0.64*t4104;
  t4106 = t4093 + t4100 + t4105;
  t4107 = var2[4]*t4106;
  t4124 = var2[2]*t4123;
  t4125 = var2[3]*t4123;
  t4126 = t4107 + t4124 + t4125;
  t4127 = 0.4*t4066*t4116;
  t4128 = -0.4*t4091*t4098;
  t4130 = -1.*t4091*t4098;
  t4131 = t4129 + t4130;
  t4132 = -0.64*t4131;
  t4133 = t4127 + t4128 + t4132;
  t4134 = var2[4]*t4133;
  t4144 = var2[2]*t4143;
  t4145 = var2[3]*t4143;
  t4146 = t4134 + t4144 + t4145;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4126;
  p_output1[7]=0;
  p_output1[8]=t4146;
  p_output1[9]=t4126;
  p_output1[10]=0;
  p_output1[11]=t4146;
  p_output1[12]=t4106*var2[2] + t4106*var2[3] + (t4100 - 0.4*t4066*t4138 - 0.64*(t4102 - 1.*t4066*t4138))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t4133*var2[2] + t4133*var2[3] + (-0.4*t4066*t4097 + t4128 - 0.64*(-1.*t4066*t4097 + t4130))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_LeftShin_mex.hh"

namespace SymExpression
{

void dJp_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
