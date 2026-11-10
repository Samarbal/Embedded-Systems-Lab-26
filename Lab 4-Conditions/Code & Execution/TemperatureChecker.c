
#include <stdio.h>

void main() {
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("It's Freezing, stay home.\n");
    }
    else if (temperature <= 20) {
        printf("It's Cold, wear a jacket.\n");
    }
    else if (temperature <= 30) {
        printf("The Weather is nice today.\n");
    }
    else {
        printf("It's hot, stay hydrated.\n");
    }
}
 