//program to check a string is a valid idedntifier in c language
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isValidIdentifier(const char *str) {
    if (!(isalpha(str[0]) || str[0] == '_')) {
        return 0;
    }

    for (int i = 1; i < strlen(str); i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            return 0;
        }
    }
    
    return 1;
}