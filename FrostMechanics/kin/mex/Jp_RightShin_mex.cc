/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:19 GMT-05:00
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
  double t4813;
  double t4816;
  double t4812;
  double t4817;
  double t4800;
  double t4815;
  double t4820;
  double t4821;
  double t4823;
  double t4824;
  double t4825;
  double t4826;
  double t4801;
  double t4805;
  double t4810;
  double t4811;
  double t4827;
  double t4830;
  double t4838;
  double t4839;
  double t4840;
  double t4822;
  double t4831;
  double t4832;
  double t4833;
  double t4834;
  double t4835;
  double t4836;
  double t4837;
  double t4841;
  double t4842;
  double t4843;
  double t4844;
  double t4845;
  double t4846;
  double t4848;
  double t4849;
  double t4850;
  t4813 = Cos(var1[5]);
  t4816 = Sin(var1[2]);
  t4812 = Cos(var1[2]);
  t4817 = Sin(var1[5]);
  t4800 = Cos(var1[6]);
  t4815 = t4812*t4813;
  t4820 = -1.*t4816*t4817;
  t4821 = t4815 + t4820;
  t4823 = -1.*t4813*t4816;
  t4824 = -1.*t4812*t4817;
  t4825 = t4823 + t4824;
  t4826 = Sin(var1[6]);
  t4801 = -1.*t4800;
  t4805 = 1. + t4801;
  t4810 = -0.4*t4805;
  t4811 = 0. + t4810;
  t4827 = 0.4*t4826;
  t4830 = 0. + t4827;
  t4838 = -1.*t4812*t4813;
  t4839 = t4816*t4817;
  t4840 = t4838 + t4839;
  t4822 = t4811*t4821;
  t4831 = t4825*t4830;
  t4832 = t4800*t4821;
  t4833 = t4825*t4826;
  t4834 = t4832 + t4833;
  t4835 = -0.64*t4834;
  t4836 = t4822 + t4831 + t4835;
  t4837 = t4811*t4825;
  t4841 = t4840*t4830;
  t4842 = t4800*t4825;
  t4843 = t4840*t4826;
  t4844 = t4842 + t4843;
  t4845 = -0.64*t4844;
  t4846 = t4837 + t4841 + t4845;
  t4848 = t4813*t4816;
  t4849 = t4812*t4817;
  t4850 = t4848 + t4849;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t4836;
  p_output1[7]=0;
  p_output1[8]=t4846;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t4836;
  p_output1[16]=0;
  p_output1[17]=t4846;
  p_output1[18]=0.4*t4800*t4821 - 0.4*t4826*t4850 - 0.64*(t4832 - 1.*t4826*t4850);
  p_output1[19]=0;
  p_output1[20]=0.4*t4800*t4825 - 0.4*t4821*t4826 - 0.64*(-1.*t4821*t4826 + t4842);
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

#include "Jp_RightShin_mex.hh"

namespace SymExpression
{

void Jp_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
