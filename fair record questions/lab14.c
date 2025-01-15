/*Write a program to find sum of elements below the diagonal elements of a matrix if the matrix is
Lower triangular matrix. Check all validations.*/

#include <stdio.h>
int main() 
{
    int matrix[10][10];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns (must be square): ");
    scanf("%d %d", &rows, &cols);

    // Check if the matrix is square
    if (rows != cols) 
    {
        printf("Error: The matrix must be square (rows = columns).\n");
        return 1;
    }

    // Read the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is lower triangular
    int isLowerTriangular = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) 
        {
            if (matrix[i][j] != 0) 
            {
                isLowerTriangular = 0;
                break;
            }
        }
        if (!isLowerTriangular) 
        {
            break;
        }
    }

    // Calculate the sum of elements below the diagonal
    int sum = 0;
    if (isLowerTriangular) 
    {
        for (int i = 1; i < rows; i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                sum += matrix[i][j];
            }
        }
    }

    // Output
    if (isLowerTriangular) 
    {
        printf("The matrix is a lower triangular matrix.\n");
        printf("The sum of elements below the diagonal is: %d\n", sum);
    } 
    else 
    {
        printf("The matrix is not a lower triangular matrix.\n");
    }

    return 0;
}