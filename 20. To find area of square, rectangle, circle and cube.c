#include <stdio.h>
#define pi 3.14
int main() 
{
int c;
float a,b,area;
area:
printf(" 1.Area of Square\n 2.Area of Rectangle\n 3.Area of Circle\n 4.Area of Cylinder\n 5.Area of Cube\n ");
printf("\nEnter your option: ");
scanf("%d",&c);
switch(c)
    {
case 1:printf("Enter side of square ");
scanf("%f",&a);
printf("Area of square is %f",a*a);
break;
case 2:printf("Enter length of rectangle ");
scanf("%f",&a);
printf("Enter breadth of rectangle ");
scanf("%f",&b);
printf("Area of rectangle is %f",a*b);
break;
case 3:printf("Enter radius of circle ");
scanf("%f",&a);
printf("Area of circle is %f",pi*a*a);
break;
case 4:printf("Enter height of cylinder ");
scanf("%f",&a);
printf("Enter radius of cylinder ");
scanf("%f",&b);
printf("Area of cylinder is %f",2*pi*b*b+2*pi*b*a);break;
case 5:printf("Enter side of cube ");
scanf("%f",&a);
printf("Area of cube is %f",6*a*a);
break;
default:printf("Choose from 1 to 5 only! \n\n");
goto area;
    }
}