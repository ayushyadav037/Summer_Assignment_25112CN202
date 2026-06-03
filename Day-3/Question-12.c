/*
problem:
Write a program to find LCM of two numbers.
*/
#include<stdio.h>
int main()
{
    int num1, num2, max;

    //Ask the user for two numbers
    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);

    //Find the large number
    max = (num1 > num2) ? num1 :num2;

    // Loop until LCM is find 
    while(1)
    {
        // Check if max is divisible by bothnumbers
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;    // Exit loop when find
        }
        max++;    // Check next number
    }
    return 0;
}