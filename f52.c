#include <stdio.h>
int main() {
    float bmi;
    printf("Enter Body Mass Index (BMI): ");
    scanf("%f", &bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi <= 24.9)
        printf("Normal weight\n");
    else
        printf("Overweight\n");
    return 0;
}
