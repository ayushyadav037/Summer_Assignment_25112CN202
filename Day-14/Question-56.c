/*
problem:
write a program to find duplicates in array.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, flag=0;
    //arr[100]=array to store element
    //n=size of array
    //i,j=loop variables
    //flag=check duplicate find or not

    //get input
    printf("ENTER SIZE OF ARRAY :");
    scanf("%d",&n);

    //input array element
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    //find the duplicate elements
    printf("DUPLICATE ELEMENT ARE : \n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d", arr[i]);
                flag=1;
                break;
            }
        }
    }
    //if no duplicate element is find
    if(flag==0)
    {
        printf("---...NO DUPLICATE ELEMENT ARE THERE...--- ");
    }
    return 0;
}