//program used to check username and password (username is static and password is dynamic) conditions user id is less than 8 characters and password is greater than 8 characters
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char username[20];
    char *password;
    password = (char*)malloc(20 * sizeof(char));
    if(password == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    if(strlen(username) < 8 && strlen(password) > 8) {
        printf("Login successful!\n");
    } else {
        printf("Login failed! Username must be less than 8 characters and password must be greater than 8 characters.\n");
    }
    
    free(password);
    return 0;
}