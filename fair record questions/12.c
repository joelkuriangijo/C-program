#include <stdio.h>

int main() 
{
    int n,i,num,lar,sma;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("enter a positive number\n");
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    lar = sma = num;
    for (i = 2; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > lar)
        {
            lar = num;
        }
        if (num < sma) 
        {
            sma = num;
        }
    }
    printf("\nLargest number: %d\n", lar);
    printf("Smallest number: %d\n", sma);

    return 0;
}