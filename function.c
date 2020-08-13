#include<stdio.h>
/*
   In c, we can divide a large program into the basic building blocks known as function.
   The function contains the set of programming statements enclosed by {}.
   A function can be called multiple times to provide reusability and modularity to the C program.
   In other words, we can say that the collection of functions creates a program.
   The function is also known as procedureor subroutinein other programming languages.

   There are the following advantages of C functions.
   --------------------------------------------------
        By using functions, we can avoid rewriting same logic/code again and again in a program.
        We can call C functions any number of times in a program and from any place in a program.
        We can track a large C program easily when it is divided into multiple functions.
        Reusability is the main achievement of C functions.
        However, Function calling is always a overhead in a C program.

Function declaration :- A function must be declared globally in a c program to tell the compiler about 
                        the function name, function parameters, and return type.

Function call :- Function can be called from anywhere in the program. The parameter list must not 
                differ in function calling and function declaration. We must pass the same number of 
                functions as it is declared in the function declaration.

Function definition :- It contains the actual statements which are to be executed.
                It is the most important aspect to which the control comes when the function is called.
                Here, we must notice that only one value can be returned from the function.

1	Function declaration	return_type function_name (argument list);
2	Function call	        function_name (argument_list);
3	Function definition	    return_type function_name (argument list) {function body;} 

There are two types of functions in C programming:

Library Functions: are the functions which are declared in the C header files 
                    such as scanf(), printf(), gets(), puts(), ceil(), floor() etc.

User-defined functions: are the functions which are created by the C programmer,
so that he/she can use it many times. It reduces the complexity of a big program and optimizes the code.

Different aspects of function calling
--------------------------------------
A function may or may not accept any argument. It may or may not return any value.
Based on these facts, There are four different aspects of function calls.

1. function without arguments and without return value
    void show();
2. function without arguments and with return value
    int show();
3. function with arguments and without return value
    void show(int,int);
4. function with arguments and with return value
    int show(char,int);

*/
#include<stdarg.h>
void show(char,int);
int sum(int,int);
int sub(int,int);
int multi(int,int);
float div(float,float);
void show2();

// void display(int a,...)
// {
//     va_list vlist;
//     va_start(vlist,a);
//     printf("a = %d\n%d\n",a,va_arg(vlist,int));
//     printf("a = %d\n%d\n",a,va_arg(vlist,int));
//     printf("a = %d\n%d\n",a,va_arg(vlist,int));
// }

void main()
{
    //display(10,8,5);
    int a = sum(2,4);
    int b = sub(54,24);
    int c = multi(2,4);
    float d = div(5,4);
    printf("\n\nsum = %d\n",a);
    printf("sub = %d\n",b);
    printf("multi = %d\n",c);
    printf("div = %.2f\n",d);
}

void show(char ch,int i)
{
    printf("agrument func");
}

int sum(int x,int y)
{
    return (x+y);
}
int sub(int x,int y)
{
    return (x-y);
}
int multi(int x,int y)
{
    return (x*y);
}
float div(float x,float y)
{
    return (x/y);
}
void show2()
{
    printf("show func");
}
