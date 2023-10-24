#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in degrees Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
