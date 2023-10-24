#include <stdio.h>

int main() {
    char name[50];
    int grade;

    printf("Enter your name: ");
    scanf("%49[^\n]s", name); // Read up to 49 characters until a newline is encountered

    printf("Enter your grade: ");
    scanf("%d", &grade);

    printf("Name: %s\n", name);
    printf("Grade: %d\n", grade);

    return 0;
}
