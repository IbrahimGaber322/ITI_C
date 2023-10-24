#include <stdio.h>

int isMultiple(int num1, int num2) {
    if (num2 == 0) {
        return 0; // Avoid division by zero
    }

    if (num1 % num2 == 0) {
        return 1; // num1 is a multiple of num2
    } else {
        return 0; // num1 is not a multiple of num2
    }
}

int main() {
    int num1, num2;
    int result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = isMultiple(num1, num2);

    if (result == 1) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }

    return 0;
}
