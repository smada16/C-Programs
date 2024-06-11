/* Use malloc to dynamically allocate memory for an array of integers, allow user to input values into the array and then print array */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *arr; // Pointer variable to hold base address of array
  int n; // Variable to store number of elements

  // Retrieve input from user
  printf("Enter the nmber of elements: ");
  scanf("%d", &n);

  // Dynamically allocate memory for n integers
  arr = (int*)malloc(n * sizeof(int)); // sizeof(int) returns number of bytes in int data type
  // arr now points to the first element of the dynamicallyt allocated array of integers

  // Check if memory has been allocated successfully 
  if (arr == NULL) {
    printf("Memory allocation failed");
    return 1; // Exit the program if allocation fails
    }

  // Input values into the array
  printf("Enter %d integers: \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]); // Store each input in allocated memory array
  }

  // Print array contents
  printf("Array contents: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]); // Print each element of array
  }
  printf("\n"); // New line after elements are printed

  // Free allocated memory
  free(arr); // De-allocate memory, avoid data leaks 
  
return 0;
}