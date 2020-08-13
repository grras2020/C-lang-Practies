#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=9;j>=i;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            //if(j==1)
            printf("%d",j);
            //else
            //printf("  ");
        }
        for(int j=i-1;j>=1;j--)
        {
            //if(j==1)
            printf(" %d",j);
            //else
            //printf("  ");
        }
        printf("\n");
    }
    for(int i=10;i>=1;i--)
    {
        for(int j=9;j>=i;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            //if(j==1)
            printf("%d",j);
            //else
            //printf("  ");
        }
        for(int j=i-1;j>=1;j--)
        {
            //if(j==1)
            printf(" %d",j);
            //else
            //printf("  ");
        }
        printf("\n");
    }
}