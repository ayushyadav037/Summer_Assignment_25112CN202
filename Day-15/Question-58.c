/*
problem:
write a program to rotate array left.
*/
#include<stdio.h>
int main()
{
    //initialize with i,n,temp,arr[100]
    int arr[100], n, i, temp;

    //get input
    printf("ENTER THE NUMBER OF ELEMENT: ");
    scanf("%d",&n);

    //entering the element of array
    for(i=0;i<n;i++)
    {
        printf("ENTER arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("BEFORE ROTATING THE ARRAY TO LEFT\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    //shifting the last value to first value.
    if(n>0)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("\n");
    printf("==AFTER ROTATING THE ARRAY==\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    return 0;
}