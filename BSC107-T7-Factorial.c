#include <stdio.h>
#include <math.h>

int main(void) {

  
  int factorial = 1;

  for (int n = 1; n < 10; n++) {
    int result = factorial * n; // Multiply factorial by loop counter
    factorial = result; // Update factorial variable
  }

  printf("%d", factorial);
  
  return 0;
}