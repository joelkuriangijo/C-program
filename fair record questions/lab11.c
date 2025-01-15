/*Write C program to print Fibonacci Series.*/

#include <stdio.h>
int main() 
{
    int n,a= 0,b= 1,m,i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ",m);
        a = b;
        b = m;
        m = a + b;
    }

    printf("\n");
    return 0;
}