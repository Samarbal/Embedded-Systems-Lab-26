// max number of an array
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }}
    return max;
}

void main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]); }

    printf("Maximum = %d\n", findMax(numbers, 5));

}
