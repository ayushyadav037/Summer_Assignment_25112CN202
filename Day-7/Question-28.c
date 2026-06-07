/*
problem:
write a program to recursive reverse number.
*/
#include<stdio.h>
int rev=0;    //store reverse number

//function to reverse a number using recursion
void reverse(int n)
{
    //stop when number become 0
    if(n==0)
    return;

    // add last digit to reverse number
    rev=rev*10+(n%10);

    //remove last digit and again call the function
    reverse(n/10);
}

int main()
{
    int n;

    //get input
    printf("enter the number");
    scanf("%d" ,&n);

    reverse(n);

    //print reversed number
    printf("reversed number=%d\n", rev);

    return 0;
}