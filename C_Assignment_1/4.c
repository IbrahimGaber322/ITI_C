#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area and circumference
    area = M_PI * radius * radius; // M_PI is a constant for pi
    circumference = 2 * M_PI * radius;

    printf("Area of the circle with radius %.2lf is %.2lf\n", radius, area);
    printf("Circumference of the circle with radius %.2lf is %.2lf\n", radius, circumference);

    return 0;
}
