#include <stdio.h>
int main()
{
int number,i,product;
printf("Enter the number for its table = ");
scanf("%d",&number);

for(i=1;i<=10;i++)
    {
product=number*i;
printf(" %d*%d=%d\n",number,i,product);
    }
}