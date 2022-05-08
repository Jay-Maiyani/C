#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter First number:\n");
scanf("%d",&a);
printf("Enter Second number:\n");
scanf("%d",&b);
printf("Enter Third number:\n");
scanf("%d",&c);
printf("(a == b) && (c > b) is %d \n", (a == b) && (c > b));
printf("(a != b) || (c < b) is %d \n", (a != b) || (c < b));
printf("!(a != b) is %d \n", !(a != b));
printf("!(a == b) is %d \n", !(a == b));
}