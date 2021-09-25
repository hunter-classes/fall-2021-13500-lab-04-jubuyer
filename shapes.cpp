//Shape functions
#include <iostream>
#include <string>

//4A
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

//4B
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

//4C
std::string cross(int size) {
  std::string output = "";
  int first = 0;
  int second = size - 1;

  for (int row = 0; row < size; row++) { //rows (top to bottom)
    for (int column = 0; column < size; column++) { //columns (left to right)
      if ((column == first) || (column == second)) {
        output += "*";
      } else {
        output += " ";
      }
    }
    output += "\n";
    first++;
    second--;
  }

  return output;
}

//4D
std::string lower(int side) {
  std::string output = "";

  for (int i = 0; i < side; i++){

		for (int f = 0; f <= i; f++){
			output += "*";
		}

		output += "\n";
	}

  return output;
}
