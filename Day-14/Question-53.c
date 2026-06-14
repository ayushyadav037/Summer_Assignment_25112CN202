/*
problem:
write a program to linear search.
*/
#include<stdio.h>
int main()
{
    //arr[100]=array to store elements , n=size of array, i= loop variable, x=number to searching
    int arr[100], n, i, x;

    //get input
    printf("enter the size of array:");
    scanf("%d",&n);

    //input array element
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d] :",i);
        scanf("%d",&arr[i]);
    }
    //input number to search
    printf("enter number to search:");
    scanf("%d",&x);

    //checking each element one by one
    for(i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            //display the positin if the number is found
            printf("number found at position %d",i+1);
            return 0;
        }
    }
    //display message if the number is not found
    printf("element is not found");
    return 0;
}