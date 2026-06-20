/*
problem:
write a program to find column wise sum.
*/
#include<stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int rows,cols,i,j,sum;

    //get input for rows and columns
    printf("Enter the number rows and columns of matrix:");
    scanf("%d%d",&rows,&cols);

    //get input matrix elements
    printf("\nEnter the element of matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //find the column wise sum
    printf("\nColumn wise sum:\n");
    for(j=0;j<cols;j++)
    {
        sum=0; //reset sum for each column
        for(i=0;i<rows;i++)
        {
            sum = sum+a[i][j];
        }
        printf("Sum of column %d = %d\n",j+1,sum);
    }
    return 0;
}