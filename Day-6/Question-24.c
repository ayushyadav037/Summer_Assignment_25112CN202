/*
problem:
Write a program to find x^n without pow().
*/
#include<stdio.h>
int main()
{
    int x, n, result = 1, i;

    //gat input
    printf("Enter base (x): ");
    scanf("%d",&x);
    printf("enter power(n):");
    scanf("%d", &n);

    //multiply the x n times
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }

    //print result
    printf("%d%d=%d", x, n, result);

    return 0;
}