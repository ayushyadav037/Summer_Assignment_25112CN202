/*
problem:
write a program to print reverse star pattern.
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i,j,n;

    //get input
    printf("enter the number of rows: ");
    scanf("%d", &n);

    //loop for rows
    for(i=n;i>=1;i--)
    {
        //print star in current row
        for(j=1;j<=i;j++)
        {  
            printf("*");
        } 
        
        //move in next line
        printf("\n");  
    }
    return 0;
    
}