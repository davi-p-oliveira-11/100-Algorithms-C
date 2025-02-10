/*
  3) Create a program that reads an employee's name and salary, displaying a message at the end.
  Example:
  Employee's Name: Jane Doe
  Salary: 1850.45
  The employee Jane Doe has a salary of $1850.45 in June.
*/

#include <stdio.h>

int main() {
  char name[20];
  int salary;

  printf("Enter your name: ");
  scanf("%s", &name);
 
  printf("Enter your salary: ");
  scanf("%d", &salary);

  printf("The Employee %s has a salary of %d\n", name, salary);
  
  printf("Press Enter to exit ...");
  getchar();
  getchar();

  return 0;
}