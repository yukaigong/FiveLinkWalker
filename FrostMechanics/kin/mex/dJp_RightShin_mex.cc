/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:26:20 GMT-05:00
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
  double t4857;
  double t4841;
  double t4846;
  double t4860;
  double t4837;
  double t4853;
  double t4861;
  double t4862;
  double t4865;
  double t4867;
  double t4868;
  double t4869;
  double t4872;
  double t4885;
  double t4886;
  double t4887;
  double t4879;
  double t4880;
  double t4881;
  double t4883;
  double t4884;
  double t4888;
  double t4889;
  double t4890;
  double t4891;
  double t4892;
  double t4893;
  double t4894;
  double t4900;
  double t4907;
  double t4908;
  double t4909;
  double t4906;
  double t4910;
  double t4911;
  double t4912;
  double t4913;
  double t4914;
  double t4864;
  double t4871;
  double t4873;
  double t4875;
  double t4876;
  double t4877;
  double t4878;
  double t4895;
  double t4896;
  double t4897;
  double t4898;
  double t4899;
  double t4901;
  double t4902;
  double t4903;
  double t4904;
  double t4905;
  double t4915;
  double t4916;
  double t4917;
  t4857 = Cos(var1[2]);
  t4841 = Cos(var1[5]);
  t4846 = Sin(var1[2]);
  t4860 = Sin(var1[5]);
  t4837 = Cos(var1[6]);
  t4853 = -1.*t4841*t4846;
  t4861 = -1.*t4857*t4860;
  t4862 = t4853 + t4861;
  t4865 = t4857*t4841;
  t4867 = -1.*t4846*t4860;
  t4868 = t4865 + t4867;
  t4869 = Sin(var1[6]);
  t4872 = t4837*t4862;
  t4885 = -1.*t4857*t4841;
  t4886 = t4846*t4860;
  t4887 = t4885 + t4886;
  t4879 = -1.*t4837;
  t4880 = 1. + t4879;
  t4881 = -0.4*t4880;
  t4883 = 0. + t4881;
  t4884 = t4883*t4862;
  t4888 = 0.4*t4869;
  t4889 = 0. + t4888;
  t4890 = t4887*t4889;
  t4891 = t4887*t4869;
  t4892 = t4872 + t4891;
  t4893 = -0.64*t4892;
  t4894 = t4884 + t4890 + t4893;
  t4900 = t4837*t4887;
  t4907 = t4841*t4846;
  t4908 = t4857*t4860;
  t4909 = t4907 + t4908;
  t4906 = t4883*t4887;
  t4910 = t4909*t4889;
  t4911 = t4909*t4869;
  t4912 = t4900 + t4911;
  t4913 = -0.64*t4912;
  t4914 = t4906 + t4910 + t4913;
  t4864 = 0.4*t4837*t4862;
  t4871 = -0.4*t4868*t4869;
  t4873 = -1.*t4868*t4869;
  t4875 = t4872 + t4873;
  t4876 = -0.64*t4875;
  t4877 = t4864 + t4871 + t4876;
  t4878 = var2[6]*t4877;
  t4895 = var2[2]*t4894;
  t4896 = var2[5]*t4894;
  t4897 = t4878 + t4895 + t4896;
  t4898 = 0.4*t4837*t4887;
  t4899 = -0.4*t4862*t4869;
  t4901 = -1.*t4862*t4869;
  t4902 = t4900 + t4901;
  t4903 = -0.64*t4902;
  t4904 = t4898 + t4899 + t4903;
  t4905 = var2[6]*t4904;
  t4915 = var2[2]*t4914;
  t4916 = var2[5]*t4914;
  t4917 = t4905 + t4915 + t4916;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4897;
  p_output1[7]=0;
  p_output1[8]=t4917;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t4897;
  p_output1[16]=0;
  p_output1[17]=t4917;
  p_output1[18]=t4877*var2[2] + t4877*var2[5] + (t4871 - 0.4*t4837*t4909 - 0.64*(t4873 - 1.*t4837*t4909))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t4904*var2[2] + t4904*var2[5] + (-0.4*t4837*t4868 + t4899 - 0.64*(-1.*t4837*t4868 + t4901))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_RightShin_mex.hh"

namespace SymExpression
{

void dJp_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
