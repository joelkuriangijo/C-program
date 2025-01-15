/*Write a program to find occurrence and print position of a given number from a list of numbers.
Do not use array or any type of functions.*/

#include <stdio.h>
int main() 
{
    int n, target, num, position = 0, occurrence = 0;

    // Input the number of elements in the list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the target number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Input the list of numbers and check for the target
    printf("Enter the list of numbers:\n");
    for (int i = 1; i <= n; i++) 
    {
        scanf("%d", &num);
        if (num == target) 
        {
            occurrence++;
            printf("Found at position: %d\n", i);
        }
    }

    // Print the total occurrence
    if (occurrence > 0) 
    {
        printf("Total occurrences of %d: %d\n", target, occurrence);
    } 
    else 
    {
        printf("The number %d is not found in the list.\n", target);
    }

    return 0;
}