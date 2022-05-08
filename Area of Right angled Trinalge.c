#include <stdio.h>

int main() {
  int A, h, b;
  printf("Enter height of triangle =\n");
  scanf("%d",&h);
  printf("Enter base of triangle =\n");
  scanf("%d",&b);
//formula
  A = (h*b)/2;
  printf("The Area of right triangle is = %d",A);
  return 0;
}