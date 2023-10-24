#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max to the first element of the array
    int min = arr[0];
    int max = arr[0];

    // Iterate through the array to find the minimum and maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}
