/*Print the following patterns using loop. Do not use array and library functions.
1
12
123
1234
1 2 3 4 5 ... n rows*/

#include <stdio.h>
int main() 
{
    int n;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the pattern
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j); // Print the number
            if (j < i) 
            {
                printf(" "); // Print a space between numbers (except the last one)
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}