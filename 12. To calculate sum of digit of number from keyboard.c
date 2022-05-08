#include <stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
while(num>0)
    {
        i=num%10;
        sum=sum+i;
        num=num/10;
    }
printf("Sum is %d",sum);
return 0;
}