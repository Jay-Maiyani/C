#include <stdio.h>

int main() 
{
  int n1, n2, sum; // for defining variables
  printf("Enter first number =\n");
  scanf("%d",&n1); //use scan function for inputing value from keyboard and storing it somewhere
  printf("Enter second number =\n");
  scanf("%d",&n2);
  sum = n1 + n2;
  printf("The sum of numbers is = %d",sum);
  return 0;
}