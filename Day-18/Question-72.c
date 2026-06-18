/*
problem:
write a program to Sort array in descending order.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, max, temp;

    //get input size of array
    printf("Enter the number of elements:");
    scanf("%d",&n);

    //input array element 
    printf("Enter %d elements : \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //selection sort in Descending order
    for(i=0;i<n-1;i++)
    {
        max=i;     //assume current element is large
        for(j=i+1;j<n;j++)
        {
            //find largest element
            if(arr[j]>arr[max])
            {
                max=j;
            }
        }
        //swap large element with current element
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    //display sorted array
    printf("Array in descending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}