/*
problem:
write a program to Second largest element.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, temp;
    //arr[100]=array to store element
    //n=size of array
    //i,j= loop variables
    //temp= temporary variables for swaping

    //get input
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    //input array element
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] :",i);
        scanf("%d", &arr[i]);
    }
    //sort the arry in ascending order
    for(i=0;i<n-1;i++)
    {
        for(j=1+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //disply the output
    printf("SECOND LARGEST ELEMENT = %d",arr[n-2]);

    return 0;
}