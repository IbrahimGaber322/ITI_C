#include <stdio.h>

int checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        return 0; // Even number
    } else {
        return 1; // Odd number
    }
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = checkEvenOrOdd(num);

    if (result == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
