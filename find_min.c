#include<stdio.h>

void main()
{
    int a=98,b=2,c=8,d=9,min,max;
    //char min;
    //a<b ? (a<c ? printf("a is min value") : printf("c is min value")) : (b<c ? printf("b is min value") : printf("c is min value")) ;
    //min = a<b ? (a<c ? 'a' : 'c' ) : (b<c ? 'b' : 'c') ;
    //printf("%d is min value",a<b ? (a<c ? a : c ) : (b<c ? b : c));
    min = a<b ? (a<c ? a : c ) : (b<c ? b : c);
    min = min<d ? min : d ;
    printf("%d is min value\n",min );

    max = a>b ? (a>c ? a : c ) : (b>c ? b : c);
    max = max>d ? max : d ;
    printf("%d is max value",max );

/*
ladder if else-if
    if(a<b&a<c)
    {
        printf("a is min value");
    }
    else if(b<c)
    {
        printf("b is min value");
    }
    else
        printf("c is min value");
*/

    /*
    nested if-else
    if(a<b)
    {
        if(a<c)
            printf("a is min value");
        else
            printf("c is min value");
    }
    else
    {
        if(b<c)
            printf("b is min value");
        else
            printf("c is min value");
    }*/
}
