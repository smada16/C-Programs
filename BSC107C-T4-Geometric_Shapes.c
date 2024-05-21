#include <math.h>
#include <stdio.h>

#define PI 3.1415

// function prototypes
double calculate_area_circle(double radius);
double calculate_area_triangle(double base, double height);

int main(void) {
  printf("Hello World\n");

  // define variables
  char my_letter;
  double my_base, my_height, area_figure, my_radius;

  printf("Please eneter letter T for triangle or C for circle \n");
  scanf("%c", &my_letter);

  if (my_letter == 'T' || my_letter == 't') {
    printf("Please enter the base and height of triangle. \n");
    scanf("%lf", &my_base);
    scanf("%lf", &my_height);
    area_figure = calculate_area_triangle(my_base, my_height);
  }

  else if (my_letter == 'C' || my_letter == 'c') {
    printf("Please enter the radius of the circle. \n");
    scanf("%lf", &my_radius);
    area_figure = calculate_area_circle(my_radius);
  } 
  else {
    printf("Please enter a valid letter. \n");
  }

  // print results
  printf("The area of the figure is: %lf \n", area_figure);

  return 0;
}

// set up functions

double calculate_area_circle(double radius) { return (PI * pow(radius, 2)); }

double calculate_area_triangle(double base, double height) {
  return ((height * base) / 2);
}