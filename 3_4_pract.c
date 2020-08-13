#include<stdio.h>

//auto loacl  ram garbage
//extern  global  ram zero
//static  global  ram zero
//register    local   CPU Register    garbage

int z;//global variable
int x;
int show(int a/*local variable*/)
{
    x=4;
  static int b=0;//local variable
    printf("value = %d\n",++b);

}

void main()
{
   register int y;
  extern int x;//local variable
    show(0);

    printf("y = %d\n",y);
    show(0);
}
