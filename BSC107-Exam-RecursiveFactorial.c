// Program to calculate factorial of a number
// Factorial: 4! = 4 x 3 x 2 x 1 = 24

#include <stdio.h>

int main(void) {

    int n, i;
  
    printf("Enter number: ");
    scanf("%d", &n);
  
    double factorial = 1;
  
    for (i = 1; i <= n; i++) {
      factorial = i * factorial; // factorial = factorial*i;
    }
  
    printf("Factorial of %d = %0.1f", n, factorial);

    return 0;
  }
  