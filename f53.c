#include <stdio.h>
int main() {
    float x, y;
    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
        printf("Point lies in the first quadrant.\n");
    else if (x < 0 && y > 0)
        printf("Point lies in the second quadrant.\n");
    else if (x < 0 && y < 0)
        printf("Point lies in the third quadrant.\n");
    else if (x > 0 && y < 0)
        printf("Point lies in the fourth quadrant.\n");
    else
        printf("Point lies on the axis.\n");
    return 0;
}
