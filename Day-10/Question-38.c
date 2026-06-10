/*
problem:
write a program print reverse pyramid.
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
    int i,n,j;

    //get input
    printf("enter the number of rows:" );
    scanf("%d",&n);

    //loop repeat for each row
    for(i=n;i>=1;i--)
    {
        //print space
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //print star
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        //go to next line
        printf("\n");
    }
    return 0;
}