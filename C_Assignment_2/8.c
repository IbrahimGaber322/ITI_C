#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // It's a prime number
}

void displayPrimesBetweenIntervals(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d\n", num);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);

    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    displayPrimesBetweenIntervals(start, end);

    return 0;
}
