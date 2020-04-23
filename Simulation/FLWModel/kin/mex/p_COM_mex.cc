/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:11:56 GMT-05:00
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
  double t1296;
  double t1342;
  double t1343;
  double t1344;
  double t1345;
  double t1346;
  double t1347;
  double t1351;
  double t1355;
  double t1356;
  double t1357;
  double t1358;
  double t1366;
  double t1367;
  double t1368;
  double t1369;
  double t1370;
  double t1374;
  double t1378;
  double t1379;
  double t1380;
  double t1381;
  double t1352;
  double t1353;
  double t1398;
  double t1399;
  double t1400;
  double t1375;
  double t1376;
  double t1412;
  double t1413;
  double t1414;
  t1296 = Sin(var1[2]);
  t1342 = Cos(var1[3]);
  t1343 = t1342*t1296;
  t1344 = Cos(var1[2]);
  t1345 = Sin(var1[3]);
  t1346 = t1344*t1345;
  t1347 = t1343 + t1346;
  t1351 = Cos(var1[4]);
  t1355 = t1344*t1342;
  t1356 = -1.*t1296*t1345;
  t1357 = t1355 + t1356;
  t1358 = Sin(var1[4]);
  t1366 = Cos(var1[5]);
  t1367 = t1366*t1296;
  t1368 = Sin(var1[5]);
  t1369 = t1344*t1368;
  t1370 = t1367 + t1369;
  t1374 = Cos(var1[6]);
  t1378 = t1344*t1366;
  t1379 = -1.*t1296*t1368;
  t1380 = t1378 + t1379;
  t1381 = Sin(var1[6]);
  t1352 = -1.*t1351;
  t1353 = 1. + t1352;
  t1398 = -1.*t1342*t1296;
  t1399 = -1.*t1344*t1345;
  t1400 = t1398 + t1399;
  t1375 = -1.*t1374;
  t1376 = 1. + t1375;
  t1412 = -1.*t1366*t1296;
  t1413 = -1.*t1344*t1368;
  t1414 = t1412 + t1413;
  p_output1[0]=0.03125*(12.*(0.24*t1296 + var1[0]) + 6.8*(-0.11*t1347 + var1[0]) + 3.2*(-0.4*t1347*t1353 + 0.4*t1357*t1358 - 0.64*(t1347*t1351 + t1357*t1358) + var1[0]) + 6.8*(-0.11*t1370 + var1[0]) + 3.2*(-0.4*t1370*t1376 + 0.4*t1380*t1381 - 0.64*(t1370*t1374 + t1380*t1381) + var1[0]));
  p_output1[1]=0;
  p_output1[2]=0.03125*(12.*(0.24*t1344 + var1[1]) + 6.8*(-0.11*t1357 + var1[1]) + 6.8*(-0.11*t1380 + var1[1]) + 3.2*(-0.4*t1353*t1357 + 0.4*t1358*t1400 - 0.64*(t1351*t1357 + t1358*t1400) + var1[1]) + 3.2*(-0.4*t1376*t1380 + 0.4*t1381*t1414 - 0.64*(t1374*t1380 + t1381*t1414) + var1[1]));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
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
