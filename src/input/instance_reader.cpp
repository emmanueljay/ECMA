/** @file */

// Include Order
// 1. .h file corresponding to this cpp file (if applicable)
// 2. headers from the same component,
// 3. headers from other components,
// 4. system headers.

#include "input/instance_reader.h"

#include <glog/logging.h>

#include <fstream>

using namespace std;

namespace ecma {
namespace reader {

namespace {

///////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
// ESPACE POUR DEFINIR DES HELPERS (FCT DONT ON NE SERT PAS AILLEURS) //
////////////////////////////////////////////////////////////////////////

int getIntElement(ifstream& file) {
  char chartmp;
  int inttmp;
  file >> chartmp >> chartmp;
  file >> inttmp >> chartmp;      
  LOG(INFO) << inttmp << endl;
  return inttmp;
}

double getDoubleElement(ifstream& file) {
  char chartmp;
  double dbltmp;
  file >> chartmp >> chartmp >> chartmp;
  file >> dbltmp >> chartmp;      
  LOG(INFO) << dbltmp << endl;
  return dbltmp;
}

void getDoubleArray(ifstream& file, vector<double>& vect, int size) {
  char chartmp;
  double dbltmp;
  file >> chartmp >> chartmp >> chartmp >> chartmp;

  for (int i = 0; i < size; ++i)
  {
    file >> dbltmp >> chartmp;
    LOG(INFO) << dbltmp << "\t";
    vect.push_back(dbltmp);
  }
  file >> chartmp;
  LOG(INFO) << endl; 
  return;
}

void getDoubleMatrix(ifstream& file, vector<vector<double> >& mat, int n, int m) {
  char chartmp;
  double dbltmp;
  file >> chartmp >> chartmp >> chartmp >> chartmp;
  LOG(INFO) << "Displaying Matrix :" << endl;
  for (int i = 0; i < n; ++i) {
    file >> chartmp;
    mat.push_back(vector<double>());
    for (int j = 0; j < m; ++j)
    {
      file >> dbltmp >> chartmp;
      LOG(INFO) << dbltmp << "\t";
      mat[i].push_back(dbltmp);
    }
    file >> chartmp;
    LOG(INFO) << endl;      
  }
  file >> chartmp;
  LOG(INFO) << endl; 
  return;
}


} // namespace

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////
// ESPACE POUR DEFINIR LES FONCTIONS EXPORTEES  //
//////////////////////////////////////////////////
bool read_instance(Data& data, string file_name) {
  ifstream fichier(file_name);
  if(fichier) {
    data.n = getIntElement(fichier);
    data.m = getIntElement(fichier);
    data.Ba = getDoubleElement(fichier);
    data.Bp = getDoubleElement(fichier);
    getDoubleMatrix(fichier, data.Ha, data.m, data.n);
    getDoubleMatrix(fichier, data.Ca, data.m, data.n);
    getDoubleMatrix(fichier, data.Hp, data.m, data.n);
    getDoubleMatrix(fichier, data.Cp, data.m, data.n);
    return true;
  }
  else return false;
}

} // namespace reader
} // namespace ecma