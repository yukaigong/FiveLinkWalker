/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:26 GMT-05:00
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
  double t601;
  double t616;
  double t588;
  double t636;
  double t460;
  double t607;
  double t640;
  double t663;
  double t667;
  double t671;
  double t672;
  double t674;
  double t512;
  double t524;
  double t563;
  double t587;
  double t675;
  double t679;
  double t696;
  double t697;
  double t698;
  double t666;
  double t680;
  double t683;
  double t684;
  double t685;
  double t691;
  double t694;
  double t695;
  double t702;
  double t703;
  double t704;
  double t708;
  double t709;
  double t712;
  double t715;
  double t716;
  double t717;
  t601 = Cos(var1[3]);
  t616 = Sin(var1[2]);
  t588 = Cos(var1[2]);
  t636 = Sin(var1[3]);
  t460 = Cos(var1[4]);
  t607 = t588*t601;
  t640 = -1.*t616*t636;
  t663 = t607 + t640;
  t667 = -1.*t601*t616;
  t671 = -1.*t588*t636;
  t672 = t667 + t671;
  t674 = Sin(var1[4]);
  t512 = -1.*t460;
  t524 = 1. + t512;
  t563 = -0.4*t524;
  t587 = 0. + t563;
  t675 = 0.4*t674;
  t679 = 0. + t675;
  t696 = -1.*t588*t601;
  t697 = t616*t636;
  t698 = t696 + t697;
  t666 = t587*t663;
  t680 = t672*t679;
  t683 = t460*t663;
  t684 = t672*t674;
  t685 = t683 + t684;
  t691 = -0.8*t685;
  t694 = t666 + t680 + t691;
  t695 = t587*t672;
  t702 = t698*t679;
  t703 = t460*t672;
  t704 = t698*t674;
  t708 = t703 + t704;
  t709 = -0.8*t708;
  t712 = t695 + t702 + t709;
  t715 = t601*t616;
  t716 = t588*t636;
  t717 = t715 + t716;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t694;
  p_output1[7]=0;
  p_output1[8]=t712;
  p_output1[9]=t694;
  p_output1[10]=0;
  p_output1[11]=t712;
  p_output1[12]=0.4*t460*t663 - 0.4*t674*t717 - 0.8*(t683 - 1.*t674*t717);
  p_output1[13]=0;
  p_output1[14]=0.4*t460*t672 - 0.4*t663*t674 - 0.8*(-1.*t663*t674 + t703);
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

#include "Jp_LeftToe_mex.hh"

namespace SymExpression
{

void Jp_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
