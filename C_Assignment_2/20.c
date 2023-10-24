#include <stdio.h>

int isPowerOfThree(int num) {
    if (num <= 0) {
        return 1; // 0 and negative numbers are not powers of 3
    }

    while (num > 1) {
        if (num % 3 != 0) {
            return 1; // Not a power of 3
        }
        num /= 3;
    }

    return 0; // It's a power of 3
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = isPowerOfThree(num);

    if (result) {
        printf("%d is not a power of 3.\n", num);
    } else {
        printf("%d is a power of 3.\n", num);
    }

    return 0;
}
