#include <stdio.h>
#include <math.h>

int addAndFloor(float num1, float num2) {
    float sum = num1 + num2;
    int floorSum = (int)sum; // Cast to int to get the floor value

    return floorSum;
}

int main() {
    float num1, num2;
    int floorSum;

    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    floorSum = addAndFloor(num1, num2);

    printf("Floor of the sum: %d\n", floorSum);

    return 0;
}
