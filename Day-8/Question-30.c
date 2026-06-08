/*
problem:
write a program to print number triangle.
       1
       12
       123
       1234
       12345
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    //get input
    printf("enter number of rows: ");
    scanf("%d", &n);

    //loop for rows
    for(i=1;i<=n;i++)
    {
       //print number in current row
       for(j=1;j<=i;j++)
       {
        printf("%d", j);
       }

       // go to next line
       printf("\n");
    }

    return 0;
}