#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);

    int smallest = num1;  // Assume the first number is the smallest initially

    if (num2 < smallest) {
        smallest = num2;  // Update smallest if num2 is smaller
    }

    if (num3 < smallest) {
        smallest = num3;  // Update smallest if num3 is smaller
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
