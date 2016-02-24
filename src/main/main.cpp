/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.


#include "CMakeParams.h"

#include <time.h>
#include <string>
#include <cstdlib>

#include <glog/logging.h>
#include <gflags/gflags.h>

#include "alg/solver.h"
#include "bo/data.h"
#include "input/instance_reader.h"
#include "utils/helpers.h"

/** FLAGS */
DEFINE_string(solver, "stupid", "Solver id to use : stupid // frontal // greedy // constraint // annealing ... ");
DEFINE_string(instance, "", "Path to instance to solve");
// DEFINE_bool(h, false, "Show help");


int main(int argc, char* argv[])
{
  // STATUS MESSAGE
  std::string usage("This application solve the problem of the ECMA ");
  usage += "project, using different solver. You can chose the solver that you want to ";
  usage += "use with the --solver flag. Usage is defined below. You also have to set a ";
  usage += "instance file with the flag --instance, and you can define an output file.\n";
  usage += "Simple usage : \n\t";
  usage += argv[0];
  usage += " --solver=frontal --instance=path_to_instance";
  gflags::SetUsageMessage(usage);
  
  // VERSION MESSAGE
  gflags::SetVersionString(ecma::helpers::to_string(ECMA_VERSION_MAJOR) + "." + ecma::helpers::to_string(ECMA_VERSION_MINOR) + "."
    + ecma::helpers::to_string(ECMA_VERSION_PATCH) + " -- Build type : " + CMAKE_BUILD_TYPE);

  // Parsing flags
  gflags::ParseCommandLineFlags(&argc, &argv, true); // NoHelp

  // Initialize Google's logging library.
  FLAGS_stderrthreshold = 0;
  FLAGS_log_dir = "../logs";
  google::InitGoogleLogging(argv[0]);


  if (FLAGS_instance == "") {
    LOG(ERROR) << "You have to pass an instance through the --instance flag";
    LOG(FATAL) << "Wrong Parameters";
  }
  else {
    // Démarrage d'un chronomètre
    time_t start_time;
    time(&start_time);

    LOG(INFO) << "Reading Data from instance : " << FLAGS_instance;
    Data data;
    ecma::reader::read_instance(data, FLAGS_instance);
    Solution sol(data);

    double cost;
    bool is_admissible;

    // Solving this instance using "Solver"
    if (FLAGS_solver == "stupid") {
      // Solve via Stupid Solver
      StupidSolver stupid_solver(data);
      LOG(INFO) << stupid_solver.name() << " : " << stupid_solver.description();
      stupid_solver.solve();
      sol.fill_sol(stupid_solver.sol());
    }
    else if (FLAGS_solver == "frontal") {
      // Solve via Frontal Solver
      FrontalSolver frontal_solver(data);
      LOG(INFO) << frontal_solver.name() << " : " << frontal_solver.description();
      frontal_solver.solve();
      sol.fill_sol(frontal_solver.sol());
    }
    else if (FLAGS_solver == "greedy") {
      // Solve via Greedy Solver
      GreedySolver greedy_solver(data);
      LOG(INFO) << greedy_solver.name() << " : " << greedy_solver.description();
      greedy_solver.solve();
      sol.fill_sol(greedy_solver.sol());
    }
    else if (FLAGS_solver == "constraint") {
      // Solve via Constraint Solver
      ConstraintSolver constaint_solver(data);
      LOG(INFO) << constaint_solver.name() << " : " << constaint_solver.description();
      constaint_solver.solve();
      sol.fill_sol(constaint_solver.sol());
    }
    else if (FLAGS_solver == "annealing") {
      // Solve via Annealing Solver
      // GreedySolver greedy_solver(data);
      // if (not(greedy_solver.solve())) LOG(FATAL) << "Greedy solver failed !";
      AnnealingSolver annealing_solver(data);
      LOG(INFO) << annealing_solver.name() << " : " << annealing_solver.description();
      // annealing_solver.sol_ptr()->fill_sol(greedy_solver.sol());
      annealing_solver.solve();
      sol.fill_sol(annealing_solver.sol());
    }
    else {
      LOG(FATAL) << "Wrong solver id, use the --solver tag, with stupid, frontal, or constraint";
    }

    data.print();
    cost = sol.compute_cost();
    is_admissible = sol.ratio() >= 2 && sol.is_connex();
    sol.print();

    // Arrêt et exploitation du chronomètre
    time_t end_time;
    time(&end_time);
    double diff = difftime(end_time, start_time);
    LOG(INFO) << "Temps de calcul:\t" << diff << " seconds";



  }
  return 0;

}