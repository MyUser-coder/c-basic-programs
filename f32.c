#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[] = "Welcome to GitHub!";

    // Copy string
    strcpy(s1, s2);

    printf("Copied String: %s\n", s1);

    return 0;
}

