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
#include "output/solution_writer.h"
#include "utils/helpers.h"

/** FLAGS */
DEFINE_string(solver, "stupid", "Solver id to use : stupid // frontal // greedy // constraint // annealing ... ");
DEFINE_string(instance, "", "Path to instance to solve");
DEFINE_string(synRes, "../res/synthetic_res_file.csv", "Path to the synthetic result file");
DEFINE_string(logFile, "../logs", "Logging files");
DEFINE_string(solDir, "../solutions/", "Directory where to put solution files");
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
  FLAGS_log_dir = FLAGS_logFile;
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
    std::string description;
    int borne;

    // Computation of the born in any cases.
    GreedySolverWithoutConnexity greedy_solver_without_connexity(data);
    description = greedy_solver_without_connexity.name() + " : " + greedy_solver_without_connexity.description(); 
    LOG(INFO) << description;
    greedy_solver_without_connexity.solve();
    borne = greedy_solver_without_connexity.sol().compute_cost();    

    // Solving this instance using "Solver"
    if (FLAGS_solver == "stupid") {
      // Solve via Stupid Solver
      StupidSolver stupid_solver(data);
      description = stupid_solver.name() + " : " + stupid_solver.description(); 
      LOG(INFO) << description;
      stupid_solver.solve();
      sol.fill_sol(stupid_solver.sol());
    }
    else if (FLAGS_solver == "frontal") {
      // Solve via Frontal Solver
      FrontalSolver frontal_solver(data);
      description = frontal_solver.name() + " : " + frontal_solver.description(); 
      LOG(INFO) << description;
      frontal_solver.solve(borne);
      sol.fill_sol(frontal_solver.sol());
    }
    else if (FLAGS_solver == "warmFrontal") {
      // Solve via greedy Solver
      GreedySolver greedy_solver(data);
      if (not(greedy_solver.solve())) LOG(FATAL) << "Greedy solver failed !";
      
      // Solve via Frontal Solver
      FrontalSolver frontal_solver(data);
      description = frontal_solver.name() + " : " + frontal_solver.description(); 
      LOG(INFO) << description;
      frontal_solver.sol_ptr()->fill_sol(greedy_solver.sol());
      frontal_solver.solve(borne,true);
      sol.fill_sol(frontal_solver.sol());
    }
    else if (FLAGS_solver == "greedy") {
      // Solve via Greedy Solver
      GreedySolver greedy_solver(data);
      description = greedy_solver.name() + " : " + greedy_solver.description(); 
      LOG(INFO) << description;
      greedy_solver.solve();
      sol.fill_sol(greedy_solver.sol());
    }
    else if (FLAGS_solver == "greedyWconnexity") {
      // Solve via Greedy Solver Without connexity
      GreedySolverWithoutConnexity greedy_solver_without_connexity(data);
      description = greedy_solver_without_connexity.name() + " : " + greedy_solver_without_connexity.description(); 
      LOG(INFO) << description;
      greedy_solver_without_connexity.solve();
      sol.fill_sol(greedy_solver_without_connexity.sol());
    }
    else if (FLAGS_solver == "constraint") {
      // Solve via Constraint Solver
      ConstraintSolver constaint_solver(data);
      description = constaint_solver.name() + " : " + constaint_solver.description(); 
      LOG(INFO) << description;
      constaint_solver.solve(borne);
      sol.fill_sol(constaint_solver.sol());
    }
    else if (FLAGS_solver == "annealing") {
      // Solve via Annealing Solver
      // GreedySolver greedy_solver(data);
      // if (not(greedy_solver.solve())) LOG(FATAL) << "Greedy solver failed !";
      AnnealingSolver annealing_solver(data);
      description = annealing_solver.name() + " : " + annealing_solver.description(); 
      LOG(INFO) << description;
      // annealing_solver.sol_ptr()->fill_sol(greedy_solver.sol());
      annealing_solver.solve();
      sol.fill_sol(annealing_solver.sol());
    }
    else if (FLAGS_solver == "annealing1") {
      AnnealingSolver annealing_solver(data);
      description = annealing_solver.name() + " : " + annealing_solver.description(); 
      LOG(INFO) << description;
      Solution* sol_i = annealing_solver.sol_ptr();
      for (int i = 0; i < sol_i->x_.size(); ++i)
      for (int j = 0; j < sol_i->x_[i].size(); ++j)    
        sol_i->x_[i][j] = 1;
      annealing_solver.solve();
      sol.fill_sol(annealing_solver.sol());
    }
    else if (FLAGS_solver == "mix") {
      // Solve via Annealing Solver
      GreedySolver greedy_solver(data);
      if (not(greedy_solver.solve())) LOG(FATAL) << "Greedy solver failed !";
      AnnealingSolver annealing_solver(data);
      description = annealing_solver.name() + " : " + annealing_solver.description(); 
      LOG(INFO) << description;
      annealing_solver.sol_ptr()->fill_sol(greedy_solver.sol());
      annealing_solver.solve();
      sol.fill_sol(annealing_solver.sol());
    }
    else {
      LOG(FATAL) << "Wrong solver id, use the --solver tag, with stupid, frontal, or constraint";
    }

    // Arrêt et exploitation du chronomètre
    time_t end_time;
    time(&end_time);
    double diff = difftime(end_time, start_time);

    // Data exportation
    data.print();
    cost = sol.compute_cost();
    is_admissible = sol.ratio() >= 2 && sol.is_connex();
    sol.print();
    LOG(INFO) << "Temps de calcul:\t" << diff << " seconds";
    LOG(INFO) << "Borne :\t" << borne;

    if (is_admissible) {
      ecma::writer::write_in_synthetic_res_file(
          cost, description, FLAGS_instance, diff, FLAGS_synRes);
      ecma::writer::export_solution(sol, FLAGS_solDir, diff);
    }
    else
      LOG(ERROR) << "The solution is not admissible";
  }
  return 0;

}