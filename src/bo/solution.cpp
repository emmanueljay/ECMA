/** @file */

#include "bo/solution.h"

#include <string>

#include <glog/logging.h>

#include "alg/bricks.h"
#include "utils/helpers.h"



int Solution::compute_cost() const {
  int sum = 0;
  for (const std::vector<int>& list : x_)
  for (int elem : list) 
    sum += elem;
  
  VLOG(5) << "Cost of solution is " << sum;
  return sum;
} 

double Solution::ratio() const {
  double ratio = 0; // Final value
  double num_p = 0;   // Numerator P
  double denom_p = 0; // Denominateur P
  double num_a = 0;   // Numerator A
  double denom_a = 0; // Denominateur A

  // Computation of ratio
  for (int i = 0; i < x_.size(); ++i)
  for (int j = 0; j < x_[i].size(); ++j) {
    num_p += data_.Hp[i][j]*data_.Cp[i][j]*x_[i][j];
    denom_p += data_.Cp[i][j]*x_[i][j];
    num_a += data_.Ha[i][j]*data_.Ca[i][j]*x_[i][j];
    denom_a += data_.Ca[i][j]*x_[i][j];
  }

  if (denom_p != 0.0)
    ratio += num_p/denom_p;
  if (denom_a != 0.0)
    ratio += num_a/denom_a;

  VLOG(5) << "Ratio of solution is " << ratio;
  return ratio;
}

bool Solution::is_connex() const{

  int cost = compute_cost();
  if (cost == 0) return true;

  // Finding a position to 1
  Point pt = ecma::alg_bricks::find_one(*this);

  // Exploring around this point
  int size = ecma::alg_bricks::explore_size_sol_bfs(*this, pt);

  return (size == cost);
}


void Solution::print(int tag) const{
  VLOG(tag) << "Displaying solution";
  for (auto line : x_) {
    std::string line_str("");
    for (int elem : line)
      line_str += ecma::helpers::to_string(elem);// + " ";
    VLOG(tag) << line_str;
  }
  VLOG(tag) << "Cost of solution : " << compute_cost();
  VLOG(tag) << "Ratio of solution : " << ratio();
  if (is_connex()) VLOG(tag) << "The solution is connexe";
  else VLOG(tag) << "The solution is not connexe";
  return;
}
