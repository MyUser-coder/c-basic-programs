#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%*d%d", &a, &b); // Input: 10 20 30
    printf("a = %d, b = %d\n", a, b); // Output: a = 10, b = 30 (20 is discarded)
    return 0;
}
