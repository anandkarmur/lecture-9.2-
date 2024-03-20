#include <stdio.h>
#include <string.h>

int main()
{
    
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";

    
    char email[50];
    char password[50];

    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);

    
    if (strcmp(email, desired_email) == 0 && strcmp(password, desired_password) == 0)
    {
        printf("Login Successful...\n");
    } 
	else 
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}
