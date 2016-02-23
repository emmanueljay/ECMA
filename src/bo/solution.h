/** @file */

#ifndef SOLUTION_H
#define SOLUTION_H

#include "bo/data.h"

#include <vector>

/**
 * Class Solution
 * 
 */
class Solution {
public:
  std::vector<std::vector<int> > x_;
  const Data& data_;

  Solution(const Data& data) :data_(data), x_(data.m,std::vector<int>(data.n,0)) {};
  
  // This function assume that the data is the same
  void fill_sol(const Solution & sol) {
    x_ = sol.x_;
  }

  int compute_cost() const;
  double ratio() const;
  bool is_connex() const;
};


#endif // SOLUTION_H