#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int asciiValue = character;

    printf("The ASCII value of '%c' is %d\n", character, asciiValue);

    return 0;
}
