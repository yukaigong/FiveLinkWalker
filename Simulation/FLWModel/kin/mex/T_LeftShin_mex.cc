/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:35 GMT-05:00
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
  double t1747;
  double t1751;
  double t1743;
  double t1753;
  double t1742;
  double t1749;
  double t1757;
  double t1758;
  double t1764;
  double t1760;
  double t1761;
  double t1763;
  double t1759;
  double t1768;
  double t1769;
  double t1770;
  double t1776;
  double t1777;
  double t1778;
  double t1781;
  double t1782;
  double t1783;
  double t1784;
  double t1786;
  double t1787;
  double t1779;
  double t1780;
  t1747 = Cos(var1[3]);
  t1751 = Sin(var1[2]);
  t1743 = Cos(var1[2]);
  t1753 = Sin(var1[3]);
  t1742 = Cos(var1[4]);
  t1749 = t1743*t1747;
  t1757 = -1.*t1751*t1753;
  t1758 = t1749 + t1757;
  t1764 = Sin(var1[4]);
  t1760 = t1747*t1751;
  t1761 = t1743*t1753;
  t1763 = t1760 + t1761;
  t1759 = t1742*t1758;
  t1768 = -1.*t1747*t1751;
  t1769 = -1.*t1743*t1753;
  t1770 = t1768 + t1769;
  t1776 = t1742*t1763;
  t1777 = t1758*t1764;
  t1778 = t1776 + t1777;
  t1781 = -1.*t1742;
  t1782 = 1. + t1781;
  t1783 = -0.4*t1782;
  t1784 = 0. + t1783;
  t1786 = 0.4*t1764;
  t1787 = 0. + t1786;
  t1779 = t1770*t1764;
  t1780 = t1759 + t1779;
  p_output1[0]=t1759 - 1.*t1763*t1764;
  p_output1[1]=0.;
  p_output1[2]=-1.*t1758*t1764 + t1742*t1770;
  p_output1[3]=0.;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0;
  p_output1[7]=0.;
  p_output1[8]=t1778;
  p_output1[9]=0.;
  p_output1[10]=t1780;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.64*t1778 + t1763*t1784 + t1758*t1787 + var1[0];
  p_output1[13]=0.;
  p_output1[14]=0. - 0.64*t1780 + t1758*t1784 + t1770*t1787 + var1[1];
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
