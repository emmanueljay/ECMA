#include "alg/solver.h"

#include <glog/logging.h>

//#include <ilcplex/ilocplex.h>
//#include <ilcp/cp.h>

bool FrontalSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 
  LOG(INFO) << data_.n;
  LOG(INFO) << "We did not find a solution !";
  return false;
}