/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:53 GMT-05:00
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
  double t3523;
  double t365;
  double t1021;
  double t3526;
  double t350;
  double t3520;
  double t4055;
  double t4200;
  double t4212;
  double t4242;
  double t4253;
  double t4265;
  double t4268;
  double t4274;
  double t4278;
  double t4345;
  double t4355;
  double t4363;
  double t4366;
  double t4367;
  double t4368;
  double t4387;
  double t4389;
  double t4404;
  double t4294;
  double t4310;
  double t4325;
  double t4463;
  double t4465;
  double t4519;
  double t4523;
  double t4524;
  double t4525;
  double t4526;
  double t4532;
  double t4533;
  double t4534;
  double t4537;
  double t4538;
  double t4415;
  double t4417;
  double t4576;
  double t4578;
  double t4579;
  double t4580;
  t3523 = Cos(var1[2]);
  t365 = Cos(var1[5]);
  t1021 = Sin(var1[2]);
  t3526 = Sin(var1[5]);
  t350 = Cos(var1[6]);
  t3520 = -1.*t365*t1021;
  t4055 = -1.*t3523*t3526;
  t4200 = t3520 + t4055;
  t4212 = t350*t4200;
  t4242 = t3523*t365;
  t4253 = -1.*t1021*t3526;
  t4265 = t4242 + t4253;
  t4268 = Sin(var1[6]);
  t4274 = -1.*t4265*t4268;
  t4278 = t4212 + t4274;
  t4345 = -1.*t4200*t4268;
  t4355 = -1.*t3523*t365;
  t4363 = t1021*t3526;
  t4366 = t4355 + t4363;
  t4367 = t350*t4366;
  t4368 = t4367 + t4345;
  t4387 = t350*t4265;
  t4389 = t4200*t4268;
  t4404 = t4387 + t4389;
  t4294 = t365*t1021;
  t4310 = t3523*t3526;
  t4325 = t4294 + t4310;
  t4463 = t4366*t4268;
  t4465 = t4212 + t4463;
  t4519 = -1.*t350;
  t4523 = 1. + t4519;
  t4524 = -0.4*t4523;
  t4525 = 0. + t4524;
  t4526 = t4525*t4265;
  t4532 = 0.4*t4268;
  t4533 = 0. + t4532;
  t4534 = t4200*t4533;
  t4537 = -0.8*t4404;
  t4538 = t4526 + t4534 + t4537;
  t4415 = -1.*t4325*t4268;
  t4417 = t4387 + t4415;
  t4576 = t4525*t4200;
  t4578 = t4366*t4533;
  t4579 = -0.8*t4465;
  t4580 = t4576 + t4578 + t4579;
  p_output1[0]=t4278*var2[2] + t4278*var2[5] + (t4274 - 1.*t350*t4325)*var2[6];
  p_output1[1]=0;
  p_output1[2]=t4368*var2[2] + t4368*var2[5] + (-1.*t350*t4265 + t4345)*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t4404*var2[2] + t4404*var2[5] + t4417*var2[6];
  p_output1[9]=0;
  p_output1[10]=t4465*var2[2] + t4465*var2[5] + t4278*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t4538*var2[2] + t4538*var2[5] + (0.4*t350*t4265 - 0.4*t4268*t4325 - 0.8*t4417)*var2[6];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t4580*var2[2] + t4580*var2[5] + (0.4*t350*t4200 - 0.4*t4265*t4268 - 0.8*t4278)*var2[6];
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

#include "dT_RightToe_mex.hh"

namespace SymExpression
{

void dT_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
