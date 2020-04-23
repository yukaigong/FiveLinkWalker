/*
 * Automatically Generated from Mathematica.
 * Wed 18 Dec 2019 16:50:30 GMT-05:00
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
  double t1237;
  double t1186;
  double t1201;
  double t1269;
  double t1183;
  double t1235;
  double t1271;
  double t1308;
  double t1364;
  double t1376;
  double t1380;
  double t1384;
  double t1401;
  double t1406;
  double t1407;
  double t1313;
  double t1326;
  double t1418;
  double t1420;
  double t1421;
  double t1422;
  double t1332;
  double t1276;
  double t1447;
  double t1448;
  double t1450;
  double t1462;
  double t1463;
  double t1425;
  double t1426;
  double t1427;
  double t1337;
  double t1484;
  double t1513;
  double t1514;
  double t1517;
  double t1523;
  double t1529;
  double t1530;
  double t1539;
  double t1568;
  double t1598;
  double t1602;
  double t1614;
  double t1619;
  double t1620;
  double t1622;
  double t1623;
  double t1626;
  double t1631;
  double t1610;
  double t1690;
  double t1644;
  double t1654;
  double t1658;
  double t1680;
  double t1683;
  double t1684;
  double t1696;
  t1237 = Cos(var1[3]);
  t1186 = Cos(var1[4]);
  t1201 = Sin(var1[3]);
  t1269 = Sin(var1[4]);
  t1183 = Cos(var1[2]);
  t1235 = -1.*t1186*t1201;
  t1271 = -1.*t1237*t1269;
  t1308 = Sin(var1[2]);
  t1364 = t1235 + t1271;
  t1376 = t1183*t1364;
  t1380 = -1.*t1237*t1186;
  t1384 = t1201*t1269;
  t1401 = t1380 + t1384;
  t1406 = t1308*t1401;
  t1407 = t1376 + t1406;
  t1313 = t1237*t1186;
  t1326 = -1.*t1201*t1269;
  t1418 = t1308*t1364;
  t1420 = t1313 + t1326;
  t1421 = t1183*t1420;
  t1422 = t1418 + t1421;
  t1332 = 0. + t1313 + t1326;
  t1276 = 0. + t1235 + t1271;
  t1447 = -1.*t1308*t1364;
  t1448 = t1183*t1401;
  t1450 = t1447 + t1448;
  t1462 = -1.*t1308*t1420;
  t1463 = t1376 + t1462;
  t1425 = t1186*t1201;
  t1426 = t1237*t1269;
  t1427 = 0. + t1425 + t1426;
  t1337 = -1.*t1308*t1332;
  t1484 = -1.*t1186;
  t1513 = 1. + t1484;
  t1514 = -0.4*t1513;
  t1517 = -0.8*t1186;
  t1523 = 0. + t1514 + t1517;
  t1529 = t1237*t1523;
  t1530 = -0.4*t1269;
  t1539 = 0. + t1530;
  t1568 = -1.*t1201*t1539;
  t1598 = 0. + t1529 + t1568;
  t1602 = t1598*t1364;
  t1614 = t1523*t1201;
  t1619 = t1237*t1539;
  t1620 = 0. + t1614 + t1619;
  t1622 = t1620*t1420;
  t1623 = -1.*t1523*t1201;
  t1626 = -1.*t1237*t1539;
  t1631 = t1623 + t1626;
  t1610 = t1529 + t1568;
  t1690 = -1.*t1620*t1364;
  t1644 = 0.4*t1186*t1201;
  t1654 = 0.4*t1237*t1269;
  t1658 = t1644 + t1654;
  t1680 = -0.4*t1237*t1186;
  t1683 = 0.4*t1201*t1269;
  t1684 = t1680 + t1683;
  t1696 = -1.*t1598*t1401;
  p_output1[0]=(t1183*t1276 + t1337)*var2[2] + t1407*var2[3] + t1407*var2[4];
  p_output1[1]=0;
  p_output1[2]=(t1183*t1332 - 1.*t1308*t1427)*var2[2] + t1422*var2[3] + t1422*var2[4];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1276*t1308 - 1.*t1183*t1332)*var2[2] + t1450*var2[3] + t1450*var2[4];
  p_output1[7]=0;
  p_output1[8]=(t1337 - 1.*t1183*t1427)*var2[2] + t1463*var2[3] + t1463*var2[4];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(t1602 + t1427*t1610 + t1622 + t1332*t1631)*var2[3] + (t1602 + t1622 + t1332*t1658 + t1427*t1684)*var2[4];
  p_output1[13]=0;
  p_output1[14]=(-1.*t1332*t1610 - 1.*t1276*t1631 + t1690 + t1696)*var2[3] + (-1.*t1276*t1658 - 1.*t1332*t1684 + t1690 + t1696)*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(0. - 1.*t1269*t1523 + t1186*t1539)*var2[4];
  p_output1[19]=0;
  p_output1[20]=(0.4*Power(t1186,2) + 0.4*Power(t1269,2) + t1186*t1523 + t1269*t1539)*var2[4];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_LeftToe_mex.hh"

namespace SymExpression
{

void dJb_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
