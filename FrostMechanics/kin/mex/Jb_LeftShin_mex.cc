/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:42 GMT-05:00
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
  double t4136;
  double t4127;
  double t4133;
  double t4137;
  double t4144;
  double t4126;
  double t4145;
  double t4148;
  double t4149;
  double t4134;
  double t4139;
  double t4140;
  double t4152;
  double t4153;
  double t4154;
  double t4150;
  double t4165;
  double t4166;
  double t4167;
  double t4168;
  double t4169;
  double t4171;
  double t4173;
  double t4177;
  double t4178;
  double t4179;
  double t4170;
  double t4174;
  double t4175;
  t4136 = Cos(var1[3]);
  t4127 = Cos(var1[4]);
  t4133 = Sin(var1[3]);
  t4137 = Sin(var1[4]);
  t4144 = Cos(var1[2]);
  t4126 = Sin(var1[2]);
  t4145 = t4136*t4127;
  t4148 = -1.*t4133*t4137;
  t4149 = 0. + t4145 + t4148;
  t4134 = -1.*t4127*t4133;
  t4139 = -1.*t4136*t4137;
  t4140 = 0. + t4134 + t4139;
  t4152 = t4127*t4133;
  t4153 = t4136*t4137;
  t4154 = 0. + t4152 + t4153;
  t4150 = t4144*t4149;
  t4165 = -1.*t4127;
  t4166 = 1. + t4165;
  t4167 = -0.4*t4166;
  t4168 = -0.64*t4127;
  t4169 = 0. + t4167 + t4168;
  t4171 = -0.24*t4137;
  t4173 = 0. + t4171;
  t4177 = t4136*t4169;
  t4178 = -1.*t4133*t4173;
  t4179 = 0. + t4177 + t4178;
  t4170 = t4169*t4133;
  t4174 = t4136*t4173;
  t4175 = 0. + t4170 + t4174;
  p_output1[0]=0. + t4126*t4140 + t4150;
  p_output1[1]=0.;
  p_output1[2]=0. + t4126*t4149 + t4144*t4154;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t4140*t4144 - 1.*t4126*t4149;
  p_output1[7]=0.;
  p_output1[8]=0. + t4150 - 1.*t4126*t4154;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t4154*t4175 + t4149*t4179;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t4149*t4175 - 1.*t4140*t4179;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t4127*t4169 + t4137*t4173;
  p_output1[19]=0.;
  p_output1[20]=0. + t4137*t4169 - 1.*t4127*t4173;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=-0.24;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=1.;
  p_output1[29]=0.;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_LeftShin_mex.hh"

namespace SymExpression
{

void Jb_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
