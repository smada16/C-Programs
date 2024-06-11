/* Write a program to manage student grades. The program should allow the user to input student names and grades, calculate the average grade, and determine the highest and lowest grades. Use functions to modularize the tasks and decision structures to handle different operations. */

#include <stdio.h>
#include <string.h>

// Define student structure to store grades and names
struct Student {
  char name[50];
  float grade;
};

// Declare functions outside main func
double calculateAverage(struct Student students[], int numStudents);
double calculateLowGrade(struct Student students[], int numStudents);
double calculateHighGrade(struct Student students[], int numStudents);

int main(void) {

  int numStudents;

  // Ask user for number of students
  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  // Create array to store student information
  struct Student students[numStudents];

  // Ask user to input names and grades using for loop
  for (int i = 0; i < numStudents; i++) {
    printf("Enter student name %d: \n", i + 1);
    scanf("%s", students[i].name);
    
    printf("Enter student grades %d: \n", i + 1);
    scanf("%f", &students[i].grade);
  }

  // Call functions and display results
  double average = calculateAverage(students, numStudents);
  printf("Average grade: %0.1lf\n", average);

  double lowest = calculateLowGrade(students, numStudents);
  printf("Lowest grade: %0.1lf\n", lowest);

  double highest = calculateHighGrade(students, numStudents);
  printf("Highest grade: %0.1lf\n", highest);
  
  return 0;
}

// Function to calculate average grade
double calculateAverage(struct Student students[], int numStudents) {
  float sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += students[i].grade;
  }
  return sum / numStudents;
}

// Function to calculate lowest grade
double calculateLowGrade(struct Student students[], int numStudents) {
  float lowest = 10000; // Use arbitrary high number to first set lowest grade variable
  for (int i = 0; i < numStudents; i++) {
    if (students[i].grade < lowest) {
      lowest = students[i].grade;
    }    
  }
  return lowest;
}

// Function to calculate highest grade
double calculateHighGrade(struct Student students[], int numStudents) {
  float highest = 0;
  for (int i = 0; i < numStudents; i++) {
    if (students[i].grade > highest) {
      highest = students[i].grade;
    }
  }
  return highest;
}