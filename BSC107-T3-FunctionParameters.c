// Function that takes input variables

#include <stdio.h>

// Declare function outside main func
double calculateArea(double length, double width);

int main(void) {

  // Define variables
  double area;
  double length = 10;
  double width = 20;

  // Call function
  area = calculateArea(length, width);

  //  Print results
  printf("Area of rectangle is: %f square units.\n", area);
  
  return 0;
}

// Function definition
double calculateArea(double length, double width) {
  return length * width;
}


