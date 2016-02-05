/** @file */

#ifndef BRICKS_H
#define BRICKS_H

#include "bo/solution.h"

#include <utility>

typedef std::pair<int,int> Point;

/** BRIKS
 * Algorithm function that do all sort of things
 */

namespace ecma {
namespace alg_bricks {

// Explore the solution starting from a point suposedly selected
// assertion sol.x[i][j] == 1
int explore_size_sol_bfs(const Solution& sol, Point pt) ;

// Find the coordinates of a 1 in the solution
Point find_one(const Solution& sol);


} // namespace alg_bricks
} // namespace ecma

#endif // BRICKS_H