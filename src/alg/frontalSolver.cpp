#include "alg/solver.h"

#include <glog/logging.h>

// Define std before
using namespace std;

#include <ilcplex/ilocplex.h>
#include <ilcp/cp.h>

typedef IloArray<IloBoolVarArray> BoolVarMatrix;
typedef IloArray<IloIntVarArray>  IntVarMatrix;

bool FrontalSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 
  LOG(INFO) << data_.n;
  LOG(INFO) << "We did not find a solution !";
  
  IloEnv env;
  IloModel model = IloModel (env);
  IloCplex cplex = IloCplex(model);
  int n = data_.n;
  int m = data_.m;

  BoolVarMatrix x_ij(env);










  return false;
}