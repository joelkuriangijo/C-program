/*Write a program to enter a list of numbers and check and print the prime number from the list do not use array
and library functions.*/

#include <stdio.h>
int main() 
{
    int num, count, i,j,prime;

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        prime = 1;
        for (j = 2; j < num; j++) 
        {
            if (num % j == 0) 
            {
                prime = 0;
                break;
            }
        }

        if (num > 1 && prime == 1) 
        {
            printf("%d is a prime number.\n", num);
        }
    }

    return 0;
}