// Dynamically allocate a single large block of memory to with specified size, returns a pointer.

// Syntax: ptr = (cast-type*)malloc(byte-size)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

// Size of int is 4 bytes, this statement allocated 400 bytes of memory, pointer holds address of the first byte in the allocated memory.
  int* ptr = (int*) malloc(100 * sizeof(int));
  
  
  return 0;
}


