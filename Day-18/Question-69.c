/*
problem:
write a probram to bubble sort.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, temp;

    ////get input size of array
    printf("Enter the number of elements:");
    scanf("%d",&n);

    //input the array elements
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            //swaping if current element is greater then next element
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //display sorted array
    printf("SORTED ARRAY IS : \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}