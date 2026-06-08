/*
problem:
write a program print half pyramid pattern.
*/
#include<stdio.h>
int main()
{
    //initialization with i= row counter , n = number of rows, j = star counter
    int i,n,j;

    //get input
    printf("enter the number of rows: ");
    scanf("%d", &n);

    //loop for rows
    for(i=1;i<=n;i++)
    {
        //print star in each row
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        //Move to next line
        printf("\n");
    }

    return 0;
}