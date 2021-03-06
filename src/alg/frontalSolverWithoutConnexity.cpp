#include "alg/solver.h"

#include <glog/logging.h>

// Define std before
using namespace std;

#include <ilcplex/ilocplex.h>
#include <ilcp/cp.h>

typedef IloArray<IloBoolVarArray> BoolVarMatrix;
typedef IloArray<IloArray<IloBoolVarArray> > BoolVar3DMatrix;
typedef IloArray<IloIntVarArray>  IntVarMatrix;
typedef IloArray<IloNumVarArray>  NumVarMatrix;
typedef IloArray<IloIntArray>     IntMatrix;
typedef IloArray<IloExprArray>     ExprMatrix;

bool FrontalSolverWithoutConnexity::solve(int borne_max, bool warmstart) {
  LOG(INFO) << name_ << " :: " << description_;

  //Extracting data
  VLOG(2) << "Extracting data";
  int n = data_.n;
  int m = data_.m;
  double Ba = data_.Ba;
  double Bp = data_.Bp;
  const vector<vector<double> >& Ha = data_.Ha;
  const vector<vector<double> >& Ca = data_.Ca;
  const vector<vector<double> >& Hp = data_.Hp;
  const vector<vector<double> >& Cp = data_.Cp;
  
  //Environement
  VLOG(2) << "Creating environment";
  IloEnv env;
  IloModel model = IloModel (env);
  IloCplex cplex = IloCplex(model);

  //Variables
  VLOG(2) << "Creating variables";
  BoolVarMatrix x(env); 
  NumVarMatrix y(env);
  NumVarMatrix z(env);

  VLOG(2) << "Creating variables";
   for (int i = 0; i < m ; ++i) {
     x.add(IloBoolVarArray(env,n));
     y.add(IloNumVarArray(env,n,0,Bp));
     z.add(IloNumVarArray(env,n,0,Ba));
   }


  IloNumVar ha_var(env);
  model.add(ha_var);
  IloNumVar hp_var(env);
  model.add(hp_var);

  //Objective function
  VLOG(2) << "Processing objective function";
  IloExpr objective(env,0);

  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {
      objective += x[i][j];
    }
  }
  model.add(IloMaximize(env, objective ));

  VLOG(2) << "Creating constraint expressions";
  IloExpr sum_Cy(env,0);
  IloExpr sum_HCPx(env,0);
  IloExpr sum_Cz(env,0);
  IloExpr sum_HCAx(env,0);

  VLOG(2) << "Computing constraint expressions";
  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {

      VLOG(5) << i << " " << j << " " << Cp[i][j] << endl;
      sum_Cy += y[i][j]*Cp[i][j];
      sum_Cz += z[i][j]*Ca[i][j];
      sum_HCPx += x[i][j]*Hp[i][j]*Cp[i][j];
      sum_HCAx += x[i][j]*Ha[i][j]*Ca[i][j];

    }
  }

  VLOG(2) << "Adding constraints";
  //Selection of an admissible area
  model.add(sum_Cy == sum_HCPx);
  model.add(sum_Cz == sum_HCAx);
  model.add(ha_var + hp_var >= 2);

  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {

      //Defining y
      model.add(y[i][j] <= Bp*x[i][j]);
      model.add(y[i][j] <= hp_var);
      model.add(y[i][j] >= hp_var - Bp*(1-x[i][j]));
      model.add(y[i][j] >= 0);

      //Defining z
      model.add(z[i][j] <= Ba*x[i][j]);
      model.add(z[i][j] <= ha_var);
      model.add(z[i][j] >= ha_var - Ba*(1-x[i][j]));
      model.add(z[i][j] >= 0);

      //Constraint on x
      if (Cp[i][j] == 0) 
        model.add(x[i][j]==0);

    }
  }

  // Warmstart
  if (warmstart) {
    // Setting Warmstart from solution
    VLOG(2) << "Setting informations for warmstart";
    IloNumVarArray startVar(env);
    IloNumArray startVal(env);
    for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j) {
      startVar.add(x[i][j]);
      startVal.add(sol_.x_[i][j]);

      if (sol_.x_[i][j] == 0){
        startVar.add(y[i][j]);
        startVal.add(sol_.x_[i][j]);

        startVar.add(z[i][j]);
        startVal.add(sol_.x_[i][j]);
      }
    }
    cplex.addMIPStart(startVar, startVal);
    startVal.end();
    startVar.end();
  }




  //Solve
  VLOG(2) << "Resolution...";
  cplex.solve();

  //Output
  VLOG(2) << "Solution status = " << cplex.getStatus() << endl;
  VLOG(2) << "Solution value  = " << cplex.getObjValue() << endl;

  for (int i = 0; i < data_.m; ++i) {
    for (int j = 0; j < data_.n; ++j) {   
      sol_.x_[i][j] = cplex.getValue(x[i][j]);
    }
  } 
  env.end();

  return false;
}