/*
  problem:
  Write a program to Print prime number in a range.
*/
#include<stdio.h>
int main()
{
    int start, end, i, j;

    // Get range from user
    printf("Enter range(start and end):");
    scanf("%d%d",&start, &end);

    // Loop through each number inthe range
    for(i = start; i <= end; i++)
    {
        // Try dividing the number i by j
        for (j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;    //Not prime stop chacking
            }
        }

        // If the loop finished naturally j = i
        if(i>1 && j==i)
        {
            printf("%d",i);
        }
    }
    return 0;
}