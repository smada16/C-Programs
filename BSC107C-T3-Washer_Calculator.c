// TOPIC 3 Washer calculator code

#include <stdio.h>

// Define PI as a constant variable (caps)
#define PI 3.1415 

int main(void) {
  printf("Enter outer diameter (cm) \n");

  // declare function
  double calculate_area_circle(double diameter);

  // declare variables
  double outer_circle_diameter, inner_circle_diameter, thickness, density, quantity;
  double area_outer_circle, area_inner_circle, area_washer;
  double weight_washer, total_weight_batch;
  
  // asking user for values

  printf("Please enter the diameter of the outer circle. \n");
  scanf("%lf", &outer_circle_diameter);
  
  printf("Please enter the diameter of the inner circle. \n");
  scanf("%lf", &inner_circle_diameter);
  
  printf("Please enter the thickness. \n");
  scanf("%lf", &thickness);
  
  printf("Please enter the density. \n");
  scanf("%lf", &density);
  
  printf("Please enter the quantity. \n");
  scanf("%lf", &quantity);

  // call functions
  area_outer_circle = calculate_area_circle(outer_circle_diameter);
  area_inner_circle = calculate_area_circle(inner_circle_diameter);
  area_washer = area_outer_circle - area_inner_circle;
  weight_washer = area_washer * density * thickness;
  total_weight_batch = weight_washer * quantity;

  // print variables
  printf("Area washer = %lf. \n", area_washer);
  printf("Weight washer = %lf. \n", weight_washer);
    
  printf("Total weight of batch = %lf. \n", area_washer);
  
  return 0;
}

// declare function
double calculate_area_circle(double diameter){
  
  return (PI * (diameter / 2) * (diameter / 2));
  
}