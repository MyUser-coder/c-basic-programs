#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[15];
    int i, c1 = 0, c2 = 0, c3 = 0;

    printf("Enter a string (max 15 characters): ");
    gets(str);  // Read string input

    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) // Check if alphabetic
            c1++;
        else if (isdigit(str[i])) // Check if digit
            c2++;
        else // Special characters
            c3++;
    }

    printf("Alphabets: %d\n", c1);
    printf("Digits: %d\n", c2);
    printf("Special Characters: %d\n", c3);

    return 0;
}
