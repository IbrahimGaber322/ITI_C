int frequency() {
    char inputString[1000];
    int characterCount[128] = {0};

    printf("Enter a string: ");
    gets(inputString);

    for (int i = 0; inputString[i] != '\0'; i++) {
        int asciiValue = (int)inputString[i];
        characterCount[asciiValue]++;
    }

    printf("Character frequencies in the string:\n");
    for (int i = 0; i < 128; i++) {
        if (characterCount[i] > 0) {
            printf("'%c' : %d times\n", i, characterCount[i]);
        }
    }

    return 0;
}
