#include <stdio.h>
int main() 
{
    int n,i;
    float marks, sum = 0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        printf("Enter mark of student %d: ", i);
        scanf("%f", &marks);
        sum += marks; 
    }
    average = sum / n;

    printf("The class average is: %.2f\n", average);

    return 0;
}