/** @file */

#ifndef HELPERS_H
#define HELPERS_H


/** HELPERS
 *
 */
#include <string>
#include <vector>
 
namespace ecma {
namespace helpers {

// Code header here
std::string to_string(int num);

// Function that pretty print matrix
void print_table(const std::vector<std::vector<double> >& table, double max);


} // namespace helpers
} // namespace ecma

#endif // HELPERS_H