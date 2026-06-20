/*
problem:
write a program to multiply matrices.
*/
#include<stdio.h>
int main()
{
    //declare matrices 
    int a[100][100], b[100][100], result[100][100];
    //variables for rows, column and loop
    int r1, c1, r2, c2, i, j, k;

    //get input row and column for first matrix
    printf("enter rows and columns for the first matrices:");
    scanf("%d%ds",&r1,&c1);

    //get input row and column for second matrix
    printf("enter rows and coumns for the second matrix:");
    scanf("%d%d",&r2,&c2);

    //matrix multiplication condition
    if(c1!=r2)
    {
        printf("<<<MATRIX MULTIPLICATION IS NOT POSSIBLE>>>");
        return 0;
    }
    //input elements for first matrix
    printf("enter the elements of first matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input element for second matrix
    printf("enter the elements of the second matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    //multiply matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j];
            for(k=0;k<c1;k++)
            {
                result[i][j] = result[i][j]+(a[i][j]*b[i][j]);
            }

        }
    }
    //print result
    printf("\nMultiplication of matrices:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;


}