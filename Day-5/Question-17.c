/*
problem:
Write a program to check Perfect number.
*/
#include<stdio.h>
int main()
{
    int n, i, sum=0;

    // Get input
    printf("Enter the number: ");
    scanf("%d",&n);

    // using loop findigin the all factors
    for(i=1; i<n; i++)
    {
        if(n % i == 0)    // Check factor
        {
            sum = sum+i;    // Add factor to sum
        }
    }

    // check perfect number
    if(sum == n)
    {
        printf("PERFECT NUMBER");
    }
    else
    {
        printf("NOT A PERFECT NUMBER");
    }
    return 0;
    
}