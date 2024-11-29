#include <stdio.h>
void main() {
    int i, j = 1;
    for (i = 0; i < 10; i++); // Note the semicolon ending the loop
    {
        j = j + 1;
    }
    printf("%d %d", i, j);
}
