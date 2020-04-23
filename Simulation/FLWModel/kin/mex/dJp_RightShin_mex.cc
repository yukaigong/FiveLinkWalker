/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:01:19 GMT-05:00
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
  double t2275;
  double t2259;
  double t2264;
  double t2278;
  double t2255;
  double t2271;
  double t2279;
  double t2280;
  double t2283;
  double t2285;
  double t2286;
  double t2287;
  double t2290;
  double t2303;
  double t2304;
  double t2305;
  double t2297;
  double t2298;
  double t2299;
  double t2301;
  double t2302;
  double t2306;
  double t2307;
  double t2308;
  double t2309;
  double t2310;
  double t2311;
  double t2312;
  double t2318;
  double t2325;
  double t2326;
  double t2327;
  double t2324;
  double t2328;
  double t2329;
  double t2330;
  double t2331;
  double t2332;
  double t2282;
  double t2289;
  double t2291;
  double t2293;
  double t2294;
  double t2295;
  double t2296;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2317;
  double t2319;
  double t2320;
  double t2321;
  double t2322;
  double t2323;
  double t2333;
  double t2334;
  double t2335;
  t2275 = Cos(var1[2]);
  t2259 = Cos(var1[5]);
  t2264 = Sin(var1[2]);
  t2278 = Sin(var1[5]);
  t2255 = Cos(var1[6]);
  t2271 = -1.*t2259*t2264;
  t2279 = -1.*t2275*t2278;
  t2280 = t2271 + t2279;
  t2283 = t2275*t2259;
  t2285 = -1.*t2264*t2278;
  t2286 = t2283 + t2285;
  t2287 = Sin(var1[6]);
  t2290 = t2255*t2280;
  t2303 = -1.*t2275*t2259;
  t2304 = t2264*t2278;
  t2305 = t2303 + t2304;
  t2297 = -1.*t2255;
  t2298 = 1. + t2297;
  t2299 = -0.4*t2298;
  t2301 = 0. + t2299;
  t2302 = t2301*t2280;
  t2306 = 0.4*t2287;
  t2307 = 0. + t2306;
  t2308 = t2305*t2307;
  t2309 = t2305*t2287;
  t2310 = t2290 + t2309;
  t2311 = -0.64*t2310;
  t2312 = t2302 + t2308 + t2311;
  t2318 = t2255*t2305;
  t2325 = t2259*t2264;
  t2326 = t2275*t2278;
  t2327 = t2325 + t2326;
  t2324 = t2301*t2305;
  t2328 = t2327*t2307;
  t2329 = t2327*t2287;
  t2330 = t2318 + t2329;
  t2331 = -0.64*t2330;
  t2332 = t2324 + t2328 + t2331;
  t2282 = 0.4*t2255*t2280;
  t2289 = -0.4*t2286*t2287;
  t2291 = -1.*t2286*t2287;
  t2293 = t2290 + t2291;
  t2294 = -0.64*t2293;
  t2295 = t2282 + t2289 + t2294;
  t2296 = var2[6]*t2295;
  t2313 = var2[2]*t2312;
  t2314 = var2[5]*t2312;
  t2315 = t2296 + t2313 + t2314;
  t2316 = 0.4*t2255*t2305;
  t2317 = -0.4*t2280*t2287;
  t2319 = -1.*t2280*t2287;
  t2320 = t2318 + t2319;
  t2321 = -0.64*t2320;
  t2322 = t2316 + t2317 + t2321;
  t2323 = var2[6]*t2322;
  t2333 = var2[2]*t2332;
  t2334 = var2[5]*t2332;
  t2335 = t2323 + t2333 + t2334;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2315;
  p_output1[7]=0;
  p_output1[8]=t2335;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t2315;
  p_output1[16]=0;
  p_output1[17]=t2335;
  p_output1[18]=t2295*var2[2] + t2295*var2[5] + (t2289 - 0.4*t2255*t2327 - 0.64*(t2291 - 1.*t2255*t2327))*var2[6];
  p_output1[19]=0;
  p_output1[20]=t2322*var2[2] + t2322*var2[5] + (-0.4*t2255*t2286 + t2317 - 0.64*(-1.*t2255*t2286 + t2319))*var2[6];
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
