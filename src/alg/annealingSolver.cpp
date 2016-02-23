/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.

#include "alg/solver.h"

#include <glog/logging.h>
#include <gflags/gflags.h>

DEFINE_int32(maxTime, 20, "Maximal time in second to let the solver run");

bool AnnealingSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_; 
  LOG(INFO) << "The simulation will run for " << FLAGS_maxTime << " seconds"
    << " (change with flag --maxTime=20)"; 










  return false;
}