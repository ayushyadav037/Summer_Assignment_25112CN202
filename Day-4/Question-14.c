/*
problem:
Write a Program to find nth Fibonacci term.
*/
#include<stdio.h>
int main()
{
    int n, first=0, second=1, next;

    // Get input
    printf("Enter the value of n: ");
    scanf("%d",&n);

    // first term
    if(n==1)
    {
        printf("Nth Fibonacci term = %d", first);
    }
    
    // Second term
    else if(n==2)
    {
        printf("Nth Fibonacci term = %d", second);

    }
    else
    {
        // Finf nth term
        for(int i=3;i<=n; i++)
        {
            next = first+second;
            first = second;
            second = next;
        }

        printf("Nth Fibonacci term = %d", next);
    }

    return 0;


}