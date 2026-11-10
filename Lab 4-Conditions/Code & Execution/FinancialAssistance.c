
#include <stdio.h>

void main() {
    char name[50];
    float salary;
    int children;

    printf("Enter the Name Employee: ");
    scanf("%s", name);

    printf("Enter The Salary: ");
    scanf("%f", &salary);

    printf("Enter The Number Of children: ");
    scanf("%d", &children);

    if (salary <= 1000 && children > 4) {
        printf("The employee deserves help\n");
    }
    else {
        printf("The employee does not deserve help\n");
    }

    
}
