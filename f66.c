#include <stdio.h>
int main() {
    int num = 25;
    printf("%04d\n", num);  // Output: 0025 (zero padding)
    printf("%-4d\n", num);  // Output: 25   (left justified)
    printf("%+4d\n", num);  // Output:  +25 (always shows sign)
    return 0;
}
