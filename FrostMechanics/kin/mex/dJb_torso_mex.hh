/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 15:59:40 GMT-05:00
 */

#ifndef DJB_TORSO_MEX_HH
#define DJB_TORSO_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void dJb_Torso_mex_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJb_Torso_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJb_Torso_mex_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJB_TORSO_MEX_HH
