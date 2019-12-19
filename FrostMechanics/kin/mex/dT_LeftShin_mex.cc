/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:49 GMT-05:00
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
  double t4384;
  double t4377;
  double t4378;
  double t4388;
  double t4368;
  double t4383;
  double t4389;
  double t4390;
  double t4391;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4398;
  double t4399;
  double t4410;
  double t4413;
  double t4414;
  double t4415;
  double t4416;
  double t4417;
  double t4421;
  double t4422;
  double t4423;
  double t4402;
  double t4403;
  double t4404;
  double t4431;
  double t4432;
  double t4436;
  double t4437;
  double t4438;
  double t4439;
  double t4440;
  double t4441;
  double t4442;
  double t4443;
  double t4444;
  double t4445;
  double t4426;
  double t4427;
  double t4459;
  double t4460;
  double t4461;
  double t4462;
  t4384 = Cos(var1[2]);
  t4377 = Cos(var1[3]);
  t4378 = Sin(var1[2]);
  t4388 = Sin(var1[3]);
  t4368 = Cos(var1[4]);
  t4383 = -1.*t4377*t4378;
  t4389 = -1.*t4384*t4388;
  t4390 = t4383 + t4389;
  t4391 = t4368*t4390;
  t4392 = t4384*t4377;
  t4393 = -1.*t4378*t4388;
  t4394 = t4392 + t4393;
  t4395 = Sin(var1[4]);
  t4398 = -1.*t4394*t4395;
  t4399 = t4391 + t4398;
  t4410 = -1.*t4390*t4395;
  t4413 = -1.*t4384*t4377;
  t4414 = t4378*t4388;
  t4415 = t4413 + t4414;
  t4416 = t4368*t4415;
  t4417 = t4416 + t4410;
  t4421 = t4368*t4394;
  t4422 = t4390*t4395;
  t4423 = t4421 + t4422;
  t4402 = t4377*t4378;
  t4403 = t4384*t4388;
  t4404 = t4402 + t4403;
  t4431 = t4415*t4395;
  t4432 = t4391 + t4431;
  t4436 = -1.*t4368;
  t4437 = 1. + t4436;
  t4438 = -0.4*t4437;
  t4439 = 0. + t4438;
  t4440 = t4439*t4394;
  t4441 = 0.4*t4395;
  t4442 = 0. + t4441;
  t4443 = t4390*t4442;
  t4444 = -0.64*t4423;
  t4445 = t4440 + t4443 + t4444;
  t4426 = -1.*t4404*t4395;
  t4427 = t4421 + t4426;
  t4459 = t4439*t4390;
  t4460 = t4415*t4442;
  t4461 = -0.64*t4432;
  t4462 = t4459 + t4460 + t4461;
  p_output1[0]=t4399*var2[2] + t4399*var2[3] + (t4398 - 1.*t4368*t4404)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t4417*var2[2] + t4417*var2[3] + (-1.*t4368*t4394 + t4410)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t4423*var2[2] + t4423*var2[3] + t4427*var2[4];
  p_output1[9]=0;
  p_output1[10]=t4432*var2[2] + t4432*var2[3] + t4399*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t4445*var2[2] + t4445*var2[3] + (0.4*t4368*t4394 - 0.4*t4395*t4404 - 0.64*t4427)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t4462*var2[2] + t4462*var2[3] + (0.4*t4368*t4390 - 0.4*t4394*t4395 - 0.64*t4399)*var2[4];
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

#include "dT_LeftShin_mex.hh"

namespace SymExpression
{

void dT_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
