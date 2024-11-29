// Problem: Write a program to find the largest number in an array of integers.
#include <stdio.h>

int main() {
    int n, i, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    return 0;
}

