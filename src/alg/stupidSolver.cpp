#include "alg/solver.h"

#include <glog/logging.h>


bool StupidSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 

  LOG(INFO) << "We did not find a solution !";
  return false;
}