#include <stdio.h>
int main() {
    float num = 23.15789;
    printf("%+08.2f\n", num); // Output: +023.16 (zero-padded, sign shown)
    printf("%-8.2f\n", num);  // Output: 23.16   (left-justified)
    return 0;
}
