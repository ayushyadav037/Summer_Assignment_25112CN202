/*
    Problem:
    Write a program ro Reverse a number.

*/

#include<stdio.h>
int main()
{
    int num, reverse = 0, remainder;
    // 1. Get input
    printf("Enter an integer: ");
    scanf("%d",&num);

    // 2. Loop until become zero
    while(num !=0)
    {
        remainder = num % 10;    // Get the last digit
        reverse = reverse * 10 +remainder;    // Build the reversed number
        num = num / 10;    //Remove the last digit
    }

    // 3. Print output
    printf("Reversed number: %d/n", reverse);

    return 0;

}