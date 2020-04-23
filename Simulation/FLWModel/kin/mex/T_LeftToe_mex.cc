/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:34 GMT-05:00
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
  double t1661;
  double t1687;
  double t1656;
  double t1691;
  double t1655;
  double t1680;
  double t1709;
  double t1712;
  double t1758;
  double t1715;
  double t1724;
  double t1725;
  double t1713;
  double t1769;
  double t1771;
  double t1779;
  double t1845;
  double t1849;
  double t1854;
  double t1907;
  double t1912;
  double t1932;
  double t1948;
  double t1981;
  double t1985;
  double t1857;
  double t1886;
  t1661 = Cos(var1[3]);
  t1687 = Sin(var1[2]);
  t1656 = Cos(var1[2]);
  t1691 = Sin(var1[3]);
  t1655 = Cos(var1[4]);
  t1680 = t1656*t1661;
  t1709 = -1.*t1687*t1691;
  t1712 = t1680 + t1709;
  t1758 = Sin(var1[4]);
  t1715 = t1661*t1687;
  t1724 = t1656*t1691;
  t1725 = t1715 + t1724;
  t1713 = t1655*t1712;
  t1769 = -1.*t1661*t1687;
  t1771 = -1.*t1656*t1691;
  t1779 = t1769 + t1771;
  t1845 = t1655*t1725;
  t1849 = t1712*t1758;
  t1854 = t1845 + t1849;
  t1907 = -1.*t1655;
  t1912 = 1. + t1907;
  t1932 = -0.4*t1912;
  t1948 = 0. + t1932;
  t1981 = 0.4*t1758;
  t1985 = 0. + t1981;
  t1857 = t1779*t1758;
  t1886 = t1713 + t1857;
  p_output1[0]=t1713 - 1.*t1725*t1758;
  p_output1[1]=0.;
  p_output1[2]=-1.*t1712*t1758 + t1655*t1779;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t1854;
  p_output1[9]=0.;
  p_output1[10]=t1886;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.8*t1854 + t1725*t1948 + t1712*t1985 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.8*t1886 + t1712*t1948 + t1779*t1985 + var1[1];
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

#include "T_LeftToe_mex.hh"

namespace SymExpression
{

void T_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
