#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        double squareRoot = sqrt(num);
        if (squareRoot == (int)squareRoot) {
            printf("%d is a perfect square.\n", num);
        } else {
            printf("%d is not a perfect square.\n", num);
        }
    }

    return 0;
}
