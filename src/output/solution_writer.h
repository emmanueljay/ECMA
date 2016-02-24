/** @file */

#ifndef SOLUTION_WRITER_H
#define SOLUTION_WRITER_H

#include <string>

#include "bo/solution.h"

/** SOLUTION_WRITER
 * Reading function for the instances
 */

namespace ecma {
namespace writer {

void write_in_synthetic_res_file(double cost, std::string solver_name,
                                 std::string instance_name, double time_s,
                                 std::string file_name);

void export_solution(const Solution& sol, std::string directory_path, double time_s);

} // namespace writer
} // namespace ecma

#endif // SOLUTION_WRITER_H