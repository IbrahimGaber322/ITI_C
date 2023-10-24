#include <stdio.h>

int isPowerOfTwo(int number) {
    if (number <= 0) {
        return 0; // Not a power of 2 (including 0)
    }

    return (number & (number - 1)) == 0;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = isPowerOfTwo(num);

    if (result == 1) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}
