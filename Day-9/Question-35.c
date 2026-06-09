/*
problem:
write a program print repeated character pattern.
A
BB
CCC
DDDD
EEEEE
*/
#include<stdio.h>
int main()
{
    int i,n,j;

    //get input
    printf("enter the number of rows:"  );
    scanf("%d",&n);

    //using loop for rows
    for(i=1;i<=n;i++)
    {
        //print same character in current row
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+i-1);
        }
        //go to next row
        printf("\n");
    }
    return 0;
}