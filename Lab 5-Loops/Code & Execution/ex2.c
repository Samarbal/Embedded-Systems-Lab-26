// Sum from 1 to N
#include <stdio.h>
void main() {
    int number, i = 1;
    int sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (i <= number) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);
}
