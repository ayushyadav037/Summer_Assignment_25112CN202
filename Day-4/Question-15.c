/*
Problem:
Write a program to check Armstrong number.
*/
#include<stdio.h>
int main()
{
    int num, digit, sum=0, temp;

    //Get input
    printf("enter a number: ");
    scanf("%d", &num);

    temp = num;    // save orginam number
    while(num>0)
    {
        digit=num%10;    //get the last digit
        sum=sum+digit*digit*digit;    //add cube of the digit
        num=num/10;
    }
    if(sum==temp)
    printf("Armstrong number ");
    else
    printf("Not the armstrong number");

    return 0;
}