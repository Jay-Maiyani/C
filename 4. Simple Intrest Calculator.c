#include <stdio.h>

int main() 
{
// defining the variables
  int S, P, R, T;
  printf("Enter principal amount =\n");
  scanf("%d",&P);
  printf("Enter rate of intrest =\n");
  scanf("%d",&R);
  printf("Enter time of intrest =\n");
  scanf("%d",&T);
//formula
  S = (P*R*T)/100;
  printf("The Simple intrest is = %d",S);
  return 0;
}