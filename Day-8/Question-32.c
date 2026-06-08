/*
problem:
write a program to print repeated number pattern.
1
22
333
4444
55555
*/
#include<stdio.h>
int main()
{
    int i,j,n;

    //get input
    printf("enter the number of rows : ");
    scanf("%d", &n);

    //loop of rows
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        // for next line
        printf("\n");
    }
    return 0;
}