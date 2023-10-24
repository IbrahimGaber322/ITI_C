#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
