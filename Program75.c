//rotate a string left by n positive
#include <stdio.h>
#include <string.h>
void rotateLeft(char *str, int n) {
    int len = strlen(str);
    n = n % len; // Handle cases where n > length of string
    char temp[100];

    // Copy first n characters to temp
    for(int i = 0; i < n; i++) {
        temp[i] = str[i];
    }

    // Shift the remaining characters to the left
    for(int i = n; i < len; i++) {
        str[i - n] = str[i];
    }

    // Append the first n characters at the end
    for(int i = 0; i < n; i++) {
        str[len - n + i] = temp[i];
    }
    str[len] = '\0'; // Null-terminate the string
    return 0;
}