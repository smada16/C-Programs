/* Create a basic calculator program that performs addition, subtraction, multiplication, and division. The program should prompt the user to enter two numbers and the desired operation, then display the result */

#include <stdio.h>

// Define function outside of main func
double calculate(char symbol, double number1, double number2);

int main(void) {

  // char symbol;
  // double number1, number2;
  char operator;
  double num1, num2;

  // Ask user for input
  printf("Specify the operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Specify first number: ");
  scanf("%lf", &num1);

  printf("Specify second number: ");
  scanf("%lf", &num2);

  // Call function
  double result = calculate(operator, num1, num2);
  printf("The result is: %0.2lf", result);
  
  return 0;
}
// Define calculate function that takes operator and 2 numbers as input
double calculate(char symbol, double number1, double number2) {
  
  if (symbol == '+') {
    return number1 + number2;
  }

  else if (symbol == '-') {
    return number1 - number2;
  }

  else if (symbol == '*') {
    return number1 * number2;
  }

  else if (symbol == '/') {
    return number1 / number2;
  }

  else {
    return 0;
  }
}