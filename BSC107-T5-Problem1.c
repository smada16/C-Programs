// Write a program fragment that produces the output given below:
// i.e. when i = 0, value = 1, when i = 1, value = 2, etc.
// Topic 5, p33
// Cody Adams

#include <stdio.h>

int main(void) {

  // initialise variables
  int i = 0;
  int value = 1;

  while (i < 7) {
    printf("%d %d\n", i, value);
    value = value * 2;
    i++;
  }

  return 0;
}



