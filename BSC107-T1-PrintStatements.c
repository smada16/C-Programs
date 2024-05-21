// Example of Print & Scan statements and formats

// Common specifiers:
// %d - integer, %f - float, %lf - double, %c - character, %s - string, %x - hexadecimal

#include <stdio.h>

int main(void) {
  
  // Standard print
  printf("Hello World\n");

  // Print integer
  int number = 5;
  printf("Number: %d\n", number);

  // Print string
  char name[] = "Tony Stark"; 
  printf("Name: %s\n", name); 

  // Print text and variables
  int age = 23;
  printf("I am %d years old.\n", age); // 1 Variable

  float weight = 85.54;
  printf("I am %d years old and weigh %f kilograms.\n", age, weight); // Multiple variables

  // Print floating point number rounded to three decimal places
  float pi = 3.14159;
  printf("Pi to three decimal places: %0.3f\n", pi);

  // Print percent sign
  printf("Success rate: 100%%\n");

  // Reading an integer
  int example;
  scanf("%d", &example);

  // Reading multiple values
  int month, day;
  scanf("%d %d", &month, &day);

  // Reading strings
  char random[50]; // [50] limits the string to 49 characters
  scanf("%s", random); // No & symbol needed for string, stops reading at first white space
  
  return 0;
}