#include <stdio.h>
#include <windows.h>
#include <time.h>

// Function to set the cursor position to (x, y)
void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to introduce a delay in milliseconds
void delay(int number_of_seconds)
{
    // Converting seconds into milliseconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing the start time
    clock_t start_time = clock();

    // Looping until the required time is achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void main()
{
    int ok = 0;
    int n = 0;

    fflush(stdin);

    // Prompt the user to enter a valid magic box size (odd number: 3-90)
    while (ok == 0)
    {
        printf("Enter magic box size (odd number: 3-90): ");
        if (scanf("%d", &n) == 1)
        {
            if (n % 2 != 0 && n >= 3 && n == (int)n && n <= 90)
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

    ok = 0;
    fflush(stdin);

    int row = 1;
    int col = (n + 1) / 2;
    int num = 1;
    int maxNum = n * n;

    // Loop to fill and display the magic box
    while (num <= maxNum)
    {
        gotoxy(col * n, row);

        // Display the number with padding
        printf("%*d", n, num);

        // Introduce a 1 millisecond delay
        delay(1);

        if (num % n == 0)
        {
            row++;
        }
        else
        {
            row--;
            col--;
        }

        if (row == 0)
        {
            row = n;
        }
        if (col == 0)
        {
            col = n;
        }

        num++;
    }


}
