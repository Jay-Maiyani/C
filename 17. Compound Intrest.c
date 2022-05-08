#include <stdio.h>
#include <math.h> //library for c (predefined, stdio also predefined)
int main()
{
float P, R, T, CI;
printf("Enter Principle amount: ");
scanf("%f", &P);
printf("Enter Time: ");
scanf("%f", &T);
printf("Enter Rate: ");
scanf("%f", &R);
    CI = P* (pow((1 + R / 100), T));
printf("Compound Interest = %0.2f", CI);
}