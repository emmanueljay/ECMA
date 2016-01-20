#ifndef SOLVER_H
#define SOLVER_H

#include "bo/data.h"

#include <string>

// General solver class
class Solver {
protected:
  std::string name_;
  std::string description_;

  bool found_;
  const Data& data_;

public:
  Solver(const Data& data) : data_(data) {};
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
};

/**
 * First Solver : the one that only give an admissible solution
 */
class StupidSolver : public Solver {
public:
  StupidSolver(const Data& data): Solver(data) {
      name("Stupid Solver");
      description("First version of a solver that need to find an admissible sol");
    }
  ~StupidSolver() {} ;

  /** 
   * Find the times where an operation is needed, and affect it to a driver 
   * in a shift 
   **/
  bool solve();
};


#endif // SOLVER_H
 