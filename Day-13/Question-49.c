/*
problem:
write a program to input and display array.
*/
#include<stdio.h>
int main()
{
    //creat array
    int arr[5], i;

    //input elements in array
    printf("Enter 5 elements :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print all numbers
    printf("array element are:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}