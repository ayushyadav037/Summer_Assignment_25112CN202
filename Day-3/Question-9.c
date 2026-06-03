/*
  problem:
  Write a program to check whether a number is prime.
*/
#include<stdio.h>
int main()
{
    int n, count = 0;

    printf("Enter number:");
    scanf("%d",&n);

    // count how many numbers divide n completly
    for(int i = 1; i<=n; i++)
    {
        if(n%i ==0)
        {
            count++;
        }
    }

    // A prime number has exactly 2 divisors: 1 and itself
    if(count == 2)
    {
        printf("prime\n");       
    }
    else{
        ("not prime\n");
    }
    return 0;
} 
// question solution
