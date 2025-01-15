/*Write a c program to print the factorial of a given no.*/

#include <stdio.h>

int main() 
{
    int num;
    long long factorial = 1; // Use long long to handle large factorials

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
        // Calculate factorial using a loop
        for (int i = 1; i <= num; i++) 
        {
            factorial *= i;
        }

        // Print the factorial
        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}