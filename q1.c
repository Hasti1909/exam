#include<stdio.h>
main()
{
    int Firstangle, Secondangle, Thirdangle;
    printf("Enter the Firstangle of a triangle:");
    scanf("%d",&Firstangle);
    printf("Enter the Secondangle of a triangle:");
    scanf("%d",&Secondangle);
    Thirdangle = 180 - (Firstangle + Secondangle);
    printf("Enter the Thirdangle of a triangle:%d",Thirdangle);
    
}