/* Multidimensional arrays in the C language are arrays of arrays. They allow for the storage of data in more than one dimension, enabling the creation of matrices, tables, and more complex data structures. */

#include <stdio.h>

int main(void) {

  // Define 2x3 array/matrix
  int array[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  // Access certain elements
  printf("Element at [0][1]: %d \n", array[0][1]); // access 2
  printf("Element at [1][2]: %d \n", array[1][2]); // access 6

  // Iterate through array
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Element at [%d][%d]: %d \n", i, j, array[i][j]);
    }
  }

  // Can also have three dimensional arrays:
  int array3D[2][3][4];
  // 2 x 3 x 4 box array
  
  return 0;
}