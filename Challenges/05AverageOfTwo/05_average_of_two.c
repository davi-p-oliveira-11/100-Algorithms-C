/*

5) Write a program that reads a student's two grades in a subject and shows their average in the subject.
Example:
Grade 1: 4.5
Grade 2: 8.5
The average between 4.5 and 8.5 is equal to 6.5.

*/

#include <stdio.h>

int main() {

  float grade1, grade2, average;

  printf("Enter the first grade: ");
  scanf("%f", &grade1);

  printf("Enter the second grade: ");
  scanf("%f", &grade2);

  average = (grade1 + grade2) / 2;

  printf("The average between %f and %f is equal to %f\n", grade1, grade2, average);
  
  printf("Press Enter to Exit ...");
  getchar();
  getchar();

  return 0;
}