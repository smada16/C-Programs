// Calculate position of object moving in a straight line at constant acceleration. 
// Cody Adams 03.04.24

#include <stdio.h>
#include <math.h>

// Declare function
double calculate_position(double initial_position, double initial_velocity, double acceleration, double time);

int main(void) {
  
  // Define variables
  double my_position, my_velocity, my_acceleration, my_time;

  // Ask user for values, and assign to variables
  printf("Please enter the initial position of the object [x0] in meters: \n");
  scanf("%lf", &my_position);
  
  printf("Please enter the initial velocity of the object [V0] in meters per seconds: \n");
  scanf("%lf", &my_velocity);
  
  printf("Please enter the acceleration of the object [a] in meters per second squared: \n");
  scanf("%lf", &my_acceleration);
  
  printf("Please enter the time [t] in seconds: \n");
  scanf("%lf", &my_time);

  // Call function
  double object_position = calculate_position(my_position, my_velocity, my_acceleration, my_time);

  // Print results, rounded to specific decimals
  printf("The position of the object at t=%0.1lf is %0.2lf meters.", my_time, object_position);

  return 0;


// Function definition
double calculate_position(double initial_position, double initial_velocity, double acceleration, double time) {
  return (initial_position + initial_velocity * time + 0.5 * acceleration * time * time);
}

}
