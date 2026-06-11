/*
problem:
 write a program to write function to find sum of two numbers.
*/
#include<stdio.h>

//function to add two numbers
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int num1, num2, result;

    //get input from user
    printf("enter the two numbers :");
    scanf("%d%d",&num1, &num2);

    //storing function result
    result = sum(num1, num2);

    //print sum
    printf("sum = %d", result);

    return 0;
}