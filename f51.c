#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
        printf("Real roots. Points: 20\n");
    else if (discriminant == 0)
        printf("Equal roots. Points: 0\n");
    else
        printf("Imaginary roots. Points: 10\n");
    return 0;
}
