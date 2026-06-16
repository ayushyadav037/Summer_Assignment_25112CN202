/*
problem:
write a program to find pair with given sum.
*/
#include<stdio.h>
int main()
{
    int n, i, j, sum;

    //get input
    printf("enter the number of elements:");
    scanf("%d",&n);

    //initialize array
    int arr[n];

    //input array element
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //input target sum
    printf("enter target sum:");
    scanf("%d",&sum);

    //find pair with given sum
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                //display pair
                printf("\npair=%d%d",arr[i],arr[j]);

                return 0;
            }
        }
    }
    //if no pair is found
    printf("No pair found");

    return 0;
}