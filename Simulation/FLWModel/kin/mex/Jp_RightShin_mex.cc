/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:18 GMT-05:00
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
  double t2231;
  double t2234;
  double t2230;
  double t2235;
  double t2218;
  double t2233;
  double t2238;
  double t2239;
  double t2241;
  double t2242;
  double t2243;
  double t2244;
  double t2219;
  double t2223;
  double t2228;
  double t2229;
  double t2245;
  double t2248;
  double t2256;
  double t2257;
  double t2258;
  double t2240;
  double t2249;
  double t2250;
  double t2251;
  double t2252;
  double t2253;
  double t2254;
  double t2255;
  double t2259;
  double t2260;
  double t2261;
  double t2262;
  double t2263;
  double t2264;
  double t2266;
  double t2267;
  double t2268;
  t2231 = Cos(var1[5]);
  t2234 = Sin(var1[2]);
  t2230 = Cos(var1[2]);
  t2235 = Sin(var1[5]);
  t2218 = Cos(var1[6]);
  t2233 = t2230*t2231;
  t2238 = -1.*t2234*t2235;
  t2239 = t2233 + t2238;
  t2241 = -1.*t2231*t2234;
  t2242 = -1.*t2230*t2235;
  t2243 = t2241 + t2242;
  t2244 = Sin(var1[6]);
  t2219 = -1.*t2218;
  t2223 = 1. + t2219;
  t2228 = -0.4*t2223;
  t2229 = 0. + t2228;
  t2245 = 0.4*t2244;
  t2248 = 0. + t2245;
  t2256 = -1.*t2230*t2231;
  t2257 = t2234*t2235;
  t2258 = t2256 + t2257;
  t2240 = t2229*t2239;
  t2249 = t2243*t2248;
  t2250 = t2218*t2239;
  t2251 = t2243*t2244;
  t2252 = t2250 + t2251;
  t2253 = -0.64*t2252;
  t2254 = t2240 + t2249 + t2253;
  t2255 = t2229*t2243;
  t2259 = t2258*t2248;
  t2260 = t2218*t2243;
  t2261 = t2258*t2244;
  t2262 = t2260 + t2261;
  t2263 = -0.64*t2262;
  t2264 = t2255 + t2259 + t2263;
  t2266 = t2231*t2234;
  t2267 = t2230*t2235;
  t2268 = t2266 + t2267;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2254;
  p_output1[7]=0;
  p_output1[8]=t2264;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2254;
  p_output1[16]=0;
  p_output1[17]=t2264;
  p_output1[18]=0.4*t2218*t2239 - 0.4*t2244*t2268 - 0.64*(t2250 - 1.*t2244*t2268);
  p_output1[19]=0;
  p_output1[20]=0.4*t2218*t2243 - 0.4*t2239*t2244 - 0.64*(-1.*t2239*t2244 + t2260);
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
