/*
problem:
write a program to print  character triangle.
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main()
{
    //initialize with i=row counter, j=character counter, n=number of rows
    int i,n,j;

    //get input
    printf("enter the number of rows:");
    scanf("%d", &n);

    //loop for row
    for(i=1;i<=n;i++)
    {
        //print character in current row
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }

        printf("\n");
    }
    return 0;

}