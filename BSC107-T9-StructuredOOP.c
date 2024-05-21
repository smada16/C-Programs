#include <stdio.h>
#include <string.h>

typedef struct Student {
  char name[20];
  int student_number;
  int semester;
  int class_code;
  double GPA;
} student;


int main(void) {

  student student_1, student_2, student_3, student_4, student_array[50];
  
  // Fill info for student 1
  student_1.student_number = 25514;
  student_1.semester = 1;
  student_1.class_code = 545;
  student_1.GPA = 3.5;
  strcpy(student_1.name, "Nestor");

  // Print some student 1 information
  printf("Student 1 number = %d \n", student_1.student_number);
  printf("Student 1 semster = %d \n", student_1.semester);
  printf("Student 1 class code = %d \n", student_1.class_code);

  // Fill information for student 2...

  // Fill information for student 3...

  // Fill informatiom for student 4...

  // Change student number for student number 0 in array of 50 students
  student_array[0].student_number = 12345;
  
  
  return 0;
}