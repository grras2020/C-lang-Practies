//if else-if ladder statement
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
/*
0-32 = fail
33-59 = C
60-69 = B
70-79 = B+
80-89 = A
90-100 = A+
*/
void main()
{
    float per;
    printf("Enter Your Percentage : ");scanf("%f",&per);
    per = ceil(per);
    if(per>=0&&per<=100)
    {
        if(per>=90)
            printf("A+ GRADE");
        else if(per>=80)
            printf("A GRADE");
        else if(per>=70)
            printf("B+ GRADE");
        else if(per>=60)
            printf("B GRADE");
        else if(per>=33)
            printf("C GRADE");
        else
            printf("FAIL");
        /*
        if(per<33)
            printf("fail");
        else if(per<60)
            printf("C GRADE");
        else if(per<70)
            printf("B GRADE");
        else if(per<80)
            printf("B+ GRADE");
        else if(per<90)
            printf("A GRADE");
        else
            printf("A+ GRADE");
            */
    }
    else
        printf("\nPlease Enter Valid Percentage(0-100)!\n");
}

/*
if else-if ladder statement
===========================
The if-else-if ladder statement is an extension to the if-else statement.
It is used in the scenario where there are multiple cases to be performed for different conditions.
------------------------------------------------------
if(condition1){
//code to be executed if condition1 is true
}else if(condition2){
//code to be executed if condition2 is true
}
else if(condition3){
//code to be executed if condition3 is true
}
...
else{
//code to be executed if all the conditions are false
}
------------------------------------------------------
*/
