// Write a program to store an input list of ten integers in an array; then display
// a table similar to the one given, showing each data value and what
// percentage each value is of the total of all ten values
// Topic 6 P52

#include <stdio.h>
#include <math.h>

int main(void) {

  int arraySize = 10;
  int n[arraySize];
  int sum = 0;

  printf("Eneter 10 integers (seperates by spaces): \n");

  // Scan for the 10 integers
  for(int i = 0; i < arraySize; i++) {
    scanf("%d", &n[i]);
  }
  
  // Calculate total
  for (int i = 0; i < arraySize; i++) {
    sum += n[i];
  }
  
  // Calculate percentage
  for (int i = 0; i < arraySize; i++) {
    float result = ((float)n[i] / sum) * 100;
    printf("\nn: %d is %0.1lf%% of total\n", n[i], result);
  }

  printf("\nThe sum is: %d", sum);
  
  return 0;
}

