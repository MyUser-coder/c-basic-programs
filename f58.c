#include <stdio.h>
void main() {
    int i = 20, j, k = 0;
    for (j = 1; j > i; j++) { // Condition is false
        k += j < 10 ? 4 : 3;
    }
    printf("%d", k);
}
