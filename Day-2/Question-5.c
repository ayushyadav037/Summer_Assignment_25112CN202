/*   
    problem:
    Write a program to Find sum of digit of a number.

*/
#include<stdio.h>
int main()
{
    int num, sum = 0, remainder;

    //1. Get input
    printf("Enter an integer: ");
    scanf("%d",&num);

    //2. Loop until number becomes 0
    while(num !=0)
    {
        remainder = num % 10;    //Get last digit
        sum = sum + remainder;   //Add to sum
        num = num / 10;          //Remove last digit
    }

    //3. Print result
    printf("Sum of the digit: %d\n", sum);
    
    return 0;
}