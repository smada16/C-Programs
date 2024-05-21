// Generate random number between 0 and 99
// Cody Adams

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  // Intializes random number generator using time(null)
  srand(time(0));

  // Generate a random number between 0 and 99, assign to varibale randomNumber
  int randomNumber = rand() % 100; 

  /* Print random number */
  printf("%d\n", randomNumber);

  return(0);

}





