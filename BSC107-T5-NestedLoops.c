// Example of nested loops (loop inside a loop)
// Cody Adams

#include <stdio.h>

int main(void) {

  int i, j;

  // Outer loop, print 1 and then print 2
  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times

    // Inner loop, print 1, print 2, print 3
    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
  }

  
  return 0;
}



