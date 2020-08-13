#include<stdio.h>
void main()
{
    int a=3,b;
    b = ++a + a++ + a++;
    //=   4 + 4 + 3
        printf("b = %d",b);
}
