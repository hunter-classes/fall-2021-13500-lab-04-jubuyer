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

std::string checkerboard(int width, int height) {
  std::string output = "";

  for (int h = 0; h < height; h++) { //loop for the rows to be printed
    for (int w = 0; w < width; w++) { //loop for stars and spaces in each row
      if ((h % 2) != 0) { //checks if even/odd row, prints either space or star
        if ((w % 2) != 0) { //checks if even/odd column, prints space/star
          output += "*"; //if odd row, odd column
        } else if ((w % 2) == 0){
          output += " "; //if odd row, even column
        }
      } else {
        if ((h % 2) == 0) {
          if ((w % 2) != 0) {
            output += " "; //if even row, odd column
          } else if ((w % 2) == 0) {
            output += "*"; //if even row, even column
          }
        }
      }
    }
    output += "\n";
  }

  return output;
}
