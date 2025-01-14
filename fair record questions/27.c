#include <stdio.h>
#include <math.h>
void findRoots(float a, float b, float c) 
{
    float discriminant, root1, root2, real, imaginary;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    } 
    else 
    {
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root2 = %.2f - %.2fi\n", real, imaginary);
    }
}
int main() 
{
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}