#include <stdio.h>
#include <math.h>

int isPowerOfSquare(int z) {
    if (z <= 1) {
        return 0; // Special case: 1 cannot be expressed as a square power
    }

    for (int p = 2; p * p <= z; p++) {
        int q = 2;
        while (pow(p, q) <= z) {
            if (pow(p, q) == z) {
                return 1; // z can be expressed as p^q
            }
            q++;
        }
    }

    return 0; // No such p and q found
}

int main() {
    int z;

    printf("Enter a positive integer: ");
    scanf("%d", &z);

    int result = isPowerOfSquare(z);

    if (result) {
        printf("%d can be expressed as a power of a square number.\n", z);
    } else {
        printf("%d cannot be expressed as a power of a square number.\n", z);
    }

    return 0;
}
