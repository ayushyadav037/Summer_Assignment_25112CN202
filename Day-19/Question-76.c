/*
problem:
write a program to find diagonol sum.
*/
#include <stdio.h>

int main()
{
    // Declare matrix
    int a[100][100];

    // Variables
    int rows, cols, i, j, sum=0;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Check if matrix is square
    if(rows != cols)
    {
        printf("Diagonal sum is possible only for a square matrix.");
        return 0;
    }

    // Input matrix elements
    printf("\nEnter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find diagonal sum
    for(i = 0; i < rows; i++)
    {
        sum = sum + a[i][i];
    }

    // Print result
    printf("\nDiagonal Sum = %d", sum);

    return 0;
}