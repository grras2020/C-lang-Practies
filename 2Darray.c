/*

The two-dimensional array can be defined as an array of arrays.
The 2D array is organized as matrices which can be represented as the collection of rows and columns. 
However, 2D arrays are created to implement a relational database lookalike data structure. 
It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.


Declaration of two dimensional Array in C
The syntax to declare the 2D array is given below.

data_type array_name[rows][columns];  

Consider the following example.
int twodimen[4][3];  

int marks[5] = {2,3,4,5,6};//single dimensional array

Initialization of 2D Array in C
int marks[5][6] = { {1,2,3,8,12,23} , {2,23,34,3,4,9} , {3,4,34,54,5,10} , {4,5,56,76,6,11} , {11,22,34,54,33,44} }; 

     0  1  2  3  4  5
0-> {1  2  3  8  12 23}
1-> {2  23 34 3  4  9}
2-> {3  4  34 54 5  10}
3-> {4  5  56 76 6  11}
4-> {11 22 34 54 33 44}

0,0     marks[0][0]
0,1     marks[0][1]
0,2     marks[0][2]
0,3     marks[0][3]
0,4     marks[0][4]
0,5     marks[0][5]

1,0     marks[1][0]
1,1     marks[1][1]
1,2     marks[1][2]
1,3     marks[1][3]
1,4     marks[1][4]
1,5     marks[1][5]

*/

#include<stdio.h>

void main()
{
    int marks[3][6]; //= { {25,45,63,85,74,65}, {45,58,52,63,41,54}, {74,94,61,43,76,52} };
    int row,col,total_marks;

    for(row=0;row<3;row++){
        printf("input marks of student %d :-\n",row+1);
        for(col=0;col<6;col++){
            printf("sub %d = ",col+1);
            scanf("%d",&marks[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<3;row++)
    {
        printf("student %d : \n",row+1);
        total_marks=0;
        for(col=0;col<6;col++)
        {
            //printf("sub %d = %d\n",col+1,marks[row][col]);
            total_marks+=marks[row][col];
        }
        printf("Total Marks = %d\n",total_marks);
        printf("Percentage = %.2f\n",total_marks/6.0);
        printf("\n");
    }

}