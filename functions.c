/*
returntype funcname(parameter...)
{
        body
}
*/
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

void display(int a,int b,int c)
{
    printf("a = %d\tb = %d\tc = %d\n",a,b,c);
}
void show()
{
    printf("show\n");
}
int intInput()
{
    int temp;
    printf("Enter Number : ");scanf("%d",&temp);
    return temp;
}
int getRoll()
{
    int temp;
    printf("Enter Roll No. : ");scanf("%d",&temp);
    return temp;
}
void main()
{
    int a,b;
    int roll;
    roll = getRoll();
    printf("roll = %d\n",roll);
    a = intInput();
    b = intInput();
    int x = sum(a,b);
    int y = sum(2,9);
    int z = sum(7,3);
    //display(22,33,44);
    display(x,y,z);
    show();
}
