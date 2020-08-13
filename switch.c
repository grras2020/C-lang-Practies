#include<stdio.h>

void main()
{

    int opt,a,b;
    printf("1. sum\n2. sub\n3. multi\n");
    printf("Enter your option : ");scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter value of a and b : ");scanf("%d%d",&a,&b);
        printf("case 1 is execute ! \n");
        printf("sum = %d",a+b);
        break;
    case 2:
        printf("Enter value of a and b : ");scanf("%d%d",&a,&b);
        printf("case 2 is execute ! \n");
        printf("sub = %d",a-b);
        break;

    case 3:
        printf("Enter value of a and b : ");scanf("%d%d",&a,&b);
        printf("case 3 is execute ! \n");
        printf("multiply = %d",a*b);
        break;
    
    default:
        printf("default is execute ! \n");

        break;
    }
}