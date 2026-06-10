/*
problem:
write a program print number pyramid.
       1
      121
     12321
    1234321
   123454321    
*/
#include<stdio.h>
int main()
{
    //initialize with i=row counter, n=number of row entered by user, j=number counter
    int i , n, j;

    //get input
    printf("enter the number of rows: ");
    scanf("%d",&n);

    //repeat for each row
    for(i=0;i<n;i++)
    {
        //print space
        for(j=1;j<=n-i-1;j++)
        {
            printf(" ");
        }
        //print number in increasing order
        for(j=1;j<=i+1;j++)
        {
            printf("%d",j);
        }
        //print number in decreasing order
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        //go to next line
        printf("\n");
    }
    return 0;
}