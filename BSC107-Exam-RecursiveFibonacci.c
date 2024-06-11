// Calculate fibonacci sequence of a given number.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 
// The next number is found by adding up the two numbers before it

#include <stdio.h>

int main(void) {
    int num;
    int i = 2; // Start from the third element in the Fibonacci sequence
    int array[100] = {0, 1}; // Initialize the first two elements of the Fibonacci sequence

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the Fibonacci sequence up to the given number, 1 = always true (infinite loop)
    while (1) { 
        int nextFib = array[i - 1] + array[i - 2];
        if (nextFib > num) {
            break;
            // Breaks loop if final number is greater then users number
        }
        array[i] = nextFib; // Update array with new number
        i++;
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence up to %d: ", num);
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }
    printf("\n");

    return 0;
}