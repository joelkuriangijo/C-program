#include <stdio.h>
int main() 
{
    char name[50];
    int mark1, mark2, mark3, total;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter mark of subject 1: ");
    scanf("%d", &mark1);
    printf("Enter mark of subject 2: ");
    scanf("%d", &mark2);
    printf("Enter mark of subject 3: ");
    scanf("%d", &mark3);

    total = mark1 + mark2 + mark3;

    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Total Mark: %d\n", total);

    return 0;
}