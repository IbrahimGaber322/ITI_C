#include <stdio.h>

int main() {
    int percentage;

    printf("Enter the student's grade percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 85) {
        printf("Excellent\n");
    } else if (percentage >= 75) {
        printf("Very Good\n");
    } else if (percentage >= 65) {
        printf("Good\n");
    } else if (percentage >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
