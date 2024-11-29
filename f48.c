#include <stdio.h>
int main() {
    float avg_marks;
    printf("Enter average marks: ");
    scanf("%f", &avg_marks);
    if (avg_marks > 80)
        printf("Grade: A\n");
    else if (avg_marks > 60)
        printf("Grade: B\n");
    else if (avg_marks > 40)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");
    return 0;
}
