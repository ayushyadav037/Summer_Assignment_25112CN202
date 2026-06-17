/*
problem:
write a program to merge arrays.
*/
#include<stdio.h>
int main()
{
    //initialize with n1, n2, n3 are variable arrays
    int n1, n2, n3;

    // 1- input the size and elements of the first array
    printf("Enter the number of element in First array: ");
    scanf("%d",&n1);
    int arr1[n1];    // declare the n1 size array
    printf("Enter %d elements:",n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    // 2- input the size and elements of the second array
    printf("Enter the umber of element in second array: ");
    scanf("%d",&n2);
    int arr2[n2];    // declear the n2 size array
    printf("Enter %d elements :",n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    } 
    //size of the merged array
    n3 = n1+n2;
    int mergedArr[n3];    // declear the n3 size array

    //copy element of the first array into merged array
    for(int i=0;i<n1;i++)
    {
        mergedArr[i] = arr1[i];
    }
    //copy elements of the second array into merged array
    for(int i=0;i<n2;i++)
    {
        mergedArr[n1 + i] = arr2[i];
    }
    // print the final merged array
    printf("\nTHE MERGED ARRAY IS : ");
    for(int i=0;i<n3;i++)
    {
        printf("%d",mergedArr[i]);
    }
    printf("\n");

    return 0;
}