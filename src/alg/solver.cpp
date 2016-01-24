/** @file */

#include "alg/solver.h"

#include <glog/logging.h>

#include <string>

void Solver::print_sol() {
  VLOG(1) << "Displaying solution";
  for (auto line : sol_.x) {
    std::string line_str("");
    for (int elem : line)
      // line_str += std::to_string(elem) + "\t";
    VLOG(1) << line_str;
  }
  return;
}