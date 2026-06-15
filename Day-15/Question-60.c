/*
problem:
write a program to move zeros to the end.
*/
#include<stdio.h>
int main()
{
    // initialize with i,n,j,e,temp,arr[100]
    int i,n,j,e,temp,arr[100];

    //get input
    printf("ENTER THE NUMBER OF ELEMENT:");
    scanf("%d",&n);

    //entering the element in the array
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    e=n;    //to save the value of n
    for(i=0;i<e;i++)
    {
        //outer loop for runing values in series
        if(arr[i]==0)
        {
            //checking the element is zero or not
            temp=arr[i];
            for(j=i;j<e-1;j++)
            {
                arr[j] = arr[j+1];
                //shifting the value to left
            }
            arr[e-1]=temp;
            //shift the 0 to end
            e--;
            i--;
        }
    }
    // printing the array after filtering
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:%d\n",i, arr[i]);
    }
    return 0;
}
