// There are 9,870 people in a town whose population increases by 10% each
// year.
// Write a loop that displays the annual population and determines how many
// Cody Adams

#include <stdio.h>

int main(void) {

  // initialise variables
  int population = 9870;
  int count_years = 0;

  while (population <= 30000) {
    printf("Population: ");
    printf("%d\n", population);
    population = population * 1.1;
    count_years ++;
  }

  printf("Years taken for population to exceed 30,000: ");
  printf("%d\n", count_years + 1);
  
  return 0;
}





