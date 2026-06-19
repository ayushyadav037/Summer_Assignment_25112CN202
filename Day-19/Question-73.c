/*
problem:
write a program to add Matrices.
*/
#include<stdio.h>
int main()
{
    //declear three matrices
    int a[100][100], b[100][100], sum[100][100];
    //variables for rows columns and loops
    int rows, column, i, j;

    //get input matrices size from the user
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    printf("Enter the number of column: ");
    scanf("%d",&column);

    //take first matrix elements
    printf("Enter elements of first matrix :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //take second matrix elements
    printf("enter elements of second matrix :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //adding the both matrices
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    //print the result
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",sum[i][j]);
        }
        //move next line after one row
        printf("\n");
    }
    return 0;
}