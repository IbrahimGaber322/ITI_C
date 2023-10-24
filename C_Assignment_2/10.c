#include <stdio.h>
#include <string.h>

int countHoles(char digit) {
    switch (digit) {
        case '0':
        case '4':
        case '6':
        case '9':
            return 1;
        case '8':
            return 2;
        default:
            return 0;
    }
}

void printNumberWithStyle(char number[]) {
    int totalHoles = 0;

    printf("Number with style: ");

    for (int i = 0; i < strlen(number); i++) {
        int holes = countHoles(number[i]);
        totalHoles += holes;

        for (int j = 0; j < holes; j++) {
            printf("O"); // Print 'O' for each hole
        }

        if (i < strlen(number) - 1) {
            printf(" "); // Add a space between digits
        }
    }

    printf("\nTotal number of holes: %d\n", totalHoles);
}

int main() {
    char number[100];

    printf("Enter a number: ");
    scanf("%s", number);

    printNumberWithStyle(number);

    return 0;
}
