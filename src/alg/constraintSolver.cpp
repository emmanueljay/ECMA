#include "alg/solver.h"

#include <glog/logging.h>


#include <ilcp/cp.h>

typedef IloArray<IloIntVarArray>  IntVarMatrix;
typedef IloArray<IloBoolVarArray> BoolVarMatrix;


bool ConstraintSolver::solve() {
  LOG(INFO) << "Using : " << name_ << " :: " << description_; 
  IloEnv env;
  try {
    VLOG(1) << "Creating model";
    IloModel model(env);

    IntVarMatrix x(env);
    // NumVarMatrix y(env);
    // NumVarMatrix z(env);

    VLOG(2) << "Creating variables";
    for (int i = 0; i < data_.m ; ++i) {
      x.add(IloIntVarArray(env,data_.n,0,1));
      // y.add(IloNumVarArray(env,data_.n,0,data_.Bp));
      // z.add(IloNumVarArray(env,data_.n,0,data_.Ba));
    }

    VLOG(2) << "Creating constraints";

    VLOG(3) << "Constraint 1. x[i][j] null if Cp[i][j] == 0";

    for (int i = 0; i < data_.m; ++i)
    for (int j = 0; j < data_.n; ++j)
      if (data_.Cp[i][j] == 0)
        model.add(x[i][j] == 0);
    
    VLOG(3) << "Constraint 2. The ratio should be greater than 2";

    IloExpr sum_x(env,0);
    IloExpr sum_HCp(env,0);
    IloExpr sum_Cp(env,0);
    IloExpr sum_HCa(env,0);
    IloExpr sum_Ca(env,0);

    for (int i = 0; i < data_.m; ++i)
    for (int j = 0; j < data_.n; ++j) {
      sum_x += x[i][j];
      sum_HCp += data_.Hp[i][j]*data_.Cp[i][j]*x[i][j];
      sum_Cp  += data_.Cp[i][j]*x[i][j];
      sum_HCa += data_.Ha[i][j]*data_.Ca[i][j]*x[i][j];
      sum_Ca  += data_.Ca[i][j]*x[i][j];
    }
  
    model.add(sum_HCp*sum_Ca + sum_HCa*sum_Cp >= 2*sum_Cp*sum_Ca);

    VLOG(3) << "Constraint 3. Connexity";

    for (int i = 0; i < data_.m; ++i)
    for (int j = 0; j < data_.n; ++j) {
      if (i==0) {
        if (j==0)  model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i][j+1] == 1)));
        else if (j==(data_.n-1)) model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i][j-1] == 1)));
        else model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i][j-1] == 1) || (x[i][j+1] == 1)));
      }
      else if (i==(data_.m-1)) {
        if (j==0)  model.add((x[i][j] == 0) || 
          ((x[i-1][j] == 1) || (x[i][j+1] == 1)));
        else if (j==(data_.n-1)) model.add((x[i][j] == 0) || 
          ((x[i-1][j] == 1) || (x[i][j-1] == 1)));
        else model.add((x[i][j] == 0) || 
          ((x[i-1][j] == 1) || (x[i][j-1] == 1) || (x[i][j+1] == 1)));
      }
      else {
        if (j==0)  model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i-1][j] == 1) || (x[i][j+1] == 1)));
        else if (j==(data_.n-1)) model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i-1][j] == 1) || (x[i][j-1] == 1)));
        else model.add((x[i][j] == 0) || 
          ((x[i+1][j] == 1) || (x[i-1][j] == 1) || (x[i][j-1] == 1) || (x[i][j+1] == 1)));      
      }
    }

    VLOG(3) << "Constraint 4. Objective value";
    // model.add(sum_x >= 5);

    IloObjective objective = IloMaximize(env,sum_x);
    model.add(objective);

    VLOG(1) << "Solving model using constraint programming";
    IloCP cp(model);
    if (cp.solve()) {
      VLOG(1) << "Solution found !";
      for (int i = 0; i < data_.m; ++i)
      for (int j = 0; j < data_.n; ++j) {   
        VLOG(4) << "Value of x[" << i << "]["<<j<<"] = " << cp.getValue(x[i][j]);
        sol_.x[i][j] = cp.getValue(x[i][j]);
      }
      env.end();
      return true;
    }
    else {
      VLOG(1) << "No Solution found :( !";
      env.end();
      return false;
    }
  }
  catch (IloException& ex) {
    LOG(ERROR) << "Error: " << ex << std::endl;
    env.end();
    return false;
  }

  // Not needed
  return false;
}