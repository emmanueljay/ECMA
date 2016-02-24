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

#include "utils/helpers.h"

using namespace std;

namespace ecma {
namespace writer {

namespace {}  // namespace

void write_in_synthetic_res_file(double cost, std::string solver_name,
                                 std::string instance_name, double time_s,
                                 std::string file_name) {
  time_t date;
  time(&date);

  ofstream temp_file;
  temp_file.open(file_name.c_str(), ios::app);
  temp_file << date << ";" << instance_name << ";" << cost << ";" << time_s 
            << ";" << solver_name << ";\n"; 
  temp_file.close();
}

void export_solution(const Solution& sol, std::string directory_path) {
  if (not(sol.is_admissible())) return;

  ofstream temp_file;
  string file_name(directory_path+sol.name_+"-"+ecma::helpers::to_string(sol.compute_cost())+".sol");
  temp_file.open(file_name.c_str(), ios::trunc | ios::out);
  temp_file << "Solution file for instance " << sol.name_ << "\n";
  temp_file << "Cost of the solution " << sol.compute_cost() << "\n";
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