//write a program to find the ASCII value of a character in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("ASCII values of characters in the string:\n");
    for(int i = 0; i < strlen(str); i++) {
        printf("Character: %c, ASCII: %d\n", str[i], str[i]);
    }
    
    return 0;
}
