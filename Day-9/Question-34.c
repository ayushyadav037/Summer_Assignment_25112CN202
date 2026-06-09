/*
problem:
write a program print reverse number triangle.
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
    //initialize with i=row counter, j= number counter, n= number of rows
    int i,j,n;

    // get input
    printf("enter the number of rows :" );
    scanf("%d", &n);

    // using loop for row
    for(i=n;i>=1;i--)
    {
         // print numbers in current row
        for(j=1;j<=i;j++)
        { 
            printf("%d", j);
        }

        //go to next line
        printf("\n");

    }
      
 return 0; 

}