/*Write a C program to find the largest element in an array.*/

#include <stdio.h>
int main() 
{
    int n,i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the size is valid
    if (n <= 0) 
    {
        printf("Error: Array size must be a positive integer.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Find the largest element in the array
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}