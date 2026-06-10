/*
problem: write a program to print pyramid.
        *
       ***
      *****
     *******
    *********
*/
#include<stdio.h>
int main()
{
    int i, n, j;

    //get input
    printf("enter the number of rows");
    scanf("%d",&n);

    //repeat for each row
    for(i=1;i<=n;i++)
    {
        //print leading space
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