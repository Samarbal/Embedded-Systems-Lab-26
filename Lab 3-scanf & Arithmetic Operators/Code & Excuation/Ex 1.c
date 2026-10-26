#include <stdio.h>

void main() {
    // 1.declare variables to store user information 
    char fullName[100];
    int age;
    char dateOfBirth[30];
    char uniNumber[20];
    float gpa;
    char uniName[100];
    char collegeName[100];
    char maritalStatus[20];

    // 2. let the user enter their information using scanf 
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fullName);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf("%s", dateOfBirth);

    printf("Enter University Number: ");
    scanf(" %[^\n]", uniNumber);

    printf("Enter Cumulative GPA: ");
    scanf("%f", &gpa);

    printf("Enter University Name: ");
    scanf(" %[^\n]", uniName);

    printf("Enter College Name: ");
    scanf(" %[^\n]", collegeName);

    printf("Enter Marital Status (Married/Single): ");
    scanf("%s", maritalStatus);

    // 3. print all the information using a single printf statement
    printf("\n--- Personal Information ---\nFull Name: %s\nAge: %d\nDate of Birth: %s\nUniversity Number: %s\nCumulative GPA: %.2f\nUniversity Name: %s\nCollege Name: %s\nMarital Status: %s\n",
           fullName, age, dateOfBirth, uniNumber, gpa, uniName, collegeName, maritalStatus);

}