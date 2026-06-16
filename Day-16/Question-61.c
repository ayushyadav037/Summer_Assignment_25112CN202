/*
problem:
write a program to find missing number in an array.
*/
#include<stdio.h>
int main()
{
    //initialize with n,i,sum=0,totalsum,missing
    int n, i,sum=0, totalsum, missing;

    //get input
    printf("enetr the elements :");
    scanf("%d",&n);

    //array decleration
    int arr[n-1];

    //input array and find sum
    printf("enter %d element:\n",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    //find total sum
    totalsum = n*(n+1)/2;

    //find missing number
    missing = totalsum-sum;

    //print missing number
    printf("missing number = %d", missing);

    return 0;
}