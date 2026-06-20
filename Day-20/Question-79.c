/*
problem:
write a program to find row wiise sum.
*/
#include<stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int rows, cols;
    int i, j, sum;

    //gwt input rows and columns
    printf("Enter the number of rows and column of the matrices:");
    scanf("%d%d",&rows,&cols);

    //input the matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    //finding the row wise sum
    printf("\nRow wise sum:\n");
    for(i=0;i<rows;i++)
    {
        sum=0;//reset sum for each row
        for(j=0;j<cols;j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sumof row %d = %d\n",i+1,sum);
    }
    return 0;
}