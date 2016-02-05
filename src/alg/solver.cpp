/** @file */

#include "alg/solver.h"
#include "utils/helpers.h"

#include <glog/logging.h>

#include <string>

void Solver::print_sol() {
  VLOG(1) << "Displaying solution";
  for (auto line : sol_.x_) {
    std::string line_str("");
    for (int elem : line)
      line_str += ecma::helpers::to_string(elem) + " ";
    VLOG(1) << line_str;
  }
  LOG(INFO) << "Cost of solution : " << sol_.compute_cost();
  LOG(INFO) << "Ratio of solution : " << sol_.ratio();
  return;
}