// Count the number of digits in a sentence.
// Cody Adams 03.04.24

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) {

  int count = 0;
  // Initialise *string pointer variable and allocate memory.
  char *string = malloc(sizeof(char) * 100); 

  // Ask user for string, assign to string pointer varaiable
  printf("Please enter a string: \n");
  fgets(string, 100, stdin);  

  // Loop through string characters individually, until end of string (\0)
  for (char character = *string; character != '\0'; character = *++string) {
    // If character is > 0 it is a digit, increment count by 1
    if (isdigit(character) > 0) {
      count++;
    }
  }
  
  printf("\nThe number of digits in the sentence is %d.", count);

  return 0;
}

// isdigit function, returns a non-zero integer if the character is a digit.
// fgets function, similar to scanf, used to receive pointer string variable.


