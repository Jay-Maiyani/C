#include <stdio.h>
int main() 
{
int x,y,z;      
printf("First number = ");
scanf("%d",&x);
printf("Second number = ");
scanf("%d",&y);
printf("Third number = ");
scanf("%d",&z);
//for swapping x y and z      
    x=x+y+z;
    z=x-y-z;
    y=x-y-z;
    x=x-y-z;
printf("Result of swapping->\n x = %d \n y = %d \n z = %d",x,y,z);    
}