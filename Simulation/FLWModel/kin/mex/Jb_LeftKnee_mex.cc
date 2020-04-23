/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:24:21 GMT-05:00
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
  double t2597;
  double t2588;
  double t2594;
  double t2598;
  double t2605;
  double t2587;
  double t2606;
  double t2609;
  double t2610;
  double t2595;
  double t2600;
  double t2601;
  double t2613;
  double t2614;
  double t2615;
  double t2611;
  double t2626;
  double t2627;
  double t2628;
  double t2629;
  double t2630;
  double t2635;
  double t2636;
  double t2631;
  double t2632;
  t2597 = Cos(var1[3]);
  t2588 = Cos(var1[4]);
  t2594 = Sin(var1[3]);
  t2598 = Sin(var1[4]);
  t2605 = Cos(var1[2]);
  t2587 = Sin(var1[2]);
  t2606 = t2597*t2588;
  t2609 = -1.*t2594*t2598;
  t2610 = 0. + t2606 + t2609;
  t2595 = -1.*t2588*t2594;
  t2600 = -1.*t2597*t2598;
  t2601 = 0. + t2595 + t2600;
  t2613 = t2588*t2594;
  t2614 = t2597*t2598;
  t2615 = 0. + t2613 + t2614;
  t2611 = t2605*t2610;
  t2626 = -1.*t2588;
  t2627 = 1. + t2626;
  t2628 = -0.4*t2627;
  t2629 = -0.4*t2588;
  t2630 = 0. + t2628 + t2629;
  t2635 = t2597*t2630;
  t2636 = 0. + t2635;
  t2631 = t2630*t2594;
  t2632 = 0. + t2631;
  p_output1[0]=0. + t2587*t2601 + t2611;
  p_output1[1]=0.;
  p_output1[2]=0. + t2587*t2610 + t2605*t2615;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t2601*t2605 - 1.*t2587*t2610;
  p_output1[7]=0.;
  p_output1[8]=0. + t2611 - 1.*t2587*t2615;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t2615*t2632 + t2610*t2636;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t2610*t2632 - 1.*t2601*t2636;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t2588*t2630;
  p_output1[19]=0.;
  p_output1[20]=0. + t2598*t2630;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=0.;
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

#include "Jb_LeftKnee_mex.hh"

namespace SymExpression
{

void Jb_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
