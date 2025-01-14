#include <stdio.h>
int main() 
{
    char str[100];
    int i, j, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; j < i / 2; j++) 
    {
        if (str[j] != str[i - j - 1]) 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}