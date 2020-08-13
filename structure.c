/*
Why use structure?
------------------
there are cases where we need to store multiple attributes of an entity.
It is not necessary that an entity has all the information of one type only.
It can have different attributes of different data types.
For example, an entity Student may have its name (string), roll number (int), marks (float).
To store such type of information regarding an entity student

What is Structure:
------------------
Structure in c is a user-defined data type that enables us to store the collection of different data types.
Each element of a structure is called a member.

The ,struct keyword is used to define the structure. 
Let's see the syntax to define the structure in c.
------------------------------------------------------
    struct structure_name
    {
        data_type attribute1;
        data_type attribute2;
        data_type attribute3;
        data_type attribute4;
        ..................N;
    };

    structure declearation:
    struct structure_name variabile_name;

Example of structure:-
*/
#include<stdio.h>
#include<string.h>
struct date
{
    int day;//4 bytes
    int month;//4 bytes
    int year;//4 bytes
};
struct student
{
    char name[20];//20 bytes
    int roll_number;//4 bytes
    float marks;//4 bytes
    struct date dob;//12 bytes
};//s1,s2,s3;//global var
//struct student s;//global var
void main()
{
    struct student s1,s2,s3;//local var
    /*
    struct date dob;
    dob.day = 12;
    dob.month = 12;
    dob.year = 1991;
    printf("date of birth : %d/%d/%d\n",dob.day,dob.month,dob.year);
    */
    //s1 values inilization
    s1.roll_number = 101;
    strcpy(s1.name,"ravi");
    s1.marks = 89.99;
    s1.dob.day = 12;
    s1.dob.month = 12;
    s1.dob.year = 1991;

    //s2 values inilization
    s2.roll_number = 102;
    strcpy(s2.name,"ajay");
    s2.marks = 56.69;
    s2.dob.day = 7;
    s2.dob.month = 8;
    s2.dob.year = 1994;

    //s3 values inilization
    s3.roll_number = 103;
    strcpy(s3.name,"vijay");
    s3.marks = 85.33;
    s3.dob.day = 28;
    s3.dob.month = 8;
    s3.dob.year = 2007;

    // int size = sizeof(struct student);
    // printf("size = %d bytes\n",size);

    //display of s1 values
    printf("%d\t%s\t%d/%d/%d\t%.2f\n",s1.roll_number,s1.name,s1.dob.day,s1.dob.month,s1.dob.year,s1.marks);

    //display of s2 values
    printf("%d\t%s\t%d/%d/%d\t%.2f\n",s2.roll_number,s2.name,s2.dob.day,s2.dob.month,s2.dob.year,s2.marks);

    //display of s3 values
    printf("%d\t%s\t%d/%d/%d\t%.2f\n",s3.roll_number,s3.name,s3.dob.day,s3.dob.month,s3.dob.year,s3.marks);

}