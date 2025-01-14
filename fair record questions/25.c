#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Error! Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResultant matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}