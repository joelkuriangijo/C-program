/*Write a c program for multiplication of two matrices. Using user defined functions 
for read, write, and product. Pass parameters. Do not use any library functions. 
Check all validations.*/

#include <stdio.h>

// Function to read a matrix
void readMatrix(int rows, int cols, int matrix[rows][cols]) 
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to write a matrix
void writeMatrix(int rows, int cols, int matrix[rows][cols]) 
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1],
                      int rows2, int cols2, int matrix2[rows2][cols2],
                      int result[rows1][cols2]) 
                      
                      {
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() 
{
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Validate if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Error: Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    // Read matrices
    printf("For the first matrix:\n");
    readMatrix(rows1, cols1, matrix1);
    printf("For the second matrix:\n");
    readMatrix(rows2, cols2, matrix2);

    // Multiply matrices
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

    // Write result
    printf("Resultant matrix after multiplication:\n");
    writeMatrix(rows1, cols2, result);

    return 0;
}