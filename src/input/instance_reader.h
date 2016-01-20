/** @file */

#ifndef INSTANCE_READER_H
#define INSTANCE_READER_H

#include <bo/data.h>

#include <string>

/** INSTANCE_READER
 * Reading function for the instances
 */

namespace ecma {
namespace reader {

bool read_instance(Data& data, std::string file_name);

} // namespace reader
} // namespace ecma

#endif // INSTANCE_READER_H