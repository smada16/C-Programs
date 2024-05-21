// A pointer stores the memory address of of another variable as its value

#include <stdio.h>

int main(void) {

  // EXAMPLE 1
  int myAge = 24; 
  printf("%d", myAge); // Outputs value of myAge (24)
  printf("%d", &myAge); // Outputs memory address of variable


  // EXAMPLE 2
  int myNumber = 50;
  int *ptr = &myNumber; // Pointer variable ptr stores address of myNumber
  // Output value of myNumber
  printf("%d\n", myNumber);
  // Output memory address of myNumber
  printf("%p\n", &myNumber);
  //Output memory address of myNumber with pointer
  printf("%p\n", ptr);

  
  return 0;
}



