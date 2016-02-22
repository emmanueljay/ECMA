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
#include "utils/helpers.h"

// Protocol Buffer file 
#include "protoc/results_format.pb.h"

#include <glog/logging.h>
#include <gflags/gflags.h>

#include <string>
#include <cstdlib>
#include <fstream>

/** FLAGS */
DEFINE_string(solver, "stupid", "Solver id to use : stupid // frontal // greedy // constraint // annealing ... ");
DEFINE_string(instance, "", "Path to instance to solve");

// Protocol Buffer
DEFINE_string(protobuf, "../res/results_protocol_buffer", "Path to instance to solve");

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


  /**** Protocol Buffer management */
  
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ecma_protoc::Results results;

  {
    // Read the existing address book.
    std::fstream input_pb(std::string(FLAGS_protobuf).c_str(), std::ios::in | std::ios::binary);
    if (!input_pb) {
      LOG(INFO) << FLAGS_protobuf << ": File not found.  Creating a new file.";
    } else if (!results.ParseFromIstream(&input_pb)) {
      LOG(ERROR) << "Failed to parse address book.";
      return -1;
    }
  }

  

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
      data.print();
      stupid_solver.print_sol();
    }
    else if (FLAGS_solver == "frontal") {
      // Solve via Frontal Solver
      LOG(INFO) << "Solving using Frontal Solver (CPLEX)";
      FrontalSolver frontal_solver(data);
      frontal_solver.solve();
      data.print();
      frontal_solver.print_sol();
    }
    else if (FLAGS_solver == "greedy") {
      // Solve via Greedy Solver
      LOG(INFO) << "Solving using Greedy Solver (CPLEX)";
      GreedySolver greedy_solver(data);
      greedy_solver.solve();
      data.print();
      greedy_solver.print_sol();
    }
    else if (FLAGS_solver == "constraint") {
      // Solve via Constraint Solver
      LOG(INFO) << "Solving using Constraint Solver (CP)";
      ConstraintSolver constaint_solver(data);
      constaint_solver.solve();
      data.print();
      constaint_solver.print_sol();
    }
    else if (FLAGS_solver == "annealing") {
      // Solve via Annealing Solver
      LOG(INFO) << "Solving using Annealing Solver (A)";
      AnnealingSolver annealing_solver(data);
      annealing_solver.solve();
      data.print();
      annealing_solver.print_sol();
    }
    else {
      LOG(FATAL) << "Wrong solver id, use the --solver tag, with stupid, frontal, or constraint";
    }

  }


  /*** Protocol buffer management */
  {
    // Write the new address book back to disk.
    std::fstream output_pb(std::string(FLAGS_protobuf).c_str(), std::ios::out | std::ios::trunc | std::ios::binary);
    if (!results.SerializeToOstream(&output_pb)) {
      LOG(ERROR) << "Failed to write address book.";
      return -1;
    }
  }

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;

}