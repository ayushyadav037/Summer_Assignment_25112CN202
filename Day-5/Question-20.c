/*
problem:
write a program to find the largest prime factor.
*/
#include<stdio.h>
int main()
{
    int n,i;

    // get input
    printf("enter the number: ");
    scanf("%d",&n);

    // find prime by dividing number
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n = n/i;
        }
    }

    //print the largest prime factor
    printf("Largest prime factor: %d",i-1);    /* after the loop ending the value of i increase bt 1
    therefore the real prime factor is i-1. */

    return 0;

}