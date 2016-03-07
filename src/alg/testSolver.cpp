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
#include <vector>

#include <glog/logging.h>
#include <gflags/gflags.h>

#include "alg/connexification.h"
#include "alg/bricks.h"

// DEFINE_int32(maxTime, 20, "AS::Maximal time in second to let the solver run");
// DEFINE_int32(ratio, 15,
//              "AS::Ratio on how to chose removed points from added points");
// DEFINE_int32(variant, 0, "AS::Variant of the annealing solver");
// DEFINE_double(tempInit, 10000.0, "AS::Initial temperature");
DEFINE_double(limit, 1.0, "Limit where the first greedy select the cases");
// DEFINE_int64(sizePalier, 20, "AS::Size of constant temperature pallier");

namespace {

Point max_HaHp(const Data& data, const std::set<Point>& to_check){
  Point max_pt;
  double max_val = 0;
  double current_val;
  for (const Point& current_pt : to_check) {
    if (data.Ca[current_pt.first][current_pt.second]>0) {
      current_val = data.Hp[current_pt.first][current_pt.second] *
        data.Cp[current_pt.first][current_pt.second] +
        data.Ha[current_pt.first][current_pt.second] *
        data.Ca[current_pt.first][current_pt.second];
      if (current_val > max_val){
        max_val = current_val;
        max_pt = current_pt;
      } 
    }
  }
  return max_pt;
}

}  // namespace

bool TestSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_;
  // LOG(INFO) << "The simulation will run for " << FLAGS_maxTime << " seconds"
  //           << " (change with flag --maxTime=20)";

  // Seed initialisation
  srand(time(NULL));

  /***
   * STEP 0 : Initialisation of data
   **/
  std::vector<std::vector<bool> > fixed;
  for (int i = 0; i < data_.m; ++i) {
    fixed.push_back(std::vector<bool>());
    for (int j = 0; j < data_.n; ++j) {
      fixed[i].push_back(false);
    }
  }  

  /***
    * STEP 1 : We select the cases that will improve the ratio
   **/
  // Finding the best point to be selected first;
  std::set<Point> all;
  for (int i = 0; i < data_.m; ++i)
  for (int j = 0; j < data_.n; ++j) 
      all.insert(std::make_pair(i,j));
  Point best_pt = max_HaHp(data_, all);
  double value;
  sol_.x_[best_pt.first][best_pt.second] = 1;
  fixed[best_pt.first][best_pt.second] = true;

  int itt = 0;
  while (itt < data_.n *  data_.m ) {
    // 1. Construct Remove the prevous point from all
    all.erase(best_pt);

    // 2. Find the maximum in the border
    best_pt = max_HaHp(data_, all);

    value = data_.Ha[best_pt.first][best_pt.second] + data_.Hp[best_pt.first][best_pt.second];
    VLOG(3) << "Value of point :" << value;
    // 2'. If the point is no use, we stop there
    if (value < FLAGS_limit)
      break;

    // 3. Add the point to the solution
    sol_.x_[best_pt.first][best_pt.second] = 1;
    fixed[best_pt.first][best_pt.second] = true;

    // // 4. Check the ratio
    // if (sol_.ratio() < 2) {
    //   LOG(FATAL) << "Problem with the idea";
    //   // sol_.x_[best_pt.first][best_pt.second] = 0;
    //   break;
    // }

    // 5. Sinon, on continue
    itt++;
  }

  /**
   * STEP 2 : We connexify the solution
   */
  
  ecma::connexification::connexify(&sol_);

  

  // Rendu final
  if (sol_.ratio() >= 2)
    return true;
  else
    return false;
}