/** @file */

#ifndef ECMA_PROTOBUF_H
#define ECMA_PROTOBUF_H

#include "protoc/results_format.pb.h"

#include "bo/solution.h"

/** SOLUTION_WRITER
 * Reading function for the instances
 */

namespace ecma {
namespace protobuf {

void add_simulation(ecma_protoc::Results* results, const Solution& sol,
                    int time_s, ecma_protoc::Simu_Solver solver_id);

} // namespace protobuf
} // namespace ecma

#endif // ECMA_PROTOBUF_H