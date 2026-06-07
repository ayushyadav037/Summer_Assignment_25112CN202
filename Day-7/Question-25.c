/*
problem:
write a program to recursive factorial.
*/
#include<stdio.h>
//function to find factorial using recursion
int fact(int n)
{
    //when n becomes 0 stop the loop
    if(n == 0)
    return 1;
    
    // multiply current number with factorial of previous number
    return n*fact(n-1);
}

int main()
{
    int n;

    //get input
    printf("Enter a number: ");
    scanf("%d", &n);

    //print the factorial
    printf("Factorial=%d", fact(n));

    return 0;
}