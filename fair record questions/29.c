#include <stdio.h>
int factor(int n) 
{
    if (n == 0 || n == 1)
    {
        return 1;
    } 
    else
    {
        return n * factor(n - 1);
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) 
    {
        printf("Factorial of %d = %d\n", num, factor(num));
    } 
    else 
    {
        printf("Factorial of negative number doesn't exist.\n");
    }
    return 0;
}