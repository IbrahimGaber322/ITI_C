#include <stdio.h>
#include <string.h>
#include <windows.h>

#define MAX_LINE_LENGTH 100

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void displayLine(const char line[], int cursorPosition) {
    gotoxy(0, 0);
    printf("%s", line); // Print the line
    gotoxy(cursorPosition, 0); // Move the cursor to its original position
}

int main() {
    char line[MAX_LINE_LENGTH] = "";
    int cursorPosition = 0;

    printf("Line Editor (Ctrl+C to exit)\n");

    while (1) {
        displayLine(line, cursorPosition);

        char ch = getchar();

        if (ch == EOF) {
            break; // Exit on Ctrl+C or end-of-file
        } else if (ch == '\n') {
            // Handle Enter key (newline)
            // Print the line in a new line
            printf("\n%s\n", line);
            fflush(stdin);
            memset(line, 0, sizeof(line));
            cursorPosition = 0;
        } else if (ch == '\b' || ch == 127) {
            // Handle Backspace or Delete key
            if (cursorPosition > 0) {
                memmove(&line[cursorPosition - 1], &line[cursorPosition], strlen(line) - cursorPosition + 1);
                cursorPosition--;
            }
        } else if (ch == 27) {
            // Handle Escape key (optional)
            // In a more advanced editor, you might use this for special commands.
            // For now, we'll ignore it.
        } else {
            // Handle regular characters
            if (strlen(line) < MAX_LINE_LENGTH - 1) {
                memmove(&line[cursorPosition + 1], &line[cursorPosition], strlen(line) - cursorPosition + 1);
                line[cursorPosition] = ch;
                cursorPosition++;
            }
        }
    }

    return 0;
}
