/*
pointer
=======
The pointer in C language is a variable which stores the address of another variable.
This variable can be of type int, char, array, function, or any other pointer.
The size of the pointer depends on the architecture.

Consider the following example to define a pointer which stores the address of an integer.

int n = 10;   
int* p = &n; // Variable p of type pointer is pointing to the address of the variable n of type integer.   
Declaring a pointer
The pointer in c language can be declared using * (asterisk symbol). 
It is also known as indirection pointer used to dereference a pointer.

int *a;//pointer to int  
char *c;//pointer to char 
*/
#include<stdio.h>

void display(int *p)
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\n");
}

void inputArrays(int *p)
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",p+i);
    }
}
void show(void (*p)(int*))
{
    int a[6];
    (*p)(a);
}

void main()
{
    int arr[] = {2,4,5,3,6,8};
    // display(arr);
    // inputArrays(arr);
    // display(arr);
    void (*p)(int*) = display;
    p(arr);
    display(arr);
    show(inputArrays);
    show(display);
    
    //printf("address of arr = %u\t%u\t%u\n",*p,*(p+1),*(p+2));
    //printf("address of arr = %u\t%u\t%u\n",p[0],p[1],p[2]);
    // int n = 10;
    // int* p = &n;
    // printf("n = %d\n",n);
    // scanf("%d",p);
    // printf("n = %d\n",*p);//By the help of * (indirection operator), we can print the value of pointer variable p.
    // printf("ADDRESS of n variable : %x\t%u\n",p,p);
    // printf("%u",&n);
}