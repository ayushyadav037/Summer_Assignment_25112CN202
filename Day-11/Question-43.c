/*
problem:
write a program to write function to check prime.
*/
#include<stdio.h>

//function to check prime number
int isprime(int n)
{
    int i;

    //check divisibility
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    //number is prime
    return 1;
}

int main()
{
    int num;

    //get input
    printf("enter a number:");
    scanf("%d",&num);

    // call function
    if(isprime(num))
    printf("PRIME NUMBER");
    else
    printf("NOT PRIME NUMBER");
    return 0;
}