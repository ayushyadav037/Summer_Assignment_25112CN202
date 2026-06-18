/*
problem:
write a program to binary search.
*/
#include<stdio.h>
int main()
{
    int arr[100], n, i;
    int key, low, high, mid;

    //get input size of array
    printf("Enter thr number of elements:");
    scanf("%d",&n);

    //input sorted array element
    printf("Enter %d elements in sorted order :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //input element to search
    printf("Enter the element to search : ");
    scanf("%d",&key);

    //initialize variable
    low=0;
    high=n-1;

    //binary search
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("element found at the position %d ",mid+1);
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //if the element is not found
    if(low>high)
    {
        printf("ELEMENT IS NOT FOUND");
    }
    return 0;
}