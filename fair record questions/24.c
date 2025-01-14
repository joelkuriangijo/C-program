#include <stdio.h>
int main() 
{
    int rows, cols, i, j;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}