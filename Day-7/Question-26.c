/*
problem:
write a program to recursive fibonacci.
*/

#include<stdio.h>

//function to find fibonnaci term
int fib(int n)
{
    //first fibonacci terms
    if(n == 0)
    return 0;
    
    if(n==1)
    return 1;

    //sum of privious two terms
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n,i;

    //number of terms
    printf("enter the terms:");
    scanf("%d", &n);

    //print fibonnaci series
    for(i=0; i<n; i++)
    {
        printf("%d\n",fib(i));
    }
    return 0;
}