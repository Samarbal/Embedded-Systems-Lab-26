// calculate the average of an array of grades

#include <stdio.h>

float findAverage(int grades[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }

    return (float)sum / size;
}

void main() {
    int grades[5];

    printf("Enter 5 grades:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &grades[i]);
    }

    float average = findAverage(grades, 5);

    printf("Average = %.2f\n", average);
}
