/** @file */

#include "bo/data.h"
#include "utils/helpers.h"

#include <glog/logging.h>


void Data::print() {

  VLOG(1) << "Affichage des données :";
  VLOG(1) << "n = " << n;
  VLOG(1) << "m = " << m;
  VLOG(1) << "Ba = " << Ba;
  VLOG(1) << "Bp = " << Bp;
  VLOG(1) << "Affichage de Ha";
  ecma::helpers::print_table(Ha, 1.0);
  VLOG(1) << "Affichage de Cp";
  ecma::helpers::print_table(Cp, 1.0);
  VLOG(1) << "Affichage de Hp";
  ecma::helpers::print_table(Hp, 1.0);
  VLOG(1) << "Affichage de Cp";
  ecma::helpers::print_table(Cp, 1.0);

  return;
}
