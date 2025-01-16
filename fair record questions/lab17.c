#include <stdio.h>

int main() {
    int binaryNumber, decimalNumber = 0, base = 1, remainder;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    // Validate input
    int temp = binaryNumber;
    while (temp > 0) {
        remainder = temp % 10;
        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number.\n");
            return 1; // Exit if invalid
        }
        temp /= 10;
    }

    // Convert binary to decimal
    temp = binaryNumber;
    while (temp > 0) {
        remainder = temp % 10;
        decimalNumber = decimalNumber + remainder * base;
        temp = temp / 10;
        base = base * 2;
    }

    // Display result
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}