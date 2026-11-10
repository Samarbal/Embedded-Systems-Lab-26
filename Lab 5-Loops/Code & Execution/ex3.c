// Repeat until number reaches 100

#include <stdio.h>

void main() {
    int number;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

    } while (number < 100);

    printf("Loop finished.\n");
}
