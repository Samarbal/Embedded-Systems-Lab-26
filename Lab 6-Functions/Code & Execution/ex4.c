// Reverse Array

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

void main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Original array: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }


    reverseArray(numbers, 5);

    printf("\nReversed array: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");


}
