int fullName()
{
    char firstName[50];
    char lastName[50];
    char fullName[100];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);


    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Your full name is: %s\n", fullName);

    return 0;
}
