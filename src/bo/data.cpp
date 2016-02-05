/** @file */

#include "bo/data.h"
#include "utils/helpers.h"

#include <glog/logging.h>


void Data::print() {

  LOG(INFO) << "Affichage des données :";
  LOG(INFO) << "n = " << n;
  LOG(INFO) << "m = " << m;
  LOG(INFO) << "Ba = " << Ba;
  LOG(INFO) << "Bp = " << Bp;
  LOG(INFO) << "Affichage de Ha";
  ecma::helpers::print_table(Ha, 1.0);
  LOG(INFO) << "Affichage de Cp";
  ecma::helpers::print_table(Cp, 1.0);
  LOG(INFO) << "Affichage de Hp";
  ecma::helpers::print_table(Hp, 1.0);
  LOG(INFO) << "Affichage de Cp";
  ecma::helpers::print_table(Cp, 1.0);

  return;
}
