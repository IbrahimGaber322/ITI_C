#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        return 1; // 0 has one digit
    }

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    int num, digitCount;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    digitCount = countDigits(num);

    printf("Number of digits in %d: %d\n", num, digitCount);

    return 0;
}
