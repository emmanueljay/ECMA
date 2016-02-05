/** @file */

#include "bo/solution.h"

#include <glog/logging.h>


int Solution::compute_cost() {
  int sum = 0;
  for (const std::vector<int>& list : x)
  for (int elem : list) 
    sum += elem;
  
  cost_ = sum;
  VLOG(5) << "Cost of solution is " << sum;
  return sum;
} 