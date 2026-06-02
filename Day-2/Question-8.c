/*

    Write a program to check Wheather a number is palindrome.

*/
#include<stdio.h>
int main()
{
    int num, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;    // store original number

    while(temp !=0)
    {
        rem = temp % 10;    //Get last digit
        rev = rev * 10 + rem;    //Build reversed number
        temp = temp / 10;    //Remove last digit
    }

    if(num == rev)
    {
    printf("Palindrome Number");
    }
    else 
    {
        printf("Not a Palindrome Number");
    }

    return 0;

}