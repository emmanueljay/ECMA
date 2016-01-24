#include "alg/solver.h"

#include <glog/logging.h>

// Define std before
#include <ilcp/cp.h>

const char* Names[] = {"blue", "white", "yellow", "green"};

bool ConstraintSolver::solve() {
  LOG(INFO) << name_ << " :: " << description_; 


  IloEnv env;
  // try {
  //   IloModel model(env);
  //   IloIntVar Belgium(env, 0, 3, "B"), Denmark(env, 0, 3, "DK"),
  //     France(env, 0, 3, "F"), Germany(env, 0, 3, "D"),
  //     Luxembourg(env, 0, 3, "L"), Netherlands(env, 0, 3, "NE");
  //   model.add(Belgium != France);
  //   model.add(Belgium != Germany);
  //   model.add(Belgium != Netherlands);
  //   model.add(Belgium != Luxembourg);
  //   model.add(Denmark != Germany );
  //   model.add(France != Germany);
  //   model.add(France != Luxembourg);
  //   model.add(Germany != Luxembourg);
  //   model.add(Germany != Netherlands);
  //   IloCP cp(model);
  //   if (cp.solve())
  //     {
  //     cp.out() << std::endl << cp.getStatus() << " Solution" << std::endl;
  //     cp.out() << "Belgium:     " << Names[cp.getValue(Belgium)] << std::endl;
  //     cp.out() << "Denmark:     " << Names[cp.getValue(Denmark)] << std::endl;
  //     cp.out() << "France:      " << Names[cp.getValue(France)] << std::endl;
  //     cp.out() << "Germany:     " << Names[cp.getValue(Germany)] << std::endl;
  //     cp.out() << "Luxembourg:  " << Names[cp.getValue(Luxembourg)]  << std::endl;
  //     cp.out() << "Netherlands: " << Names[cp.getValue(Netherlands)] << std::endl;
  //   }
  // }
  // catch (IloException& ex) {
  //   env.out() << "Error: " << ex << std::endl;
  // }
  // env.end();






  LOG(INFO) << "We did not find a solution !";
  return false;
}