#include<stdio.h>
main()
{
    int a;
    printf("Enter a value of a:");
    scanf("%d",&a);

    for (int i=20;i>=a;i--){
        printf("%d\n",i);
    }
   

}