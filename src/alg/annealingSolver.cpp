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
#include <stdlib.h>     /* srand, rand */
#include <cmath>      /* exp */

#include <glog/logging.h>
#include <gflags/gflags.h>

#include "alg/bricks.h"


DEFINE_int32(maxTime, 20, "AS::Maximal time in second to let the solver run");
DEFINE_int32(ratio, 2, "AS::Ratio on how to chose removed points from added points");
DEFINE_int32(variant, 0, "AS::Variant of the annealing solver");
DEFINE_double(tempInit, 10000.0, "AS::Initial temperature");
DEFINE_double(lambda, 0.99, "AS::Lambda : for a decroissance of temp T <- T*lambda");
DEFINE_int64(sizePalier, 20, "AS::Size of constant temperature pallier");

namespace {

/** Select a point inside the convex selected points or in the border */
bool select_point(const Solution& sol, Point* point) {
  // Compute border
  std::set<Point> border = ecma::alg_bricks::find_border(sol);
  
  // Compute inside of solution
  std::set<Point> inside;
  for (int i = 0; i < sol.data_.m; ++i)
  for (int j = 0; j < sol.data_.n; ++j) {
    if (sol.x_[i][j] == 1) inside.insert(std::make_pair(i,j));
  }

  // Chose if remove or add an element : 1 / ratio
  bool is_in_border;
  is_in_border = (rand() % FLAGS_ratio) > 0;

  int size = sol.compute_cost();
  if (size == 1)
    is_in_border = true;
  else if (size == sol.data_.m*sol.data_.n)
    is_in_border = false;

  // Randomly select a point in the chosen set
  int pt_id;
  std::set<Point>::iterator pt_it;

  if (is_in_border) {
    pt_id = rand() % border.size();
    pt_it = border.begin();
  }
  else {
    pt_id = rand() % inside.size();
    pt_it = inside.begin();
  }
  while (pt_id > 0) {
    pt_it++; pt_id--;
  }

  // Store the resulting point inside the transition point.
  *point = *pt_it;

  return is_in_border;
}

/** Get the energy of one solution */
double get_energy(const Solution& sol, int version = 0) {
  double energy = 0.0; // Valeur de l'energie
  double ratio = 0.0; // Valeur du ratio
  switch (version) {
    case 0 : {
      // First version of the implementation : using the cost of the solution
      energy = -sol.compute_cost();
      ratio = sol.ratio();
      if (ratio < 2) energy += sol.data_.n*sol.data_.n*1000* (1+2-ratio);
      break;
    }
    case 1 : {
      LOG(ERROR) << "Not emplemented";
      break;
    }
  }
  return energy;
}

/** Get the temperature of the solution */
double get_next_temperature(double old_temp, double lambda, int version) {
  double temperature = 0.0;
  switch (version) {
    case 0 : {
      // First version of the implementation : using Tnext = lambda * Told
      temperature = old_temp * lambda;
      break;
    }
    case 1 : {
      LOG(ERROR) << "Not emplemented";
      break;
    }
  }
  return temperature;
}

} // namepace

bool AnnealingSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_; 
  LOG(INFO) << "The simulation will run for " << FLAGS_maxTime << " seconds"
    << " (change with flag --maxTime=20)"; 

  // 0. (May be changed) Starting from a sol with one 1
  double cp_val = 0.0;
  int i_init,j_init;
  while (cp_val == 0) {
    i_init = rand() % sol_.data_.m;
    j_init = rand() % sol_.data_.n;
    cp_val = data_.Cp[i_init][j_init];
  }
  sol_.x_[i_init][j_init] = 1;
  LOG(INFO) << "Starting from point " << i_init << "," << j_init;

  // At this point, the solution inside the current sol should be admissible
  // We create a temporary solution with the same data.
  Solution best_sol(data_);
  best_sol.fill_sol(sol_);

  // Time count
  time_t start_time,current_time;
  time(&start_time);
  double diff = 0;

  // Temporary data for annealing solver
  double taux_acceptation_min = 0.000001;
  double taux_acceptation = 1.0;
  double nb_accepted = 0;
  double temperature = FLAGS_tempInit;   // Initial temperature (default)
  double energy = get_energy(sol_,FLAGS_variant);
  double energy_max = energy;  // Energy maximum of acceptation
  double energy_neighbour;
  Point pt;
  bool is_in_border, accept_change;
  int k = 0;
  std::string status("");

  // Annealing Iterations
  while (diff < FLAGS_maxTime && temperature > 0.0000000001) {
    
    // 1. Select a point of the selected point, or the border. If the point is 
    // inside the convex selected point, the idea is to remove the point. If the
    // point is in the border, the idea is to add it to the solution.
    
    is_in_border = select_point(sol_, &pt);
    VLOG_IF(4, k < 20) << "Considering point " << pt.first << "," << pt.second
      << " -- Value is_in_border = " << is_in_border;

    // 2. In the case of the selected point is inside the sol, we check the
    // connexity of the solution once removed.  
    // 3. We add/remove the point, and we compute the new cost.
    if (is_in_border) 
      if (data_.Cp[pt.first][pt.second] == 0.0) {
        time(&current_time);
        diff = difftime(current_time, start_time);
        continue;        
      }
      else
        sol_.x_[pt.first][pt.second] = 1;
    else {
      sol_.x_[pt.first][pt.second] = 0;
      if (not(sol_.is_connex())) {
        sol_.x_[pt.first][pt.second] = 1;
        time(&current_time);
        diff = difftime(current_time, start_time);
        continue;
      }
    }

    // 4. Updating Temperature & Energy
    energy_neighbour = get_energy(sol_,FLAGS_variant);
    if (k % FLAGS_sizePalier == 0)
      temperature = get_next_temperature(temperature,FLAGS_lambda,FLAGS_variant);
    VLOG_IF(4, k < 20) << "Temperature value " << temperature;

    // 5. We choose if we keep the change or not.
    if (energy_neighbour < energy ||
        ((double) rand() / (RAND_MAX)) < exp((energy - energy_neighbour)/temperature)) 
    {
      VLOG_IF(4, k < 20) << "AnnealingSolver:: New solution found, energy = "<< energy_neighbour;
      if (energy_neighbour < energy)
        status += "-"; // Better
      else 
        status += "+"; // Metropolis

      nb_accepted++;

      energy = energy_neighbour;

      // Checking if the solution is better
      if (energy < energy_max) {
        // We have a better solution 
        VLOG(3) << status;
        status = "";        
        VLOG(2) << "AnnealingSolver:: Better sol found : " 
          << energy << " Temp : " << temperature;
        best_sol.fill_sol(sol_);
        energy_max = energy;
      }
      accept_change = true;
    }
    else { // neighbour rejected 
      status += ".";
      accept_change = false;
    }

    // 6. Accept change
    if(not(accept_change))
      sol_.x_[pt.first][pt.second] = 1 - sol_.x_[pt.first][pt.second];
    
    // 7. Update time
    time(&current_time);
    diff = difftime(current_time, start_time);
    k++;

    // 8. Update status
    if (status.size() >= 80) {
      VLOG(3) << status << " Temp : " << temperature << "\tE : "<< energy;
      status = "";         
    }
  }
  VLOG(3) << status;

  // Giving back the best sol
  sol_.fill_sol(best_sol);

  // Rendu final
  if (sol_.ratio() >= 2)
    return true;
  else 
    return false;}