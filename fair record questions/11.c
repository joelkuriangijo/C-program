#include <stdio.h>

int main()
{
    int number;
    char choice;

    do 
    {
        printf("Enter a single-digit number (0-9): ");
        scanf("%d", &number);
        if (number >= 0 && number <= 9) 
        {
            int square = number * number;
            printf("The square of %d is %d.\n", number, square);
        } 
        else 
        {
            printf("Please enter a valid single-digit number.\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using the program!\n");
    return 0;
}