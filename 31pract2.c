#include<stdio.h>
void main()
{
    /*
    <<(left shift)
    >>(right shift)
    */
   // int a = 5, b = 18;

   // (00000101)<<2
    //(00010100)
    //(00001001)<<1
    //(00010010)
    //(00001001)

    //printf("b<<1 = %d\n",b>>4);
    int i = 5;
    //00000001
    //00001000
    printf("2 p%d = %d",i,1<<i);

}
