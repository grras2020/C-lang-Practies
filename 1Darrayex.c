#include<stdio.h>
void main()
{
    int size;
    printf("Enter Size of Elements : ");scanf("%d",&size);
    int arr[size];
    int i,sum=0,min=0,max=0,temp;
    float avg;

    // array values input from user
    for(i=0;i<size;i++)
    {
        printf("arr[%d] = ",i);scanf("%d",&arr[i]);
    }

    //array valuse display
    printf("arr = {");
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\b\b}\n");

    //sum of array values
    for(i=0;i<size;i++)
    {
        //printf("sum = %d + %d\n",sum,arr[i]);
        sum+=arr[i]; // sum = sum + arr[i];
    }
    printf("sum of array = %d\n",sum);

    //agarage of array value
    avg = sum/5.0;
    printf("avarage value of array = %.2f\n",avg);

    //Min value of array
    min=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("minimum value of array is %d\n",min);

    //Max value of array
    max=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("maximum value of array is %d\n",max);

    //array value change into Assending order
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //array valuse display as assending order
    printf("arr(assending) = {");
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\b\b}\n");

    //array value change into Dessending order
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //array valuse display as dessending order
    printf("arr(dessending) = {");
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\b\b}\n");

}