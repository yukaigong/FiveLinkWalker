/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:37 GMT-05:00
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
  double t1799;
  double t1792;
  double t1793;
  double t1803;
  double t1783;
  double t1798;
  double t1804;
  double t1805;
  double t1806;
  double t1807;
  double t1808;
  double t1809;
  double t1810;
  double t1813;
  double t1814;
  double t1825;
  double t1828;
  double t1829;
  double t1830;
  double t1831;
  double t1832;
  double t1836;
  double t1837;
  double t1838;
  double t1817;
  double t1818;
  double t1819;
  double t1846;
  double t1847;
  double t1851;
  double t1852;
  double t1853;
  double t1854;
  double t1855;
  double t1856;
  double t1857;
  double t1858;
  double t1859;
  double t1860;
  double t1841;
  double t1842;
  double t1874;
  double t1875;
  double t1876;
  double t1877;
  t1799 = Cos(var1[2]);
  t1792 = Cos(var1[3]);
  t1793 = Sin(var1[2]);
  t1803 = Sin(var1[3]);
  t1783 = Cos(var1[4]);
  t1798 = -1.*t1792*t1793;
  t1804 = -1.*t1799*t1803;
  t1805 = t1798 + t1804;
  t1806 = t1783*t1805;
  t1807 = t1799*t1792;
  t1808 = -1.*t1793*t1803;
  t1809 = t1807 + t1808;
  t1810 = Sin(var1[4]);
  t1813 = -1.*t1809*t1810;
  t1814 = t1806 + t1813;
  t1825 = -1.*t1805*t1810;
  t1828 = -1.*t1799*t1792;
  t1829 = t1793*t1803;
  t1830 = t1828 + t1829;
  t1831 = t1783*t1830;
  t1832 = t1831 + t1825;
  t1836 = t1783*t1809;
  t1837 = t1805*t1810;
  t1838 = t1836 + t1837;
  t1817 = t1792*t1793;
  t1818 = t1799*t1803;
  t1819 = t1817 + t1818;
  t1846 = t1830*t1810;
  t1847 = t1806 + t1846;
  t1851 = -1.*t1783;
  t1852 = 1. + t1851;
  t1853 = -0.4*t1852;
  t1854 = 0. + t1853;
  t1855 = t1854*t1809;
  t1856 = 0.4*t1810;
  t1857 = 0. + t1856;
  t1858 = t1805*t1857;
  t1859 = -0.64*t1838;
  t1860 = t1855 + t1858 + t1859;
  t1841 = -1.*t1819*t1810;
  t1842 = t1836 + t1841;
  t1874 = t1854*t1805;
  t1875 = t1830*t1857;
  t1876 = -0.64*t1847;
  t1877 = t1874 + t1875 + t1876;
  p_output1[0]=t1814*var2[2] + t1814*var2[3] + (t1813 - 1.*t1783*t1819)*var2[4];
  p_output1[1]=0;
  p_output1[2]=t1832*var2[2] + t1832*var2[3] + (-1.*t1783*t1809 + t1825)*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t1838*var2[2] + t1838*var2[3] + t1842*var2[4];
  p_output1[9]=0;
  p_output1[10]=t1847*var2[2] + t1847*var2[3] + t1814*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0] + t1860*var2[2] + t1860*var2[3] + (0.4*t1783*t1809 - 0.4*t1810*t1819 - 0.64*t1842)*var2[4];
  p_output1[13]=0;
  p_output1[14]=var2[1] + t1877*var2[2] + t1877*var2[3] + (0.4*t1783*t1805 - 0.4*t1809*t1810 - 0.64*t1814)*var2[4];
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
