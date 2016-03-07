/** @file */

#ifndef CONNEXIFICATION_H
#define CONNEXIFICATION_H

#include "bo/solution.h"

#include <utility>
#include <set>

typedef std::pair<int,int> Point;
typedef std::vector<std::set<Point> > Composantes;

/** CONNEXIFICATION
 * Algorithm function that try to connexify a solution
 */

namespace ecma {
namespace connexification {

// Transform the solution into a connex one
bool connexify (Solution* sol);

} // namespace connexification
} // namespace ecma

#endif // CONNEXIFICATION_H