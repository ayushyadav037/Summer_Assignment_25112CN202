/*
problem:
write a program to write function to find factorial.
*/
#include<stdio.h>

//function to calculate factorial
int factorial(int n)
{
    int i, fact=1;

    //multiply number 1 to n
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;

    //get input
    printf("enter a number");
    scanf("%d",&num);

    //print result
    printf("FACTORIAL = %d", factorial(num));

    return 0;
}