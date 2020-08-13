/*
C Loops
========
The looping can be defined as repeating the same process multiple times until a specific condition satisfies. 
There are three types of loops used in the C language. In this part of the tutorial,
we are going to learn all the aspects of C loops.

# Why use loops in C language?
-----------------------------
The looping simplifies the complex problems into the easy ones. It enables us to alter the flow of the program so that
instead of writing the same code again and again, we can repeat the same code for a finite number of times. For example,
if we need to print the first 10 natural numbers then, instead of using the printf statement 10 times, 
we can print inside a loop which runs up to 10 iterations.

# Advantage of loops in C
-----------------------------
1) It provides code reusability.

2) Using loops, we do not need to write the same code again and again.

3) Using loops, we can traverse over the elements of data structures (array or linked lists).

# Types of C Loops
-----------------
There are three types of loops in C language that is given below:---
do while
while
for

do while loop:syntex--
-----------------
do{  
//code to be executed  
}while(condition);


while loop:syntex--
-----------------
while(condition){  
//code to be executed  
}  

for loop:syntex--
-----------------
for( initialization ; condition ; incr/decr ){  
//code to be executed  
} 
*/
#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
void main()
{
    int i,j;

    for(j=1;j<=10;j++)
    {
        for(i=1;i<=j;i++)
            printf("%d",i);
        printf("\n");
    }

    

    // int num,a,b;
    // printf("Enter any number: ");scanf("%d",&num);

    // // for(int i = num;i<=num*10;i+=num)
    // //     printf("%d ",i);

    // for(int i=1;i<=10;i++){
    //     printf("%d*%d = %d\n",num,i,i*num);
    // }
       
    // char opt;
    // do{
    //     printf("\nenter a and b = ");scanf("%d%d",&a,&b);
    //     printf("sum = %d\n",a+b);
    //     printf("do you want to continue ! : ");
    //     scanf(" %c",&opt);
    // }while (opt == 'y'||opt == 'Y');
    // int i=1;      
    // while(i<=10){      
    //     printf("%d \n",i);  
    //     i++;          
    // } 
    // int i,j;
    // for(j=1;j<=10;j++)
    // {
    //     for(i=1 ; i<=15 ; i++)
    //     {
    //         //if(i%2!=0)
    //             printf("%d\t",i*j);
    //         // else
    //         //     printf(" ");
    //     }
    //     printf("\n");
    // }
    
}



