#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent < 0) {
        // Handle negative exponents
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}
