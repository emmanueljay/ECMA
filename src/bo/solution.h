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
  int cost_;

  Solution(const Data& data) :data_(data), x_(data.m,std::vector<int>(data.n,0)) {};
  
  int compute_cost();
  double ratio();
  bool is_connex();
};


#endif // SOLUTION_H