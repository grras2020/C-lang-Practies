/*
The concept of dynamic memory allocation in c language enables the C programmer to allocate memory 
at runtime. Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file.

1. malloc()	    allocates single block of requested memory.
2. calloc()	    allocates multiple block of requested memory.
3. realloc()	reallocates the memory occupied by malloc() or calloc() functions.
4. free()	    frees the dynamically allocated memory.

static memory allocation	                        dynamic memory allocation
----------------------------------------------------------------------------------
memory is allocated at compile time.	            memory is allocated at run time.
memory can't be increased while executing program.	memory can be increased while executing program.
used in array.	                                    used in linked list.
*/
#include<stdio.h>
#include<stdlib.h>

void singleMemory()
{
    int x;//static memory allocation
    //scanf("%d",&x);
    float* ptr = NULL;//static memory allocation
    printf("%u\n",ptr);
    ptr = malloc(sizeof(float)); // dynamic memory allocation
    printf("%u\n",ptr);
    printf("value = ");scanf("%f",ptr);
    printf("the value of stored in dma is %.2f",*ptr);
    free(ptr);
}
void multipleMemmory()
{
    //int arr[5];//static memory allocation
    int* ptr = NULL;//static memory allocation
    // int size = 4*sizeof(int);
    // ptr = malloc(size);
    int sizeof_blocks;
    printf("Enter Number of blocks : ");scanf("%d",&sizeof_blocks); 
    ptr = calloc(sizeof_blocks,sizeof(int));
    printf("address of dynamic memory is %u and the size of this memory address is %d\n",ptr,sizeof_blocks*sizeof(int));
    for(int i=0;i<sizeof_blocks;i++)
    {
        printf("%d block value(%u) = ",i+1,ptr+i);scanf("%d",ptr+i);
    }
    for(int i=0;i<sizeof_blocks;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}
void reallocation()
{
    int* ptr = NULL;
    int sizeof_blocks;
    printf("Enter Number of blocks : ");scanf("%d",&sizeof_blocks); 
    ptr = calloc(sizeof_blocks,sizeof(int));
    printf("address of dynamic memory is %u and the size of this memory address is %d\n",ptr,sizeof_blocks*sizeof(int));
    for(int i=0;i<sizeof_blocks;i++)
    {
        printf("%d block value(%u) = ",i+1,ptr+i);scanf("%d",ptr+i);
    }
    for(int i=0;i<sizeof_blocks;i++)
    {
        printf("%d ",ptr[i]);
    }
    int old_size = sizeof_blocks;
    //printf("Enter Number of blocks : ");scanf("%d",&sizeof_blocks); 
    int new_size = sizeof_blocks+=5;
    ptr = realloc(ptr,new_size);// reallocatd memory by 5
    printf("\naddress of dynamic memory is %u and the size of this memory address is %d\n",ptr,sizeof_blocks*sizeof(int));
    for(int i=old_size;i<new_size;i++)
    {
        printf("%d block value(%u) = ",i+1,ptr+i);scanf("%d",ptr+i);
    }
    for(int i=0;i<sizeof_blocks;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}
void main()
{
    singleMemory();
    reallocation();
}