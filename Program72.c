//print all substrings of a given string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Remove newline character
        len--;
    }
    
    printf("All substrings of the given string:\n");
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}