/*
problem:
write a program to subtract matrices.
*/
#include <stdio.h>

int main()
{
    // Declare three matrices
    int a[100][100], b[100][100], sum[100][100];

    // Variables for rows, columns and loops
    int rows, cols, i, j;

    // Take matrix size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Take first matrix elements
    printf("\nEnter elements of First Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Take second matrix elements
    printf("\nEnter elements of Second Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract  both matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] - b[i][j];
        }
    }

    // Print answer matrix
    printf("\nSubtraction of Matrices:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }

        // Move to next line after one row
        printf("\n");
    }
    return 0;
}