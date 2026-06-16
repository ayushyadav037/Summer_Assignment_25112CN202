/*
problem :
write a program to remove duplicate from array.
*/
#include<stdio.h>
int main()
{
    //initialize with n, i, j, k
    int n, i, j, k;

    //get input 
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d",&n);

    //initialize the array
    int arr[n];

    //input array elements
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //remove the duplicate element 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                //shift the element to left
                for(k=j;k<n-1;k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    //disply the array after removing duplicate
    printf("====ARRAY AFTER REMOVING DUPLICATES=====:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}