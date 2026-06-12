/*
problem:
write a program to write function for palindrome.
*/
#include<stdio.h>

//function to check palindrome
int ispalindrome(int n)
{
    int orginal, reverse = 0, digit;

    //save orginal number
    orginal = n;

    //reverse the number
    while(n>0)
    {
        digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
    }
    //compare orginal and reverse
    if(orginal == reverse)
    return 1;
    else
    return 0;
}
int main()
{
    int num;

    //get input
    printf("enter the number");
    scanf("%d",&num);

    //call function
    if(ispalindrome(num))
    printf("palindrome number");
    else
    printf("not palindrome number");

    return 0;
}