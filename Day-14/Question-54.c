/*
problem:
write a program to frequency of an element.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, x, count=0;
    //arrat to storen element
    //n=size of array
    //i=loop variable
    //x=number to find frequency
    //count= frequency counter

    //get input
    printf("enter size of array:");
    scanf("%d",&n);

    //input array element
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);

    }
    //input number
    printf("enter number:");
    scanf("%d",&x);

    //count frequency of the number
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count ++;
        }
    }
    // display frequency
    printf("frequency=%d", count);

    return 0;
}