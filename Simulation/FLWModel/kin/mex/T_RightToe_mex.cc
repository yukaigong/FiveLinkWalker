/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:51 GMT-05:00
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
  double t3747;
  double t3753;
  double t3739;
  double t3780;
  double t3733;
  double t3750;
  double t3792;
  double t3794;
  double t3905;
  double t3862;
  double t3863;
  double t3872;
  double t3829;
  double t3977;
  double t3983;
  double t3993;
  double t4058;
  double t4092;
  double t4103;
  double t4136;
  double t4172;
  double t4185;
  double t4186;
  double t4200;
  double t4212;
  double t4111;
  double t4123;
  t3747 = Cos(var1[5]);
  t3753 = Sin(var1[2]);
  t3739 = Cos(var1[2]);
  t3780 = Sin(var1[5]);
  t3733 = Cos(var1[6]);
  t3750 = t3739*t3747;
  t3792 = -1.*t3753*t3780;
  t3794 = t3750 + t3792;
  t3905 = Sin(var1[6]);
  t3862 = t3747*t3753;
  t3863 = t3739*t3780;
  t3872 = t3862 + t3863;
  t3829 = t3733*t3794;
  t3977 = -1.*t3747*t3753;
  t3983 = -1.*t3739*t3780;
  t3993 = t3977 + t3983;
  t4058 = t3733*t3872;
  t4092 = t3794*t3905;
  t4103 = t4058 + t4092;
  t4136 = -1.*t3733;
  t4172 = 1. + t4136;
  t4185 = -0.4*t4172;
  t4186 = 0. + t4185;
  t4200 = 0.4*t3905;
  t4212 = 0. + t4200;
  t4111 = t3993*t3905;
  t4123 = t3829 + t4111;
  p_output1[0]=t3829 - 1.*t3872*t3905;
  p_output1[1]=0.;
  p_output1[2]=-1.*t3794*t3905 + t3733*t3993;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t4103;
  p_output1[9]=0.;
  p_output1[10]=t4123;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.8*t4103 + t3872*t4186 + t3794*t4212 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.8*t4123 + t3794*t4186 + t3993*t4212 + var1[1];
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

#include "T_RightToe_mex.hh"

namespace SymExpression
{

void T_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
