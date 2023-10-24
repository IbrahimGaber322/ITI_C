#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    result = ((num1 + num2) * 3) - 10;

    printf("Result: %d\n", result);

    return 0;
}
