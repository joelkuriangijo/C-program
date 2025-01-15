/*Write a program to find occurrence of each element from a list of number using array. Use user
defined functions (occurrence) pass parameters*/

#include <stdio.h>

// Function to find the occurrence of each element
void occurrence(int arr[], int size, int num[], int count[]) 
{
    int i, j;
    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count[i]++;
            }
        }
    }

    // Remove duplicates and store unique numbers in num array
    int k = 0;
    for (i = 0; i < size; i++) 
    {
        int flag = 0;
        for (j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        {
            num[k] = arr[i];
            k++;
        }
    }

    // Print the occurrence of each element
    printf("Occurrence of each element:\n");
    for (i = 0; i < k; i++) 
    {
        printf("%d: %d\n", num[i], count[i]);
    }
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], num[size], count[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }

    occurrence(arr, size, num, count);

    return 0;
}