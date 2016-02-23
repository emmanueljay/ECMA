/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.

#include "alg/solver.h"

#include <time.h>

#include <glog/logging.h>
#include <gflags/gflags.h>

DEFINE_int32(maxTime, 20, "Maximal time in second to let the solver run");

bool AnnealingSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_; 
  LOG(INFO) << "The simulation will run for " << FLAGS_maxTime << " seconds"
    << " (change with flag --maxTime=20)"; 


  // At this point, the solution inside the current sol should be admissible
  // We create a temporary solution with the same data.
  Solution temp_sol(data_);
  temp_sol.fill_sol(sol_);

  // Time count
  time_t start_time,current_time;
  time(&start_time);
  double diff = 0;

  // Annealing Iterations
  while (diff < FLAGS_maxTime) {
    // 1. Select a point of the selected point, or the border. If the point is 
    // inside the convex selected point, the idea is to remove the point. If the
    // point is in the border, the idea is to add it to the solution.
    
    // 2. In the case of the selected point is inside the sol, we check the
    // connexity of the solution once removed.  

    // 3. We add/remove the point, and we compute the new cost.
    
    // 4. We choose if we keep the change or not.

    time(&current_time);
    diff = difftime(current_time, start_time);
  }




  return false;
}