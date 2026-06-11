/*
problem:
write a program to write function to find maximum.
*/
#include<stdio.h>

//function to find maximum number
int maximum(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int num1, num2, result;

    //get input
    printf("enter any two numbers:");
    scanf("%d%d",&num1, &num2);

    //call function
    result = maximum(num1, num2);

    //print maximum
    printf("maximum number = %d",result);

    return 0;
}