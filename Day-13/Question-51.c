/*
problem:
write a program to find largest and smallest element.
*/
#include<stdio.h>
int main()
{
    int arr[5], i;
    int largest , smallest;

    //get input from user
    printf("enter 5 numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    //assume first element is largest and smallest
    largest = arr[0];
    smallest = arr[0];

    //find largest and smallest element
    for(i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    // result
    printf("largest element=%d\n", largest);
    printf("smallest element=%d\n", smallest);

    return 0;
}