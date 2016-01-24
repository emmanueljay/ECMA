/** @file */

#ifndef DATA_H
#define DATA_H

#include <vector>

/**
 * Class Data
 * 
 */
class Data {
public:
  int n;
  int m;
  double Ba;
  double Bp;
  std::vector<std::vector<double> > Ha;
  std::vector<std::vector<double> > Ca;
  std::vector<std::vector<double> > Hp;
  std::vector<std::vector<double> > Cp;
};


#endif // DATA_H