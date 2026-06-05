/*
problem:
write a program to check strong number.
*/
#include<stdio.h>
int main()
{
    int n, i, temp, digit, sum=0, fact;    // variable declaration

    // get input
    printf("Enter the number: ");
    scanf("%d",&n);

    temp = n;    // orginal value save in temperory 

    // while loop used 
    while(temp > 0)
    {
        digit = temp%10;    // get last digit
        fact = 1;    // reset the factoriak
    
      for(i=1; i<=digit;i++)
      {
         fact = fact*i;    // get factorial
      }

      sum = sum+fact;    // adding the factorial
       temp= temp/10;    // removing the last digit
    }

    //check strong number
    if(sum==n)
    {
       printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }
    return 0;

    


}