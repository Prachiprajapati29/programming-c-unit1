//print all characters at even index positions
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Characters at even index positions:\n");
    for(int i = 0; i < strlen(str); i += 2) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}