/** @file */

#ifndef BORNE_H
#define BORNE_H

#include <map>
#include <string>


namespace ecma {
namespace constants {

std::map<std::string,int> bornes;

void init() {
  bornes["projet_12_10_1.dat"] =  42;
  bornes["projet_12_10_10.dat"] = 115;
  bornes["projet_12_10_2.dat"] =  4;
  bornes["projet_12_10_3.dat"] =  65;
  bornes["projet_12_10_4.dat"] =  62;
  bornes["projet_12_10_5.dat"] =  107;
  bornes["projet_12_10_6.dat"] =  51;
  bornes["projet_12_10_7.dat"] =  56;
  bornes["projet_12_10_8.dat"] =  78;
  bornes["projet_12_10_9.dat"] =  44;
  bornes["projet_15_17_1.dat"] =  42;
  bornes["projet_15_17_10.dat"] = 242;
  bornes["projet_15_17_2.dat"] =  13;
  bornes["projet_15_17_3.dat"] =  120;
  bornes["projet_15_17_4.dat"] =  104;
  bornes["projet_15_17_5.dat"] =  215;
  bornes["projet_15_17_6.dat"] =  94;
  bornes["projet_15_17_7.dat"] =  99;
  bornes["projet_15_17_8.dat"] =  139;
  bornes["projet_15_17_9.dat"] =  101;
  bornes["projet_20_25_1.dat"] =  72;
  bornes["projet_20_25_10.dat"] = 427;
  bornes["projet_20_25_2.dat"] =  20;
  bornes["projet_20_25_3.dat"] =  176;
  bornes["projet_20_25_4.dat"] =  170;
  bornes["projet_20_25_5.dat"] =  389;
  bornes["projet_20_25_6.dat"] =  148;
  bornes["projet_20_25_7.dat"] =  171;
  bornes["projet_20_25_8.dat"] =  253;
  bornes["projet_20_25_9.dat"] =  201;
  bornes["projet_5_8_1.dat"] =  24;
  bornes["projet_5_8_10.dat"] = 40;
  bornes["projet_5_8_2.dat"] =  4;
  bornes["projet_5_8_3.dat"] =  30;
  bornes["projet_5_8_4.dat"] =  18;
  bornes["projet_5_8_5.dat"] =  40;
  bornes["projet_5_8_6.dat"] =  23;
  bornes["projet_5_8_7.dat"] =  30;
  bornes["projet_5_8_8.dat"] =  28;
  bornes["projet_5_8_9.dat"] =  23;
}

} // ecma
} // constants

#endif // BORNE_H