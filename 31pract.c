#include<stdio.h>
void main()
{
    int a=3,b=4,c=5;
    int x,y,z;

    x = a++ + ++b;
    //= 3   +   5
    y = c++ - --b + ++a;
    //= 5   -   4 +  5
    z = c + ++a * b++;
    //= 6 +   6 * 4
                        //   R    N      G
    printf("a = %d\n",a);   //3  //3    //6
    printf("b = %d\n",b);   //5  //5    //5
    printf("c = %d\n",c);   //5  //5    //6
    printf("x = %d\n",x);   //7  //8    //8
    printf("y = %d\n",y);   //4  //7    //3
    printf("z = %d",z);     //24 //28   //29
/*
a = 6
b = 5
c = 6
x = 8
y = 6
z = 30

    ++ Increment by 1
    -- Decrement by 1

    prefix:
    ======
    ++i
    --i

    postfix:
    =======
    i++
    i--

   where i is a Operend (variable)
   */
}
