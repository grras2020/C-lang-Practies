/*
An array is defined as the collection of similar type of data items stored at contiguous memory locations.
Arrays are the derived data type in C programming language which can store the primitive type of data 
such as int, char, double, float, etc. It also has the capability to store the collection of derived data types,
such as pointers, structure, etc. The array is the simplest data structure where each data element 
can be randomly accessed by using its index number.

The array contains the following properties.

1. Each element of an array is of same data type and carries the same size, i.e., int = 4 bytes.
   Elements of the array are stored at contiguous memory locations where 
   the first element is stored at the smallest memory location.
2. Elements of the array can be randomly accessed since we can calculate 
3. the address of each element of the array with the given base address and the size of the data element.

Advantage of C Array
1) Code Optimization: Less code to the access the data.

2) Ease of traversing: By using the for loop, we can retrieve the elements of an array easily.

3) Ease of sorting: To sort the elements of the array, we need a few lines of code only.

4) Random Access: We can access any element randomly using the array.

Disadvantage of C Array
1) Fixed Size: Whatever size, we define at the time of declaration of the array, we can't exceed the limit.
    So, it doesn't grow the size dynamically like LinkedList which we will learn later.

Declaration of C Array
We can declare an array in the c language in the following way.

data_type array_name[array_size];  
Now, let us see the example to declare the array.

int marks[5];  
Here, int is the data_type, marks are the array_name, and 5 is the array_size.

Initialization of C Array
The simplest way to initialize an array is by using the index of each element.
We can initialize each element of the array by using the index. Consider the following example.

marks[0]=80;//initialization of array  
marks[1]=60;  
marks[2]=70;  
marks[3]=85;  
marks[4]=75;  

C Array: Declaration with Initialization
We can initialize the c array at the time of declaration. Let's see the code.

int marks[5]={20,30,40,50,60};  
In such case, there is no requirement to define the size. So it may also be written as the following code.

int marks[]={20,30,40,50,60};  

*/
#include<stdio.h>
void main()
{

    // char temp[5];
    // printf("size = %d",sizeof(temp));
    int i=0;    
    //int marks[5]={80,60,70,85,75};//declaration with initialization of array  
    int marks[5]; //declaration of array 
    marks[0]=80;//initialization of array    
    marks[1]=60;    
    marks[2]=70;    
    marks[3]=85;    
    marks[4]=75;   
    // printf("%d \n",marks[0]);
    // printf("%d \n",marks[1]);
    // printf("%d \n",marks[2]);
    // printf("%d \n",marks[3]);
    // printf("%d \n",marks[4]);

    //traversal of array    
    for(i=0;i<5;i++){      
        printf("%d \n",marks[i]);    
    }//end of for loop  

    for(i=0;i<5;i++){      
        printf("%d \n",&marks[i]);    
    }

    printf("add of marks var = %d\n",marks);

    for(i=0;i<5;i++){
        printf("input = ");
        scanf("%d",&marks[i]);
    }

    for(i=0;i<5;i++){      
        printf("%d \n",marks[i]);    
    }


}