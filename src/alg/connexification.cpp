/** @file */

#include "alg/connexification.h"

#include <glog/logging.h>

#include <queue>
#include <cassert>
#include <map>
#include <algorithm>

#include "alg/bricks.h"




/** CONNEXIFICATION
 * Algorithm function that connexify a solution
 */

namespace ecma {
namespace connexification {

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

/** Find a wich composant hold the point, return -1 if not found */
int find_in_composantes(const Point& pt, const Composantes& comp) {
  for (int i = 0; i < comp.size(); ++i)
  {
    if (comp[i].find(pt) != comp[i].end()) return i;
  }
  return -1;
}

/** Add a composant from a starting point */
bool add_composants(const Solution& sol, Composantes* composantes, const Point& pt) {
  // Assume that the initial Point is given
  assert(sol.x_[pt.first][pt.second] == 1); //, "You can't explore from a 0");

  VLOG(5) << "Connexity::Exploring points arround " << pt.first << ","<< pt.second;

  // A Hash set to store the visited Points, queue for the Point to visit.
  composantes->push_back(std::set<Point>());
  std::set<Point>& visited_points = composantes->at(composantes->size()-1);

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
  return true;
}

std::pair<int,Point> intersection(const std::set<Point>& set_expanded, const Composantes& comp) {
  for (int i = 0; i < comp.size()-1; ++i)
  {
    std::set<Point> intersect;
    std::set_intersection(comp[i].begin(),comp[i].end(),set_expanded.begin(),set_expanded.end(),
                     std::inserter(intersect,intersect.begin())); 
    if (intersect.size()>0) {
      return (std::make_pair(i,*(intersect.begin())));
    }
  }
  return std::make_pair(-1,std::make_pair(-1,-1));
}

bool add_point_if_not_in_set(const Solution& sol, const std::set<Point>& set_pts,
                             std::set<Point>* tmp,
                             const Point& father, const Point& son,
                             std::map<Point,Point>* ancestors) {
  if ((son.first>=0) && (son.first<sol.data_.m) && (son.second>=0) && (son.second<sol.data_.n) 
      && (sol.data_.Cp[son.first][son.second]>0)
      && (set_pts.find(son) == set_pts.end())) { // Son not in set
    tmp->insert(son);
    (*ancestors)[son] = father;
    return true;
  }
  else 
    return false;
}

void expand(const Solution& sol, std::set<Point>* set, std::map<Point,Point>* ancestors) {
  std::set<Point> tmp;
  for (const Point& pt : *set) {
    add_point_if_not_in_set(sol, *set, &tmp, pt, std::make_pair(pt.first-1, pt.second) , ancestors);
    add_point_if_not_in_set(sol, *set, &tmp, pt, std::make_pair(pt.first,   pt.second-1) , ancestors);
    add_point_if_not_in_set(sol, *set, &tmp, pt, std::make_pair(pt.first+1, pt.second) , ancestors);
    add_point_if_not_in_set(sol, *set, &tmp, pt, std::make_pair(pt.first,   pt.second+1) , ancestors);
  } 
  set->insert(tmp.begin(), tmp.end());
  return;
}

} // namespace


/*******************************************************************************
 ********* CONNEXIFY FUNCTIONS
 ******************************************************************************/

bool connexify (Solution* sol) {
  /** 0. Define Data structure */
  Composantes composantes; // Vector of set of point that will store the composants
  Point father, son;
  /** 1. Find connex composants */
  VLOG(3) << "Finding connex composantes";
  for (int i = 0; i < sol->data_.m; ++i)
  for (int j = 0; j < sol->data_.n; ++j) {
    if (sol->x_[i][j] == 1 
        && find_in_composantes(std::make_pair(i,j), composantes) == -1) {
      Point starting_point(i,j);
      if (not(add_composants(*sol, &composantes, starting_point)))
        LOG(FATAL) << "We failed at adding composantes";
    }
  }
  // Debug
  for (int i = 0; i < composantes.size(); ++i)
    VLOG(3) << "La composante " << i << " a " << composantes[i].size() << " éléments";
  

  /** 2. Reduce the number of composants */
  VLOG(3) << "Reducing the number of composants";
  while (composantes.size() > 1) {
    // We select a composant (here the last)
    int comp_id = composantes.size()-1;
    VLOG(3) << "Removing composant number " << comp_id;

    // We expand the set artificially, and we try to find an intersection with
    // the others. We first copy the set inside a working set
    std::set<Point> set_expanded = composantes[comp_id];
    std::map<Point,Point> ancestors;
    std::pair<int,Point> bridge(-1,std::make_pair(-1,-1));

    VLOG(3) << "Expanding the solution";
    while (bridge.first == -1) { // No intersection
      expand(*sol, &set_expanded, &ancestors);
      bridge = intersection(set_expanded, composantes);
    }

    VLOG(3) << "Reconstructing the solution";
    // We construct a path inside the solution, and we update the composants.
    son = bridge.second;
    father = ancestors[son];

    while (composantes[comp_id].find(father) == composantes[comp_id].end()) {
      // We add the father
      composantes[bridge.first].insert(father);
      sol->x_[father.first][father.second] = 1;
      son = father;
      father = ancestors[son];
    }

    VLOG(3) << "Mergin the two composants";
    // We merge the last composant into bridge.first and we remove the last
    composantes[bridge.first].insert(composantes[comp_id].begin(),composantes[comp_id].end());
    composantes.pop_back();
  }

  return true;
}



// Point find_one(const Solution& sol) {
//   for (int i = 0; i < sol.data_.m; ++i)
//   for (int j = 0; j < sol.data_.n; ++j)
//   {
//     if (sol.x_[i][j] == 1)
//       return std::make_pair(i,j);
//   }
//   return(std::make_pair(-1,-1));
// }

// /** Used in find_border : Fill the set is the point is not selected is sol */
// bool add_point_if_not_in_sol(const Solution& sol, std::set<Point>* set_pts,
//                              int i, int j) {
//   if ((i>=0) && (i<sol.data_.m) && (j>=0) && (j<sol.data_.n) && 
//       (sol.x_[i][j] == 0)) { 
//     set_pts->insert(std::make_pair(i,j));
//     return true;
//   }
//   else 
//     return false;
// }

// std::set<Point> find_border(const Solution& sol) {
//   std::set<Point> border;
//   for (int i = 0; i < sol.data_.m; ++i)
//   for (int j = 0; j < sol.data_.n; ++j) {
//     if (sol.x_[i][j] == 1) {
//       add_point_if_not_in_sol(sol, &border, i-1, j);
//       add_point_if_not_in_sol(sol, &border, i, j-1);
//       add_point_if_not_in_sol(sol, &border, i+1, j);
//       add_point_if_not_in_sol(sol, &border, i, j+1);
//     }
//   } 
//   return border;
// }


} // namespace connexification
} // namespace ecma

