#include <glog/logging.h>

#include "alg/solver.h"
#include "alg/bricks.h"

namespace {

Point max_HaHp(const Data& data, const std::set<Point>& to_check){
  Point max_pt;
  double max_val = 0;
  double current_val;
  for (const Point& current_pt : to_check) {
    current_val = data.Hp[current_pt.first][current_pt.second] *
      data.Cp[current_pt.first][current_pt.second] +
      data.Ha[current_pt.first][current_pt.second] *
      data.Ca[current_pt.first][current_pt.second];
    if (current_val > max_val){
      max_val = current_val;
      max_pt = current_pt;
    } 
  }
  return max_pt;
}

}

bool GreedySolverWithoutConnexity::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_; 
  
  // Finding the best point to be selected first;
  std::set<Point> all;
  for (int i = 0; i < data_.m; ++i)
  for (int j = 0; j < data_.n; ++j) 
      all.insert(std::make_pair(i,j));
  Point best_pt = max_HaHp(data_, all);
  sol_.x_[best_pt.first][best_pt.second] = 1;

  int itt = 0;
  while (itt < data_.n *  data_.m ) {
    // 1. Construct Remove the prevous point from all
    all.erase(best_pt);

    // 2. Find the maximum in the border
    best_pt = max_HaHp(data_, all);

    // 3. Add the point to the solution
    sol_.x_[best_pt.first][best_pt.second] = 1;

    // 4. Check the ratio
    if (sol_.ratio() < 2) {
      sol_.x_[best_pt.first][best_pt.second] = 0;
      break;
    }

    // 5. Sinon, on continue
    itt++;
  }

  // Rendu final
  if (sol_.ratio() >= 2)
    return true;
  else 
    return false;
}