#include "alg/solver.h"

#include <glog/logging.h>

// Define std before
using namespace std;
#include <ilcplex/ilocplex.h>
#include <ilcp/cp.h>

bool ConstraintSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 
  LOG(INFO) << "We did not find a solution !";
  return false;
}