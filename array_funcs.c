#include<stdio.h>

/*
this examples for using array in functions...
*/
// display an array
void displayMarks(int arr[],int size){
    //printf("%d Elements of array are : ",size);
    for(int i=0;i<size;i++)
    {
        printf("sub %d = %d\n",i+1,arr[i]);
    }
}
// get total marks of an array
int getTotalMarks(int arr[],int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    {
        total+=arr[i];
    }
    return total;
}

// get percentage 
float getPercentage(int total,int size)
{
    return total/(float)size;
}

void main()
{
    
    int size = 6;
    int marks[] = {23,43,54,65,34,65};
    int tot = getTotalMarks(marks,size);
    float per = getPercentage(tot,size);
    displayMarks(marks,size);
    printf("total marks = %d\n",tot);
    printf("Percentage = %.2f",per);
}