#include <stdio.h>

int main() {
    int dividend = 20;
    int divisor = 3;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
