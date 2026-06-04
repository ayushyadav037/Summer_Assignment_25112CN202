/*
problem:
write a program to print armstrong number in a range.
*/
#include<stdio.h>
int main()
{
    int start, end, num, digit, sum, temp;

    //Get input
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong number are:\n\n");

    //using for loop
    for(num=start; num<=end; num++)
    {
        temp=num;
        sum=0;

        while(temp>0)
        {
            digit = temp % 10;    //Get last digit
            sum = sum+digit*digit*digit;    // Add cube of digit
            temp = temp/10;    // Remove last digit
        }
        if(sum==num)
        printf("%d\n", num);
    }
    return 0;
}