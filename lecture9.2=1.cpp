#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_strong_password(const char *password)
{
    int i, letter = 0, digit = 0, special = 0;
    size_t length = strlen(password);

    
    if (length < 6)
        return 0;

    
    for (i = 0; password[i] != '\0'; i++) {
        if (isalpha(password[i]))
            letter = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else if (ispunct(password[i]))
            special = 1;
    }

    return (letter && digit && special);
}

int main()
{
    char password[50];
    
    printf("Create your password: ");
    fgets(password, sizeof(password), stdin);
    
    
    password[strcspn(password, "\n")] = '\0';

    if (is_strong_password(password))
        printf("Your password is Strong.\n");
    else
        printf("Your password is not Strong.\n");
        


    return 0;
}
