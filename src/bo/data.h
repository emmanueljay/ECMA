/** @file */

#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

/**
 * Class Data
 * 
 */
class Data {
public:
  std::string name;

  int n;
  int m;
  double Ba;
  double Bp;
  std::vector<std::vector<double> > Ha;
  std::vector<std::vector<double> > Ca;
  std::vector<std::vector<double> > Hp;
  std::vector<std::vector<double> > Cp;

  /** Function that pretty print the content of data */
  void print();
};


#endif // DATA_H