#include <stdio.h>

int checkPositiveNegative(int number) {
    if (number > 0) {
        return 1; // The number is positive
    } else if (number < 0) {
        return -1; // The number is negative
    } else {
        return 0; // The number is zero
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = checkPositiveNegative(num);

    if (result == 1) {
        printf("%d is a positive number.\n", num);
    } else if (result == -1) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}
