/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:11:58 GMT-05:00
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
  double t1299;
  double t1362;
  double t1388;
  double t1389;
  double t1390;
  double t1402;
  double t1417;
  double t1419;
  double t1423;
  double t1429;
  double t1433;
  double t1434;
  double t1452;
  double t1453;
  double t1454;
  double t1455;
  double t1456;
  double t1458;
  double t1465;
  double t1466;
  double t1467;
  double t1468;
  double t1420;
  double t1421;
  double t1484;
  double t1485;
  double t1486;
  double t1459;
  double t1460;
  double t1496;
  double t1497;
  double t1498;
  double t1418;
  double t1422;
  double t1438;
  double t1443;
  double t1447;
  double t1448;
  double t1449;
  double t1450;
  double t1451;
  double t1482;
  double t1483;
  double t1487;
  double t1488;
  double t1489;
  double t1490;
  double t1491;
  double t1492;
  double t1493;
  double t1513;
  double t1514;
  double t1515;
  double t1457;
  double t1461;
  double t1469;
  double t1470;
  double t1471;
  double t1472;
  double t1473;
  double t1474;
  double t1475;
  double t1494;
  double t1495;
  double t1499;
  double t1500;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1534;
  double t1535;
  double t1536;
  t1299 = Cos(var1[2]);
  t1362 = Cos(var1[3]);
  t1388 = t1299*t1362;
  t1389 = Sin(var1[2]);
  t1390 = Sin(var1[3]);
  t1402 = -1.*t1389*t1390;
  t1417 = t1388 + t1402;
  t1419 = Cos(var1[4]);
  t1423 = -1.*t1362*t1389;
  t1429 = -1.*t1299*t1390;
  t1433 = t1423 + t1429;
  t1434 = Sin(var1[4]);
  t1452 = Cos(var1[5]);
  t1453 = t1299*t1452;
  t1454 = Sin(var1[5]);
  t1455 = -1.*t1389*t1454;
  t1456 = t1453 + t1455;
  t1458 = Cos(var1[6]);
  t1465 = -1.*t1452*t1389;
  t1466 = -1.*t1299*t1454;
  t1467 = t1465 + t1466;
  t1468 = Sin(var1[6]);
  t1420 = -1.*t1419;
  t1421 = 1. + t1420;
  t1484 = -1.*t1299*t1362;
  t1485 = t1389*t1390;
  t1486 = t1484 + t1485;
  t1459 = -1.*t1458;
  t1460 = 1. + t1459;
  t1496 = -1.*t1299*t1452;
  t1497 = t1389*t1454;
  t1498 = t1496 + t1497;
  t1418 = -0.748*t1417;
  t1422 = -0.4*t1421*t1417;
  t1438 = 0.4*t1433*t1434;
  t1443 = t1419*t1417;
  t1447 = t1433*t1434;
  t1448 = t1443 + t1447;
  t1449 = -0.64*t1448;
  t1450 = t1422 + t1438 + t1449;
  t1451 = 3.2*t1450;
  t1482 = -0.748*t1433;
  t1483 = -0.4*t1421*t1433;
  t1487 = 0.4*t1486*t1434;
  t1488 = t1419*t1433;
  t1489 = t1486*t1434;
  t1490 = t1488 + t1489;
  t1491 = -0.64*t1490;
  t1492 = t1483 + t1487 + t1491;
  t1493 = 3.2*t1492;
  t1513 = t1362*t1389;
  t1514 = t1299*t1390;
  t1515 = t1513 + t1514;
  t1457 = -0.748*t1456;
  t1461 = -0.4*t1460*t1456;
  t1469 = 0.4*t1467*t1468;
  t1470 = t1458*t1456;
  t1471 = t1467*t1468;
  t1472 = t1470 + t1471;
  t1473 = -0.64*t1472;
  t1474 = t1461 + t1469 + t1473;
  t1475 = 3.2*t1474;
  t1494 = -0.748*t1467;
  t1495 = -0.4*t1460*t1467;
  t1499 = 0.4*t1498*t1468;
  t1500 = t1458*t1467;
  t1501 = t1498*t1468;
  t1502 = t1500 + t1501;
  t1503 = -0.64*t1502;
  t1504 = t1495 + t1499 + t1503;
  t1505 = 3.2*t1504;
  t1534 = t1452*t1389;
  t1535 = t1299*t1454;
  t1536 = t1534 + t1535;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0.03125*(2.88*t1299 + t1418 + t1451 + t1457 + t1475);
  p_output1[7]=0;
  p_output1[8]=0.03125*(-2.88*t1389 + t1482 + t1493 + t1494 + t1505);
  p_output1[9]=0.03125*(t1418 + t1451);
  p_output1[10]=0;
  p_output1[11]=0.03125*(t1482 + t1493);
  p_output1[12]=0.1*(0.4*t1417*t1419 - 0.4*t1434*t1515 - 0.64*(t1443 - 1.*t1434*t1515));
  p_output1[13]=0;
  p_output1[14]=0.1*(0.4*t1419*t1433 - 0.4*t1417*t1434 - 0.64*(-1.*t1417*t1434 + t1488));
  p_output1[15]=0.03125*(t1457 + t1475);
  p_output1[16]=0;
  p_output1[17]=0.03125*(t1494 + t1505);
  p_output1[18]=0.1*(0.4*t1456*t1458 - 0.4*t1468*t1536 - 0.64*(t1470 - 1.*t1468*t1536));
  p_output1[19]=0;
  p_output1[20]=0.1*(0.4*t1458*t1467 - 0.4*t1456*t1468 - 0.64*(-1.*t1456*t1468 + t1500));
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

#include "Jp_COM_mex.hh"

namespace SymExpression
{

void Jp_COM_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
