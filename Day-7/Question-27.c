/*
problem:
Write a program to recursive sum of digit.
*/
#include<stdio.h>

//function to find sum of digits using recursion
int sum(int n)
{
    //stop when number become 0
    if(n==0)
    return 0;

    //last digit + sum of remaining digits
    return(n%10) + sum(n/10);
}

int main()
{
    int n;

    //get input
    printf("enter a number");
    scanf("%d", &n);

    //print sum of digit
    printf("sum od digit : %d", sum(n));

    return 0;
}

