#include <stdio.h>
int main() 
{
    int n1,n2,n3;
     printf("First number: ");
     scanf("%d",&n1);
     printf("Second number: ");
     scanf("%d",&n2);
     printf("Third number: ");
     scanf("%d",&n3);
    {
        if(n1>n2)
        {
            if(n1>n3)
                {
                    printf(" \n %d is the greatest among three\n",n1);
                }
            else
                {
                    printf(" \n %d is the greatest among three\n",n3);
                }
        }
        else if(n2>n3)
        {
            printf(" \n %d is the greatest among three\n",n2);
        }
        else
        {
            printf(" \n %d is the greatest among three\n",n3);
        }
    }
    { 
        if(n1<n2)
            {
                if(n1<n3)
                    {
                        printf(" \n %d is the smallest among three\n",n1);
                    }
                else
                    {
                        printf(" \n %d is the smallest among three\n",n3);
                    }
            }
        else if(n2<n3)
            {
                printf(" \n %d is the smallest among three\n",n2);
            }
        else
            {
                printf(" \n %d is the smallest among three\n",n3);
            }
    } 
}