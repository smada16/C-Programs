#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  // Defining strings
  char string[100]; // Define string of length 99 characters (plus null
                    // terminator)
  char string1[] =
      "Hello"; // Define string that will automatically memory to exact size (6)

  // Example of string concatenation
  char str1[100] = "Hello, ";
  char str2[] = "world!";
  strcat(str1, str2); // Concatenate str2 to str1
  printf("Concatenated string: %s \n", str1);

  // Example of string comparison
  char str3[] = "apple";
  char str4[] = "banana";
  int result = strcmp(str3, str4); // Compare str3 and str4
  if (result == 0) {
    printf("The strings are equal. \n");
  } else if (result < 0) {
    printf("First string is less thansecond string. \n");
  } else {
    printf("The first string is greater than the second string. \n");
  }

  // Example of substring extraction
  char str5[] = "hello, world!";
  int start = 7;       // How far into string to start copying
  int length = 5;      // How many characters to copy once starting
  char substring[100]; // Where to store new extracted substring
  strncpy(substring, str5 + start, length); // Extract substring (world)
  substring[length] = '\0';                 // Null terminate the substring
  printf("Extracted substring: %s \n", substring);

  // Example of converting a string to a number
  char str6[] = "12345";
  int num = atoi(str6); // Convert string to number

  // Example of converting number to string
  int num2 = 67890;
  char str7[100];
  sprintf(str7, "%d", num2); // Convert number to string
  printf("Converted string: %s \n", str7);

  return 0;
}