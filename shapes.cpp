//Shape functions
#include <iostream>
#include <string>

std::string box(int width, int height) {
  std::string output = "";

  for (int h = height; h > 0; h--) {
    for (int w = width; w > 0; w--) {
      output += "*";
    }
    output += "\n";
  }

  return output;
}
