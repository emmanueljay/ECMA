#include "alg/solver.h"

#include <glog/logging.h>

// Define std before
using namespace std;

#include <ilcplex/ilocplex.h>
#include <ilcp/cp.h>

typedef IloArray<IloBoolVarArray> BoolVarMatrix;
typedef IloArray<IloIntVarArray>  IntVarMatrix;
typedef IloArray<IloNumVarArray>  NumVarMatrix;
typedef IloArray<IloIntArray>     IntMatrix;

bool FrontalSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 

  //Extracting data
  LOG(INFO) << "Extracting data";
  int n = data_.n;
  int m = data_.m;
  double Ba = data_.Ba;
  double Bp = data_.Bp;
  vector<vector<double> > Ha = data_.Ha;
  vector<vector<double> > Ca = data_.Ca;
  vector<vector<double> > Hp = data_.Hp;
  vector<vector<double> > Cp = data_.Cp;
  
  //Environement
  LOG(INFO) << "Creating environment";
  IloEnv env;
  IloModel model = IloModel (env);
  IloCplex cplex = IloCplex(model);

  //Variables
  LOG(INFO) << "Creating variables";
  BoolVarMatrix x(env); 
  NumVarMatrix y(env);
  NumVarMatrix z(env);

  LOG(INFO) << "Creating variables";
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
  LOG(INFO) << "Processing objective function";
  IloExpr objective(env,0);

  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {
      objective += x[i][j];
    }
  }
  model.add(IloMaximize(env, objective ));

  //Constraints
  LOG(INFO) << "Adding constraints";
  IloExpr sum_Cy(env,0);
  IloExpr sum_HCPx(env,0);
  IloExpr sum_Cz(env,0);
  IloExpr sum_HCAx(env,0);

  
  LOG(INFO) << "Printing";
  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {
      cout << i << " " << j << " " << Cp[i][j] << endl;
    }
  }

  //ca plante ici le y est mal définit je ne sais pas pkoi
  LOG(INFO) << "Adding constraints";
  for (int i = 0; i < m ; ++i) {
    for (int j = 0; j < n ; ++j) {

      LOG(INFO) << i << " " << j << " " << Cp[i][j] << endl;
      sum_Cy += y[i][j]*Cp[i][j];
      sum_Cz += z[i][j]*Ca[i][j];
      sum_HCPx += x[i][j]*Hp[i][j]*Cp[i][j];
      sum_HCAx += x[i][j]*Ha[i][j]*Ca[i][j];

    }
  }

  LOG(INFO) << "Adding constraints";
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

  //Solve
  LOG(INFO) << "Resolution...";
  cplex.solve();

  //Output
  env.out() << "Solution status = " << cplex.getStatus() << endl;
  env.out() << "Solution value  = " << cplex.getObjValue() << endl;

  return false;
}