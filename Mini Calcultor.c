#include<stdio.h>
#include<stdlib.h> //for exit (0) line no. 73
#include<math.h> // for sqrt,pow and etc
int main()
{
int a,b,c;
double d,e,f;
hello:
printf("\n\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Square root\n8.Power\n9.Exit\n\nEnter your choice: ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("First number: ");
scanf("%d",&b);
printf("Second number: ");
scanf("%d",&c);
printf("Addition of %d and %d is %d",b,c,b+c);
goto hello;
break;
case 2:
printf("First number: ");
scanf("%d",&b);
printf("Second number: ");
scanf("%d",&c);
printf("Subtraction of %d and %d is= %d",b,c,b-c);
goto hello;
break;
case 3:
printf("First number: ");
scanf("%d",&b);
printf("Second number: ");
scanf("%d",&c);
printf("Multiplication of %d and %d is= %d",b,c,b*c);
goto hello;
break;
case 4:
printf("First number: ");
scanf("%d",&b);
printf("Second number: ");
scanf("%d",&c);
printf("Quotient of %d and %d is %d\n",b,c,b/c);
printf("Remainder of %d and %d is %d",b,c,b%c);
goto hello;
break;
case 5:
printf("Enter a number: ");
scanf("%d",&b);
printf("Square of %d is %d",b,b*b);
goto hello;
break;
case 6:
printf("Enter a number ");
scanf("%d",&b);
printf("Cube of %d is %d",b,b*b*b);
goto hello;
break;
case 7:
printf("Enter a number ");
scanf("%lf",&d);
printf("Square root of %lf is %lf",d,sqrt(d));
goto hello;
break;
case 8:
printf("Enter a number ");
scanf("%d",&b);
printf("Enter the power");
scanf("%d",&c);
printf("%d to the power of %d is %lf",b,c,pow(b,c));
goto hello;
break;
case 9:
exit(0);
default:printf("Invalid choice..!!");
goto hello;
}
}