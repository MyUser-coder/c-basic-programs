#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello";

    // Compare strings
    if (strcmp(s1, s2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are different\n");
    }

    return 0;
}

