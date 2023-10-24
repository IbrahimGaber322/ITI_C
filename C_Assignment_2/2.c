#include <stdio.h>
#include <ctype.h>

int isAlphabet(char character) {
    if (isalpha(character)) {
        return 1; // The character is an alphabet
    } else {
        return 0; // The character is not an alphabet
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isAlphabet(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
