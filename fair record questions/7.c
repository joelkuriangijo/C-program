#include<stdio.h>
int main()
{
    int mark;
    char grade;
    printf("Enter your marks: ");
    scanf("%d", &mark);
    if(mark>=90)
    {
        grade='A';
    }
    else if(mark>=80)
    {
        grade='B';
    }
    else if (mark>=70)
    {
        grade='C';
    }
    else if(mark>=60)
    {
        grade='D';
    }
     else
    {
        grade='F';
    }
    switch (grade)
    {
    case 'A':
    {
        printf("Grade: A\n");
        break;
    }
    case'B':
    {
        printf("Grade: B\n");
        break;
    }
    case'C':
    {
        printf("Grade: C\n");
        break;
    }
    case'D':
    {
        printf("Grade: D\n");
        break;
    }
    default:
    {
        printf("Fail\n");
    }

    }

}