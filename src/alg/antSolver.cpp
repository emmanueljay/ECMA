/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.

#include "alg/solver.h"

#include <time.h>
#include <set>
#include <stdlib.h> /* srand, rand */
#include <cmath>    /* exp */

#include <glog/logging.h>
#include <gflags/gflags.h>

#include "alg/bricks.h"

// DEFINE_int32(maxTime, 20, "AS::Maximal time in second to let the solver run");
// DEFINE_int32(ratio, 15,
//              "AS::Ratio on how to chose removed points from added points");
// DEFINE_int32(variant, 0, "AS::Variant of the annealing solver");
// DEFINE_double(tempInit, 10000.0, "AS::Initial temperature");
// DEFINE_double(lambda, 0.99,
//               "AS::Lambda : for a decroissance of temp T <- T*lambda");
// DEFINE_int64(sizePalier, 20, "AS::Size of constant temperature pallier");

namespace {


}  // namespace

bool AntSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_;
  // LOG(INFO) << "The simulation will run for " << FLAGS_maxTime << " seconds"
  //           << " (change with flag --maxTime=20)";

  // Seed initialisation
  srand(time(NULL));

  
 



  // Rendu final
  if (sol_.ratio() >= 2)
    return true;
  else
    return false;
}