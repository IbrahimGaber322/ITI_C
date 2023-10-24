#include <stdio.h>
#include <ctype.h>

char convertToLowerToUpper(char character) {
    if (islower(character)) {
        return toupper(character);
    } else {
        return character;  // Return the original character if it's not lowercase
    }
}

int main() {
    char ch, converted;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    converted = convertToLowerToUpper(ch);

    printf("Uppercase equivalent: %c\n", converted);

    return 0;
}
