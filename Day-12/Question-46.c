/*
problem:
write a program to write function for armstrong.
*/
#include<stdio.h>

//function to check armstrong number
int isArmstrong(int n)
{
    int original, digit, sum=0;
    
    //save orginal number
    original=n;

    //find sum of cube of each digit
    while(n>0)
    {
        digit = n%10;
        sum = sum+(digit*digit*digit);
        n = n/10;
    }
    //compare sum with the orginal number
    if(sum==original)
    return 1;
    else
    return 0;
}
int main()
{
    int num;

    //get input
    printf("enter a number:");
    scanf("%d",&num);

    //call function
    if(isArmstrong(num))
    printf("armstrong number");
    else
    printf("not armstrong number");

    return 0;
}