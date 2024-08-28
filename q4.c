#include<stdio.h>
main()
{
    float pi=3.14,r,formula;
    printf("Enter a value of r:");
    scanf("%f",&r);
    formula =(pi*r*r*r)*4/3;
    printf("pi*r*r*r*4/3=%.2f",formula);
}