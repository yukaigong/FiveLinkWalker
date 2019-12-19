/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 22:18:16 GMT-05:00
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
  double t3;
  double t7;
  double t8;
  double t9;
  double t10;
  double t11;
  double t12;
  double t16;
  double t20;
  double t21;
  double t22;
  double t23;
  double t31;
  double t32;
  double t33;
  double t34;
  double t35;
  double t39;
  double t43;
  double t44;
  double t45;
  double t46;
  double t17;
  double t18;
  double t63;
  double t64;
  double t65;
  double t40;
  double t41;
  double t77;
  double t78;
  double t79;
  t3 = Sin(var1[2]);
  t7 = Cos(var1[3]);
  t8 = t7*t3;
  t9 = Cos(var1[2]);
  t10 = Sin(var1[3]);
  t11 = t9*t10;
  t12 = t8 + t11;
  t16 = Cos(var1[4]);
  t20 = t9*t7;
  t21 = -1.*t3*t10;
  t22 = t20 + t21;
  t23 = Sin(var1[4]);
  t31 = Cos(var1[5]);
  t32 = t31*t3;
  t33 = Sin(var1[5]);
  t34 = t9*t33;
  t35 = t32 + t34;
  t39 = Cos(var1[6]);
  t43 = t9*t31;
  t44 = -1.*t3*t33;
  t45 = t43 + t44;
  t46 = Sin(var1[6]);
  t17 = -1.*t16;
  t18 = 1. + t17;
  t63 = -1.*t7*t3;
  t64 = -1.*t9*t10;
  t65 = t63 + t64;
  t40 = -1.*t39;
  t41 = 1. + t40;
  t77 = -1.*t31*t3;
  t78 = -1.*t9*t33;
  t79 = t77 + t78;
  p_output1[0]=0.03125*(6.8*(-0.11*t12 + var1[0]) + 3.2*(-0.4*t12*t18 + 0.4*t22*t23 - 0.64*(t12*t16 + t22*t23) + var1[0]) + 12.*(0.24*t3 + var1[0]) + 6.8*(-0.11*t35 + var1[0]) + 3.2*(-0.4*t35*t41 + 0.4*t45*t46 - 0.64*(t35*t39 + t45*t46) + var1[0]));
  p_output1[1]=0;
  p_output1[2]=0.03125*(6.8*(-0.11*t22 + var1[1]) + 6.8*(-0.11*t45 + var1[1]) + 3.2*(-0.4*t18*t22 + 0.4*t23*t65 - 0.64*(t16*t22 + t23*t65) + var1[1]) + 3.2*(-0.4*t41*t45 + 0.4*t46*t79 - 0.64*(t39*t45 + t46*t79) + var1[1]) + 12.*(0.24*t9 + var1[1]));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_COM_mex.hh"

namespace SymExpression
{

void p_COM_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
