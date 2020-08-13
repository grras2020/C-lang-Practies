#include<stdio.h>
#include<stdbool.h>

void main()
{
    /*
    control statements
    ==================
    if-else
    switch
    do-while
    while
    for
    break
    continue
    goto
    */
    int marks;
    printf("marks = ");scanf("%d",&marks);

    if(!(marks<0 || marks>100))
    //if(marks>=0 && marks<=100)
    {
        if(marks>=33)
            printf("pass");
        else
            printf("fail");
    }
    else
        printf("Invalid marks!");
    printf("\nThank You!!!");
}
