#include <stdio.h>
int i = 10; // Global variable
void main() {
    int i = 20, n; // Local variable
    for (n = 0; n <= i; n++) {
        int i = 10; // Inner scope variable
        i++;
    }
    printf("%d", i);
}
