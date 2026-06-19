/*
problem:
write a program to transpose the matrix.
*/
#include<stdio.h>
int main()
{
    //declear matrix
    int a[100][100], b[100][100];
    //variable for rows,column and loops
    int rows,cols,i,j;
    
    //get input size of matrix
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of column:");
    scanf("%d",&cols);

    //take matrix element
    printf("Enter matrix element :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //print orginal matrix
    printf("orginal matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //print transpose matrix
    printf("\nTranspose matrix:\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;

}