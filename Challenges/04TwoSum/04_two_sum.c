/*
 4) Develop an algorithm that reads two integers and shows the sum between them.  
Example:  
Enter a value: 8  
Enter another value: 5  
The sum between 8 and 5 is equal to 13.
*/

#include <stdio.h>

int main() {
  int num1, num2, sum;

  printf("Enter a value: ");
  scanf("%d", &num1);

  printf("Enter another value: ");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("The sum between %d and %d is equal to: %d\n", num1, num2, sum);

  printf("Press Enter to exit ...");
  getchar();
  getchar();

  return 0;
}