int ascii() {
    char ch;
    int asciiValue;

    printf("Enter a character: ");

    ch = getchar();

    asciiValue = ch;

    if (ch == 27) {
        printf("Extended key (ASCII value: %d)\n", asciiValue);
    } else {
        printf("Normal key (ASCII value: %d)\n", asciiValue);
    }

    return 0;
}
