#include<stdio.h>
void main()
{
    for (int i = 1;i<=20; i+=1)
    {
        if (i%2==0)
        {
            //break;
            continue;
        }
        printf("%d\n",i);
    }
    
}