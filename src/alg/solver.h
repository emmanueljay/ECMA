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

  const Solution& sol() {return sol_;};
  Solution* sol_ptr() {return &sol_;};
};

/**
 * First Solver : does nothing just a first instantiation of an empty solver
 */
class StupidSolver : public Solver {
public:
  StupidSolver(const Data& data): Solver(data) {
      name("Solving using Stupid Solver");
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
      name("Solving using Frontal Solver");
      description("Solve using Cplex");
    }
  ~FrontalSolver() {} ;

  bool solve(int borne_max, bool warmstart = false);
};

/**
 * Third Solver : solve using Cplex without connexity
 */
class FrontalSolverWithoutConnexity : public Solver {
public:
  FrontalSolverWithoutConnexity(const Data& data): Solver(data) {
      name("Solving using Frontal Solver without connexity");
      description("Solve using Cplex without connexity");
    }
  ~FrontalSolverWithoutConnexity() {} ;

  bool solve(int borne_max, bool warmstart = false);
};

/**
 * Fourth Solver : solve using a greedy algorithm
 */
class GreedySolver : public Solver {
public:
  GreedySolver(const Data& data): Solver(data) {
      name("Solving using Greedy Solver");
      description("Solve with a greedy algorithm");
    }
  ~GreedySolver() {} ;

  bool solve();
};

/**Fifth Solver (Without connexity) : solve using a greedy algorithm
 */
class GreedySolverWithoutConnexity : public Solver {
public:
  GreedySolverWithoutConnexity(const Data& data): Solver(data) {
      name("Solving using Greedy Solver without connexity");
      description("Solve without connexity problem with a greedy algorithm");
    }
  ~GreedySolverWithoutConnexity() {} ;

  bool solve();
};

/**
 * Sixth Solver : solve using a constraint programming solver
 */
class ConstraintSolver : public Solver {
public:
  ConstraintSolver(const Data& data): Solver(data) {
      name("Solving using Constraint Solver");
      description("Solve using constraint programming of Cplex");
    }
  ~ConstraintSolver() {} ;

  bool solve(int borne);
};

/**
 * Seventh Solver : Annealing Solver (recuit simulé)
 */
class AnnealingSolver : public Solver {
public:
  AnnealingSolver(const Data& data): Solver(data) {
      name("Solving using Annealing Solver");
      description("Solve using Annealing Solver");
    }
  ~AnnealingSolver() {} ;

  bool solve(double init_temp, bool use_sol = false);
};

/**
 *Eighth Solver : Ant Solver (Colonie de fourmis)
 */
class AntSolver : public Solver {
public:
  AntSolver(const Data& data): Solver(data) {
      name("Solving using Ant Solver");
      description("Solve using Ant Solver");
    }
  ~AntSolver() {} ;

  bool solve();
};

/**
 * Nineth Solver : Test Solver (Greedy and some other things)
 */
class TestSolver : public Solver {
public:
  TestSolver(const Data& data): Solver(data) {
      name("Solving using Test Solver");
      description("Solve using Test Solver");
    }
  ~TestSolver() {} ;

  bool solve();
};

#endif // SOLVER_H
 