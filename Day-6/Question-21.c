/*
problem:
write a program to convert decimal number to binary number.
*/
#include<stdio.h>
int main()
{
    int num, binary[20], i=0;

    //get input
    printf("enter a decimal number: ");
    scanf("%d",&num);

    //convert decimal to binary
    while(num>0)
    {
        binary[i]=num%2;    //store remainder
        num=num/2;     //update number
        i++;     //move next array position
    }

    //print binary number
    printf("Binary number : ");

    while(i>0)
    {
        i--;
        printf("%d",binary[i]);
    }
    return 0;
}