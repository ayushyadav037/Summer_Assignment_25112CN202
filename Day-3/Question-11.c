/*
  problem:
  Write a program to find GCD of two numbers.
*/
#include<stdio.h>
int main()
{
    int a, b, temp;

    // Ask the user to enter two integer numbers
    printf("enter two numbers: ");
    scanf("%d%d",&a ,&b);

    // Loop continues until second number becomes 0
    while(b != 0)
    {

    
        temp=b;    //store the value of b temporarily
        b = a % b;    //find the reminder of divided by b
        a = temp;    // Assign the old value of b to a
    }

    // The remaining value in 'a' is the final GCD
    printf("The GCD is: %d\n",a);

    return 0;

}


