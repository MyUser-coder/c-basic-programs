#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 2.7, num2 = 2.3;

    printf("Floor of %.1f: %f\n", num1, floor(num1)); // Largest integer <= x
    printf("Floor of %.1f: %f\n", num2, floor(num2)); // Largest integer <= x
    printf("Ceil of %.1f: %f\n", num1, ceil(num1));  // Smallest integer >= x
    printf("Ceil of %.1f: %f\n", num2, ceil(num2));  // Smallest integer >= x

    return 0;
}

