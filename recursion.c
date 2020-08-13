#include<stdio.h>
/*
Recursion is the process which comes into existence when a function calls a copy of itself 
to work on a smaller problem. Any function which calls itself is called recursive function, 
and such function calls are called recursive calls. Recursion involves several numbers of recursive calls.
However, it is important to impose a termination condition of recursion. Recursion code is shorter
than iterative code however it is difficult to understand.
*/
int getInt()
{
    int temp;
    printf("Enter Number : ");scanf("%d",&temp);
    return temp;
}
// void show()
// {
//     static int count = 0;
//     printf("show-%d to show-%d\n",count,count+1);
//     count++;
//     if(count<=10)
//         show();
//     printf("back to %d\n",count--);
// }

void loop(int start,int end)
{
    printf("%d ",start);
    if(start<end)
        loop(start+1,end);
}

void For()
{
    static int i=0;
    printf("%d ",i++);
}

void main()
{
    loop(0,10);
    printf("\n**************************\n");
    for(int i=0;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\n**************************\n");
    For();
    For();
    For();
    For();
    For();
    For();
    For();
    For();
    For();
    For();
    For();

}