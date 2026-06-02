/*

   Write a program to Find product of digits.

*/
#include<stdio.h>
int main()
{
    int number, rem, product= 1;

    // 1. Get input
    printf("Enter the number:");
    scanf("%d",&number);

    // 2. Process the number until  becomes zero
    while(number > 0)
    {
        rem = number % 10;
        product= product * rem;
        number = number / 10; 
    }

    // 3. Print the result
    printf("Product of digits: %d\n", product);

    return 0;

}
