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

namespace ecma {
namespace helpers {

// Code functions here
std::string to_string(int num) {
  return static_cast<std::ostringstream*>( &(std::ostringstream() << num) )->str();
}

} // namespace helpers
} // namespace ecma