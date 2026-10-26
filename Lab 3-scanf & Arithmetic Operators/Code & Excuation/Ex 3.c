#include <stdio.h>
void main() {
    float fahrenheit;
    float celsius;

    // 1. let the user enter the temperature in Fahrenheit
    printf("Enter the Degree Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // 2. calculate the temperature in Celsius using the formula
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    // 3. print the results in the required format
    printf("The Degree Fahrenheit is : %.2f\n", fahrenheit);
    printf("The Degree Celsius is : %.2f\n", celsius);

}