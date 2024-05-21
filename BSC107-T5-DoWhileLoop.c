// Print value of i and increment by 1 each time, until i is greater then 5

#include <stdio.h>

int main(void) {

  int i = 0;

  // Do this instruction
  do {
    printf("%d\n", i);
    i++;
  }

  // Stop doing instruction once this condition is met
  while (i <= 5);

  return 0;
}



