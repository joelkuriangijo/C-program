/*Write a C program to find factorial of a no using recursion.*/

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1; // Base case: factorial of 0 or 1 is 1
    } 
    else 
    {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() 
{
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) 
    {
        printf("Error: Factorial of a negative number is not defined.\n");
    } 
    else 
    {
        // Calculate factorial using recursion
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}