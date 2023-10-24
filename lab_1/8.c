#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 15;
    int num3 = 5;
    int largest;

    if (num1 >= num2 && num1 >= num3)
        largest = num1;
    else if (num2 >= num1 && num2 >= num3)
        largest = num2;
    else
        largest = num3;

    printf("The largest number is %d\n", largest);

    return 0;
}
