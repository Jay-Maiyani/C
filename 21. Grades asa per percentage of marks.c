#include <stdio.h>
int main() 
{
int n1,n2,n3,total,percent;
printf("Enter marks of PPS: ");
scanf("%d",&n1);
printf("Enter marks of Maths: ");
scanf("%d",&n2);
printf("Enter marks of Chemistry: ");
scanf("%d",&n3);
total=n1+n2+n3;
printf("\nYour total marks are = %d",total);
percent=(n1+n2+n3)/3;
printf("\nYour percentage is = %d\n",percent);
switch(percent/10)
{
case 9:printf("Grade A\n"); break;
case 8:printf("Grade B\n"); break;
case 7:printf("Grade C\n"); break;
case 6:printf("Grade D\n"); break;
case 5:printf("Grade E\n"); break;
default:printf("Grade F\n");
}
}