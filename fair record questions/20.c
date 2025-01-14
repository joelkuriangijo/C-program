#include <stdio.h>
int main()
{
    int num, i,lar,arr[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    printf("Enter %d elements:\n", num);
    for (i = 0; i < num; i++) 
    {
        scanf("%d", &arr[i]);
    }
    lar = arr[0];
    for (i = 1; i < num; i++) 
    {
        if (arr[i] > lar) 
        {
            lar = arr[i];
        }
    }
    printf("The largest value in the array is: %d\n", lar);
    return 0;
}