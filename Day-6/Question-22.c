/*
problem:
write a program to convert binary to decimal .
*/
#include<stdio.h>
int main()
{
    int binary, decimal=0, base=1, rem;

    //get input
    printf("enter the binary number: ");
    scanf("%d",&binary);

    //converting binary to decimal
    while(binary>0)
    {
        rem=binary%10;    //get last digit
        decimal = decimal+rem*base;    //add value of decimal number
        base=base*2;    //next power of two
        binary=binary/10;    //remove last digit
    }
    //print output
    printf("Decimal number = %d",decimal);

    return 0;
}
