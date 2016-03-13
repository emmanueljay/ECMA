/** @file */

// Include Order
// 1. .h file corresponding to this cpp file (if applicable)
// 2. headers from the same component,
// 3. headers from other components,
// 4. system headers.

#include "utils/helpers.h"

#include <glog/logging.h>

#include <iomanip>
#include <locale>
#include <sstream>
#include <algorithm>

namespace ecma {
namespace helpers {

// Code functions here
std::string to_string(int num) {
  return static_cast<std::ostringstream*>( &(std::ostringstream() << num) )->str();
}

double max_mat(const std::vector<std::vector<double> >& table) {
  double max = table[0][0];
  for (const std::vector<double>& line : table)
    max = std::max(max, *(std::max_element(line.begin(),line.end())));
  return max;
}

void print_table(const std::vector<std::vector<double> >& table, double max) {
  for (const std::vector<double>& line : table) {
    std::string tmp("");
    for (double elem : line) {
      if (elem < 0.25 * max) {
        tmp += ".";
      }
      else if (elem < 0.5 * max) {
        tmp += "-";
      }
      else if (elem < 0.75 * max) {
        tmp += "+";
      }
      else if (elem >= 0.75 * max) {
        tmp += "*";
      }
    }
    VLOG(1) << tmp;
  }
}


} // namespace helpers
} // namespace ecma