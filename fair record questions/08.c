#include <stdio.h>
int main() 
{
    int ctr = 0, num = 1;

    printf("First 50 even numbers:\n");

    while (ctr < 50) 
    {
        if (num % 2 == 0) 
        { 
            printf("%d\n", num);
            ctr++;
        }
        num++;
    }

    printf("\n");

    return 0;
}