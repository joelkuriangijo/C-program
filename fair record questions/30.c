#include <stdio.h>

// Direct Recursion: Function calls itself directly
void direct(int n) 
{
    if (n > 0) 
    {
        printf("Direct: %d\n", n);
        direct(n - 1); // Direct recursive call
    }
}

// Indirect Recursion: Function A calls Function B, and Function B calls Function A
void functionA(int n);
void functionB(int n);

void functionA(int n)
{
    if (n > 0)
    {
        printf("Indirect A: %d\n", n);
        functionB(n - 1); // Call to functionB (indirect recursion)
    }
}

void functionB(int n) 
{
    if (n > 1)
    {
        printf("Indirect B: %d\n", n);
        functionA(n / 2); // Call back to functionA (indirect recursion)
    }
}

int main() 
{
    int num = 5;
    // Direct Recursion Example
    printf("Direct Recursion Example:\n");
    direct(num);

    // Indirect Recursion Example
    printf("\nIndirect Recursion Example:\n");
    functionA(num);

    return 0;
}