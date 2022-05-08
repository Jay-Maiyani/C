#include<stdio.h>
int main()    
{    
int a,b;      
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
//for exchanging values      
a=a+b;  
b=a-b;    
a=a-b;
printf("Swapping\n a = %d b = %d",a,b);    
}   
