/*
problem:
Write a Program to Generate Fibonacci series.
*/
#include<stdio.h>
int main()
{
    int n, a=0, b=1, c;

    printf("Enter the number: ");
    scanf("%d",&n);

    // print fibonacci series
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",a);

        c=a+b;    // next term
        a=b;    // move forward
        b=c;
    }
    return 0;
}