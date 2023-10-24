int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int length() {
    char inputString[] = "Hello, World!";
    int length = stringLength(inputString);

    printf("The length of the string is: %d\n", length);

    return 0;
}
