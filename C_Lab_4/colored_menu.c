#include "main.h"

void SetColor(int ForgC)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        WORD wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int loop(int active, char menuItems[4][10])
{

    for (int i = 0; i < 4; i++)
    {
        gotoxy(0, i + 2);

        if (active == i)
        {
            SetColor(0x0C);
        }
        else
        {
            SetColor(0x07);
        }

        printf("-> %s", menuItems[i]);
    }
    return 0;
}

void coloredMenu()
{
    int active = 0;
    int key;
    char menuItems[4][10] = {"New", "Open", "Save", "Exit"};

    while (1)
    {
        system("cls");
        printf("Menu:\n\n");

        loop(active, menuItems);

        key = _getch();
        switch (key)
        {
        case 72:
            if (active > 0)
            {
                active--;
            }
            break;
        case 80:
            if (active < 3)
            {
                active++;
            }
            break;
        }

        if (key == 13)
        {

            break;
        }
    }
    printf("\nYou selected: %s\n", menuItems[active]);
}


