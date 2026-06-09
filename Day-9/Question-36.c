/*
problem:
write a program to print hollow square pattern.
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main()
{
    int i,n,j;

    //get input
    printf("enter the size:");
    scanf("%d",&n);
    
    // loop for row
    for(i=1;i<=n;i++)
    {
        //loop for column
        for(j=1;j<=n;j++)
        {
            //print stars on boundry
            if(i==1||i==n||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //go to next line
        printf("\n");
    }
    return 0;
}
