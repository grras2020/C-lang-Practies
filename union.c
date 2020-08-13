/*
Like structure, Union in c language is a user-defined data type 
    that is used to store the different type of elements.

At once, only one member of the union can occupy the memory. 
In other words, we can say that the size of 
the union in any instance is equal to the size of its largest element.

*/
#include<stdio.h>
#include<string.h>
union student
{
    char name[20];//20 bytes
    int roll_number;//4 bytes
    float marks;//4 bytes
};
void main()
{
    union student s1;
    s1.roll_number = 121;
    s1.marks = 87.99;
    strcpy(s1.name,"ravi");

    printf("%s\t%d\t%.2f\n",s1.name,s1.roll_number,s1.marks);
    printf("size = %d",sizeof(union student));
}