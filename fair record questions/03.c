#include <stdio.h>
int main() 
{
    char name[50], registerNumber[20], className[20];
    int mark1, mark2, mark3, total;
    float percentage, average,total;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter register number: ");
    scanf("%s", registerNumber);

    printf("Enter class: ");
    scanf("%s", className);

    printf("Enter mark of subject 1: ");
    scanf("%d", &mark1);

    printf("Enter mark of subject 2: ");
    scanf("%d", &mark2);

    printf("Enter mark of subject 3: ");
    scanf("%d", &mark3);

    total = mark1 + mark2 + mark3;
    percentage = total / 3;
    average = total / 3;

    printf("\nGrade Card:\n");
    printf("Name: %s\n", name);
    printf("Register Number: %s\n", registerNumber);
    printf("Class: %s\n", className);
    printf("Mark of Subject 1: %d\n", mark1);
    printf("Mark of Subject 2: %d\n", mark2);
    printf("Mark of Subject 3: %d\n", mark3);
    printf("Total Mark: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Average Mark: %.2f\n", average);

    if (percentage >= 90) 
    {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) 
    {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) 
    {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) 
    {
        printf("Grade: D\n");
    } 
    else 
    {
        printf("Grade: F\n");
    }

    return 0;
}