/*
problem:
write a program to print character pyramid.
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<stdio.h>
int main()
{
    //initialize with n=number of rows given by the user,i=row counter,j=character counter
    int n,i,j;

    //get input
    printf("enter the number of rows: ");
    scanf("%d",&n);

    //repeat in each row
    for(i=1;i<=n;i++)
    {
        //print space
        for(j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        //print a current character
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        //print previous character in reverse
        for(j=i-1;j>=1;j--)
        {
             printf("%c",'A'+j-1);
        }
        //go to next line
        printf("\n");
    }

    return 0;
}