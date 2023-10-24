#include <stdio.h>

void printCube(int number) {
    int cube = number * number * number;
    printf("The cube of %d is: %d\n", number, cube);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printCube(num);

    return 0;
}
