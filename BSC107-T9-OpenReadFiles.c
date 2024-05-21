#include <stdio.h>
#include <string.h>

int main(void) {

  // Define student information
  char first_name[20] = "Cody";
  char last_name[20] = "Adams";
  int id = 25514;
  double GPA = 4.9;

  // Create string variables for writing and reading into file
  char string_to_write_into_file[100];
  char string_to_read_from_file[100];

  // Write student information into a string
  sprintf(string_to_write_into_file, "Full Name: %s %s. Id: %d. GPA: %lf. \n", first_name, last_name, id, GPA);

  // Open file in APPEND mode
  FILE *my_file = fopen("my_text_file.txt", "a+");

  // Write the string into the file
  fprintf(my_file, "%s \n", string_to_write_into_file);

  printf("The string that was written into the file is: %s \n", string_to_write_into_file);
  
  // READING FROM FILE:

  //re-set the pointer back to the start of the text file
  rewind(my_file);

  fgets(string_to_read_from_file, 100, my_file);

  printf("the string that was read from the file is %s", string_to_read_from_file);

  fclose(my_file);
  
  
  return 0;
}