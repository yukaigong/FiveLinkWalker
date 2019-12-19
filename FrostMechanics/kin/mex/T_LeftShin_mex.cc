/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:25:47 GMT-05:00
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
  double t4329;
  double t4336;
  double t4328;
  double t4337;
  double t4326;
  double t4333;
  double t4339;
  double t4343;
  double t4349;
  double t4345;
  double t4346;
  double t4347;
  double t4344;
  double t4353;
  double t4354;
  double t4355;
  double t4361;
  double t4362;
  double t4363;
  double t4366;
  double t4367;
  double t4368;
  double t4369;
  double t4371;
  double t4372;
  double t4364;
  double t4365;
  t4329 = Cos(var1[3]);
  t4336 = Sin(var1[2]);
  t4328 = Cos(var1[2]);
  t4337 = Sin(var1[3]);
  t4326 = Cos(var1[4]);
  t4333 = t4328*t4329;
  t4339 = -1.*t4336*t4337;
  t4343 = t4333 + t4339;
  t4349 = Sin(var1[4]);
  t4345 = t4329*t4336;
  t4346 = t4328*t4337;
  t4347 = t4345 + t4346;
  t4344 = t4326*t4343;
  t4353 = -1.*t4329*t4336;
  t4354 = -1.*t4328*t4337;
  t4355 = t4353 + t4354;
  t4361 = t4326*t4347;
  t4362 = t4343*t4349;
  t4363 = t4361 + t4362;
  t4366 = -1.*t4326;
  t4367 = 1. + t4366;
  t4368 = -0.4*t4367;
  t4369 = 0. + t4368;
  t4371 = 0.4*t4349;
  t4372 = 0. + t4371;
  t4364 = t4355*t4349;
  t4365 = t4344 + t4364;
  p_output1[0]=t4344 - 1.*t4347*t4349;
  p_output1[1]=0.;
  p_output1[2]=-1.*t4343*t4349 + t4326*t4355;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t4363;
  p_output1[9]=0.;
  p_output1[10]=t4365;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t4363 + t4347*t4369 + t4343*t4372 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t4365 + t4343*t4369 + t4355*t4372 + var1[1];
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

#include "T_LeftShin_mex.hh"

namespace SymExpression
{

void T_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
