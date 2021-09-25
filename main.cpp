//Lab 4
#include <iostream>
#include <string>
#include "shapes.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
  std::string seperator = "\n_________________________________________\n";
  std::string mini_sep = "-------------------\n";

  //Tests for functions from lab 4
  //4A
  cout << seperator;
  cout << "                TASK A                  " << seperator;
  cout << "Box test: 5x4\n";
  cout << box(5,4);
  cout << mini_sep << "Box test: 4x6\n";
  cout << box(4,6);

  return 0;
}
