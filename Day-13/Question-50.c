/*
problem:
write a program to find sum and average of array.
*/
#include<stdio.h>
int main()
{
    //creat array and veriables
    int arr[5], i, sum=0;
    float avg;

    // get input from the user
    printf("enter any five numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    // calculate average
    avg = sum/5.0;

    //print result
    printf("sum=%d\n",sum);
    printf("average=%2f", avg);

    return 0;
}