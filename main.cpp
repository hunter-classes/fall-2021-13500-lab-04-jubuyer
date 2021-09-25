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

  //4B
  cout << seperator;
  cout << "                TASK B                  " << seperator;
  cout << "Checkerboard test: 11x6\n";
  cout << checkerboard(11,6);
  cout << mini_sep << "Checkerboard test: 9x8\n";
  cout << checkerboard(9,8);

  //4C
  cout << seperator;
  cout << "                TASK C                  " << seperator;
  cout << "Cross test: 8\n";
  cout << cross(8);
  cout << mini_sep << "Cross test: 5\n";
  cout << cross(5);

  return 0;
}
