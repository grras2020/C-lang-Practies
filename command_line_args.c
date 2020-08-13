#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void show(char *str[])
{
    for(int i=0;i<3;i++)
        printf("Hello, %s\n",str[i]);
}
// void main(int count,char *args[]){
//     int result=0;
//     if(strcmp(args[1],"-plus")==0)
//     {
//         for(int i=2;i<count;i++)
//         {
//             result+=atoi(args[i]);
//         }
//         printf("sum = %d\n",result);
//     }
//     else if (strcmp(args[1],"-minus")==0)
//     {
//         for(int i=2;i<count;i++)
//         {
//             result-=atoi(args[i]);
//         }
//         printf("sub = %d\n",result);
//     }
//     else if (strcmp(args[1],"-mul")==0)
//     {
//         result = 1;
//         for(int i=2;i<count;i++)
//         {
//             result*=atoi(args[i]);
//         }
//         printf("multiply = %d\n",result);
//     }
//     else if (strcmp(args[1],"-div")==0)
//     {
//         result = 0;
//         for(int i=2;i<count;i++)
//         {
//             result/=atoi(args[i]);
//         }
//         printf("division = %d\n",result);
//     }
//     else if (strcmp(args[1],"--version")==0)
//     {
//         printf("Calc Tool(1.0.0)");
//     }
//     else if (strcmp(args[1],"--help")==0)
//     {
//         printf("Calc Tool(1.0.0)\n");
//         printf("Option\t\tDescreption\n  -plus\t\tfor addision\n  -minus\tfor substraction\n  -mul\t\tfor multipy\n");
//     }
//     else
//     {
//       printf("invalid option!\n");
//     } 
// }

// void main()
// {
//     char *name[] = {"ravi","ajay","vijay"};
//     show(name);
// }

int main(int count,char *args[])
{
    int sum=0;
    for(int i=1;i<count;i++)
    {
       sum+=atoi(args[i]);
    }
    printf("Sum = %d",sum);
    return sum;
    // for(int i=1;i<count;i++)
    //     printf("Hello, %s\n",args[i]);
}