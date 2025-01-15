/*Write a program to find sum of elements below the diagonal elements of a matrix if the matrix is Lower
triangular matrix. Using user defined functions for read, write, checking and sum. Pass parameters. Check all
validations.*/

#include <stdio.h>

// Function to read a matrix
void readMatrix(int matrix[10][10], int rows, int cols) 
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

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols) 
{
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to check if the matrix is lower triangular
int isLowerTriangular(int matrix[10][10], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = i + 1; j < cols; j++) 
        {
            if (matrix[i][j] != 0) 
            {
                return 0; // Not a lower triangular matrix
            }
        }
    }
    return 1; // It is a lower triangular matrix
}

// Function to calculate the sum of elements below the diagonal
int sumBelowDiagonal(int matrix[10][10], int rows, int cols) 
{
    int sum = 0;
    for (int i = 1; i < rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

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
    readMatrix(matrix, rows, cols);

    // Display the matrix
    displayMatrix(matrix, rows, cols);

    // Check if the matrix is lower triangular
    if (isLowerTriangular(matrix, rows, cols)) 
    {
        printf("The matrix is a lower triangular matrix.\n");

        // Calculate the sum of elements below the diagonal
        int sum = sumBelowDiagonal(matrix, rows, cols);
        printf("The sum of elements below the diagonal is: %d\n", sum);
    } 
    else 
    {
        printf("The matrix is not a lower triangular matrix.\n");
    }

    return 0;
}