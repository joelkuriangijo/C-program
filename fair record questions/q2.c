#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n; // Base case: return n if n is 0 or 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

// Function to print the Fibonacci series up to a given limit
void printFibonacciSeries(int limit) 
{
    if (limit < 0) 
    {
        printf("Invalid input. Please enter a positive number.\n");
        return;
    }

    printf("Fibonacci series up to %d:\n", limit);
    int i = 0;
    while (1) 
    {
        int fibValue = fibonacci(i);
        if (fibValue > limit) 
        {
            break; // Stop if the Fibonacci number exceeds the limit
        }
        printf("%d ", fibValue);
        i++;
    }
    printf("\n"); // Print a new line after the series
}

int main() 
{
    int limit;

    // Prompt the user for input
    printf("Enter a positive number to print Fibonacci series up to: ");
    if (scanf("%d", &limit) != 1 || limit < 0) 
    {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    // Print the Fibonacci series
    printFibonacciSeries(limit);

    return 0; // Exit the program successfully
}