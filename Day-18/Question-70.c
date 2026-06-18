/*
problem:
write a program to selection sort.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, min, temp;

    //get input size of array
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);

    //input array elements
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //selection sort
    for(i=0;i<n-1;i++)
    {
        min=i;    //Assume current element is small
        for(j=i+1;j<n;j++)
        {
            //find the smallest element
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swap small element with current element
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    //display sort array
    printf("sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}