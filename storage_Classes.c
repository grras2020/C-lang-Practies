#include<stdio.h>

/*
Storage classes in C are used to determine the lifetime, visibility, memory location, 
and initial value of a variable. There are four types of storage classes in C

Automatic
==========
# Automatic variables are allocated memory automatically at runtime.
# The visibility of the automatic variables is limited to the block in which they are defined.
# The scope of the automatic variables is limited to the block in which they are defined.
# The automatic variables are initialized to garbage by default.
# The memory assigned to automatic variables gets freed upon exiting from the block.
# The keyword used for defining automatic variables is auto.
# Every local variable is automatic in C by default.
*/
void Automatic()
{
    int a;// by default automatic variable
    auto int b;//automatic variable 
    printf("a = %d\tb = %d\n",a,b);
    a = 10;
    b = 20;
    printf("a = %d\tb = %d\n",a,b);
}
/*
-------------------------------------------------------------------------------------------
External
=========
# The external storage class is used to tell the compiler that the variable defined as extern
  is declared with an external linkage elsewhere in the program.
# The variables declared as extern are not allocated any memory. It is only declaration 
  and intended to specify that the variable is declared elsewhere in the program.
# The default initial value of external integral type is 0 otherwise null.
# We can only initialize the extern variable globally,
  i.e., we can not initialize the external variable within any block or method.
# An external variable can be declared many times but can be initialized at only once.
# If a variable is declared as external then the compiler searches for that variable to be initialized
  somewhere in the program which may be extern or static. If it is not, then the compiler will show an error.
*/
int b;
void External()
{
    int a;// by default automatic variable
    extern int b;//external variable / variable a is defined globally, the memory will not be allocated to a  
    printf("a = %d\tb = %d\n",a,b);
    a = 10;
    b = 20;
    printf("a = %d\tb = %d\n",a,b);
}
/*
-----------------------------------------------------------------------------------------------------------
Static
=======
# The variables defined as static specifier can hold their value between the multiple function calls.
# Static local variables are visible only to the function or the block in which they are defined.
# A same static variable can be declared many times but can be assigned at only one time.
# Default initial value of the static integral variable is 0 otherwise null.
# The visibility of the static global variable is limited to the file in which it has declared.
# The keyword used to define static variable is static.
*/
void Static()
{
    int a=0;// by default automatic variable
    static int x=0;// static variable
    //printf("a = %d\tx = %d\n",a,x);
    a++;
    x++;
    printf("a = %d\tx = %d\n",a,x);
}
/*
------------------------------------------------------------------------------------------------------------
Register
=========
# The variables defined as the register is allocated the memory into the CPU registers
  depending upon the size of the memory remaining in the CPU.
# We can not dereference the register variables, i.e., we can not use &operator for the register variable.
# The access time of the register variables is faster than the automatic variables.
# The initial default value of the register local variables is 0.
# The register keyword is used for the variable which should be stored in the CPU register.
  However, it is compiler?s choice whether or not; the variables can be stored in the register.
# We can store pointers into the register, i.e., a register can store the address of a variable.
# Static variables can not be stored into the register since we can not use more than one storage
  specifier for the same variable.
*/
void Register()
{
    int a;// by default automatic variable
    register int r;//register variable 
    printf("a = %d\tr = %d\n",a,r);
    a = 10;
    r = 20;
    printf("a = %d\tr = %d\n",a,r);
    //printf("a = %u\tr = %u\n",&a,&r);
}
/*
-------------------------------------------------------------------------------------------------------------
Storage Classes	Storage Place	Default Value	Scope	Lifetime
-----------------------------------------------------------------
auto	        RAM	            Garbage Value	Local	Within function
extern	        RAM	            Zero	        Global	Till the end of the main program Maybe declared anywhere in the program
static	        RAM	            Zero	        Local	Till the end of the main program, Retains value between multiple functions call
register	    Register	    Garbage Value	Local	Within the function

*/
int var;//global scope
void main()
{
    int var;//local scope
    //Automatic();
    // b = 30;
    // External();
    // printf("main -> b = %d\n",b);
    
    // Static();
    // Static();
    // Static();

    Register();
}

