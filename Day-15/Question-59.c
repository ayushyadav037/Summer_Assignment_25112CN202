/*
problem:
write a program to rotate array right.
*/
#include<stdio.h>
int main()
{
    //initialize with i,n,temp,arr[100]
    int i,n,temp,arr[100];

    //get input
    printf("enter the number of element:");
    scanf("%d",&n);

    //entering the element of array
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    //print the array before rotating
    printf("==Array before rotating to right==\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    //rotating the first element to last
    if(n>0)
    {
        temp=arr[n-1];
        for(i=n-1;i!=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    //print the array after rotating
    printf("\n");
    printf("==array after rotating to ringht==\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    return 0;
}