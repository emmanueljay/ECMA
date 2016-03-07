/** @file */

// Include Order
// 1.  dir2/foo2.h.
// 2.  C system files.
// 3.  C++ system files.
// 4.  Other libraries' .h files.
// 5.  Your project's .h files.

#include "output/solution_writer.h"

#include <time.h> /* time */

#include <iostream>
#include <fstream>
#include <string>

#include <glog/logging.h>
#include <gflags/gflags.h>

#include "utils/helpers.h"

DECLARE_string(solver);

using namespace std;

namespace ecma {
namespace writer {

namespace {}  // namespace

void write_in_synthetic_res_file(double cost, std::string solver_name,
                                 std::string instance_name, double time_s,
                                 std::string path_name) {
  time_t date;
  time(&date);

  ofstream temp_file;
  string file_name(path_name+ "synthetic_res_file.csv");
  temp_file.open(file_name.c_str(), ios::app);
  temp_file << date << "," << instance_name.substr(instance_name.find("projet")) << "," << cost << "," << time_s 
            << "," << FLAGS_solver << "\n"; 
  temp_file.close();

  string solv_name(path_name+FLAGS_solver+".csv");
  temp_file.open(solv_name.c_str(), ios::app);
  temp_file << date << "," << instance_name.substr(instance_name.find("projet")) << "," << cost << "," << time_s 
            << "," << FLAGS_solver << "\n"; 
  temp_file.close();
}

void export_solution(const Solution& sol, std::string directory_path, double time_s) {
  if (not(sol.is_admissible())) return;

  ofstream temp_file;
  string file_name(directory_path+sol.name_+"-"+ecma::helpers::to_string(sol.compute_cost())+".sol");
  temp_file.open(file_name.c_str(), ios::trunc | ios::out);
  temp_file << "Solution file for instance " << sol.name_ << "\n";
  temp_file << "Cost of the solution " << sol.compute_cost() << "\n";
  temp_file << "Time of the simulation " << time_s << " seconds \n";
  temp_file << "Ratio of the solution " << sol.ratio() << "\n";
  temp_file << "Detail of the solution :" << "\n";
  for (auto line : sol.x_) {
    for (int elem : line)
      temp_file << elem << " ";
    temp_file << "\n";
  }
  temp_file.close();
}

}  // namespace writer
}  // namespace ecma