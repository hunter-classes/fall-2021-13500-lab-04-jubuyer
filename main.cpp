//Lab 4
#include <iostream>
#include <string>
#include "shapes.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
  std::string seperator = "\n_________________________________________\n";
  std::string mini_sep = "===================\n";

  //Tests for functions from lab 4
  //4A
  cout << seperator;
  cout << "                TASK A                  " << seperator;
  cout << "Box test: 5x4\n";
  cout << box(5,4);
  cout << mini_sep << "Box test: 4x6\n";
  cout << box(4,6);
  cout << mini_sep << "Box test: 5x3\n";
  cout << box(5,3);

  //4B
  cout << seperator;
  cout << "                TASK B                  " << seperator;
  cout << "Checkerboard test: 11x6\n";
  cout << checkerboard(11,6);
  cout << mini_sep << "Checkerboard test: 9x8\n";
  cout << checkerboard(9,8);
  cout << mini_sep << "Checkerboard test: 5x4\n";
  cout << checkerboard(5,4);

  //4C
  cout << seperator;
  cout << "                TASK C                  " << seperator;
  cout << "Cross test: 8\n";
  cout << cross(8);
  cout << mini_sep << "Cross test: 5\n";
  cout << cross(5);
  cout << mini_sep << "Cross test: 7\n";
  cout << cross(7);

  //4D
  cout << seperator;
  cout << "                TASK D                  " << seperator;
  cout << "Lower test: 8\n";
  cout << lower(8);
  cout << mini_sep << "Lower test: 5\n";
  cout << lower(5);
  cout << mini_sep << "Lower test: 6\n";
  cout << lower(6);

  //4E
  cout << seperator;
  cout << "                TASK E                  " << seperator;
  cout << "Upper test: 5\n";
  cout << upper(5);
  cout << mini_sep << "Upper test: 3\n";
  cout << upper(3);
  cout << mini_sep << "Upper test: 6\n";
  cout << upper(6);


  return 0;
}
