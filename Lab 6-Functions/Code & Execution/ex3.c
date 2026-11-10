// print even numbers 

#include <stdio.h>

void main() {
    int numbers[10];

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Even numbers: ");

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");

}
