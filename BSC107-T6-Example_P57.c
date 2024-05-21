// Write a function that takes two type int array input arguments and their
// effective size and produces a result array containing the sums of
// corresponding elements. 

#include <stdio.h>
#include <math.h>

int main(void) {

  int arraySize;

  // Ask user to determine size of array
  printf("Enter size of array:\n");
  scanf("%d", &arraySize);

  // Inititalise input and output arrays
  int array1[arraySize];
  int array2[arraySize];
  int arrayOutput[arraySize];

  // Ask user for array 1 values
  printf("\n[Array 1] Enter %d array values (seperate spaces):\n", arraySize);
  for (int i = 0; i < arraySize; i++) {
    scanf("%d", &array1[i]);
  }

  // Ask user for array 2 values
  printf("\n[Array 2] Enter %d array values (seperate spaces):\n", arraySize);
  for (int i = 0; i < arraySize; i++) {
    scanf("%d", &array2[i]);   
  }

  // Add array 1 & 2 elements and assign to output array
  for (int i = 0; i < arraySize; i++) {
    arrayOutput[i] = array1[i] + array2[i];
  }

  // Print result output array
  for (int i = 0; i < arraySize; i++) {
    printf("[%d] ", arrayOutput[i]);
  }
  
  return 0;
}