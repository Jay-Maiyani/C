#include <stdio.h>

int main() 
{
  int num1, num2;
  printf("Enter the first number =\n");
  scanf("%d",&num1);
  printf("Enter the second number =\n");
  scanf("%d",&num2);
  if(num1>num2) //this is format of if else statement
  {
    printf("The largest number among %d and %d is the first number %d",num1,num2,num1);
  }
  else if(num2>num1)
  {
    printf("The largest number among %d and %d is the second number %d",num1,num2,num2); //if we want our defined number in our ouput than we need to use %d
  }
  else
  {
    printf("Numbers are equal");
  }
  return 0;
}