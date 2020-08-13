#include<stdio.h>

void main()
{
    /*menu list
        a.Addition
        b.Substraction
        c.Multiply
        d.division
        Choose your option :  
    */
   int a,b;
   char opt;
   do{
        printf("\n------\na.Addition\nb.Substraction\nc.Multiply\nd.Division\nChoose your option : ");
        scanf(" %c",&opt);
        //printf("enter values : ");scanf("%d%d",&a,&b);

            /*
            if(opt == 1)
            {
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Addition = %d",a+b);
            }
            else if (opt == 2)
            {
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Substraction = %d",a-b);
            }
            else if (opt == 3)
            {
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Multiply = %d",a*b);
            }
            else if (opt == 4)
            {
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Division = %d",a/b);
            }
            else
            {
                printf("\nInvaild Option you select!");
            }
            */
            switch (opt)
            {
            case 'a':
            case '+':
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Addition = %d",a+b);
                break;
            case 'b':
            case '-':
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Substraction = %d",a-b);
                break;
            case 'c':
            case '*':
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Multiply = %d",a*b);
                break;
            case 'd':
            case '/':
                printf("enter values : ");scanf("%d%d",&a,&b);
                printf("Division = %d",a/b);
                break;
            default:
                printf("\nInvaild Option you select!");
                break;
            }
            printf("\ndo you want to continue...[y/n] : ");
            scanf(" %c",&opt);
   }while(opt=='y'||opt=='Y');
   printf("\nThank you for using my application !!\n");
}

/*
Definition
if-else
========
Based on the result of the expression in the 'if-else' statement, 
the block of statements will be executed. If the condition is true, 
then the 'if' block will be executed otherwise 'else' block will execute.

switch statement
=================
The switch statement contains multiple cases or choices. 
The user will decide the case, which is to execute.
*/