void copyString(char source[], char destination[]) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int stringCopy() {
    char source[] = "Hello, World!";
    char destination[100];

    copyString(source, destination);

    printf("Source: %s\n", source);
    printf("Copied: %s\n", destination);

    return 0;
}
