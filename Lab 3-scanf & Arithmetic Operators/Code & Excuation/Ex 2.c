#include <stdio.h>

void main() {
    float shekels;
    float dollars;

    // 1. let the user enter the amount in shekels
    printf("Enter amount in shekels is: ");
    scanf("%f", &shekels);

    // 2. convert the amount to dollars (divide by the exchange rate 3.25)
    dollars = shekels / 3.25;

    // 3. print the result with three decimal places
    printf("The dollar amount is: %.3f\n", dollars);

   
}