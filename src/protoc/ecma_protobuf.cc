/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.

#include "protoc/ecma_protobuf.h"

#include <time.h> /* time */

#include <glog/logging.h>

using namespace ecma_protoc;

namespace ecma {
namespace protobuf {

namespace {}  // namespace

void add_simulation(ecma_protoc::Results* results, const Solution& sol,
                    int time_s, ecma_protoc::Simu_Solver solver_id) {
  if (not(sol.is_admissible())) return;

  VLOG(3) << "Adding the simulation to the protobuffer";
  Simu* simu = results->add_simu();

  // Simulation informations
  simu->set_instance_name(sol.name_);
  time_t date;
  time(&date);
  int date_int = date;
  simu->set_id_time(date_int);
  simu->set_solver(solver_id);
  simu->set_cost(sol.compute_cost());
  simu->set_time(time_s);

  // Solution detail
  Simu::LineSol* line_sol;
  for (auto line : sol.x_) {
    line_sol = simu->add_x();
    for (int elem : line)    
      line_sol->add_val(elem);
  }
}

}  // namespace protobuf
}  // namespace ecma