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

#include <glog/logging.h>

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
}

}  // namespace writer
}  // namespace ecma