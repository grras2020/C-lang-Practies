#include<stdio.h>
void main()
{
    int a[250],index = 0,len;
    while(1)
    {
        a[index++] = getchar();
        if(a[index-1]=='!')
            break;
    }
    len = index-1;
    index = 0;
    printf("------------\n");
    //ganesh
    //01234567
    while(1)
    {
        printf("%c",a[index++]);
        if(index==len)
            break;
    }



}
