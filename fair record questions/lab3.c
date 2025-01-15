/*Write a program to find out NCR factor of given number. Using loop. Do not use functions.
[Hint: find n! , r! and (n-r)! . then find the NCR = n!/r!x(n-r)!*/

#include <stdio.h>
int main() 
{
    int n, r, i;
    long long n_factorial = 1, r_factorial = 1, n_r_factorial = 1;

    // Input values for n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Check if r is greater than n
    if (r > n) {
        printf("Error: r cannot be greater than n\n");
        return 1;
    }

    // Calculate n!
    for (i = 1; i <= n; i++) {
        n_factorial *= i;
    }

    // Calculate r!
    for (i = 1; i <= r; i++) {
        r_factorial *= i;
    }

    // Calculate (n-r)!
    for (i = 1; i <= (n - r); i++) {
        n_r_factorial *= i;
    }

    // Calculate nCr
    long long nCr = n_factorial / (r_factorial * n_r_factorial);

    printf("The value of nCr is: %lld\n", nCr);

    return 0;
}