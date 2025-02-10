/*
2) Write a program that reads a person's name and displays a welcome message for them:  
Example:  
What is your name? John Doe  
Hello John Doe, it's a pleasure to meet you!
*/

#include <stdio.h>

int main() {
  char name[20];

  printf("What is your Name ?");
  scanf("%s", name);
  getchar();

  printf("Hello %s, nice to meet you !", name);
  getchar();

  return 0;
}