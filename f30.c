#include <stdio.h>
#include <string.h>

int main() {
    char s1[30] = "New ";
    char s2[] = "Delhi";

    // Concatenate strings
    strcat(s1, s2);

    printf("Concatenated String: %s\n", s1);

    return 0;
}
