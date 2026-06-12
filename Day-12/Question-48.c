/*
problem:
write a program to write function for a perfect number.
*/
#include<stdio.h>

//function to check perfect number
int isPerfect(int n)
{
    int i, sum=0;

    //add all factors of n
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum =sum+i;
        }
    }
    //compare summ with number
    if(sum==n)
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
    if(isPerfect(num))
    printf("PERFECT NUMBER");
    else
    printf("NOT PERFECT NUMBER");

    return 0;
}