/*
problem:
write a program to write function for fibonacci.
*/
#include<stdio.h>

//function to print fibonaccssi series
void fibonacci(int n)
{
    int a=0, b=1, c, i;

    //print n term
    for(i=1;i<=n;i++)
    {
        printf("%d",a);

        // find next term
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;

    //get input
    printf("enter the number:");
    scanf("%d",&n);

    //call function
    fibonacci(n);

    return 0;
}