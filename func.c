#include<stdio.h>

void input(int *temp)
{
    printf("Enter Number = ");scanf("%d",temp);
}
int Input()
{
    int temp;
    printf("Enter Number = ");scanf("%d",&temp);
    return temp;
}

void func(int x,int y)
{
    if(x<=y)
    {
        printf("%d, ",x);
        func(x+1,y);
    }
    else
    {
        printf(" \b\b\b ");
    }

}
void table(int x,int y)
{
    if(x<=(y*10))
    {
        printf("%d, ",x);
        table(x+y,y);
    }
    else
    {
        printf(" \b\b\b \n");
    }

}


void main()
{

    //func(2,20);
    table(1,5);
    table(4,4);
    // int a,b,c;
    // input(&a);
    // b = Input();
    // input(&c);

    // printf("a = %d\tb = %d\tc = %d",a,b,c);

}