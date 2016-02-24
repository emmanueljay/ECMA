/** @file */

#include "alg/bricks.h"

#include <glog/logging.h>

#include <queue>
#include <cassert>



/** BRIKS
 * Algorithm function that do all sort of things
 */

namespace ecma {
namespace alg_bricks {

namespace {

/** Used in the BFS of expore_siz_sol_bfs. Add the neighbour to the points to 
 * visit, and add the point to the visited points 
 **/
bool check_neighbour(const Solution& sol,
                     std::set<Point>* visited_points,
                     std::queue<Point>* to_visit,
                     int i,
                     int j) 
{
  if ((i>=0) && (i<sol.data_.m) && (j>=0) && (j<sol.data_.n) && 
      (sol.x_[i][j] == 1) && 
      (visited_points->find(std::make_pair(i,j)) == visited_points->end())) {
    to_visit->push(std::make_pair(i,j));
    visited_points->insert(std::make_pair(i,j));
    return true;
  }
  else{
    return false;
  }
}

} // namespace


/*******************************************************************************
 ********* BRICKS FUNCTIONS
 ******************************************************************************/

int explore_size_sol_bfs(const Solution& sol, Point pt) {
  // Assume that the initial Point is given
  assert(sol.x_[pt.first][pt.second] == 1); //, "You can't explore from a 0");

  VLOG(5) << "Connexity::Exploring points arround " << pt.first << ","<< pt.second;

  // A Hash set to store the visited Points, queue for the Point to visit.
  std::set<Point> visited_points;
  visited_points.insert(pt);
  std::queue<Point> to_visit;
  to_visit.push(pt);
  int size = 0;

  Point tmp_pt;

  // BFS
  while(to_visit.size() != 0) {
    tmp_pt = to_visit.front();
    to_visit.pop();
    
    VLOG(5) << "Connexity::Point " << tmp_pt.first << ","<< tmp_pt.second << " has been visited !";
    size++;

    check_neighbour(sol, &visited_points, &to_visit, tmp_pt.first-1, tmp_pt.second);
    check_neighbour(sol, &visited_points, &to_visit, tmp_pt.first, tmp_pt.second-1);
    check_neighbour(sol, &visited_points, &to_visit, tmp_pt.first+1, tmp_pt.second);
    check_neighbour(sol, &visited_points, &to_visit, tmp_pt.first, tmp_pt.second+1);
  }

  VLOG(5) << "Connexity::We have explored " << size << " points";
  return size;
}

Point find_one(const Solution& sol) {
  for (int i = 0; i < sol.data_.m; ++i)
  for (int j = 0; j < sol.data_.n; ++j)
  {
    if (sol.x_[i][j] == 1)
      return std::make_pair(i,j);
  }
  return(std::make_pair(-1,-1));
}

/** Used in find_border : Fill the set is the point is not selected is sol */
bool add_point_if_not_in_sol(const Solution& sol, std::set<Point>* set_pts,
                             int i, int j) {
  if ((i>=0) && (i<sol.data_.m) && (j>=0) && (j<sol.data_.n) && 
      (sol.x_[i][j] == 0)) { 
    set_pts->insert(std::make_pair(i,j));
    return true;
  }
  else 
    return false;
}

std::set<Point> find_border(const Solution& sol) {
  std::set<Point> border;
  for (int i = 0; i < sol.data_.m; ++i)
  for (int j = 0; j < sol.data_.n; ++j) {
    if (sol.x_[i][j] == 1) {
      add_point_if_not_in_sol(sol, &border, i-1, j);
      add_point_if_not_in_sol(sol, &border, i, j-1);
      add_point_if_not_in_sol(sol, &border, i+1, j);
      add_point_if_not_in_sol(sol, &border, i, j+1);
    }
  } 
  return border;
}


} // namespace alg_bricks
} // namespace ecma

