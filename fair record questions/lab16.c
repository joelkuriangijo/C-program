/* Input a line of text. Write a program to delete all the occurrences of vowels from it. Print the results
in good format. Do not use library functions. Use user defined functions.*/

#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) 
{
    c = c | 32; // Convert to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to delete vowels from a string
void deleteVowels(char str[]) 
{
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) 
    {
        if (!isVowel(str[i])) 
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the string
}

// Function to print a string
void printString(char str[]) 
{
    printf("%s\n", str);
}

int main() 
{
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Remove newline character

    printf("Original string: ");
    printString(str);

    deleteVowels(str);

    printf("String after deleting vowels: ");
    printString(str);

    return 0;
}