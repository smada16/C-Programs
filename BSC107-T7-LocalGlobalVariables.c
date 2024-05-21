// Local and Global variables

#include <stdio.h>


// Declare global variables stored outside of any function
int a, b;

int main(void) {

  // Update value of global variables, don't need to re-declare
  a = 10;
  b = 5;

  // Local variable stored in main() function
  int c;
  
  return 0;
}

// Cannot use local variable outside of function
c = 10;


