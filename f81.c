#include <stdio.h>
struct Rectangle {
    float length;
    float width;
};

float calculateArea(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    struct Rectangle rect;
    printf("Enter length of rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter width of rectangle: ");
    scanf("%f", &rect.width);
    printf("Area of Rectangle: %.2f\n", calculateArea(rect));
    return 0;
}
