#include <stdio.h>

double performOperation(char operation, double num1, double num2, int *error) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                *error = 1; // Division by zero error
                return 0.0;
            }
        default:
            *error = 2; // Invalid operation error
            return 0.0;
    }
}

int main() {
    char operation;
    double num1, num2;
    int error = 0;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double result = performOperation(operation, num1, num2, &error);

    if (error == 0) {
        printf("Result: %.2lf\n", result);
    } else if (error == 1) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Error: Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}
