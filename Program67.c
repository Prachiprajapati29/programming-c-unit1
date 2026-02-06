//count number of uppercase, lower case, digits and special characters in a string using pointer
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int upper=0, lower=0, digit=0, special=0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;
    while(*ptr != '\0') {
        if(*ptr >= 'A' && *ptr <= 'Z') {
            upper++;
        } else if(*ptr >= 'a' && *ptr <= 'z') {
            lower++;
        } else if(*ptr >= '0' && *ptr <= '9') {
            digit++;
        } else if(*ptr != ' ' && *ptr != '\n') {
            special++;
        }
        ptr++;
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);

    return 0;
}