// Simple lottery engine
// Cody Adams 03.04.24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
// Initialise variables
int myNumbers[7];
int winningNumbers[2];
int myInput;
int hasWon = 0;

srand(clock()); // Initialise rand function

  // Ask user for numbers between 25 - 50
  for (int i = 0; i < 7; i++) {
    printf("[%d] Please enter an integer between 25 - 50: ", i + 1);
    scanf("%d", &myInput);
    // If numbers are not between 25 - 50, ask for a new number
    while(myInput < 25 || myInput > 50) {
      printf("Please enter a valid integer between 25 - 50: ");
      scanf("%d", &myInput);
    }
    // Check for duplicate entries
    for (int j = 0; j < i; j++) {
      while (myInput == myNumbers[j]) {
        printf("You have already entered this number, enter a different one: ");
        scanf("%d", &myInput);
      }
      j = 0; 
    }
    
    myNumbers[i] = myInput; // if user input is correct, assign to myNumbers array
  }

  // Generate winning numbers
  winningNumbers[0] = (rand() % 26) + 25; // Generate random number 0 - 25 and add 25
  do {
    winningNumbers[1] = (rand() % 26) + 25;
  } 
  while(winningNumbers[0] == winningNumbers[1]); // Ensure numbers are not the same
  
  // Loop through number array and check numbers
  printf("\n The winning numbers are: %d %d \n", winningNumbers[0], winningNumbers[1]);
  for (int i = 0; i < 7; i++) {
    if (myNumbers[i] == winningNumbers[0] || myNumbers[i] == winningNumbers[1]) {
      printf("\n Congratulations your number %d is a winning number!", myNumbers[i]);
      hasWon = 1;
    }
  }
  
  // Check if user has no matching numbers
  if (hasWon == 0) {
    printf("\n None of your guesses matched the winning numbers");
  }

  return 0;
}

