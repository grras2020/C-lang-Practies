/*
typedef in c
The typedef is a keyword used in C programming to provide some meaningful names to 
    the already existing variable in the C program. It behaves similarly as we define 
    the alias for the commands. In short, 
    we can say that this keyword is used to redefine the name of an already existing variable.
syntex:
    typedef <existing_name> <alias_name>
*/
#include<stdio.h>
#include<string.h>
// //structure decleare as global
// struct date{
//     int day;
//     int month;
//     int year;
// };
struct employee{
    int emp_id;
    char emp_name[20];
    char emp_dep[20];
    float emp_salary;
    struct date{ //nested structure declearation
        int day;
        int month;
        int year;
    }emp_dob;//dob is a structure variable
    //struct date dob; //global structure variable declearation
};
typedef struct employee employee;
typedef struct employee* employee_p;

void inputEmpInfo(employee_p emp)
{
    //emp->emp_id = 101;//member call using pointer_name with (->) operator
    printf("ID\t\t= ");scanf("%d",&(emp->emp_id));
    printf("Name\t\t= ");scanf(" ");gets(emp->emp_name);
    printf("DateOfBirth\t= ");scanf("%d/%d/%d",&(emp->emp_dob.day),&(emp->emp_dob.month),&(emp->emp_dob.year));
    printf("Department\t= ");scanf(" ");gets(emp->emp_dep);
    printf("Salary\t\t= ");scanf("%f",&(emp->emp_salary));
}
void showEmpInfo(employee_p emp)
{
    printf("%d\t%s\t\t%d/%d/%d\t%s\t\t\t%.2f\n",
    emp->emp_id,
    emp->emp_name,
    emp->emp_dob.day,
    emp->emp_dob.month,
    emp->emp_dob.year,
    emp->emp_dep,
    emp->emp_salary);
}
void main()
{
    //struct employee emp1;
    //emp1.emp_id = 101;//member call using reference_name with (.) operator
    int emp_members = 4;
    employee emp[emp_members];
    for(int i=0;i<emp_members;i++)
    {
        printf("Insert informition about employee %d :-\n",i+1);
        inputEmpInfo(&emp[i]);
    }
    printf("\nID\tName\t\tDateOfBirth\tDepartment\t\tSalary\n");
    for(int i=0;i<emp_members;i++)
        showEmpInfo(&emp[i]);
}


