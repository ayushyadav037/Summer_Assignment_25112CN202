/*
problem:
write a program to count set bits in a number.
*/
#include<stdio.h>
int main()
{
    int num, count=0;
    
    //get input
    printf("enter the number:");
    scanf("%d", &num);

    //count set bit
    while(num>0)
    {
        count = count+(num%2);    //add 1 if last digit is set
        num = num/2;    // remove the last bit
    }

    // print the output
    printf("Number of Bits = %d", count);

    return 0;
}