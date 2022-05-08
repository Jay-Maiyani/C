#include <stdio.h>

int main() 
{
  int num;
  printf("Enter the number \n");
  scanf("%d",&num);
  if(num%2==0)//% sign signifies remainder of two number after dividing
  {	
    printf("the number %d is even",num);
  }
  else{
    printf("the number %d is odd",num);
  }
  return 0;
}