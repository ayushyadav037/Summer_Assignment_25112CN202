/*
problem:
write a program to reverse array.
*/
#include<stdio.h>
int main()
{
    //initialize with i,n,a[100]
    int i,n,a[100];

    //take input in n
    printf("ENTER THE NUMBER OF ELEMENT:");
    scanf("%d",&n);

    // entering the element of array
    for(i=0;i<n;i++)
    {
        printf("ENTER [%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("///REVERSE OF ARRAY///\n");

    //print the reverse of array
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}