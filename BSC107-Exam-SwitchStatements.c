#include <stdio.h>

int main() {
  // Declare a variable to hold the choice
  int choice;

  // Print a menu for the user
  printf("Select an option:\n");
  printf("1. Option 1\n");
  printf("2. Option 2\n");
  printf("3. Option 3\n");
  printf("4. Exit\n");

  // Read the user's choice (either 1, 2, 3, 4)
  printf("Enter your choice: ");
  scanf("%d", &choice);

  // Use a switch statement to handle the user's choice
  switch (choice) {
    
  case 1:
    // Code for Option 1
    printf("You selected Option 1.\n");
    break; // Break statement to exit the switch

  case 2:
    // Code for Option 2
    printf("You selected Option 2.\n");
    break;

  case 3:
    // Code for Option 3
    printf("You selected Option 3.\n");
    break;

  case 4:
    // Code for Exit
    printf("Exiting the program.\n");
    break;

  default:
    // Code for invalid choices
    printf("Invalid choice! Please select a valid option.\n");
    break;
  }

  return 0;
}
