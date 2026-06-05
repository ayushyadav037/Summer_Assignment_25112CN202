/*
problem:
write a program to print factors of a number.
*/
#include<stdio.h>
int main()
{
    int n,i;

    // Get the input
    printf("Enter the number: ");
    scanf("%d",&n);

    // checking all the number 0 to n
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}