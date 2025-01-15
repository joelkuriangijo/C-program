/*Write a c program to find sum of first and last digits of a number, if the first digit is even number, using
while. Do not use array and library functions.*/

#include <stdio.h>

// Function to find the first digit of a number
int findFirstDigit(int num) 
{
    while (num >= 10) 
    {
        num /= 10;
    }
    return num;
}

// Function to find the last digit of a number
int findLastDigit(int num) 
{
    return num % 10;
}

int main() 
{
    int num,sum,lastDigit,firstDigit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) 
    {
        printf("Error: Number cannot be negative.\n");
        return 1;
    }

    // Find the first digit
    firstDigit = findFirstDigit(num);

    // Check if the first digit is even
    if (firstDigit % 2 == 0) 
    {
        // Find the last digit
        lastDigit = findLastDigit(num);

        // Calculate the sum of the first and last digits
        sum = firstDigit + lastDigit;

        printf("The sum of the first and last digits is: %d\n", sum);
    }  
    else 
    {
        printf("The first digit is not even.\n");
    }

    return 0;
}