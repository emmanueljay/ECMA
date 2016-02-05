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
  std::vector<std::vector<int> > x;
  int cost_;

  Solution(const Data& data) :x(data.m,std::vector<int>(data.n,0)) {};
  int compute_cost();

};


#endif // SOLUTION_H