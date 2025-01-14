#include <stdio.h>
int main() 
{
    char name[50], fatherName[50], motherName[50], address[100], email[50], bloodGroup[10], nationality[20];
    int age, contactNumber;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your father's name: ");
    scanf("%s", fatherName);

    printf("Enter your mother's name: ");
    scanf("%s", motherName);

    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your contact number: ");
    scanf("%d", &contactNumber);

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your blood group: ");
    scanf("%s", bloodGroup);

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    printf("\nBio Data:\n");
    printf("Name: %s\n", name);
    printf("Father's Name: %s\n", fatherName);
    printf("Mother's Name: %s\n", motherName);
    printf("Address: %s\n", address);
    printf("Age: %d\n", age);
    printf("Contact Number: %d\n", contactNumber);
    printf("Email: %s\n", email);
    printf("Blood Group: %s\n", bloodGroup);
    printf("Nationality: %s\n", nationality);

    return 0;
}