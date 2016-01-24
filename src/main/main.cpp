/** @file */

// Include Order
// 1. .h file corresponding to this cpp file (if applicable)
// 2. headers from the same component,
// 3. headers from other components,
// 4. system headers.

#include "CMakeParams.h"
#include "alg/solver.h"
#include "bo/data.h"
#include "input/instance_reader.h"

#include <glog/logging.h>
#include <gflags/gflags.h>

#include <string>


/** FLAGS */
DEFINE_string(solver, "stupid", "Solver id to use : stupid // frontal // constraint ... ");
DEFINE_string(instance, "", "Path to instance to solve");
// DEFINE_bool(h, false, "Show help");
// DECLARE_bool(help);
// DECLARE_bool(helpshort);

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
  gflags::SetVersionString(std::to_string(ECMA_VERSION_MAJOR) + "." + std::to_string(ECMA_VERSION_MINOR) + "."
    + std::to_string(ECMA_VERSION_PATCH) + " -- Build type : " + CMAKE_BUILD_TYPE);

  // Parsing flags
  gflags::ParseCommandLineFlags(&argc, &argv, true); // NoHelp

  // if (FLAGS_help || FLAGS_h) {
  //   FLAGS_help = false;
  //   FLAGS_helpshort = true;
  // }

  // gflags::HandleCommandLineHelpFlags();

  // Initialize Google's logging library.
  FLAGS_stderrthreshold = 0;
  FLAGS_log_dir = "../logs";
  google::InitGoogleLogging(argv[0]);

  /** Log Examples */

  // // Debug log
  // VLOG(1) << "I'm printed when you run the program with --v=1 or higher";
  // VLOG(2) << "I'm printed when you run the program with --v=2 or higher";
  // VLOG(3) << "I'm printed when you run the program with --v=3 or higher";

  // // Common log
  // LOG(INFO)
  //   << "Using CMake Build in " << CMAKE_BUILD_TYPE
  //   << " mode -- Rasta IRP Version : "
  //   << ECMA_VERSION_MAJOR << "."
  //   << ECMA_VERSION_MINOR << "."
  //   << ECMA_VERSION_PATCH;
  // LOG(ERROR)
  //   << "Using CMake Build in " << CMAKE_BUILD_TYPE
  //   << " mode -- Rasta IRP Version : "
  //   << ECMA_VERSION_MAJOR << "."
  //   << ECMA_VERSION_MINOR << "."
  //   << ECMA_VERSION_PATCH;
  // LOG(WARNING)
  //   << "Using CMake Build in " << CMAKE_BUILD_TYPE
  //   << " mode -- Rasta IRP Version : "
  //   << ECMA_VERSION_MAJOR << "."
  //   << ECMA_VERSION_MINOR << "."
  //   << ECMA_VERSION_PATCH;

  if (FLAGS_instance == "") {
    LOG(ERROR) << "You have to pass an instance through the --instance flag";
    LOG(FATAL) << "Wrong Parameters";
  }
  else {
    LOG(INFO) << "Reading Data from instance : " << FLAGS_instance;
    Data data;
    ecma::reader::read_instance(data, FLAGS_instance);

    // Solving this instance using "Solver"
    if (FLAGS_solver == "stupid") {
      // Solve via Stupid Solver
      LOG(INFO) << "Solving using Stupid Solver";
      StupidSolver stupid_solver(data);
      stupid_solver.solve();
    }
    else if (FLAGS_solver == "frontal") {
      // Solve via Frontal Solver
      LOG(INFO) << "Solving using Frontal Solver (CPLEX)";
      FrontalSolver frontal_solver(data);
      frontal_solver.solve();
    }
    else if (FLAGS_solver == "constraint") {
      // Solve via Constraint Solver
      LOG(INFO) << "Solving using Constraint Solver (CP)";
      ConstraintSolver constaint_solver(data);
      constaint_solver.solve();
    }
    else {
      LOG(FATAL) << "Wrong solver id, use the --solver tag, with stupid, frontal, or constraint";
    }

  }
  return 0;

}