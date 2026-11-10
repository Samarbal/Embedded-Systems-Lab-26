// Student Grades Analysis
#include <stdio.h>

float calcAverage(int grades[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }

    return (float)sum / size;
}

int findHighest(int grades[], int size) {
    int highest = grades[0];

    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }

    return highest;
}

void main() {
    int grades[5];

    printf("Enter grades of 5 students:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &grades[i]);
    }

    float average = calcAverage(grades, 5);
    int highest = findHighest(grades, 5);

    printf("Average = %.2f\n", average);
    printf("Highest Grade = %d\n", highest);


}
