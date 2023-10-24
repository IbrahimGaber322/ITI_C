#include <stdio.h>
#define SIZE 100
int main() {
    int n = SIZE; // Size of the array
     int ok = 0;
     fflush(stdin);


    while (ok == 0)
    {
         printf("Enter the size of the array(1-50): ");
        if (scanf("%d", &n) == 1)
        {
            if (n >= 1 && n == (int)n && n <= 50)
            {
                ok = 1;
            }
            else
            {
                fflush(stdin);
                system("cls");
            }
        }
        else
        {
            fflush(stdin);
            system("cls");
        }
    }



    int arr[n]; // Declare an array of size 'n'

    // Input loop: take elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output loop: print the elements
    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
