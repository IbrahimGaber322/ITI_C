#include <stdio.h>

int calculateHeatingTime(int temperature) {
    if (temperature >= 0 && temperature < 30) {
        return 7; // Required heating time for 0-30°C
    } else if (temperature >= 30 && temperature < 60) {
        return 5; // Required heating time for 30-60°C
    } else if (temperature >= 60 && temperature < 90) {
        return 3; // Required heating time for 60-90°C
    } else if (temperature >= 90 && temperature <= 100) {
        return 1; // Required heating time for 90-100°C
    } else {
        return 0; // Invalid temperature (more than 100)
    }
}

int main() {
    int temperature, heatingTime;

    printf("Enter the water temperature in degrees Celsius: ");
    scanf("%d", &temperature);

    heatingTime = calculateHeatingTime(temperature);

    if (heatingTime > 0) {
        printf("Required heating time: %d mins\n", heatingTime);
    } else {
        printf("Invalid temperature. Please enter a valid temperature between 0 and 100°C.\n");
    }

    return 0;
}
