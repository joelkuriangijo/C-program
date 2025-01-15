/*Write a program to check whether the given number is factorial of number. Do not use 
array, library functions and array.(hint: if we enter 25 then o/p 4, enter 120 then 
print 120 is factorial of 5)*/


#include <stdio.h>
int main() 
{
    int num, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; fact <= num; i++) 
    {
        fact *= i;
        if (fact == num) 
        {
            printf("%d is a factorial of %d\n", num, i);
            return 0;
        }
    }
    
    printf("%d is not a factorial of any number\n", num);

    return 0;
}