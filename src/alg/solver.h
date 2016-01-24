/** @file */

#ifndef SOLVER_H
#define SOLVER_H

#include "bo/data.h"
#include "bo/solution.h"

#include <string>

// General solver class
class Solver {
protected:
  std::string name_;
  std::string description_;

  bool found_;
  const Data& data_;
  Solution sol_;

public:
  Solver(const Data& data) : data_(data), sol_(data) {};
  ~Solver() {} ;

  // The principal methode to define
  bool solve();

  // Setters and getters
  std::string const& name() const {return name_;}
  void name(std::string name) {name_ = name;}
  
  std::string const& description() const {return description_;}
  void description(std::string description) {description_ = description;}

  bool found() const {return found_;}
  void found(bool found) {found_ = found;}

  void print_sol();
};

/**
 * First Solver : does nothing just a first instantiation of an empty solver
 */
class StupidSolver : public Solver {
public:
  StupidSolver(const Data& data): Solver(data) {
      name("Stupid Solver");
      description("First version of a solver that need to find an admissible sol");
    }
  ~StupidSolver() {} ;

  bool solve();
};

/**
 * Second Solver : solve using Cplex
 */
class FrontalSolver : public Solver {
public:
  FrontalSolver(const Data& data): Solver(data) {
      name("Frontal Solver");
      description("Solve using Cplex");
    }
  ~FrontalSolver() {} ;

  bool solve();
};

/**
 * Third Solver : solve using a constraint programming solver
 */
class ConstraintSolver : public Solver {
public:
  ConstraintSolver(const Data& data): Solver(data) {
      name("Constraint Solver");
      description("Solve using constraint programming of Cplex");
    }
  ~ConstraintSolver() {} ;

  bool solve();
};
#endif // SOLVER_H
 