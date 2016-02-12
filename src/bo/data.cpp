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
  double max = ecma::helpers::max_mat(Ha);
  VLOG(1) << "Maximum de Ha = " << max;
  ecma::helpers::print_table(Ha, max);
  VLOG(1) << "Affichage de Ca";
  max = ecma::helpers::max_mat(Ca);
  VLOG(1) << "Maximum de Ca = " << max;
  ecma::helpers::print_table(Ca, max);
  VLOG(1) << "Affichage de Hp";
  max = ecma::helpers::max_mat(Hp);
  VLOG(1) << "Maximum de Hp = " << max;
  ecma::helpers::print_table(Hp, max);
  VLOG(1) << "Affichage de Cp";
  max = ecma::helpers::max_mat(Cp);
  VLOG(1) << "Maximum de Cp = " << max;
  ecma::helpers::print_table(Cp, max);

  return;
}
