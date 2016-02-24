/** @file */

#ifndef BRICKS_H
#define BRICKS_H

#include "bo/solution.h"

#include <utility>
#include <set>

typedef std::pair<int,int> Point;

/** BRIKS
 * Algorithm function that do all sort of things
 */

namespace ecma {
namespace alg_bricks {

// Explore the solution starting from a point suposedly selected
// assertion sol.x[i][j] == 1
int explore_size_sol_bfs(const Solution& sol, Point pt);
                  //     std::set<Point> to_reach = {"John", "Kelly", "Amanda", "Kim"}) ;

// Find the coordinates of a 1 in the solution
Point find_one(const Solution& sol);

/** Used in find_border : Fill the set is the point is not selected is sol */
bool add_point_if_not_in_sol(const Solution& sol, std::set<Point>* set_pts,
                             int i, int j);

// Find The border of the solution
std::set<Point> find_border(const Solution& sol);

} // namespace alg_bricks
} // namespace ecma

#endif // BRICKS_H