#include <stdio.h>
int main()
{
    int n, num, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its occurrence: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            count++;
        }
    }
    printf("The number %d occurred %d times in the array.\n", num, count);
    return 0;
}