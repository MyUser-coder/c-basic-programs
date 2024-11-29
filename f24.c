#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[15];
    int i;

    printf("Enter a string: ");
    gets(str);  // Read string input

    for (i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);  // Convert to uppercase
    }

    printf("Uppercase String: ");
    puts(str);

    return 0;
}
