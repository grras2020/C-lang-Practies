#include<stdio.h>
void main()
{
    int i,j;
    for(i='A';i<='E';i++)
    {
        for(j='D';j>=i;j--)
            printf(" ");
        for(j='A';j<=i;j++)
            printf("%c",j);
        for(j=i-1;j>='A';j--)
            printf("%c",j);
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=4;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
}
/*
      1
     121
    12321
   1234321
  123454321    
   1234321
    12321
     121
      1
A = 65,E = 69
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA    
  */