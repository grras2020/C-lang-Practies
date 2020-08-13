#include<stdio.h>
#define MAX 50
#define MIN(a,b) (a<b?a:b)

int min(int a,int b)
{
    printf("min function ");
    return a<b?a:b;  
}

void show()
{
    int z;
    #ifdef MAX
        z = MAX+20;
    #else
        z = 20;
    #endif
    //z = 20;
    printf("z = %d\n",z);
}

#undef MAX

void main()
{
    int const x = 10;
    //x = 20;
    #ifndef MAX
        #define MAX 30
    #else
        printf("x = %d\n",x);
    #endif

    #if (MAX < 30)
    printf("Max = %d\n",MAX);
    #elif (MAX < 60)
    printf("Max = %d\n",MAX);
    #else
    printf("value is not recor....!");
    #endif
    show();
    //#undef MAX
    int m = MIN(8,5);
    printf("m = %d",m);
}