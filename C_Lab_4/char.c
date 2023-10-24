

int terminator()
{
    char input[100];
    char c;
    int i = 0;
    int breaker = 1;

    printf("Enter a string (press Enter to finish): ");

    while (1 == breaker)
    {
        c = getchar();

        if (c == '\n')
        {
            input[i] = '\0';
            breaker = 0;
        }
        else
        {
            input[i] = c;
            i++;
        }
    }

    printf("You entered: %s\n", input);

    return 0;
}
